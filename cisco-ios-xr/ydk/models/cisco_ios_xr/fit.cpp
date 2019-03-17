
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "fit.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace fit {

Set::Set()
    :
    asic(this, {"asic_name"})
{

    yang_name = "set"; yang_parent_name = "fit"; is_top_level_class = true; has_list_ancestor = false; 
}

Set::~Set()
{
}

bool Set::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic.len(); index++)
    {
        if(asic[index]->has_data())
            return true;
    }
    return false;
}

bool Set::has_operation() const
{
    for (std::size_t index=0; index<asic.len(); index++)
    {
        if(asic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fit:set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "asic")
    {
        auto ent_ = std::make_shared<Set::Asic>();
        ent_->parent = this;
        asic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::get_children() const
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
    if(name == "asic")
        return true;
    return false;
}

Set::Asic::Asic()
    :
    asic_name{YType::str, "asic-name"}
        ,
    instance(this, {"instance_ids"})
{

    yang_name = "asic"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = false; 
}

Set::Asic::~Asic()
{
}

bool Set::Asic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return asic_name.is_set;
}

bool Set::Asic::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(asic_name.yfilter);
}

std::string Set::Asic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fit:set/" << get_segment_path();
    return path_buffer.str();
}

std::string Set::Asic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic";
    ADD_KEY_TOKEN(asic_name, "asic-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asic_name.is_set || is_set(asic_name.yfilter)) leaf_name_data.push_back(asic_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::get_children() const
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

void Set::Asic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asic-name")
    {
        asic_name = value;
        asic_name.value_namespace = name_space;
        asic_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asic-name")
    {
        asic_name.yfilter = yfilter;
    }
}

bool Set::Asic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "asic-name")
        return true;
    return false;
}

Set::Asic::Instance::Instance()
    :
    instance_ids{YType::uint32, "instance-ids"}
        ,
    fault_injection(std::make_shared<Set::Asic::Instance::FaultInjection>())
{
    fault_injection->parent = this;

    yang_name = "instance"; yang_parent_name = "asic"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::~Instance()
{
}

bool Set::Asic::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_ids.is_set
	|| (fault_injection !=  nullptr && fault_injection->has_data());
}

bool Set::Asic::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_ids.yfilter)
	|| (fault_injection !=  nullptr && fault_injection->has_operation());
}

std::string Set::Asic::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_ids, "instance-ids");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_ids.is_set || is_set(instance_ids.yfilter)) leaf_name_data.push_back(instance_ids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-injection")
    {
        if(fault_injection == nullptr)
        {
            fault_injection = std::make_shared<Set::Asic::Instance::FaultInjection>();
        }
        return fault_injection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fault_injection != nullptr)
    {
        _children["fault-injection"] = fault_injection;
    }

    return _children;
}

void Set::Asic::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-ids")
    {
        instance_ids = value;
        instance_ids.value_namespace = name_space;
        instance_ids.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-ids")
    {
        instance_ids.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-injection" || name == "instance-ids")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::FaultInjection()
    :
    module(this, {"module_name"})
{

    yang_name = "fault-injection"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::~FaultInjection()
{
}

bool Set::Asic::Instance::FaultInjection::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<module.len(); index++)
    {
        if(module[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Asic::Instance::FaultInjection::has_operation() const
{
    for (std::size_t index=0; index<module.len(); index++)
    {
        if(module[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Asic::Instance::FaultInjection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-injection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "module")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module>();
        ent_->parent = this;
        module.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::get_children() const
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

void Set::Asic::Instance::FaultInjection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "module")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::Module()
    :
    module_name{YType::str, "module-name"}
        ,
    fault_type(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType>())
{
    fault_type->parent = this;

    yang_name = "module"; yang_parent_name = "fault-injection"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::~Module()
{
}

bool Set::Asic::Instance::FaultInjection::Module::has_data() const
{
    if (is_presence_container) return true;
    return module_name.is_set
	|| (fault_type !=  nullptr && fault_type->has_data());
}

bool Set::Asic::Instance::FaultInjection::Module::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module_name.yfilter)
	|| (fault_type !=  nullptr && fault_type->has_operation());
}

std::string Set::Asic::Instance::FaultInjection::Module::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module";
    ADD_KEY_TOKEN(module_name, "module-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module_name.is_set || is_set(module_name.yfilter)) leaf_name_data.push_back(module_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fault-type")
    {
        if(fault_type == nullptr)
        {
            fault_type = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType>();
        }
        return fault_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fault_type != nullptr)
    {
        _children["fault-type"] = fault_type;
    }

    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module-name")
    {
        module_name = value;
        module_name.value_namespace = name_space;
        module_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module-name")
    {
        module_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fault-type" || name == "module-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::FaultType()
    :
    ecc(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc>())
    , parity(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity>())
    , other(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other>())
{
    ecc->parent = this;
    parity->parent = this;
    other->parent = this;

    yang_name = "fault-type"; yang_parent_name = "module"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::~FaultType()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::has_data() const
{
    if (is_presence_container) return true;
    return (ecc !=  nullptr && ecc->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (other !=  nullptr && other->has_data());
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::has_operation() const
{
    return is_set(yfilter)
	|| (ecc !=  nullptr && ecc->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (other !=  nullptr && other->has_operation());
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fault-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ecc")
    {
        if(ecc == nullptr)
        {
            ecc = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc>();
        }
        return ecc;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "other")
    {
        if(other == nullptr)
        {
            other = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other>();
        }
        return other;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ecc" || name == "parity" || name == "other")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::Ecc()
    :
    all(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All>())
    , block_name_lst(this, {"block_name"})
{
    all->parent = this;

    yang_name = "ecc"; yang_parent_name = "fault-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::~Ecc()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::has_operation() const
{
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ecc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All>();
        }
        return all;
    }

    if(child_yang_name == "block-name-lst")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst>();
        ent_->parent = this;
        block_name_lst.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "block-name-lst")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::All()
    :
    threshold(this, {"num_seconds"})
    , location(this, {"fit_location_name"})
{

    yang_name = "all"; yang_parent_name = "ecc"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::~All()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::has_data() const
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

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::has_operation() const
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

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold>();
        ent_->parent = this;
        threshold.append(ent_);
        return ent_;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "location")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Threshold()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "threshold"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::~Threshold()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Threshold::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::All::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::BlockNameLst()
    :
    block_name{YType::str, "block-name"}
        ,
    one(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One>())
    , continuous(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous>())
    , stop(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop>())
{
    one->parent = this;
    continuous->parent = this;
    stop->parent = this;

    yang_name = "block-name-lst"; yang_parent_name = "ecc"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::~BlockNameLst()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::has_data() const
{
    if (is_presence_container) return true;
    return block_name.is_set
	|| (one !=  nullptr && one->has_data())
	|| (continuous !=  nullptr && continuous->has_data())
	|| (stop !=  nullptr && stop->has_data());
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(block_name.yfilter)
	|| (one !=  nullptr && one->has_operation())
	|| (continuous !=  nullptr && continuous->has_operation())
	|| (stop !=  nullptr && stop->has_operation());
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-name-lst";
    ADD_KEY_TOKEN(block_name, "block-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_name.is_set || is_set(block_name.yfilter)) leaf_name_data.push_back(block_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "one")
    {
        if(one == nullptr)
        {
            one = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One>();
        }
        return one;
    }

    if(child_yang_name == "continuous")
    {
        if(continuous == nullptr)
        {
            continuous = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous>();
        }
        return continuous;
    }

    if(child_yang_name == "stop")
    {
        if(stop == nullptr)
        {
            stop = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop>();
        }
        return stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-name")
    {
        block_name = value;
        block_name.value_namespace = name_space;
        block_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-name")
    {
        block_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one" || name == "continuous" || name == "stop" || name == "block-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::One()
    :
    rate(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "one"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::~One()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::~Rate()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber>();
        ent_->parent = this;
        error_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration>();
        ent_->parent = this;
        duration.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::One::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Continuous()
    :
    rate(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "continuous"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::~Continuous()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "continuous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::~Rate()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber>();
        ent_->parent = this;
        error_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration>();
        ent_->parent = this;
        duration.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Continuous::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Stop()
    :
    location(this, {"fit_location_name"})
{

    yang_name = "stop"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::~Stop()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "stop"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Ecc::BlockNameLst::Stop::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::Parity()
    :
    all(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All>())
    , block_name_lst(this, {"block_name"})
{
    all->parent = this;

    yang_name = "parity"; yang_parent_name = "fault-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::~Parity()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::has_operation() const
{
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All>();
        }
        return all;
    }

    if(child_yang_name == "block-name-lst")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst>();
        ent_->parent = this;
        block_name_lst.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "block-name-lst")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::All()
    :
    threshold(this, {"num_seconds"})
    , location(this, {"fit_location_name"})
{

    yang_name = "all"; yang_parent_name = "parity"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::~All()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::has_data() const
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

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::has_operation() const
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

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold>();
        ent_->parent = this;
        threshold.append(ent_);
        return ent_;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "location")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Threshold()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "threshold"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::~Threshold()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Threshold::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::All::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::BlockNameLst()
    :
    block_name{YType::str, "block-name"}
        ,
    one(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One>())
    , continuous(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous>())
    , stop(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop>())
{
    one->parent = this;
    continuous->parent = this;
    stop->parent = this;

    yang_name = "block-name-lst"; yang_parent_name = "parity"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::~BlockNameLst()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::has_data() const
{
    if (is_presence_container) return true;
    return block_name.is_set
	|| (one !=  nullptr && one->has_data())
	|| (continuous !=  nullptr && continuous->has_data())
	|| (stop !=  nullptr && stop->has_data());
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(block_name.yfilter)
	|| (one !=  nullptr && one->has_operation())
	|| (continuous !=  nullptr && continuous->has_operation())
	|| (stop !=  nullptr && stop->has_operation());
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-name-lst";
    ADD_KEY_TOKEN(block_name, "block-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_name.is_set || is_set(block_name.yfilter)) leaf_name_data.push_back(block_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "one")
    {
        if(one == nullptr)
        {
            one = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One>();
        }
        return one;
    }

    if(child_yang_name == "continuous")
    {
        if(continuous == nullptr)
        {
            continuous = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous>();
        }
        return continuous;
    }

    if(child_yang_name == "stop")
    {
        if(stop == nullptr)
        {
            stop = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop>();
        }
        return stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-name")
    {
        block_name = value;
        block_name.value_namespace = name_space;
        block_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-name")
    {
        block_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one" || name == "continuous" || name == "stop" || name == "block-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::One()
    :
    rate(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "one"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::~One()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::~Rate()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber>();
        ent_->parent = this;
        error_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration>();
        ent_->parent = this;
        duration.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::One::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Continuous()
    :
    rate(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "continuous"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::~Continuous()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "continuous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::~Rate()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber>();
        ent_->parent = this;
        error_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration>();
        ent_->parent = this;
        duration.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Continuous::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Stop()
    :
    location(this, {"fit_location_name"})
{

    yang_name = "stop"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::~Stop()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "stop"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Parity::BlockNameLst::Stop::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::Other()
    :
    all(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All>())
    , block_name_lst(this, {"block_name"})
{
    all->parent = this;

    yang_name = "other"; yang_parent_name = "fault-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::~Other()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::has_operation() const
{
    for (std::size_t index=0; index<block_name_lst.len(); index++)
    {
        if(block_name_lst[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "other";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All>();
        }
        return all;
    }

    if(child_yang_name == "block-name-lst")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst>();
        ent_->parent = this;
        block_name_lst.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "block-name-lst")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::All()
    :
    threshold(this, {"num_seconds"})
    , location(this, {"fit_location_name"})
{

    yang_name = "all"; yang_parent_name = "other"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::~All()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::has_data() const
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

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::has_operation() const
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

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold>();
        ent_->parent = this;
        threshold.append(ent_);
        return ent_;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "location")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Threshold()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "threshold"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::~Threshold()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Threshold::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::All::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::BlockNameLst()
    :
    block_name{YType::str, "block-name"}
        ,
    one(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One>())
    , continuous(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous>())
    , stop(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop>())
{
    one->parent = this;
    continuous->parent = this;
    stop->parent = this;

    yang_name = "block-name-lst"; yang_parent_name = "other"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::~BlockNameLst()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::has_data() const
{
    if (is_presence_container) return true;
    return block_name.is_set
	|| (one !=  nullptr && one->has_data())
	|| (continuous !=  nullptr && continuous->has_data())
	|| (stop !=  nullptr && stop->has_data());
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(block_name.yfilter)
	|| (one !=  nullptr && one->has_operation())
	|| (continuous !=  nullptr && continuous->has_operation())
	|| (stop !=  nullptr && stop->has_operation());
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "block-name-lst";
    ADD_KEY_TOKEN(block_name, "block-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (block_name.is_set || is_set(block_name.yfilter)) leaf_name_data.push_back(block_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "one")
    {
        if(one == nullptr)
        {
            one = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One>();
        }
        return one;
    }

    if(child_yang_name == "continuous")
    {
        if(continuous == nullptr)
        {
            continuous = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous>();
        }
        return continuous;
    }

    if(child_yang_name == "stop")
    {
        if(stop == nullptr)
        {
            stop = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop>();
        }
        return stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "block-name")
    {
        block_name = value;
        block_name.value_namespace = name_space;
        block_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "block-name")
    {
        block_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "one" || name == "continuous" || name == "stop" || name == "block-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::One()
    :
    rate(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "one"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::~One()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::~Rate()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber>();
        ent_->parent = this;
        error_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration>();
        ent_->parent = this;
        duration.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "one"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::One::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Continuous()
    :
    rate(std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate>())
    , location(this, {"fit_location_name"})
{
    rate->parent = this;

    yang_name = "continuous"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::~Continuous()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return (rate !=  nullptr && rate->has_data());
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "continuous";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate>();
        }
        return rate;
    }

    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "location")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::Rate()
    :
    error_number(this, {"num_errs"})
{

    yang_name = "rate"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::~Rate()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::has_operation() const
{
    for (std::size_t index=0; index<error_number.len(); index++)
    {
        if(error_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "error-number")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber>();
        ent_->parent = this;
        error_number.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-number")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::ErrorNumber()
    :
    num_errs{YType::uint32, "num-errs"}
        ,
    duration(this, {"num_seconds"})
{

    yang_name = "error-number"; yang_parent_name = "rate"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::~ErrorNumber()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_data())
            return true;
    }
    return num_errs.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::has_operation() const
{
    for (std::size_t index=0; index<duration.len(); index++)
    {
        if(duration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_errs.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-number";
    ADD_KEY_TOKEN(num_errs, "num-errs");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_errs.is_set || is_set(num_errs.yfilter)) leaf_name_data.push_back(num_errs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "duration")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration>();
        ent_->parent = this;
        duration.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-errs")
    {
        num_errs = value;
        num_errs.value_namespace = name_space;
        num_errs.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-errs")
    {
        num_errs.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "num-errs")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Duration()
    :
    num_seconds{YType::uint32, "num-seconds"}
        ,
    location(this, {"fit_location_name"})
{

    yang_name = "duration"; yang_parent_name = "error-number"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::~Duration()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return num_seconds.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(num_seconds.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duration";
    ADD_KEY_TOKEN(num_seconds, "num-seconds");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_seconds.is_set || is_set(num_seconds.yfilter)) leaf_name_data.push_back(num_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-seconds")
    {
        num_seconds = value;
        num_seconds.value_namespace = name_space;
        num_seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-seconds")
    {
        num_seconds.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "num-seconds")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "duration"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Rate::ErrorNumber::Duration::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "continuous"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Continuous::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Stop()
    :
    location(this, {"fit_location_name"})
{

    yang_name = "stop"; yang_parent_name = "block-name-lst"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::~Stop()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return false;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::get_children() const
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

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location")
        return true;
    return false;
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::Location()
    :
    fit_location_name{YType::str, "fit-location-name"}
{

    yang_name = "location"; yang_parent_name = "stop"; is_top_level_class = false; has_list_ancestor = true; 
}

Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::~Location()
{
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::has_data() const
{
    if (is_presence_container) return true;
    return fit_location_name.is_set;
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fit_location_name.yfilter);
}

std::string Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(fit_location_name, "fit-location-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fit_location_name.is_set || is_set(fit_location_name.yfilter)) leaf_name_data.push_back(fit_location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name = value;
        fit_location_name.value_namespace = name_space;
        fit_location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fit-location-name")
    {
        fit_location_name.yfilter = yfilter;
    }
}

bool Set::Asic::Instance::FaultInjection::Module::FaultType::Other::BlockNameLst::Stop::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fit-location-name")
        return true;
    return false;
}


}
}

