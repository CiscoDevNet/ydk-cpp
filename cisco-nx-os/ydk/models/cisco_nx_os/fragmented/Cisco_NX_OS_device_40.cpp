
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_40.hpp"
#include "Cisco_NX_OS_device_41.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CPUList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    sock{YType::enumeration, "sock"},
    arch{YType::enumeration, "arch"},
    speed{YType::str, "speed"},
    cores{YType::uint16, "cores"},
    coresen{YType::uint16, "coresEn"},
    thrds{YType::uint16, "thrds"}
        ,
    core_items(std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems>())
{
    core_items->parent = this;

    yang_name = "CPU-list"; yang_parent_name = "cpu-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::~CPUList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| sock.is_set
	|| arch.is_set
	|| speed.is_set
	|| cores.is_set
	|| coresen.is_set
	|| thrds.is_set
	|| (core_items !=  nullptr && core_items->has_data());
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(sock.yfilter)
	|| ydk::is_set(arch.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(cores.yfilter)
	|| ydk::is_set(coresen.yfilter)
	|| ydk::is_set(thrds.yfilter)
	|| (core_items !=  nullptr && core_items->has_operation());
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CPU-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (sock.is_set || is_set(sock.yfilter)) leaf_name_data.push_back(sock.get_name_leafdata());
    if (arch.is_set || is_set(arch.yfilter)) leaf_name_data.push_back(arch.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (cores.is_set || is_set(cores.yfilter)) leaf_name_data.push_back(cores.get_name_leafdata());
    if (coresen.is_set || is_set(coresen.yfilter)) leaf_name_data.push_back(coresen.get_name_leafdata());
    if (thrds.is_set || is_set(thrds.yfilter)) leaf_name_data.push_back(thrds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-items")
    {
        if(core_items == nullptr)
        {
            core_items = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems>();
        }
        return core_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(core_items != nullptr)
    {
        _children["core-items"] = core_items;
    }

    return _children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sock")
    {
        sock = value;
        sock.value_namespace = name_space;
        sock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch")
    {
        arch = value;
        arch.value_namespace = name_space;
        arch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cores")
    {
        cores = value;
        cores.value_namespace = name_space;
        cores.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coresEn")
    {
        coresen = value;
        coresen.value_namespace = name_space;
        coresen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thrds")
    {
        thrds = value;
        thrds.value_namespace = name_space;
        thrds.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "sock")
    {
        sock.yfilter = yfilter;
    }
    if(value_path == "arch")
    {
        arch.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "cores")
    {
        cores.yfilter = yfilter;
    }
    if(value_path == "coresEn")
    {
        coresen.yfilter = yfilter;
    }
    if(value_path == "thrds")
    {
        thrds.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "sock" || name == "arch" || name == "speed" || name == "cores" || name == "coresEn" || name == "thrds")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreItems()
    :
    core_list(this, {"id"})
{

    yang_name = "core-items"; yang_parent_name = "CPU-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::~CoreItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::has_operation() const
{
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Core-list")
    {
        auto ent_ = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList>();
        ent_->parent = this;
        core_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : core_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Core-list")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::CoreList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Core-list"; yang_parent_name = "core-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::~CoreList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Core-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::CpuItems::CPUList::CoreItems::CoreList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmItems()
    :
    dimm_list(this, {"id"})
{

    yang_name = "dimm-items"; yang_parent_name = "sup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::~DimmItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::has_operation() const
{
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dimm-list")
    {
        auto ent_ = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList>();
        ent_->parent = this;
        dimm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dimm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dimm-list")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::DimmList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "Dimm-list"; yang_parent_name = "dimm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::~DimmList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dimm-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::DimmItems::DimmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::FlashItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "flash-items"; yang_parent_name = "sup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::~FlashItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::FlashItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::ObflItems()
    :
    logt{YType::str, "logT"},
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "obfl-items"; yang_parent_name = "sup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::~ObflItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::has_data() const
{
    if (is_presence_container) return true;
    return logt.is_set
	|| id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logt.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obfl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logt.is_set || is_set(logt.yfilter)) leaf_name_data.push_back(logt.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logT")
    {
        logt = value;
        logt.value_namespace = name_space;
        logt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logT")
    {
        logt.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::SupItems::ObflItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logT" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::RstrecItems::RstrecItems()
    :
    cardrstrec_list(this, {"ts"})
{

    yang_name = "rstrec-items"; yang_parent_name = "SupCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::RstrecItems::~RstrecItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::RstrecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cardrstrec_list.len(); index++)
    {
        if(cardrstrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::SupslotItems::SupCSlotList::RstrecItems::has_operation() const
{
    for (std::size_t index=0; index<cardrstrec_list.len(); index++)
    {
        if(cardrstrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::RstrecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rstrec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::RstrecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::SupslotItems::SupCSlotList::RstrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CardRstRec-list")
    {
        auto ent_ = std::make_shared<System::ChItems::SupslotItems::SupCSlotList::RstrecItems::CardRstRecList>();
        ent_->parent = this;
        cardrstrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::SupslotItems::SupCSlotList::RstrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cardrstrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::SupslotItems::SupCSlotList::RstrecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::SupslotItems::SupCSlotList::RstrecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::SupslotItems::SupCSlotList::RstrecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CardRstRec-list")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::RstrecItems::CardRstRecList::CardRstRecList()
    :
    ts{YType::str, "ts"},
    reason{YType::enumeration, "reason"},
    reasonqual{YType::str, "reasonQual"},
    ver{YType::str, "ver"},
    service{YType::str, "service"}
{

    yang_name = "CardRstRec-list"; yang_parent_name = "rstrec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::RstrecItems::CardRstRecList::~CardRstRecList()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::RstrecItems::CardRstRecList::has_data() const
{
    if (is_presence_container) return true;
    return ts.is_set
	|| reason.is_set
	|| reasonqual.is_set
	|| ver.is_set
	|| service.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::RstrecItems::CardRstRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(reasonqual.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(service.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::RstrecItems::CardRstRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CardRstRec-list";
    ADD_KEY_TOKEN(ts, "ts");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::RstrecItems::CardRstRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (reasonqual.is_set || is_set(reasonqual.yfilter)) leaf_name_data.push_back(reasonqual.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::SupslotItems::SupCSlotList::RstrecItems::CardRstRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::SupslotItems::SupCSlotList::RstrecItems::CardRstRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::SupslotItems::SupCSlotList::RstrecItems::CardRstRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ts")
    {
        ts = value;
        ts.value_namespace = name_space;
        ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reasonQual")
    {
        reasonqual = value;
        reasonqual.value_namespace = name_space;
        reasonqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::RstrecItems::CardRstRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ts")
    {
        ts.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "reasonQual")
    {
        reasonqual.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::RstrecItems::CardRstRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ts" || name == "reason" || name == "reasonQual" || name == "ver" || name == "service")
        return true;
    return false;
}

System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "SupCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ChItems::SupslotItems::SupCSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ChItems::LcslotItems::LcslotItems()
    :
    lcslot_list(this, {"id"})
{

    yang_name = "lcslot-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::LcslotItems::~LcslotItems()
{
}

bool System::ChItems::LcslotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lcslot_list.len(); index++)
    {
        if(lcslot_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::has_operation() const
{
    for (std::size_t index=0; index<lcslot_list.len(); index++)
    {
        if(lcslot_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::LcslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LCSlot-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList>();
        ent_->parent = this;
        lcslot_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lcslot_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LCSlot-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LCSlotList()
    :
    id{YType::uint32, "id"},
    purgecfg{YType::boolean, "purgeCfg"},
    poweroff{YType::enumeration, "poweroff"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    lc_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems>())
    , rstrec_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::RstrecItems>())
    , rtoosslot_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems>())
{
    lc_items->parent = this;
    rstrec_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "LCSlot-list"; yang_parent_name = "lcslot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::LcslotItems::LCSlotList::~LCSlotList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| purgecfg.is_set
	|| poweroff.is_set
	|| descr.is_set
	|| physid.is_set
	|| type.is_set
	|| operst.is_set
	|| loc.is_set
	|| (lc_items !=  nullptr && lc_items->has_data())
	|| (rstrec_items !=  nullptr && rstrec_items->has_data())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_data());
}

bool System::ChItems::LcslotItems::LCSlotList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(purgecfg.yfilter)
	|| ydk::is_set(poweroff.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(physid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (lc_items !=  nullptr && lc_items->has_operation())
	|| (rstrec_items !=  nullptr && rstrec_items->has_operation())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_operation());
}

std::string System::ChItems::LcslotItems::LCSlotList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/lcslot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::LcslotItems::LCSlotList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LCSlot-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (purgecfg.is_set || is_set(purgecfg.yfilter)) leaf_name_data.push_back(purgecfg.get_name_leafdata());
    if (poweroff.is_set || is_set(poweroff.yfilter)) leaf_name_data.push_back(poweroff.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (physid.is_set || is_set(physid.yfilter)) leaf_name_data.push_back(physid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-items")
    {
        if(lc_items == nullptr)
        {
            lc_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems>();
        }
        return lc_items;
    }

    if(child_yang_name == "rstrec-items")
    {
        if(rstrec_items == nullptr)
        {
            rstrec_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::RstrecItems>();
        }
        return rstrec_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lc_items != nullptr)
    {
        _children["lc-items"] = lc_items;
    }

    if(rstrec_items != nullptr)
    {
        _children["rstrec-items"] = rstrec_items;
    }

    if(rtoosslot_items != nullptr)
    {
        _children["rtoosSlot-items"] = rtoosslot_items;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purgeCfg")
    {
        purgecfg = value;
        purgecfg.value_namespace = name_space;
        purgecfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poweroff")
    {
        poweroff = value;
        poweroff.value_namespace = name_space;
        poweroff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physId")
    {
        physid = value;
        physid.value_namespace = name_space;
        physid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "purgeCfg")
    {
        purgecfg.yfilter = yfilter;
    }
    if(value_path == "poweroff")
    {
        poweroff.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "physId")
    {
        physid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-items" || name == "rstrec-items" || name == "rtoosSlot-items" || name == "id" || name == "purgeCfg" || name == "poweroff" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LcItems()
    :
    breakoutfactor{YType::uint32, "breakoutFactor"},
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    hwver{YType::str, "hwVer"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    swcid{YType::uint32, "swCId"},
    nump{YType::uint16, "numP"},
    macb{YType::str, "macB"},
    mace{YType::str, "macE"},
    upts{YType::str, "upTs"},
    pwrst{YType::enumeration, "pwrSt"},
    swver{YType::str, "swVer"},
    partnumber{YType::str, "partNumber"},
    vdrid{YType::str, "vdrId"},
    poweractualdraw{YType::uint32, "powerActualDraw"},
    powerallocated{YType::uint32, "powerAllocated"}
        ,
    running_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems>())
    , ej_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems>())
    , locled_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems>())
    , eobc_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems>())
    , fabport_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems>())
    , leafport_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems>())
    , hostextport_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems>())
    , leafextport_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems>())
    , sensor_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems>())
    , splc_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems>())
    , asic_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems>())
    , cpu_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems>())
    , dimm_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems>())
    , flash_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems>())
    , obfl_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems>())
{
    running_items->parent = this;
    ej_items->parent = this;
    locled_items->parent = this;
    eobc_items->parent = this;
    fabport_items->parent = this;
    leafport_items->parent = this;
    hostextport_items->parent = this;
    leafextport_items->parent = this;
    sensor_items->parent = this;
    splc_items->parent = this;
    asic_items->parent = this;
    cpu_items->parent = this;
    dimm_items->parent = this;
    flash_items->parent = this;
    obfl_items->parent = this;

    yang_name = "lc-items"; yang_parent_name = "LCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::~LcItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::has_data() const
{
    if (is_presence_container) return true;
    return breakoutfactor.is_set
	|| id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| hwver.is_set
	|| type.is_set
	|| operst.is_set
	|| swcid.is_set
	|| nump.is_set
	|| macb.is_set
	|| mace.is_set
	|| upts.is_set
	|| pwrst.is_set
	|| swver.is_set
	|| partnumber.is_set
	|| vdrid.is_set
	|| poweractualdraw.is_set
	|| powerallocated.is_set
	|| (running_items !=  nullptr && running_items->has_data())
	|| (ej_items !=  nullptr && ej_items->has_data())
	|| (locled_items !=  nullptr && locled_items->has_data())
	|| (eobc_items !=  nullptr && eobc_items->has_data())
	|| (fabport_items !=  nullptr && fabport_items->has_data())
	|| (leafport_items !=  nullptr && leafport_items->has_data())
	|| (hostextport_items !=  nullptr && hostextport_items->has_data())
	|| (leafextport_items !=  nullptr && leafextport_items->has_data())
	|| (sensor_items !=  nullptr && sensor_items->has_data())
	|| (splc_items !=  nullptr && splc_items->has_data())
	|| (asic_items !=  nullptr && asic_items->has_data())
	|| (cpu_items !=  nullptr && cpu_items->has_data())
	|| (dimm_items !=  nullptr && dimm_items->has_data())
	|| (flash_items !=  nullptr && flash_items->has_data())
	|| (obfl_items !=  nullptr && obfl_items->has_data());
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(breakoutfactor.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(swcid.yfilter)
	|| ydk::is_set(nump.yfilter)
	|| ydk::is_set(macb.yfilter)
	|| ydk::is_set(mace.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(pwrst.yfilter)
	|| ydk::is_set(swver.yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(poweractualdraw.yfilter)
	|| ydk::is_set(powerallocated.yfilter)
	|| (running_items !=  nullptr && running_items->has_operation())
	|| (ej_items !=  nullptr && ej_items->has_operation())
	|| (locled_items !=  nullptr && locled_items->has_operation())
	|| (eobc_items !=  nullptr && eobc_items->has_operation())
	|| (fabport_items !=  nullptr && fabport_items->has_operation())
	|| (leafport_items !=  nullptr && leafport_items->has_operation())
	|| (hostextport_items !=  nullptr && hostextport_items->has_operation())
	|| (leafextport_items !=  nullptr && leafextport_items->has_operation())
	|| (sensor_items !=  nullptr && sensor_items->has_operation())
	|| (splc_items !=  nullptr && splc_items->has_operation())
	|| (asic_items !=  nullptr && asic_items->has_operation())
	|| (cpu_items !=  nullptr && cpu_items->has_operation())
	|| (dimm_items !=  nullptr && dimm_items->has_operation())
	|| (flash_items !=  nullptr && flash_items->has_operation())
	|| (obfl_items !=  nullptr && obfl_items->has_operation());
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (breakoutfactor.is_set || is_set(breakoutfactor.yfilter)) leaf_name_data.push_back(breakoutfactor.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (swcid.is_set || is_set(swcid.yfilter)) leaf_name_data.push_back(swcid.get_name_leafdata());
    if (nump.is_set || is_set(nump.yfilter)) leaf_name_data.push_back(nump.get_name_leafdata());
    if (macb.is_set || is_set(macb.yfilter)) leaf_name_data.push_back(macb.get_name_leafdata());
    if (mace.is_set || is_set(mace.yfilter)) leaf_name_data.push_back(mace.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (pwrst.is_set || is_set(pwrst.yfilter)) leaf_name_data.push_back(pwrst.get_name_leafdata());
    if (swver.is_set || is_set(swver.yfilter)) leaf_name_data.push_back(swver.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (poweractualdraw.is_set || is_set(poweractualdraw.yfilter)) leaf_name_data.push_back(poweractualdraw.get_name_leafdata());
    if (powerallocated.is_set || is_set(powerallocated.yfilter)) leaf_name_data.push_back(powerallocated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "running-items")
    {
        if(running_items == nullptr)
        {
            running_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems>();
        }
        return running_items;
    }

    if(child_yang_name == "ej-items")
    {
        if(ej_items == nullptr)
        {
            ej_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems>();
        }
        return ej_items;
    }

    if(child_yang_name == "locled-items")
    {
        if(locled_items == nullptr)
        {
            locled_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems>();
        }
        return locled_items;
    }

    if(child_yang_name == "eobc-items")
    {
        if(eobc_items == nullptr)
        {
            eobc_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems>();
        }
        return eobc_items;
    }

    if(child_yang_name == "fabport-items")
    {
        if(fabport_items == nullptr)
        {
            fabport_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems>();
        }
        return fabport_items;
    }

    if(child_yang_name == "leafport-items")
    {
        if(leafport_items == nullptr)
        {
            leafport_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems>();
        }
        return leafport_items;
    }

    if(child_yang_name == "hostextport-items")
    {
        if(hostextport_items == nullptr)
        {
            hostextport_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems>();
        }
        return hostextport_items;
    }

    if(child_yang_name == "leafextport-items")
    {
        if(leafextport_items == nullptr)
        {
            leafextport_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems>();
        }
        return leafextport_items;
    }

    if(child_yang_name == "sensor-items")
    {
        if(sensor_items == nullptr)
        {
            sensor_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems>();
        }
        return sensor_items;
    }

    if(child_yang_name == "splc-items")
    {
        if(splc_items == nullptr)
        {
            splc_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems>();
        }
        return splc_items;
    }

    if(child_yang_name == "asic-items")
    {
        if(asic_items == nullptr)
        {
            asic_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems>();
        }
        return asic_items;
    }

    if(child_yang_name == "cpu-items")
    {
        if(cpu_items == nullptr)
        {
            cpu_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems>();
        }
        return cpu_items;
    }

    if(child_yang_name == "dimm-items")
    {
        if(dimm_items == nullptr)
        {
            dimm_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems>();
        }
        return dimm_items;
    }

    if(child_yang_name == "flash-items")
    {
        if(flash_items == nullptr)
        {
            flash_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems>();
        }
        return flash_items;
    }

    if(child_yang_name == "obfl-items")
    {
        if(obfl_items == nullptr)
        {
            obfl_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems>();
        }
        return obfl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(running_items != nullptr)
    {
        _children["running-items"] = running_items;
    }

    if(ej_items != nullptr)
    {
        _children["ej-items"] = ej_items;
    }

    if(locled_items != nullptr)
    {
        _children["locled-items"] = locled_items;
    }

    if(eobc_items != nullptr)
    {
        _children["eobc-items"] = eobc_items;
    }

    if(fabport_items != nullptr)
    {
        _children["fabport-items"] = fabport_items;
    }

    if(leafport_items != nullptr)
    {
        _children["leafport-items"] = leafport_items;
    }

    if(hostextport_items != nullptr)
    {
        _children["hostextport-items"] = hostextport_items;
    }

    if(leafextport_items != nullptr)
    {
        _children["leafextport-items"] = leafextport_items;
    }

    if(sensor_items != nullptr)
    {
        _children["sensor-items"] = sensor_items;
    }

    if(splc_items != nullptr)
    {
        _children["splc-items"] = splc_items;
    }

    if(asic_items != nullptr)
    {
        _children["asic-items"] = asic_items;
    }

    if(cpu_items != nullptr)
    {
        _children["cpu-items"] = cpu_items;
    }

    if(dimm_items != nullptr)
    {
        _children["dimm-items"] = dimm_items;
    }

    if(flash_items != nullptr)
    {
        _children["flash-items"] = flash_items;
    }

    if(obfl_items != nullptr)
    {
        _children["obfl-items"] = obfl_items;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "breakoutFactor")
    {
        breakoutfactor = value;
        breakoutfactor.value_namespace = name_space;
        breakoutfactor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swCId")
    {
        swcid = value;
        swcid.value_namespace = name_space;
        swcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numP")
    {
        nump = value;
        nump.value_namespace = name_space;
        nump.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macB")
    {
        macb = value;
        macb.value_namespace = name_space;
        macb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macE")
    {
        mace = value;
        mace.value_namespace = name_space;
        mace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTs")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrSt")
    {
        pwrst = value;
        pwrst.value_namespace = name_space;
        pwrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swVer")
    {
        swver = value;
        swver.value_namespace = name_space;
        swver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "powerActualDraw")
    {
        poweractualdraw = value;
        poweractualdraw.value_namespace = name_space;
        poweractualdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "powerAllocated")
    {
        powerallocated = value;
        powerallocated.value_namespace = name_space;
        powerallocated.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "breakoutFactor")
    {
        breakoutfactor.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "swCId")
    {
        swcid.yfilter = yfilter;
    }
    if(value_path == "numP")
    {
        nump.yfilter = yfilter;
    }
    if(value_path == "macB")
    {
        macb.yfilter = yfilter;
    }
    if(value_path == "macE")
    {
        mace.yfilter = yfilter;
    }
    if(value_path == "upTs")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "pwrSt")
    {
        pwrst.yfilter = yfilter;
    }
    if(value_path == "swVer")
    {
        swver.yfilter = yfilter;
    }
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "powerActualDraw")
    {
        poweractualdraw.yfilter = yfilter;
    }
    if(value_path == "powerAllocated")
    {
        powerallocated.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-items" || name == "ej-items" || name == "locled-items" || name == "eobc-items" || name == "fabport-items" || name == "leafport-items" || name == "hostextport-items" || name == "leafextport-items" || name == "sensor-items" || name == "splc-items" || name == "asic-items" || name == "cpu-items" || name == "dimm-items" || name == "flash-items" || name == "obfl-items" || name == "breakoutFactor" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer" || name == "type" || name == "operSt" || name == "swCId" || name == "numP" || name == "macB" || name == "macE" || name == "upTs" || name == "pwrSt" || name == "swVer" || name == "partNumber" || name == "vdrId" || name == "powerActualDraw" || name == "powerAllocated")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::RunningItems()
    :
    biosver{YType::str, "biosVer"},
    expectedver{YType::str, "expectedVer"},
    operst{YType::enumeration, "operSt"},
    interimver{YType::str, "interimVer"},
    version{YType::str, "version"},
    internallabel{YType::str, "internalLabel"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"},
    ts{YType::str, "ts"},
    descr{YType::str, "descr"}
{

    yang_name = "running-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::~RunningItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::has_data() const
{
    if (is_presence_container) return true;
    return biosver.is_set
	|| expectedver.is_set
	|| operst.is_set
	|| interimver.is_set
	|| version.is_set
	|| internallabel.is_set
	|| type.is_set
	|| mode.is_set
	|| ts.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(biosver.yfilter)
	|| ydk::is_set(expectedver.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(interimver.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(internallabel.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "running-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (biosver.is_set || is_set(biosver.yfilter)) leaf_name_data.push_back(biosver.get_name_leafdata());
    if (expectedver.is_set || is_set(expectedver.yfilter)) leaf_name_data.push_back(expectedver.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (interimver.is_set || is_set(interimver.yfilter)) leaf_name_data.push_back(interimver.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (internallabel.is_set || is_set(internallabel.yfilter)) leaf_name_data.push_back(internallabel.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "biosVer")
    {
        biosver = value;
        biosver.value_namespace = name_space;
        biosver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expectedVer")
    {
        expectedver = value;
        expectedver.value_namespace = name_space;
        expectedver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interimVer")
    {
        interimver = value;
        interimver.value_namespace = name_space;
        interimver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internalLabel")
    {
        internallabel = value;
        internallabel.value_namespace = name_space;
        internallabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ts")
    {
        ts = value;
        ts.value_namespace = name_space;
        ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "biosVer")
    {
        biosver.yfilter = yfilter;
    }
    if(value_path == "expectedVer")
    {
        expectedver.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "interimVer")
    {
        interimver.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "internalLabel")
    {
        internallabel.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "ts")
    {
        ts.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::RunningItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "biosVer" || name == "expectedVer" || name == "operSt" || name == "interimVer" || name == "version" || name == "internalLabel" || name == "type" || name == "mode" || name == "ts" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjItems()
    :
    ejec_list(this, {"id"})
{

    yang_name = "ej-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::~EjItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ejec_list.len(); index++)
    {
        if(ejec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::has_operation() const
{
    for (std::size_t index=0; index<ejec_list.len(); index++)
    {
        if(ejec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ej-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ejec-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList>();
        ent_->parent = this;
        ejec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ejec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ejec-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::EjecList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Ejec-list"; yang_parent_name = "ej-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::~EjecList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ejec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EjItems::EjecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::LocledItems()
    :
    locled_list(this, {"id"})
{

    yang_name = "locled-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::~LocledItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locled_list.len(); index++)
    {
        if(locled_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::has_operation() const
{
    for (std::size_t index=0; index<locled_list.len(); index++)
    {
        if(locled_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locled-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LocLed-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::LocLedList>();
        ent_->parent = this;
        locled_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : locled_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LocLed-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::LocLedList::LocLedList()
    :
    id{YType::uint32, "id"},
    model{YType::str, "model"},
    descr{YType::str, "descr"},
    color{YType::enumeration, "color"},
    operst{YType::enumeration, "operSt"},
    adminst{YType::enumeration, "adminSt"}
{

    yang_name = "LocLed-list"; yang_parent_name = "locled-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::LocLedList::~LocLedList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::LocLedList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| model.is_set
	|| descr.is_set
	|| color.is_set
	|| operst.is_set
	|| adminst.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::LocLedList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(adminst.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::LocLedList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LocLed-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::LocLedList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::LocLedList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::LocLedList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::LocLedList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::LocLedList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LocledItems::LocLedList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "model" || name == "descr" || name == "color" || name == "operSt" || name == "adminSt")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcItems()
    :
    eobcp_list(this, {"id"})
{

    yang_name = "eobc-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::~EobcItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eobcp_list.len(); index++)
    {
        if(eobcp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::has_operation() const
{
    for (std::size_t index=0; index<eobcp_list.len(); index++)
    {
        if(eobcp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eobc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EobcP-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList>();
        ent_->parent = this;
        eobcp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eobcp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EobcP-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::EobcPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "EobcP-list"; yang_parent_name = "eobc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::~EobcPList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EobcP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::EobcItems::EobcPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabportItems()
    :
    fabp_list(this, {"id"})
{

    yang_name = "fabport-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::~FabportItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fabp_list.len(); index++)
    {
        if(fabp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::has_operation() const
{
    for (std::size_t index=0; index<fabp_list.len(); index++)
    {
        if(fabp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fabport-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FabP-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList>();
        ent_->parent = this;
        fabp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fabp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FabP-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::FabPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    speed{YType::uint64, "speed"}
        ,
    remoteport_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems>())
    , locled_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems>())
{
    remoteport_items->parent = this;
    locled_items->parent = this;

    yang_name = "FabP-list"; yang_parent_name = "fabport-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::~FabPList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set
	|| speed.is_set
	|| (remoteport_items !=  nullptr && remoteport_items->has_data())
	|| (locled_items !=  nullptr && locled_items->has_data());
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| (remoteport_items !=  nullptr && remoteport_items->has_operation())
	|| (locled_items !=  nullptr && locled_items->has_operation());
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FabP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remotePort-items")
    {
        if(remoteport_items == nullptr)
        {
            remoteport_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems>();
        }
        return remoteport_items;
    }

    if(child_yang_name == "locled-items")
    {
        if(locled_items == nullptr)
        {
            locled_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems>();
        }
        return locled_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(remoteport_items != nullptr)
    {
        _children["remotePort-items"] = remoteport_items;
    }

    if(locled_items != nullptr)
    {
        _children["locled-items"] = locled_items;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remotePort-items" || name == "locled-items" || name == "id" || name == "descr" || name == "type" || name == "speed")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortItems()
    :
    remoteport_list(this, {"lldpadjepinstid"})
{

    yang_name = "remotePort-items"; yang_parent_name = "FabP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::~RemotePortItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remoteport_list.len(); index++)
    {
        if(remoteport_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::has_operation() const
{
    for (std::size_t index=0; index<remoteport_list.len(); index++)
    {
        if(remoteport_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remotePort-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "RemotePort-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList>();
        ent_->parent = this;
        remoteport_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remoteport_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "RemotePort-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::RemotePortList()
    :
    lldpadjepinstid{YType::str, "lldpAdjEpInstId"},
    remoteportdesc{YType::str, "remotePortDesc"},
    remotesysdesc{YType::str, "remoteSysDesc"},
    remoteip{YType::str, "remoteIp"},
    localifid{YType::str, "LocalIfid"}
{

    yang_name = "RemotePort-list"; yang_parent_name = "remotePort-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::~RemotePortList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::has_data() const
{
    if (is_presence_container) return true;
    return lldpadjepinstid.is_set
	|| remoteportdesc.is_set
	|| remotesysdesc.is_set
	|| remoteip.is_set
	|| localifid.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lldpadjepinstid.yfilter)
	|| ydk::is_set(remoteportdesc.yfilter)
	|| ydk::is_set(remotesysdesc.yfilter)
	|| ydk::is_set(remoteip.yfilter)
	|| ydk::is_set(localifid.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "RemotePort-list";
    ADD_KEY_TOKEN(lldpadjepinstid, "lldpAdjEpInstId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lldpadjepinstid.is_set || is_set(lldpadjepinstid.yfilter)) leaf_name_data.push_back(lldpadjepinstid.get_name_leafdata());
    if (remoteportdesc.is_set || is_set(remoteportdesc.yfilter)) leaf_name_data.push_back(remoteportdesc.get_name_leafdata());
    if (remotesysdesc.is_set || is_set(remotesysdesc.yfilter)) leaf_name_data.push_back(remotesysdesc.get_name_leafdata());
    if (remoteip.is_set || is_set(remoteip.yfilter)) leaf_name_data.push_back(remoteip.get_name_leafdata());
    if (localifid.is_set || is_set(localifid.yfilter)) leaf_name_data.push_back(localifid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lldpAdjEpInstId")
    {
        lldpadjepinstid = value;
        lldpadjepinstid.value_namespace = name_space;
        lldpadjepinstid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remotePortDesc")
    {
        remoteportdesc = value;
        remoteportdesc.value_namespace = name_space;
        remoteportdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteSysDesc")
    {
        remotesysdesc = value;
        remotesysdesc.value_namespace = name_space;
        remotesysdesc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remoteIp")
    {
        remoteip = value;
        remoteip.value_namespace = name_space;
        remoteip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LocalIfid")
    {
        localifid = value;
        localifid.value_namespace = name_space;
        localifid.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lldpAdjEpInstId")
    {
        lldpadjepinstid.yfilter = yfilter;
    }
    if(value_path == "remotePortDesc")
    {
        remoteportdesc.yfilter = yfilter;
    }
    if(value_path == "remoteSysDesc")
    {
        remotesysdesc.yfilter = yfilter;
    }
    if(value_path == "remoteIp")
    {
        remoteip.yfilter = yfilter;
    }
    if(value_path == "LocalIfid")
    {
        localifid.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::RemotePortItems::RemotePortList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lldpAdjEpInstId" || name == "remotePortDesc" || name == "remoteSysDesc" || name == "remoteIp" || name == "LocalIfid")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::LocledItems()
    :
    locled_list(this, {"id"})
{

    yang_name = "locled-items"; yang_parent_name = "FabP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::~LocledItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locled_list.len(); index++)
    {
        if(locled_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::has_operation() const
{
    for (std::size_t index=0; index<locled_list.len(); index++)
    {
        if(locled_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locled-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LocLed-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::LocLedList>();
        ent_->parent = this;
        locled_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : locled_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LocLed-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::LocLedList::LocLedList()
    :
    id{YType::uint32, "id"},
    model{YType::str, "model"},
    descr{YType::str, "descr"},
    color{YType::enumeration, "color"},
    operst{YType::enumeration, "operSt"},
    adminst{YType::enumeration, "adminSt"}
{

    yang_name = "LocLed-list"; yang_parent_name = "locled-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::LocLedList::~LocLedList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::LocLedList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| model.is_set
	|| descr.is_set
	|| color.is_set
	|| operst.is_set
	|| adminst.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::LocLedList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(adminst.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::LocLedList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LocLed-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::LocLedList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::LocLedList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::LocLedList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::LocLedList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::LocLedList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FabportItems::FabPList::LocledItems::LocLedList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "model" || name == "descr" || name == "color" || name == "operSt" || name == "adminSt")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafportItems()
    :
    leafp_list(this, {"id"})
{

    yang_name = "leafport-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::~LeafportItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<leafp_list.len(); index++)
    {
        if(leafp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::has_operation() const
{
    for (std::size_t index=0; index<leafp_list.len(); index++)
    {
        if(leafp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leafport-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LeafP-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList>();
        ent_->parent = this;
        leafp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : leafp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LeafP-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LeafPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    speed{YType::uint64, "speed"}
        ,
    locled_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems>())
{
    locled_items->parent = this;

    yang_name = "LeafP-list"; yang_parent_name = "leafport-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::~LeafPList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set
	|| speed.is_set
	|| (locled_items !=  nullptr && locled_items->has_data());
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| (locled_items !=  nullptr && locled_items->has_operation());
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LeafP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "locled-items")
    {
        if(locled_items == nullptr)
        {
            locled_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems>();
        }
        return locled_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(locled_items != nullptr)
    {
        _children["locled-items"] = locled_items;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locled-items" || name == "id" || name == "descr" || name == "type" || name == "speed")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::LocledItems()
    :
    locled_list(this, {"id"})
{

    yang_name = "locled-items"; yang_parent_name = "LeafP-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::~LocledItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locled_list.len(); index++)
    {
        if(locled_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::has_operation() const
{
    for (std::size_t index=0; index<locled_list.len(); index++)
    {
        if(locled_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locled-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LocLed-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::LocLedList>();
        ent_->parent = this;
        locled_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : locled_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LocLed-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::LocLedList::LocLedList()
    :
    id{YType::uint32, "id"},
    model{YType::str, "model"},
    descr{YType::str, "descr"},
    color{YType::enumeration, "color"},
    operst{YType::enumeration, "operSt"},
    adminst{YType::enumeration, "adminSt"}
{

    yang_name = "LocLed-list"; yang_parent_name = "locled-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::LocLedList::~LocLedList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::LocLedList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| model.is_set
	|| descr.is_set
	|| color.is_set
	|| operst.is_set
	|| adminst.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::LocLedList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(adminst.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::LocLedList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LocLed-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::LocLedList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::LocLedList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::LocLedList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::LocLedList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::LocLedList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafportItems::LeafPList::LocledItems::LocLedList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "model" || name == "descr" || name == "color" || name == "operSt" || name == "adminSt")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::HostextportItems()
    :
    extchhp_list(this, {"id"})
{

    yang_name = "hostextport-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::~HostextportItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extchhp_list.len(); index++)
    {
        if(extchhp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::has_operation() const
{
    for (std::size_t index=0; index<extchhp_list.len(); index++)
    {
        if(extchhp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostextport-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtChHP-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList>();
        ent_->parent = this;
        extchhp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extchhp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtChHP-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::ExtChHPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    speed{YType::uint64, "speed"}
{

    yang_name = "ExtChHP-list"; yang_parent_name = "hostextport-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::~ExtChHPList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set
	|| speed.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtChHP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::HostextportItems::ExtChHPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type" || name == "speed")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::LeafextportItems()
    :
    extchfp_list(this, {"id"})
{

    yang_name = "leafextport-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::~LeafextportItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extchfp_list.len(); index++)
    {
        if(extchfp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::has_operation() const
{
    for (std::size_t index=0; index<extchfp_list.len(); index++)
    {
        if(extchfp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leafextport-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtChFP-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList>();
        ent_->parent = this;
        extchfp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : extchfp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtChFP-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::ExtChFPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    speed{YType::uint64, "speed"}
{

    yang_name = "ExtChFP-list"; yang_parent_name = "leafextport-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::~ExtChFPList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set
	|| speed.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtChFP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::LeafextportItems::ExtChFPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type" || name == "speed")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorItems()
    :
    sensor_list(this, {"id"})
{

    yang_name = "sensor-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::~SensorItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::has_operation() const
{
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sensor-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList>();
        ent_->parent = this;
        sensor_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sensor-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::SensorList()
    :
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    majorthresh{YType::int16, "majorThresh"},
    minorthresh{YType::int16, "minorThresh"},
    operst{YType::enumeration, "operSt"},
    tempvalue{YType::uint16, "tempValue"},
    unit{YType::str, "unit"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    descr{YType::str, "descr"}
{

    yang_name = "Sensor-list"; yang_parent_name = "sensor-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::~SensorList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| majorthresh.is_set
	|| minorthresh.is_set
	|| operst.is_set
	|| tempvalue.is_set
	|| unit.is_set
	|| vendor.is_set
	|| model.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(majorthresh.yfilter)
	|| ydk::is_set(minorthresh.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(tempvalue.yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sensor-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (majorthresh.is_set || is_set(majorthresh.yfilter)) leaf_name_data.push_back(majorthresh.get_name_leafdata());
    if (minorthresh.is_set || is_set(minorthresh.yfilter)) leaf_name_data.push_back(minorthresh.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (tempvalue.is_set || is_set(tempvalue.yfilter)) leaf_name_data.push_back(tempvalue.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majorThresh")
    {
        majorthresh = value;
        majorthresh.value_namespace = name_space;
        majorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minorThresh")
    {
        minorthresh = value;
        minorthresh.value_namespace = name_space;
        minorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tempValue")
    {
        tempvalue = value;
        tempvalue.value_namespace = name_space;
        tempvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "majorThresh")
    {
        majorthresh.yfilter = yfilter;
    }
    if(value_path == "minorThresh")
    {
        minorthresh.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "tempValue")
    {
        tempvalue.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SensorItems::SensorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "majorThresh" || name == "minorThresh" || name == "operSt" || name == "tempValue" || name == "unit" || name == "vendor" || name == "model" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"},
    numblk{YType::uint16, "numBlk"}
        ,
    spcmn_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems>())
    , splcblk_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems>())
    , sppd_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems>())
    , spsd_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems>())
    , spsensorblk_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems>())
{
    spcmn_items->parent = this;
    splcblk_items->parent = this;
    sppd_items->parent = this;
    spsd_items->parent = this;
    spsensorblk_items->parent = this;

    yang_name = "splc-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::~SplcItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| rev.is_set
	|| ser.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set
	|| numblk.is_set
	|| (spcmn_items !=  nullptr && spcmn_items->has_data())
	|| (splcblk_items !=  nullptr && splcblk_items->has_data())
	|| (sppd_items !=  nullptr && sppd_items->has_data())
	|| (spsd_items !=  nullptr && spsd_items->has_data())
	|| (spsensorblk_items !=  nullptr && spsensorblk_items->has_data());
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numblk.yfilter)
	|| (spcmn_items !=  nullptr && spcmn_items->has_operation())
	|| (splcblk_items !=  nullptr && splcblk_items->has_operation())
	|| (sppd_items !=  nullptr && sppd_items->has_operation())
	|| (spsd_items !=  nullptr && spsd_items->has_operation())
	|| (spsensorblk_items !=  nullptr && spsensorblk_items->has_operation());
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "splc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numblk.is_set || is_set(numblk.yfilter)) leaf_name_data.push_back(numblk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spcmn-items")
    {
        if(spcmn_items == nullptr)
        {
            spcmn_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems>();
        }
        return spcmn_items;
    }

    if(child_yang_name == "splcblk-items")
    {
        if(splcblk_items == nullptr)
        {
            splcblk_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems>();
        }
        return splcblk_items;
    }

    if(child_yang_name == "sppd-items")
    {
        if(sppd_items == nullptr)
        {
            sppd_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems>();
        }
        return sppd_items;
    }

    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems>();
        }
        return spsd_items;
    }

    if(child_yang_name == "spsensorblk-items")
    {
        if(spsensorblk_items == nullptr)
        {
            spsensorblk_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems>();
        }
        return spsensorblk_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spcmn_items != nullptr)
    {
        _children["spcmn-items"] = spcmn_items;
    }

    if(splcblk_items != nullptr)
    {
        _children["splcblk-items"] = splcblk_items;
    }

    if(sppd_items != nullptr)
    {
        _children["sppd-items"] = sppd_items;
    }

    if(spsd_items != nullptr)
    {
        _children["spsd-items"] = spsd_items;
    }

    if(spsensorblk_items != nullptr)
    {
        _children["spsensorblk-items"] = spsensorblk_items;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numBlk")
    {
        numblk = value;
        numblk.value_namespace = name_space;
        numblk.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numBlk")
    {
        numblk.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spcmn-items" || name == "splcblk-items" || name == "sppd-items" || name == "spsd-items" || name == "spsensorblk-items" || name == "id" || name == "vendor" || name == "rev" || name == "ser" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt" || name == "numBlk")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::SpcmnItems()
    :
    size{YType::uint16, "size"},
    count{YType::uint16, "count"},
    major_{YType::uint16, "major"},
    minor{YType::uint16, "minor"},
    oem{YType::str, "oem"},
    pdnum{YType::str, "pdNum"},
    sernum{YType::str, "serNum"},
    prtnum{YType::str, "prtNum"},
    prev{YType::str, "pRev"},
    mfgdev{YType::str, "mfgDev"},
    hwver{YType::str, "hwVer"},
    mfgbits{YType::uint16, "mfgBits"},
    engbits{YType::uint16, "engBits"},
    pwrcon{YType::int16, "pwrCon"},
    rmafl{YType::str, "rmaFl"},
    clei{YType::str, "clei"},
    vdrid{YType::str, "vdrId"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spcmn-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::~SpcmnItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| count.is_set
	|| major_.is_set
	|| minor.is_set
	|| oem.is_set
	|| pdnum.is_set
	|| sernum.is_set
	|| prtnum.is_set
	|| prev.is_set
	|| mfgdev.is_set
	|| hwver.is_set
	|| mfgbits.is_set
	|| engbits.is_set
	|| pwrcon.is_set
	|| rmafl.is_set
	|| clei.is_set
	|| vdrid.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(major_.yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(oem.yfilter)
	|| ydk::is_set(pdnum.yfilter)
	|| ydk::is_set(sernum.yfilter)
	|| ydk::is_set(prtnum.yfilter)
	|| ydk::is_set(prev.yfilter)
	|| ydk::is_set(mfgdev.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(mfgbits.yfilter)
	|| ydk::is_set(engbits.yfilter)
	|| ydk::is_set(pwrcon.yfilter)
	|| ydk::is_set(rmafl.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spcmn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (major_.is_set || is_set(major_.yfilter)) leaf_name_data.push_back(major_.get_name_leafdata());
    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (oem.is_set || is_set(oem.yfilter)) leaf_name_data.push_back(oem.get_name_leafdata());
    if (pdnum.is_set || is_set(pdnum.yfilter)) leaf_name_data.push_back(pdnum.get_name_leafdata());
    if (sernum.is_set || is_set(sernum.yfilter)) leaf_name_data.push_back(sernum.get_name_leafdata());
    if (prtnum.is_set || is_set(prtnum.yfilter)) leaf_name_data.push_back(prtnum.get_name_leafdata());
    if (prev.is_set || is_set(prev.yfilter)) leaf_name_data.push_back(prev.get_name_leafdata());
    if (mfgdev.is_set || is_set(mfgdev.yfilter)) leaf_name_data.push_back(mfgdev.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (mfgbits.is_set || is_set(mfgbits.yfilter)) leaf_name_data.push_back(mfgbits.get_name_leafdata());
    if (engbits.is_set || is_set(engbits.yfilter)) leaf_name_data.push_back(engbits.get_name_leafdata());
    if (pwrcon.is_set || is_set(pwrcon.yfilter)) leaf_name_data.push_back(pwrcon.get_name_leafdata());
    if (rmafl.is_set || is_set(rmafl.yfilter)) leaf_name_data.push_back(rmafl.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major")
    {
        major_ = value;
        major_.value_namespace = name_space;
        major_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oem")
    {
        oem = value;
        oem.value_namespace = name_space;
        oem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdNum")
    {
        pdnum = value;
        pdnum.value_namespace = name_space;
        pdnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serNum")
    {
        sernum = value;
        sernum.value_namespace = name_space;
        sernum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prtNum")
    {
        prtnum = value;
        prtnum.value_namespace = name_space;
        prtnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pRev")
    {
        prev = value;
        prev.value_namespace = name_space;
        prev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgDev")
    {
        mfgdev = value;
        mfgdev.value_namespace = name_space;
        mfgdev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgBits")
    {
        mfgbits = value;
        mfgbits.value_namespace = name_space;
        mfgbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engBits")
    {
        engbits = value;
        engbits.value_namespace = name_space;
        engbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrCon")
    {
        pwrcon = value;
        pwrcon.value_namespace = name_space;
        pwrcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rmaFl")
    {
        rmafl = value;
        rmafl.value_namespace = name_space;
        rmafl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "major")
    {
        major_.yfilter = yfilter;
    }
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "oem")
    {
        oem.yfilter = yfilter;
    }
    if(value_path == "pdNum")
    {
        pdnum.yfilter = yfilter;
    }
    if(value_path == "serNum")
    {
        sernum.yfilter = yfilter;
    }
    if(value_path == "prtNum")
    {
        prtnum.yfilter = yfilter;
    }
    if(value_path == "pRev")
    {
        prev.yfilter = yfilter;
    }
    if(value_path == "mfgDev")
    {
        mfgdev.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "mfgBits")
    {
        mfgbits.yfilter = yfilter;
    }
    if(value_path == "engBits")
    {
        engbits.yfilter = yfilter;
    }
    if(value_path == "pwrCon")
    {
        pwrcon.yfilter = yfilter;
    }
    if(value_path == "rmaFl")
    {
        rmafl.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpcmnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "count" || name == "major" || name == "minor" || name == "oem" || name == "pdNum" || name == "serNum" || name == "prtNum" || name == "pRev" || name == "mfgDev" || name == "hwVer" || name == "mfgBits" || name == "engBits" || name == "pwrCon" || name == "rmaFl" || name == "clei" || name == "vdrId" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SplcblkItems()
    :
    fbits{YType::uint64, "fbits"},
    hwcbits{YType::uint64, "hwCBits"},
    crdidx{YType::uint16, "crdIdx"},
    macb{YType::str, "macB"},
    macl{YType::uint16, "macL"},
    eobcn{YType::uint16, "eobcN"},
    epldn{YType::uint16, "epldN"},
    maxcpwr{YType::uint16, "maxCPwr"},
    coolrq{YType::uint16, "coolRq"},
    ambt{YType::uint16, "ambT"},
    sensor1{YType::str, "sensor1"},
    sensor2{YType::str, "sensor2"},
    sensor3{YType::str, "sensor3"},
    sensor4{YType::str, "sensor4"},
    sensor5{YType::str, "sensor5"},
    sensor6{YType::str, "sensor6"},
    sensor7{YType::str, "sensor7"},
    sensor8{YType::str, "sensor8"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
        ,
    spsd_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems>())
    , sppd_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems>())
{
    spsd_items->parent = this;
    sppd_items->parent = this;

    yang_name = "splcblk-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::~SplcblkItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::has_data() const
{
    if (is_presence_container) return true;
    return fbits.is_set
	|| hwcbits.is_set
	|| crdidx.is_set
	|| macb.is_set
	|| macl.is_set
	|| eobcn.is_set
	|| epldn.is_set
	|| maxcpwr.is_set
	|| coolrq.is_set
	|| ambt.is_set
	|| sensor1.is_set
	|| sensor2.is_set
	|| sensor3.is_set
	|| sensor4.is_set
	|| sensor5.is_set
	|| sensor6.is_set
	|| sensor7.is_set
	|| sensor8.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set
	|| (spsd_items !=  nullptr && spsd_items->has_data())
	|| (sppd_items !=  nullptr && sppd_items->has_data());
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fbits.yfilter)
	|| ydk::is_set(hwcbits.yfilter)
	|| ydk::is_set(crdidx.yfilter)
	|| ydk::is_set(macb.yfilter)
	|| ydk::is_set(macl.yfilter)
	|| ydk::is_set(eobcn.yfilter)
	|| ydk::is_set(epldn.yfilter)
	|| ydk::is_set(maxcpwr.yfilter)
	|| ydk::is_set(coolrq.yfilter)
	|| ydk::is_set(ambt.yfilter)
	|| ydk::is_set(sensor1.yfilter)
	|| ydk::is_set(sensor2.yfilter)
	|| ydk::is_set(sensor3.yfilter)
	|| ydk::is_set(sensor4.yfilter)
	|| ydk::is_set(sensor5.yfilter)
	|| ydk::is_set(sensor6.yfilter)
	|| ydk::is_set(sensor7.yfilter)
	|| ydk::is_set(sensor8.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| (spsd_items !=  nullptr && spsd_items->has_operation())
	|| (sppd_items !=  nullptr && sppd_items->has_operation());
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "splcblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fbits.is_set || is_set(fbits.yfilter)) leaf_name_data.push_back(fbits.get_name_leafdata());
    if (hwcbits.is_set || is_set(hwcbits.yfilter)) leaf_name_data.push_back(hwcbits.get_name_leafdata());
    if (crdidx.is_set || is_set(crdidx.yfilter)) leaf_name_data.push_back(crdidx.get_name_leafdata());
    if (macb.is_set || is_set(macb.yfilter)) leaf_name_data.push_back(macb.get_name_leafdata());
    if (macl.is_set || is_set(macl.yfilter)) leaf_name_data.push_back(macl.get_name_leafdata());
    if (eobcn.is_set || is_set(eobcn.yfilter)) leaf_name_data.push_back(eobcn.get_name_leafdata());
    if (epldn.is_set || is_set(epldn.yfilter)) leaf_name_data.push_back(epldn.get_name_leafdata());
    if (maxcpwr.is_set || is_set(maxcpwr.yfilter)) leaf_name_data.push_back(maxcpwr.get_name_leafdata());
    if (coolrq.is_set || is_set(coolrq.yfilter)) leaf_name_data.push_back(coolrq.get_name_leafdata());
    if (ambt.is_set || is_set(ambt.yfilter)) leaf_name_data.push_back(ambt.get_name_leafdata());
    if (sensor1.is_set || is_set(sensor1.yfilter)) leaf_name_data.push_back(sensor1.get_name_leafdata());
    if (sensor2.is_set || is_set(sensor2.yfilter)) leaf_name_data.push_back(sensor2.get_name_leafdata());
    if (sensor3.is_set || is_set(sensor3.yfilter)) leaf_name_data.push_back(sensor3.get_name_leafdata());
    if (sensor4.is_set || is_set(sensor4.yfilter)) leaf_name_data.push_back(sensor4.get_name_leafdata());
    if (sensor5.is_set || is_set(sensor5.yfilter)) leaf_name_data.push_back(sensor5.get_name_leafdata());
    if (sensor6.is_set || is_set(sensor6.yfilter)) leaf_name_data.push_back(sensor6.get_name_leafdata());
    if (sensor7.is_set || is_set(sensor7.yfilter)) leaf_name_data.push_back(sensor7.get_name_leafdata());
    if (sensor8.is_set || is_set(sensor8.yfilter)) leaf_name_data.push_back(sensor8.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems>();
        }
        return spsd_items;
    }

    if(child_yang_name == "sppd-items")
    {
        if(sppd_items == nullptr)
        {
            sppd_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems>();
        }
        return sppd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spsd_items != nullptr)
    {
        _children["spsd-items"] = spsd_items;
    }

    if(sppd_items != nullptr)
    {
        _children["sppd-items"] = sppd_items;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fbits")
    {
        fbits = value;
        fbits.value_namespace = name_space;
        fbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwCBits")
    {
        hwcbits = value;
        hwcbits.value_namespace = name_space;
        hwcbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crdIdx")
    {
        crdidx = value;
        crdidx.value_namespace = name_space;
        crdidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macB")
    {
        macb = value;
        macb.value_namespace = name_space;
        macb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macL")
    {
        macl = value;
        macl.value_namespace = name_space;
        macl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eobcN")
    {
        eobcn = value;
        eobcn.value_namespace = name_space;
        eobcn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epldN")
    {
        epldn = value;
        epldn.value_namespace = name_space;
        epldn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr = value;
        maxcpwr.value_namespace = name_space;
        maxcpwr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coolRq")
    {
        coolrq = value;
        coolrq.value_namespace = name_space;
        coolrq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ambT")
    {
        ambt = value;
        ambt.value_namespace = name_space;
        ambt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor1")
    {
        sensor1 = value;
        sensor1.value_namespace = name_space;
        sensor1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor2")
    {
        sensor2 = value;
        sensor2.value_namespace = name_space;
        sensor2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor3")
    {
        sensor3 = value;
        sensor3.value_namespace = name_space;
        sensor3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor4")
    {
        sensor4 = value;
        sensor4.value_namespace = name_space;
        sensor4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor5")
    {
        sensor5 = value;
        sensor5.value_namespace = name_space;
        sensor5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor6")
    {
        sensor6 = value;
        sensor6.value_namespace = name_space;
        sensor6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor7")
    {
        sensor7 = value;
        sensor7.value_namespace = name_space;
        sensor7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor8")
    {
        sensor8 = value;
        sensor8.value_namespace = name_space;
        sensor8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fbits")
    {
        fbits.yfilter = yfilter;
    }
    if(value_path == "hwCBits")
    {
        hwcbits.yfilter = yfilter;
    }
    if(value_path == "crdIdx")
    {
        crdidx.yfilter = yfilter;
    }
    if(value_path == "macB")
    {
        macb.yfilter = yfilter;
    }
    if(value_path == "macL")
    {
        macl.yfilter = yfilter;
    }
    if(value_path == "eobcN")
    {
        eobcn.yfilter = yfilter;
    }
    if(value_path == "epldN")
    {
        epldn.yfilter = yfilter;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr.yfilter = yfilter;
    }
    if(value_path == "coolRq")
    {
        coolrq.yfilter = yfilter;
    }
    if(value_path == "ambT")
    {
        ambt.yfilter = yfilter;
    }
    if(value_path == "sensor1")
    {
        sensor1.yfilter = yfilter;
    }
    if(value_path == "sensor2")
    {
        sensor2.yfilter = yfilter;
    }
    if(value_path == "sensor3")
    {
        sensor3.yfilter = yfilter;
    }
    if(value_path == "sensor4")
    {
        sensor4.yfilter = yfilter;
    }
    if(value_path == "sensor5")
    {
        sensor5.yfilter = yfilter;
    }
    if(value_path == "sensor6")
    {
        sensor6.yfilter = yfilter;
    }
    if(value_path == "sensor7")
    {
        sensor7.yfilter = yfilter;
    }
    if(value_path == "sensor8")
    {
        sensor8.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spsd-items" || name == "sppd-items" || name == "fbits" || name == "hwCBits" || name == "crdIdx" || name == "macB" || name == "macL" || name == "eobcN" || name == "epldN" || name == "maxCPwr" || name == "coolRq" || name == "ambT" || name == "sensor1" || name == "sensor2" || name == "sensor3" || name == "sensor4" || name == "sensor5" || name == "sensor6" || name == "sensor7" || name == "sensor8" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "splcblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::~SpsdItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList>();
        ent_->parent = this;
        spsd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : spsd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::SppdItems()
    :
    prtty{YType::uint16, "prtTy"},
    numpts{YType::uint16, "numPts"}
{

    yang_name = "sppd-items"; yang_parent_name = "splcblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::~SppdItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::has_data() const
{
    if (is_presence_container) return true;
    return prtty.is_set
	|| numpts.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prtty.yfilter)
	|| ydk::is_set(numpts.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sppd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prtty.is_set || is_set(prtty.yfilter)) leaf_name_data.push_back(prtty.get_name_leafdata());
    if (numpts.is_set || is_set(numpts.yfilter)) leaf_name_data.push_back(numpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prtTy")
    {
        prtty = value;
        prtty.value_namespace = name_space;
        prtty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPts")
    {
        numpts = value;
        numpts.value_namespace = name_space;
        numpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prtTy")
    {
        prtty.yfilter = yfilter;
    }
    if(value_path == "numPts")
    {
        numpts.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SplcblkItems::SppdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prtTy" || name == "numPts")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::SppdItems()
    :
    prtty{YType::uint16, "prtTy"},
    numpts{YType::uint16, "numPts"}
{

    yang_name = "sppd-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::~SppdItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::has_data() const
{
    if (is_presence_container) return true;
    return prtty.is_set
	|| numpts.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prtty.yfilter)
	|| ydk::is_set(numpts.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sppd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prtty.is_set || is_set(prtty.yfilter)) leaf_name_data.push_back(prtty.get_name_leafdata());
    if (numpts.is_set || is_set(numpts.yfilter)) leaf_name_data.push_back(numpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prtTy")
    {
        prtty = value;
        prtty.value_namespace = name_space;
        prtty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPts")
    {
        numpts = value;
        numpts.value_namespace = name_space;
        numpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prtTy")
    {
        prtty.yfilter = yfilter;
    }
    if(value_path == "numPts")
    {
        numpts.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SppdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prtTy" || name == "numPts")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::~SpsdItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList>();
        ent_->parent = this;
        spsd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : spsd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsensorblkItems()
    :
    sensor9{YType::str, "sensor9"},
    sensor10{YType::str, "sensor10"},
    sensor11{YType::str, "sensor11"},
    sensor12{YType::str, "sensor12"},
    sensor13{YType::str, "sensor13"},
    sensor14{YType::str, "sensor14"},
    sensor15{YType::str, "sensor15"},
    sensor16{YType::str, "sensor16"},
    sensor17{YType::str, "sensor17"},
    sensor18{YType::str, "sensor18"},
    sensor19{YType::str, "sensor19"},
    sensor20{YType::str, "sensor20"},
    sensor21{YType::str, "sensor21"},
    sensor22{YType::str, "sensor22"},
    sensor23{YType::str, "sensor23"},
    sensor24{YType::str, "sensor24"},
    sensor25{YType::str, "sensor25"},
    sensor26{YType::str, "sensor26"},
    sensor27{YType::str, "sensor27"},
    sensor28{YType::str, "sensor28"},
    sensor29{YType::str, "sensor29"},
    sensor30{YType::str, "sensor30"},
    sensor31{YType::str, "sensor31"},
    sensor32{YType::str, "sensor32"},
    sensor33{YType::str, "sensor33"},
    sensor34{YType::str, "sensor34"},
    sensor35{YType::str, "sensor35"},
    sensor36{YType::str, "sensor36"},
    sensor37{YType::str, "sensor37"},
    sensor38{YType::str, "sensor38"},
    sensor39{YType::str, "sensor39"},
    sensor40{YType::str, "sensor40"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
        ,
    spsd_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems>())
{
    spsd_items->parent = this;

    yang_name = "spsensorblk-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::~SpsensorblkItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::has_data() const
{
    if (is_presence_container) return true;
    return sensor9.is_set
	|| sensor10.is_set
	|| sensor11.is_set
	|| sensor12.is_set
	|| sensor13.is_set
	|| sensor14.is_set
	|| sensor15.is_set
	|| sensor16.is_set
	|| sensor17.is_set
	|| sensor18.is_set
	|| sensor19.is_set
	|| sensor20.is_set
	|| sensor21.is_set
	|| sensor22.is_set
	|| sensor23.is_set
	|| sensor24.is_set
	|| sensor25.is_set
	|| sensor26.is_set
	|| sensor27.is_set
	|| sensor28.is_set
	|| sensor29.is_set
	|| sensor30.is_set
	|| sensor31.is_set
	|| sensor32.is_set
	|| sensor33.is_set
	|| sensor34.is_set
	|| sensor35.is_set
	|| sensor36.is_set
	|| sensor37.is_set
	|| sensor38.is_set
	|| sensor39.is_set
	|| sensor40.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set
	|| (spsd_items !=  nullptr && spsd_items->has_data());
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor9.yfilter)
	|| ydk::is_set(sensor10.yfilter)
	|| ydk::is_set(sensor11.yfilter)
	|| ydk::is_set(sensor12.yfilter)
	|| ydk::is_set(sensor13.yfilter)
	|| ydk::is_set(sensor14.yfilter)
	|| ydk::is_set(sensor15.yfilter)
	|| ydk::is_set(sensor16.yfilter)
	|| ydk::is_set(sensor17.yfilter)
	|| ydk::is_set(sensor18.yfilter)
	|| ydk::is_set(sensor19.yfilter)
	|| ydk::is_set(sensor20.yfilter)
	|| ydk::is_set(sensor21.yfilter)
	|| ydk::is_set(sensor22.yfilter)
	|| ydk::is_set(sensor23.yfilter)
	|| ydk::is_set(sensor24.yfilter)
	|| ydk::is_set(sensor25.yfilter)
	|| ydk::is_set(sensor26.yfilter)
	|| ydk::is_set(sensor27.yfilter)
	|| ydk::is_set(sensor28.yfilter)
	|| ydk::is_set(sensor29.yfilter)
	|| ydk::is_set(sensor30.yfilter)
	|| ydk::is_set(sensor31.yfilter)
	|| ydk::is_set(sensor32.yfilter)
	|| ydk::is_set(sensor33.yfilter)
	|| ydk::is_set(sensor34.yfilter)
	|| ydk::is_set(sensor35.yfilter)
	|| ydk::is_set(sensor36.yfilter)
	|| ydk::is_set(sensor37.yfilter)
	|| ydk::is_set(sensor38.yfilter)
	|| ydk::is_set(sensor39.yfilter)
	|| ydk::is_set(sensor40.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| (spsd_items !=  nullptr && spsd_items->has_operation());
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsensorblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor9.is_set || is_set(sensor9.yfilter)) leaf_name_data.push_back(sensor9.get_name_leafdata());
    if (sensor10.is_set || is_set(sensor10.yfilter)) leaf_name_data.push_back(sensor10.get_name_leafdata());
    if (sensor11.is_set || is_set(sensor11.yfilter)) leaf_name_data.push_back(sensor11.get_name_leafdata());
    if (sensor12.is_set || is_set(sensor12.yfilter)) leaf_name_data.push_back(sensor12.get_name_leafdata());
    if (sensor13.is_set || is_set(sensor13.yfilter)) leaf_name_data.push_back(sensor13.get_name_leafdata());
    if (sensor14.is_set || is_set(sensor14.yfilter)) leaf_name_data.push_back(sensor14.get_name_leafdata());
    if (sensor15.is_set || is_set(sensor15.yfilter)) leaf_name_data.push_back(sensor15.get_name_leafdata());
    if (sensor16.is_set || is_set(sensor16.yfilter)) leaf_name_data.push_back(sensor16.get_name_leafdata());
    if (sensor17.is_set || is_set(sensor17.yfilter)) leaf_name_data.push_back(sensor17.get_name_leafdata());
    if (sensor18.is_set || is_set(sensor18.yfilter)) leaf_name_data.push_back(sensor18.get_name_leafdata());
    if (sensor19.is_set || is_set(sensor19.yfilter)) leaf_name_data.push_back(sensor19.get_name_leafdata());
    if (sensor20.is_set || is_set(sensor20.yfilter)) leaf_name_data.push_back(sensor20.get_name_leafdata());
    if (sensor21.is_set || is_set(sensor21.yfilter)) leaf_name_data.push_back(sensor21.get_name_leafdata());
    if (sensor22.is_set || is_set(sensor22.yfilter)) leaf_name_data.push_back(sensor22.get_name_leafdata());
    if (sensor23.is_set || is_set(sensor23.yfilter)) leaf_name_data.push_back(sensor23.get_name_leafdata());
    if (sensor24.is_set || is_set(sensor24.yfilter)) leaf_name_data.push_back(sensor24.get_name_leafdata());
    if (sensor25.is_set || is_set(sensor25.yfilter)) leaf_name_data.push_back(sensor25.get_name_leafdata());
    if (sensor26.is_set || is_set(sensor26.yfilter)) leaf_name_data.push_back(sensor26.get_name_leafdata());
    if (sensor27.is_set || is_set(sensor27.yfilter)) leaf_name_data.push_back(sensor27.get_name_leafdata());
    if (sensor28.is_set || is_set(sensor28.yfilter)) leaf_name_data.push_back(sensor28.get_name_leafdata());
    if (sensor29.is_set || is_set(sensor29.yfilter)) leaf_name_data.push_back(sensor29.get_name_leafdata());
    if (sensor30.is_set || is_set(sensor30.yfilter)) leaf_name_data.push_back(sensor30.get_name_leafdata());
    if (sensor31.is_set || is_set(sensor31.yfilter)) leaf_name_data.push_back(sensor31.get_name_leafdata());
    if (sensor32.is_set || is_set(sensor32.yfilter)) leaf_name_data.push_back(sensor32.get_name_leafdata());
    if (sensor33.is_set || is_set(sensor33.yfilter)) leaf_name_data.push_back(sensor33.get_name_leafdata());
    if (sensor34.is_set || is_set(sensor34.yfilter)) leaf_name_data.push_back(sensor34.get_name_leafdata());
    if (sensor35.is_set || is_set(sensor35.yfilter)) leaf_name_data.push_back(sensor35.get_name_leafdata());
    if (sensor36.is_set || is_set(sensor36.yfilter)) leaf_name_data.push_back(sensor36.get_name_leafdata());
    if (sensor37.is_set || is_set(sensor37.yfilter)) leaf_name_data.push_back(sensor37.get_name_leafdata());
    if (sensor38.is_set || is_set(sensor38.yfilter)) leaf_name_data.push_back(sensor38.get_name_leafdata());
    if (sensor39.is_set || is_set(sensor39.yfilter)) leaf_name_data.push_back(sensor39.get_name_leafdata());
    if (sensor40.is_set || is_set(sensor40.yfilter)) leaf_name_data.push_back(sensor40.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems>();
        }
        return spsd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spsd_items != nullptr)
    {
        _children["spsd-items"] = spsd_items;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor9")
    {
        sensor9 = value;
        sensor9.value_namespace = name_space;
        sensor9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor10")
    {
        sensor10 = value;
        sensor10.value_namespace = name_space;
        sensor10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor11")
    {
        sensor11 = value;
        sensor11.value_namespace = name_space;
        sensor11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor12")
    {
        sensor12 = value;
        sensor12.value_namespace = name_space;
        sensor12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor13")
    {
        sensor13 = value;
        sensor13.value_namespace = name_space;
        sensor13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor14")
    {
        sensor14 = value;
        sensor14.value_namespace = name_space;
        sensor14.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor15")
    {
        sensor15 = value;
        sensor15.value_namespace = name_space;
        sensor15.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor16")
    {
        sensor16 = value;
        sensor16.value_namespace = name_space;
        sensor16.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor17")
    {
        sensor17 = value;
        sensor17.value_namespace = name_space;
        sensor17.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor18")
    {
        sensor18 = value;
        sensor18.value_namespace = name_space;
        sensor18.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor19")
    {
        sensor19 = value;
        sensor19.value_namespace = name_space;
        sensor19.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor20")
    {
        sensor20 = value;
        sensor20.value_namespace = name_space;
        sensor20.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor21")
    {
        sensor21 = value;
        sensor21.value_namespace = name_space;
        sensor21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor22")
    {
        sensor22 = value;
        sensor22.value_namespace = name_space;
        sensor22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor23")
    {
        sensor23 = value;
        sensor23.value_namespace = name_space;
        sensor23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor24")
    {
        sensor24 = value;
        sensor24.value_namespace = name_space;
        sensor24.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor25")
    {
        sensor25 = value;
        sensor25.value_namespace = name_space;
        sensor25.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor26")
    {
        sensor26 = value;
        sensor26.value_namespace = name_space;
        sensor26.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor27")
    {
        sensor27 = value;
        sensor27.value_namespace = name_space;
        sensor27.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor28")
    {
        sensor28 = value;
        sensor28.value_namespace = name_space;
        sensor28.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor29")
    {
        sensor29 = value;
        sensor29.value_namespace = name_space;
        sensor29.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor30")
    {
        sensor30 = value;
        sensor30.value_namespace = name_space;
        sensor30.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor31")
    {
        sensor31 = value;
        sensor31.value_namespace = name_space;
        sensor31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor32")
    {
        sensor32 = value;
        sensor32.value_namespace = name_space;
        sensor32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor33")
    {
        sensor33 = value;
        sensor33.value_namespace = name_space;
        sensor33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor34")
    {
        sensor34 = value;
        sensor34.value_namespace = name_space;
        sensor34.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor35")
    {
        sensor35 = value;
        sensor35.value_namespace = name_space;
        sensor35.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor36")
    {
        sensor36 = value;
        sensor36.value_namespace = name_space;
        sensor36.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor37")
    {
        sensor37 = value;
        sensor37.value_namespace = name_space;
        sensor37.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor38")
    {
        sensor38 = value;
        sensor38.value_namespace = name_space;
        sensor38.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor39")
    {
        sensor39 = value;
        sensor39.value_namespace = name_space;
        sensor39.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor40")
    {
        sensor40 = value;
        sensor40.value_namespace = name_space;
        sensor40.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor9")
    {
        sensor9.yfilter = yfilter;
    }
    if(value_path == "sensor10")
    {
        sensor10.yfilter = yfilter;
    }
    if(value_path == "sensor11")
    {
        sensor11.yfilter = yfilter;
    }
    if(value_path == "sensor12")
    {
        sensor12.yfilter = yfilter;
    }
    if(value_path == "sensor13")
    {
        sensor13.yfilter = yfilter;
    }
    if(value_path == "sensor14")
    {
        sensor14.yfilter = yfilter;
    }
    if(value_path == "sensor15")
    {
        sensor15.yfilter = yfilter;
    }
    if(value_path == "sensor16")
    {
        sensor16.yfilter = yfilter;
    }
    if(value_path == "sensor17")
    {
        sensor17.yfilter = yfilter;
    }
    if(value_path == "sensor18")
    {
        sensor18.yfilter = yfilter;
    }
    if(value_path == "sensor19")
    {
        sensor19.yfilter = yfilter;
    }
    if(value_path == "sensor20")
    {
        sensor20.yfilter = yfilter;
    }
    if(value_path == "sensor21")
    {
        sensor21.yfilter = yfilter;
    }
    if(value_path == "sensor22")
    {
        sensor22.yfilter = yfilter;
    }
    if(value_path == "sensor23")
    {
        sensor23.yfilter = yfilter;
    }
    if(value_path == "sensor24")
    {
        sensor24.yfilter = yfilter;
    }
    if(value_path == "sensor25")
    {
        sensor25.yfilter = yfilter;
    }
    if(value_path == "sensor26")
    {
        sensor26.yfilter = yfilter;
    }
    if(value_path == "sensor27")
    {
        sensor27.yfilter = yfilter;
    }
    if(value_path == "sensor28")
    {
        sensor28.yfilter = yfilter;
    }
    if(value_path == "sensor29")
    {
        sensor29.yfilter = yfilter;
    }
    if(value_path == "sensor30")
    {
        sensor30.yfilter = yfilter;
    }
    if(value_path == "sensor31")
    {
        sensor31.yfilter = yfilter;
    }
    if(value_path == "sensor32")
    {
        sensor32.yfilter = yfilter;
    }
    if(value_path == "sensor33")
    {
        sensor33.yfilter = yfilter;
    }
    if(value_path == "sensor34")
    {
        sensor34.yfilter = yfilter;
    }
    if(value_path == "sensor35")
    {
        sensor35.yfilter = yfilter;
    }
    if(value_path == "sensor36")
    {
        sensor36.yfilter = yfilter;
    }
    if(value_path == "sensor37")
    {
        sensor37.yfilter = yfilter;
    }
    if(value_path == "sensor38")
    {
        sensor38.yfilter = yfilter;
    }
    if(value_path == "sensor39")
    {
        sensor39.yfilter = yfilter;
    }
    if(value_path == "sensor40")
    {
        sensor40.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spsd-items" || name == "sensor9" || name == "sensor10" || name == "sensor11" || name == "sensor12" || name == "sensor13" || name == "sensor14" || name == "sensor15" || name == "sensor16" || name == "sensor17" || name == "sensor18" || name == "sensor19" || name == "sensor20" || name == "sensor21" || name == "sensor22" || name == "sensor23" || name == "sensor24" || name == "sensor25" || name == "sensor26" || name == "sensor27" || name == "sensor28" || name == "sensor29" || name == "sensor30" || name == "sensor31" || name == "sensor32" || name == "sensor33" || name == "sensor34" || name == "sensor35" || name == "sensor36" || name == "sensor37" || name == "sensor38" || name == "sensor39" || name == "sensor40" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "spsensorblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::~SpsdItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList>();
        ent_->parent = this;
        spsd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : spsd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicItems()
    :
    asic_list(this, {"id"})
{

    yang_name = "asic-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::~AsicItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::has_operation() const
{
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Asic-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList>();
        ent_->parent = this;
        asic_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Asic-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::AsicList()
    :
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    numslices{YType::uint8, "numSlices"},
    capabilities{YType::str, "capabilities"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Asic-list"; yang_parent_name = "asic-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::~AsicList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| operst.is_set
	|| numslices.is_set
	|| capabilities.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numslices.yfilter)
	|| ydk::is_set(capabilities.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Asic-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numslices.is_set || is_set(numslices.yfilter)) leaf_name_data.push_back(numslices.get_name_leafdata());
    if (capabilities.is_set || is_set(capabilities.yfilter)) leaf_name_data.push_back(capabilities.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numSlices")
    {
        numslices = value;
        numslices.value_namespace = name_space;
        numslices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capabilities")
    {
        capabilities = value;
        capabilities.value_namespace = name_space;
        capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numSlices")
    {
        numslices.yfilter = yfilter;
    }
    if(value_path == "capabilities")
    {
        capabilities.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::AsicItems::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "operSt" || name == "numSlices" || name == "capabilities" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CpuItems()
    :
    cpu_list(this, {"id"})
{

    yang_name = "cpu-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::~CpuItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::has_operation() const
{
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CPU-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList>();
        ent_->parent = this;
        cpu_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpu_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CPU-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CPUList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    sock{YType::enumeration, "sock"},
    arch{YType::enumeration, "arch"},
    speed{YType::str, "speed"},
    cores{YType::uint16, "cores"},
    coresen{YType::uint16, "coresEn"},
    thrds{YType::uint16, "thrds"}
        ,
    core_items(std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems>())
{
    core_items->parent = this;

    yang_name = "CPU-list"; yang_parent_name = "cpu-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::~CPUList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| sock.is_set
	|| arch.is_set
	|| speed.is_set
	|| cores.is_set
	|| coresen.is_set
	|| thrds.is_set
	|| (core_items !=  nullptr && core_items->has_data());
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(sock.yfilter)
	|| ydk::is_set(arch.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(cores.yfilter)
	|| ydk::is_set(coresen.yfilter)
	|| ydk::is_set(thrds.yfilter)
	|| (core_items !=  nullptr && core_items->has_operation());
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CPU-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (sock.is_set || is_set(sock.yfilter)) leaf_name_data.push_back(sock.get_name_leafdata());
    if (arch.is_set || is_set(arch.yfilter)) leaf_name_data.push_back(arch.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (cores.is_set || is_set(cores.yfilter)) leaf_name_data.push_back(cores.get_name_leafdata());
    if (coresen.is_set || is_set(coresen.yfilter)) leaf_name_data.push_back(coresen.get_name_leafdata());
    if (thrds.is_set || is_set(thrds.yfilter)) leaf_name_data.push_back(thrds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-items")
    {
        if(core_items == nullptr)
        {
            core_items = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems>();
        }
        return core_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(core_items != nullptr)
    {
        _children["core-items"] = core_items;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sock")
    {
        sock = value;
        sock.value_namespace = name_space;
        sock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch")
    {
        arch = value;
        arch.value_namespace = name_space;
        arch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cores")
    {
        cores = value;
        cores.value_namespace = name_space;
        cores.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coresEn")
    {
        coresen = value;
        coresen.value_namespace = name_space;
        coresen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thrds")
    {
        thrds = value;
        thrds.value_namespace = name_space;
        thrds.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "sock")
    {
        sock.yfilter = yfilter;
    }
    if(value_path == "arch")
    {
        arch.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "cores")
    {
        cores.yfilter = yfilter;
    }
    if(value_path == "coresEn")
    {
        coresen.yfilter = yfilter;
    }
    if(value_path == "thrds")
    {
        thrds.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "sock" || name == "arch" || name == "speed" || name == "cores" || name == "coresEn" || name == "thrds")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreItems()
    :
    core_list(this, {"id"})
{

    yang_name = "core-items"; yang_parent_name = "CPU-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::~CoreItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::has_operation() const
{
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Core-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList>();
        ent_->parent = this;
        core_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : core_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Core-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::CoreList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Core-list"; yang_parent_name = "core-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::~CoreList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Core-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::CpuItems::CPUList::CoreItems::CoreList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmItems()
    :
    dimm_list(this, {"id"})
{

    yang_name = "dimm-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::~DimmItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::has_operation() const
{
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dimm-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList>();
        ent_->parent = this;
        dimm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dimm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dimm-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::DimmList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "Dimm-list"; yang_parent_name = "dimm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::~DimmList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dimm-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::DimmItems::DimmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::FlashItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "flash-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::~FlashItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::FlashItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::ObflItems()
    :
    logt{YType::str, "logT"},
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "obfl-items"; yang_parent_name = "lc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::~ObflItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::has_data() const
{
    if (is_presence_container) return true;
    return logt.is_set
	|| id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logt.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obfl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logt.is_set || is_set(logt.yfilter)) leaf_name_data.push_back(logt.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logT")
    {
        logt = value;
        logt.value_namespace = name_space;
        logt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logT")
    {
        logt.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::LcItems::ObflItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logT" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::RstrecItems::RstrecItems()
    :
    cardrstrec_list(this, {"ts"})
{

    yang_name = "rstrec-items"; yang_parent_name = "LCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::RstrecItems::~RstrecItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::RstrecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cardrstrec_list.len(); index++)
    {
        if(cardrstrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::LcslotItems::LCSlotList::RstrecItems::has_operation() const
{
    for (std::size_t index=0; index<cardrstrec_list.len(); index++)
    {
        if(cardrstrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::RstrecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rstrec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::RstrecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::RstrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CardRstRec-list")
    {
        auto ent_ = std::make_shared<System::ChItems::LcslotItems::LCSlotList::RstrecItems::CardRstRecList>();
        ent_->parent = this;
        cardrstrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::RstrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cardrstrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::RstrecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::LcslotItems::LCSlotList::RstrecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::LcslotItems::LCSlotList::RstrecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CardRstRec-list")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::RstrecItems::CardRstRecList::CardRstRecList()
    :
    ts{YType::str, "ts"},
    reason{YType::enumeration, "reason"},
    reasonqual{YType::str, "reasonQual"},
    ver{YType::str, "ver"},
    service{YType::str, "service"}
{

    yang_name = "CardRstRec-list"; yang_parent_name = "rstrec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::RstrecItems::CardRstRecList::~CardRstRecList()
{
}

bool System::ChItems::LcslotItems::LCSlotList::RstrecItems::CardRstRecList::has_data() const
{
    if (is_presence_container) return true;
    return ts.is_set
	|| reason.is_set
	|| reasonqual.is_set
	|| ver.is_set
	|| service.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::RstrecItems::CardRstRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(reasonqual.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(service.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::RstrecItems::CardRstRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CardRstRec-list";
    ADD_KEY_TOKEN(ts, "ts");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::RstrecItems::CardRstRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (reasonqual.is_set || is_set(reasonqual.yfilter)) leaf_name_data.push_back(reasonqual.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::RstrecItems::CardRstRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::RstrecItems::CardRstRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::RstrecItems::CardRstRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ts")
    {
        ts = value;
        ts.value_namespace = name_space;
        ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reasonQual")
    {
        reasonqual = value;
        reasonqual.value_namespace = name_space;
        reasonqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::RstrecItems::CardRstRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ts")
    {
        ts.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "reasonQual")
    {
        reasonqual.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::RstrecItems::CardRstRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ts" || name == "reason" || name == "reasonQual" || name == "ver" || name == "service")
        return true;
    return false;
}

System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "LCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ChItems::LcslotItems::LCSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ChItems::FcslotItems::FcslotItems()
    :
    fcslot_list(this, {"id"})
{

    yang_name = "fcslot-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::FcslotItems::~FcslotItems()
{
}

bool System::ChItems::FcslotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fcslot_list.len(); index++)
    {
        if(fcslot_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::has_operation() const
{
    for (std::size_t index=0; index<fcslot_list.len(); index++)
    {
        if(fcslot_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::FcslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fcslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FCSlot-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FcslotItems::FCSlotList>();
        ent_->parent = this;
        fcslot_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fcslot_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FcslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FCSlot-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FCSlotList()
    :
    id{YType::uint32, "id"},
    poweroff{YType::enumeration, "poweroff"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    fc_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems>())
    , rstrec_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::RstrecItems>())
    , rtoosslot_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems>())
{
    fc_items->parent = this;
    rstrec_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "FCSlot-list"; yang_parent_name = "fcslot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::FcslotItems::FCSlotList::~FCSlotList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| poweroff.is_set
	|| descr.is_set
	|| physid.is_set
	|| type.is_set
	|| operst.is_set
	|| loc.is_set
	|| (fc_items !=  nullptr && fc_items->has_data())
	|| (rstrec_items !=  nullptr && rstrec_items->has_data())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_data());
}

bool System::ChItems::FcslotItems::FCSlotList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(poweroff.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(physid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (fc_items !=  nullptr && fc_items->has_operation())
	|| (rstrec_items !=  nullptr && rstrec_items->has_operation())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_operation());
}

std::string System::ChItems::FcslotItems::FCSlotList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/fcslot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::FcslotItems::FCSlotList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FCSlot-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (poweroff.is_set || is_set(poweroff.yfilter)) leaf_name_data.push_back(poweroff.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (physid.is_set || is_set(physid.yfilter)) leaf_name_data.push_back(physid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fc-items")
    {
        if(fc_items == nullptr)
        {
            fc_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems>();
        }
        return fc_items;
    }

    if(child_yang_name == "rstrec-items")
    {
        if(rstrec_items == nullptr)
        {
            rstrec_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::RstrecItems>();
        }
        return rstrec_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fc_items != nullptr)
    {
        _children["fc-items"] = fc_items;
    }

    if(rstrec_items != nullptr)
    {
        _children["rstrec-items"] = rstrec_items;
    }

    if(rtoosslot_items != nullptr)
    {
        _children["rtoosSlot-items"] = rtoosslot_items;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poweroff")
    {
        poweroff = value;
        poweroff.value_namespace = name_space;
        poweroff.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physId")
    {
        physid = value;
        physid.value_namespace = name_space;
        physid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "poweroff")
    {
        poweroff.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "physId")
    {
        physid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fc-items" || name == "rstrec-items" || name == "rtoosSlot-items" || name == "id" || name == "poweroff" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::FcItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    hwver{YType::str, "hwVer"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    swcid{YType::uint32, "swCId"},
    nump{YType::uint16, "numP"},
    upts{YType::str, "upTs"},
    pwrst{YType::enumeration, "pwrSt"},
    swver{YType::str, "swVer"},
    partnumber{YType::str, "partNumber"},
    vdrid{YType::str, "vdrId"},
    poweractualdraw{YType::uint32, "powerActualDraw"},
    powerallocated{YType::uint32, "powerAllocated"}
        ,
    running_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems>())
    , ej_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems>())
    , locled_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems>())
    , eobc_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems>())
    , epc_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems>())
    , sensor_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems>())
    , splc_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems>())
    , asic_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems>())
    , cpu_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems>())
    , dimm_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems>())
    , flash_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems>())
    , obfl_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems>())
{
    running_items->parent = this;
    ej_items->parent = this;
    locled_items->parent = this;
    eobc_items->parent = this;
    epc_items->parent = this;
    sensor_items->parent = this;
    splc_items->parent = this;
    asic_items->parent = this;
    cpu_items->parent = this;
    dimm_items->parent = this;
    flash_items->parent = this;
    obfl_items->parent = this;

    yang_name = "fc-items"; yang_parent_name = "FCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::~FcItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| hwver.is_set
	|| type.is_set
	|| operst.is_set
	|| swcid.is_set
	|| nump.is_set
	|| upts.is_set
	|| pwrst.is_set
	|| swver.is_set
	|| partnumber.is_set
	|| vdrid.is_set
	|| poweractualdraw.is_set
	|| powerallocated.is_set
	|| (running_items !=  nullptr && running_items->has_data())
	|| (ej_items !=  nullptr && ej_items->has_data())
	|| (locled_items !=  nullptr && locled_items->has_data())
	|| (eobc_items !=  nullptr && eobc_items->has_data())
	|| (epc_items !=  nullptr && epc_items->has_data())
	|| (sensor_items !=  nullptr && sensor_items->has_data())
	|| (splc_items !=  nullptr && splc_items->has_data())
	|| (asic_items !=  nullptr && asic_items->has_data())
	|| (cpu_items !=  nullptr && cpu_items->has_data())
	|| (dimm_items !=  nullptr && dimm_items->has_data())
	|| (flash_items !=  nullptr && flash_items->has_data())
	|| (obfl_items !=  nullptr && obfl_items->has_data());
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(swcid.yfilter)
	|| ydk::is_set(nump.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(pwrst.yfilter)
	|| ydk::is_set(swver.yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(poweractualdraw.yfilter)
	|| ydk::is_set(powerallocated.yfilter)
	|| (running_items !=  nullptr && running_items->has_operation())
	|| (ej_items !=  nullptr && ej_items->has_operation())
	|| (locled_items !=  nullptr && locled_items->has_operation())
	|| (eobc_items !=  nullptr && eobc_items->has_operation())
	|| (epc_items !=  nullptr && epc_items->has_operation())
	|| (sensor_items !=  nullptr && sensor_items->has_operation())
	|| (splc_items !=  nullptr && splc_items->has_operation())
	|| (asic_items !=  nullptr && asic_items->has_operation())
	|| (cpu_items !=  nullptr && cpu_items->has_operation())
	|| (dimm_items !=  nullptr && dimm_items->has_operation())
	|| (flash_items !=  nullptr && flash_items->has_operation())
	|| (obfl_items !=  nullptr && obfl_items->has_operation());
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (swcid.is_set || is_set(swcid.yfilter)) leaf_name_data.push_back(swcid.get_name_leafdata());
    if (nump.is_set || is_set(nump.yfilter)) leaf_name_data.push_back(nump.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (pwrst.is_set || is_set(pwrst.yfilter)) leaf_name_data.push_back(pwrst.get_name_leafdata());
    if (swver.is_set || is_set(swver.yfilter)) leaf_name_data.push_back(swver.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (poweractualdraw.is_set || is_set(poweractualdraw.yfilter)) leaf_name_data.push_back(poweractualdraw.get_name_leafdata());
    if (powerallocated.is_set || is_set(powerallocated.yfilter)) leaf_name_data.push_back(powerallocated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "running-items")
    {
        if(running_items == nullptr)
        {
            running_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems>();
        }
        return running_items;
    }

    if(child_yang_name == "ej-items")
    {
        if(ej_items == nullptr)
        {
            ej_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems>();
        }
        return ej_items;
    }

    if(child_yang_name == "locled-items")
    {
        if(locled_items == nullptr)
        {
            locled_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems>();
        }
        return locled_items;
    }

    if(child_yang_name == "eobc-items")
    {
        if(eobc_items == nullptr)
        {
            eobc_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems>();
        }
        return eobc_items;
    }

    if(child_yang_name == "epc-items")
    {
        if(epc_items == nullptr)
        {
            epc_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems>();
        }
        return epc_items;
    }

    if(child_yang_name == "sensor-items")
    {
        if(sensor_items == nullptr)
        {
            sensor_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems>();
        }
        return sensor_items;
    }

    if(child_yang_name == "splc-items")
    {
        if(splc_items == nullptr)
        {
            splc_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems>();
        }
        return splc_items;
    }

    if(child_yang_name == "asic-items")
    {
        if(asic_items == nullptr)
        {
            asic_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems>();
        }
        return asic_items;
    }

    if(child_yang_name == "cpu-items")
    {
        if(cpu_items == nullptr)
        {
            cpu_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems>();
        }
        return cpu_items;
    }

    if(child_yang_name == "dimm-items")
    {
        if(dimm_items == nullptr)
        {
            dimm_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems>();
        }
        return dimm_items;
    }

    if(child_yang_name == "flash-items")
    {
        if(flash_items == nullptr)
        {
            flash_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems>();
        }
        return flash_items;
    }

    if(child_yang_name == "obfl-items")
    {
        if(obfl_items == nullptr)
        {
            obfl_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems>();
        }
        return obfl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(running_items != nullptr)
    {
        _children["running-items"] = running_items;
    }

    if(ej_items != nullptr)
    {
        _children["ej-items"] = ej_items;
    }

    if(locled_items != nullptr)
    {
        _children["locled-items"] = locled_items;
    }

    if(eobc_items != nullptr)
    {
        _children["eobc-items"] = eobc_items;
    }

    if(epc_items != nullptr)
    {
        _children["epc-items"] = epc_items;
    }

    if(sensor_items != nullptr)
    {
        _children["sensor-items"] = sensor_items;
    }

    if(splc_items != nullptr)
    {
        _children["splc-items"] = splc_items;
    }

    if(asic_items != nullptr)
    {
        _children["asic-items"] = asic_items;
    }

    if(cpu_items != nullptr)
    {
        _children["cpu-items"] = cpu_items;
    }

    if(dimm_items != nullptr)
    {
        _children["dimm-items"] = dimm_items;
    }

    if(flash_items != nullptr)
    {
        _children["flash-items"] = flash_items;
    }

    if(obfl_items != nullptr)
    {
        _children["obfl-items"] = obfl_items;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swCId")
    {
        swcid = value;
        swcid.value_namespace = name_space;
        swcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numP")
    {
        nump = value;
        nump.value_namespace = name_space;
        nump.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTs")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrSt")
    {
        pwrst = value;
        pwrst.value_namespace = name_space;
        pwrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swVer")
    {
        swver = value;
        swver.value_namespace = name_space;
        swver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "powerActualDraw")
    {
        poweractualdraw = value;
        poweractualdraw.value_namespace = name_space;
        poweractualdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "powerAllocated")
    {
        powerallocated = value;
        powerallocated.value_namespace = name_space;
        powerallocated.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "swCId")
    {
        swcid.yfilter = yfilter;
    }
    if(value_path == "numP")
    {
        nump.yfilter = yfilter;
    }
    if(value_path == "upTs")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "pwrSt")
    {
        pwrst.yfilter = yfilter;
    }
    if(value_path == "swVer")
    {
        swver.yfilter = yfilter;
    }
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "powerActualDraw")
    {
        poweractualdraw.yfilter = yfilter;
    }
    if(value_path == "powerAllocated")
    {
        powerallocated.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-items" || name == "ej-items" || name == "locled-items" || name == "eobc-items" || name == "epc-items" || name == "sensor-items" || name == "splc-items" || name == "asic-items" || name == "cpu-items" || name == "dimm-items" || name == "flash-items" || name == "obfl-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer" || name == "type" || name == "operSt" || name == "swCId" || name == "numP" || name == "upTs" || name == "pwrSt" || name == "swVer" || name == "partNumber" || name == "vdrId" || name == "powerActualDraw" || name == "powerAllocated")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::RunningItems()
    :
    biosver{YType::str, "biosVer"},
    expectedver{YType::str, "expectedVer"},
    operst{YType::enumeration, "operSt"},
    interimver{YType::str, "interimVer"},
    version{YType::str, "version"},
    internallabel{YType::str, "internalLabel"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"},
    ts{YType::str, "ts"},
    descr{YType::str, "descr"}
{

    yang_name = "running-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::~RunningItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::has_data() const
{
    if (is_presence_container) return true;
    return biosver.is_set
	|| expectedver.is_set
	|| operst.is_set
	|| interimver.is_set
	|| version.is_set
	|| internallabel.is_set
	|| type.is_set
	|| mode.is_set
	|| ts.is_set
	|| descr.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(biosver.yfilter)
	|| ydk::is_set(expectedver.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(interimver.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(internallabel.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "running-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (biosver.is_set || is_set(biosver.yfilter)) leaf_name_data.push_back(biosver.get_name_leafdata());
    if (expectedver.is_set || is_set(expectedver.yfilter)) leaf_name_data.push_back(expectedver.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (interimver.is_set || is_set(interimver.yfilter)) leaf_name_data.push_back(interimver.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (internallabel.is_set || is_set(internallabel.yfilter)) leaf_name_data.push_back(internallabel.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "biosVer")
    {
        biosver = value;
        biosver.value_namespace = name_space;
        biosver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expectedVer")
    {
        expectedver = value;
        expectedver.value_namespace = name_space;
        expectedver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interimVer")
    {
        interimver = value;
        interimver.value_namespace = name_space;
        interimver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internalLabel")
    {
        internallabel = value;
        internallabel.value_namespace = name_space;
        internallabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ts")
    {
        ts = value;
        ts.value_namespace = name_space;
        ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "biosVer")
    {
        biosver.yfilter = yfilter;
    }
    if(value_path == "expectedVer")
    {
        expectedver.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "interimVer")
    {
        interimver.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "internalLabel")
    {
        internallabel.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "ts")
    {
        ts.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::RunningItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "biosVer" || name == "expectedVer" || name == "operSt" || name == "interimVer" || name == "version" || name == "internalLabel" || name == "type" || name == "mode" || name == "ts" || name == "descr")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjItems()
    :
    ejec_list(this, {"id"})
{

    yang_name = "ej-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::~EjItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ejec_list.len(); index++)
    {
        if(ejec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::has_operation() const
{
    for (std::size_t index=0; index<ejec_list.len(); index++)
    {
        if(ejec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ej-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ejec-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList>();
        ent_->parent = this;
        ejec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ejec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ejec-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::EjecList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Ejec-list"; yang_parent_name = "ej-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::~EjecList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ejec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EjItems::EjecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::LocledItems()
    :
    locled_list(this, {"id"})
{

    yang_name = "locled-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::~LocledItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locled_list.len(); index++)
    {
        if(locled_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::has_operation() const
{
    for (std::size_t index=0; index<locled_list.len(); index++)
    {
        if(locled_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locled-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LocLed-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::LocLedList>();
        ent_->parent = this;
        locled_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : locled_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LocLed-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::LocLedList::LocLedList()
    :
    id{YType::uint32, "id"},
    model{YType::str, "model"},
    descr{YType::str, "descr"},
    color{YType::enumeration, "color"},
    operst{YType::enumeration, "operSt"},
    adminst{YType::enumeration, "adminSt"}
{

    yang_name = "LocLed-list"; yang_parent_name = "locled-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::LocLedList::~LocLedList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::LocLedList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| model.is_set
	|| descr.is_set
	|| color.is_set
	|| operst.is_set
	|| adminst.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::LocLedList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(adminst.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::LocLedList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LocLed-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::LocLedList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::LocLedList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::LocLedList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::LocLedList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::LocLedList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::LocledItems::LocLedList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "model" || name == "descr" || name == "color" || name == "operSt" || name == "adminSt")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcItems()
    :
    eobcp_list(this, {"id"})
{

    yang_name = "eobc-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::~EobcItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eobcp_list.len(); index++)
    {
        if(eobcp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::has_operation() const
{
    for (std::size_t index=0; index<eobcp_list.len(); index++)
    {
        if(eobcp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eobc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EobcP-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList>();
        ent_->parent = this;
        eobcp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eobcp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EobcP-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::EobcPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "EobcP-list"; yang_parent_name = "eobc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::~EobcPList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EobcP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EobcItems::EobcPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcItems()
    :
    epcp_list(this, {"id"})
{

    yang_name = "epc-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::~EpcItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<epcp_list.len(); index++)
    {
        if(epcp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::has_operation() const
{
    for (std::size_t index=0; index<epcp_list.len(); index++)
    {
        if(epcp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EpcP-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList>();
        ent_->parent = this;
        epcp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : epcp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EpcP-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::EpcPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "EpcP-list"; yang_parent_name = "epc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::~EpcPList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EpcP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::EpcItems::EpcPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorItems()
    :
    sensor_list(this, {"id"})
{

    yang_name = "sensor-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::~SensorItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::has_operation() const
{
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sensor-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList>();
        ent_->parent = this;
        sensor_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sensor-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::SensorList()
    :
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    majorthresh{YType::int16, "majorThresh"},
    minorthresh{YType::int16, "minorThresh"},
    operst{YType::enumeration, "operSt"},
    tempvalue{YType::uint16, "tempValue"},
    unit{YType::str, "unit"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    descr{YType::str, "descr"}
{

    yang_name = "Sensor-list"; yang_parent_name = "sensor-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::~SensorList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| majorthresh.is_set
	|| minorthresh.is_set
	|| operst.is_set
	|| tempvalue.is_set
	|| unit.is_set
	|| vendor.is_set
	|| model.is_set
	|| descr.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(majorthresh.yfilter)
	|| ydk::is_set(minorthresh.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(tempvalue.yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sensor-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (majorthresh.is_set || is_set(majorthresh.yfilter)) leaf_name_data.push_back(majorthresh.get_name_leafdata());
    if (minorthresh.is_set || is_set(minorthresh.yfilter)) leaf_name_data.push_back(minorthresh.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (tempvalue.is_set || is_set(tempvalue.yfilter)) leaf_name_data.push_back(tempvalue.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majorThresh")
    {
        majorthresh = value;
        majorthresh.value_namespace = name_space;
        majorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minorThresh")
    {
        minorthresh = value;
        minorthresh.value_namespace = name_space;
        minorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tempValue")
    {
        tempvalue = value;
        tempvalue.value_namespace = name_space;
        tempvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "majorThresh")
    {
        majorthresh.yfilter = yfilter;
    }
    if(value_path == "minorThresh")
    {
        minorthresh.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "tempValue")
    {
        tempvalue.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SensorItems::SensorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "majorThresh" || name == "minorThresh" || name == "operSt" || name == "tempValue" || name == "unit" || name == "vendor" || name == "model" || name == "descr")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"},
    numblk{YType::uint16, "numBlk"}
        ,
    spcmn_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems>())
    , splcblk_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems>())
    , sppd_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems>())
    , spsd_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems>())
    , spsensorblk_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems>())
{
    spcmn_items->parent = this;
    splcblk_items->parent = this;
    sppd_items->parent = this;
    spsd_items->parent = this;
    spsensorblk_items->parent = this;

    yang_name = "splc-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::~SplcItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| rev.is_set
	|| ser.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set
	|| numblk.is_set
	|| (spcmn_items !=  nullptr && spcmn_items->has_data())
	|| (splcblk_items !=  nullptr && splcblk_items->has_data())
	|| (sppd_items !=  nullptr && sppd_items->has_data())
	|| (spsd_items !=  nullptr && spsd_items->has_data())
	|| (spsensorblk_items !=  nullptr && spsensorblk_items->has_data());
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numblk.yfilter)
	|| (spcmn_items !=  nullptr && spcmn_items->has_operation())
	|| (splcblk_items !=  nullptr && splcblk_items->has_operation())
	|| (sppd_items !=  nullptr && sppd_items->has_operation())
	|| (spsd_items !=  nullptr && spsd_items->has_operation())
	|| (spsensorblk_items !=  nullptr && spsensorblk_items->has_operation());
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "splc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numblk.is_set || is_set(numblk.yfilter)) leaf_name_data.push_back(numblk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spcmn-items")
    {
        if(spcmn_items == nullptr)
        {
            spcmn_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems>();
        }
        return spcmn_items;
    }

    if(child_yang_name == "splcblk-items")
    {
        if(splcblk_items == nullptr)
        {
            splcblk_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems>();
        }
        return splcblk_items;
    }

    if(child_yang_name == "sppd-items")
    {
        if(sppd_items == nullptr)
        {
            sppd_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems>();
        }
        return sppd_items;
    }

    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems>();
        }
        return spsd_items;
    }

    if(child_yang_name == "spsensorblk-items")
    {
        if(spsensorblk_items == nullptr)
        {
            spsensorblk_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems>();
        }
        return spsensorblk_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spcmn_items != nullptr)
    {
        _children["spcmn-items"] = spcmn_items;
    }

    if(splcblk_items != nullptr)
    {
        _children["splcblk-items"] = splcblk_items;
    }

    if(sppd_items != nullptr)
    {
        _children["sppd-items"] = sppd_items;
    }

    if(spsd_items != nullptr)
    {
        _children["spsd-items"] = spsd_items;
    }

    if(spsensorblk_items != nullptr)
    {
        _children["spsensorblk-items"] = spsensorblk_items;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numBlk")
    {
        numblk = value;
        numblk.value_namespace = name_space;
        numblk.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numBlk")
    {
        numblk.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spcmn-items" || name == "splcblk-items" || name == "sppd-items" || name == "spsd-items" || name == "spsensorblk-items" || name == "id" || name == "vendor" || name == "rev" || name == "ser" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt" || name == "numBlk")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::SpcmnItems()
    :
    size{YType::uint16, "size"},
    count{YType::uint16, "count"},
    major_{YType::uint16, "major"},
    minor{YType::uint16, "minor"},
    oem{YType::str, "oem"},
    pdnum{YType::str, "pdNum"},
    sernum{YType::str, "serNum"},
    prtnum{YType::str, "prtNum"},
    prev{YType::str, "pRev"},
    mfgdev{YType::str, "mfgDev"},
    hwver{YType::str, "hwVer"},
    mfgbits{YType::uint16, "mfgBits"},
    engbits{YType::uint16, "engBits"},
    pwrcon{YType::int16, "pwrCon"},
    rmafl{YType::str, "rmaFl"},
    clei{YType::str, "clei"},
    vdrid{YType::str, "vdrId"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spcmn-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::~SpcmnItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| count.is_set
	|| major_.is_set
	|| minor.is_set
	|| oem.is_set
	|| pdnum.is_set
	|| sernum.is_set
	|| prtnum.is_set
	|| prev.is_set
	|| mfgdev.is_set
	|| hwver.is_set
	|| mfgbits.is_set
	|| engbits.is_set
	|| pwrcon.is_set
	|| rmafl.is_set
	|| clei.is_set
	|| vdrid.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(major_.yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(oem.yfilter)
	|| ydk::is_set(pdnum.yfilter)
	|| ydk::is_set(sernum.yfilter)
	|| ydk::is_set(prtnum.yfilter)
	|| ydk::is_set(prev.yfilter)
	|| ydk::is_set(mfgdev.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(mfgbits.yfilter)
	|| ydk::is_set(engbits.yfilter)
	|| ydk::is_set(pwrcon.yfilter)
	|| ydk::is_set(rmafl.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spcmn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (major_.is_set || is_set(major_.yfilter)) leaf_name_data.push_back(major_.get_name_leafdata());
    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (oem.is_set || is_set(oem.yfilter)) leaf_name_data.push_back(oem.get_name_leafdata());
    if (pdnum.is_set || is_set(pdnum.yfilter)) leaf_name_data.push_back(pdnum.get_name_leafdata());
    if (sernum.is_set || is_set(sernum.yfilter)) leaf_name_data.push_back(sernum.get_name_leafdata());
    if (prtnum.is_set || is_set(prtnum.yfilter)) leaf_name_data.push_back(prtnum.get_name_leafdata());
    if (prev.is_set || is_set(prev.yfilter)) leaf_name_data.push_back(prev.get_name_leafdata());
    if (mfgdev.is_set || is_set(mfgdev.yfilter)) leaf_name_data.push_back(mfgdev.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (mfgbits.is_set || is_set(mfgbits.yfilter)) leaf_name_data.push_back(mfgbits.get_name_leafdata());
    if (engbits.is_set || is_set(engbits.yfilter)) leaf_name_data.push_back(engbits.get_name_leafdata());
    if (pwrcon.is_set || is_set(pwrcon.yfilter)) leaf_name_data.push_back(pwrcon.get_name_leafdata());
    if (rmafl.is_set || is_set(rmafl.yfilter)) leaf_name_data.push_back(rmafl.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major")
    {
        major_ = value;
        major_.value_namespace = name_space;
        major_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oem")
    {
        oem = value;
        oem.value_namespace = name_space;
        oem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdNum")
    {
        pdnum = value;
        pdnum.value_namespace = name_space;
        pdnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serNum")
    {
        sernum = value;
        sernum.value_namespace = name_space;
        sernum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prtNum")
    {
        prtnum = value;
        prtnum.value_namespace = name_space;
        prtnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pRev")
    {
        prev = value;
        prev.value_namespace = name_space;
        prev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgDev")
    {
        mfgdev = value;
        mfgdev.value_namespace = name_space;
        mfgdev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgBits")
    {
        mfgbits = value;
        mfgbits.value_namespace = name_space;
        mfgbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engBits")
    {
        engbits = value;
        engbits.value_namespace = name_space;
        engbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrCon")
    {
        pwrcon = value;
        pwrcon.value_namespace = name_space;
        pwrcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rmaFl")
    {
        rmafl = value;
        rmafl.value_namespace = name_space;
        rmafl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "major")
    {
        major_.yfilter = yfilter;
    }
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "oem")
    {
        oem.yfilter = yfilter;
    }
    if(value_path == "pdNum")
    {
        pdnum.yfilter = yfilter;
    }
    if(value_path == "serNum")
    {
        sernum.yfilter = yfilter;
    }
    if(value_path == "prtNum")
    {
        prtnum.yfilter = yfilter;
    }
    if(value_path == "pRev")
    {
        prev.yfilter = yfilter;
    }
    if(value_path == "mfgDev")
    {
        mfgdev.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "mfgBits")
    {
        mfgbits.yfilter = yfilter;
    }
    if(value_path == "engBits")
    {
        engbits.yfilter = yfilter;
    }
    if(value_path == "pwrCon")
    {
        pwrcon.yfilter = yfilter;
    }
    if(value_path == "rmaFl")
    {
        rmafl.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpcmnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "count" || name == "major" || name == "minor" || name == "oem" || name == "pdNum" || name == "serNum" || name == "prtNum" || name == "pRev" || name == "mfgDev" || name == "hwVer" || name == "mfgBits" || name == "engBits" || name == "pwrCon" || name == "rmaFl" || name == "clei" || name == "vdrId" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SplcblkItems()
    :
    fbits{YType::uint64, "fbits"},
    hwcbits{YType::uint64, "hwCBits"},
    crdidx{YType::uint16, "crdIdx"},
    macb{YType::str, "macB"},
    macl{YType::uint16, "macL"},
    eobcn{YType::uint16, "eobcN"},
    epldn{YType::uint16, "epldN"},
    maxcpwr{YType::uint16, "maxCPwr"},
    coolrq{YType::uint16, "coolRq"},
    ambt{YType::uint16, "ambT"},
    sensor1{YType::str, "sensor1"},
    sensor2{YType::str, "sensor2"},
    sensor3{YType::str, "sensor3"},
    sensor4{YType::str, "sensor4"},
    sensor5{YType::str, "sensor5"},
    sensor6{YType::str, "sensor6"},
    sensor7{YType::str, "sensor7"},
    sensor8{YType::str, "sensor8"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
        ,
    spsd_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems>())
    , sppd_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems>())
{
    spsd_items->parent = this;
    sppd_items->parent = this;

    yang_name = "splcblk-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::~SplcblkItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::has_data() const
{
    if (is_presence_container) return true;
    return fbits.is_set
	|| hwcbits.is_set
	|| crdidx.is_set
	|| macb.is_set
	|| macl.is_set
	|| eobcn.is_set
	|| epldn.is_set
	|| maxcpwr.is_set
	|| coolrq.is_set
	|| ambt.is_set
	|| sensor1.is_set
	|| sensor2.is_set
	|| sensor3.is_set
	|| sensor4.is_set
	|| sensor5.is_set
	|| sensor6.is_set
	|| sensor7.is_set
	|| sensor8.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set
	|| (spsd_items !=  nullptr && spsd_items->has_data())
	|| (sppd_items !=  nullptr && sppd_items->has_data());
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fbits.yfilter)
	|| ydk::is_set(hwcbits.yfilter)
	|| ydk::is_set(crdidx.yfilter)
	|| ydk::is_set(macb.yfilter)
	|| ydk::is_set(macl.yfilter)
	|| ydk::is_set(eobcn.yfilter)
	|| ydk::is_set(epldn.yfilter)
	|| ydk::is_set(maxcpwr.yfilter)
	|| ydk::is_set(coolrq.yfilter)
	|| ydk::is_set(ambt.yfilter)
	|| ydk::is_set(sensor1.yfilter)
	|| ydk::is_set(sensor2.yfilter)
	|| ydk::is_set(sensor3.yfilter)
	|| ydk::is_set(sensor4.yfilter)
	|| ydk::is_set(sensor5.yfilter)
	|| ydk::is_set(sensor6.yfilter)
	|| ydk::is_set(sensor7.yfilter)
	|| ydk::is_set(sensor8.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| (spsd_items !=  nullptr && spsd_items->has_operation())
	|| (sppd_items !=  nullptr && sppd_items->has_operation());
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "splcblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fbits.is_set || is_set(fbits.yfilter)) leaf_name_data.push_back(fbits.get_name_leafdata());
    if (hwcbits.is_set || is_set(hwcbits.yfilter)) leaf_name_data.push_back(hwcbits.get_name_leafdata());
    if (crdidx.is_set || is_set(crdidx.yfilter)) leaf_name_data.push_back(crdidx.get_name_leafdata());
    if (macb.is_set || is_set(macb.yfilter)) leaf_name_data.push_back(macb.get_name_leafdata());
    if (macl.is_set || is_set(macl.yfilter)) leaf_name_data.push_back(macl.get_name_leafdata());
    if (eobcn.is_set || is_set(eobcn.yfilter)) leaf_name_data.push_back(eobcn.get_name_leafdata());
    if (epldn.is_set || is_set(epldn.yfilter)) leaf_name_data.push_back(epldn.get_name_leafdata());
    if (maxcpwr.is_set || is_set(maxcpwr.yfilter)) leaf_name_data.push_back(maxcpwr.get_name_leafdata());
    if (coolrq.is_set || is_set(coolrq.yfilter)) leaf_name_data.push_back(coolrq.get_name_leafdata());
    if (ambt.is_set || is_set(ambt.yfilter)) leaf_name_data.push_back(ambt.get_name_leafdata());
    if (sensor1.is_set || is_set(sensor1.yfilter)) leaf_name_data.push_back(sensor1.get_name_leafdata());
    if (sensor2.is_set || is_set(sensor2.yfilter)) leaf_name_data.push_back(sensor2.get_name_leafdata());
    if (sensor3.is_set || is_set(sensor3.yfilter)) leaf_name_data.push_back(sensor3.get_name_leafdata());
    if (sensor4.is_set || is_set(sensor4.yfilter)) leaf_name_data.push_back(sensor4.get_name_leafdata());
    if (sensor5.is_set || is_set(sensor5.yfilter)) leaf_name_data.push_back(sensor5.get_name_leafdata());
    if (sensor6.is_set || is_set(sensor6.yfilter)) leaf_name_data.push_back(sensor6.get_name_leafdata());
    if (sensor7.is_set || is_set(sensor7.yfilter)) leaf_name_data.push_back(sensor7.get_name_leafdata());
    if (sensor8.is_set || is_set(sensor8.yfilter)) leaf_name_data.push_back(sensor8.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems>();
        }
        return spsd_items;
    }

    if(child_yang_name == "sppd-items")
    {
        if(sppd_items == nullptr)
        {
            sppd_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems>();
        }
        return sppd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spsd_items != nullptr)
    {
        _children["spsd-items"] = spsd_items;
    }

    if(sppd_items != nullptr)
    {
        _children["sppd-items"] = sppd_items;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fbits")
    {
        fbits = value;
        fbits.value_namespace = name_space;
        fbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwCBits")
    {
        hwcbits = value;
        hwcbits.value_namespace = name_space;
        hwcbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crdIdx")
    {
        crdidx = value;
        crdidx.value_namespace = name_space;
        crdidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macB")
    {
        macb = value;
        macb.value_namespace = name_space;
        macb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macL")
    {
        macl = value;
        macl.value_namespace = name_space;
        macl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eobcN")
    {
        eobcn = value;
        eobcn.value_namespace = name_space;
        eobcn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epldN")
    {
        epldn = value;
        epldn.value_namespace = name_space;
        epldn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr = value;
        maxcpwr.value_namespace = name_space;
        maxcpwr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coolRq")
    {
        coolrq = value;
        coolrq.value_namespace = name_space;
        coolrq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ambT")
    {
        ambt = value;
        ambt.value_namespace = name_space;
        ambt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor1")
    {
        sensor1 = value;
        sensor1.value_namespace = name_space;
        sensor1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor2")
    {
        sensor2 = value;
        sensor2.value_namespace = name_space;
        sensor2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor3")
    {
        sensor3 = value;
        sensor3.value_namespace = name_space;
        sensor3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor4")
    {
        sensor4 = value;
        sensor4.value_namespace = name_space;
        sensor4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor5")
    {
        sensor5 = value;
        sensor5.value_namespace = name_space;
        sensor5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor6")
    {
        sensor6 = value;
        sensor6.value_namespace = name_space;
        sensor6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor7")
    {
        sensor7 = value;
        sensor7.value_namespace = name_space;
        sensor7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor8")
    {
        sensor8 = value;
        sensor8.value_namespace = name_space;
        sensor8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fbits")
    {
        fbits.yfilter = yfilter;
    }
    if(value_path == "hwCBits")
    {
        hwcbits.yfilter = yfilter;
    }
    if(value_path == "crdIdx")
    {
        crdidx.yfilter = yfilter;
    }
    if(value_path == "macB")
    {
        macb.yfilter = yfilter;
    }
    if(value_path == "macL")
    {
        macl.yfilter = yfilter;
    }
    if(value_path == "eobcN")
    {
        eobcn.yfilter = yfilter;
    }
    if(value_path == "epldN")
    {
        epldn.yfilter = yfilter;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr.yfilter = yfilter;
    }
    if(value_path == "coolRq")
    {
        coolrq.yfilter = yfilter;
    }
    if(value_path == "ambT")
    {
        ambt.yfilter = yfilter;
    }
    if(value_path == "sensor1")
    {
        sensor1.yfilter = yfilter;
    }
    if(value_path == "sensor2")
    {
        sensor2.yfilter = yfilter;
    }
    if(value_path == "sensor3")
    {
        sensor3.yfilter = yfilter;
    }
    if(value_path == "sensor4")
    {
        sensor4.yfilter = yfilter;
    }
    if(value_path == "sensor5")
    {
        sensor5.yfilter = yfilter;
    }
    if(value_path == "sensor6")
    {
        sensor6.yfilter = yfilter;
    }
    if(value_path == "sensor7")
    {
        sensor7.yfilter = yfilter;
    }
    if(value_path == "sensor8")
    {
        sensor8.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spsd-items" || name == "sppd-items" || name == "fbits" || name == "hwCBits" || name == "crdIdx" || name == "macB" || name == "macL" || name == "eobcN" || name == "epldN" || name == "maxCPwr" || name == "coolRq" || name == "ambT" || name == "sensor1" || name == "sensor2" || name == "sensor3" || name == "sensor4" || name == "sensor5" || name == "sensor6" || name == "sensor7" || name == "sensor8" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "splcblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::~SpsdItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList>();
        ent_->parent = this;
        spsd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : spsd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::SppdItems()
    :
    prtty{YType::uint16, "prtTy"},
    numpts{YType::uint16, "numPts"}
{

    yang_name = "sppd-items"; yang_parent_name = "splcblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::~SppdItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::has_data() const
{
    if (is_presence_container) return true;
    return prtty.is_set
	|| numpts.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prtty.yfilter)
	|| ydk::is_set(numpts.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sppd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prtty.is_set || is_set(prtty.yfilter)) leaf_name_data.push_back(prtty.get_name_leafdata());
    if (numpts.is_set || is_set(numpts.yfilter)) leaf_name_data.push_back(numpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prtTy")
    {
        prtty = value;
        prtty.value_namespace = name_space;
        prtty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPts")
    {
        numpts = value;
        numpts.value_namespace = name_space;
        numpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prtTy")
    {
        prtty.yfilter = yfilter;
    }
    if(value_path == "numPts")
    {
        numpts.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SplcblkItems::SppdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prtTy" || name == "numPts")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::SppdItems()
    :
    prtty{YType::uint16, "prtTy"},
    numpts{YType::uint16, "numPts"}
{

    yang_name = "sppd-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::~SppdItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::has_data() const
{
    if (is_presence_container) return true;
    return prtty.is_set
	|| numpts.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prtty.yfilter)
	|| ydk::is_set(numpts.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sppd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prtty.is_set || is_set(prtty.yfilter)) leaf_name_data.push_back(prtty.get_name_leafdata());
    if (numpts.is_set || is_set(numpts.yfilter)) leaf_name_data.push_back(numpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prtTy")
    {
        prtty = value;
        prtty.value_namespace = name_space;
        prtty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPts")
    {
        numpts = value;
        numpts.value_namespace = name_space;
        numpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prtTy")
    {
        prtty.yfilter = yfilter;
    }
    if(value_path == "numPts")
    {
        numpts.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SppdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prtTy" || name == "numPts")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::~SpsdItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList>();
        ent_->parent = this;
        spsd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : spsd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsensorblkItems()
    :
    sensor9{YType::str, "sensor9"},
    sensor10{YType::str, "sensor10"},
    sensor11{YType::str, "sensor11"},
    sensor12{YType::str, "sensor12"},
    sensor13{YType::str, "sensor13"},
    sensor14{YType::str, "sensor14"},
    sensor15{YType::str, "sensor15"},
    sensor16{YType::str, "sensor16"},
    sensor17{YType::str, "sensor17"},
    sensor18{YType::str, "sensor18"},
    sensor19{YType::str, "sensor19"},
    sensor20{YType::str, "sensor20"},
    sensor21{YType::str, "sensor21"},
    sensor22{YType::str, "sensor22"},
    sensor23{YType::str, "sensor23"},
    sensor24{YType::str, "sensor24"},
    sensor25{YType::str, "sensor25"},
    sensor26{YType::str, "sensor26"},
    sensor27{YType::str, "sensor27"},
    sensor28{YType::str, "sensor28"},
    sensor29{YType::str, "sensor29"},
    sensor30{YType::str, "sensor30"},
    sensor31{YType::str, "sensor31"},
    sensor32{YType::str, "sensor32"},
    sensor33{YType::str, "sensor33"},
    sensor34{YType::str, "sensor34"},
    sensor35{YType::str, "sensor35"},
    sensor36{YType::str, "sensor36"},
    sensor37{YType::str, "sensor37"},
    sensor38{YType::str, "sensor38"},
    sensor39{YType::str, "sensor39"},
    sensor40{YType::str, "sensor40"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
        ,
    spsd_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems>())
{
    spsd_items->parent = this;

    yang_name = "spsensorblk-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::~SpsensorblkItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::has_data() const
{
    if (is_presence_container) return true;
    return sensor9.is_set
	|| sensor10.is_set
	|| sensor11.is_set
	|| sensor12.is_set
	|| sensor13.is_set
	|| sensor14.is_set
	|| sensor15.is_set
	|| sensor16.is_set
	|| sensor17.is_set
	|| sensor18.is_set
	|| sensor19.is_set
	|| sensor20.is_set
	|| sensor21.is_set
	|| sensor22.is_set
	|| sensor23.is_set
	|| sensor24.is_set
	|| sensor25.is_set
	|| sensor26.is_set
	|| sensor27.is_set
	|| sensor28.is_set
	|| sensor29.is_set
	|| sensor30.is_set
	|| sensor31.is_set
	|| sensor32.is_set
	|| sensor33.is_set
	|| sensor34.is_set
	|| sensor35.is_set
	|| sensor36.is_set
	|| sensor37.is_set
	|| sensor38.is_set
	|| sensor39.is_set
	|| sensor40.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set
	|| (spsd_items !=  nullptr && spsd_items->has_data());
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor9.yfilter)
	|| ydk::is_set(sensor10.yfilter)
	|| ydk::is_set(sensor11.yfilter)
	|| ydk::is_set(sensor12.yfilter)
	|| ydk::is_set(sensor13.yfilter)
	|| ydk::is_set(sensor14.yfilter)
	|| ydk::is_set(sensor15.yfilter)
	|| ydk::is_set(sensor16.yfilter)
	|| ydk::is_set(sensor17.yfilter)
	|| ydk::is_set(sensor18.yfilter)
	|| ydk::is_set(sensor19.yfilter)
	|| ydk::is_set(sensor20.yfilter)
	|| ydk::is_set(sensor21.yfilter)
	|| ydk::is_set(sensor22.yfilter)
	|| ydk::is_set(sensor23.yfilter)
	|| ydk::is_set(sensor24.yfilter)
	|| ydk::is_set(sensor25.yfilter)
	|| ydk::is_set(sensor26.yfilter)
	|| ydk::is_set(sensor27.yfilter)
	|| ydk::is_set(sensor28.yfilter)
	|| ydk::is_set(sensor29.yfilter)
	|| ydk::is_set(sensor30.yfilter)
	|| ydk::is_set(sensor31.yfilter)
	|| ydk::is_set(sensor32.yfilter)
	|| ydk::is_set(sensor33.yfilter)
	|| ydk::is_set(sensor34.yfilter)
	|| ydk::is_set(sensor35.yfilter)
	|| ydk::is_set(sensor36.yfilter)
	|| ydk::is_set(sensor37.yfilter)
	|| ydk::is_set(sensor38.yfilter)
	|| ydk::is_set(sensor39.yfilter)
	|| ydk::is_set(sensor40.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| (spsd_items !=  nullptr && spsd_items->has_operation());
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsensorblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor9.is_set || is_set(sensor9.yfilter)) leaf_name_data.push_back(sensor9.get_name_leafdata());
    if (sensor10.is_set || is_set(sensor10.yfilter)) leaf_name_data.push_back(sensor10.get_name_leafdata());
    if (sensor11.is_set || is_set(sensor11.yfilter)) leaf_name_data.push_back(sensor11.get_name_leafdata());
    if (sensor12.is_set || is_set(sensor12.yfilter)) leaf_name_data.push_back(sensor12.get_name_leafdata());
    if (sensor13.is_set || is_set(sensor13.yfilter)) leaf_name_data.push_back(sensor13.get_name_leafdata());
    if (sensor14.is_set || is_set(sensor14.yfilter)) leaf_name_data.push_back(sensor14.get_name_leafdata());
    if (sensor15.is_set || is_set(sensor15.yfilter)) leaf_name_data.push_back(sensor15.get_name_leafdata());
    if (sensor16.is_set || is_set(sensor16.yfilter)) leaf_name_data.push_back(sensor16.get_name_leafdata());
    if (sensor17.is_set || is_set(sensor17.yfilter)) leaf_name_data.push_back(sensor17.get_name_leafdata());
    if (sensor18.is_set || is_set(sensor18.yfilter)) leaf_name_data.push_back(sensor18.get_name_leafdata());
    if (sensor19.is_set || is_set(sensor19.yfilter)) leaf_name_data.push_back(sensor19.get_name_leafdata());
    if (sensor20.is_set || is_set(sensor20.yfilter)) leaf_name_data.push_back(sensor20.get_name_leafdata());
    if (sensor21.is_set || is_set(sensor21.yfilter)) leaf_name_data.push_back(sensor21.get_name_leafdata());
    if (sensor22.is_set || is_set(sensor22.yfilter)) leaf_name_data.push_back(sensor22.get_name_leafdata());
    if (sensor23.is_set || is_set(sensor23.yfilter)) leaf_name_data.push_back(sensor23.get_name_leafdata());
    if (sensor24.is_set || is_set(sensor24.yfilter)) leaf_name_data.push_back(sensor24.get_name_leafdata());
    if (sensor25.is_set || is_set(sensor25.yfilter)) leaf_name_data.push_back(sensor25.get_name_leafdata());
    if (sensor26.is_set || is_set(sensor26.yfilter)) leaf_name_data.push_back(sensor26.get_name_leafdata());
    if (sensor27.is_set || is_set(sensor27.yfilter)) leaf_name_data.push_back(sensor27.get_name_leafdata());
    if (sensor28.is_set || is_set(sensor28.yfilter)) leaf_name_data.push_back(sensor28.get_name_leafdata());
    if (sensor29.is_set || is_set(sensor29.yfilter)) leaf_name_data.push_back(sensor29.get_name_leafdata());
    if (sensor30.is_set || is_set(sensor30.yfilter)) leaf_name_data.push_back(sensor30.get_name_leafdata());
    if (sensor31.is_set || is_set(sensor31.yfilter)) leaf_name_data.push_back(sensor31.get_name_leafdata());
    if (sensor32.is_set || is_set(sensor32.yfilter)) leaf_name_data.push_back(sensor32.get_name_leafdata());
    if (sensor33.is_set || is_set(sensor33.yfilter)) leaf_name_data.push_back(sensor33.get_name_leafdata());
    if (sensor34.is_set || is_set(sensor34.yfilter)) leaf_name_data.push_back(sensor34.get_name_leafdata());
    if (sensor35.is_set || is_set(sensor35.yfilter)) leaf_name_data.push_back(sensor35.get_name_leafdata());
    if (sensor36.is_set || is_set(sensor36.yfilter)) leaf_name_data.push_back(sensor36.get_name_leafdata());
    if (sensor37.is_set || is_set(sensor37.yfilter)) leaf_name_data.push_back(sensor37.get_name_leafdata());
    if (sensor38.is_set || is_set(sensor38.yfilter)) leaf_name_data.push_back(sensor38.get_name_leafdata());
    if (sensor39.is_set || is_set(sensor39.yfilter)) leaf_name_data.push_back(sensor39.get_name_leafdata());
    if (sensor40.is_set || is_set(sensor40.yfilter)) leaf_name_data.push_back(sensor40.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems>();
        }
        return spsd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spsd_items != nullptr)
    {
        _children["spsd-items"] = spsd_items;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor9")
    {
        sensor9 = value;
        sensor9.value_namespace = name_space;
        sensor9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor10")
    {
        sensor10 = value;
        sensor10.value_namespace = name_space;
        sensor10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor11")
    {
        sensor11 = value;
        sensor11.value_namespace = name_space;
        sensor11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor12")
    {
        sensor12 = value;
        sensor12.value_namespace = name_space;
        sensor12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor13")
    {
        sensor13 = value;
        sensor13.value_namespace = name_space;
        sensor13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor14")
    {
        sensor14 = value;
        sensor14.value_namespace = name_space;
        sensor14.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor15")
    {
        sensor15 = value;
        sensor15.value_namespace = name_space;
        sensor15.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor16")
    {
        sensor16 = value;
        sensor16.value_namespace = name_space;
        sensor16.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor17")
    {
        sensor17 = value;
        sensor17.value_namespace = name_space;
        sensor17.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor18")
    {
        sensor18 = value;
        sensor18.value_namespace = name_space;
        sensor18.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor19")
    {
        sensor19 = value;
        sensor19.value_namespace = name_space;
        sensor19.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor20")
    {
        sensor20 = value;
        sensor20.value_namespace = name_space;
        sensor20.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor21")
    {
        sensor21 = value;
        sensor21.value_namespace = name_space;
        sensor21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor22")
    {
        sensor22 = value;
        sensor22.value_namespace = name_space;
        sensor22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor23")
    {
        sensor23 = value;
        sensor23.value_namespace = name_space;
        sensor23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor24")
    {
        sensor24 = value;
        sensor24.value_namespace = name_space;
        sensor24.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor25")
    {
        sensor25 = value;
        sensor25.value_namespace = name_space;
        sensor25.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor26")
    {
        sensor26 = value;
        sensor26.value_namespace = name_space;
        sensor26.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor27")
    {
        sensor27 = value;
        sensor27.value_namespace = name_space;
        sensor27.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor28")
    {
        sensor28 = value;
        sensor28.value_namespace = name_space;
        sensor28.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor29")
    {
        sensor29 = value;
        sensor29.value_namespace = name_space;
        sensor29.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor30")
    {
        sensor30 = value;
        sensor30.value_namespace = name_space;
        sensor30.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor31")
    {
        sensor31 = value;
        sensor31.value_namespace = name_space;
        sensor31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor32")
    {
        sensor32 = value;
        sensor32.value_namespace = name_space;
        sensor32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor33")
    {
        sensor33 = value;
        sensor33.value_namespace = name_space;
        sensor33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor34")
    {
        sensor34 = value;
        sensor34.value_namespace = name_space;
        sensor34.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor35")
    {
        sensor35 = value;
        sensor35.value_namespace = name_space;
        sensor35.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor36")
    {
        sensor36 = value;
        sensor36.value_namespace = name_space;
        sensor36.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor37")
    {
        sensor37 = value;
        sensor37.value_namespace = name_space;
        sensor37.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor38")
    {
        sensor38 = value;
        sensor38.value_namespace = name_space;
        sensor38.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor39")
    {
        sensor39 = value;
        sensor39.value_namespace = name_space;
        sensor39.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor40")
    {
        sensor40 = value;
        sensor40.value_namespace = name_space;
        sensor40.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor9")
    {
        sensor9.yfilter = yfilter;
    }
    if(value_path == "sensor10")
    {
        sensor10.yfilter = yfilter;
    }
    if(value_path == "sensor11")
    {
        sensor11.yfilter = yfilter;
    }
    if(value_path == "sensor12")
    {
        sensor12.yfilter = yfilter;
    }
    if(value_path == "sensor13")
    {
        sensor13.yfilter = yfilter;
    }
    if(value_path == "sensor14")
    {
        sensor14.yfilter = yfilter;
    }
    if(value_path == "sensor15")
    {
        sensor15.yfilter = yfilter;
    }
    if(value_path == "sensor16")
    {
        sensor16.yfilter = yfilter;
    }
    if(value_path == "sensor17")
    {
        sensor17.yfilter = yfilter;
    }
    if(value_path == "sensor18")
    {
        sensor18.yfilter = yfilter;
    }
    if(value_path == "sensor19")
    {
        sensor19.yfilter = yfilter;
    }
    if(value_path == "sensor20")
    {
        sensor20.yfilter = yfilter;
    }
    if(value_path == "sensor21")
    {
        sensor21.yfilter = yfilter;
    }
    if(value_path == "sensor22")
    {
        sensor22.yfilter = yfilter;
    }
    if(value_path == "sensor23")
    {
        sensor23.yfilter = yfilter;
    }
    if(value_path == "sensor24")
    {
        sensor24.yfilter = yfilter;
    }
    if(value_path == "sensor25")
    {
        sensor25.yfilter = yfilter;
    }
    if(value_path == "sensor26")
    {
        sensor26.yfilter = yfilter;
    }
    if(value_path == "sensor27")
    {
        sensor27.yfilter = yfilter;
    }
    if(value_path == "sensor28")
    {
        sensor28.yfilter = yfilter;
    }
    if(value_path == "sensor29")
    {
        sensor29.yfilter = yfilter;
    }
    if(value_path == "sensor30")
    {
        sensor30.yfilter = yfilter;
    }
    if(value_path == "sensor31")
    {
        sensor31.yfilter = yfilter;
    }
    if(value_path == "sensor32")
    {
        sensor32.yfilter = yfilter;
    }
    if(value_path == "sensor33")
    {
        sensor33.yfilter = yfilter;
    }
    if(value_path == "sensor34")
    {
        sensor34.yfilter = yfilter;
    }
    if(value_path == "sensor35")
    {
        sensor35.yfilter = yfilter;
    }
    if(value_path == "sensor36")
    {
        sensor36.yfilter = yfilter;
    }
    if(value_path == "sensor37")
    {
        sensor37.yfilter = yfilter;
    }
    if(value_path == "sensor38")
    {
        sensor38.yfilter = yfilter;
    }
    if(value_path == "sensor39")
    {
        sensor39.yfilter = yfilter;
    }
    if(value_path == "sensor40")
    {
        sensor40.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spsd-items" || name == "sensor9" || name == "sensor10" || name == "sensor11" || name == "sensor12" || name == "sensor13" || name == "sensor14" || name == "sensor15" || name == "sensor16" || name == "sensor17" || name == "sensor18" || name == "sensor19" || name == "sensor20" || name == "sensor21" || name == "sensor22" || name == "sensor23" || name == "sensor24" || name == "sensor25" || name == "sensor26" || name == "sensor27" || name == "sensor28" || name == "sensor29" || name == "sensor30" || name == "sensor31" || name == "sensor32" || name == "sensor33" || name == "sensor34" || name == "sensor35" || name == "sensor36" || name == "sensor37" || name == "sensor38" || name == "sensor39" || name == "sensor40" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "spsensorblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::~SpsdItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList>();
        ent_->parent = this;
        spsd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : spsd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicItems()
    :
    asic_list(this, {"id"})
{

    yang_name = "asic-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::~AsicItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::has_operation() const
{
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Asic-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList>();
        ent_->parent = this;
        asic_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Asic-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList::AsicList()
    :
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    numslices{YType::uint8, "numSlices"},
    capabilities{YType::str, "capabilities"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Asic-list"; yang_parent_name = "asic-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList::~AsicList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| operst.is_set
	|| numslices.is_set
	|| capabilities.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numslices.yfilter)
	|| ydk::is_set(capabilities.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Asic-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numslices.is_set || is_set(numslices.yfilter)) leaf_name_data.push_back(numslices.get_name_leafdata());
    if (capabilities.is_set || is_set(capabilities.yfilter)) leaf_name_data.push_back(capabilities.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numSlices")
    {
        numslices = value;
        numslices.value_namespace = name_space;
        numslices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capabilities")
    {
        capabilities = value;
        capabilities.value_namespace = name_space;
        capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numSlices")
    {
        numslices.yfilter = yfilter;
    }
    if(value_path == "capabilities")
    {
        capabilities.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "operSt" || name == "numSlices" || name == "capabilities" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CpuItems()
    :
    cpu_list(this, {"id"})
{

    yang_name = "cpu-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::~CpuItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::has_operation() const
{
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CPU-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList>();
        ent_->parent = this;
        cpu_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpu_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CPU-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CPUList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    sock{YType::enumeration, "sock"},
    arch{YType::enumeration, "arch"},
    speed{YType::str, "speed"},
    cores{YType::uint16, "cores"},
    coresen{YType::uint16, "coresEn"},
    thrds{YType::uint16, "thrds"}
        ,
    core_items(std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems>())
{
    core_items->parent = this;

    yang_name = "CPU-list"; yang_parent_name = "cpu-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::~CPUList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| sock.is_set
	|| arch.is_set
	|| speed.is_set
	|| cores.is_set
	|| coresen.is_set
	|| thrds.is_set
	|| (core_items !=  nullptr && core_items->has_data());
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(sock.yfilter)
	|| ydk::is_set(arch.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(cores.yfilter)
	|| ydk::is_set(coresen.yfilter)
	|| ydk::is_set(thrds.yfilter)
	|| (core_items !=  nullptr && core_items->has_operation());
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CPU-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (sock.is_set || is_set(sock.yfilter)) leaf_name_data.push_back(sock.get_name_leafdata());
    if (arch.is_set || is_set(arch.yfilter)) leaf_name_data.push_back(arch.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (cores.is_set || is_set(cores.yfilter)) leaf_name_data.push_back(cores.get_name_leafdata());
    if (coresen.is_set || is_set(coresen.yfilter)) leaf_name_data.push_back(coresen.get_name_leafdata());
    if (thrds.is_set || is_set(thrds.yfilter)) leaf_name_data.push_back(thrds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-items")
    {
        if(core_items == nullptr)
        {
            core_items = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems>();
        }
        return core_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(core_items != nullptr)
    {
        _children["core-items"] = core_items;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sock")
    {
        sock = value;
        sock.value_namespace = name_space;
        sock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch")
    {
        arch = value;
        arch.value_namespace = name_space;
        arch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cores")
    {
        cores = value;
        cores.value_namespace = name_space;
        cores.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coresEn")
    {
        coresen = value;
        coresen.value_namespace = name_space;
        coresen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thrds")
    {
        thrds = value;
        thrds.value_namespace = name_space;
        thrds.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "sock")
    {
        sock.yfilter = yfilter;
    }
    if(value_path == "arch")
    {
        arch.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "cores")
    {
        cores.yfilter = yfilter;
    }
    if(value_path == "coresEn")
    {
        coresen.yfilter = yfilter;
    }
    if(value_path == "thrds")
    {
        thrds.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "sock" || name == "arch" || name == "speed" || name == "cores" || name == "coresEn" || name == "thrds")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreItems()
    :
    core_list(this, {"id"})
{

    yang_name = "core-items"; yang_parent_name = "CPU-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::~CoreItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::has_operation() const
{
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Core-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList>();
        ent_->parent = this;
        core_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : core_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Core-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList::CoreList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Core-list"; yang_parent_name = "core-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList::~CoreList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Core-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmItems()
    :
    dimm_list(this, {"id"})
{

    yang_name = "dimm-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::~DimmItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::has_operation() const
{
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dimm-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList>();
        ent_->parent = this;
        dimm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dimm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dimm-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList::DimmList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "Dimm-list"; yang_parent_name = "dimm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList::~DimmList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dimm-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems::FlashItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "flash-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems::~FlashItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems::ObflItems()
    :
    logt{YType::str, "logT"},
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "obfl-items"; yang_parent_name = "fc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems::~ObflItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems::has_data() const
{
    if (is_presence_container) return true;
    return logt.is_set
	|| id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logt.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obfl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logt.is_set || is_set(logt.yfilter)) leaf_name_data.push_back(logt.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logT")
    {
        logt = value;
        logt.value_namespace = name_space;
        logt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logT")
    {
        logt.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logT" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::RstrecItems::RstrecItems()
    :
    cardrstrec_list(this, {"ts"})
{

    yang_name = "rstrec-items"; yang_parent_name = "FCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::RstrecItems::~RstrecItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::RstrecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cardrstrec_list.len(); index++)
    {
        if(cardrstrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FcslotItems::FCSlotList::RstrecItems::has_operation() const
{
    for (std::size_t index=0; index<cardrstrec_list.len(); index++)
    {
        if(cardrstrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::RstrecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rstrec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::RstrecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::RstrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CardRstRec-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList>();
        ent_->parent = this;
        cardrstrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::RstrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cardrstrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::RstrecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FcslotItems::FCSlotList::RstrecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FcslotItems::FCSlotList::RstrecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CardRstRec-list")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList::CardRstRecList()
    :
    ts{YType::str, "ts"},
    reason{YType::enumeration, "reason"},
    reasonqual{YType::str, "reasonQual"},
    ver{YType::str, "ver"},
    service{YType::str, "service"}
{

    yang_name = "CardRstRec-list"; yang_parent_name = "rstrec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList::~CardRstRecList()
{
}

bool System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList::has_data() const
{
    if (is_presence_container) return true;
    return ts.is_set
	|| reason.is_set
	|| reasonqual.is_set
	|| ver.is_set
	|| service.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(reasonqual.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(service.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CardRstRec-list";
    ADD_KEY_TOKEN(ts, "ts");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (reasonqual.is_set || is_set(reasonqual.yfilter)) leaf_name_data.push_back(reasonqual.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ts")
    {
        ts = value;
        ts.value_namespace = name_space;
        ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reasonQual")
    {
        reasonqual = value;
        reasonqual.value_namespace = name_space;
        reasonqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ts")
    {
        ts.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "reasonQual")
    {
        reasonqual.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::RstrecItems::CardRstRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ts" || name == "reason" || name == "reasonQual" || name == "ver" || name == "service")
        return true;
    return false;
}

System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "FCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ChItems::ScslotItems::ScslotItems()
    :
    syscslot_list(this, {"id"})
{

    yang_name = "scslot-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::ScslotItems::~ScslotItems()
{
}

bool System::ChItems::ScslotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<syscslot_list.len(); index++)
    {
        if(syscslot_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::ScslotItems::has_operation() const
{
    for (std::size_t index=0; index<syscslot_list.len(); index++)
    {
        if(syscslot_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::ScslotItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::ScslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SysCSlot-list")
    {
        auto ent_ = std::make_shared<System::ChItems::ScslotItems::SysCSlotList>();
        ent_->parent = this;
        syscslot_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : syscslot_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::ScslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::ScslotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::ScslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SysCSlot-list")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::SysCSlotList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    sc_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems>())
    , rstrec_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::RstrecItems>())
    , rtoosslot_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems>())
{
    sc_items->parent = this;
    rstrec_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "SysCSlot-list"; yang_parent_name = "scslot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::ScslotItems::SysCSlotList::~SysCSlotList()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| physid.is_set
	|| type.is_set
	|| operst.is_set
	|| loc.is_set
	|| (sc_items !=  nullptr && sc_items->has_data())
	|| (rstrec_items !=  nullptr && rstrec_items->has_data())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_data());
}

bool System::ChItems::ScslotItems::SysCSlotList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(physid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (sc_items !=  nullptr && sc_items->has_operation())
	|| (rstrec_items !=  nullptr && rstrec_items->has_operation())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_operation());
}

std::string System::ChItems::ScslotItems::SysCSlotList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/scslot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::ScslotItems::SysCSlotList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SysCSlot-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (physid.is_set || is_set(physid.yfilter)) leaf_name_data.push_back(physid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sc-items")
    {
        if(sc_items == nullptr)
        {
            sc_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems>();
        }
        return sc_items;
    }

    if(child_yang_name == "rstrec-items")
    {
        if(rstrec_items == nullptr)
        {
            rstrec_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::RstrecItems>();
        }
        return rstrec_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sc_items != nullptr)
    {
        _children["sc-items"] = sc_items;
    }

    if(rstrec_items != nullptr)
    {
        _children["rstrec-items"] = rstrec_items;
    }

    if(rtoosslot_items != nullptr)
    {
        _children["rtoosSlot-items"] = rtoosslot_items;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physId")
    {
        physid = value;
        physid.value_namespace = name_space;
        physid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "physId")
    {
        physid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sc-items" || name == "rstrec-items" || name == "rtoosSlot-items" || name == "id" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::ScItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    hwver{YType::str, "hwVer"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    rdst{YType::enumeration, "rdSt"},
    swcid{YType::uint32, "swCId"},
    nump{YType::uint16, "numP"},
    upts{YType::str, "upTs"},
    pwrst{YType::enumeration, "pwrSt"},
    swver{YType::str, "swVer"},
    partnumber{YType::str, "partNumber"},
    vdrid{YType::str, "vdrId"},
    poweractualdraw{YType::uint32, "powerActualDraw"},
    powerallocated{YType::uint32, "powerAllocated"}
        ,
    running_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems>())
    , locled_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems>())
    , eobc_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems>())
    , epc_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems>())
    , sensor_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems>())
    , splc_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems>())
    , asic_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems>())
    , cpu_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems>())
    , dimm_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems>())
    , flash_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems>())
    , obfl_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems>())
{
    running_items->parent = this;
    locled_items->parent = this;
    eobc_items->parent = this;
    epc_items->parent = this;
    sensor_items->parent = this;
    splc_items->parent = this;
    asic_items->parent = this;
    cpu_items->parent = this;
    dimm_items->parent = this;
    flash_items->parent = this;
    obfl_items->parent = this;

    yang_name = "sc-items"; yang_parent_name = "SysCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::~ScItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| hwver.is_set
	|| type.is_set
	|| operst.is_set
	|| rdst.is_set
	|| swcid.is_set
	|| nump.is_set
	|| upts.is_set
	|| pwrst.is_set
	|| swver.is_set
	|| partnumber.is_set
	|| vdrid.is_set
	|| poweractualdraw.is_set
	|| powerallocated.is_set
	|| (running_items !=  nullptr && running_items->has_data())
	|| (locled_items !=  nullptr && locled_items->has_data())
	|| (eobc_items !=  nullptr && eobc_items->has_data())
	|| (epc_items !=  nullptr && epc_items->has_data())
	|| (sensor_items !=  nullptr && sensor_items->has_data())
	|| (splc_items !=  nullptr && splc_items->has_data())
	|| (asic_items !=  nullptr && asic_items->has_data())
	|| (cpu_items !=  nullptr && cpu_items->has_data())
	|| (dimm_items !=  nullptr && dimm_items->has_data())
	|| (flash_items !=  nullptr && flash_items->has_data())
	|| (obfl_items !=  nullptr && obfl_items->has_data());
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(rdst.yfilter)
	|| ydk::is_set(swcid.yfilter)
	|| ydk::is_set(nump.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(pwrst.yfilter)
	|| ydk::is_set(swver.yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(poweractualdraw.yfilter)
	|| ydk::is_set(powerallocated.yfilter)
	|| (running_items !=  nullptr && running_items->has_operation())
	|| (locled_items !=  nullptr && locled_items->has_operation())
	|| (eobc_items !=  nullptr && eobc_items->has_operation())
	|| (epc_items !=  nullptr && epc_items->has_operation())
	|| (sensor_items !=  nullptr && sensor_items->has_operation())
	|| (splc_items !=  nullptr && splc_items->has_operation())
	|| (asic_items !=  nullptr && asic_items->has_operation())
	|| (cpu_items !=  nullptr && cpu_items->has_operation())
	|| (dimm_items !=  nullptr && dimm_items->has_operation())
	|| (flash_items !=  nullptr && flash_items->has_operation())
	|| (obfl_items !=  nullptr && obfl_items->has_operation());
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (rdst.is_set || is_set(rdst.yfilter)) leaf_name_data.push_back(rdst.get_name_leafdata());
    if (swcid.is_set || is_set(swcid.yfilter)) leaf_name_data.push_back(swcid.get_name_leafdata());
    if (nump.is_set || is_set(nump.yfilter)) leaf_name_data.push_back(nump.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (pwrst.is_set || is_set(pwrst.yfilter)) leaf_name_data.push_back(pwrst.get_name_leafdata());
    if (swver.is_set || is_set(swver.yfilter)) leaf_name_data.push_back(swver.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (poweractualdraw.is_set || is_set(poweractualdraw.yfilter)) leaf_name_data.push_back(poweractualdraw.get_name_leafdata());
    if (powerallocated.is_set || is_set(powerallocated.yfilter)) leaf_name_data.push_back(powerallocated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "running-items")
    {
        if(running_items == nullptr)
        {
            running_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems>();
        }
        return running_items;
    }

    if(child_yang_name == "locled-items")
    {
        if(locled_items == nullptr)
        {
            locled_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems>();
        }
        return locled_items;
    }

    if(child_yang_name == "eobc-items")
    {
        if(eobc_items == nullptr)
        {
            eobc_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems>();
        }
        return eobc_items;
    }

    if(child_yang_name == "epc-items")
    {
        if(epc_items == nullptr)
        {
            epc_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems>();
        }
        return epc_items;
    }

    if(child_yang_name == "sensor-items")
    {
        if(sensor_items == nullptr)
        {
            sensor_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems>();
        }
        return sensor_items;
    }

    if(child_yang_name == "splc-items")
    {
        if(splc_items == nullptr)
        {
            splc_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems>();
        }
        return splc_items;
    }

    if(child_yang_name == "asic-items")
    {
        if(asic_items == nullptr)
        {
            asic_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems>();
        }
        return asic_items;
    }

    if(child_yang_name == "cpu-items")
    {
        if(cpu_items == nullptr)
        {
            cpu_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems>();
        }
        return cpu_items;
    }

    if(child_yang_name == "dimm-items")
    {
        if(dimm_items == nullptr)
        {
            dimm_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems>();
        }
        return dimm_items;
    }

    if(child_yang_name == "flash-items")
    {
        if(flash_items == nullptr)
        {
            flash_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems>();
        }
        return flash_items;
    }

    if(child_yang_name == "obfl-items")
    {
        if(obfl_items == nullptr)
        {
            obfl_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems>();
        }
        return obfl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(running_items != nullptr)
    {
        _children["running-items"] = running_items;
    }

    if(locled_items != nullptr)
    {
        _children["locled-items"] = locled_items;
    }

    if(eobc_items != nullptr)
    {
        _children["eobc-items"] = eobc_items;
    }

    if(epc_items != nullptr)
    {
        _children["epc-items"] = epc_items;
    }

    if(sensor_items != nullptr)
    {
        _children["sensor-items"] = sensor_items;
    }

    if(splc_items != nullptr)
    {
        _children["splc-items"] = splc_items;
    }

    if(asic_items != nullptr)
    {
        _children["asic-items"] = asic_items;
    }

    if(cpu_items != nullptr)
    {
        _children["cpu-items"] = cpu_items;
    }

    if(dimm_items != nullptr)
    {
        _children["dimm-items"] = dimm_items;
    }

    if(flash_items != nullptr)
    {
        _children["flash-items"] = flash_items;
    }

    if(obfl_items != nullptr)
    {
        _children["obfl-items"] = obfl_items;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rdSt")
    {
        rdst = value;
        rdst.value_namespace = name_space;
        rdst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swCId")
    {
        swcid = value;
        swcid.value_namespace = name_space;
        swcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numP")
    {
        nump = value;
        nump.value_namespace = name_space;
        nump.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upTs")
    {
        upts = value;
        upts.value_namespace = name_space;
        upts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrSt")
    {
        pwrst = value;
        pwrst.value_namespace = name_space;
        pwrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "swVer")
    {
        swver = value;
        swver.value_namespace = name_space;
        swver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partNumber")
    {
        partnumber = value;
        partnumber.value_namespace = name_space;
        partnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "powerActualDraw")
    {
        poweractualdraw = value;
        poweractualdraw.value_namespace = name_space;
        poweractualdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "powerAllocated")
    {
        powerallocated = value;
        powerallocated.value_namespace = name_space;
        powerallocated.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "rdSt")
    {
        rdst.yfilter = yfilter;
    }
    if(value_path == "swCId")
    {
        swcid.yfilter = yfilter;
    }
    if(value_path == "numP")
    {
        nump.yfilter = yfilter;
    }
    if(value_path == "upTs")
    {
        upts.yfilter = yfilter;
    }
    if(value_path == "pwrSt")
    {
        pwrst.yfilter = yfilter;
    }
    if(value_path == "swVer")
    {
        swver.yfilter = yfilter;
    }
    if(value_path == "partNumber")
    {
        partnumber.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "powerActualDraw")
    {
        poweractualdraw.yfilter = yfilter;
    }
    if(value_path == "powerAllocated")
    {
        powerallocated.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-items" || name == "locled-items" || name == "eobc-items" || name == "epc-items" || name == "sensor-items" || name == "splc-items" || name == "asic-items" || name == "cpu-items" || name == "dimm-items" || name == "flash-items" || name == "obfl-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer" || name == "type" || name == "operSt" || name == "rdSt" || name == "swCId" || name == "numP" || name == "upTs" || name == "pwrSt" || name == "swVer" || name == "partNumber" || name == "vdrId" || name == "powerActualDraw" || name == "powerAllocated")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems::RunningItems()
    :
    biosver{YType::str, "biosVer"},
    expectedver{YType::str, "expectedVer"},
    operst{YType::enumeration, "operSt"},
    interimver{YType::str, "interimVer"},
    version{YType::str, "version"},
    internallabel{YType::str, "internalLabel"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"},
    ts{YType::str, "ts"},
    descr{YType::str, "descr"}
{

    yang_name = "running-items"; yang_parent_name = "sc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems::~RunningItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems::has_data() const
{
    if (is_presence_container) return true;
    return biosver.is_set
	|| expectedver.is_set
	|| operst.is_set
	|| interimver.is_set
	|| version.is_set
	|| internallabel.is_set
	|| type.is_set
	|| mode.is_set
	|| ts.is_set
	|| descr.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(biosver.yfilter)
	|| ydk::is_set(expectedver.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(interimver.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(internallabel.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "running-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (biosver.is_set || is_set(biosver.yfilter)) leaf_name_data.push_back(biosver.get_name_leafdata());
    if (expectedver.is_set || is_set(expectedver.yfilter)) leaf_name_data.push_back(expectedver.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (interimver.is_set || is_set(interimver.yfilter)) leaf_name_data.push_back(interimver.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (internallabel.is_set || is_set(internallabel.yfilter)) leaf_name_data.push_back(internallabel.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "biosVer")
    {
        biosver = value;
        biosver.value_namespace = name_space;
        biosver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expectedVer")
    {
        expectedver = value;
        expectedver.value_namespace = name_space;
        expectedver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interimVer")
    {
        interimver = value;
        interimver.value_namespace = name_space;
        interimver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internalLabel")
    {
        internallabel = value;
        internallabel.value_namespace = name_space;
        internallabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ts")
    {
        ts = value;
        ts.value_namespace = name_space;
        ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "biosVer")
    {
        biosver.yfilter = yfilter;
    }
    if(value_path == "expectedVer")
    {
        expectedver.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "interimVer")
    {
        interimver.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "internalLabel")
    {
        internallabel.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "ts")
    {
        ts.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "biosVer" || name == "expectedVer" || name == "operSt" || name == "interimVer" || name == "version" || name == "internalLabel" || name == "type" || name == "mode" || name == "ts" || name == "descr")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocledItems()
    :
    locled_list(this, {"id"})
{

    yang_name = "locled-items"; yang_parent_name = "sc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::~LocledItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<locled_list.len(); index++)
    {
        if(locled_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::has_operation() const
{
    for (std::size_t index=0; index<locled_list.len(); index++)
    {
        if(locled_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locled-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "LocLed-list")
    {
        auto ent_ = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList>();
        ent_->parent = this;
        locled_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : locled_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LocLed-list")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList::LocLedList()
    :
    id{YType::uint32, "id"},
    model{YType::str, "model"},
    descr{YType::str, "descr"},
    color{YType::enumeration, "color"},
    operst{YType::enumeration, "operSt"},
    adminst{YType::enumeration, "adminSt"}
{

    yang_name = "LocLed-list"; yang_parent_name = "locled-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList::~LocLedList()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| model.is_set
	|| descr.is_set
	|| color.is_set
	|| operst.is_set
	|| adminst.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(adminst.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LocLed-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::LocledItems::LocLedList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "model" || name == "descr" || name == "color" || name == "operSt" || name == "adminSt")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcItems()
    :
    eobcp_list(this, {"id"})
{

    yang_name = "eobc-items"; yang_parent_name = "sc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::~EobcItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eobcp_list.len(); index++)
    {
        if(eobcp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::has_operation() const
{
    for (std::size_t index=0; index<eobcp_list.len(); index++)
    {
        if(eobcp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eobc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EobcP-list")
    {
        auto ent_ = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList>();
        ent_->parent = this;
        eobcp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eobcp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EobcP-list")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList::EobcPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "EobcP-list"; yang_parent_name = "eobc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList::~EobcPList()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EobcP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcItems()
    :
    epcp_list(this, {"id"})
{

    yang_name = "epc-items"; yang_parent_name = "sc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::~EpcItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<epcp_list.len(); index++)
    {
        if(epcp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::has_operation() const
{
    for (std::size_t index=0; index<epcp_list.len(); index++)
    {
        if(epcp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EpcP-list")
    {
        auto ent_ = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList>();
        ent_->parent = this;
        epcp_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : epcp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "EpcP-list")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList::EpcPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "EpcP-list"; yang_parent_name = "epc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList::~EpcPList()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "EpcP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorItems()
    :
    sensor_list(this, {"id"})
{

    yang_name = "sensor-items"; yang_parent_name = "sc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::~SensorItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::has_operation() const
{
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sensor-list")
    {
        auto ent_ = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList>();
        ent_->parent = this;
        sensor_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sensor_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sensor-list")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList::SensorList()
    :
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    majorthresh{YType::int16, "majorThresh"},
    minorthresh{YType::int16, "minorThresh"},
    operst{YType::enumeration, "operSt"},
    tempvalue{YType::uint16, "tempValue"},
    unit{YType::str, "unit"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    descr{YType::str, "descr"}
{

    yang_name = "Sensor-list"; yang_parent_name = "sensor-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList::~SensorList()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| majorthresh.is_set
	|| minorthresh.is_set
	|| operst.is_set
	|| tempvalue.is_set
	|| unit.is_set
	|| vendor.is_set
	|| model.is_set
	|| descr.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(majorthresh.yfilter)
	|| ydk::is_set(minorthresh.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(tempvalue.yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sensor-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (majorthresh.is_set || is_set(majorthresh.yfilter)) leaf_name_data.push_back(majorthresh.get_name_leafdata());
    if (minorthresh.is_set || is_set(minorthresh.yfilter)) leaf_name_data.push_back(minorthresh.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (tempvalue.is_set || is_set(tempvalue.yfilter)) leaf_name_data.push_back(tempvalue.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majorThresh")
    {
        majorthresh = value;
        majorthresh.value_namespace = name_space;
        majorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minorThresh")
    {
        minorthresh = value;
        minorthresh.value_namespace = name_space;
        minorthresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tempValue")
    {
        tempvalue = value;
        tempvalue.value_namespace = name_space;
        tempvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "majorThresh")
    {
        majorthresh.yfilter = yfilter;
    }
    if(value_path == "minorThresh")
    {
        minorthresh.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "tempValue")
    {
        tempvalue.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "majorThresh" || name == "minorThresh" || name == "operSt" || name == "tempValue" || name == "unit" || name == "vendor" || name == "model" || name == "descr")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"},
    numblk{YType::uint16, "numBlk"}
        ,
    spcmn_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems>())
    , splcblk_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems>())
    , sppd_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems>())
    , spsd_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems>())
    , spsensorblk_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems>())
{
    spcmn_items->parent = this;
    splcblk_items->parent = this;
    sppd_items->parent = this;
    spsd_items->parent = this;
    spsensorblk_items->parent = this;

    yang_name = "splc-items"; yang_parent_name = "sc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::~SplcItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| rev.is_set
	|| ser.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set
	|| numblk.is_set
	|| (spcmn_items !=  nullptr && spcmn_items->has_data())
	|| (splcblk_items !=  nullptr && splcblk_items->has_data())
	|| (sppd_items !=  nullptr && sppd_items->has_data())
	|| (spsd_items !=  nullptr && spsd_items->has_data())
	|| (spsensorblk_items !=  nullptr && spsensorblk_items->has_data());
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numblk.yfilter)
	|| (spcmn_items !=  nullptr && spcmn_items->has_operation())
	|| (splcblk_items !=  nullptr && splcblk_items->has_operation())
	|| (sppd_items !=  nullptr && sppd_items->has_operation())
	|| (spsd_items !=  nullptr && spsd_items->has_operation())
	|| (spsensorblk_items !=  nullptr && spsensorblk_items->has_operation());
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "splc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numblk.is_set || is_set(numblk.yfilter)) leaf_name_data.push_back(numblk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spcmn-items")
    {
        if(spcmn_items == nullptr)
        {
            spcmn_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems>();
        }
        return spcmn_items;
    }

    if(child_yang_name == "splcblk-items")
    {
        if(splcblk_items == nullptr)
        {
            splcblk_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems>();
        }
        return splcblk_items;
    }

    if(child_yang_name == "sppd-items")
    {
        if(sppd_items == nullptr)
        {
            sppd_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems>();
        }
        return sppd_items;
    }

    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems>();
        }
        return spsd_items;
    }

    if(child_yang_name == "spsensorblk-items")
    {
        if(spsensorblk_items == nullptr)
        {
            spsensorblk_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems>();
        }
        return spsensorblk_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spcmn_items != nullptr)
    {
        _children["spcmn-items"] = spcmn_items;
    }

    if(splcblk_items != nullptr)
    {
        _children["splcblk-items"] = splcblk_items;
    }

    if(sppd_items != nullptr)
    {
        _children["sppd-items"] = sppd_items;
    }

    if(spsd_items != nullptr)
    {
        _children["spsd-items"] = spsd_items;
    }

    if(spsensorblk_items != nullptr)
    {
        _children["spsensorblk-items"] = spsensorblk_items;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numBlk")
    {
        numblk = value;
        numblk.value_namespace = name_space;
        numblk.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numBlk")
    {
        numblk.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spcmn-items" || name == "splcblk-items" || name == "sppd-items" || name == "spsd-items" || name == "spsensorblk-items" || name == "id" || name == "vendor" || name == "rev" || name == "ser" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt" || name == "numBlk")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems::SpcmnItems()
    :
    size{YType::uint16, "size"},
    count{YType::uint16, "count"},
    major_{YType::uint16, "major"},
    minor{YType::uint16, "minor"},
    oem{YType::str, "oem"},
    pdnum{YType::str, "pdNum"},
    sernum{YType::str, "serNum"},
    prtnum{YType::str, "prtNum"},
    prev{YType::str, "pRev"},
    mfgdev{YType::str, "mfgDev"},
    hwver{YType::str, "hwVer"},
    mfgbits{YType::uint16, "mfgBits"},
    engbits{YType::uint16, "engBits"},
    pwrcon{YType::int16, "pwrCon"},
    rmafl{YType::str, "rmaFl"},
    clei{YType::str, "clei"},
    vdrid{YType::str, "vdrId"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spcmn-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems::~SpcmnItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| count.is_set
	|| major_.is_set
	|| minor.is_set
	|| oem.is_set
	|| pdnum.is_set
	|| sernum.is_set
	|| prtnum.is_set
	|| prev.is_set
	|| mfgdev.is_set
	|| hwver.is_set
	|| mfgbits.is_set
	|| engbits.is_set
	|| pwrcon.is_set
	|| rmafl.is_set
	|| clei.is_set
	|| vdrid.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(major_.yfilter)
	|| ydk::is_set(minor.yfilter)
	|| ydk::is_set(oem.yfilter)
	|| ydk::is_set(pdnum.yfilter)
	|| ydk::is_set(sernum.yfilter)
	|| ydk::is_set(prtnum.yfilter)
	|| ydk::is_set(prev.yfilter)
	|| ydk::is_set(mfgdev.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| ydk::is_set(mfgbits.yfilter)
	|| ydk::is_set(engbits.yfilter)
	|| ydk::is_set(pwrcon.yfilter)
	|| ydk::is_set(rmafl.yfilter)
	|| ydk::is_set(clei.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spcmn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (major_.is_set || is_set(major_.yfilter)) leaf_name_data.push_back(major_.get_name_leafdata());
    if (minor.is_set || is_set(minor.yfilter)) leaf_name_data.push_back(minor.get_name_leafdata());
    if (oem.is_set || is_set(oem.yfilter)) leaf_name_data.push_back(oem.get_name_leafdata());
    if (pdnum.is_set || is_set(pdnum.yfilter)) leaf_name_data.push_back(pdnum.get_name_leafdata());
    if (sernum.is_set || is_set(sernum.yfilter)) leaf_name_data.push_back(sernum.get_name_leafdata());
    if (prtnum.is_set || is_set(prtnum.yfilter)) leaf_name_data.push_back(prtnum.get_name_leafdata());
    if (prev.is_set || is_set(prev.yfilter)) leaf_name_data.push_back(prev.get_name_leafdata());
    if (mfgdev.is_set || is_set(mfgdev.yfilter)) leaf_name_data.push_back(mfgdev.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());
    if (mfgbits.is_set || is_set(mfgbits.yfilter)) leaf_name_data.push_back(mfgbits.get_name_leafdata());
    if (engbits.is_set || is_set(engbits.yfilter)) leaf_name_data.push_back(engbits.get_name_leafdata());
    if (pwrcon.is_set || is_set(pwrcon.yfilter)) leaf_name_data.push_back(pwrcon.get_name_leafdata());
    if (rmafl.is_set || is_set(rmafl.yfilter)) leaf_name_data.push_back(rmafl.get_name_leafdata());
    if (clei.is_set || is_set(clei.yfilter)) leaf_name_data.push_back(clei.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "major")
    {
        major_ = value;
        major_.value_namespace = name_space;
        major_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minor")
    {
        minor = value;
        minor.value_namespace = name_space;
        minor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oem")
    {
        oem = value;
        oem.value_namespace = name_space;
        oem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdNum")
    {
        pdnum = value;
        pdnum.value_namespace = name_space;
        pdnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serNum")
    {
        sernum = value;
        sernum.value_namespace = name_space;
        sernum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prtNum")
    {
        prtnum = value;
        prtnum.value_namespace = name_space;
        prtnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pRev")
    {
        prev = value;
        prev.value_namespace = name_space;
        prev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgDev")
    {
        mfgdev = value;
        mfgdev.value_namespace = name_space;
        mfgdev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgBits")
    {
        mfgbits = value;
        mfgbits.value_namespace = name_space;
        mfgbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "engBits")
    {
        engbits = value;
        engbits.value_namespace = name_space;
        engbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwrCon")
    {
        pwrcon = value;
        pwrcon.value_namespace = name_space;
        pwrcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rmaFl")
    {
        rmafl = value;
        rmafl.value_namespace = name_space;
        rmafl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clei")
    {
        clei = value;
        clei.value_namespace = name_space;
        clei.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "major")
    {
        major_.yfilter = yfilter;
    }
    if(value_path == "minor")
    {
        minor.yfilter = yfilter;
    }
    if(value_path == "oem")
    {
        oem.yfilter = yfilter;
    }
    if(value_path == "pdNum")
    {
        pdnum.yfilter = yfilter;
    }
    if(value_path == "serNum")
    {
        sernum.yfilter = yfilter;
    }
    if(value_path == "prtNum")
    {
        prtnum.yfilter = yfilter;
    }
    if(value_path == "pRev")
    {
        prev.yfilter = yfilter;
    }
    if(value_path == "mfgDev")
    {
        mfgdev.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
    if(value_path == "mfgBits")
    {
        mfgbits.yfilter = yfilter;
    }
    if(value_path == "engBits")
    {
        engbits.yfilter = yfilter;
    }
    if(value_path == "pwrCon")
    {
        pwrcon.yfilter = yfilter;
    }
    if(value_path == "rmaFl")
    {
        rmafl.yfilter = yfilter;
    }
    if(value_path == "clei")
    {
        clei.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "count" || name == "major" || name == "minor" || name == "oem" || name == "pdNum" || name == "serNum" || name == "prtNum" || name == "pRev" || name == "mfgDev" || name == "hwVer" || name == "mfgBits" || name == "engBits" || name == "pwrCon" || name == "rmaFl" || name == "clei" || name == "vdrId" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SplcblkItems()
    :
    fbits{YType::uint64, "fbits"},
    hwcbits{YType::uint64, "hwCBits"},
    crdidx{YType::uint16, "crdIdx"},
    macb{YType::str, "macB"},
    macl{YType::uint16, "macL"},
    eobcn{YType::uint16, "eobcN"},
    epldn{YType::uint16, "epldN"},
    maxcpwr{YType::uint16, "maxCPwr"},
    coolrq{YType::uint16, "coolRq"},
    ambt{YType::uint16, "ambT"},
    sensor1{YType::str, "sensor1"},
    sensor2{YType::str, "sensor2"},
    sensor3{YType::str, "sensor3"},
    sensor4{YType::str, "sensor4"},
    sensor5{YType::str, "sensor5"},
    sensor6{YType::str, "sensor6"},
    sensor7{YType::str, "sensor7"},
    sensor8{YType::str, "sensor8"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
        ,
    spsd_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems>())
    , sppd_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems>())
{
    spsd_items->parent = this;
    sppd_items->parent = this;

    yang_name = "splcblk-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::~SplcblkItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::has_data() const
{
    if (is_presence_container) return true;
    return fbits.is_set
	|| hwcbits.is_set
	|| crdidx.is_set
	|| macb.is_set
	|| macl.is_set
	|| eobcn.is_set
	|| epldn.is_set
	|| maxcpwr.is_set
	|| coolrq.is_set
	|| ambt.is_set
	|| sensor1.is_set
	|| sensor2.is_set
	|| sensor3.is_set
	|| sensor4.is_set
	|| sensor5.is_set
	|| sensor6.is_set
	|| sensor7.is_set
	|| sensor8.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set
	|| (spsd_items !=  nullptr && spsd_items->has_data())
	|| (sppd_items !=  nullptr && sppd_items->has_data());
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fbits.yfilter)
	|| ydk::is_set(hwcbits.yfilter)
	|| ydk::is_set(crdidx.yfilter)
	|| ydk::is_set(macb.yfilter)
	|| ydk::is_set(macl.yfilter)
	|| ydk::is_set(eobcn.yfilter)
	|| ydk::is_set(epldn.yfilter)
	|| ydk::is_set(maxcpwr.yfilter)
	|| ydk::is_set(coolrq.yfilter)
	|| ydk::is_set(ambt.yfilter)
	|| ydk::is_set(sensor1.yfilter)
	|| ydk::is_set(sensor2.yfilter)
	|| ydk::is_set(sensor3.yfilter)
	|| ydk::is_set(sensor4.yfilter)
	|| ydk::is_set(sensor5.yfilter)
	|| ydk::is_set(sensor6.yfilter)
	|| ydk::is_set(sensor7.yfilter)
	|| ydk::is_set(sensor8.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| (spsd_items !=  nullptr && spsd_items->has_operation())
	|| (sppd_items !=  nullptr && sppd_items->has_operation());
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "splcblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fbits.is_set || is_set(fbits.yfilter)) leaf_name_data.push_back(fbits.get_name_leafdata());
    if (hwcbits.is_set || is_set(hwcbits.yfilter)) leaf_name_data.push_back(hwcbits.get_name_leafdata());
    if (crdidx.is_set || is_set(crdidx.yfilter)) leaf_name_data.push_back(crdidx.get_name_leafdata());
    if (macb.is_set || is_set(macb.yfilter)) leaf_name_data.push_back(macb.get_name_leafdata());
    if (macl.is_set || is_set(macl.yfilter)) leaf_name_data.push_back(macl.get_name_leafdata());
    if (eobcn.is_set || is_set(eobcn.yfilter)) leaf_name_data.push_back(eobcn.get_name_leafdata());
    if (epldn.is_set || is_set(epldn.yfilter)) leaf_name_data.push_back(epldn.get_name_leafdata());
    if (maxcpwr.is_set || is_set(maxcpwr.yfilter)) leaf_name_data.push_back(maxcpwr.get_name_leafdata());
    if (coolrq.is_set || is_set(coolrq.yfilter)) leaf_name_data.push_back(coolrq.get_name_leafdata());
    if (ambt.is_set || is_set(ambt.yfilter)) leaf_name_data.push_back(ambt.get_name_leafdata());
    if (sensor1.is_set || is_set(sensor1.yfilter)) leaf_name_data.push_back(sensor1.get_name_leafdata());
    if (sensor2.is_set || is_set(sensor2.yfilter)) leaf_name_data.push_back(sensor2.get_name_leafdata());
    if (sensor3.is_set || is_set(sensor3.yfilter)) leaf_name_data.push_back(sensor3.get_name_leafdata());
    if (sensor4.is_set || is_set(sensor4.yfilter)) leaf_name_data.push_back(sensor4.get_name_leafdata());
    if (sensor5.is_set || is_set(sensor5.yfilter)) leaf_name_data.push_back(sensor5.get_name_leafdata());
    if (sensor6.is_set || is_set(sensor6.yfilter)) leaf_name_data.push_back(sensor6.get_name_leafdata());
    if (sensor7.is_set || is_set(sensor7.yfilter)) leaf_name_data.push_back(sensor7.get_name_leafdata());
    if (sensor8.is_set || is_set(sensor8.yfilter)) leaf_name_data.push_back(sensor8.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems>();
        }
        return spsd_items;
    }

    if(child_yang_name == "sppd-items")
    {
        if(sppd_items == nullptr)
        {
            sppd_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems>();
        }
        return sppd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spsd_items != nullptr)
    {
        _children["spsd-items"] = spsd_items;
    }

    if(sppd_items != nullptr)
    {
        _children["sppd-items"] = sppd_items;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fbits")
    {
        fbits = value;
        fbits.value_namespace = name_space;
        fbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwCBits")
    {
        hwcbits = value;
        hwcbits.value_namespace = name_space;
        hwcbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crdIdx")
    {
        crdidx = value;
        crdidx.value_namespace = name_space;
        crdidx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macB")
    {
        macb = value;
        macb.value_namespace = name_space;
        macb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macL")
    {
        macl = value;
        macl.value_namespace = name_space;
        macl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eobcN")
    {
        eobcn = value;
        eobcn.value_namespace = name_space;
        eobcn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epldN")
    {
        epldn = value;
        epldn.value_namespace = name_space;
        epldn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr = value;
        maxcpwr.value_namespace = name_space;
        maxcpwr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coolRq")
    {
        coolrq = value;
        coolrq.value_namespace = name_space;
        coolrq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ambT")
    {
        ambt = value;
        ambt.value_namespace = name_space;
        ambt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor1")
    {
        sensor1 = value;
        sensor1.value_namespace = name_space;
        sensor1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor2")
    {
        sensor2 = value;
        sensor2.value_namespace = name_space;
        sensor2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor3")
    {
        sensor3 = value;
        sensor3.value_namespace = name_space;
        sensor3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor4")
    {
        sensor4 = value;
        sensor4.value_namespace = name_space;
        sensor4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor5")
    {
        sensor5 = value;
        sensor5.value_namespace = name_space;
        sensor5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor6")
    {
        sensor6 = value;
        sensor6.value_namespace = name_space;
        sensor6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor7")
    {
        sensor7 = value;
        sensor7.value_namespace = name_space;
        sensor7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor8")
    {
        sensor8 = value;
        sensor8.value_namespace = name_space;
        sensor8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fbits")
    {
        fbits.yfilter = yfilter;
    }
    if(value_path == "hwCBits")
    {
        hwcbits.yfilter = yfilter;
    }
    if(value_path == "crdIdx")
    {
        crdidx.yfilter = yfilter;
    }
    if(value_path == "macB")
    {
        macb.yfilter = yfilter;
    }
    if(value_path == "macL")
    {
        macl.yfilter = yfilter;
    }
    if(value_path == "eobcN")
    {
        eobcn.yfilter = yfilter;
    }
    if(value_path == "epldN")
    {
        epldn.yfilter = yfilter;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr.yfilter = yfilter;
    }
    if(value_path == "coolRq")
    {
        coolrq.yfilter = yfilter;
    }
    if(value_path == "ambT")
    {
        ambt.yfilter = yfilter;
    }
    if(value_path == "sensor1")
    {
        sensor1.yfilter = yfilter;
    }
    if(value_path == "sensor2")
    {
        sensor2.yfilter = yfilter;
    }
    if(value_path == "sensor3")
    {
        sensor3.yfilter = yfilter;
    }
    if(value_path == "sensor4")
    {
        sensor4.yfilter = yfilter;
    }
    if(value_path == "sensor5")
    {
        sensor5.yfilter = yfilter;
    }
    if(value_path == "sensor6")
    {
        sensor6.yfilter = yfilter;
    }
    if(value_path == "sensor7")
    {
        sensor7.yfilter = yfilter;
    }
    if(value_path == "sensor8")
    {
        sensor8.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spsd-items" || name == "sppd-items" || name == "fbits" || name == "hwCBits" || name == "crdIdx" || name == "macB" || name == "macL" || name == "eobcN" || name == "epldN" || name == "maxCPwr" || name == "coolRq" || name == "ambT" || name == "sensor1" || name == "sensor2" || name == "sensor3" || name == "sensor4" || name == "sensor5" || name == "sensor6" || name == "sensor7" || name == "sensor8" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "splcblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::~SpsdItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto ent_ = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList>();
        ent_->parent = this;
        spsd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : spsd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems::SppdItems()
    :
    prtty{YType::uint16, "prtTy"},
    numpts{YType::uint16, "numPts"}
{

    yang_name = "sppd-items"; yang_parent_name = "splcblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems::~SppdItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems::has_data() const
{
    if (is_presence_container) return true;
    return prtty.is_set
	|| numpts.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prtty.yfilter)
	|| ydk::is_set(numpts.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sppd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prtty.is_set || is_set(prtty.yfilter)) leaf_name_data.push_back(prtty.get_name_leafdata());
    if (numpts.is_set || is_set(numpts.yfilter)) leaf_name_data.push_back(numpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prtTy")
    {
        prtty = value;
        prtty.value_namespace = name_space;
        prtty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPts")
    {
        numpts = value;
        numpts.value_namespace = name_space;
        numpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prtTy")
    {
        prtty.yfilter = yfilter;
    }
    if(value_path == "numPts")
    {
        numpts.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prtTy" || name == "numPts")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems::SppdItems()
    :
    prtty{YType::uint16, "prtTy"},
    numpts{YType::uint16, "numPts"}
{

    yang_name = "sppd-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems::~SppdItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems::has_data() const
{
    if (is_presence_container) return true;
    return prtty.is_set
	|| numpts.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prtty.yfilter)
	|| ydk::is_set(numpts.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sppd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prtty.is_set || is_set(prtty.yfilter)) leaf_name_data.push_back(prtty.get_name_leafdata());
    if (numpts.is_set || is_set(numpts.yfilter)) leaf_name_data.push_back(numpts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prtTy")
    {
        prtty = value;
        prtty.value_namespace = name_space;
        prtty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numPts")
    {
        numpts = value;
        numpts.value_namespace = name_space;
        numpts.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prtTy")
    {
        prtty.yfilter = yfilter;
    }
    if(value_path == "numPts")
    {
        numpts.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prtTy" || name == "numPts")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::~SpsdItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto ent_ = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList>();
        ent_->parent = this;
        spsd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : spsd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsensorblkItems()
    :
    sensor9{YType::str, "sensor9"},
    sensor10{YType::str, "sensor10"},
    sensor11{YType::str, "sensor11"},
    sensor12{YType::str, "sensor12"},
    sensor13{YType::str, "sensor13"},
    sensor14{YType::str, "sensor14"},
    sensor15{YType::str, "sensor15"},
    sensor16{YType::str, "sensor16"},
    sensor17{YType::str, "sensor17"},
    sensor18{YType::str, "sensor18"},
    sensor19{YType::str, "sensor19"},
    sensor20{YType::str, "sensor20"},
    sensor21{YType::str, "sensor21"},
    sensor22{YType::str, "sensor22"},
    sensor23{YType::str, "sensor23"},
    sensor24{YType::str, "sensor24"},
    sensor25{YType::str, "sensor25"},
    sensor26{YType::str, "sensor26"},
    sensor27{YType::str, "sensor27"},
    sensor28{YType::str, "sensor28"},
    sensor29{YType::str, "sensor29"},
    sensor30{YType::str, "sensor30"},
    sensor31{YType::str, "sensor31"},
    sensor32{YType::str, "sensor32"},
    sensor33{YType::str, "sensor33"},
    sensor34{YType::str, "sensor34"},
    sensor35{YType::str, "sensor35"},
    sensor36{YType::str, "sensor36"},
    sensor37{YType::str, "sensor37"},
    sensor38{YType::str, "sensor38"},
    sensor39{YType::str, "sensor39"},
    sensor40{YType::str, "sensor40"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
        ,
    spsd_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems>())
{
    spsd_items->parent = this;

    yang_name = "spsensorblk-items"; yang_parent_name = "splc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::~SpsensorblkItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::has_data() const
{
    if (is_presence_container) return true;
    return sensor9.is_set
	|| sensor10.is_set
	|| sensor11.is_set
	|| sensor12.is_set
	|| sensor13.is_set
	|| sensor14.is_set
	|| sensor15.is_set
	|| sensor16.is_set
	|| sensor17.is_set
	|| sensor18.is_set
	|| sensor19.is_set
	|| sensor20.is_set
	|| sensor21.is_set
	|| sensor22.is_set
	|| sensor23.is_set
	|| sensor24.is_set
	|| sensor25.is_set
	|| sensor26.is_set
	|| sensor27.is_set
	|| sensor28.is_set
	|| sensor29.is_set
	|| sensor30.is_set
	|| sensor31.is_set
	|| sensor32.is_set
	|| sensor33.is_set
	|| sensor34.is_set
	|| sensor35.is_set
	|| sensor36.is_set
	|| sensor37.is_set
	|| sensor38.is_set
	|| sensor39.is_set
	|| sensor40.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set
	|| (spsd_items !=  nullptr && spsd_items->has_data());
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor9.yfilter)
	|| ydk::is_set(sensor10.yfilter)
	|| ydk::is_set(sensor11.yfilter)
	|| ydk::is_set(sensor12.yfilter)
	|| ydk::is_set(sensor13.yfilter)
	|| ydk::is_set(sensor14.yfilter)
	|| ydk::is_set(sensor15.yfilter)
	|| ydk::is_set(sensor16.yfilter)
	|| ydk::is_set(sensor17.yfilter)
	|| ydk::is_set(sensor18.yfilter)
	|| ydk::is_set(sensor19.yfilter)
	|| ydk::is_set(sensor20.yfilter)
	|| ydk::is_set(sensor21.yfilter)
	|| ydk::is_set(sensor22.yfilter)
	|| ydk::is_set(sensor23.yfilter)
	|| ydk::is_set(sensor24.yfilter)
	|| ydk::is_set(sensor25.yfilter)
	|| ydk::is_set(sensor26.yfilter)
	|| ydk::is_set(sensor27.yfilter)
	|| ydk::is_set(sensor28.yfilter)
	|| ydk::is_set(sensor29.yfilter)
	|| ydk::is_set(sensor30.yfilter)
	|| ydk::is_set(sensor31.yfilter)
	|| ydk::is_set(sensor32.yfilter)
	|| ydk::is_set(sensor33.yfilter)
	|| ydk::is_set(sensor34.yfilter)
	|| ydk::is_set(sensor35.yfilter)
	|| ydk::is_set(sensor36.yfilter)
	|| ydk::is_set(sensor37.yfilter)
	|| ydk::is_set(sensor38.yfilter)
	|| ydk::is_set(sensor39.yfilter)
	|| ydk::is_set(sensor40.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter)
	|| (spsd_items !=  nullptr && spsd_items->has_operation());
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsensorblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor9.is_set || is_set(sensor9.yfilter)) leaf_name_data.push_back(sensor9.get_name_leafdata());
    if (sensor10.is_set || is_set(sensor10.yfilter)) leaf_name_data.push_back(sensor10.get_name_leafdata());
    if (sensor11.is_set || is_set(sensor11.yfilter)) leaf_name_data.push_back(sensor11.get_name_leafdata());
    if (sensor12.is_set || is_set(sensor12.yfilter)) leaf_name_data.push_back(sensor12.get_name_leafdata());
    if (sensor13.is_set || is_set(sensor13.yfilter)) leaf_name_data.push_back(sensor13.get_name_leafdata());
    if (sensor14.is_set || is_set(sensor14.yfilter)) leaf_name_data.push_back(sensor14.get_name_leafdata());
    if (sensor15.is_set || is_set(sensor15.yfilter)) leaf_name_data.push_back(sensor15.get_name_leafdata());
    if (sensor16.is_set || is_set(sensor16.yfilter)) leaf_name_data.push_back(sensor16.get_name_leafdata());
    if (sensor17.is_set || is_set(sensor17.yfilter)) leaf_name_data.push_back(sensor17.get_name_leafdata());
    if (sensor18.is_set || is_set(sensor18.yfilter)) leaf_name_data.push_back(sensor18.get_name_leafdata());
    if (sensor19.is_set || is_set(sensor19.yfilter)) leaf_name_data.push_back(sensor19.get_name_leafdata());
    if (sensor20.is_set || is_set(sensor20.yfilter)) leaf_name_data.push_back(sensor20.get_name_leafdata());
    if (sensor21.is_set || is_set(sensor21.yfilter)) leaf_name_data.push_back(sensor21.get_name_leafdata());
    if (sensor22.is_set || is_set(sensor22.yfilter)) leaf_name_data.push_back(sensor22.get_name_leafdata());
    if (sensor23.is_set || is_set(sensor23.yfilter)) leaf_name_data.push_back(sensor23.get_name_leafdata());
    if (sensor24.is_set || is_set(sensor24.yfilter)) leaf_name_data.push_back(sensor24.get_name_leafdata());
    if (sensor25.is_set || is_set(sensor25.yfilter)) leaf_name_data.push_back(sensor25.get_name_leafdata());
    if (sensor26.is_set || is_set(sensor26.yfilter)) leaf_name_data.push_back(sensor26.get_name_leafdata());
    if (sensor27.is_set || is_set(sensor27.yfilter)) leaf_name_data.push_back(sensor27.get_name_leafdata());
    if (sensor28.is_set || is_set(sensor28.yfilter)) leaf_name_data.push_back(sensor28.get_name_leafdata());
    if (sensor29.is_set || is_set(sensor29.yfilter)) leaf_name_data.push_back(sensor29.get_name_leafdata());
    if (sensor30.is_set || is_set(sensor30.yfilter)) leaf_name_data.push_back(sensor30.get_name_leafdata());
    if (sensor31.is_set || is_set(sensor31.yfilter)) leaf_name_data.push_back(sensor31.get_name_leafdata());
    if (sensor32.is_set || is_set(sensor32.yfilter)) leaf_name_data.push_back(sensor32.get_name_leafdata());
    if (sensor33.is_set || is_set(sensor33.yfilter)) leaf_name_data.push_back(sensor33.get_name_leafdata());
    if (sensor34.is_set || is_set(sensor34.yfilter)) leaf_name_data.push_back(sensor34.get_name_leafdata());
    if (sensor35.is_set || is_set(sensor35.yfilter)) leaf_name_data.push_back(sensor35.get_name_leafdata());
    if (sensor36.is_set || is_set(sensor36.yfilter)) leaf_name_data.push_back(sensor36.get_name_leafdata());
    if (sensor37.is_set || is_set(sensor37.yfilter)) leaf_name_data.push_back(sensor37.get_name_leafdata());
    if (sensor38.is_set || is_set(sensor38.yfilter)) leaf_name_data.push_back(sensor38.get_name_leafdata());
    if (sensor39.is_set || is_set(sensor39.yfilter)) leaf_name_data.push_back(sensor39.get_name_leafdata());
    if (sensor40.is_set || is_set(sensor40.yfilter)) leaf_name_data.push_back(sensor40.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems>();
        }
        return spsd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spsd_items != nullptr)
    {
        _children["spsd-items"] = spsd_items;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor9")
    {
        sensor9 = value;
        sensor9.value_namespace = name_space;
        sensor9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor10")
    {
        sensor10 = value;
        sensor10.value_namespace = name_space;
        sensor10.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor11")
    {
        sensor11 = value;
        sensor11.value_namespace = name_space;
        sensor11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor12")
    {
        sensor12 = value;
        sensor12.value_namespace = name_space;
        sensor12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor13")
    {
        sensor13 = value;
        sensor13.value_namespace = name_space;
        sensor13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor14")
    {
        sensor14 = value;
        sensor14.value_namespace = name_space;
        sensor14.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor15")
    {
        sensor15 = value;
        sensor15.value_namespace = name_space;
        sensor15.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor16")
    {
        sensor16 = value;
        sensor16.value_namespace = name_space;
        sensor16.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor17")
    {
        sensor17 = value;
        sensor17.value_namespace = name_space;
        sensor17.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor18")
    {
        sensor18 = value;
        sensor18.value_namespace = name_space;
        sensor18.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor19")
    {
        sensor19 = value;
        sensor19.value_namespace = name_space;
        sensor19.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor20")
    {
        sensor20 = value;
        sensor20.value_namespace = name_space;
        sensor20.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor21")
    {
        sensor21 = value;
        sensor21.value_namespace = name_space;
        sensor21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor22")
    {
        sensor22 = value;
        sensor22.value_namespace = name_space;
        sensor22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor23")
    {
        sensor23 = value;
        sensor23.value_namespace = name_space;
        sensor23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor24")
    {
        sensor24 = value;
        sensor24.value_namespace = name_space;
        sensor24.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor25")
    {
        sensor25 = value;
        sensor25.value_namespace = name_space;
        sensor25.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor26")
    {
        sensor26 = value;
        sensor26.value_namespace = name_space;
        sensor26.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor27")
    {
        sensor27 = value;
        sensor27.value_namespace = name_space;
        sensor27.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor28")
    {
        sensor28 = value;
        sensor28.value_namespace = name_space;
        sensor28.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor29")
    {
        sensor29 = value;
        sensor29.value_namespace = name_space;
        sensor29.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor30")
    {
        sensor30 = value;
        sensor30.value_namespace = name_space;
        sensor30.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor31")
    {
        sensor31 = value;
        sensor31.value_namespace = name_space;
        sensor31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor32")
    {
        sensor32 = value;
        sensor32.value_namespace = name_space;
        sensor32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor33")
    {
        sensor33 = value;
        sensor33.value_namespace = name_space;
        sensor33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor34")
    {
        sensor34 = value;
        sensor34.value_namespace = name_space;
        sensor34.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor35")
    {
        sensor35 = value;
        sensor35.value_namespace = name_space;
        sensor35.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor36")
    {
        sensor36 = value;
        sensor36.value_namespace = name_space;
        sensor36.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor37")
    {
        sensor37 = value;
        sensor37.value_namespace = name_space;
        sensor37.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor38")
    {
        sensor38 = value;
        sensor38.value_namespace = name_space;
        sensor38.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor39")
    {
        sensor39 = value;
        sensor39.value_namespace = name_space;
        sensor39.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sensor40")
    {
        sensor40 = value;
        sensor40.value_namespace = name_space;
        sensor40.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sig")
    {
        sig = value;
        sig.value_namespace = name_space;
        sig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cksum")
    {
        cksum = value;
        cksum.value_namespace = name_space;
        cksum.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor9")
    {
        sensor9.yfilter = yfilter;
    }
    if(value_path == "sensor10")
    {
        sensor10.yfilter = yfilter;
    }
    if(value_path == "sensor11")
    {
        sensor11.yfilter = yfilter;
    }
    if(value_path == "sensor12")
    {
        sensor12.yfilter = yfilter;
    }
    if(value_path == "sensor13")
    {
        sensor13.yfilter = yfilter;
    }
    if(value_path == "sensor14")
    {
        sensor14.yfilter = yfilter;
    }
    if(value_path == "sensor15")
    {
        sensor15.yfilter = yfilter;
    }
    if(value_path == "sensor16")
    {
        sensor16.yfilter = yfilter;
    }
    if(value_path == "sensor17")
    {
        sensor17.yfilter = yfilter;
    }
    if(value_path == "sensor18")
    {
        sensor18.yfilter = yfilter;
    }
    if(value_path == "sensor19")
    {
        sensor19.yfilter = yfilter;
    }
    if(value_path == "sensor20")
    {
        sensor20.yfilter = yfilter;
    }
    if(value_path == "sensor21")
    {
        sensor21.yfilter = yfilter;
    }
    if(value_path == "sensor22")
    {
        sensor22.yfilter = yfilter;
    }
    if(value_path == "sensor23")
    {
        sensor23.yfilter = yfilter;
    }
    if(value_path == "sensor24")
    {
        sensor24.yfilter = yfilter;
    }
    if(value_path == "sensor25")
    {
        sensor25.yfilter = yfilter;
    }
    if(value_path == "sensor26")
    {
        sensor26.yfilter = yfilter;
    }
    if(value_path == "sensor27")
    {
        sensor27.yfilter = yfilter;
    }
    if(value_path == "sensor28")
    {
        sensor28.yfilter = yfilter;
    }
    if(value_path == "sensor29")
    {
        sensor29.yfilter = yfilter;
    }
    if(value_path == "sensor30")
    {
        sensor30.yfilter = yfilter;
    }
    if(value_path == "sensor31")
    {
        sensor31.yfilter = yfilter;
    }
    if(value_path == "sensor32")
    {
        sensor32.yfilter = yfilter;
    }
    if(value_path == "sensor33")
    {
        sensor33.yfilter = yfilter;
    }
    if(value_path == "sensor34")
    {
        sensor34.yfilter = yfilter;
    }
    if(value_path == "sensor35")
    {
        sensor35.yfilter = yfilter;
    }
    if(value_path == "sensor36")
    {
        sensor36.yfilter = yfilter;
    }
    if(value_path == "sensor37")
    {
        sensor37.yfilter = yfilter;
    }
    if(value_path == "sensor38")
    {
        sensor38.yfilter = yfilter;
    }
    if(value_path == "sensor39")
    {
        sensor39.yfilter = yfilter;
    }
    if(value_path == "sensor40")
    {
        sensor40.yfilter = yfilter;
    }
    if(value_path == "sig")
    {
        sig.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "cksum")
    {
        cksum.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spsd-items" || name == "sensor9" || name == "sensor10" || name == "sensor11" || name == "sensor12" || name == "sensor13" || name == "sensor14" || name == "sensor15" || name == "sensor16" || name == "sensor17" || name == "sensor18" || name == "sensor19" || name == "sensor20" || name == "sensor21" || name == "sensor22" || name == "sensor23" || name == "sensor24" || name == "sensor25" || name == "sensor26" || name == "sensor27" || name == "sensor28" || name == "sensor29" || name == "sensor30" || name == "sensor31" || name == "sensor32" || name == "sensor33" || name == "sensor34" || name == "sensor35" || name == "sensor36" || name == "sensor37" || name == "sensor38" || name == "sensor39" || name == "sensor40" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "spsensorblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::~SpsdItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto ent_ = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList>();
        ent_->parent = this;
        spsd_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : spsd_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::SpSdList()
    :
    id{YType::uint32, "id"},
    majth{YType::int16, "majTh"},
    minth{YType::int16, "minTh"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "SpSd-list"; yang_parent_name = "spsd-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::~SpSdList()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| majth.is_set
	|| minth.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(majth.yfilter)
	|| ydk::is_set(minth.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SpSd-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (majth.is_set || is_set(majth.yfilter)) leaf_name_data.push_back(majth.get_name_leafdata());
    if (minth.is_set || is_set(minth.yfilter)) leaf_name_data.push_back(minth.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "majTh")
    {
        majth = value;
        majth.value_namespace = name_space;
        majth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minTh")
    {
        minth = value;
        minth.value_namespace = name_space;
        minth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "majTh")
    {
        majth.yfilter = yfilter;
    }
    if(value_path == "minTh")
    {
        minth.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "majTh" || name == "minTh" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicItems()
    :
    asic_list(this, {"id"})
{

    yang_name = "asic-items"; yang_parent_name = "sc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::~AsicItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::has_operation() const
{
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Asic-list")
    {
        auto ent_ = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList>();
        ent_->parent = this;
        asic_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : asic_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Asic-list")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList::AsicList()
    :
    id{YType::uint32, "id"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    numslices{YType::uint8, "numSlices"},
    capabilities{YType::str, "capabilities"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Asic-list"; yang_parent_name = "asic-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList::~AsicList()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| type.is_set
	|| operst.is_set
	|| numslices.is_set
	|| capabilities.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numslices.yfilter)
	|| ydk::is_set(capabilities.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Asic-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (numslices.is_set || is_set(numslices.yfilter)) leaf_name_data.push_back(numslices.get_name_leafdata());
    if (capabilities.is_set || is_set(capabilities.yfilter)) leaf_name_data.push_back(capabilities.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numSlices")
    {
        numslices = value;
        numslices.value_namespace = name_space;
        numslices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capabilities")
    {
        capabilities = value;
        capabilities.value_namespace = name_space;
        capabilities.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "numSlices")
    {
        numslices.yfilter = yfilter;
    }
    if(value_path == "capabilities")
    {
        capabilities.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "operSt" || name == "numSlices" || name == "capabilities" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CpuItems()
    :
    cpu_list(this, {"id"})
{

    yang_name = "cpu-items"; yang_parent_name = "sc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::~CpuItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::has_operation() const
{
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CPU-list")
    {
        auto ent_ = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList>();
        ent_->parent = this;
        cpu_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cpu_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CPU-list")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CPUList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    sock{YType::enumeration, "sock"},
    arch{YType::enumeration, "arch"},
    speed{YType::str, "speed"},
    cores{YType::uint16, "cores"},
    coresen{YType::uint16, "coresEn"},
    thrds{YType::uint16, "thrds"}
        ,
    core_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems>())
{
    core_items->parent = this;

    yang_name = "CPU-list"; yang_parent_name = "cpu-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::~CPUList()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| sock.is_set
	|| arch.is_set
	|| speed.is_set
	|| cores.is_set
	|| coresen.is_set
	|| thrds.is_set
	|| (core_items !=  nullptr && core_items->has_data());
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(sock.yfilter)
	|| ydk::is_set(arch.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(cores.yfilter)
	|| ydk::is_set(coresen.yfilter)
	|| ydk::is_set(thrds.yfilter)
	|| (core_items !=  nullptr && core_items->has_operation());
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CPU-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (sock.is_set || is_set(sock.yfilter)) leaf_name_data.push_back(sock.get_name_leafdata());
    if (arch.is_set || is_set(arch.yfilter)) leaf_name_data.push_back(arch.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (cores.is_set || is_set(cores.yfilter)) leaf_name_data.push_back(cores.get_name_leafdata());
    if (coresen.is_set || is_set(coresen.yfilter)) leaf_name_data.push_back(coresen.get_name_leafdata());
    if (thrds.is_set || is_set(thrds.yfilter)) leaf_name_data.push_back(thrds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-items")
    {
        if(core_items == nullptr)
        {
            core_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems>();
        }
        return core_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(core_items != nullptr)
    {
        _children["core-items"] = core_items;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sock")
    {
        sock = value;
        sock.value_namespace = name_space;
        sock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch")
    {
        arch = value;
        arch.value_namespace = name_space;
        arch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cores")
    {
        cores = value;
        cores.value_namespace = name_space;
        cores.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coresEn")
    {
        coresen = value;
        coresen.value_namespace = name_space;
        coresen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "thrds")
    {
        thrds = value;
        thrds.value_namespace = name_space;
        thrds.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "sock")
    {
        sock.yfilter = yfilter;
    }
    if(value_path == "arch")
    {
        arch.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "cores")
    {
        cores.yfilter = yfilter;
    }
    if(value_path == "coresEn")
    {
        coresen.yfilter = yfilter;
    }
    if(value_path == "thrds")
    {
        thrds.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "sock" || name == "arch" || name == "speed" || name == "cores" || name == "coresEn" || name == "thrds")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreItems()
    :
    core_list(this, {"id"})
{

    yang_name = "core-items"; yang_parent_name = "CPU-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::~CoreItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::has_operation() const
{
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Core-list")
    {
        auto ent_ = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList>();
        ent_->parent = this;
        core_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : core_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Core-list")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList::CoreList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Core-list"; yang_parent_name = "core-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList::~CoreList()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Core-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmItems()
    :
    dimm_list(this, {"id"})
{

    yang_name = "dimm-items"; yang_parent_name = "sc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::~DimmItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::has_operation() const
{
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dimm-list")
    {
        auto ent_ = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList>();
        ent_->parent = this;
        dimm_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dimm_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dimm-list")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList::DimmList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "Dimm-list"; yang_parent_name = "dimm-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList::~DimmList()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dimm-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems::FlashItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"}
{

    yang_name = "flash-items"; yang_parent_name = "sc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems::~FlashItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (acc.is_set || is_set(acc.yfilter)) leaf_name_data.push_back(acc.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acc")
    {
        acc = value;
        acc.value_namespace = name_space;
        acc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "acc")
    {
        acc.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems::ObflItems()
    :
    logt{YType::str, "logT"},
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "obfl-items"; yang_parent_name = "sc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems::~ObflItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems::has_data() const
{
    if (is_presence_container) return true;
    return logt.is_set
	|| id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logt.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obfl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logt.is_set || is_set(logt.yfilter)) leaf_name_data.push_back(logt.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logT")
    {
        logt = value;
        logt.value_namespace = name_space;
        logt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logT")
    {
        logt.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logT" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::RstrecItems::RstrecItems()
    :
    cardrstrec_list(this, {"ts"})
{

    yang_name = "rstrec-items"; yang_parent_name = "SysCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::RstrecItems::~RstrecItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::RstrecItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cardrstrec_list.len(); index++)
    {
        if(cardrstrec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::ScslotItems::SysCSlotList::RstrecItems::has_operation() const
{
    for (std::size_t index=0; index<cardrstrec_list.len(); index++)
    {
        if(cardrstrec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::RstrecItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rstrec-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::RstrecItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::RstrecItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CardRstRec-list")
    {
        auto ent_ = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList>();
        ent_->parent = this;
        cardrstrec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::RstrecItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cardrstrec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::RstrecItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::ScslotItems::SysCSlotList::RstrecItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::ScslotItems::SysCSlotList::RstrecItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CardRstRec-list")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList::CardRstRecList()
    :
    ts{YType::str, "ts"},
    reason{YType::enumeration, "reason"},
    reasonqual{YType::str, "reasonQual"},
    ver{YType::str, "ver"},
    service{YType::str, "service"}
{

    yang_name = "CardRstRec-list"; yang_parent_name = "rstrec-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList::~CardRstRecList()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList::has_data() const
{
    if (is_presence_container) return true;
    return ts.is_set
	|| reason.is_set
	|| reasonqual.is_set
	|| ver.is_set
	|| service.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(reasonqual.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(service.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CardRstRec-list";
    ADD_KEY_TOKEN(ts, "ts");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (reasonqual.is_set || is_set(reasonqual.yfilter)) leaf_name_data.push_back(reasonqual.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ts")
    {
        ts = value;
        ts.value_namespace = name_space;
        ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reasonQual")
    {
        reasonqual = value;
        reasonqual.value_namespace = name_space;
        reasonqual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ver")
    {
        ver = value;
        ver.value_namespace = name_space;
        ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ts")
    {
        ts.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "reasonQual")
    {
        reasonqual.yfilter = yfilter;
    }
    if(value_path == "ver")
    {
        ver.yfilter = yfilter;
    }
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::RstrecItems::CardRstRecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ts" || name == "reason" || name == "reasonQual" || name == "ver" || name == "service")
        return true;
    return false;
}

System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "SysCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ChItems::PsuslotItems::PsuslotItems()
    :
    psuslot_list(this, {"id"})
{

    yang_name = "psuslot-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::PsuslotItems::~PsuslotItems()
{
}

bool System::ChItems::PsuslotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<psuslot_list.len(); index++)
    {
        if(psuslot_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::PsuslotItems::has_operation() const
{
    for (std::size_t index=0; index<psuslot_list.len(); index++)
    {
        if(psuslot_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::PsuslotItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::PsuslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psuslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::PsuslotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::PsuslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PsuSlot-list")
    {
        auto ent_ = std::make_shared<System::ChItems::PsuslotItems::PsuSlotList>();
        ent_->parent = this;
        psuslot_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::PsuslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : psuslot_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::PsuslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::PsuslotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::PsuslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PsuSlot-list")
        return true;
    return false;
}

System::ChItems::PsuslotItems::PsuSlotList::PsuSlotList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    psu_items(std::make_shared<System::ChItems::PsuslotItems::PsuSlotList::PsuItems>())
    , rtoosslot_items(std::make_shared<System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems>())
{
    psu_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "PsuSlot-list"; yang_parent_name = "psuslot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::PsuslotItems::PsuSlotList::~PsuSlotList()
{
}

bool System::ChItems::PsuslotItems::PsuSlotList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| physid.is_set
	|| type.is_set
	|| operst.is_set
	|| loc.is_set
	|| (psu_items !=  nullptr && psu_items->has_data())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_data());
}

bool System::ChItems::PsuslotItems::PsuSlotList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(physid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (psu_items !=  nullptr && psu_items->has_operation())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_operation());
}

std::string System::ChItems::PsuslotItems::PsuSlotList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/psuslot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::PsuslotItems::PsuSlotList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PsuSlot-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::PsuslotItems::PsuSlotList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (physid.is_set || is_set(physid.yfilter)) leaf_name_data.push_back(physid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::PsuslotItems::PsuSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "psu-items")
    {
        if(psu_items == nullptr)
        {
            psu_items = std::make_shared<System::ChItems::PsuslotItems::PsuSlotList::PsuItems>();
        }
        return psu_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::PsuslotItems::PsuSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(psu_items != nullptr)
    {
        _children["psu-items"] = psu_items;
    }

    if(rtoosslot_items != nullptr)
    {
        _children["rtoosSlot-items"] = rtoosslot_items;
    }

    return _children;
}

void System::ChItems::PsuslotItems::PsuSlotList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physId")
    {
        physid = value;
        physid.value_namespace = name_space;
        physid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::PsuslotItems::PsuSlotList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "physId")
    {
        physid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool System::ChItems::PsuslotItems::PsuSlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "psu-items" || name == "rtoosSlot-items" || name == "id" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsuItems()
    :
    operst{YType::enumeration, "operSt"},
    cap{YType::str, "cap"},
    drawncurr{YType::str, "drawnCurr"},
    vsrc{YType::enumeration, "vSrc"},
    volt{YType::str, "volt"},
    fanopst{YType::enumeration, "fanOpSt"},
    fandirection{YType::enumeration, "fanDirection"},
    inputcurr{YType::str, "inputCurr"},
    vdrid{YType::str, "vdrId"},
    vin{YType::str, "vIn"},
    vout{YType::str, "vOut"},
    pin{YType::uint32, "pIn"},
    pout{YType::uint32, "pOut"},
    iin{YType::str, "iIn"},
    iout{YType::str, "iOut"},
    softwarealarm{YType::boolean, "softwareAlarm"},
    hardwarealarm{YType::str, "hardwareAlarm"},
    typecordconnected{YType::str, "typeCordConnected"},
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    hwver{YType::str, "hwVer"}
        ,
    psfan_items(std::make_shared<System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems>())
{
    psfan_items->parent = this;

    yang_name = "psu-items"; yang_parent_name = "PsuSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::PsuslotItems::PsuSlotList::PsuItems::~PsuItems()
{
}

bool System::ChItems::PsuslotItems::PsuSlotList::PsuItems::has_data() const
{
    if (is_presence_container) return true;
    return operst.is_set
	|| cap.is_set
	|| drawncurr.is_set
	|| vsrc.is_set
	|| volt.is_set
	|| fanopst.is_set
	|| fandirection.is_set
	|| inputcurr.is_set
	|| vdrid.is_set
	|| vin.is_set
	|| vout.is_set
	|| pin.is_set
	|| pout.is_set
	|| iin.is_set
	|| iout.is_set
	|| softwarealarm.is_set
	|| hardwarealarm.is_set
	|| typecordconnected.is_set
	|| id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| hwver.is_set
	|| (psfan_items !=  nullptr && psfan_items->has_data());
}

bool System::ChItems::PsuslotItems::PsuSlotList::PsuItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(drawncurr.yfilter)
	|| ydk::is_set(vsrc.yfilter)
	|| ydk::is_set(volt.yfilter)
	|| ydk::is_set(fanopst.yfilter)
	|| ydk::is_set(fandirection.yfilter)
	|| ydk::is_set(inputcurr.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(vin.yfilter)
	|| ydk::is_set(vout.yfilter)
	|| ydk::is_set(pin.yfilter)
	|| ydk::is_set(pout.yfilter)
	|| ydk::is_set(iin.yfilter)
	|| ydk::is_set(iout.yfilter)
	|| ydk::is_set(softwarealarm.yfilter)
	|| ydk::is_set(hardwarealarm.yfilter)
	|| ydk::is_set(typecordconnected.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| (psfan_items !=  nullptr && psfan_items->has_operation());
}

std::string System::ChItems::PsuslotItems::PsuSlotList::PsuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::PsuslotItems::PsuSlotList::PsuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (cap.is_set || is_set(cap.yfilter)) leaf_name_data.push_back(cap.get_name_leafdata());
    if (drawncurr.is_set || is_set(drawncurr.yfilter)) leaf_name_data.push_back(drawncurr.get_name_leafdata());
    if (vsrc.is_set || is_set(vsrc.yfilter)) leaf_name_data.push_back(vsrc.get_name_leafdata());
    if (volt.is_set || is_set(volt.yfilter)) leaf_name_data.push_back(volt.get_name_leafdata());
    if (fanopst.is_set || is_set(fanopst.yfilter)) leaf_name_data.push_back(fanopst.get_name_leafdata());
    if (fandirection.is_set || is_set(fandirection.yfilter)) leaf_name_data.push_back(fandirection.get_name_leafdata());
    if (inputcurr.is_set || is_set(inputcurr.yfilter)) leaf_name_data.push_back(inputcurr.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (vin.is_set || is_set(vin.yfilter)) leaf_name_data.push_back(vin.get_name_leafdata());
    if (vout.is_set || is_set(vout.yfilter)) leaf_name_data.push_back(vout.get_name_leafdata());
    if (pin.is_set || is_set(pin.yfilter)) leaf_name_data.push_back(pin.get_name_leafdata());
    if (pout.is_set || is_set(pout.yfilter)) leaf_name_data.push_back(pout.get_name_leafdata());
    if (iin.is_set || is_set(iin.yfilter)) leaf_name_data.push_back(iin.get_name_leafdata());
    if (iout.is_set || is_set(iout.yfilter)) leaf_name_data.push_back(iout.get_name_leafdata());
    if (softwarealarm.is_set || is_set(softwarealarm.yfilter)) leaf_name_data.push_back(softwarealarm.get_name_leafdata());
    if (hardwarealarm.is_set || is_set(hardwarealarm.yfilter)) leaf_name_data.push_back(hardwarealarm.get_name_leafdata());
    if (typecordconnected.is_set || is_set(typecordconnected.yfilter)) leaf_name_data.push_back(typecordconnected.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::PsuslotItems::PsuSlotList::PsuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "psfan-items")
    {
        if(psfan_items == nullptr)
        {
            psfan_items = std::make_shared<System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems>();
        }
        return psfan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::PsuslotItems::PsuSlotList::PsuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(psfan_items != nullptr)
    {
        _children["psfan-items"] = psfan_items;
    }

    return _children;
}

void System::ChItems::PsuslotItems::PsuSlotList::PsuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cap")
    {
        cap = value;
        cap.value_namespace = name_space;
        cap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drawnCurr")
    {
        drawncurr = value;
        drawncurr.value_namespace = name_space;
        drawncurr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vSrc")
    {
        vsrc = value;
        vsrc.value_namespace = name_space;
        vsrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "volt")
    {
        volt = value;
        volt.value_namespace = name_space;
        volt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fanOpSt")
    {
        fanopst = value;
        fanopst.value_namespace = name_space;
        fanopst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fanDirection")
    {
        fandirection = value;
        fandirection.value_namespace = name_space;
        fandirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputCurr")
    {
        inputcurr = value;
        inputcurr.value_namespace = name_space;
        inputcurr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vIn")
    {
        vin = value;
        vin.value_namespace = name_space;
        vin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vOut")
    {
        vout = value;
        vout.value_namespace = name_space;
        vout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pIn")
    {
        pin = value;
        pin.value_namespace = name_space;
        pin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pOut")
    {
        pout = value;
        pout.value_namespace = name_space;
        pout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iIn")
    {
        iin = value;
        iin.value_namespace = name_space;
        iin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iOut")
    {
        iout = value;
        iout.value_namespace = name_space;
        iout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "softwareAlarm")
    {
        softwarealarm = value;
        softwarealarm.value_namespace = name_space;
        softwarealarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardwareAlarm")
    {
        hardwarealarm = value;
        hardwarealarm.value_namespace = name_space;
        hardwarealarm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "typeCordConnected")
    {
        typecordconnected = value;
        typecordconnected.value_namespace = name_space;
        typecordconnected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::PsuslotItems::PsuSlotList::PsuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "cap")
    {
        cap.yfilter = yfilter;
    }
    if(value_path == "drawnCurr")
    {
        drawncurr.yfilter = yfilter;
    }
    if(value_path == "vSrc")
    {
        vsrc.yfilter = yfilter;
    }
    if(value_path == "volt")
    {
        volt.yfilter = yfilter;
    }
    if(value_path == "fanOpSt")
    {
        fanopst.yfilter = yfilter;
    }
    if(value_path == "fanDirection")
    {
        fandirection.yfilter = yfilter;
    }
    if(value_path == "inputCurr")
    {
        inputcurr.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "vIn")
    {
        vin.yfilter = yfilter;
    }
    if(value_path == "vOut")
    {
        vout.yfilter = yfilter;
    }
    if(value_path == "pIn")
    {
        pin.yfilter = yfilter;
    }
    if(value_path == "pOut")
    {
        pout.yfilter = yfilter;
    }
    if(value_path == "iIn")
    {
        iin.yfilter = yfilter;
    }
    if(value_path == "iOut")
    {
        iout.yfilter = yfilter;
    }
    if(value_path == "softwareAlarm")
    {
        softwarealarm.yfilter = yfilter;
    }
    if(value_path == "hardwareAlarm")
    {
        hardwarealarm.yfilter = yfilter;
    }
    if(value_path == "typeCordConnected")
    {
        typecordconnected.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
}

bool System::ChItems::PsuslotItems::PsuSlotList::PsuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "psfan-items" || name == "operSt" || name == "cap" || name == "drawnCurr" || name == "vSrc" || name == "volt" || name == "fanOpSt" || name == "fanDirection" || name == "inputCurr" || name == "vdrId" || name == "vIn" || name == "vOut" || name == "pIn" || name == "pOut" || name == "iIn" || name == "iOut" || name == "softwareAlarm" || name == "hardwareAlarm" || name == "typeCordConnected" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer")
        return true;
    return false;
}

System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsfanItems()
    :
    psfan_list(this, {"id"})
{

    yang_name = "psfan-items"; yang_parent_name = "psu-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::~PsfanItems()
{
}

bool System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<psfan_list.len(); index++)
    {
        if(psfan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::has_operation() const
{
    for (std::size_t index=0; index<psfan_list.len(); index++)
    {
        if(psfan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psfan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PsFan-list")
    {
        auto ent_ = std::make_shared<System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList>();
        ent_->parent = this;
        psfan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : psfan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PsFan-list")
        return true;
    return false;
}

System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::PsFanList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"},
    dir{YType::enumeration, "dir"},
    speedinrpm{YType::uint32, "speedInRpm"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    hwver{YType::str, "hwVer"}
{

    yang_name = "PsFan-list"; yang_parent_name = "psfan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::~PsFanList()
{
}

bool System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| dir.is_set
	|| speedinrpm.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| hwver.is_set;
}

bool System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(dir.yfilter)
	|| ydk::is_set(speedinrpm.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(hwver.yfilter);
}

std::string System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PsFan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (dir.is_set || is_set(dir.yfilter)) leaf_name_data.push_back(dir.get_name_leafdata());
    if (speedinrpm.is_set || is_set(speedinrpm.yfilter)) leaf_name_data.push_back(speedinrpm.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dir")
    {
        dir = value;
        dir.value_namespace = name_space;
        dir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speedInRpm")
    {
        speedinrpm = value;
        speedinrpm.value_namespace = name_space;
        speedinrpm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
    }
    if(value_path == "speedInRpm")
    {
        speedinrpm.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
}

bool System::ChItems::PsuslotItems::PsuSlotList::PsuItems::PsfanItems::PsFanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "dir" || name == "speedInRpm" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer")
        return true;
    return false;
}

System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "PsuSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set;
}

bool System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter);
}

std::string System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
}

bool System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn")
        return true;
    return false;
}

System::ChItems::FtslotItems::FtslotItems()
    :
    ftslot_list(this, {"id"})
{

    yang_name = "ftslot-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::FtslotItems::~FtslotItems()
{
}

bool System::ChItems::FtslotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ftslot_list.len(); index++)
    {
        if(ftslot_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FtslotItems::has_operation() const
{
    for (std::size_t index=0; index<ftslot_list.len(); index++)
    {
        if(ftslot_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FtslotItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::FtslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ftslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FtslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FtSlot-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FtslotItems::FtSlotList>();
        ent_->parent = this;
        ftslot_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FtslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ftslot_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FtslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FtslotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FtslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FtSlot-list")
        return true;
    return false;
}

System::ChItems::FtslotItems::FtSlotList::FtSlotList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    ft_items(std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems>())
    , rtoosslot_items(std::make_shared<System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems>())
{
    ft_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "FtSlot-list"; yang_parent_name = "ftslot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::FtslotItems::FtSlotList::~FtSlotList()
{
}

bool System::ChItems::FtslotItems::FtSlotList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| physid.is_set
	|| type.is_set
	|| operst.is_set
	|| loc.is_set
	|| (ft_items !=  nullptr && ft_items->has_data())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_data());
}

bool System::ChItems::FtslotItems::FtSlotList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(physid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (ft_items !=  nullptr && ft_items->has_operation())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_operation());
}

std::string System::ChItems::FtslotItems::FtSlotList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/ftslot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::FtslotItems::FtSlotList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FtSlot-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (physid.is_set || is_set(physid.yfilter)) leaf_name_data.push_back(physid.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (loc.is_set || is_set(loc.yfilter)) leaf_name_data.push_back(loc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FtslotItems::FtSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ft-items")
    {
        if(ft_items == nullptr)
        {
            ft_items = std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems>();
        }
        return ft_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FtslotItems::FtSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ft_items != nullptr)
    {
        _children["ft-items"] = ft_items;
    }

    if(rtoosslot_items != nullptr)
    {
        _children["rtoosSlot-items"] = rtoosslot_items;
    }

    return _children;
}

void System::ChItems::FtslotItems::FtSlotList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physId")
    {
        physid = value;
        physid.value_namespace = name_space;
        physid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loc")
    {
        loc = value;
        loc.value_namespace = name_space;
        loc.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FtslotItems::FtSlotList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "physId")
    {
        physid.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "loc")
    {
        loc.yfilter = yfilter;
    }
}

bool System::ChItems::FtslotItems::FtSlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ft-items" || name == "rtoosSlot-items" || name == "id" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ChItems::FtslotItems::FtSlotList::FtItems::FtItems()
    :
    operst{YType::enumeration, "operSt"},
    fanname{YType::str, "fanName"},
    vdrid{YType::str, "vdrId"},
    poweractualdraw{YType::uint32, "powerActualDraw"},
    powerallocated{YType::uint32, "powerAllocated"},
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    hwver{YType::str, "hwVer"}
        ,
    ej_items(std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems>())
    , fan_items(std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems>())
    , locled_items(std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems>())
    , spfan_items(std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems>())
{
    ej_items->parent = this;
    fan_items->parent = this;
    locled_items->parent = this;
    spfan_items->parent = this;

    yang_name = "ft-items"; yang_parent_name = "FtSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FtslotItems::FtSlotList::FtItems::~FtItems()
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::has_data() const
{
    if (is_presence_container) return true;
    return operst.is_set
	|| fanname.is_set
	|| vdrid.is_set
	|| poweractualdraw.is_set
	|| powerallocated.is_set
	|| id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| hwver.is_set
	|| (ej_items !=  nullptr && ej_items->has_data())
	|| (fan_items !=  nullptr && fan_items->has_data())
	|| (locled_items !=  nullptr && locled_items->has_data())
	|| (spfan_items !=  nullptr && spfan_items->has_data());
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(fanname.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| ydk::is_set(poweractualdraw.yfilter)
	|| ydk::is_set(powerallocated.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(hwver.yfilter)
	|| (ej_items !=  nullptr && ej_items->has_operation())
	|| (fan_items !=  nullptr && fan_items->has_operation())
	|| (locled_items !=  nullptr && locled_items->has_operation())
	|| (spfan_items !=  nullptr && spfan_items->has_operation());
}

std::string System::ChItems::FtslotItems::FtSlotList::FtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ft-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::FtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (fanname.is_set || is_set(fanname.yfilter)) leaf_name_data.push_back(fanname.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
    if (poweractualdraw.is_set || is_set(poweractualdraw.yfilter)) leaf_name_data.push_back(poweractualdraw.get_name_leafdata());
    if (powerallocated.is_set || is_set(powerallocated.yfilter)) leaf_name_data.push_back(powerallocated.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (hwver.is_set || is_set(hwver.yfilter)) leaf_name_data.push_back(hwver.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ej-items")
    {
        if(ej_items == nullptr)
        {
            ej_items = std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems>();
        }
        return ej_items;
    }

    if(child_yang_name == "fan-items")
    {
        if(fan_items == nullptr)
        {
            fan_items = std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems>();
        }
        return fan_items;
    }

    if(child_yang_name == "locled-items")
    {
        if(locled_items == nullptr)
        {
            locled_items = std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::LocledItems>();
        }
        return locled_items;
    }

    if(child_yang_name == "spfan-items")
    {
        if(spfan_items == nullptr)
        {
            spfan_items = std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems>();
        }
        return spfan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ej_items != nullptr)
    {
        _children["ej-items"] = ej_items;
    }

    if(fan_items != nullptr)
    {
        _children["fan-items"] = fan_items;
    }

    if(locled_items != nullptr)
    {
        _children["locled-items"] = locled_items;
    }

    if(spfan_items != nullptr)
    {
        _children["spfan-items"] = spfan_items;
    }

    return _children;
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fanName")
    {
        fanname = value;
        fanname.value_namespace = name_space;
        fanname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vdrId")
    {
        vdrid = value;
        vdrid.value_namespace = name_space;
        vdrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "powerActualDraw")
    {
        poweractualdraw = value;
        poweractualdraw.value_namespace = name_space;
        poweractualdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "powerAllocated")
    {
        powerallocated = value;
        powerallocated.value_namespace = name_space;
        powerallocated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hwVer")
    {
        hwver = value;
        hwver.value_namespace = name_space;
        hwver.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "fanName")
    {
        fanname.yfilter = yfilter;
    }
    if(value_path == "vdrId")
    {
        vdrid.yfilter = yfilter;
    }
    if(value_path == "powerActualDraw")
    {
        poweractualdraw.yfilter = yfilter;
    }
    if(value_path == "powerAllocated")
    {
        powerallocated.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
    if(value_path == "hwVer")
    {
        hwver.yfilter = yfilter;
    }
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ej-items" || name == "fan-items" || name == "locled-items" || name == "spfan-items" || name == "operSt" || name == "fanName" || name == "vdrId" || name == "powerActualDraw" || name == "powerAllocated" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer")
        return true;
    return false;
}

System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjItems()
    :
    ejec_list(this, {"id"})
{

    yang_name = "ej-items"; yang_parent_name = "ft-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::~EjItems()
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ejec_list.len(); index++)
    {
        if(ejec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::has_operation() const
{
    for (std::size_t index=0; index<ejec_list.len(); index++)
    {
        if(ejec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ej-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ejec-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList>();
        ent_->parent = this;
        ejec_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ejec_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ejec-list")
        return true;
    return false;
}

System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::EjecList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Ejec-list"; yang_parent_name = "ej-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::~EjecList()
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ejec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanItems()
    :
    fan_list(this, {"id"})
{

    yang_name = "fan-items"; yang_parent_name = "ft-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::~FanItems()
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fan_list.len(); index++)
    {
        if(fan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::has_operation() const
{
    for (std::size_t index=0; index<fan_list.len(); index++)
    {
        if(fan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Fan-list")
    {
        auto ent_ = std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList>();
        ent_->parent = this;
        fan_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : fan_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Fan-list")
        return true;
    return false;
}

System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList::FanList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"},
    dir{YType::enumeration, "dir"},
    speedinrpm{YType::uint32, "speedInRpm"},
    speedinpercent{YType::uint32, "speedInPercent"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
{

    yang_name = "Fan-list"; yang_parent_name = "fan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList::~FanList()
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| dir.is_set
	|| speedinrpm.is_set
	|| speedinpercent.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set;
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(dir.yfilter)
	|| ydk::is_set(speedinrpm.yfilter)
	|| ydk::is_set(speedinpercent.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Fan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (dir.is_set || is_set(dir.yfilter)) leaf_name_data.push_back(dir.get_name_leafdata());
    if (speedinrpm.is_set || is_set(speedinrpm.yfilter)) leaf_name_data.push_back(speedinrpm.get_name_leafdata());
    if (speedinpercent.is_set || is_set(speedinpercent.yfilter)) leaf_name_data.push_back(speedinpercent.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dir")
    {
        dir = value;
        dir.value_namespace = name_space;
        dir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speedInRpm")
    {
        speedinrpm = value;
        speedinrpm.value_namespace = name_space;
        speedinrpm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speedInPercent")
    {
        speedinpercent = value;
        speedinpercent.value_namespace = name_space;
        speedinpercent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "model")
    {
        model = value;
        model.value_namespace = name_space;
        model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rev")
    {
        rev = value;
        rev.value_namespace = name_space;
        rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ser")
    {
        ser = value;
        ser.value_namespace = name_space;
        ser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mfgTm")
    {
        mfgtm = value;
        mfgtm.value_namespace = name_space;
        mfgtm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "descr")
    {
        descr = value;
        descr.value_namespace = name_space;
        descr.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "dir")
    {
        dir.yfilter = yfilter;
    }
    if(value_path == "speedInRpm")
    {
        speedinrpm.yfilter = yfilter;
    }
    if(value_path == "speedInPercent")
    {
        speedinpercent.yfilter = yfilter;
    }
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
    if(value_path == "model")
    {
        model.yfilter = yfilter;
    }
    if(value_path == "rev")
    {
        rev.yfilter = yfilter;
    }
    if(value_path == "ser")
    {
        ser.yfilter = yfilter;
    }
    if(value_path == "mfgTm")
    {
        mfgtm.yfilter = yfilter;
    }
    if(value_path == "descr")
    {
        descr.yfilter = yfilter;
    }
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "dir" || name == "speedInRpm" || name == "speedInPercent" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}


}
}

