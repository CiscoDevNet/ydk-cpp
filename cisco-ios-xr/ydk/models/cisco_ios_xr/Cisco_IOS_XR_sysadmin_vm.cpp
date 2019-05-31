
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_sysadmin_vm.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_vm {

Vm::Vm()
    :
    config(std::make_shared<Vm::Config>())
{
    config->parent = this;

    yang_name = "vm"; yang_parent_name = "Cisco-IOS-XR-sysadmin-vm"; is_top_level_class = true; has_list_ancestor = false; 
}

Vm::~Vm()
{
}

bool Vm::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data());
}

bool Vm::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation());
}

std::string Vm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-vm:vm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Vm::Config>();
        }
        return config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    return _children;
}

void Vm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Vm::clone_ptr() const
{
    return std::make_shared<Vm>();
}

std::string Vm::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Vm::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Vm::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Vm::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Vm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config")
        return true;
    return false;
}

Vm::Config::Config()
    :
    hw_profile(std::make_shared<Vm::Config::HwProfile>())
    , memory(std::make_shared<Vm::Config::Memory>())
    , cpu(std::make_shared<Vm::Config::Cpu>())
{
    hw_profile->parent = this;
    memory->parent = this;
    cpu->parent = this;

    yang_name = "config"; yang_parent_name = "vm"; is_top_level_class = false; has_list_ancestor = false; 
}

Vm::Config::~Config()
{
}

bool Vm::Config::has_data() const
{
    if (is_presence_container) return true;
    return (hw_profile !=  nullptr && hw_profile->has_data())
	|| (memory !=  nullptr && memory->has_data())
	|| (cpu !=  nullptr && cpu->has_data());
}

bool Vm::Config::has_operation() const
{
    return is_set(yfilter)
	|| (hw_profile !=  nullptr && hw_profile->has_operation())
	|| (memory !=  nullptr && memory->has_operation())
	|| (cpu !=  nullptr && cpu->has_operation());
}

std::string Vm::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-vm:vm/" << get_segment_path();
    return path_buffer.str();
}

std::string Vm::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vm::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vm::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hw-profile")
    {
        if(hw_profile == nullptr)
        {
            hw_profile = std::make_shared<Vm::Config::HwProfile>();
        }
        return hw_profile;
    }

    if(child_yang_name == "memory")
    {
        if(memory == nullptr)
        {
            memory = std::make_shared<Vm::Config::Memory>();
        }
        return memory;
    }

    if(child_yang_name == "cpu")
    {
        if(cpu == nullptr)
        {
            cpu = std::make_shared<Vm::Config::Cpu>();
        }
        return cpu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vm::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hw_profile != nullptr)
    {
        _children["hw-profile"] = hw_profile;
    }

    if(memory != nullptr)
    {
        _children["memory"] = memory;
    }

    if(cpu != nullptr)
    {
        _children["cpu"] = cpu;
    }

    return _children;
}

void Vm::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vm::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vm::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hw-profile" || name == "memory" || name == "cpu")
        return true;
    return false;
}

Vm::Config::HwProfile::HwProfile()
    :
    profile{YType::enumeration, "profile"}
{

    yang_name = "hw-profile"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Vm::Config::HwProfile::~HwProfile()
{
}

bool Vm::Config::HwProfile::has_data() const
{
    if (is_presence_container) return true;
    return profile.is_set;
}

bool Vm::Config::HwProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile.yfilter);
}

std::string Vm::Config::HwProfile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-vm:vm/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Vm::Config::HwProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vm::Config::HwProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vm::Config::HwProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vm::Config::HwProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vm::Config::HwProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Vm::Config::HwProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Vm::Config::HwProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile")
        return true;
    return false;
}

Vm::Config::Memory::Memory()
    :
    admin{YType::uint32, "admin"},
    rp{YType::uint32, "rp"},
    lc{YType::uint32, "lc"}
{

    yang_name = "memory"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Vm::Config::Memory::~Memory()
{
}

bool Vm::Config::Memory::has_data() const
{
    if (is_presence_container) return true;
    return admin.is_set
	|| rp.is_set
	|| lc.is_set;
}

bool Vm::Config::Memory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(admin.yfilter)
	|| ydk::is_set(rp.yfilter)
	|| ydk::is_set(lc.yfilter);
}

std::string Vm::Config::Memory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-vm:vm/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Vm::Config::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vm::Config::Memory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin.is_set || is_set(admin.yfilter)) leaf_name_data.push_back(admin.get_name_leafdata());
    if (rp.is_set || is_set(rp.yfilter)) leaf_name_data.push_back(rp.get_name_leafdata());
    if (lc.is_set || is_set(lc.yfilter)) leaf_name_data.push_back(lc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vm::Config::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vm::Config::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vm::Config::Memory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admin")
    {
        admin = value;
        admin.value_namespace = name_space;
        admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp")
    {
        rp = value;
        rp.value_namespace = name_space;
        rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lc")
    {
        lc = value;
        lc.value_namespace = name_space;
        lc.value_namespace_prefix = name_space_prefix;
    }
}

void Vm::Config::Memory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admin")
    {
        admin.yfilter = yfilter;
    }
    if(value_path == "rp")
    {
        rp.yfilter = yfilter;
    }
    if(value_path == "lc")
    {
        lc.yfilter = yfilter;
    }
}

bool Vm::Config::Memory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admin" || name == "rp" || name == "lc")
        return true;
    return false;
}

Vm::Config::Cpu::Cpu()
    :
    assign{YType::str, "assign"}
{

    yang_name = "cpu"; yang_parent_name = "config"; is_top_level_class = false; has_list_ancestor = false; 
}

Vm::Config::Cpu::~Cpu()
{
}

bool Vm::Config::Cpu::has_data() const
{
    if (is_presence_container) return true;
    return assign.is_set;
}

bool Vm::Config::Cpu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(assign.yfilter);
}

std::string Vm::Config::Cpu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-sysadmin-vm:vm/config/" << get_segment_path();
    return path_buffer.str();
}

std::string Vm::Config::Cpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vm::Config::Cpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (assign.is_set || is_set(assign.yfilter)) leaf_name_data.push_back(assign.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vm::Config::Cpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vm::Config::Cpu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vm::Config::Cpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "assign")
    {
        assign = value;
        assign.value_namespace = name_space;
        assign.value_namespace_prefix = name_space_prefix;
    }
}

void Vm::Config::Cpu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "assign")
    {
        assign.yfilter = yfilter;
    }
}

bool Vm::Config::Cpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "assign")
        return true;
    return false;
}

const Enum::YLeaf Vm::Config::HwProfile::Profile::vrr {0, "vrr"};


}
}

