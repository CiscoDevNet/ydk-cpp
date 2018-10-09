
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_NX_OS_device_38.hpp"
#include "Cisco_NX_OS_device_39.hpp"

using namespace ydk;

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {

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

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spsd_items != nullptr)
    {
        children["spsd-items"] = spsd_items;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto c = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList>();
        c->parent = this;
        spsd_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spsd_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Asic-list")
    {
        auto c = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList>();
        c->parent = this;
        asic_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asic_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::AsicItems::AsicList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CPU-list")
    {
        auto c = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList>();
        c->parent = this;
        cpu_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpu_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(core_items != nullptr)
    {
        children["core-items"] = core_items;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Core-list")
    {
        auto c = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList>();
        c->parent = this;
        core_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : core_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::CpuItems::CPUList::CoreItems::CoreList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dimm-list")
    {
        auto c = std::make_shared<System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList>();
        c->parent = this;
        dimm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dimm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::DimmItems::DimmList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::FlashItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::FcItems::ObflItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "FCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ChItems::FcslotItems::FCSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SysCSlot-list")
    {
        auto c = std::make_shared<System::ChItems::ScslotItems::SysCSlotList>();
        c->parent = this;
        syscslot_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : syscslot_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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
    , rtoosslot_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems>())
{
    sc_items->parent = this;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sc-items")
    {
        if(sc_items == nullptr)
        {
            sc_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems>();
        }
        return sc_items;
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

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sc_items != nullptr)
    {
        children["sc-items"] = sc_items;
    }

    if(rtoosslot_items != nullptr)
    {
        children["rtoosSlot-items"] = rtoosslot_items;
    }

    return children;
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
    if(name == "sc-items" || name == "rtoosSlot-items" || name == "id" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
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
    vdrid{YType::str, "vdrId"}
        ,
    running_items(std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems>())
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
	|| (running_items !=  nullptr && running_items->has_data())
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
	|| (running_items !=  nullptr && running_items->has_operation())
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

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "running-items")
    {
        if(running_items == nullptr)
        {
            running_items = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems>();
        }
        return running_items;
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

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(running_items != nullptr)
    {
        children["running-items"] = running_items;
    }

    if(eobc_items != nullptr)
    {
        children["eobc-items"] = eobc_items;
    }

    if(epc_items != nullptr)
    {
        children["epc-items"] = epc_items;
    }

    if(sensor_items != nullptr)
    {
        children["sensor-items"] = sensor_items;
    }

    if(splc_items != nullptr)
    {
        children["splc-items"] = splc_items;
    }

    if(asic_items != nullptr)
    {
        children["asic-items"] = asic_items;
    }

    if(cpu_items != nullptr)
    {
        children["cpu-items"] = cpu_items;
    }

    if(dimm_items != nullptr)
    {
        children["dimm-items"] = dimm_items;
    }

    if(flash_items != nullptr)
    {
        children["flash-items"] = flash_items;
    }

    if(obfl_items != nullptr)
    {
        children["obfl-items"] = obfl_items;
    }

    return children;
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
}

bool System::ChItems::ScslotItems::SysCSlotList::ScItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-items" || name == "eobc-items" || name == "epc-items" || name == "sensor-items" || name == "splc-items" || name == "asic-items" || name == "cpu-items" || name == "dimm-items" || name == "flash-items" || name == "obfl-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer" || name == "type" || name == "operSt" || name == "rdSt" || name == "swCId" || name == "numP" || name == "upTs" || name == "pwrSt" || name == "swVer" || name == "partNumber" || name == "vdrId")
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::RunningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EobcP-list")
    {
        auto c = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList>();
        c->parent = this;
        eobcp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : eobcp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::EobcItems::EobcPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "EpcP-list")
    {
        auto c = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList>();
        c->parent = this;
        epcp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : epcp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::EpcItems::EpcPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sensor-list")
    {
        auto c = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList>();
        c->parent = this;
        sensor_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sensor_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SensorItems::SensorList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spcmn_items != nullptr)
    {
        children["spcmn-items"] = spcmn_items;
    }

    if(splcblk_items != nullptr)
    {
        children["splcblk-items"] = splcblk_items;
    }

    if(sppd_items != nullptr)
    {
        children["sppd-items"] = sppd_items;
    }

    if(spsd_items != nullptr)
    {
        children["spsd-items"] = spsd_items;
    }

    if(spsensorblk_items != nullptr)
    {
        children["spsensorblk-items"] = spsensorblk_items;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpcmnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spsd_items != nullptr)
    {
        children["spsd-items"] = spsd_items;
    }

    if(sppd_items != nullptr)
    {
        children["sppd-items"] = sppd_items;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto c = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList>();
        c->parent = this;
        spsd_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spsd_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SplcblkItems::SppdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SppdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto c = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList>();
        c->parent = this;
        spsd_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spsd_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spsd_items != nullptr)
    {
        children["spsd-items"] = spsd_items;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto c = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList>();
        c->parent = this;
        spsd_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spsd_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::SplcItems::SpsensorblkItems::SpsdItems::SpSdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Asic-list")
    {
        auto c = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList>();
        c->parent = this;
        asic_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asic_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::AsicItems::AsicList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CPU-list")
    {
        auto c = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList>();
        c->parent = this;
        cpu_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpu_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(core_items != nullptr)
    {
        children["core-items"] = core_items;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Core-list")
    {
        auto c = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList>();
        c->parent = this;
        core_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : core_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::CpuItems::CPUList::CoreItems::CoreList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dimm-list")
    {
        auto c = std::make_shared<System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList>();
        c->parent = this;
        dimm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dimm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::DimmItems::DimmList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::FlashItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::ScItems::ObflItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "SysCSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ChItems::ScslotItems::SysCSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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

std::shared_ptr<Entity> System::ChItems::PsuslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PsuSlot-list")
    {
        auto c = std::make_shared<System::ChItems::PsuslotItems::PsuSlotList>();
        c->parent = this;
        psuslot_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::PsuslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : psuslot_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::PsuslotItems::PsuSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::PsuslotItems::PsuSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(psu_items != nullptr)
    {
        children["psu-items"] = psu_items;
    }

    if(rtoosslot_items != nullptr)
    {
        children["rtoosSlot-items"] = rtoosslot_items;
    }

    return children;
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
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    hwver{YType::str, "hwVer"}
{

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
	|| id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| hwver.is_set;
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
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(hwver.yfilter);
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

std::shared_ptr<Entity> System::ChItems::PsuslotItems::PsuSlotList::PsuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::PsuslotItems::PsuSlotList::PsuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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
    if(name == "operSt" || name == "cap" || name == "drawnCurr" || name == "vSrc" || name == "volt" || name == "fanOpSt" || name == "fanDirection" || name == "inputCurr" || name == "vdrId" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer")
        return true;
    return false;
}

System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "PsuSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
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
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ChItems::PsuslotItems::PsuSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
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

std::shared_ptr<Entity> System::ChItems::FtslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FtSlot-list")
    {
        auto c = std::make_shared<System::ChItems::FtslotItems::FtSlotList>();
        c->parent = this;
        ftslot_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FtslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ftslot_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::FtslotItems::FtSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FtslotItems::FtSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ft_items != nullptr)
    {
        children["ft-items"] = ft_items;
    }

    if(rtoosslot_items != nullptr)
    {
        children["rtoosSlot-items"] = rtoosslot_items;
    }

    return children;
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
    , spfan_items(std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems>())
{
    ej_items->parent = this;
    fan_items->parent = this;
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
	|| (spfan_items !=  nullptr && spfan_items->has_data());
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(fanname.yfilter)
	|| ydk::is_set(vdrid.yfilter)
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

std::shared_ptr<Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ej_items != nullptr)
    {
        children["ej-items"] = ej_items;
    }

    if(fan_items != nullptr)
    {
        children["fan-items"] = fan_items;
    }

    if(spfan_items != nullptr)
    {
        children["spfan-items"] = spfan_items;
    }

    return children;
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
    if(name == "ej-items" || name == "fan-items" || name == "spfan-items" || name == "operSt" || name == "fanName" || name == "vdrId" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer")
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

std::shared_ptr<Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ejec-list")
    {
        auto c = std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList>();
        c->parent = this;
        ejec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ejec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

std::shared_ptr<Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Fan-list")
    {
        auto c = std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList>();
        c->parent = this;
        fan_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fan_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
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

std::shared_ptr<Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::FanItems::FanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
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

System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"},
    numblk{YType::uint16, "numBlk"}
        ,
    spcmn_items(std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems>())
    , spfanblk_items(std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems>())
    , spfansn_items(std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems>())
{
    spcmn_items->parent = this;
    spfanblk_items->parent = this;
    spfansn_items->parent = this;

    yang_name = "spfan-items"; yang_parent_name = "ft-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::~SpfanItems()
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set
	|| numblk.is_set
	|| (spcmn_items !=  nullptr && spcmn_items->has_data())
	|| (spfanblk_items !=  nullptr && spfanblk_items->has_data())
	|| (spfansn_items !=  nullptr && spfansn_items->has_data());
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numblk.yfilter)
	|| (spcmn_items !=  nullptr && spcmn_items->has_operation())
	|| (spfanblk_items !=  nullptr && spfanblk_items->has_operation())
	|| (spfansn_items !=  nullptr && spfansn_items->has_operation());
}

std::string System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spfan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
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

std::shared_ptr<Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spcmn-items")
    {
        if(spcmn_items == nullptr)
        {
            spcmn_items = std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems>();
        }
        return spcmn_items;
    }

    if(child_yang_name == "spfanblk-items")
    {
        if(spfanblk_items == nullptr)
        {
            spfanblk_items = std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems>();
        }
        return spfanblk_items;
    }

    if(child_yang_name == "spfansn-items")
    {
        if(spfansn_items == nullptr)
        {
            spfansn_items = std::make_shared<System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems>();
        }
        return spfansn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spcmn_items != nullptr)
    {
        children["spcmn-items"] = spcmn_items;
    }

    if(spfanblk_items != nullptr)
    {
        children["spfanblk-items"] = spfanblk_items;
    }

    if(spfansn_items != nullptr)
    {
        children["spfansn-items"] = spfansn_items;
    }

    return children;
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spcmn-items" || name == "spfanblk-items" || name == "spfansn-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt" || name == "numBlk")
        return true;
    return false;
}

System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::SpcmnItems()
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

    yang_name = "spcmn-items"; yang_parent_name = "spfan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::~SpcmnItems()
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::has_data() const
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

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::has_operation() const
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

std::string System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spcmn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "count" || name == "major" || name == "minor" || name == "oem" || name == "pdNum" || name == "serNum" || name == "prtNum" || name == "pRev" || name == "mfgDev" || name == "hwVer" || name == "mfgBits" || name == "engBits" || name == "pwrCon" || name == "rmaFl" || name == "clei" || name == "vdrId" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::SpfanblkItems()
    :
    fbits{YType::uint64, "fbits"},
    hwcbits{YType::uint64, "hwCBits"},
    stackmib{YType::uint16, "stackMIB"},
    coolcap{YType::uint16, "coolCap"},
    ambtemp{YType::uint16, "ambTemp"},
    hppwrcon{YType::uint16, "hpPwrCon"},
    hpcoolcon{YType::uint16, "hpCoolCon"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spfanblk-items"; yang_parent_name = "spfan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::~SpfanblkItems()
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::has_data() const
{
    if (is_presence_container) return true;
    return fbits.is_set
	|| hwcbits.is_set
	|| stackmib.is_set
	|| coolcap.is_set
	|| ambtemp.is_set
	|| hppwrcon.is_set
	|| hpcoolcon.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fbits.yfilter)
	|| ydk::is_set(hwcbits.yfilter)
	|| ydk::is_set(stackmib.yfilter)
	|| ydk::is_set(coolcap.yfilter)
	|| ydk::is_set(ambtemp.yfilter)
	|| ydk::is_set(hppwrcon.yfilter)
	|| ydk::is_set(hpcoolcon.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spfanblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fbits.is_set || is_set(fbits.yfilter)) leaf_name_data.push_back(fbits.get_name_leafdata());
    if (hwcbits.is_set || is_set(hwcbits.yfilter)) leaf_name_data.push_back(hwcbits.get_name_leafdata());
    if (stackmib.is_set || is_set(stackmib.yfilter)) leaf_name_data.push_back(stackmib.get_name_leafdata());
    if (coolcap.is_set || is_set(coolcap.yfilter)) leaf_name_data.push_back(coolcap.get_name_leafdata());
    if (ambtemp.is_set || is_set(ambtemp.yfilter)) leaf_name_data.push_back(ambtemp.get_name_leafdata());
    if (hppwrcon.is_set || is_set(hppwrcon.yfilter)) leaf_name_data.push_back(hppwrcon.get_name_leafdata());
    if (hpcoolcon.is_set || is_set(hpcoolcon.yfilter)) leaf_name_data.push_back(hpcoolcon.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "stackMIB")
    {
        stackmib = value;
        stackmib.value_namespace = name_space;
        stackmib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coolCap")
    {
        coolcap = value;
        coolcap.value_namespace = name_space;
        coolcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ambTemp")
    {
        ambtemp = value;
        ambtemp.value_namespace = name_space;
        ambtemp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hpPwrCon")
    {
        hppwrcon = value;
        hppwrcon.value_namespace = name_space;
        hppwrcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hpCoolCon")
    {
        hpcoolcon = value;
        hpcoolcon.value_namespace = name_space;
        hpcoolcon.value_namespace_prefix = name_space_prefix;
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

void System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fbits")
    {
        fbits.yfilter = yfilter;
    }
    if(value_path == "hwCBits")
    {
        hwcbits.yfilter = yfilter;
    }
    if(value_path == "stackMIB")
    {
        stackmib.yfilter = yfilter;
    }
    if(value_path == "coolCap")
    {
        coolcap.yfilter = yfilter;
    }
    if(value_path == "ambTemp")
    {
        ambtemp.yfilter = yfilter;
    }
    if(value_path == "hpPwrCon")
    {
        hppwrcon.yfilter = yfilter;
    }
    if(value_path == "hpCoolCon")
    {
        hpcoolcon.yfilter = yfilter;
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

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fbits" || name == "hwCBits" || name == "stackMIB" || name == "coolCap" || name == "ambTemp" || name == "hpPwrCon" || name == "hpCoolCon" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::SpfansnItems()
    :
    sernum{YType::str, "serNum"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spfansn-items"; yang_parent_name = "spfan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::~SpfansnItems()
{
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::has_data() const
{
    if (is_presence_container) return true;
    return sernum.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sernum.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spfansn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sernum.is_set || is_set(sernum.yfilter)) leaf_name_data.push_back(sernum.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serNum")
    {
        sernum = value;
        sernum.value_namespace = name_space;
        sernum.value_namespace_prefix = name_space_prefix;
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

void System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serNum")
    {
        sernum.yfilter = yfilter;
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

bool System::ChItems::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serNum" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "FtSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ChItems::FtslotItems::FtSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ChItems::SpbpItems::SpbpItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"},
    numblk{YType::uint16, "numBlk"}
        ,
    spcmn_items(std::make_shared<System::ChItems::SpbpItems::SpcmnItems>())
    , spbpblk_items(std::make_shared<System::ChItems::SpbpItems::SpbpblkItems>())
{
    spcmn_items->parent = this;
    spbpblk_items->parent = this;

    yang_name = "spbp-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::SpbpItems::~SpbpItems()
{
}

bool System::ChItems::SpbpItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set
	|| numblk.is_set
	|| (spcmn_items !=  nullptr && spcmn_items->has_data())
	|| (spbpblk_items !=  nullptr && spbpblk_items->has_data());
}

bool System::ChItems::SpbpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numblk.yfilter)
	|| (spcmn_items !=  nullptr && spcmn_items->has_operation())
	|| (spbpblk_items !=  nullptr && spbpblk_items->has_operation());
}

std::string System::ChItems::SpbpItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::SpbpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spbp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SpbpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
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

std::shared_ptr<Entity> System::ChItems::SpbpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spcmn-items")
    {
        if(spcmn_items == nullptr)
        {
            spcmn_items = std::make_shared<System::ChItems::SpbpItems::SpcmnItems>();
        }
        return spcmn_items;
    }

    if(child_yang_name == "spbpblk-items")
    {
        if(spbpblk_items == nullptr)
        {
            spbpblk_items = std::make_shared<System::ChItems::SpbpItems::SpbpblkItems>();
        }
        return spbpblk_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SpbpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spcmn_items != nullptr)
    {
        children["spcmn-items"] = spcmn_items;
    }

    if(spbpblk_items != nullptr)
    {
        children["spbpblk-items"] = spbpblk_items;
    }

    return children;
}

void System::ChItems::SpbpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::SpbpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::SpbpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spcmn-items" || name == "spbpblk-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt" || name == "numBlk")
        return true;
    return false;
}

System::ChItems::SpbpItems::SpcmnItems::SpcmnItems()
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

    yang_name = "spcmn-items"; yang_parent_name = "spbp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::SpbpItems::SpcmnItems::~SpcmnItems()
{
}

bool System::ChItems::SpbpItems::SpcmnItems::has_data() const
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

bool System::ChItems::SpbpItems::SpcmnItems::has_operation() const
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

std::string System::ChItems::SpbpItems::SpcmnItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/spbp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::SpbpItems::SpcmnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spcmn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SpbpItems::SpcmnItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::SpbpItems::SpcmnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SpbpItems::SpcmnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SpbpItems::SpcmnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::SpbpItems::SpcmnItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::SpbpItems::SpcmnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "count" || name == "major" || name == "minor" || name == "oem" || name == "pdNum" || name == "serNum" || name == "prtNum" || name == "pRev" || name == "mfgDev" || name == "hwVer" || name == "mfgBits" || name == "engBits" || name == "pwrCon" || name == "rmaFl" || name == "clei" || name == "vdrId" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::SpbpItems::SpbpblkItems::SpbpblkItems()
    :
    fbits{YType::uint64, "fbits"},
    hwcbits{YType::uint64, "hwCBits"},
    macb{YType::str, "macB"},
    macl{YType::uint16, "macL"},
    stackmib{YType::uint16, "stackMIB"},
    oemeprise{YType::uint16, "oemEprise"},
    oemmib{YType::uint16, "oemMIB"},
    maxcpwr{YType::uint16, "maxCPwr"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spbpblk-items"; yang_parent_name = "spbp-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::SpbpItems::SpbpblkItems::~SpbpblkItems()
{
}

bool System::ChItems::SpbpItems::SpbpblkItems::has_data() const
{
    if (is_presence_container) return true;
    return fbits.is_set
	|| hwcbits.is_set
	|| macb.is_set
	|| macl.is_set
	|| stackmib.is_set
	|| oemeprise.is_set
	|| oemmib.is_set
	|| maxcpwr.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ChItems::SpbpItems::SpbpblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fbits.yfilter)
	|| ydk::is_set(hwcbits.yfilter)
	|| ydk::is_set(macb.yfilter)
	|| ydk::is_set(macl.yfilter)
	|| ydk::is_set(stackmib.yfilter)
	|| ydk::is_set(oemeprise.yfilter)
	|| ydk::is_set(oemmib.yfilter)
	|| ydk::is_set(maxcpwr.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ChItems::SpbpItems::SpbpblkItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/spbp-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::SpbpItems::SpbpblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spbpblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::SpbpItems::SpbpblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fbits.is_set || is_set(fbits.yfilter)) leaf_name_data.push_back(fbits.get_name_leafdata());
    if (hwcbits.is_set || is_set(hwcbits.yfilter)) leaf_name_data.push_back(hwcbits.get_name_leafdata());
    if (macb.is_set || is_set(macb.yfilter)) leaf_name_data.push_back(macb.get_name_leafdata());
    if (macl.is_set || is_set(macl.yfilter)) leaf_name_data.push_back(macl.get_name_leafdata());
    if (stackmib.is_set || is_set(stackmib.yfilter)) leaf_name_data.push_back(stackmib.get_name_leafdata());
    if (oemeprise.is_set || is_set(oemeprise.yfilter)) leaf_name_data.push_back(oemeprise.get_name_leafdata());
    if (oemmib.is_set || is_set(oemmib.yfilter)) leaf_name_data.push_back(oemmib.get_name_leafdata());
    if (maxcpwr.is_set || is_set(maxcpwr.yfilter)) leaf_name_data.push_back(maxcpwr.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::SpbpItems::SpbpblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::SpbpItems::SpbpblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::SpbpItems::SpbpblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "stackMIB")
    {
        stackmib = value;
        stackmib.value_namespace = name_space;
        stackmib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oemEprise")
    {
        oemeprise = value;
        oemeprise.value_namespace = name_space;
        oemeprise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oemMIB")
    {
        oemmib = value;
        oemmib.value_namespace = name_space;
        oemmib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr = value;
        maxcpwr.value_namespace = name_space;
        maxcpwr.value_namespace_prefix = name_space_prefix;
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

void System::ChItems::SpbpItems::SpbpblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fbits")
    {
        fbits.yfilter = yfilter;
    }
    if(value_path == "hwCBits")
    {
        hwcbits.yfilter = yfilter;
    }
    if(value_path == "macB")
    {
        macb.yfilter = yfilter;
    }
    if(value_path == "macL")
    {
        macl.yfilter = yfilter;
    }
    if(value_path == "stackMIB")
    {
        stackmib.yfilter = yfilter;
    }
    if(value_path == "oemEprise")
    {
        oemeprise.yfilter = yfilter;
    }
    if(value_path == "oemMIB")
    {
        oemmib.yfilter = yfilter;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr.yfilter = yfilter;
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

bool System::ChItems::SpbpItems::SpbpblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fbits" || name == "hwCBits" || name == "macB" || name == "macL" || name == "stackMIB" || name == "oemEprise" || name == "oemMIB" || name == "maxCPwr" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ChItems::BslotItems::BslotItems()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    board_items(std::make_shared<System::ChItems::BslotItems::BoardItems>())
    , rtoosslot_items(std::make_shared<System::ChItems::BslotItems::RtoosSlotItems>())
{
    board_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "bslot-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::~BslotItems()
{
}

bool System::ChItems::BslotItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| physid.is_set
	|| type.is_set
	|| operst.is_set
	|| loc.is_set
	|| (board_items !=  nullptr && board_items->has_data())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_data());
}

bool System::ChItems::BslotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(physid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (board_items !=  nullptr && board_items->has_operation())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_operation());
}

std::string System::ChItems::BslotItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::BslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "board-items")
    {
        if(board_items == nullptr)
        {
            board_items = std::make_shared<System::ChItems::BslotItems::BoardItems>();
        }
        return board_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ChItems::BslotItems::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::BslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(board_items != nullptr)
    {
        children["board-items"] = board_items;
    }

    if(rtoosslot_items != nullptr)
    {
        children["rtoosSlot-items"] = rtoosslot_items;
    }

    return children;
}

void System::ChItems::BslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::BslotItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::BslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "board-items" || name == "rtoosSlot-items" || name == "id" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::BoardItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    swcid{YType::uint32, "swCId"},
    nump{YType::uint16, "numP"},
    mace{YType::str, "macE"},
    upts{YType::str, "upTs"},
    pwrst{YType::enumeration, "pwrSt"},
    fwver{YType::str, "fwVer"},
    swver{YType::str, "swVer"},
    partnumber{YType::str, "partNumber"},
    vdrid{YType::str, "vdrId"}
        ,
    sensor_items(std::make_shared<System::ChItems::BslotItems::BoardItems::SensorItems>())
    , asic_items(std::make_shared<System::ChItems::BslotItems::BoardItems::AsicItems>())
    , cpu_items(std::make_shared<System::ChItems::BslotItems::BoardItems::CpuItems>())
    , dimm_items(std::make_shared<System::ChItems::BslotItems::BoardItems::DimmItems>())
    , flash_items(std::make_shared<System::ChItems::BslotItems::BoardItems::FlashItems>())
    , obfl_items(std::make_shared<System::ChItems::BslotItems::BoardItems::ObflItems>())
{
    sensor_items->parent = this;
    asic_items->parent = this;
    cpu_items->parent = this;
    dimm_items->parent = this;
    flash_items->parent = this;
    obfl_items->parent = this;

    yang_name = "board-items"; yang_parent_name = "bslot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::~BoardItems()
{
}

bool System::ChItems::BslotItems::BoardItems::has_data() const
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
	|| operst.is_set
	|| swcid.is_set
	|| nump.is_set
	|| mace.is_set
	|| upts.is_set
	|| pwrst.is_set
	|| fwver.is_set
	|| swver.is_set
	|| partnumber.is_set
	|| vdrid.is_set
	|| (sensor_items !=  nullptr && sensor_items->has_data())
	|| (asic_items !=  nullptr && asic_items->has_data())
	|| (cpu_items !=  nullptr && cpu_items->has_data())
	|| (dimm_items !=  nullptr && dimm_items->has_data())
	|| (flash_items !=  nullptr && flash_items->has_data())
	|| (obfl_items !=  nullptr && obfl_items->has_data());
}

bool System::ChItems::BslotItems::BoardItems::has_operation() const
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
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(swcid.yfilter)
	|| ydk::is_set(nump.yfilter)
	|| ydk::is_set(mace.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(pwrst.yfilter)
	|| ydk::is_set(fwver.yfilter)
	|| ydk::is_set(swver.yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| (sensor_items !=  nullptr && sensor_items->has_operation())
	|| (asic_items !=  nullptr && asic_items->has_operation())
	|| (cpu_items !=  nullptr && cpu_items->has_operation())
	|| (dimm_items !=  nullptr && dimm_items->has_operation())
	|| (flash_items !=  nullptr && flash_items->has_operation())
	|| (obfl_items !=  nullptr && obfl_items->has_operation());
}

std::string System::ChItems::BslotItems::BoardItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "board-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::get_name_leaf_data() const
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
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (swcid.is_set || is_set(swcid.yfilter)) leaf_name_data.push_back(swcid.get_name_leafdata());
    if (nump.is_set || is_set(nump.yfilter)) leaf_name_data.push_back(nump.get_name_leafdata());
    if (mace.is_set || is_set(mace.yfilter)) leaf_name_data.push_back(mace.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (pwrst.is_set || is_set(pwrst.yfilter)) leaf_name_data.push_back(pwrst.get_name_leafdata());
    if (fwver.is_set || is_set(fwver.yfilter)) leaf_name_data.push_back(fwver.get_name_leafdata());
    if (swver.is_set || is_set(swver.yfilter)) leaf_name_data.push_back(swver.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::BslotItems::BoardItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sensor-items")
    {
        if(sensor_items == nullptr)
        {
            sensor_items = std::make_shared<System::ChItems::BslotItems::BoardItems::SensorItems>();
        }
        return sensor_items;
    }

    if(child_yang_name == "asic-items")
    {
        if(asic_items == nullptr)
        {
            asic_items = std::make_shared<System::ChItems::BslotItems::BoardItems::AsicItems>();
        }
        return asic_items;
    }

    if(child_yang_name == "cpu-items")
    {
        if(cpu_items == nullptr)
        {
            cpu_items = std::make_shared<System::ChItems::BslotItems::BoardItems::CpuItems>();
        }
        return cpu_items;
    }

    if(child_yang_name == "dimm-items")
    {
        if(dimm_items == nullptr)
        {
            dimm_items = std::make_shared<System::ChItems::BslotItems::BoardItems::DimmItems>();
        }
        return dimm_items;
    }

    if(child_yang_name == "flash-items")
    {
        if(flash_items == nullptr)
        {
            flash_items = std::make_shared<System::ChItems::BslotItems::BoardItems::FlashItems>();
        }
        return flash_items;
    }

    if(child_yang_name == "obfl-items")
    {
        if(obfl_items == nullptr)
        {
            obfl_items = std::make_shared<System::ChItems::BslotItems::BoardItems::ObflItems>();
        }
        return obfl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::BslotItems::BoardItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sensor_items != nullptr)
    {
        children["sensor-items"] = sensor_items;
    }

    if(asic_items != nullptr)
    {
        children["asic-items"] = asic_items;
    }

    if(cpu_items != nullptr)
    {
        children["cpu-items"] = cpu_items;
    }

    if(dimm_items != nullptr)
    {
        children["dimm-items"] = dimm_items;
    }

    if(flash_items != nullptr)
    {
        children["flash-items"] = flash_items;
    }

    if(obfl_items != nullptr)
    {
        children["obfl-items"] = obfl_items;
    }

    return children;
}

void System::ChItems::BslotItems::BoardItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "fwVer")
    {
        fwver = value;
        fwver.value_namespace = name_space;
        fwver.value_namespace_prefix = name_space_prefix;
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
}

void System::ChItems::BslotItems::BoardItems::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "fwVer")
    {
        fwver.yfilter = yfilter;
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
}

bool System::ChItems::BslotItems::BoardItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-items" || name == "asic-items" || name == "cpu-items" || name == "dimm-items" || name == "flash-items" || name == "obfl-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "operSt" || name == "swCId" || name == "numP" || name == "macE" || name == "upTs" || name == "pwrSt" || name == "fwVer" || name == "swVer" || name == "partNumber" || name == "vdrId")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::SensorItems::SensorItems()
    :
    sensor_list(this, {"id"})
{

    yang_name = "sensor-items"; yang_parent_name = "board-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::SensorItems::~SensorItems()
{
}

bool System::ChItems::BslotItems::BoardItems::SensorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::BslotItems::BoardItems::SensorItems::has_operation() const
{
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::BslotItems::BoardItems::SensorItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::SensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::SensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::BslotItems::BoardItems::SensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sensor-list")
    {
        auto c = std::make_shared<System::ChItems::BslotItems::BoardItems::SensorItems::SensorList>();
        c->parent = this;
        sensor_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::BslotItems::BoardItems::SensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sensor_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::BslotItems::BoardItems::SensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::BslotItems::BoardItems::SensorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::BslotItems::BoardItems::SensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sensor-list")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::SensorList()
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

    yang_name = "Sensor-list"; yang_parent_name = "sensor-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::~SensorList()
{
}

bool System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::has_data() const
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

bool System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::has_operation() const
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

std::string System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/sensor-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sensor-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::BslotItems::BoardItems::SensorItems::SensorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "majorThresh" || name == "minorThresh" || name == "operSt" || name == "tempValue" || name == "unit" || name == "vendor" || name == "model" || name == "descr")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::AsicItems::AsicItems()
    :
    asic_list(this, {"id"})
{

    yang_name = "asic-items"; yang_parent_name = "board-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::AsicItems::~AsicItems()
{
}

bool System::ChItems::BslotItems::BoardItems::AsicItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::BslotItems::BoardItems::AsicItems::has_operation() const
{
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::BslotItems::BoardItems::AsicItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::AsicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::AsicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::BslotItems::BoardItems::AsicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Asic-list")
    {
        auto c = std::make_shared<System::ChItems::BslotItems::BoardItems::AsicItems::AsicList>();
        c->parent = this;
        asic_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::BslotItems::BoardItems::AsicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asic_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::BslotItems::BoardItems::AsicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::BslotItems::BoardItems::AsicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::BslotItems::BoardItems::AsicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Asic-list")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::AsicList()
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

    yang_name = "Asic-list"; yang_parent_name = "asic-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::~AsicList()
{
}

bool System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::has_data() const
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

bool System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::has_operation() const
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

std::string System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/asic-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Asic-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::BslotItems::BoardItems::AsicItems::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "operSt" || name == "numSlices" || name == "capabilities" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::CpuItems::CpuItems()
    :
    cpu_list(this, {"id"})
{

    yang_name = "cpu-items"; yang_parent_name = "board-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::CpuItems::~CpuItems()
{
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::has_operation() const
{
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::BslotItems::BoardItems::CpuItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::CpuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::CpuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::BslotItems::BoardItems::CpuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CPU-list")
    {
        auto c = std::make_shared<System::ChItems::BslotItems::BoardItems::CpuItems::CPUList>();
        c->parent = this;
        cpu_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::BslotItems::BoardItems::CpuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpu_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::BslotItems::BoardItems::CpuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::BslotItems::BoardItems::CpuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CPU-list")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CPUList()
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
    core_items(std::make_shared<System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems>())
{
    core_items->parent = this;

    yang_name = "CPU-list"; yang_parent_name = "cpu-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::~CPUList()
{
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::has_data() const
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

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::has_operation() const
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

std::string System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/cpu-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CPU-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-items")
    {
        if(core_items == nullptr)
        {
            core_items = std::make_shared<System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems>();
        }
        return core_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(core_items != nullptr)
    {
        children["core-items"] = core_items;
    }

    return children;
}

void System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "sock" || name == "arch" || name == "speed" || name == "cores" || name == "coresEn" || name == "thrds")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreItems()
    :
    core_list(this, {"id"})
{

    yang_name = "core-items"; yang_parent_name = "CPU-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::~CoreItems()
{
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::has_operation() const
{
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Core-list")
    {
        auto c = std::make_shared<System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList>();
        c->parent = this;
        core_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : core_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Core-list")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::CoreList()
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

System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::~CoreList()
{
}

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::has_data() const
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

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::has_operation() const
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

std::string System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Core-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::BslotItems::BoardItems::CpuItems::CPUList::CoreItems::CoreList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::DimmItems::DimmItems()
    :
    dimm_list(this, {"id"})
{

    yang_name = "dimm-items"; yang_parent_name = "board-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::DimmItems::~DimmItems()
{
}

bool System::ChItems::BslotItems::BoardItems::DimmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::BslotItems::BoardItems::DimmItems::has_operation() const
{
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::BslotItems::BoardItems::DimmItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::DimmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::DimmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::BslotItems::BoardItems::DimmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dimm-list")
    {
        auto c = std::make_shared<System::ChItems::BslotItems::BoardItems::DimmItems::DimmList>();
        c->parent = this;
        dimm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::BslotItems::BoardItems::DimmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dimm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::BslotItems::BoardItems::DimmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::BslotItems::BoardItems::DimmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::BslotItems::BoardItems::DimmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dimm-list")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::DimmList()
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

    yang_name = "Dimm-list"; yang_parent_name = "dimm-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::~DimmList()
{
}

bool System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::has_data() const
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

bool System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::has_operation() const
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

std::string System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/dimm-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dimm-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::BslotItems::BoardItems::DimmItems::DimmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::FlashItems::FlashItems()
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

    yang_name = "flash-items"; yang_parent_name = "board-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::FlashItems::~FlashItems()
{
}

bool System::ChItems::BslotItems::BoardItems::FlashItems::has_data() const
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

bool System::ChItems::BslotItems::BoardItems::FlashItems::has_operation() const
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

std::string System::ChItems::BslotItems::BoardItems::FlashItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::FlashItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::FlashItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::BslotItems::BoardItems::FlashItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::BslotItems::BoardItems::FlashItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::BslotItems::BoardItems::FlashItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::BslotItems::BoardItems::FlashItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::BslotItems::BoardItems::FlashItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::BslotItems::BoardItems::ObflItems::ObflItems()
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

    yang_name = "obfl-items"; yang_parent_name = "board-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::BoardItems::ObflItems::~ObflItems()
{
}

bool System::ChItems::BslotItems::BoardItems::ObflItems::has_data() const
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

bool System::ChItems::BslotItems::BoardItems::ObflItems::has_operation() const
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

std::string System::ChItems::BslotItems::BoardItems::ObflItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/board-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::BoardItems::ObflItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obfl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::BoardItems::ObflItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::BslotItems::BoardItems::ObflItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::BslotItems::BoardItems::ObflItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::BslotItems::BoardItems::ObflItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::BslotItems::BoardItems::ObflItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::BslotItems::BoardItems::ObflItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logT" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::BslotItems::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "bslot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::BslotItems::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ChItems::BslotItems::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ChItems::BslotItems::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ChItems::BslotItems::RtoosSlotItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/bslot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::BslotItems::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::BslotItems::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::BslotItems::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::BslotItems::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::BslotItems::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::BslotItems::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ChItems::BslotItems::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ChItems::NslotItems::NslotItems()
    :
    nslot_list(this, {"id"})
{

    yang_name = "nslot-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::NslotItems::~NslotItems()
{
}

bool System::ChItems::NslotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nslot_list.len(); index++)
    {
        if(nslot_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::NslotItems::has_operation() const
{
    for (std::size_t index=0; index<nslot_list.len(); index++)
    {
        if(nslot_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::NslotItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::NslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::NslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "NSlot-list")
    {
        auto c = std::make_shared<System::ChItems::NslotItems::NSlotList>();
        c->parent = this;
        nslot_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nslot_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::NslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::NslotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::NslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "NSlot-list")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NSlotList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    nic_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems>())
    , rtoosslot_items(std::make_shared<System::ChItems::NslotItems::NSlotList::RtoosSlotItems>())
{
    nic_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "NSlot-list"; yang_parent_name = "nslot-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::NslotItems::NSlotList::~NSlotList()
{
}

bool System::ChItems::NslotItems::NSlotList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| physid.is_set
	|| type.is_set
	|| operst.is_set
	|| loc.is_set
	|| (nic_items !=  nullptr && nic_items->has_data())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_data());
}

bool System::ChItems::NslotItems::NSlotList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(physid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (nic_items !=  nullptr && nic_items->has_operation())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_operation());
}

std::string System::ChItems::NslotItems::NSlotList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/nslot-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::NslotItems::NSlotList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "NSlot-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nic-items")
    {
        if(nic_items == nullptr)
        {
            nic_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems>();
        }
        return nic_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ChItems::NslotItems::NSlotList::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nic_items != nullptr)
    {
        children["nic-items"] = nic_items;
    }

    if(rtoosslot_items != nullptr)
    {
        children["rtoosSlot-items"] = rtoosslot_items;
    }

    return children;
}

void System::ChItems::NslotItems::NSlotList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::NslotItems::NSlotList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::NslotItems::NSlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nic-items" || name == "rtoosSlot-items" || name == "id" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicItems()
    :
    nic_list(this, {"id"})
{

    yang_name = "nic-items"; yang_parent_name = "NSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::~NicItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<nic_list.len(); index++)
    {
        if(nic_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::has_operation() const
{
    for (std::size_t index=0; index<nic_list.len(); index++)
    {
        if(nic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::NicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Nic-list")
    {
        auto c = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList>();
        c->parent = this;
        nic_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::NicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : nic_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::NslotItems::NSlotList::NicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Nic-list")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::NicList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    swcid{YType::uint32, "swCId"},
    nump{YType::uint16, "numP"},
    mace{YType::str, "macE"},
    upts{YType::str, "upTs"},
    pwrst{YType::enumeration, "pwrSt"},
    fwver{YType::str, "fwVer"},
    swver{YType::str, "swVer"},
    partnumber{YType::str, "partNumber"},
    vdrid{YType::str, "vdrId"}
        ,
    eaport_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems>())
    , sensor_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems>())
    , asic_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems>())
    , cpu_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems>())
    , dimm_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems>())
    , flash_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems>())
    , obfl_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems>())
{
    eaport_items->parent = this;
    sensor_items->parent = this;
    asic_items->parent = this;
    cpu_items->parent = this;
    dimm_items->parent = this;
    flash_items->parent = this;
    obfl_items->parent = this;

    yang_name = "Nic-list"; yang_parent_name = "nic-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::~NicList()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::has_data() const
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
	|| operst.is_set
	|| swcid.is_set
	|| nump.is_set
	|| mace.is_set
	|| upts.is_set
	|| pwrst.is_set
	|| fwver.is_set
	|| swver.is_set
	|| partnumber.is_set
	|| vdrid.is_set
	|| (eaport_items !=  nullptr && eaport_items->has_data())
	|| (sensor_items !=  nullptr && sensor_items->has_data())
	|| (asic_items !=  nullptr && asic_items->has_data())
	|| (cpu_items !=  nullptr && cpu_items->has_data())
	|| (dimm_items !=  nullptr && dimm_items->has_data())
	|| (flash_items !=  nullptr && flash_items->has_data())
	|| (obfl_items !=  nullptr && obfl_items->has_data());
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::has_operation() const
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
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(swcid.yfilter)
	|| ydk::is_set(nump.yfilter)
	|| ydk::is_set(mace.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(pwrst.yfilter)
	|| ydk::is_set(fwver.yfilter)
	|| ydk::is_set(swver.yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| (eaport_items !=  nullptr && eaport_items->has_operation())
	|| (sensor_items !=  nullptr && sensor_items->has_operation())
	|| (asic_items !=  nullptr && asic_items->has_operation())
	|| (cpu_items !=  nullptr && cpu_items->has_operation())
	|| (dimm_items !=  nullptr && dimm_items->has_operation())
	|| (flash_items !=  nullptr && flash_items->has_operation())
	|| (obfl_items !=  nullptr && obfl_items->has_operation());
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Nic-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::get_name_leaf_data() const
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
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (swcid.is_set || is_set(swcid.yfilter)) leaf_name_data.push_back(swcid.get_name_leafdata());
    if (nump.is_set || is_set(nump.yfilter)) leaf_name_data.push_back(nump.get_name_leafdata());
    if (mace.is_set || is_set(mace.yfilter)) leaf_name_data.push_back(mace.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (pwrst.is_set || is_set(pwrst.yfilter)) leaf_name_data.push_back(pwrst.get_name_leafdata());
    if (fwver.is_set || is_set(fwver.yfilter)) leaf_name_data.push_back(fwver.get_name_leafdata());
    if (swver.is_set || is_set(swver.yfilter)) leaf_name_data.push_back(swver.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eaport-items")
    {
        if(eaport_items == nullptr)
        {
            eaport_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems>();
        }
        return eaport_items;
    }

    if(child_yang_name == "sensor-items")
    {
        if(sensor_items == nullptr)
        {
            sensor_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems>();
        }
        return sensor_items;
    }

    if(child_yang_name == "asic-items")
    {
        if(asic_items == nullptr)
        {
            asic_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems>();
        }
        return asic_items;
    }

    if(child_yang_name == "cpu-items")
    {
        if(cpu_items == nullptr)
        {
            cpu_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems>();
        }
        return cpu_items;
    }

    if(child_yang_name == "dimm-items")
    {
        if(dimm_items == nullptr)
        {
            dimm_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems>();
        }
        return dimm_items;
    }

    if(child_yang_name == "flash-items")
    {
        if(flash_items == nullptr)
        {
            flash_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems>();
        }
        return flash_items;
    }

    if(child_yang_name == "obfl-items")
    {
        if(obfl_items == nullptr)
        {
            obfl_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems>();
        }
        return obfl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(eaport_items != nullptr)
    {
        children["eaport-items"] = eaport_items;
    }

    if(sensor_items != nullptr)
    {
        children["sensor-items"] = sensor_items;
    }

    if(asic_items != nullptr)
    {
        children["asic-items"] = asic_items;
    }

    if(cpu_items != nullptr)
    {
        children["cpu-items"] = cpu_items;
    }

    if(dimm_items != nullptr)
    {
        children["dimm-items"] = dimm_items;
    }

    if(flash_items != nullptr)
    {
        children["flash-items"] = flash_items;
    }

    if(obfl_items != nullptr)
    {
        children["obfl-items"] = obfl_items;
    }

    return children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "fwVer")
    {
        fwver = value;
        fwver.value_namespace = name_space;
        fwver.value_namespace_prefix = name_space_prefix;
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
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "fwVer")
    {
        fwver.yfilter = yfilter;
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
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eaport-items" || name == "sensor-items" || name == "asic-items" || name == "cpu-items" || name == "dimm-items" || name == "flash-items" || name == "obfl-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "operSt" || name == "swCId" || name == "numP" || name == "macE" || name == "upTs" || name == "pwrSt" || name == "fwVer" || name == "swVer" || name == "partNumber" || name == "vdrId")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::EaportItems()
    :
    extap_list(this, {"id"})
{

    yang_name = "eaport-items"; yang_parent_name = "Nic-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::~EaportItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extap_list.len(); index++)
    {
        if(extap_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::has_operation() const
{
    for (std::size_t index=0; index<extap_list.len(); index++)
    {
        if(extap_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eaport-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtAP-list")
    {
        auto c = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList>();
        c->parent = this;
        extap_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extap_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtAP-list")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::ExtAPList()
    :
    id{YType::uint32, "id"},
    operst{YType::enumeration, "operSt"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"}
{

    yang_name = "ExtAP-list"; yang_parent_name = "eaport-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::~ExtAPList()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| operst.is_set
	|| descr.is_set
	|| type.is_set;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtAP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
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

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::EaportItems::ExtAPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "descr" || name == "type")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorItems()
    :
    sensor_list(this, {"id"})
{

    yang_name = "sensor-items"; yang_parent_name = "Nic-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::~SensorItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::has_operation() const
{
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sensor-list")
    {
        auto c = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList>();
        c->parent = this;
        sensor_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sensor_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sensor-list")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::SensorList()
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

System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::~SensorList()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::has_data() const
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

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::has_operation() const
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

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sensor-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::SensorItems::SensorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "majorThresh" || name == "minorThresh" || name == "operSt" || name == "tempValue" || name == "unit" || name == "vendor" || name == "model" || name == "descr")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicItems()
    :
    asic_list(this, {"id"})
{

    yang_name = "asic-items"; yang_parent_name = "Nic-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::~AsicItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::has_operation() const
{
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Asic-list")
    {
        auto c = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList>();
        c->parent = this;
        asic_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asic_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Asic-list")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::AsicList()
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

System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::~AsicList()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::has_data() const
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

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::has_operation() const
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

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Asic-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::AsicItems::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "operSt" || name == "numSlices" || name == "capabilities" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CpuItems()
    :
    cpu_list(this, {"id"})
{

    yang_name = "cpu-items"; yang_parent_name = "Nic-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::~CpuItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::has_operation() const
{
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CPU-list")
    {
        auto c = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList>();
        c->parent = this;
        cpu_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpu_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CPU-list")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CPUList()
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
    core_items(std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems>())
{
    core_items->parent = this;

    yang_name = "CPU-list"; yang_parent_name = "cpu-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::~CPUList()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::has_data() const
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

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::has_operation() const
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

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CPU-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-items")
    {
        if(core_items == nullptr)
        {
            core_items = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems>();
        }
        return core_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(core_items != nullptr)
    {
        children["core-items"] = core_items;
    }

    return children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "sock" || name == "arch" || name == "speed" || name == "cores" || name == "coresEn" || name == "thrds")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreItems()
    :
    core_list(this, {"id"})
{

    yang_name = "core-items"; yang_parent_name = "CPU-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::~CoreItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::has_operation() const
{
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Core-list")
    {
        auto c = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList>();
        c->parent = this;
        core_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : core_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Core-list")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::CoreList()
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

System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::~CoreList()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::has_data() const
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

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::has_operation() const
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

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Core-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::CpuItems::CPUList::CoreItems::CoreList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmItems()
    :
    dimm_list(this, {"id"})
{

    yang_name = "dimm-items"; yang_parent_name = "Nic-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::~DimmItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::has_operation() const
{
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dimm-list")
    {
        auto c = std::make_shared<System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList>();
        c->parent = this;
        dimm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dimm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dimm-list")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::DimmList()
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

System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::~DimmList()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::has_data() const
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

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::has_operation() const
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

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dimm-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::DimmItems::DimmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::FlashItems()
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

    yang_name = "flash-items"; yang_parent_name = "Nic-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::~FlashItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::has_data() const
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

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::has_operation() const
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

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::FlashItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::ObflItems()
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

    yang_name = "obfl-items"; yang_parent_name = "Nic-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::~ObflItems()
{
}

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::has_data() const
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

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::has_operation() const
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

std::string System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obfl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ChItems::NslotItems::NSlotList::NicItems::NicList::ObflItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logT" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ChItems::NslotItems::NSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "NSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ChItems::NslotItems::NSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ChItems::NslotItems::NSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ChItems::NslotItems::NSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ChItems::NslotItems::NSlotList::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::NslotItems::NSlotList::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::NslotItems::NSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::NslotItems::NSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::NslotItems::NSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::NslotItems::NSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ChItems::NslotItems::NSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ChItems::PItems::PItems()
    :
    storage_list(this, {"mount", "filesystem"})
{

    yang_name = "p-items"; yang_parent_name = "ch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::PItems::~PItems()
{
}

bool System::ChItems::PItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<storage_list.len(); index++)
    {
        if(storage_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ChItems::PItems::has_operation() const
{
    for (std::size_t index=0; index<storage_list.len(); index++)
    {
        if(storage_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ChItems::PItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::PItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::PItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::PItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Storage-list")
    {
        auto c = std::make_shared<System::ChItems::PItems::StorageList>();
        c->parent = this;
        storage_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::PItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : storage_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ChItems::PItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ChItems::PItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ChItems::PItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Storage-list")
        return true;
    return false;
}

System::ChItems::PItems::StorageList::StorageList()
    :
    mount{YType::str, "mount"},
    filesystem{YType::str, "fileSystem"},
    blocks{YType::uint32, "blocks"},
    used{YType::uint32, "used"},
    available{YType::uint32, "available"},
    caputilized{YType::uint8, "capUtilized"},
    operst{YType::enumeration, "operSt"},
    name{YType::str, "name"}
{

    yang_name = "Storage-list"; yang_parent_name = "p-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ChItems::PItems::StorageList::~StorageList()
{
}

bool System::ChItems::PItems::StorageList::has_data() const
{
    if (is_presence_container) return true;
    return mount.is_set
	|| filesystem.is_set
	|| blocks.is_set
	|| used.is_set
	|| available.is_set
	|| caputilized.is_set
	|| operst.is_set
	|| name.is_set;
}

bool System::ChItems::PItems::StorageList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mount.yfilter)
	|| ydk::is_set(filesystem.yfilter)
	|| ydk::is_set(blocks.yfilter)
	|| ydk::is_set(used.yfilter)
	|| ydk::is_set(available.yfilter)
	|| ydk::is_set(caputilized.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string System::ChItems::PItems::StorageList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/ch-items/p-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ChItems::PItems::StorageList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Storage-list";
    ADD_KEY_TOKEN(mount, "mount");
    ADD_KEY_TOKEN(filesystem, "fileSystem");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ChItems::PItems::StorageList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mount.is_set || is_set(mount.yfilter)) leaf_name_data.push_back(mount.get_name_leafdata());
    if (filesystem.is_set || is_set(filesystem.yfilter)) leaf_name_data.push_back(filesystem.get_name_leafdata());
    if (blocks.is_set || is_set(blocks.yfilter)) leaf_name_data.push_back(blocks.get_name_leafdata());
    if (used.is_set || is_set(used.yfilter)) leaf_name_data.push_back(used.get_name_leafdata());
    if (available.is_set || is_set(available.yfilter)) leaf_name_data.push_back(available.get_name_leafdata());
    if (caputilized.is_set || is_set(caputilized.yfilter)) leaf_name_data.push_back(caputilized.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ChItems::PItems::StorageList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ChItems::PItems::StorageList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ChItems::PItems::StorageList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mount")
    {
        mount = value;
        mount.value_namespace = name_space;
        mount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fileSystem")
    {
        filesystem = value;
        filesystem.value_namespace = name_space;
        filesystem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocks")
    {
        blocks = value;
        blocks.value_namespace = name_space;
        blocks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used")
    {
        used = value;
        used.value_namespace = name_space;
        used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available")
    {
        available = value;
        available.value_namespace = name_space;
        available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capUtilized")
    {
        caputilized = value;
        caputilized.value_namespace = name_space;
        caputilized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operSt")
    {
        operst = value;
        operst.value_namespace = name_space;
        operst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void System::ChItems::PItems::StorageList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mount")
    {
        mount.yfilter = yfilter;
    }
    if(value_path == "fileSystem")
    {
        filesystem.yfilter = yfilter;
    }
    if(value_path == "blocks")
    {
        blocks.yfilter = yfilter;
    }
    if(value_path == "used")
    {
        used.yfilter = yfilter;
    }
    if(value_path == "available")
    {
        available.yfilter = yfilter;
    }
    if(value_path == "capUtilized")
    {
        caputilized.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool System::ChItems::PItems::StorageList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mount" || name == "fileSystem" || name == "blocks" || name == "used" || name == "available" || name == "capUtilized" || name == "operSt" || name == "name")
        return true;
    return false;
}

System::ExtchItems::ExtchItems()
    :
    extch_list(this, {"id"})
{

    yang_name = "extch-items"; yang_parent_name = "System"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ExtchItems::~ExtchItems()
{
}

bool System::ExtchItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extch_list.len(); index++)
    {
        if(extch_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::has_operation() const
{
    for (std::size_t index=0; index<extch_list.len(); index++)
    {
        if(extch_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ExtchItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extch-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtCh-list")
    {
        auto c = std::make_shared<System::ExtchItems::ExtChList>();
        c->parent = this;
        extch_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extch_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ExtchItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtCh-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtChList()
    :
    id{YType::uint32, "id"},
    extchst{YType::enumeration, "extChSt"},
    partnum{YType::str, "partNum"},
    macaddr{YType::str, "macAddr"},
    nummacs{YType::uint16, "numMacs"},
    numuplinkp{YType::uint16, "numUplinkP"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"}
        ,
    running_items(std::make_shared<System::ExtchItems::ExtChList::RunningItems>())
    , locled_items(std::make_shared<System::ExtchItems::ExtChList::LocledItems>())
    , extchslot_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems>())
    , psuslot_items(std::make_shared<System::ExtchItems::ExtChList::PsuslotItems>())
    , ftslot_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems>())
    , spbp_items(std::make_shared<System::ExtchItems::ExtChList::SpbpItems>())
    , spsup_items(std::make_shared<System::ExtchItems::ExtChList::SpsupItems>())
{
    running_items->parent = this;
    locled_items->parent = this;
    extchslot_items->parent = this;
    psuslot_items->parent = this;
    ftslot_items->parent = this;
    spbp_items->parent = this;
    spsup_items->parent = this;

    yang_name = "ExtCh-list"; yang_parent_name = "extch-items"; is_top_level_class = false; has_list_ancestor = false; 
}

System::ExtchItems::ExtChList::~ExtChList()
{
}

bool System::ExtchItems::ExtChList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| extchst.is_set
	|| partnum.is_set
	|| macaddr.is_set
	|| nummacs.is_set
	|| numuplinkp.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| (running_items !=  nullptr && running_items->has_data())
	|| (locled_items !=  nullptr && locled_items->has_data())
	|| (extchslot_items !=  nullptr && extchslot_items->has_data())
	|| (psuslot_items !=  nullptr && psuslot_items->has_data())
	|| (ftslot_items !=  nullptr && ftslot_items->has_data())
	|| (spbp_items !=  nullptr && spbp_items->has_data())
	|| (spsup_items !=  nullptr && spsup_items->has_data());
}

bool System::ExtchItems::ExtChList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(extchst.yfilter)
	|| ydk::is_set(partnum.yfilter)
	|| ydk::is_set(macaddr.yfilter)
	|| ydk::is_set(nummacs.yfilter)
	|| ydk::is_set(numuplinkp.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| (running_items !=  nullptr && running_items->has_operation())
	|| (locled_items !=  nullptr && locled_items->has_operation())
	|| (extchslot_items !=  nullptr && extchslot_items->has_operation())
	|| (psuslot_items !=  nullptr && psuslot_items->has_operation())
	|| (ftslot_items !=  nullptr && ftslot_items->has_operation())
	|| (spbp_items !=  nullptr && spbp_items->has_operation())
	|| (spsup_items !=  nullptr && spsup_items->has_operation());
}

std::string System::ExtchItems::ExtChList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-NX-OS-device:System/extch-items/" << get_segment_path();
    return path_buffer.str();
}

std::string System::ExtchItems::ExtChList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtCh-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (extchst.is_set || is_set(extchst.yfilter)) leaf_name_data.push_back(extchst.get_name_leafdata());
    if (partnum.is_set || is_set(partnum.yfilter)) leaf_name_data.push_back(partnum.get_name_leafdata());
    if (macaddr.is_set || is_set(macaddr.yfilter)) leaf_name_data.push_back(macaddr.get_name_leafdata());
    if (nummacs.is_set || is_set(nummacs.yfilter)) leaf_name_data.push_back(nummacs.get_name_leafdata());
    if (numuplinkp.is_set || is_set(numuplinkp.yfilter)) leaf_name_data.push_back(numuplinkp.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "running-items")
    {
        if(running_items == nullptr)
        {
            running_items = std::make_shared<System::ExtchItems::ExtChList::RunningItems>();
        }
        return running_items;
    }

    if(child_yang_name == "locled-items")
    {
        if(locled_items == nullptr)
        {
            locled_items = std::make_shared<System::ExtchItems::ExtChList::LocledItems>();
        }
        return locled_items;
    }

    if(child_yang_name == "extchslot-items")
    {
        if(extchslot_items == nullptr)
        {
            extchslot_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems>();
        }
        return extchslot_items;
    }

    if(child_yang_name == "psuslot-items")
    {
        if(psuslot_items == nullptr)
        {
            psuslot_items = std::make_shared<System::ExtchItems::ExtChList::PsuslotItems>();
        }
        return psuslot_items;
    }

    if(child_yang_name == "ftslot-items")
    {
        if(ftslot_items == nullptr)
        {
            ftslot_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems>();
        }
        return ftslot_items;
    }

    if(child_yang_name == "spbp-items")
    {
        if(spbp_items == nullptr)
        {
            spbp_items = std::make_shared<System::ExtchItems::ExtChList::SpbpItems>();
        }
        return spbp_items;
    }

    if(child_yang_name == "spsup-items")
    {
        if(spsup_items == nullptr)
        {
            spsup_items = std::make_shared<System::ExtchItems::ExtChList::SpsupItems>();
        }
        return spsup_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(running_items != nullptr)
    {
        children["running-items"] = running_items;
    }

    if(locled_items != nullptr)
    {
        children["locled-items"] = locled_items;
    }

    if(extchslot_items != nullptr)
    {
        children["extchslot-items"] = extchslot_items;
    }

    if(psuslot_items != nullptr)
    {
        children["psuslot-items"] = psuslot_items;
    }

    if(ftslot_items != nullptr)
    {
        children["ftslot-items"] = ftslot_items;
    }

    if(spbp_items != nullptr)
    {
        children["spbp-items"] = spbp_items;
    }

    if(spsup_items != nullptr)
    {
        children["spsup-items"] = spsup_items;
    }

    return children;
}

void System::ExtchItems::ExtChList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extChSt")
    {
        extchst = value;
        extchst.value_namespace = name_space;
        extchst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partNum")
    {
        partnum = value;
        partnum.value_namespace = name_space;
        partnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "macAddr")
    {
        macaddr = value;
        macaddr.value_namespace = name_space;
        macaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numMacs")
    {
        nummacs = value;
        nummacs.value_namespace = name_space;
        nummacs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "numUplinkP")
    {
        numuplinkp = value;
        numuplinkp.value_namespace = name_space;
        numuplinkp.value_namespace_prefix = name_space_prefix;
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

void System::ExtchItems::ExtChList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "extChSt")
    {
        extchst.yfilter = yfilter;
    }
    if(value_path == "partNum")
    {
        partnum.yfilter = yfilter;
    }
    if(value_path == "macAddr")
    {
        macaddr.yfilter = yfilter;
    }
    if(value_path == "numMacs")
    {
        nummacs.yfilter = yfilter;
    }
    if(value_path == "numUplinkP")
    {
        numuplinkp.yfilter = yfilter;
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

bool System::ExtchItems::ExtChList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-items" || name == "locled-items" || name == "extchslot-items" || name == "psuslot-items" || name == "ftslot-items" || name == "spbp-items" || name == "spsup-items" || name == "id" || name == "extChSt" || name == "partNum" || name == "macAddr" || name == "numMacs" || name == "numUplinkP" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::RunningItems::RunningItems()
    :
    loaderver{YType::str, "loaderVer"},
    version{YType::str, "version"},
    internallabel{YType::str, "internalLabel"},
    type{YType::enumeration, "type"},
    mode{YType::enumeration, "mode"},
    ts{YType::str, "ts"},
    descr{YType::str, "descr"}
{

    yang_name = "running-items"; yang_parent_name = "ExtCh-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::RunningItems::~RunningItems()
{
}

bool System::ExtchItems::ExtChList::RunningItems::has_data() const
{
    if (is_presence_container) return true;
    return loaderver.is_set
	|| version.is_set
	|| internallabel.is_set
	|| type.is_set
	|| mode.is_set
	|| ts.is_set
	|| descr.is_set;
}

bool System::ExtchItems::ExtChList::RunningItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loaderver.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(internallabel.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(ts.yfilter)
	|| ydk::is_set(descr.yfilter);
}

std::string System::ExtchItems::ExtChList::RunningItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "running-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::RunningItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loaderver.is_set || is_set(loaderver.yfilter)) leaf_name_data.push_back(loaderver.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (internallabel.is_set || is_set(internallabel.yfilter)) leaf_name_data.push_back(internallabel.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (ts.is_set || is_set(ts.yfilter)) leaf_name_data.push_back(ts.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::RunningItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::RunningItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::RunningItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "loaderVer")
    {
        loaderver = value;
        loaderver.value_namespace = name_space;
        loaderver.value_namespace_prefix = name_space_prefix;
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

void System::ExtchItems::ExtChList::RunningItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "loaderVer")
    {
        loaderver.yfilter = yfilter;
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

bool System::ExtchItems::ExtChList::RunningItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "loaderVer" || name == "version" || name == "internalLabel" || name == "type" || name == "mode" || name == "ts" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::LocledItems::LocledItems()
    :
    extchlocled_list(this, {"id"})
{

    yang_name = "locled-items"; yang_parent_name = "ExtCh-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::LocledItems::~LocledItems()
{
}

bool System::ExtchItems::ExtChList::LocledItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extchlocled_list.len(); index++)
    {
        if(extchlocled_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::LocledItems::has_operation() const
{
    for (std::size_t index=0; index<extchlocled_list.len(); index++)
    {
        if(extchlocled_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::LocledItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "locled-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::LocledItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::LocledItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtChLocLed-list")
    {
        auto c = std::make_shared<System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList>();
        c->parent = this;
        extchlocled_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::LocledItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extchlocled_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ExtchItems::ExtChList::LocledItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::LocledItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::LocledItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtChLocLed-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::ExtChLocLedList()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    color{YType::enumeration, "color"},
    operst{YType::enumeration, "operSt"},
    type{YType::enumeration, "type"},
    adminst{YType::enumeration, "adminSt"}
{

    yang_name = "ExtChLocLed-list"; yang_parent_name = "locled-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::~ExtChLocLedList()
{
}

bool System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| color.is_set
	|| operst.is_set
	|| type.is_set
	|| adminst.is_set;
}

bool System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(color.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(adminst.yfilter);
}

std::string System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtChLocLed-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (adminst.is_set || is_set(adminst.yfilter)) leaf_name_data.push_back(adminst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adminSt")
    {
        adminst = value;
        adminst.value_namespace = name_space;
        adminst.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
    if(value_path == "operSt")
    {
        operst.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "adminSt")
    {
        adminst.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::LocledItems::ExtChLocLedList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "color" || name == "operSt" || name == "type" || name == "adminSt")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtchslotItems()
    :
    extchcardslot_list(this, {"id"})
{

    yang_name = "extchslot-items"; yang_parent_name = "ExtCh-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::~ExtchslotItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extchcardslot_list.len(); index++)
    {
        if(extchcardslot_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::has_operation() const
{
    for (std::size_t index=0; index<extchcardslot_list.len(); index++)
    {
        if(extchcardslot_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extchslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtChCardSlot-list")
    {
        auto c = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList>();
        c->parent = this;
        extchcardslot_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extchcardslot_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::ExtchslotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtChCardSlot-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtChCardSlotList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    extchc_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems>())
    , rtoosslot_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems>())
{
    extchc_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "ExtChCardSlot-list"; yang_parent_name = "extchslot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::~ExtChCardSlotList()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| physid.is_set
	|| type.is_set
	|| operst.is_set
	|| loc.is_set
	|| (extchc_items !=  nullptr && extchc_items->has_data())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_data());
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(physid.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(loc.yfilter)
	|| (extchc_items !=  nullptr && extchc_items->has_operation())
	|| (rtoosslot_items !=  nullptr && rtoosslot_items->has_operation());
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtChCardSlot-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extchc-items")
    {
        if(extchc_items == nullptr)
        {
            extchc_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems>();
        }
        return extchc_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(extchc_items != nullptr)
    {
        children["extchc-items"] = extchc_items;
    }

    if(rtoosslot_items != nullptr)
    {
        children["rtoosSlot-items"] = rtoosslot_items;
    }

    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extchc-items" || name == "rtoosSlot-items" || name == "id" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ExtchcItems()
    :
    modserial{YType::str, "modSerial"},
    modvendor{YType::str, "modVendor"},
    modmodel{YType::str, "modModel"},
    partnum{YType::str, "partNum"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    id{YType::uint32, "id"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    rdst{YType::enumeration, "rdSt"},
    swcid{YType::uint32, "swCId"},
    nump{YType::uint16, "numP"},
    macb{YType::str, "macB"},
    mace{YType::str, "macE"},
    upts{YType::str, "upTs"},
    pwrst{YType::enumeration, "pwrSt"},
    fwver{YType::str, "fwVer"},
    swver{YType::str, "swVer"},
    partnumber{YType::str, "partNumber"},
    vdrid{YType::str, "vdrId"}
        ,
    hostextport_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems>())
    , leafextport_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems>())
    , sensor_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems>())
    , asic_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems>())
    , cpu_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems>())
    , dimm_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems>())
    , flash_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems>())
    , obfl_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems>())
{
    hostextport_items->parent = this;
    leafextport_items->parent = this;
    sensor_items->parent = this;
    asic_items->parent = this;
    cpu_items->parent = this;
    dimm_items->parent = this;
    flash_items->parent = this;
    obfl_items->parent = this;

    yang_name = "extchc-items"; yang_parent_name = "ExtChCardSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::~ExtchcItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::has_data() const
{
    if (is_presence_container) return true;
    return modserial.is_set
	|| modvendor.is_set
	|| modmodel.is_set
	|| partnum.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| id.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| type.is_set
	|| operst.is_set
	|| rdst.is_set
	|| swcid.is_set
	|| nump.is_set
	|| macb.is_set
	|| mace.is_set
	|| upts.is_set
	|| pwrst.is_set
	|| fwver.is_set
	|| swver.is_set
	|| partnumber.is_set
	|| vdrid.is_set
	|| (hostextport_items !=  nullptr && hostextport_items->has_data())
	|| (leafextport_items !=  nullptr && leafextport_items->has_data())
	|| (sensor_items !=  nullptr && sensor_items->has_data())
	|| (asic_items !=  nullptr && asic_items->has_data())
	|| (cpu_items !=  nullptr && cpu_items->has_data())
	|| (dimm_items !=  nullptr && dimm_items->has_data())
	|| (flash_items !=  nullptr && flash_items->has_data())
	|| (obfl_items !=  nullptr && obfl_items->has_data());
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(modserial.yfilter)
	|| ydk::is_set(modvendor.yfilter)
	|| ydk::is_set(modmodel.yfilter)
	|| ydk::is_set(partnum.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(rdst.yfilter)
	|| ydk::is_set(swcid.yfilter)
	|| ydk::is_set(nump.yfilter)
	|| ydk::is_set(macb.yfilter)
	|| ydk::is_set(mace.yfilter)
	|| ydk::is_set(upts.yfilter)
	|| ydk::is_set(pwrst.yfilter)
	|| ydk::is_set(fwver.yfilter)
	|| ydk::is_set(swver.yfilter)
	|| ydk::is_set(partnumber.yfilter)
	|| ydk::is_set(vdrid.yfilter)
	|| (hostextport_items !=  nullptr && hostextport_items->has_operation())
	|| (leafextport_items !=  nullptr && leafextport_items->has_operation())
	|| (sensor_items !=  nullptr && sensor_items->has_operation())
	|| (asic_items !=  nullptr && asic_items->has_operation())
	|| (cpu_items !=  nullptr && cpu_items->has_operation())
	|| (dimm_items !=  nullptr && dimm_items->has_operation())
	|| (flash_items !=  nullptr && flash_items->has_operation())
	|| (obfl_items !=  nullptr && obfl_items->has_operation());
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extchc-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (modserial.is_set || is_set(modserial.yfilter)) leaf_name_data.push_back(modserial.get_name_leafdata());
    if (modvendor.is_set || is_set(modvendor.yfilter)) leaf_name_data.push_back(modvendor.get_name_leafdata());
    if (modmodel.is_set || is_set(modmodel.yfilter)) leaf_name_data.push_back(modmodel.get_name_leafdata());
    if (partnum.is_set || is_set(partnum.yfilter)) leaf_name_data.push_back(partnum.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
    if (rev.is_set || is_set(rev.yfilter)) leaf_name_data.push_back(rev.get_name_leafdata());
    if (ser.is_set || is_set(ser.yfilter)) leaf_name_data.push_back(ser.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mfgtm.is_set || is_set(mfgtm.yfilter)) leaf_name_data.push_back(mfgtm.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (rdst.is_set || is_set(rdst.yfilter)) leaf_name_data.push_back(rdst.get_name_leafdata());
    if (swcid.is_set || is_set(swcid.yfilter)) leaf_name_data.push_back(swcid.get_name_leafdata());
    if (nump.is_set || is_set(nump.yfilter)) leaf_name_data.push_back(nump.get_name_leafdata());
    if (macb.is_set || is_set(macb.yfilter)) leaf_name_data.push_back(macb.get_name_leafdata());
    if (mace.is_set || is_set(mace.yfilter)) leaf_name_data.push_back(mace.get_name_leafdata());
    if (upts.is_set || is_set(upts.yfilter)) leaf_name_data.push_back(upts.get_name_leafdata());
    if (pwrst.is_set || is_set(pwrst.yfilter)) leaf_name_data.push_back(pwrst.get_name_leafdata());
    if (fwver.is_set || is_set(fwver.yfilter)) leaf_name_data.push_back(fwver.get_name_leafdata());
    if (swver.is_set || is_set(swver.yfilter)) leaf_name_data.push_back(swver.get_name_leafdata());
    if (partnumber.is_set || is_set(partnumber.yfilter)) leaf_name_data.push_back(partnumber.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hostextport-items")
    {
        if(hostextport_items == nullptr)
        {
            hostextport_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems>();
        }
        return hostextport_items;
    }

    if(child_yang_name == "leafextport-items")
    {
        if(leafextport_items == nullptr)
        {
            leafextport_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems>();
        }
        return leafextport_items;
    }

    if(child_yang_name == "sensor-items")
    {
        if(sensor_items == nullptr)
        {
            sensor_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems>();
        }
        return sensor_items;
    }

    if(child_yang_name == "asic-items")
    {
        if(asic_items == nullptr)
        {
            asic_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems>();
        }
        return asic_items;
    }

    if(child_yang_name == "cpu-items")
    {
        if(cpu_items == nullptr)
        {
            cpu_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems>();
        }
        return cpu_items;
    }

    if(child_yang_name == "dimm-items")
    {
        if(dimm_items == nullptr)
        {
            dimm_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems>();
        }
        return dimm_items;
    }

    if(child_yang_name == "flash-items")
    {
        if(flash_items == nullptr)
        {
            flash_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems>();
        }
        return flash_items;
    }

    if(child_yang_name == "obfl-items")
    {
        if(obfl_items == nullptr)
        {
            obfl_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems>();
        }
        return obfl_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hostextport_items != nullptr)
    {
        children["hostextport-items"] = hostextport_items;
    }

    if(leafextport_items != nullptr)
    {
        children["leafextport-items"] = leafextport_items;
    }

    if(sensor_items != nullptr)
    {
        children["sensor-items"] = sensor_items;
    }

    if(asic_items != nullptr)
    {
        children["asic-items"] = asic_items;
    }

    if(cpu_items != nullptr)
    {
        children["cpu-items"] = cpu_items;
    }

    if(dimm_items != nullptr)
    {
        children["dimm-items"] = dimm_items;
    }

    if(flash_items != nullptr)
    {
        children["flash-items"] = flash_items;
    }

    if(obfl_items != nullptr)
    {
        children["obfl-items"] = obfl_items;
    }

    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "modSerial")
    {
        modserial = value;
        modserial.value_namespace = name_space;
        modserial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modVendor")
    {
        modvendor = value;
        modvendor.value_namespace = name_space;
        modvendor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modModel")
    {
        modmodel = value;
        modmodel.value_namespace = name_space;
        modmodel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partNum")
    {
        partnum = value;
        partnum.value_namespace = name_space;
        partnum.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "fwVer")
    {
        fwver = value;
        fwver.value_namespace = name_space;
        fwver.value_namespace_prefix = name_space_prefix;
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
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "modSerial")
    {
        modserial.yfilter = yfilter;
    }
    if(value_path == "modVendor")
    {
        modvendor.yfilter = yfilter;
    }
    if(value_path == "modModel")
    {
        modmodel.yfilter = yfilter;
    }
    if(value_path == "partNum")
    {
        partnum.yfilter = yfilter;
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
    if(value_path == "id")
    {
        id.yfilter = yfilter;
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
    if(value_path == "fwVer")
    {
        fwver.yfilter = yfilter;
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
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostextport-items" || name == "leafextport-items" || name == "sensor-items" || name == "asic-items" || name == "cpu-items" || name == "dimm-items" || name == "flash-items" || name == "obfl-items" || name == "modSerial" || name == "modVendor" || name == "modModel" || name == "partNum" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "id" || name == "mfgTm" || name == "descr" || name == "type" || name == "operSt" || name == "rdSt" || name == "swCId" || name == "numP" || name == "macB" || name == "macE" || name == "upTs" || name == "pwrSt" || name == "fwVer" || name == "swVer" || name == "partNumber" || name == "vdrId")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::HostextportItems()
    :
    extchhp_list(this, {"id"})
{

    yang_name = "hostextport-items"; yang_parent_name = "extchc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::~HostextportItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extchhp_list.len(); index++)
    {
        if(extchhp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::has_operation() const
{
    for (std::size_t index=0; index<extchhp_list.len(); index++)
    {
        if(extchhp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostextport-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtChHP-list")
    {
        auto c = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList>();
        c->parent = this;
        extchhp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extchhp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtChHP-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::ExtChHPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    speed{YType::uint64, "speed"}
{

    yang_name = "ExtChHP-list"; yang_parent_name = "hostextport-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::~ExtChHPList()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set
	|| speed.is_set;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtChHP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::HostextportItems::ExtChHPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type" || name == "speed")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::LeafextportItems()
    :
    extchfp_list(this, {"id"})
{

    yang_name = "leafextport-items"; yang_parent_name = "extchc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::~LeafextportItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<extchfp_list.len(); index++)
    {
        if(extchfp_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::has_operation() const
{
    for (std::size_t index=0; index<extchfp_list.len(); index++)
    {
        if(extchfp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leafextport-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ExtChFP-list")
    {
        auto c = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList>();
        c->parent = this;
        extchfp_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : extchfp_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ExtChFP-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::ExtChFPList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    speed{YType::uint64, "speed"}
{

    yang_name = "ExtChFP-list"; yang_parent_name = "leafextport-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::~ExtChFPList()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| descr.is_set
	|| type.is_set
	|| speed.is_set;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ExtChFP-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (descr.is_set || is_set(descr.yfilter)) leaf_name_data.push_back(descr.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::LeafextportItems::ExtChFPList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "descr" || name == "type" || name == "speed")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorItems()
    :
    sensor_list(this, {"id"})
{

    yang_name = "sensor-items"; yang_parent_name = "extchc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::~SensorItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::has_operation() const
{
    for (std::size_t index=0; index<sensor_list.len(); index++)
    {
        if(sensor_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sensor-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Sensor-list")
    {
        auto c = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList>();
        c->parent = this;
        sensor_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : sensor_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Sensor-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::SensorList()
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

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::~SensorList()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::has_data() const
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::has_operation() const
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

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Sensor-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::SensorItems::SensorList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "majorThresh" || name == "minorThresh" || name == "operSt" || name == "tempValue" || name == "unit" || name == "vendor" || name == "model" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicItems()
    :
    asic_list(this, {"id"})
{

    yang_name = "asic-items"; yang_parent_name = "extchc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::~AsicItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::has_operation() const
{
    for (std::size_t index=0; index<asic_list.len(); index++)
    {
        if(asic_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asic-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Asic-list")
    {
        auto c = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList>();
        c->parent = this;
        asic_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : asic_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Asic-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::AsicList()
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

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::~AsicList()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::has_data() const
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::has_operation() const
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

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Asic-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::AsicItems::AsicList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "type" || name == "operSt" || name == "numSlices" || name == "capabilities" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CpuItems()
    :
    cpu_list(this, {"id"})
{

    yang_name = "cpu-items"; yang_parent_name = "extchc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::~CpuItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::has_operation() const
{
    for (std::size_t index=0; index<cpu_list.len(); index++)
    {
        if(cpu_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "CPU-list")
    {
        auto c = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList>();
        c->parent = this;
        cpu_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpu_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "CPU-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CPUList()
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
    core_items(std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems>())
{
    core_items->parent = this;

    yang_name = "CPU-list"; yang_parent_name = "cpu-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::~CPUList()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::has_data() const
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::has_operation() const
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

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CPU-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "core-items")
    {
        if(core_items == nullptr)
        {
            core_items = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems>();
        }
        return core_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(core_items != nullptr)
    {
        children["core-items"] = core_items;
    }

    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "core-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "sock" || name == "arch" || name == "speed" || name == "cores" || name == "coresEn" || name == "thrds")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreItems()
    :
    core_list(this, {"id"})
{

    yang_name = "core-items"; yang_parent_name = "CPU-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::~CoreItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::has_operation() const
{
    for (std::size_t index=0; index<core_list.len(); index++)
    {
        if(core_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Core-list")
    {
        auto c = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList>();
        c->parent = this;
        core_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : core_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Core-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::CoreList()
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

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::~CoreList()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::has_data() const
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::has_operation() const
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

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Core-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::CpuItems::CPUList::CoreItems::CoreList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmItems()
    :
    dimm_list(this, {"id"})
{

    yang_name = "dimm-items"; yang_parent_name = "extchc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::~DimmItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::has_operation() const
{
    for (std::size_t index=0; index<dimm_list.len(); index++)
    {
        if(dimm_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dimm-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Dimm-list")
    {
        auto c = std::make_shared<System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList>();
        c->parent = this;
        dimm_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : dimm_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Dimm-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::DimmList()
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

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::~DimmList()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::has_data() const
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::has_operation() const
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

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Dimm-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::DimmItems::DimmList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::FlashItems()
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

    yang_name = "flash-items"; yang_parent_name = "extchc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::~FlashItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::has_data() const
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::has_operation() const
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

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::FlashItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::ObflItems()
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

    yang_name = "obfl-items"; yang_parent_name = "extchc-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::~ObflItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::has_data() const
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::has_operation() const
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

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obfl-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::ExtchcItems::ObflItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logT" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "ExtChCardSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::ExtchslotItems::ExtChCardSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ExtchItems::ExtChList::PsuslotItems::PsuslotItems()
    :
    psuslot_list(this, {"id"})
{

    yang_name = "psuslot-items"; yang_parent_name = "ExtCh-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::PsuslotItems::~PsuslotItems()
{
}

bool System::ExtchItems::ExtChList::PsuslotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<psuslot_list.len(); index++)
    {
        if(psuslot_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::PsuslotItems::has_operation() const
{
    for (std::size_t index=0; index<psuslot_list.len(); index++)
    {
        if(psuslot_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::PsuslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psuslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::PsuslotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::PsuslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "PsuSlot-list")
    {
        auto c = std::make_shared<System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList>();
        c->parent = this;
        psuslot_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::PsuslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : psuslot_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ExtchItems::ExtChList::PsuslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::PsuslotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::PsuslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "PsuSlot-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuSlotList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    psu_items(std::make_shared<System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems>())
    , rtoosslot_items(std::make_shared<System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems>())
{
    psu_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "PsuSlot-list"; yang_parent_name = "psuslot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::~PsuSlotList()
{
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::has_data() const
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

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::has_operation() const
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

std::string System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "PsuSlot-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "psu-items")
    {
        if(psu_items == nullptr)
        {
            psu_items = std::make_shared<System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems>();
        }
        return psu_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(psu_items != nullptr)
    {
        children["psu-items"] = psu_items;
    }

    if(rtoosslot_items != nullptr)
    {
        children["rtoosSlot-items"] = rtoosslot_items;
    }

    return children;
}

void System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "psu-items" || name == "rtoosSlot-items" || name == "id" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::PsuItems()
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
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    hwver{YType::str, "hwVer"}
{

    yang_name = "psu-items"; yang_parent_name = "PsuSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::~PsuItems()
{
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::has_data() const
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
	|| id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| mfgtm.is_set
	|| descr.is_set
	|| hwver.is_set;
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::has_operation() const
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
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(mfgtm.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(hwver.yfilter);
}

std::string System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psu-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::PsuItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operSt" || name == "cap" || name == "drawnCurr" || name == "vSrc" || name == "volt" || name == "fanOpSt" || name == "fanDirection" || name == "inputCurr" || name == "vdrId" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer")
        return true;
    return false;
}

System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "PsuSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::PsuslotItems::PsuSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtslotItems()
    :
    ftslot_list(this, {"id"})
{

    yang_name = "ftslot-items"; yang_parent_name = "ExtCh-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::~FtslotItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ftslot_list.len(); index++)
    {
        if(ftslot_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::FtslotItems::has_operation() const
{
    for (std::size_t index=0; index<ftslot_list.len(); index++)
    {
        if(ftslot_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::FtslotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ftslot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::FtslotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "FtSlot-list")
    {
        auto c = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList>();
        c->parent = this;
        ftslot_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::FtslotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ftslot_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ExtchItems::ExtChList::FtslotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::FtslotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::FtslotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FtSlot-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtSlotList()
    :
    id{YType::uint32, "id"},
    descr{YType::str, "descr"},
    physid{YType::uint32, "physId"},
    type{YType::enumeration, "type"},
    operst{YType::enumeration, "operSt"},
    loc{YType::enumeration, "loc"}
        ,
    ft_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems>())
    , rtoosslot_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems>())
{
    ft_items->parent = this;
    rtoosslot_items->parent = this;

    yang_name = "FtSlot-list"; yang_parent_name = "ftslot-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::~FtSlotList()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::has_data() const
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

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::has_operation() const
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

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "FtSlot-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ft-items")
    {
        if(ft_items == nullptr)
        {
            ft_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems>();
        }
        return ft_items;
    }

    if(child_yang_name == "rtoosSlot-items")
    {
        if(rtoosslot_items == nullptr)
        {
            rtoosslot_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems>();
        }
        return rtoosslot_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ft_items != nullptr)
    {
        children["ft-items"] = ft_items;
    }

    if(rtoosslot_items != nullptr)
    {
        children["rtoosSlot-items"] = rtoosslot_items;
    }

    return children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ft-items" || name == "rtoosSlot-items" || name == "id" || name == "descr" || name == "physId" || name == "type" || name == "operSt" || name == "loc")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FtItems()
    :
    operst{YType::enumeration, "operSt"},
    fanname{YType::str, "fanName"},
    vdrid{YType::str, "vdrId"},
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    mfgtm{YType::str, "mfgTm"},
    descr{YType::str, "descr"},
    hwver{YType::str, "hwVer"}
        ,
    ej_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems>())
    , fan_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems>())
    , spfan_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems>())
{
    ej_items->parent = this;
    fan_items->parent = this;
    spfan_items->parent = this;

    yang_name = "ft-items"; yang_parent_name = "FtSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::~FtItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::has_data() const
{
    if (is_presence_container) return true;
    return operst.is_set
	|| fanname.is_set
	|| vdrid.is_set
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
	|| (spfan_items !=  nullptr && spfan_items->has_data());
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(fanname.yfilter)
	|| ydk::is_set(vdrid.yfilter)
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
	|| (spfan_items !=  nullptr && spfan_items->has_operation());
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ft-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operst.is_set || is_set(operst.yfilter)) leaf_name_data.push_back(operst.get_name_leafdata());
    if (fanname.is_set || is_set(fanname.yfilter)) leaf_name_data.push_back(fanname.get_name_leafdata());
    if (vdrid.is_set || is_set(vdrid.yfilter)) leaf_name_data.push_back(vdrid.get_name_leafdata());
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ej-items")
    {
        if(ej_items == nullptr)
        {
            ej_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems>();
        }
        return ej_items;
    }

    if(child_yang_name == "fan-items")
    {
        if(fan_items == nullptr)
        {
            fan_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems>();
        }
        return fan_items;
    }

    if(child_yang_name == "spfan-items")
    {
        if(spfan_items == nullptr)
        {
            spfan_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems>();
        }
        return spfan_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ej_items != nullptr)
    {
        children["ej-items"] = ej_items;
    }

    if(fan_items != nullptr)
    {
        children["fan-items"] = fan_items;
    }

    if(spfan_items != nullptr)
    {
        children["spfan-items"] = spfan_items;
    }

    return children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ej-items" || name == "fan-items" || name == "spfan-items" || name == "operSt" || name == "fanName" || name == "vdrId" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr" || name == "hwVer")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjItems()
    :
    ejec_list(this, {"id"})
{

    yang_name = "ej-items"; yang_parent_name = "ft-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::~EjItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ejec_list.len(); index++)
    {
        if(ejec_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::has_operation() const
{
    for (std::size_t index=0; index<ejec_list.len(); index++)
    {
        if(ejec_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ej-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Ejec-list")
    {
        auto c = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList>();
        c->parent = this;
        ejec_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ejec_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ejec-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::EjecList()
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

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::~EjecList()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::has_data() const
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

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::has_operation() const
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

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Ejec-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::EjItems::EjecList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanItems()
    :
    fan_list(this, {"id"})
{

    yang_name = "fan-items"; yang_parent_name = "ft-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::~FanItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fan_list.len(); index++)
    {
        if(fan_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::has_operation() const
{
    for (std::size_t index=0; index<fan_list.len(); index++)
    {
        if(fan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Fan-list")
    {
        auto c = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList>();
        c->parent = this;
        fan_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fan_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Fan-list")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::FanList()
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

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::~FanList()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::has_data() const
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

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::has_operation() const
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

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Fan-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::FanItems::FanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "operSt" || name == "dir" || name == "speedInRpm" || name == "speedInPercent" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "mfgTm" || name == "descr")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"},
    numblk{YType::uint16, "numBlk"}
        ,
    spcmn_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems>())
    , spfanblk_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems>())
    , spfansn_items(std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems>())
{
    spcmn_items->parent = this;
    spfanblk_items->parent = this;
    spfansn_items->parent = this;

    yang_name = "spfan-items"; yang_parent_name = "ft-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::~SpfanItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set
	|| numblk.is_set
	|| (spcmn_items !=  nullptr && spcmn_items->has_data())
	|| (spfanblk_items !=  nullptr && spfanblk_items->has_data())
	|| (spfansn_items !=  nullptr && spfansn_items->has_data());
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numblk.yfilter)
	|| (spcmn_items !=  nullptr && spcmn_items->has_operation())
	|| (spfanblk_items !=  nullptr && spfanblk_items->has_operation())
	|| (spfansn_items !=  nullptr && spfansn_items->has_operation());
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spfan-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spcmn-items")
    {
        if(spcmn_items == nullptr)
        {
            spcmn_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems>();
        }
        return spcmn_items;
    }

    if(child_yang_name == "spfanblk-items")
    {
        if(spfanblk_items == nullptr)
        {
            spfanblk_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems>();
        }
        return spfanblk_items;
    }

    if(child_yang_name == "spfansn-items")
    {
        if(spfansn_items == nullptr)
        {
            spfansn_items = std::make_shared<System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems>();
        }
        return spfansn_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spcmn_items != nullptr)
    {
        children["spcmn-items"] = spcmn_items;
    }

    if(spfanblk_items != nullptr)
    {
        children["spfanblk-items"] = spfanblk_items;
    }

    if(spfansn_items != nullptr)
    {
        children["spfansn-items"] = spfansn_items;
    }

    return children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spcmn-items" || name == "spfanblk-items" || name == "spfansn-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt" || name == "numBlk")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::SpcmnItems()
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

    yang_name = "spcmn-items"; yang_parent_name = "spfan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::~SpcmnItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::has_data() const
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

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::has_operation() const
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

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spcmn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpcmnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "count" || name == "major" || name == "minor" || name == "oem" || name == "pdNum" || name == "serNum" || name == "prtNum" || name == "pRev" || name == "mfgDev" || name == "hwVer" || name == "mfgBits" || name == "engBits" || name == "pwrCon" || name == "rmaFl" || name == "clei" || name == "vdrId" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::SpfanblkItems()
    :
    fbits{YType::uint64, "fbits"},
    hwcbits{YType::uint64, "hwCBits"},
    stackmib{YType::uint16, "stackMIB"},
    coolcap{YType::uint16, "coolCap"},
    ambtemp{YType::uint16, "ambTemp"},
    hppwrcon{YType::uint16, "hpPwrCon"},
    hpcoolcon{YType::uint16, "hpCoolCon"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spfanblk-items"; yang_parent_name = "spfan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::~SpfanblkItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::has_data() const
{
    if (is_presence_container) return true;
    return fbits.is_set
	|| hwcbits.is_set
	|| stackmib.is_set
	|| coolcap.is_set
	|| ambtemp.is_set
	|| hppwrcon.is_set
	|| hpcoolcon.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fbits.yfilter)
	|| ydk::is_set(hwcbits.yfilter)
	|| ydk::is_set(stackmib.yfilter)
	|| ydk::is_set(coolcap.yfilter)
	|| ydk::is_set(ambtemp.yfilter)
	|| ydk::is_set(hppwrcon.yfilter)
	|| ydk::is_set(hpcoolcon.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spfanblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fbits.is_set || is_set(fbits.yfilter)) leaf_name_data.push_back(fbits.get_name_leafdata());
    if (hwcbits.is_set || is_set(hwcbits.yfilter)) leaf_name_data.push_back(hwcbits.get_name_leafdata());
    if (stackmib.is_set || is_set(stackmib.yfilter)) leaf_name_data.push_back(stackmib.get_name_leafdata());
    if (coolcap.is_set || is_set(coolcap.yfilter)) leaf_name_data.push_back(coolcap.get_name_leafdata());
    if (ambtemp.is_set || is_set(ambtemp.yfilter)) leaf_name_data.push_back(ambtemp.get_name_leafdata());
    if (hppwrcon.is_set || is_set(hppwrcon.yfilter)) leaf_name_data.push_back(hppwrcon.get_name_leafdata());
    if (hpcoolcon.is_set || is_set(hpcoolcon.yfilter)) leaf_name_data.push_back(hpcoolcon.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "stackMIB")
    {
        stackmib = value;
        stackmib.value_namespace = name_space;
        stackmib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coolCap")
    {
        coolcap = value;
        coolcap.value_namespace = name_space;
        coolcap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ambTemp")
    {
        ambtemp = value;
        ambtemp.value_namespace = name_space;
        ambtemp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hpPwrCon")
    {
        hppwrcon = value;
        hppwrcon.value_namespace = name_space;
        hppwrcon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hpCoolCon")
    {
        hpcoolcon = value;
        hpcoolcon.value_namespace = name_space;
        hpcoolcon.value_namespace_prefix = name_space_prefix;
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

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fbits")
    {
        fbits.yfilter = yfilter;
    }
    if(value_path == "hwCBits")
    {
        hwcbits.yfilter = yfilter;
    }
    if(value_path == "stackMIB")
    {
        stackmib.yfilter = yfilter;
    }
    if(value_path == "coolCap")
    {
        coolcap.yfilter = yfilter;
    }
    if(value_path == "ambTemp")
    {
        ambtemp.yfilter = yfilter;
    }
    if(value_path == "hpPwrCon")
    {
        hppwrcon.yfilter = yfilter;
    }
    if(value_path == "hpCoolCon")
    {
        hpcoolcon.yfilter = yfilter;
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

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfanblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fbits" || name == "hwCBits" || name == "stackMIB" || name == "coolCap" || name == "ambTemp" || name == "hpPwrCon" || name == "hpCoolCon" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::SpfansnItems()
    :
    sernum{YType::str, "serNum"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spfansn-items"; yang_parent_name = "spfan-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::~SpfansnItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::has_data() const
{
    if (is_presence_container) return true;
    return sernum.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sernum.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spfansn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sernum.is_set || is_set(sernum.yfilter)) leaf_name_data.push_back(sernum.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serNum")
    {
        sernum = value;
        sernum.value_namespace = name_space;
        sernum.value_namespace_prefix = name_space_prefix;
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

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serNum")
    {
        sernum.yfilter = yfilter;
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

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::FtItems::SpfanItems::SpfansnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serNum" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::RtoosSlotItems()
    :
    tdn{YType::str, "tDn"},
    tcl{YType::enumeration, "tCl"}
{

    yang_name = "rtoosSlot-items"; yang_parent_name = "FtSlot-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::~RtoosSlotItems()
{
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::has_data() const
{
    if (is_presence_container) return true;
    return tdn.is_set
	|| tcl.is_set;
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdn.yfilter)
	|| ydk::is_set(tcl.yfilter);
}

std::string System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtoosSlot-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdn.is_set || is_set(tdn.yfilter)) leaf_name_data.push_back(tdn.get_name_leafdata());
    if (tcl.is_set || is_set(tcl.yfilter)) leaf_name_data.push_back(tcl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tDn")
    {
        tdn = value;
        tdn.value_namespace = name_space;
        tdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tCl")
    {
        tcl = value;
        tcl.value_namespace = name_space;
        tcl.value_namespace_prefix = name_space_prefix;
    }
}

void System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tDn")
    {
        tdn.yfilter = yfilter;
    }
    if(value_path == "tCl")
    {
        tcl.yfilter = yfilter;
    }
}

bool System::ExtchItems::ExtChList::FtslotItems::FtSlotList::RtoosSlotItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tDn" || name == "tCl")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpbpItems::SpbpItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"},
    numblk{YType::uint16, "numBlk"}
        ,
    spcmn_items(std::make_shared<System::ExtchItems::ExtChList::SpbpItems::SpcmnItems>())
    , spbpblk_items(std::make_shared<System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems>())
{
    spcmn_items->parent = this;
    spbpblk_items->parent = this;

    yang_name = "spbp-items"; yang_parent_name = "ExtCh-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpbpItems::~SpbpItems()
{
}

bool System::ExtchItems::ExtChList::SpbpItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set
	|| numblk.is_set
	|| (spcmn_items !=  nullptr && spcmn_items->has_data())
	|| (spbpblk_items !=  nullptr && spbpblk_items->has_data());
}

bool System::ExtchItems::ExtChList::SpbpItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numblk.yfilter)
	|| (spcmn_items !=  nullptr && spcmn_items->has_operation())
	|| (spbpblk_items !=  nullptr && spbpblk_items->has_operation());
}

std::string System::ExtchItems::ExtChList::SpbpItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spbp-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpbpItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::SpbpItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spcmn-items")
    {
        if(spcmn_items == nullptr)
        {
            spcmn_items = std::make_shared<System::ExtchItems::ExtChList::SpbpItems::SpcmnItems>();
        }
        return spcmn_items;
    }

    if(child_yang_name == "spbpblk-items")
    {
        if(spbpblk_items == nullptr)
        {
            spbpblk_items = std::make_shared<System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems>();
        }
        return spbpblk_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::SpbpItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spcmn_items != nullptr)
    {
        children["spcmn-items"] = spcmn_items;
    }

    if(spbpblk_items != nullptr)
    {
        children["spbpblk-items"] = spbpblk_items;
    }

    return children;
}

void System::ExtchItems::ExtChList::SpbpItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::SpbpItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::SpbpItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spcmn-items" || name == "spbpblk-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt" || name == "numBlk")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::SpcmnItems()
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

    yang_name = "spcmn-items"; yang_parent_name = "spbp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::~SpcmnItems()
{
}

bool System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::has_data() const
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

bool System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::has_operation() const
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

std::string System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spcmn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::SpbpItems::SpcmnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "count" || name == "major" || name == "minor" || name == "oem" || name == "pdNum" || name == "serNum" || name == "prtNum" || name == "pRev" || name == "mfgDev" || name == "hwVer" || name == "mfgBits" || name == "engBits" || name == "pwrCon" || name == "rmaFl" || name == "clei" || name == "vdrId" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::SpbpblkItems()
    :
    fbits{YType::uint64, "fbits"},
    hwcbits{YType::uint64, "hwCBits"},
    macb{YType::str, "macB"},
    macl{YType::uint16, "macL"},
    stackmib{YType::uint16, "stackMIB"},
    oemeprise{YType::uint16, "oemEprise"},
    oemmib{YType::uint16, "oemMIB"},
    maxcpwr{YType::uint16, "maxCPwr"},
    sig{YType::uint16, "sig"},
    ver{YType::uint16, "ver"},
    len{YType::uint16, "len"},
    cksum{YType::uint16, "cksum"}
{

    yang_name = "spbpblk-items"; yang_parent_name = "spbp-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::~SpbpblkItems()
{
}

bool System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::has_data() const
{
    if (is_presence_container) return true;
    return fbits.is_set
	|| hwcbits.is_set
	|| macb.is_set
	|| macl.is_set
	|| stackmib.is_set
	|| oemeprise.is_set
	|| oemmib.is_set
	|| maxcpwr.is_set
	|| sig.is_set
	|| ver.is_set
	|| len.is_set
	|| cksum.is_set;
}

bool System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fbits.yfilter)
	|| ydk::is_set(hwcbits.yfilter)
	|| ydk::is_set(macb.yfilter)
	|| ydk::is_set(macl.yfilter)
	|| ydk::is_set(stackmib.yfilter)
	|| ydk::is_set(oemeprise.yfilter)
	|| ydk::is_set(oemmib.yfilter)
	|| ydk::is_set(maxcpwr.yfilter)
	|| ydk::is_set(sig.yfilter)
	|| ydk::is_set(ver.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(cksum.yfilter);
}

std::string System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spbpblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fbits.is_set || is_set(fbits.yfilter)) leaf_name_data.push_back(fbits.get_name_leafdata());
    if (hwcbits.is_set || is_set(hwcbits.yfilter)) leaf_name_data.push_back(hwcbits.get_name_leafdata());
    if (macb.is_set || is_set(macb.yfilter)) leaf_name_data.push_back(macb.get_name_leafdata());
    if (macl.is_set || is_set(macl.yfilter)) leaf_name_data.push_back(macl.get_name_leafdata());
    if (stackmib.is_set || is_set(stackmib.yfilter)) leaf_name_data.push_back(stackmib.get_name_leafdata());
    if (oemeprise.is_set || is_set(oemeprise.yfilter)) leaf_name_data.push_back(oemeprise.get_name_leafdata());
    if (oemmib.is_set || is_set(oemmib.yfilter)) leaf_name_data.push_back(oemmib.get_name_leafdata());
    if (maxcpwr.is_set || is_set(maxcpwr.yfilter)) leaf_name_data.push_back(maxcpwr.get_name_leafdata());
    if (sig.is_set || is_set(sig.yfilter)) leaf_name_data.push_back(sig.get_name_leafdata());
    if (ver.is_set || is_set(ver.yfilter)) leaf_name_data.push_back(ver.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (cksum.is_set || is_set(cksum.yfilter)) leaf_name_data.push_back(cksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "stackMIB")
    {
        stackmib = value;
        stackmib.value_namespace = name_space;
        stackmib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oemEprise")
    {
        oemeprise = value;
        oemeprise.value_namespace = name_space;
        oemeprise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oemMIB")
    {
        oemmib = value;
        oemmib.value_namespace = name_space;
        oemmib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr = value;
        maxcpwr.value_namespace = name_space;
        maxcpwr.value_namespace_prefix = name_space_prefix;
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

void System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fbits")
    {
        fbits.yfilter = yfilter;
    }
    if(value_path == "hwCBits")
    {
        hwcbits.yfilter = yfilter;
    }
    if(value_path == "macB")
    {
        macb.yfilter = yfilter;
    }
    if(value_path == "macL")
    {
        macl.yfilter = yfilter;
    }
    if(value_path == "stackMIB")
    {
        stackmib.yfilter = yfilter;
    }
    if(value_path == "oemEprise")
    {
        oemeprise.yfilter = yfilter;
    }
    if(value_path == "oemMIB")
    {
        oemmib.yfilter = yfilter;
    }
    if(value_path == "maxCPwr")
    {
        maxcpwr.yfilter = yfilter;
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

bool System::ExtchItems::ExtChList::SpbpItems::SpbpblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fbits" || name == "hwCBits" || name == "macB" || name == "macL" || name == "stackMIB" || name == "oemEprise" || name == "oemMIB" || name == "maxCPwr" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpsupItems::SpsupItems()
    :
    id{YType::uint32, "id"},
    vendor{YType::str, "vendor"},
    model{YType::str, "model"},
    rev{YType::str, "rev"},
    ser{YType::str, "ser"},
    descr{YType::str, "descr"},
    type{YType::enumeration, "type"},
    cap{YType::uint32, "cap"},
    acc{YType::enumeration, "acc"},
    operst{YType::enumeration, "operSt"},
    numblk{YType::uint16, "numBlk"}
        ,
    spcmn_items(std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpcmnItems>())
    , spsupblk_items(std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems>())
    , sppd_items(std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SppdItems>())
    , spsd_items(std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsdItems>())
    , spsensorblk_items(std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems>())
{
    spcmn_items->parent = this;
    spsupblk_items->parent = this;
    sppd_items->parent = this;
    spsd_items->parent = this;
    spsensorblk_items->parent = this;

    yang_name = "spsup-items"; yang_parent_name = "ExtCh-list"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpsupItems::~SpsupItems()
{
}

bool System::ExtchItems::ExtChList::SpsupItems::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| vendor.is_set
	|| model.is_set
	|| rev.is_set
	|| ser.is_set
	|| descr.is_set
	|| type.is_set
	|| cap.is_set
	|| acc.is_set
	|| operst.is_set
	|| numblk.is_set
	|| (spcmn_items !=  nullptr && spcmn_items->has_data())
	|| (spsupblk_items !=  nullptr && spsupblk_items->has_data())
	|| (sppd_items !=  nullptr && sppd_items->has_data())
	|| (spsd_items !=  nullptr && spsd_items->has_data())
	|| (spsensorblk_items !=  nullptr && spsensorblk_items->has_data());
}

bool System::ExtchItems::ExtChList::SpsupItems::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vendor.yfilter)
	|| ydk::is_set(model.yfilter)
	|| ydk::is_set(rev.yfilter)
	|| ydk::is_set(ser.yfilter)
	|| ydk::is_set(descr.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(cap.yfilter)
	|| ydk::is_set(acc.yfilter)
	|| ydk::is_set(operst.yfilter)
	|| ydk::is_set(numblk.yfilter)
	|| (spcmn_items !=  nullptr && spcmn_items->has_operation())
	|| (spsupblk_items !=  nullptr && spsupblk_items->has_operation())
	|| (sppd_items !=  nullptr && sppd_items->has_operation())
	|| (spsd_items !=  nullptr && spsd_items->has_operation())
	|| (spsensorblk_items !=  nullptr && spsensorblk_items->has_operation());
}

std::string System::ExtchItems::ExtChList::SpsupItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsup-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpsupItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());
    if (model.is_set || is_set(model.yfilter)) leaf_name_data.push_back(model.get_name_leafdata());
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::SpsupItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spcmn-items")
    {
        if(spcmn_items == nullptr)
        {
            spcmn_items = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpcmnItems>();
        }
        return spcmn_items;
    }

    if(child_yang_name == "spsupblk-items")
    {
        if(spsupblk_items == nullptr)
        {
            spsupblk_items = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems>();
        }
        return spsupblk_items;
    }

    if(child_yang_name == "sppd-items")
    {
        if(sppd_items == nullptr)
        {
            sppd_items = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SppdItems>();
        }
        return sppd_items;
    }

    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsdItems>();
        }
        return spsd_items;
    }

    if(child_yang_name == "spsensorblk-items")
    {
        if(spsensorblk_items == nullptr)
        {
            spsensorblk_items = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsensorblkItems>();
        }
        return spsensorblk_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::SpsupItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spcmn_items != nullptr)
    {
        children["spcmn-items"] = spcmn_items;
    }

    if(spsupblk_items != nullptr)
    {
        children["spsupblk-items"] = spsupblk_items;
    }

    if(sppd_items != nullptr)
    {
        children["sppd-items"] = sppd_items;
    }

    if(spsd_items != nullptr)
    {
        children["spsd-items"] = spsd_items;
    }

    if(spsensorblk_items != nullptr)
    {
        children["spsensorblk-items"] = spsensorblk_items;
    }

    return children;
}

void System::ExtchItems::ExtChList::SpsupItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::SpsupItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::SpsupItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spcmn-items" || name == "spsupblk-items" || name == "sppd-items" || name == "spsd-items" || name == "spsensorblk-items" || name == "id" || name == "vendor" || name == "model" || name == "rev" || name == "ser" || name == "descr" || name == "type" || name == "cap" || name == "acc" || name == "operSt" || name == "numBlk")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::SpcmnItems()
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

    yang_name = "spcmn-items"; yang_parent_name = "spsup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::~SpcmnItems()
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::has_data() const
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

bool System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::has_operation() const
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

std::string System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spcmn-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::SpsupItems::SpcmnItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "count" || name == "major" || name == "minor" || name == "oem" || name == "pdNum" || name == "serNum" || name == "prtNum" || name == "pRev" || name == "mfgDev" || name == "hwVer" || name == "mfgBits" || name == "engBits" || name == "pwrCon" || name == "rmaFl" || name == "clei" || name == "vdrId" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsupblkItems()
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
    spsd_items(std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems>())
    , sppd_items(std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems>())
{
    spsd_items->parent = this;
    sppd_items->parent = this;

    yang_name = "spsupblk-items"; yang_parent_name = "spsup-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::~SpsupblkItems()
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::has_data() const
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

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::has_operation() const
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

std::string System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsupblk-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::get_name_leaf_data() const
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

std::shared_ptr<Entity> System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spsd-items")
    {
        if(spsd_items == nullptr)
        {
            spsd_items = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems>();
        }
        return spsd_items;
    }

    if(child_yang_name == "sppd-items")
    {
        if(sppd_items == nullptr)
        {
            sppd_items = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SppdItems>();
        }
        return sppd_items;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spsd_items != nullptr)
    {
        children["spsd-items"] = spsd_items;
    }

    if(sppd_items != nullptr)
    {
        children["sppd-items"] = sppd_items;
    }

    return children;
}

void System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::set_filter(const std::string & value_path, YFilter yfilter)
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

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spsd-items" || name == "sppd-items" || name == "fbits" || name == "hwCBits" || name == "crdIdx" || name == "macB" || name == "macL" || name == "eobcN" || name == "epldN" || name == "maxCPwr" || name == "coolRq" || name == "ambT" || name == "sensor1" || name == "sensor2" || name == "sensor3" || name == "sensor4" || name == "sensor5" || name == "sensor6" || name == "sensor7" || name == "sensor8" || name == "sig" || name == "ver" || name == "len" || name == "cksum")
        return true;
    return false;
}

System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpsdItems()
    :
    spsd_list(this, {"id"})
{

    yang_name = "spsd-items"; yang_parent_name = "spsupblk-items"; is_top_level_class = false; has_list_ancestor = true; 
}

System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::~SpsdItems()
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_data())
            return true;
    }
    return false;
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::has_operation() const
{
    for (std::size_t index=0; index<spsd_list.len(); index++)
    {
        if(spsd_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spsd-items";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "SpSd-list")
    {
        auto c = std::make_shared<System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::SpSdList>();
        c->parent = this;
        spsd_list.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : spsd_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool System::ExtchItems::ExtChList::SpsupItems::SpsupblkItems::SpsdItems::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "SpSd-list")
        return true;
    return false;
}


}
}

