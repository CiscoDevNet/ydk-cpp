
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "vplatform.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace vplatform {

VirtualPlatform::VirtualPlatform()
    :
    vplatform(std::make_shared<VirtualPlatform::Vplatform>())
    , udi(std::make_shared<VirtualPlatform::Udi>())
    , cpu(std::make_shared<VirtualPlatform::Cpu>())
    , processor(std::make_shared<VirtualPlatform::Processor>())
    , memory(std::make_shared<VirtualPlatform::Memory>())
    , disk(std::make_shared<VirtualPlatform::Disk>())
    , action(std::make_shared<VirtualPlatform::Action>())
{
    vplatform->parent = this;
    udi->parent = this;
    cpu->parent = this;
    processor->parent = this;
    memory->parent = this;
    disk->parent = this;
    action->parent = this;

    yang_name = "virtual-platform"; yang_parent_name = "vplatform"; is_top_level_class = true; has_list_ancestor = false; 
}

VirtualPlatform::~VirtualPlatform()
{
}

bool VirtualPlatform::has_data() const
{
    if (is_presence_container) return true;
    return (vplatform !=  nullptr && vplatform->has_data())
	|| (udi !=  nullptr && udi->has_data())
	|| (cpu !=  nullptr && cpu->has_data())
	|| (processor !=  nullptr && processor->has_data())
	|| (memory !=  nullptr && memory->has_data())
	|| (disk !=  nullptr && disk->has_data())
	|| (action !=  nullptr && action->has_data());
}

bool VirtualPlatform::has_operation() const
{
    return is_set(yfilter)
	|| (vplatform !=  nullptr && vplatform->has_operation())
	|| (udi !=  nullptr && udi->has_operation())
	|| (cpu !=  nullptr && cpu->has_operation())
	|| (processor !=  nullptr && processor->has_operation())
	|| (memory !=  nullptr && memory->has_operation())
	|| (disk !=  nullptr && disk->has_operation())
	|| (action !=  nullptr && action->has_operation());
}

std::string VirtualPlatform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vplatform")
    {
        if(vplatform == nullptr)
        {
            vplatform = std::make_shared<VirtualPlatform::Vplatform>();
        }
        return vplatform;
    }

    if(child_yang_name == "udi")
    {
        if(udi == nullptr)
        {
            udi = std::make_shared<VirtualPlatform::Udi>();
        }
        return udi;
    }

    if(child_yang_name == "cpu")
    {
        if(cpu == nullptr)
        {
            cpu = std::make_shared<VirtualPlatform::Cpu>();
        }
        return cpu;
    }

    if(child_yang_name == "processor")
    {
        if(processor == nullptr)
        {
            processor = std::make_shared<VirtualPlatform::Processor>();
        }
        return processor;
    }

    if(child_yang_name == "memory")
    {
        if(memory == nullptr)
        {
            memory = std::make_shared<VirtualPlatform::Memory>();
        }
        return memory;
    }

    if(child_yang_name == "disk")
    {
        if(disk == nullptr)
        {
            disk = std::make_shared<VirtualPlatform::Disk>();
        }
        return disk;
    }

    if(child_yang_name == "Action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<VirtualPlatform::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vplatform != nullptr)
    {
        _children["vplatform"] = vplatform;
    }

    if(udi != nullptr)
    {
        _children["udi"] = udi;
    }

    if(cpu != nullptr)
    {
        _children["cpu"] = cpu;
    }

    if(processor != nullptr)
    {
        _children["processor"] = processor;
    }

    if(memory != nullptr)
    {
        _children["memory"] = memory;
    }

    if(disk != nullptr)
    {
        _children["disk"] = disk;
    }

    if(action != nullptr)
    {
        _children["Action"] = action;
    }

    return _children;
}

void VirtualPlatform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualPlatform::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> VirtualPlatform::clone_ptr() const
{
    return std::make_shared<VirtualPlatform>();
}

std::string VirtualPlatform::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string VirtualPlatform::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function VirtualPlatform::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> VirtualPlatform::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool VirtualPlatform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vplatform" || name == "udi" || name == "cpu" || name == "processor" || name == "memory" || name == "disk" || name == "Action")
        return true;
    return false;
}

VirtualPlatform::Vplatform::Vplatform()
    :
    summary(this, {})
{

    yang_name = "vplatform"; yang_parent_name = "virtual-platform"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Vplatform::~Vplatform()
{
}

bool VirtualPlatform::Vplatform::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<summary.len(); index++)
    {
        if(summary[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualPlatform::Vplatform::has_operation() const
{
    for (std::size_t index=0; index<summary.len(); index++)
    {
        if(summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VirtualPlatform::Vplatform::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Vplatform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Vplatform::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Vplatform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        auto ent_ = std::make_shared<VirtualPlatform::Vplatform::Summary>();
        ent_->parent = this;
        summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Vplatform::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void VirtualPlatform::Vplatform::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualPlatform::Vplatform::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualPlatform::Vplatform::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

VirtualPlatform::Vplatform::Summary::Summary()
    :
    lines{YType::str, "lines"}
{

    yang_name = "summary"; yang_parent_name = "vplatform"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Vplatform::Summary::~Summary()
{
}

bool VirtualPlatform::Vplatform::Summary::has_data() const
{
    if (is_presence_container) return true;
    return lines.is_set;
}

bool VirtualPlatform::Vplatform::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lines.yfilter);
}

std::string VirtualPlatform::Vplatform::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/vplatform/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Vplatform::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Vplatform::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lines.is_set || is_set(lines.yfilter)) leaf_name_data.push_back(lines.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Vplatform::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Vplatform::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void VirtualPlatform::Vplatform::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lines")
    {
        lines = value;
        lines.value_namespace = name_space;
        lines.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualPlatform::Vplatform::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lines")
    {
        lines.yfilter = yfilter;
    }
}

bool VirtualPlatform::Vplatform::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lines")
        return true;
    return false;
}

VirtualPlatform::Udi::Udi()
    :
    history(std::make_shared<VirtualPlatform::Udi::History>())
{
    history->parent = this;

    yang_name = "udi"; yang_parent_name = "virtual-platform"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Udi::~Udi()
{
}

bool VirtualPlatform::Udi::has_data() const
{
    if (is_presence_container) return true;
    return (history !=  nullptr && history->has_data());
}

bool VirtualPlatform::Udi::has_operation() const
{
    return is_set(yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string VirtualPlatform::Udi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Udi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Udi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Udi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<VirtualPlatform::Udi::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Udi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(history != nullptr)
    {
        _children["history"] = history;
    }

    return _children;
}

void VirtualPlatform::Udi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualPlatform::Udi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualPlatform::Udi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history")
        return true;
    return false;
}

VirtualPlatform::Udi::History::History()
    :
    udi_his(this, {})
{

    yang_name = "history"; yang_parent_name = "udi"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Udi::History::~History()
{
}

bool VirtualPlatform::Udi::History::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<udi_his.len(); index++)
    {
        if(udi_his[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualPlatform::Udi::History::has_operation() const
{
    for (std::size_t index=0; index<udi_his.len(); index++)
    {
        if(udi_his[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VirtualPlatform::Udi::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/udi/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Udi::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Udi::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Udi::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udi_his")
    {
        auto ent_ = std::make_shared<VirtualPlatform::Udi::History::UdiHis>();
        ent_->parent = this;
        udi_his.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Udi::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : udi_his.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void VirtualPlatform::Udi::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualPlatform::Udi::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualPlatform::Udi::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udi_his")
        return true;
    return false;
}

VirtualPlatform::Udi::History::UdiHis::UdiHis()
    :
    history_records{YType::str, "history_records"}
{

    yang_name = "udi_his"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Udi::History::UdiHis::~UdiHis()
{
}

bool VirtualPlatform::Udi::History::UdiHis::has_data() const
{
    if (is_presence_container) return true;
    return history_records.is_set;
}

bool VirtualPlatform::Udi::History::UdiHis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_records.yfilter);
}

std::string VirtualPlatform::Udi::History::UdiHis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/udi/history/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Udi::History::UdiHis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udi_his";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Udi::History::UdiHis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_records.is_set || is_set(history_records.yfilter)) leaf_name_data.push_back(history_records.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Udi::History::UdiHis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Udi::History::UdiHis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void VirtualPlatform::Udi::History::UdiHis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_records")
    {
        history_records = value;
        history_records.value_namespace = name_space;
        history_records.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualPlatform::Udi::History::UdiHis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_records")
    {
        history_records.yfilter = yfilter;
    }
}

bool VirtualPlatform::Udi::History::UdiHis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_records")
        return true;
    return false;
}

VirtualPlatform::Cpu::Cpu()
    :
    history(std::make_shared<VirtualPlatform::Cpu::History>())
{
    history->parent = this;

    yang_name = "cpu"; yang_parent_name = "virtual-platform"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Cpu::~Cpu()
{
}

bool VirtualPlatform::Cpu::has_data() const
{
    if (is_presence_container) return true;
    return (history !=  nullptr && history->has_data());
}

bool VirtualPlatform::Cpu::has_operation() const
{
    return is_set(yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string VirtualPlatform::Cpu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Cpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Cpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Cpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<VirtualPlatform::Cpu::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Cpu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(history != nullptr)
    {
        _children["history"] = history;
    }

    return _children;
}

void VirtualPlatform::Cpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualPlatform::Cpu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualPlatform::Cpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history")
        return true;
    return false;
}

VirtualPlatform::Cpu::History::History()
    :
    cpu_utl(this, {})
{

    yang_name = "history"; yang_parent_name = "cpu"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Cpu::History::~History()
{
}

bool VirtualPlatform::Cpu::History::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_utl.len(); index++)
    {
        if(cpu_utl[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualPlatform::Cpu::History::has_operation() const
{
    for (std::size_t index=0; index<cpu_utl.len(); index++)
    {
        if(cpu_utl[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VirtualPlatform::Cpu::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Cpu::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Cpu::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Cpu::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpu_utl")
    {
        auto ent_ = std::make_shared<VirtualPlatform::Cpu::History::CpuUtl>();
        ent_->parent = this;
        cpu_utl.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Cpu::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpu_utl.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void VirtualPlatform::Cpu::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualPlatform::Cpu::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualPlatform::Cpu::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpu_utl")
        return true;
    return false;
}

VirtualPlatform::Cpu::History::CpuUtl::CpuUtl()
    :
    history_records{YType::str, "history_records"}
{

    yang_name = "cpu_utl"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Cpu::History::CpuUtl::~CpuUtl()
{
}

bool VirtualPlatform::Cpu::History::CpuUtl::has_data() const
{
    if (is_presence_container) return true;
    return history_records.is_set;
}

bool VirtualPlatform::Cpu::History::CpuUtl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_records.yfilter);
}

std::string VirtualPlatform::Cpu::History::CpuUtl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/cpu/history/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Cpu::History::CpuUtl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu_utl";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Cpu::History::CpuUtl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_records.is_set || is_set(history_records.yfilter)) leaf_name_data.push_back(history_records.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Cpu::History::CpuUtl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Cpu::History::CpuUtl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void VirtualPlatform::Cpu::History::CpuUtl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_records")
    {
        history_records = value;
        history_records.value_namespace = name_space;
        history_records.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualPlatform::Cpu::History::CpuUtl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_records")
    {
        history_records.yfilter = yfilter;
    }
}

bool VirtualPlatform::Cpu::History::CpuUtl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_records")
        return true;
    return false;
}

VirtualPlatform::Processor::Processor()
    :
    history(std::make_shared<VirtualPlatform::Processor::History>())
{
    history->parent = this;

    yang_name = "processor"; yang_parent_name = "virtual-platform"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Processor::~Processor()
{
}

bool VirtualPlatform::Processor::has_data() const
{
    if (is_presence_container) return true;
    return (history !=  nullptr && history->has_data());
}

bool VirtualPlatform::Processor::has_operation() const
{
    return is_set(yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string VirtualPlatform::Processor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Processor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "processor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Processor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Processor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<VirtualPlatform::Processor::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Processor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(history != nullptr)
    {
        _children["history"] = history;
    }

    return _children;
}

void VirtualPlatform::Processor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualPlatform::Processor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualPlatform::Processor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history")
        return true;
    return false;
}

VirtualPlatform::Processor::History::History()
    :
    proc_info(this, {})
{

    yang_name = "history"; yang_parent_name = "processor"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Processor::History::~History()
{
}

bool VirtualPlatform::Processor::History::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<proc_info.len(); index++)
    {
        if(proc_info[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualPlatform::Processor::History::has_operation() const
{
    for (std::size_t index=0; index<proc_info.len(); index++)
    {
        if(proc_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VirtualPlatform::Processor::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/processor/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Processor::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Processor::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Processor::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proc_info")
    {
        auto ent_ = std::make_shared<VirtualPlatform::Processor::History::ProcInfo>();
        ent_->parent = this;
        proc_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Processor::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : proc_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void VirtualPlatform::Processor::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualPlatform::Processor::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualPlatform::Processor::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proc_info")
        return true;
    return false;
}

VirtualPlatform::Processor::History::ProcInfo::ProcInfo()
    :
    history_records{YType::str, "history_records"}
{

    yang_name = "proc_info"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Processor::History::ProcInfo::~ProcInfo()
{
}

bool VirtualPlatform::Processor::History::ProcInfo::has_data() const
{
    if (is_presence_container) return true;
    return history_records.is_set;
}

bool VirtualPlatform::Processor::History::ProcInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_records.yfilter);
}

std::string VirtualPlatform::Processor::History::ProcInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/processor/history/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Processor::History::ProcInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proc_info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Processor::History::ProcInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_records.is_set || is_set(history_records.yfilter)) leaf_name_data.push_back(history_records.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Processor::History::ProcInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Processor::History::ProcInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void VirtualPlatform::Processor::History::ProcInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_records")
    {
        history_records = value;
        history_records.value_namespace = name_space;
        history_records.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualPlatform::Processor::History::ProcInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_records")
    {
        history_records.yfilter = yfilter;
    }
}

bool VirtualPlatform::Processor::History::ProcInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_records")
        return true;
    return false;
}

VirtualPlatform::Memory::Memory()
    :
    history(std::make_shared<VirtualPlatform::Memory::History>())
{
    history->parent = this;

    yang_name = "memory"; yang_parent_name = "virtual-platform"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Memory::~Memory()
{
}

bool VirtualPlatform::Memory::has_data() const
{
    if (is_presence_container) return true;
    return (history !=  nullptr && history->has_data());
}

bool VirtualPlatform::Memory::has_operation() const
{
    return is_set(yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string VirtualPlatform::Memory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Memory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<VirtualPlatform::Memory::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(history != nullptr)
    {
        _children["history"] = history;
    }

    return _children;
}

void VirtualPlatform::Memory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualPlatform::Memory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualPlatform::Memory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history")
        return true;
    return false;
}

VirtualPlatform::Memory::History::History()
    :
    mem_usg(this, {})
{

    yang_name = "history"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Memory::History::~History()
{
}

bool VirtualPlatform::Memory::History::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mem_usg.len(); index++)
    {
        if(mem_usg[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualPlatform::Memory::History::has_operation() const
{
    for (std::size_t index=0; index<mem_usg.len(); index++)
    {
        if(mem_usg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VirtualPlatform::Memory::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/memory/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Memory::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Memory::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Memory::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mem_usg")
    {
        auto ent_ = std::make_shared<VirtualPlatform::Memory::History::MemUsg>();
        ent_->parent = this;
        mem_usg.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Memory::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mem_usg.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void VirtualPlatform::Memory::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualPlatform::Memory::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualPlatform::Memory::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mem_usg")
        return true;
    return false;
}

VirtualPlatform::Memory::History::MemUsg::MemUsg()
    :
    history_records{YType::str, "history_records"}
{

    yang_name = "mem_usg"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Memory::History::MemUsg::~MemUsg()
{
}

bool VirtualPlatform::Memory::History::MemUsg::has_data() const
{
    if (is_presence_container) return true;
    return history_records.is_set;
}

bool VirtualPlatform::Memory::History::MemUsg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_records.yfilter);
}

std::string VirtualPlatform::Memory::History::MemUsg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/memory/history/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Memory::History::MemUsg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mem_usg";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Memory::History::MemUsg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_records.is_set || is_set(history_records.yfilter)) leaf_name_data.push_back(history_records.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Memory::History::MemUsg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Memory::History::MemUsg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void VirtualPlatform::Memory::History::MemUsg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_records")
    {
        history_records = value;
        history_records.value_namespace = name_space;
        history_records.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualPlatform::Memory::History::MemUsg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_records")
    {
        history_records.yfilter = yfilter;
    }
}

bool VirtualPlatform::Memory::History::MemUsg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_records")
        return true;
    return false;
}

VirtualPlatform::Disk::Disk()
    :
    history(std::make_shared<VirtualPlatform::Disk::History>())
{
    history->parent = this;

    yang_name = "disk"; yang_parent_name = "virtual-platform"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Disk::~Disk()
{
}

bool VirtualPlatform::Disk::has_data() const
{
    if (is_presence_container) return true;
    return (history !=  nullptr && history->has_data());
}

bool VirtualPlatform::Disk::has_operation() const
{
    return is_set(yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string VirtualPlatform::Disk::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Disk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Disk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Disk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<VirtualPlatform::Disk::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Disk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(history != nullptr)
    {
        _children["history"] = history;
    }

    return _children;
}

void VirtualPlatform::Disk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualPlatform::Disk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualPlatform::Disk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history")
        return true;
    return false;
}

VirtualPlatform::Disk::History::History()
    :
    disk_utl(this, {})
{

    yang_name = "history"; yang_parent_name = "disk"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Disk::History::~History()
{
}

bool VirtualPlatform::Disk::History::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<disk_utl.len(); index++)
    {
        if(disk_utl[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualPlatform::Disk::History::has_operation() const
{
    for (std::size_t index=0; index<disk_utl.len(); index++)
    {
        if(disk_utl[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VirtualPlatform::Disk::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/disk/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Disk::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Disk::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Disk::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disk_utl")
    {
        auto ent_ = std::make_shared<VirtualPlatform::Disk::History::DiskUtl>();
        ent_->parent = this;
        disk_utl.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Disk::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : disk_utl.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void VirtualPlatform::Disk::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualPlatform::Disk::History::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualPlatform::Disk::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disk_utl")
        return true;
    return false;
}

VirtualPlatform::Disk::History::DiskUtl::DiskUtl()
    :
    history_records{YType::str, "history_records"}
{

    yang_name = "disk_utl"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Disk::History::DiskUtl::~DiskUtl()
{
}

bool VirtualPlatform::Disk::History::DiskUtl::has_data() const
{
    if (is_presence_container) return true;
    return history_records.is_set;
}

bool VirtualPlatform::Disk::History::DiskUtl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_records.yfilter);
}

std::string VirtualPlatform::Disk::History::DiskUtl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/disk/history/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Disk::History::DiskUtl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disk_utl";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Disk::History::DiskUtl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_records.is_set || is_set(history_records.yfilter)) leaf_name_data.push_back(history_records.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Disk::History::DiskUtl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Disk::History::DiskUtl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void VirtualPlatform::Disk::History::DiskUtl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history_records")
    {
        history_records = value;
        history_records.value_namespace = name_space;
        history_records.value_namespace_prefix = name_space_prefix;
    }
}

void VirtualPlatform::Disk::History::DiskUtl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history_records")
    {
        history_records.yfilter = yfilter;
    }
}

bool VirtualPlatform::Disk::History::DiskUtl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history_records")
        return true;
    return false;
}

VirtualPlatform::Action::Action()
    :
    udi(this, {})
{

    yang_name = "Action"; yang_parent_name = "virtual-platform"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Action::~Action()
{
}

bool VirtualPlatform::Action::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<udi.len(); index++)
    {
        if(udi[index]->has_data())
            return true;
    }
    return false;
}

bool VirtualPlatform::Action::has_operation() const
{
    for (std::size_t index=0; index<udi.len(); index++)
    {
        if(udi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string VirtualPlatform::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udi")
    {
        auto ent_ = std::make_shared<VirtualPlatform::Action::Udi>();
        ent_->parent = this;
        udi.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : udi.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void VirtualPlatform::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualPlatform::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualPlatform::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udi")
        return true;
    return false;
}

VirtualPlatform::Action::Udi::Udi()
{

    yang_name = "udi"; yang_parent_name = "Action"; is_top_level_class = false; has_list_ancestor = false; 
}

VirtualPlatform::Action::Udi::~Udi()
{
}

bool VirtualPlatform::Action::Udi::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool VirtualPlatform::Action::Udi::has_operation() const
{
    return is_set(yfilter);
}

std::string VirtualPlatform::Action::Udi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplatform:virtual-platform/Action/" << get_segment_path();
    return path_buffer.str();
}

std::string VirtualPlatform::Action::Udi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udi";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > VirtualPlatform::Action::Udi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> VirtualPlatform::Action::Udi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> VirtualPlatform::Action::Udi::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void VirtualPlatform::Action::Udi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void VirtualPlatform::Action::Udi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool VirtualPlatform::Action::Udi::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}


}
}

