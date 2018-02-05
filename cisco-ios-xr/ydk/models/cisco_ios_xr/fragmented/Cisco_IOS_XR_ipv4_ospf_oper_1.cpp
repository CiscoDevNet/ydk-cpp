
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_1.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ospf_oper {

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::OsRuntime()
    :
    si_area_id_str{YType::str, "si-area-id-str"},
    si_change_flags{YType::uint16, "si-change-flags"}
    	,
    si_start_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime>())
	,si_duration(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration>())
{
    si_start_time->parent = this;
    si_duration->parent = this;

    yang_name = "os-runtime"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::~OsRuntime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::has_data() const
{
    return si_area_id_str.is_set
	|| si_change_flags.is_set
	|| (si_start_time !=  nullptr && si_start_time->has_data())
	|| (si_duration !=  nullptr && si_duration->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(si_area_id_str.yfilter)
	|| ydk::is_set(si_change_flags.yfilter)
	|| (si_start_time !=  nullptr && si_start_time->has_operation())
	|| (si_duration !=  nullptr && si_duration->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (si_area_id_str.is_set || is_set(si_area_id_str.yfilter)) leaf_name_data.push_back(si_area_id_str.get_name_leafdata());
    if (si_change_flags.is_set || is_set(si_change_flags.yfilter)) leaf_name_data.push_back(si_change_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "si-start-time")
    {
        if(si_start_time == nullptr)
        {
            si_start_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime>();
        }
        return si_start_time;
    }

    if(child_yang_name == "si-duration")
    {
        if(si_duration == nullptr)
        {
            si_duration = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration>();
        }
        return si_duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(si_start_time != nullptr)
    {
        children["si-start-time"] = si_start_time;
    }

    if(si_duration != nullptr)
    {
        children["si-duration"] = si_duration;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "si-area-id-str")
    {
        si_area_id_str = value;
        si_area_id_str.value_namespace = name_space;
        si_area_id_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "si-change-flags")
    {
        si_change_flags = value;
        si_change_flags.value_namespace = name_space;
        si_change_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "si-area-id-str")
    {
        si_area_id_str.yfilter = yfilter;
    }
    if(value_path == "si-change-flags")
    {
        si_change_flags.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "si-start-time" || name == "si-duration" || name == "si-area-id-str" || name == "si-change-flags")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::SiStartTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "si-start-time"; yang_parent_name = "os-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::~SiStartTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiStartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::SiDuration()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "si-duration"; yang_parent_name = "os-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::~SiDuration()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsRuntime::SiDuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::OsSumRuntime()
    :
    sp_adv_rtr_id{YType::uint32, "sp-adv-rtr-id"},
    sp_dest_count{YType::uint32, "sp-dest-count"},
    sp_dest_addr{YType::uint32, "sp-dest-addr"}
    	,
    sp_start_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime>())
	,sp_duration(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration>())
{
    sp_start_time->parent = this;
    sp_duration->parent = this;

    yang_name = "os-sum-runtime"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::~OsSumRuntime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::has_data() const
{
    return sp_adv_rtr_id.is_set
	|| sp_dest_count.is_set
	|| sp_dest_addr.is_set
	|| (sp_start_time !=  nullptr && sp_start_time->has_data())
	|| (sp_duration !=  nullptr && sp_duration->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sp_adv_rtr_id.yfilter)
	|| ydk::is_set(sp_dest_count.yfilter)
	|| ydk::is_set(sp_dest_addr.yfilter)
	|| (sp_start_time !=  nullptr && sp_start_time->has_operation())
	|| (sp_duration !=  nullptr && sp_duration->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-sum-runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sp_adv_rtr_id.is_set || is_set(sp_adv_rtr_id.yfilter)) leaf_name_data.push_back(sp_adv_rtr_id.get_name_leafdata());
    if (sp_dest_count.is_set || is_set(sp_dest_count.yfilter)) leaf_name_data.push_back(sp_dest_count.get_name_leafdata());
    if (sp_dest_addr.is_set || is_set(sp_dest_addr.yfilter)) leaf_name_data.push_back(sp_dest_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sp-start-time")
    {
        if(sp_start_time == nullptr)
        {
            sp_start_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime>();
        }
        return sp_start_time;
    }

    if(child_yang_name == "sp-duration")
    {
        if(sp_duration == nullptr)
        {
            sp_duration = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration>();
        }
        return sp_duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sp_start_time != nullptr)
    {
        children["sp-start-time"] = sp_start_time;
    }

    if(sp_duration != nullptr)
    {
        children["sp-duration"] = sp_duration;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id = value;
        sp_adv_rtr_id.value_namespace = name_space;
        sp_adv_rtr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count = value;
        sp_dest_count.value_namespace = name_space;
        sp_dest_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr = value;
        sp_dest_addr.value_namespace = name_space;
        sp_dest_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id.yfilter = yfilter;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count.yfilter = yfilter;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sp-start-time" || name == "sp-duration" || name == "sp-adv-rtr-id" || name == "sp-dest-count" || name == "sp-dest-addr")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::SpStartTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "sp-start-time"; yang_parent_name = "os-sum-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::~SpStartTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpStartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::SpDuration()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "sp-duration"; yang_parent_name = "os-sum-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::~SpDuration()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsSumRuntime::SpDuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::OsExRuntime()
    :
    sp_adv_rtr_id{YType::uint32, "sp-adv-rtr-id"},
    sp_dest_count{YType::uint32, "sp-dest-count"},
    sp_dest_addr{YType::uint32, "sp-dest-addr"}
    	,
    sp_start_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime>())
	,sp_duration(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration>())
{
    sp_start_time->parent = this;
    sp_duration->parent = this;

    yang_name = "os-ex-runtime"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::~OsExRuntime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::has_data() const
{
    return sp_adv_rtr_id.is_set
	|| sp_dest_count.is_set
	|| sp_dest_addr.is_set
	|| (sp_start_time !=  nullptr && sp_start_time->has_data())
	|| (sp_duration !=  nullptr && sp_duration->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sp_adv_rtr_id.yfilter)
	|| ydk::is_set(sp_dest_count.yfilter)
	|| ydk::is_set(sp_dest_addr.yfilter)
	|| (sp_start_time !=  nullptr && sp_start_time->has_operation())
	|| (sp_duration !=  nullptr && sp_duration->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os-ex-runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sp_adv_rtr_id.is_set || is_set(sp_adv_rtr_id.yfilter)) leaf_name_data.push_back(sp_adv_rtr_id.get_name_leafdata());
    if (sp_dest_count.is_set || is_set(sp_dest_count.yfilter)) leaf_name_data.push_back(sp_dest_count.get_name_leafdata());
    if (sp_dest_addr.is_set || is_set(sp_dest_addr.yfilter)) leaf_name_data.push_back(sp_dest_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sp-start-time")
    {
        if(sp_start_time == nullptr)
        {
            sp_start_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime>();
        }
        return sp_start_time;
    }

    if(child_yang_name == "sp-duration")
    {
        if(sp_duration == nullptr)
        {
            sp_duration = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration>();
        }
        return sp_duration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sp_start_time != nullptr)
    {
        children["sp-start-time"] = sp_start_time;
    }

    if(sp_duration != nullptr)
    {
        children["sp-duration"] = sp_duration;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id = value;
        sp_adv_rtr_id.value_namespace = name_space;
        sp_adv_rtr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count = value;
        sp_dest_count.value_namespace = name_space;
        sp_dest_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr = value;
        sp_dest_addr.value_namespace = name_space;
        sp_dest_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sp-adv-rtr-id")
    {
        sp_adv_rtr_id.yfilter = yfilter;
    }
    if(value_path == "sp-dest-count")
    {
        sp_dest_count.yfilter = yfilter;
    }
    if(value_path == "sp-dest-addr")
    {
        sp_dest_addr.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sp-start-time" || name == "sp-duration" || name == "sp-adv-rtr-id" || name == "sp-dest-count" || name == "sp-dest-addr")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::SpStartTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "sp-start-time"; yang_parent_name = "os-ex-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::~SpStartTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpStartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::SpDuration()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "sp-duration"; yang_parent_name = "os-ex-runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::~SpDuration()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sp-duration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::OsExRuntime::SpDuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::Runtime()
    :
    spf_start_time{YType::uint32, "spf-start-time"},
    lsa_change_cnt{YType::int16, "lsa-change-cnt"}
    	,
    gbl_spf_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime>())
{
    gbl_spf_time->parent = this;

    yang_name = "runtime"; yang_parent_name = "spf-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::~Runtime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::has_data() const
{
    for (std::size_t index=0; index<lsa_info.size(); index++)
    {
        if(lsa_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_data())
            return true;
    }
    return spf_start_time.is_set
	|| lsa_change_cnt.is_set
	|| (gbl_spf_time !=  nullptr && gbl_spf_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::has_operation() const
{
    for (std::size_t index=0; index<lsa_info.size(); index++)
    {
        if(lsa_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<area_stat.size(); index++)
    {
        if(area_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(spf_start_time.yfilter)
	|| ydk::is_set(lsa_change_cnt.yfilter)
	|| (gbl_spf_time !=  nullptr && gbl_spf_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_start_time.is_set || is_set(spf_start_time.yfilter)) leaf_name_data.push_back(spf_start_time.get_name_leafdata());
    if (lsa_change_cnt.is_set || is_set(lsa_change_cnt.yfilter)) leaf_name_data.push_back(lsa_change_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gbl-spf-time")
    {
        if(gbl_spf_time == nullptr)
        {
            gbl_spf_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime>();
        }
        return gbl_spf_time;
    }

    if(child_yang_name == "lsa-info")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo>();
        c->parent = this;
        lsa_info.push_back(c);
        return c;
    }

    if(child_yang_name == "area-stat")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat>();
        c->parent = this;
        area_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gbl_spf_time != nullptr)
    {
        children["gbl-spf-time"] = gbl_spf_time;
    }

    count = 0;
    for (auto const & c : lsa_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : area_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-start-time")
    {
        spf_start_time = value;
        spf_start_time.value_namespace = name_space;
        spf_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-change-cnt")
    {
        lsa_change_cnt = value;
        lsa_change_cnt.value_namespace = name_space;
        lsa_change_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-start-time")
    {
        spf_start_time.yfilter = yfilter;
    }
    if(value_path == "lsa-change-cnt")
    {
        lsa_change_cnt.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gbl-spf-time" || name == "lsa-info" || name == "area-stat" || name == "spf-start-time" || name == "lsa-change-cnt")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::GblSpfTime()
    :
    spf_dijkstra{YType::uint32, "spf-dijkstra"},
    spf_intra_prefix{YType::uint32, "spf-intra-prefix"},
    spf_intra_prefix_del{YType::uint32, "spf-intra-prefix-del"},
    spf_inter_prefix{YType::uint32, "spf-inter-prefix"},
    spf_inter_prefix_del{YType::uint32, "spf-inter-prefix-del"},
    spf_ext_prefix{YType::uint32, "spf-ext-prefix"},
    spf_ext_prefix_del{YType::uint32, "spf-ext-prefix-del"}
{

    yang_name = "gbl-spf-time"; yang_parent_name = "runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::~GblSpfTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::has_data() const
{
    return spf_dijkstra.is_set
	|| spf_intra_prefix.is_set
	|| spf_intra_prefix_del.is_set
	|| spf_inter_prefix.is_set
	|| spf_inter_prefix_del.is_set
	|| spf_ext_prefix.is_set
	|| spf_ext_prefix_del.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spf_dijkstra.yfilter)
	|| ydk::is_set(spf_intra_prefix.yfilter)
	|| ydk::is_set(spf_intra_prefix_del.yfilter)
	|| ydk::is_set(spf_inter_prefix.yfilter)
	|| ydk::is_set(spf_inter_prefix_del.yfilter)
	|| ydk::is_set(spf_ext_prefix.yfilter)
	|| ydk::is_set(spf_ext_prefix_del.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gbl-spf-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_dijkstra.is_set || is_set(spf_dijkstra.yfilter)) leaf_name_data.push_back(spf_dijkstra.get_name_leafdata());
    if (spf_intra_prefix.is_set || is_set(spf_intra_prefix.yfilter)) leaf_name_data.push_back(spf_intra_prefix.get_name_leafdata());
    if (spf_intra_prefix_del.is_set || is_set(spf_intra_prefix_del.yfilter)) leaf_name_data.push_back(spf_intra_prefix_del.get_name_leafdata());
    if (spf_inter_prefix.is_set || is_set(spf_inter_prefix.yfilter)) leaf_name_data.push_back(spf_inter_prefix.get_name_leafdata());
    if (spf_inter_prefix_del.is_set || is_set(spf_inter_prefix_del.yfilter)) leaf_name_data.push_back(spf_inter_prefix_del.get_name_leafdata());
    if (spf_ext_prefix.is_set || is_set(spf_ext_prefix.yfilter)) leaf_name_data.push_back(spf_ext_prefix.get_name_leafdata());
    if (spf_ext_prefix_del.is_set || is_set(spf_ext_prefix_del.yfilter)) leaf_name_data.push_back(spf_ext_prefix_del.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra = value;
        spf_dijkstra.value_namespace = name_space;
        spf_dijkstra.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix = value;
        spf_intra_prefix.value_namespace = name_space;
        spf_intra_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del = value;
        spf_intra_prefix_del.value_namespace = name_space;
        spf_intra_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix = value;
        spf_inter_prefix.value_namespace = name_space;
        spf_inter_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del = value;
        spf_inter_prefix_del.value_namespace = name_space;
        spf_inter_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix = value;
        spf_ext_prefix.value_namespace = name_space;
        spf_ext_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del = value;
        spf_ext_prefix_del.value_namespace = name_space;
        spf_ext_prefix_del.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra.yfilter = yfilter;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del.yfilter = yfilter;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del.yfilter = yfilter;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::GblSpfTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-dijkstra" || name == "spf-intra-prefix" || name == "spf-intra-prefix-del" || name == "spf-inter-prefix" || name == "spf-inter-prefix-del" || name == "spf-ext-prefix" || name == "spf-ext-prefix-del")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::LsaInfo()
    :
    area_id{YType::uint32, "area-id"},
    adv_rtr{YType::str, "adv-rtr"},
    id{YType::str, "id"},
    type{YType::uint8, "type"},
    flush{YType::boolean, "flush"}
{

    yang_name = "lsa-info"; yang_parent_name = "runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::~LsaInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::has_data() const
{
    return area_id.is_set
	|| adv_rtr.is_set
	|| id.is_set
	|| type.is_set
	|| flush.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(adv_rtr.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(flush.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (adv_rtr.is_set || is_set(adv_rtr.yfilter)) leaf_name_data.push_back(adv_rtr.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (flush.is_set || is_set(flush.yfilter)) leaf_name_data.push_back(flush.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-rtr")
    {
        adv_rtr = value;
        adv_rtr.value_namespace = name_space;
        adv_rtr.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "flush")
    {
        flush = value;
        flush.value_namespace = name_space;
        flush.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "adv-rtr")
    {
        adv_rtr.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "flush")
    {
        flush.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::LsaInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-id" || name == "adv-rtr" || name == "id" || name == "type" || name == "flush")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::AreaStat()
    :
    area_id{YType::uint32, "area-id"}
    	,
    spf_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime>())
{
    spf_time->parent = this;

    yang_name = "area-stat"; yang_parent_name = "runtime"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::~AreaStat()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::has_data() const
{
    for (std::size_t index=0; index<lsa_type_cnt.size(); index++)
    {
        if(lsa_type_cnt[index]->has_data())
            return true;
    }
    return area_id.is_set
	|| (spf_time !=  nullptr && spf_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::has_operation() const
{
    for (std::size_t index=0; index<lsa_type_cnt.size(); index++)
    {
        if(lsa_type_cnt[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| (spf_time !=  nullptr && spf_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-time")
    {
        if(spf_time == nullptr)
        {
            spf_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime>();
        }
        return spf_time;
    }

    if(child_yang_name == "lsa-type-cnt")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt>();
        c->parent = this;
        lsa_type_cnt.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(spf_time != nullptr)
    {
        children["spf-time"] = spf_time;
    }

    count = 0;
    for (auto const & c : lsa_type_cnt)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-time" || name == "lsa-type-cnt" || name == "area-id")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::SpfTime()
    :
    spf_dijkstra{YType::uint32, "spf-dijkstra"},
    spf_intra_prefix{YType::uint32, "spf-intra-prefix"},
    spf_intra_prefix_del{YType::uint32, "spf-intra-prefix-del"},
    spf_inter_prefix{YType::uint32, "spf-inter-prefix"},
    spf_inter_prefix_del{YType::uint32, "spf-inter-prefix-del"},
    spf_ext_prefix{YType::uint32, "spf-ext-prefix"},
    spf_ext_prefix_del{YType::uint32, "spf-ext-prefix-del"}
{

    yang_name = "spf-time"; yang_parent_name = "area-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::~SpfTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::has_data() const
{
    return spf_dijkstra.is_set
	|| spf_intra_prefix.is_set
	|| spf_intra_prefix_del.is_set
	|| spf_inter_prefix.is_set
	|| spf_inter_prefix_del.is_set
	|| spf_ext_prefix.is_set
	|| spf_ext_prefix_del.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(spf_dijkstra.yfilter)
	|| ydk::is_set(spf_intra_prefix.yfilter)
	|| ydk::is_set(spf_intra_prefix_del.yfilter)
	|| ydk::is_set(spf_inter_prefix.yfilter)
	|| ydk::is_set(spf_inter_prefix_del.yfilter)
	|| ydk::is_set(spf_ext_prefix.yfilter)
	|| ydk::is_set(spf_ext_prefix_del.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_dijkstra.is_set || is_set(spf_dijkstra.yfilter)) leaf_name_data.push_back(spf_dijkstra.get_name_leafdata());
    if (spf_intra_prefix.is_set || is_set(spf_intra_prefix.yfilter)) leaf_name_data.push_back(spf_intra_prefix.get_name_leafdata());
    if (spf_intra_prefix_del.is_set || is_set(spf_intra_prefix_del.yfilter)) leaf_name_data.push_back(spf_intra_prefix_del.get_name_leafdata());
    if (spf_inter_prefix.is_set || is_set(spf_inter_prefix.yfilter)) leaf_name_data.push_back(spf_inter_prefix.get_name_leafdata());
    if (spf_inter_prefix_del.is_set || is_set(spf_inter_prefix_del.yfilter)) leaf_name_data.push_back(spf_inter_prefix_del.get_name_leafdata());
    if (spf_ext_prefix.is_set || is_set(spf_ext_prefix.yfilter)) leaf_name_data.push_back(spf_ext_prefix.get_name_leafdata());
    if (spf_ext_prefix_del.is_set || is_set(spf_ext_prefix_del.yfilter)) leaf_name_data.push_back(spf_ext_prefix_del.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra = value;
        spf_dijkstra.value_namespace = name_space;
        spf_dijkstra.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix = value;
        spf_intra_prefix.value_namespace = name_space;
        spf_intra_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del = value;
        spf_intra_prefix_del.value_namespace = name_space;
        spf_intra_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix = value;
        spf_inter_prefix.value_namespace = name_space;
        spf_inter_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del = value;
        spf_inter_prefix_del.value_namespace = name_space;
        spf_inter_prefix_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix = value;
        spf_ext_prefix.value_namespace = name_space;
        spf_ext_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del = value;
        spf_ext_prefix_del.value_namespace = name_space;
        spf_ext_prefix_del.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-dijkstra")
    {
        spf_dijkstra.yfilter = yfilter;
    }
    if(value_path == "spf-intra-prefix")
    {
        spf_intra_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-intra-prefix-del")
    {
        spf_intra_prefix_del.yfilter = yfilter;
    }
    if(value_path == "spf-inter-prefix")
    {
        spf_inter_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-inter-prefix-del")
    {
        spf_inter_prefix_del.yfilter = yfilter;
    }
    if(value_path == "spf-ext-prefix")
    {
        spf_ext_prefix.yfilter = yfilter;
    }
    if(value_path == "spf-ext-prefix-del")
    {
        spf_ext_prefix_del.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::SpfTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-dijkstra" || name == "spf-intra-prefix" || name == "spf-intra-prefix-del" || name == "spf-inter-prefix" || name == "spf-inter-prefix-del" || name == "spf-ext-prefix" || name == "spf-ext-prefix-del")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::LsaTypeCnt()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "lsa-type-cnt"; yang_parent_name = "area-stat"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::~LsaTypeCnt()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-type-cnt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::SpfStats::Runtime::AreaStat::LsaTypeCnt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::RibBatchStats()
{

    yang_name = "rib-batch-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::~RibBatchStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::has_data() const
{
    for (std::size_t index=0; index<priority_batch.size(); index++)
    {
        if(priority_batch[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::has_operation() const
{
    for (std::size_t index=0; index<priority_batch.size(); index++)
    {
        if(priority_batch[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-batch-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-batch")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch>();
        c->parent = this;
        priority_batch.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : priority_batch)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-batch")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::PriorityBatch()
    :
    batches_sent{YType::uint32, "batches-sent"},
    routes_sent{YType::uint32, "routes-sent"},
    routes_pending{YType::uint32, "routes-pending"},
    max_routes{YType::uint32, "max-routes"},
    paths_sent{YType::uint32, "paths-sent"},
    paths_pending{YType::uint32, "paths-pending"},
    paths_add{YType::uint32, "paths-add"},
    paths_add_errs{YType::uint32, "paths-add-errs"},
    paths_del{YType::uint32, "paths-del"},
    paths_del_errs{YType::uint32, "paths-del-errs"},
    lfas_pending{YType::uint32, "lfas-pending"},
    lfas_add{YType::uint32, "lfas-add"},
    lfas_del{YType::uint32, "lfas-del"},
    lfas_sent{YType::uint32, "lfas-sent"},
    priority_level{YType::str, "priority-level"}
{

    yang_name = "priority-batch"; yang_parent_name = "rib-batch-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::~PriorityBatch()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::has_data() const
{
    return batches_sent.is_set
	|| routes_sent.is_set
	|| routes_pending.is_set
	|| max_routes.is_set
	|| paths_sent.is_set
	|| paths_pending.is_set
	|| paths_add.is_set
	|| paths_add_errs.is_set
	|| paths_del.is_set
	|| paths_del_errs.is_set
	|| lfas_pending.is_set
	|| lfas_add.is_set
	|| lfas_del.is_set
	|| lfas_sent.is_set
	|| priority_level.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(batches_sent.yfilter)
	|| ydk::is_set(routes_sent.yfilter)
	|| ydk::is_set(routes_pending.yfilter)
	|| ydk::is_set(max_routes.yfilter)
	|| ydk::is_set(paths_sent.yfilter)
	|| ydk::is_set(paths_pending.yfilter)
	|| ydk::is_set(paths_add.yfilter)
	|| ydk::is_set(paths_add_errs.yfilter)
	|| ydk::is_set(paths_del.yfilter)
	|| ydk::is_set(paths_del_errs.yfilter)
	|| ydk::is_set(lfas_pending.yfilter)
	|| ydk::is_set(lfas_add.yfilter)
	|| ydk::is_set(lfas_del.yfilter)
	|| ydk::is_set(lfas_sent.yfilter)
	|| ydk::is_set(priority_level.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-batch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (batches_sent.is_set || is_set(batches_sent.yfilter)) leaf_name_data.push_back(batches_sent.get_name_leafdata());
    if (routes_sent.is_set || is_set(routes_sent.yfilter)) leaf_name_data.push_back(routes_sent.get_name_leafdata());
    if (routes_pending.is_set || is_set(routes_pending.yfilter)) leaf_name_data.push_back(routes_pending.get_name_leafdata());
    if (max_routes.is_set || is_set(max_routes.yfilter)) leaf_name_data.push_back(max_routes.get_name_leafdata());
    if (paths_sent.is_set || is_set(paths_sent.yfilter)) leaf_name_data.push_back(paths_sent.get_name_leafdata());
    if (paths_pending.is_set || is_set(paths_pending.yfilter)) leaf_name_data.push_back(paths_pending.get_name_leafdata());
    if (paths_add.is_set || is_set(paths_add.yfilter)) leaf_name_data.push_back(paths_add.get_name_leafdata());
    if (paths_add_errs.is_set || is_set(paths_add_errs.yfilter)) leaf_name_data.push_back(paths_add_errs.get_name_leafdata());
    if (paths_del.is_set || is_set(paths_del.yfilter)) leaf_name_data.push_back(paths_del.get_name_leafdata());
    if (paths_del_errs.is_set || is_set(paths_del_errs.yfilter)) leaf_name_data.push_back(paths_del_errs.get_name_leafdata());
    if (lfas_pending.is_set || is_set(lfas_pending.yfilter)) leaf_name_data.push_back(lfas_pending.get_name_leafdata());
    if (lfas_add.is_set || is_set(lfas_add.yfilter)) leaf_name_data.push_back(lfas_add.get_name_leafdata());
    if (lfas_del.is_set || is_set(lfas_del.yfilter)) leaf_name_data.push_back(lfas_del.get_name_leafdata());
    if (lfas_sent.is_set || is_set(lfas_sent.yfilter)) leaf_name_data.push_back(lfas_sent.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "batches-sent")
    {
        batches_sent = value;
        batches_sent.value_namespace = name_space;
        batches_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes-sent")
    {
        routes_sent = value;
        routes_sent.value_namespace = name_space;
        routes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routes-pending")
    {
        routes_pending = value;
        routes_pending.value_namespace = name_space;
        routes_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-routes")
    {
        max_routes = value;
        max_routes.value_namespace = name_space;
        max_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-sent")
    {
        paths_sent = value;
        paths_sent.value_namespace = name_space;
        paths_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-pending")
    {
        paths_pending = value;
        paths_pending.value_namespace = name_space;
        paths_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-add")
    {
        paths_add = value;
        paths_add.value_namespace = name_space;
        paths_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-add-errs")
    {
        paths_add_errs = value;
        paths_add_errs.value_namespace = name_space;
        paths_add_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-del")
    {
        paths_del = value;
        paths_del.value_namespace = name_space;
        paths_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-del-errs")
    {
        paths_del_errs = value;
        paths_del_errs.value_namespace = name_space;
        paths_del_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfas-pending")
    {
        lfas_pending = value;
        lfas_pending.value_namespace = name_space;
        lfas_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfas-add")
    {
        lfas_add = value;
        lfas_add.value_namespace = name_space;
        lfas_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfas-del")
    {
        lfas_del = value;
        lfas_del.value_namespace = name_space;
        lfas_del.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfas-sent")
    {
        lfas_sent = value;
        lfas_sent.value_namespace = name_space;
        lfas_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "batches-sent")
    {
        batches_sent.yfilter = yfilter;
    }
    if(value_path == "routes-sent")
    {
        routes_sent.yfilter = yfilter;
    }
    if(value_path == "routes-pending")
    {
        routes_pending.yfilter = yfilter;
    }
    if(value_path == "max-routes")
    {
        max_routes.yfilter = yfilter;
    }
    if(value_path == "paths-sent")
    {
        paths_sent.yfilter = yfilter;
    }
    if(value_path == "paths-pending")
    {
        paths_pending.yfilter = yfilter;
    }
    if(value_path == "paths-add")
    {
        paths_add.yfilter = yfilter;
    }
    if(value_path == "paths-add-errs")
    {
        paths_add_errs.yfilter = yfilter;
    }
    if(value_path == "paths-del")
    {
        paths_del.yfilter = yfilter;
    }
    if(value_path == "paths-del-errs")
    {
        paths_del_errs.yfilter = yfilter;
    }
    if(value_path == "lfas-pending")
    {
        lfas_pending.yfilter = yfilter;
    }
    if(value_path == "lfas-add")
    {
        lfas_add.yfilter = yfilter;
    }
    if(value_path == "lfas-del")
    {
        lfas_del.yfilter = yfilter;
    }
    if(value_path == "lfas-sent")
    {
        lfas_sent.yfilter = yfilter;
    }
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibBatchStats::PriorityBatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "batches-sent" || name == "routes-sent" || name == "routes-pending" || name == "max-routes" || name == "paths-sent" || name == "paths-pending" || name == "paths-add" || name == "paths-add-errs" || name == "paths-del" || name == "paths-del-errs" || name == "lfas-pending" || name == "lfas-add" || name == "lfas-del" || name == "lfas-sent" || name == "priority-level")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::IssuStats()
    :
    nsr_rev{YType::int32, "nsr-rev"},
    nsr_fsm_state{YType::int32, "nsr-fsm-state"},
    nsr_version{YType::uint32, "nsr-version"},
    nsr_nodeid{YType::uint32, "nsr-nodeid"},
    nsr_peer_version{YType::uint32, "nsr-peer-version"},
    nsr_peer_nodeid{YType::uint32, "nsr-peer-nodeid"},
    nsr_mtu{YType::uint32, "nsr-mtu"},
    nsr_nbr_qad_qid{YType::uint32, "nsr-nbr-qad-qid"},
    nsr_lsa_qad_qid{YType::uint32, "nsr-lsa-qad-qid"},
    nsr_nbr_qad_mdata_count{YType::uint32, "nsr-nbr-qad-mdata-count"},
    nsr_lsa_qad_mdata_count{YType::uint32, "nsr-lsa-qad-mdata-count"},
    nsr_nbr_init_sync_pend_count{YType::int32, "nsr-nbr-init-sync-pend-count"},
    nsr_lsa_init_sync_pend_count{YType::int32, "nsr-lsa-init-sync-pend-count"},
    nsr_nbr_seq_no{YType::uint32, "nsr-nbr-seq-no"},
    nsr_intf_seq_no{YType::uint32, "nsr-intf-seq-no"},
    nsr_tmr_quant{YType::int32, "nsr-tmr-quant"},
    nsr_conn_to_active_attempts{YType::uint64, "nsr-conn-to-active-attempts"},
    nsr_conn_to_active_fails{YType::uint64, "nsr-conn-to-active-fails"},
    nsr_conn_to_active_opens{YType::uint64, "nsr-conn-to-active-opens"},
    nsr_conn_to_active_closes{YType::uint64, "nsr-conn-to-active-closes"},
    nsr_conn_to_active_errors{YType::uint64, "nsr-conn-to-active-errors"}
    	,
    nsr_thd_sched(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched>())
	,nsr_rtr_thd_sched(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched>())
{
    nsr_thd_sched->parent = this;
    nsr_rtr_thd_sched->parent = this;

    yang_name = "issu-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::~IssuStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::has_data() const
{
    return nsr_rev.is_set
	|| nsr_fsm_state.is_set
	|| nsr_version.is_set
	|| nsr_nodeid.is_set
	|| nsr_peer_version.is_set
	|| nsr_peer_nodeid.is_set
	|| nsr_mtu.is_set
	|| nsr_nbr_qad_qid.is_set
	|| nsr_lsa_qad_qid.is_set
	|| nsr_nbr_qad_mdata_count.is_set
	|| nsr_lsa_qad_mdata_count.is_set
	|| nsr_nbr_init_sync_pend_count.is_set
	|| nsr_lsa_init_sync_pend_count.is_set
	|| nsr_nbr_seq_no.is_set
	|| nsr_intf_seq_no.is_set
	|| nsr_tmr_quant.is_set
	|| nsr_conn_to_active_attempts.is_set
	|| nsr_conn_to_active_fails.is_set
	|| nsr_conn_to_active_opens.is_set
	|| nsr_conn_to_active_closes.is_set
	|| nsr_conn_to_active_errors.is_set
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_data())
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_rev.yfilter)
	|| ydk::is_set(nsr_fsm_state.yfilter)
	|| ydk::is_set(nsr_version.yfilter)
	|| ydk::is_set(nsr_nodeid.yfilter)
	|| ydk::is_set(nsr_peer_version.yfilter)
	|| ydk::is_set(nsr_peer_nodeid.yfilter)
	|| ydk::is_set(nsr_mtu.yfilter)
	|| ydk::is_set(nsr_nbr_qad_qid.yfilter)
	|| ydk::is_set(nsr_lsa_qad_qid.yfilter)
	|| ydk::is_set(nsr_nbr_qad_mdata_count.yfilter)
	|| ydk::is_set(nsr_lsa_qad_mdata_count.yfilter)
	|| ydk::is_set(nsr_nbr_init_sync_pend_count.yfilter)
	|| ydk::is_set(nsr_lsa_init_sync_pend_count.yfilter)
	|| ydk::is_set(nsr_nbr_seq_no.yfilter)
	|| ydk::is_set(nsr_intf_seq_no.yfilter)
	|| ydk::is_set(nsr_tmr_quant.yfilter)
	|| ydk::is_set(nsr_conn_to_active_attempts.yfilter)
	|| ydk::is_set(nsr_conn_to_active_fails.yfilter)
	|| ydk::is_set(nsr_conn_to_active_opens.yfilter)
	|| ydk::is_set(nsr_conn_to_active_closes.yfilter)
	|| ydk::is_set(nsr_conn_to_active_errors.yfilter)
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_operation())
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_rev.is_set || is_set(nsr_rev.yfilter)) leaf_name_data.push_back(nsr_rev.get_name_leafdata());
    if (nsr_fsm_state.is_set || is_set(nsr_fsm_state.yfilter)) leaf_name_data.push_back(nsr_fsm_state.get_name_leafdata());
    if (nsr_version.is_set || is_set(nsr_version.yfilter)) leaf_name_data.push_back(nsr_version.get_name_leafdata());
    if (nsr_nodeid.is_set || is_set(nsr_nodeid.yfilter)) leaf_name_data.push_back(nsr_nodeid.get_name_leafdata());
    if (nsr_peer_version.is_set || is_set(nsr_peer_version.yfilter)) leaf_name_data.push_back(nsr_peer_version.get_name_leafdata());
    if (nsr_peer_nodeid.is_set || is_set(nsr_peer_nodeid.yfilter)) leaf_name_data.push_back(nsr_peer_nodeid.get_name_leafdata());
    if (nsr_mtu.is_set || is_set(nsr_mtu.yfilter)) leaf_name_data.push_back(nsr_mtu.get_name_leafdata());
    if (nsr_nbr_qad_qid.is_set || is_set(nsr_nbr_qad_qid.yfilter)) leaf_name_data.push_back(nsr_nbr_qad_qid.get_name_leafdata());
    if (nsr_lsa_qad_qid.is_set || is_set(nsr_lsa_qad_qid.yfilter)) leaf_name_data.push_back(nsr_lsa_qad_qid.get_name_leafdata());
    if (nsr_nbr_qad_mdata_count.is_set || is_set(nsr_nbr_qad_mdata_count.yfilter)) leaf_name_data.push_back(nsr_nbr_qad_mdata_count.get_name_leafdata());
    if (nsr_lsa_qad_mdata_count.is_set || is_set(nsr_lsa_qad_mdata_count.yfilter)) leaf_name_data.push_back(nsr_lsa_qad_mdata_count.get_name_leafdata());
    if (nsr_nbr_init_sync_pend_count.is_set || is_set(nsr_nbr_init_sync_pend_count.yfilter)) leaf_name_data.push_back(nsr_nbr_init_sync_pend_count.get_name_leafdata());
    if (nsr_lsa_init_sync_pend_count.is_set || is_set(nsr_lsa_init_sync_pend_count.yfilter)) leaf_name_data.push_back(nsr_lsa_init_sync_pend_count.get_name_leafdata());
    if (nsr_nbr_seq_no.is_set || is_set(nsr_nbr_seq_no.yfilter)) leaf_name_data.push_back(nsr_nbr_seq_no.get_name_leafdata());
    if (nsr_intf_seq_no.is_set || is_set(nsr_intf_seq_no.yfilter)) leaf_name_data.push_back(nsr_intf_seq_no.get_name_leafdata());
    if (nsr_tmr_quant.is_set || is_set(nsr_tmr_quant.yfilter)) leaf_name_data.push_back(nsr_tmr_quant.get_name_leafdata());
    if (nsr_conn_to_active_attempts.is_set || is_set(nsr_conn_to_active_attempts.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_attempts.get_name_leafdata());
    if (nsr_conn_to_active_fails.is_set || is_set(nsr_conn_to_active_fails.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_fails.get_name_leafdata());
    if (nsr_conn_to_active_opens.is_set || is_set(nsr_conn_to_active_opens.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_opens.get_name_leafdata());
    if (nsr_conn_to_active_closes.is_set || is_set(nsr_conn_to_active_closes.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_closes.get_name_leafdata());
    if (nsr_conn_to_active_errors.is_set || is_set(nsr_conn_to_active_errors.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-thd-sched")
    {
        if(nsr_thd_sched == nullptr)
        {
            nsr_thd_sched = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched>();
        }
        return nsr_thd_sched;
    }

    if(child_yang_name == "nsr-rtr-thd-sched")
    {
        if(nsr_rtr_thd_sched == nullptr)
        {
            nsr_rtr_thd_sched = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched>();
        }
        return nsr_rtr_thd_sched;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nsr_thd_sched != nullptr)
    {
        children["nsr-thd-sched"] = nsr_thd_sched;
    }

    if(nsr_rtr_thd_sched != nullptr)
    {
        children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-rev")
    {
        nsr_rev = value;
        nsr_rev.value_namespace = name_space;
        nsr_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state = value;
        nsr_fsm_state.value_namespace = name_space;
        nsr_fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-version")
    {
        nsr_version = value;
        nsr_version.value_namespace = name_space;
        nsr_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nodeid")
    {
        nsr_nodeid = value;
        nsr_nodeid.value_namespace = name_space;
        nsr_nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version = value;
        nsr_peer_version.value_namespace = name_space;
        nsr_peer_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-peer-nodeid")
    {
        nsr_peer_nodeid = value;
        nsr_peer_nodeid.value_namespace = name_space;
        nsr_peer_nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu = value;
        nsr_mtu.value_namespace = name_space;
        nsr_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid = value;
        nsr_nbr_qad_qid.value_namespace = name_space;
        nsr_nbr_qad_qid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid = value;
        nsr_lsa_qad_qid.value_namespace = name_space;
        nsr_lsa_qad_qid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count = value;
        nsr_nbr_qad_mdata_count.value_namespace = name_space;
        nsr_nbr_qad_mdata_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count = value;
        nsr_lsa_qad_mdata_count.value_namespace = name_space;
        nsr_lsa_qad_mdata_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count = value;
        nsr_nbr_init_sync_pend_count.value_namespace = name_space;
        nsr_nbr_init_sync_pend_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count = value;
        nsr_lsa_init_sync_pend_count.value_namespace = name_space;
        nsr_lsa_init_sync_pend_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no = value;
        nsr_nbr_seq_no.value_namespace = name_space;
        nsr_nbr_seq_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no = value;
        nsr_intf_seq_no.value_namespace = name_space;
        nsr_intf_seq_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant = value;
        nsr_tmr_quant.value_namespace = name_space;
        nsr_tmr_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts = value;
        nsr_conn_to_active_attempts.value_namespace = name_space;
        nsr_conn_to_active_attempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails = value;
        nsr_conn_to_active_fails.value_namespace = name_space;
        nsr_conn_to_active_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens = value;
        nsr_conn_to_active_opens.value_namespace = name_space;
        nsr_conn_to_active_opens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes = value;
        nsr_conn_to_active_closes.value_namespace = name_space;
        nsr_conn_to_active_closes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors = value;
        nsr_conn_to_active_errors.value_namespace = name_space;
        nsr_conn_to_active_errors.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-rev")
    {
        nsr_rev.yfilter = yfilter;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state.yfilter = yfilter;
    }
    if(value_path == "nsr-version")
    {
        nsr_version.yfilter = yfilter;
    }
    if(value_path == "nsr-nodeid")
    {
        nsr_nodeid.yfilter = yfilter;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version.yfilter = yfilter;
    }
    if(value_path == "nsr-peer-nodeid")
    {
        nsr_peer_nodeid.yfilter = yfilter;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no.yfilter = yfilter;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no.yfilter = yfilter;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-thd-sched" || name == "nsr-rtr-thd-sched" || name == "nsr-rev" || name == "nsr-fsm-state" || name == "nsr-version" || name == "nsr-nodeid" || name == "nsr-peer-version" || name == "nsr-peer-nodeid" || name == "nsr-mtu" || name == "nsr-nbr-qad-qid" || name == "nsr-lsa-qad-qid" || name == "nsr-nbr-qad-mdata-count" || name == "nsr-lsa-qad-mdata-count" || name == "nsr-nbr-init-sync-pend-count" || name == "nsr-lsa-init-sync-pend-count" || name == "nsr-nbr-seq-no" || name == "nsr-intf-seq-no" || name == "nsr-tmr-quant" || name == "nsr-conn-to-active-attempts" || name == "nsr-conn-to-active-fails" || name == "nsr-conn-to-active-opens" || name == "nsr-conn-to-active-closes" || name == "nsr-conn-to-active-errors")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrThdSched()
    :
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"}
{

    yang_name = "nsr-thd-sched"; yang_parent_name = "issu-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::~NsrThdSched()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_pulse_quant.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_tx.is_set
	|| nsr_events_rx.is_set
	|| nsr_bad_pulses_rx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulses_tx.is_set
	|| nsr_pulse_tx_fails.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nsr_pulse_quant.yfilter)
	|| ydk::is_set(nsr_events_in_q.yfilter)
	|| ydk::is_set(nsr_events_tx.yfilter)
	|| ydk::is_set(nsr_events_rx.yfilter)
	|| ydk::is_set(nsr_bad_pulses_rx.yfilter)
	|| ydk::is_set(nsr_good_pulses_rx.yfilter)
	|| ydk::is_set(nsr_pulses_tx.yfilter)
	|| ydk::is_set(nsr_pulse_tx_fails.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-thd-sched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.yfilter)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.yfilter)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.yfilter)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.yfilter)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.yfilter)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.yfilter)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pri")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
        nsr_pulse_quant.value_namespace = name_space;
        nsr_pulse_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
        nsr_events_in_q.value_namespace = name_space;
        nsr_events_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
        nsr_events_tx.value_namespace = name_space;
        nsr_events_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
        nsr_events_rx.value_namespace = name_space;
        nsr_events_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
        nsr_bad_pulses_rx.value_namespace = name_space;
        nsr_bad_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
        nsr_good_pulses_rx.value_namespace = name_space;
        nsr_good_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
        nsr_pulses_tx.value_namespace = name_space;
        nsr_pulses_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
        nsr_pulse_tx_fails.value_namespace = name_space;
        nsr_pulse_tx_fails.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pri" || name == "nsr-pulse-quant" || name == "nsr-events-in-q" || name == "nsr-events-tx" || name == "nsr-events-rx" || name == "nsr-bad-pulses-rx" || name == "nsr-good-pulses-rx" || name == "nsr-pulses-tx" || name == "nsr-pulse-tx-fails")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"}
{

    yang_name = "nsr-pri"; yang_parent_name = "nsr-thd-sched"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::has_data() const
{
    return nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_sched_pri.yfilter)
	|| ydk::is_set(nsr_sched_quant.yfilter)
	|| ydk::is_set(nsr_sched_remain_quant.yfilter)
	|| ydk::is_set(nsr_sched_evs_in_q.yfilter)
	|| ydk::is_set(nsr_sched_max_evs.yfilter)
	|| ydk::is_set(nsr_sched_peak_q_len.yfilter)
	|| ydk::is_set(nsr_sched_evs_qd.yfilter)
	|| ydk::is_set(nsr_sched_enq_fails.yfilter)
	|| ydk::is_set(nsr_sched_evs_deqd.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.yfilter)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.yfilter)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.yfilter)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.yfilter)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.yfilter)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.yfilter)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.yfilter)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
        nsr_sched_pri.value_namespace = name_space;
        nsr_sched_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
        nsr_sched_quant.value_namespace = name_space;
        nsr_sched_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
        nsr_sched_remain_quant.value_namespace = name_space;
        nsr_sched_remain_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
        nsr_sched_evs_in_q.value_namespace = name_space;
        nsr_sched_evs_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
        nsr_sched_max_evs.value_namespace = name_space;
        nsr_sched_max_evs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
        nsr_sched_peak_q_len.value_namespace = name_space;
        nsr_sched_peak_q_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
        nsr_sched_evs_qd.value_namespace = name_space;
        nsr_sched_evs_qd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
        nsr_sched_enq_fails.value_namespace = name_space;
        nsr_sched_enq_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
        nsr_sched_evs_deqd.value_namespace = name_space;
        nsr_sched_evs_deqd.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrThdSched::NsrPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-sched-pri" || name == "nsr-sched-quant" || name == "nsr-sched-remain-quant" || name == "nsr-sched-evs-in-q" || name == "nsr-sched-max-evs" || name == "nsr-sched-peak-q-len" || name == "nsr-sched-evs-qd" || name == "nsr-sched-enq-fails" || name == "nsr-sched-evs-deqd")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrRtrThdSched()
    :
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"}
{

    yang_name = "nsr-rtr-thd-sched"; yang_parent_name = "issu-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::~NsrRtrThdSched()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_pulse_quant.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_tx.is_set
	|| nsr_events_rx.is_set
	|| nsr_bad_pulses_rx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulses_tx.is_set
	|| nsr_pulse_tx_fails.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nsr_pulse_quant.yfilter)
	|| ydk::is_set(nsr_events_in_q.yfilter)
	|| ydk::is_set(nsr_events_tx.yfilter)
	|| ydk::is_set(nsr_events_rx.yfilter)
	|| ydk::is_set(nsr_bad_pulses_rx.yfilter)
	|| ydk::is_set(nsr_good_pulses_rx.yfilter)
	|| ydk::is_set(nsr_pulses_tx.yfilter)
	|| ydk::is_set(nsr_pulse_tx_fails.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-rtr-thd-sched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.yfilter)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.yfilter)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.yfilter)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.yfilter)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.yfilter)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.yfilter)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pri")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
        nsr_pulse_quant.value_namespace = name_space;
        nsr_pulse_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
        nsr_events_in_q.value_namespace = name_space;
        nsr_events_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
        nsr_events_tx.value_namespace = name_space;
        nsr_events_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
        nsr_events_rx.value_namespace = name_space;
        nsr_events_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
        nsr_bad_pulses_rx.value_namespace = name_space;
        nsr_bad_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
        nsr_good_pulses_rx.value_namespace = name_space;
        nsr_good_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
        nsr_pulses_tx.value_namespace = name_space;
        nsr_pulses_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
        nsr_pulse_tx_fails.value_namespace = name_space;
        nsr_pulse_tx_fails.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pri" || name == "nsr-pulse-quant" || name == "nsr-events-in-q" || name == "nsr-events-tx" || name == "nsr-events-rx" || name == "nsr-bad-pulses-rx" || name == "nsr-good-pulses-rx" || name == "nsr-pulses-tx" || name == "nsr-pulse-tx-fails")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"}
{

    yang_name = "nsr-pri"; yang_parent_name = "nsr-rtr-thd-sched"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_data() const
{
    return nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_sched_pri.yfilter)
	|| ydk::is_set(nsr_sched_quant.yfilter)
	|| ydk::is_set(nsr_sched_remain_quant.yfilter)
	|| ydk::is_set(nsr_sched_evs_in_q.yfilter)
	|| ydk::is_set(nsr_sched_max_evs.yfilter)
	|| ydk::is_set(nsr_sched_peak_q_len.yfilter)
	|| ydk::is_set(nsr_sched_evs_qd.yfilter)
	|| ydk::is_set(nsr_sched_enq_fails.yfilter)
	|| ydk::is_set(nsr_sched_evs_deqd.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.yfilter)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.yfilter)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.yfilter)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.yfilter)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.yfilter)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.yfilter)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.yfilter)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
        nsr_sched_pri.value_namespace = name_space;
        nsr_sched_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
        nsr_sched_quant.value_namespace = name_space;
        nsr_sched_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
        nsr_sched_remain_quant.value_namespace = name_space;
        nsr_sched_remain_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
        nsr_sched_evs_in_q.value_namespace = name_space;
        nsr_sched_evs_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
        nsr_sched_max_evs.value_namespace = name_space;
        nsr_sched_max_evs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
        nsr_sched_peak_q_len.value_namespace = name_space;
        nsr_sched_peak_q_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
        nsr_sched_evs_qd.value_namespace = name_space;
        nsr_sched_evs_qd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
        nsr_sched_enq_fails.value_namespace = name_space;
        nsr_sched_enq_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
        nsr_sched_evs_deqd.value_namespace = name_space;
        nsr_sched_evs_deqd.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::IssuStats::NsrRtrThdSched::NsrPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-sched-pri" || name == "nsr-sched-quant" || name == "nsr-sched-remain-quant" || name == "nsr-sched-evs-in-q" || name == "nsr-sched-max-evs" || name == "nsr-sched-peak-q-len" || name == "nsr-sched-evs-qd" || name == "nsr-sched-enq-fails" || name == "nsr-sched-evs-deqd")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::RibThreadStats()
    :
    internalwq(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq>())
{
    internalwq->parent = this;

    yang_name = "rib-thread-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::~RibThreadStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::has_data() const
{
    for (std::size_t index=0; index<ribqueue.size(); index++)
    {
        if(ribqueue[index]->has_data())
            return true;
    }
    return (internalwq !=  nullptr && internalwq->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::has_operation() const
{
    for (std::size_t index=0; index<ribqueue.size(); index++)
    {
        if(ribqueue[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (internalwq !=  nullptr && internalwq->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-thread-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internalwq")
    {
        if(internalwq == nullptr)
        {
            internalwq = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq>();
        }
        return internalwq;
    }

    if(child_yang_name == "ribqueue")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue>();
        c->parent = this;
        ribqueue.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(internalwq != nullptr)
    {
        children["internalwq"] = internalwq;
    }

    count = 0;
    for (auto const & c : ribqueue)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internalwq" || name == "ribqueue")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::Internalwq()
    :
    wq_thread_active{YType::boolean, "wq-thread-active"},
    wq_dqtime{YType::uint64, "wq-dqtime"},
    wqe_qtime{YType::uint64, "wqe-qtime"},
    wq_len_cur{YType::int32, "wq-len-cur"},
    wq_len_max{YType::int32, "wq-len-max"},
    wq_total_queued{YType::uint32, "wq-total-queued"},
    wq_total_dequeued{YType::uint32, "wq-total-dequeued"},
    rib_version{YType::uint32, "rib-version"},
    rib_pkts_sent{YType::uint32, "rib-pkts-sent"},
    rib_signals{YType::uint32, "rib-signals"},
    rib_send_errs{YType::uint32, "rib-send-errs"},
    rib_queue_errs{YType::uint32, "rib-queue-errs"},
    rib_pfx_limit_errs{YType::uint32, "rib-pfx-limit-errs"},
    rib_dequeue_errs{YType::uint32, "rib-dequeue-errs"},
    rib_empty_batches{YType::uint32, "rib-empty-batches"},
    rib_drop_before{YType::uint32, "rib-drop-before"},
    rib_drop_after{YType::uint32, "rib-drop-after"},
    rib_drop_conn{YType::uint32, "rib-drop-conn"},
    rib_table_not_created{YType::uint32, "rib-table-not-created"},
    priority_level{YType::str, "priority-level"},
    rib_base_clock{YType::uint64, "rib-base-clock"}
    	,
    rib_base_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime>())
{
    rib_base_time->parent = this;

    yang_name = "internalwq"; yang_parent_name = "rib-thread-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::~Internalwq()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::has_data() const
{
    return wq_thread_active.is_set
	|| wq_dqtime.is_set
	|| wqe_qtime.is_set
	|| wq_len_cur.is_set
	|| wq_len_max.is_set
	|| wq_total_queued.is_set
	|| wq_total_dequeued.is_set
	|| rib_version.is_set
	|| rib_pkts_sent.is_set
	|| rib_signals.is_set
	|| rib_send_errs.is_set
	|| rib_queue_errs.is_set
	|| rib_pfx_limit_errs.is_set
	|| rib_dequeue_errs.is_set
	|| rib_empty_batches.is_set
	|| rib_drop_before.is_set
	|| rib_drop_after.is_set
	|| rib_drop_conn.is_set
	|| rib_table_not_created.is_set
	|| priority_level.is_set
	|| rib_base_clock.is_set
	|| (rib_base_time !=  nullptr && rib_base_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wq_thread_active.yfilter)
	|| ydk::is_set(wq_dqtime.yfilter)
	|| ydk::is_set(wqe_qtime.yfilter)
	|| ydk::is_set(wq_len_cur.yfilter)
	|| ydk::is_set(wq_len_max.yfilter)
	|| ydk::is_set(wq_total_queued.yfilter)
	|| ydk::is_set(wq_total_dequeued.yfilter)
	|| ydk::is_set(rib_version.yfilter)
	|| ydk::is_set(rib_pkts_sent.yfilter)
	|| ydk::is_set(rib_signals.yfilter)
	|| ydk::is_set(rib_send_errs.yfilter)
	|| ydk::is_set(rib_queue_errs.yfilter)
	|| ydk::is_set(rib_pfx_limit_errs.yfilter)
	|| ydk::is_set(rib_dequeue_errs.yfilter)
	|| ydk::is_set(rib_empty_batches.yfilter)
	|| ydk::is_set(rib_drop_before.yfilter)
	|| ydk::is_set(rib_drop_after.yfilter)
	|| ydk::is_set(rib_drop_conn.yfilter)
	|| ydk::is_set(rib_table_not_created.yfilter)
	|| ydk::is_set(priority_level.yfilter)
	|| ydk::is_set(rib_base_clock.yfilter)
	|| (rib_base_time !=  nullptr && rib_base_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internalwq";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wq_thread_active.is_set || is_set(wq_thread_active.yfilter)) leaf_name_data.push_back(wq_thread_active.get_name_leafdata());
    if (wq_dqtime.is_set || is_set(wq_dqtime.yfilter)) leaf_name_data.push_back(wq_dqtime.get_name_leafdata());
    if (wqe_qtime.is_set || is_set(wqe_qtime.yfilter)) leaf_name_data.push_back(wqe_qtime.get_name_leafdata());
    if (wq_len_cur.is_set || is_set(wq_len_cur.yfilter)) leaf_name_data.push_back(wq_len_cur.get_name_leafdata());
    if (wq_len_max.is_set || is_set(wq_len_max.yfilter)) leaf_name_data.push_back(wq_len_max.get_name_leafdata());
    if (wq_total_queued.is_set || is_set(wq_total_queued.yfilter)) leaf_name_data.push_back(wq_total_queued.get_name_leafdata());
    if (wq_total_dequeued.is_set || is_set(wq_total_dequeued.yfilter)) leaf_name_data.push_back(wq_total_dequeued.get_name_leafdata());
    if (rib_version.is_set || is_set(rib_version.yfilter)) leaf_name_data.push_back(rib_version.get_name_leafdata());
    if (rib_pkts_sent.is_set || is_set(rib_pkts_sent.yfilter)) leaf_name_data.push_back(rib_pkts_sent.get_name_leafdata());
    if (rib_signals.is_set || is_set(rib_signals.yfilter)) leaf_name_data.push_back(rib_signals.get_name_leafdata());
    if (rib_send_errs.is_set || is_set(rib_send_errs.yfilter)) leaf_name_data.push_back(rib_send_errs.get_name_leafdata());
    if (rib_queue_errs.is_set || is_set(rib_queue_errs.yfilter)) leaf_name_data.push_back(rib_queue_errs.get_name_leafdata());
    if (rib_pfx_limit_errs.is_set || is_set(rib_pfx_limit_errs.yfilter)) leaf_name_data.push_back(rib_pfx_limit_errs.get_name_leafdata());
    if (rib_dequeue_errs.is_set || is_set(rib_dequeue_errs.yfilter)) leaf_name_data.push_back(rib_dequeue_errs.get_name_leafdata());
    if (rib_empty_batches.is_set || is_set(rib_empty_batches.yfilter)) leaf_name_data.push_back(rib_empty_batches.get_name_leafdata());
    if (rib_drop_before.is_set || is_set(rib_drop_before.yfilter)) leaf_name_data.push_back(rib_drop_before.get_name_leafdata());
    if (rib_drop_after.is_set || is_set(rib_drop_after.yfilter)) leaf_name_data.push_back(rib_drop_after.get_name_leafdata());
    if (rib_drop_conn.is_set || is_set(rib_drop_conn.yfilter)) leaf_name_data.push_back(rib_drop_conn.get_name_leafdata());
    if (rib_table_not_created.is_set || is_set(rib_table_not_created.yfilter)) leaf_name_data.push_back(rib_table_not_created.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (rib_base_clock.is_set || is_set(rib_base_clock.yfilter)) leaf_name_data.push_back(rib_base_clock.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rib-base-time")
    {
        if(rib_base_time == nullptr)
        {
            rib_base_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime>();
        }
        return rib_base_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rib_base_time != nullptr)
    {
        children["rib-base-time"] = rib_base_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wq-thread-active")
    {
        wq_thread_active = value;
        wq_thread_active.value_namespace = name_space;
        wq_thread_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime = value;
        wq_dqtime.value_namespace = name_space;
        wq_dqtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime = value;
        wqe_qtime.value_namespace = name_space;
        wqe_qtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur = value;
        wq_len_cur.value_namespace = name_space;
        wq_len_cur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max = value;
        wq_len_max.value_namespace = name_space;
        wq_len_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued = value;
        wq_total_queued.value_namespace = name_space;
        wq_total_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued = value;
        wq_total_dequeued.value_namespace = name_space;
        wq_total_dequeued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-version")
    {
        rib_version = value;
        rib_version.value_namespace = name_space;
        rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent = value;
        rib_pkts_sent.value_namespace = name_space;
        rib_pkts_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-signals")
    {
        rib_signals = value;
        rib_signals.value_namespace = name_space;
        rib_signals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs = value;
        rib_send_errs.value_namespace = name_space;
        rib_send_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs = value;
        rib_queue_errs.value_namespace = name_space;
        rib_queue_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs = value;
        rib_pfx_limit_errs.value_namespace = name_space;
        rib_pfx_limit_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs = value;
        rib_dequeue_errs.value_namespace = name_space;
        rib_dequeue_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches = value;
        rib_empty_batches.value_namespace = name_space;
        rib_empty_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before = value;
        rib_drop_before.value_namespace = name_space;
        rib_drop_before.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after = value;
        rib_drop_after.value_namespace = name_space;
        rib_drop_after.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn = value;
        rib_drop_conn.value_namespace = name_space;
        rib_drop_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created = value;
        rib_table_not_created.value_namespace = name_space;
        rib_table_not_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock = value;
        rib_base_clock.value_namespace = name_space;
        rib_base_clock.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wq-thread-active")
    {
        wq_thread_active.yfilter = yfilter;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime.yfilter = yfilter;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime.yfilter = yfilter;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur.yfilter = yfilter;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max.yfilter = yfilter;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued.yfilter = yfilter;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued.yfilter = yfilter;
    }
    if(value_path == "rib-version")
    {
        rib_version.yfilter = yfilter;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent.yfilter = yfilter;
    }
    if(value_path == "rib-signals")
    {
        rib_signals.yfilter = yfilter;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs.yfilter = yfilter;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs.yfilter = yfilter;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs.yfilter = yfilter;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs.yfilter = yfilter;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches.yfilter = yfilter;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before.yfilter = yfilter;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after.yfilter = yfilter;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn.yfilter = yfilter;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created.yfilter = yfilter;
    }
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rib-base-time" || name == "wq-thread-active" || name == "wq-dqtime" || name == "wqe-qtime" || name == "wq-len-cur" || name == "wq-len-max" || name == "wq-total-queued" || name == "wq-total-dequeued" || name == "rib-version" || name == "rib-pkts-sent" || name == "rib-signals" || name == "rib-send-errs" || name == "rib-queue-errs" || name == "rib-pfx-limit-errs" || name == "rib-dequeue-errs" || name == "rib-empty-batches" || name == "rib-drop-before" || name == "rib-drop-after" || name == "rib-drop-conn" || name == "rib-table-not-created" || name == "priority-level" || name == "rib-base-clock")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::RibBaseTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "rib-base-time"; yang_parent_name = "internalwq"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::~RibBaseTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-base-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Internalwq::RibBaseTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::Ribqueue()
    :
    wq_thread_active{YType::boolean, "wq-thread-active"},
    wq_dqtime{YType::uint64, "wq-dqtime"},
    wqe_qtime{YType::uint64, "wqe-qtime"},
    wq_len_cur{YType::int32, "wq-len-cur"},
    wq_len_max{YType::int32, "wq-len-max"},
    wq_total_queued{YType::uint32, "wq-total-queued"},
    wq_total_dequeued{YType::uint32, "wq-total-dequeued"},
    rib_version{YType::uint32, "rib-version"},
    rib_pkts_sent{YType::uint32, "rib-pkts-sent"},
    rib_signals{YType::uint32, "rib-signals"},
    rib_send_errs{YType::uint32, "rib-send-errs"},
    rib_queue_errs{YType::uint32, "rib-queue-errs"},
    rib_pfx_limit_errs{YType::uint32, "rib-pfx-limit-errs"},
    rib_dequeue_errs{YType::uint32, "rib-dequeue-errs"},
    rib_empty_batches{YType::uint32, "rib-empty-batches"},
    rib_drop_before{YType::uint32, "rib-drop-before"},
    rib_drop_after{YType::uint32, "rib-drop-after"},
    rib_drop_conn{YType::uint32, "rib-drop-conn"},
    rib_table_not_created{YType::uint32, "rib-table-not-created"},
    priority_level{YType::str, "priority-level"},
    rib_base_clock{YType::uint64, "rib-base-clock"}
    	,
    rib_base_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime>())
{
    rib_base_time->parent = this;

    yang_name = "ribqueue"; yang_parent_name = "rib-thread-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::~Ribqueue()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::has_data() const
{
    return wq_thread_active.is_set
	|| wq_dqtime.is_set
	|| wqe_qtime.is_set
	|| wq_len_cur.is_set
	|| wq_len_max.is_set
	|| wq_total_queued.is_set
	|| wq_total_dequeued.is_set
	|| rib_version.is_set
	|| rib_pkts_sent.is_set
	|| rib_signals.is_set
	|| rib_send_errs.is_set
	|| rib_queue_errs.is_set
	|| rib_pfx_limit_errs.is_set
	|| rib_dequeue_errs.is_set
	|| rib_empty_batches.is_set
	|| rib_drop_before.is_set
	|| rib_drop_after.is_set
	|| rib_drop_conn.is_set
	|| rib_table_not_created.is_set
	|| priority_level.is_set
	|| rib_base_clock.is_set
	|| (rib_base_time !=  nullptr && rib_base_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(wq_thread_active.yfilter)
	|| ydk::is_set(wq_dqtime.yfilter)
	|| ydk::is_set(wqe_qtime.yfilter)
	|| ydk::is_set(wq_len_cur.yfilter)
	|| ydk::is_set(wq_len_max.yfilter)
	|| ydk::is_set(wq_total_queued.yfilter)
	|| ydk::is_set(wq_total_dequeued.yfilter)
	|| ydk::is_set(rib_version.yfilter)
	|| ydk::is_set(rib_pkts_sent.yfilter)
	|| ydk::is_set(rib_signals.yfilter)
	|| ydk::is_set(rib_send_errs.yfilter)
	|| ydk::is_set(rib_queue_errs.yfilter)
	|| ydk::is_set(rib_pfx_limit_errs.yfilter)
	|| ydk::is_set(rib_dequeue_errs.yfilter)
	|| ydk::is_set(rib_empty_batches.yfilter)
	|| ydk::is_set(rib_drop_before.yfilter)
	|| ydk::is_set(rib_drop_after.yfilter)
	|| ydk::is_set(rib_drop_conn.yfilter)
	|| ydk::is_set(rib_table_not_created.yfilter)
	|| ydk::is_set(priority_level.yfilter)
	|| ydk::is_set(rib_base_clock.yfilter)
	|| (rib_base_time !=  nullptr && rib_base_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribqueue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wq_thread_active.is_set || is_set(wq_thread_active.yfilter)) leaf_name_data.push_back(wq_thread_active.get_name_leafdata());
    if (wq_dqtime.is_set || is_set(wq_dqtime.yfilter)) leaf_name_data.push_back(wq_dqtime.get_name_leafdata());
    if (wqe_qtime.is_set || is_set(wqe_qtime.yfilter)) leaf_name_data.push_back(wqe_qtime.get_name_leafdata());
    if (wq_len_cur.is_set || is_set(wq_len_cur.yfilter)) leaf_name_data.push_back(wq_len_cur.get_name_leafdata());
    if (wq_len_max.is_set || is_set(wq_len_max.yfilter)) leaf_name_data.push_back(wq_len_max.get_name_leafdata());
    if (wq_total_queued.is_set || is_set(wq_total_queued.yfilter)) leaf_name_data.push_back(wq_total_queued.get_name_leafdata());
    if (wq_total_dequeued.is_set || is_set(wq_total_dequeued.yfilter)) leaf_name_data.push_back(wq_total_dequeued.get_name_leafdata());
    if (rib_version.is_set || is_set(rib_version.yfilter)) leaf_name_data.push_back(rib_version.get_name_leafdata());
    if (rib_pkts_sent.is_set || is_set(rib_pkts_sent.yfilter)) leaf_name_data.push_back(rib_pkts_sent.get_name_leafdata());
    if (rib_signals.is_set || is_set(rib_signals.yfilter)) leaf_name_data.push_back(rib_signals.get_name_leafdata());
    if (rib_send_errs.is_set || is_set(rib_send_errs.yfilter)) leaf_name_data.push_back(rib_send_errs.get_name_leafdata());
    if (rib_queue_errs.is_set || is_set(rib_queue_errs.yfilter)) leaf_name_data.push_back(rib_queue_errs.get_name_leafdata());
    if (rib_pfx_limit_errs.is_set || is_set(rib_pfx_limit_errs.yfilter)) leaf_name_data.push_back(rib_pfx_limit_errs.get_name_leafdata());
    if (rib_dequeue_errs.is_set || is_set(rib_dequeue_errs.yfilter)) leaf_name_data.push_back(rib_dequeue_errs.get_name_leafdata());
    if (rib_empty_batches.is_set || is_set(rib_empty_batches.yfilter)) leaf_name_data.push_back(rib_empty_batches.get_name_leafdata());
    if (rib_drop_before.is_set || is_set(rib_drop_before.yfilter)) leaf_name_data.push_back(rib_drop_before.get_name_leafdata());
    if (rib_drop_after.is_set || is_set(rib_drop_after.yfilter)) leaf_name_data.push_back(rib_drop_after.get_name_leafdata());
    if (rib_drop_conn.is_set || is_set(rib_drop_conn.yfilter)) leaf_name_data.push_back(rib_drop_conn.get_name_leafdata());
    if (rib_table_not_created.is_set || is_set(rib_table_not_created.yfilter)) leaf_name_data.push_back(rib_table_not_created.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.yfilter)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (rib_base_clock.is_set || is_set(rib_base_clock.yfilter)) leaf_name_data.push_back(rib_base_clock.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rib-base-time")
    {
        if(rib_base_time == nullptr)
        {
            rib_base_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime>();
        }
        return rib_base_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rib_base_time != nullptr)
    {
        children["rib-base-time"] = rib_base_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "wq-thread-active")
    {
        wq_thread_active = value;
        wq_thread_active.value_namespace = name_space;
        wq_thread_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime = value;
        wq_dqtime.value_namespace = name_space;
        wq_dqtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime = value;
        wqe_qtime.value_namespace = name_space;
        wqe_qtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur = value;
        wq_len_cur.value_namespace = name_space;
        wq_len_cur.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max = value;
        wq_len_max.value_namespace = name_space;
        wq_len_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued = value;
        wq_total_queued.value_namespace = name_space;
        wq_total_queued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued = value;
        wq_total_dequeued.value_namespace = name_space;
        wq_total_dequeued.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-version")
    {
        rib_version = value;
        rib_version.value_namespace = name_space;
        rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent = value;
        rib_pkts_sent.value_namespace = name_space;
        rib_pkts_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-signals")
    {
        rib_signals = value;
        rib_signals.value_namespace = name_space;
        rib_signals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs = value;
        rib_send_errs.value_namespace = name_space;
        rib_send_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs = value;
        rib_queue_errs.value_namespace = name_space;
        rib_queue_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs = value;
        rib_pfx_limit_errs.value_namespace = name_space;
        rib_pfx_limit_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs = value;
        rib_dequeue_errs.value_namespace = name_space;
        rib_dequeue_errs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches = value;
        rib_empty_batches.value_namespace = name_space;
        rib_empty_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before = value;
        rib_drop_before.value_namespace = name_space;
        rib_drop_before.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after = value;
        rib_drop_after.value_namespace = name_space;
        rib_drop_after.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn = value;
        rib_drop_conn.value_namespace = name_space;
        rib_drop_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created = value;
        rib_table_not_created.value_namespace = name_space;
        rib_table_not_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
        priority_level.value_namespace = name_space;
        priority_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock = value;
        rib_base_clock.value_namespace = name_space;
        rib_base_clock.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "wq-thread-active")
    {
        wq_thread_active.yfilter = yfilter;
    }
    if(value_path == "wq-dqtime")
    {
        wq_dqtime.yfilter = yfilter;
    }
    if(value_path == "wqe-qtime")
    {
        wqe_qtime.yfilter = yfilter;
    }
    if(value_path == "wq-len-cur")
    {
        wq_len_cur.yfilter = yfilter;
    }
    if(value_path == "wq-len-max")
    {
        wq_len_max.yfilter = yfilter;
    }
    if(value_path == "wq-total-queued")
    {
        wq_total_queued.yfilter = yfilter;
    }
    if(value_path == "wq-total-dequeued")
    {
        wq_total_dequeued.yfilter = yfilter;
    }
    if(value_path == "rib-version")
    {
        rib_version.yfilter = yfilter;
    }
    if(value_path == "rib-pkts-sent")
    {
        rib_pkts_sent.yfilter = yfilter;
    }
    if(value_path == "rib-signals")
    {
        rib_signals.yfilter = yfilter;
    }
    if(value_path == "rib-send-errs")
    {
        rib_send_errs.yfilter = yfilter;
    }
    if(value_path == "rib-queue-errs")
    {
        rib_queue_errs.yfilter = yfilter;
    }
    if(value_path == "rib-pfx-limit-errs")
    {
        rib_pfx_limit_errs.yfilter = yfilter;
    }
    if(value_path == "rib-dequeue-errs")
    {
        rib_dequeue_errs.yfilter = yfilter;
    }
    if(value_path == "rib-empty-batches")
    {
        rib_empty_batches.yfilter = yfilter;
    }
    if(value_path == "rib-drop-before")
    {
        rib_drop_before.yfilter = yfilter;
    }
    if(value_path == "rib-drop-after")
    {
        rib_drop_after.yfilter = yfilter;
    }
    if(value_path == "rib-drop-conn")
    {
        rib_drop_conn.yfilter = yfilter;
    }
    if(value_path == "rib-table-not-created")
    {
        rib_table_not_created.yfilter = yfilter;
    }
    if(value_path == "priority-level")
    {
        priority_level.yfilter = yfilter;
    }
    if(value_path == "rib-base-clock")
    {
        rib_base_clock.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rib-base-time" || name == "wq-thread-active" || name == "wq-dqtime" || name == "wqe-qtime" || name == "wq-len-cur" || name == "wq-len-max" || name == "wq-total-queued" || name == "wq-total-dequeued" || name == "rib-version" || name == "rib-pkts-sent" || name == "rib-signals" || name == "rib-send-errs" || name == "rib-queue-errs" || name == "rib-pfx-limit-errs" || name == "rib-dequeue-errs" || name == "rib-empty-batches" || name == "rib-drop-before" || name == "rib-drop-after" || name == "rib-drop-conn" || name == "rib-table-not-created" || name == "priority-level" || name == "rib-base-clock")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::RibBaseTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "rib-base-time"; yang_parent_name = "ribqueue"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::~RibBaseTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-base-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RibThreadStats::Ribqueue::RibBaseTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NsrPlStats()
{

    yang_name = "nsr-pl-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::~NsrPlStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::has_data() const
{
    for (std::size_t index=0; index<ncd_pri.size(); index++)
    {
        if(ncd_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::has_operation() const
{
    for (std::size_t index=0; index<ncd_pri.size(); index++)
    {
        if(ncd_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ncd-pri")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri>();
        c->parent = this;
        ncd_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ncd_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ncd-pri")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NcdPri()
{

    yang_name = "ncd-pri"; yang_parent_name = "nsr-pl-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::~NcdPri()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::has_data() const
{
    for (std::size_t index=0; index<num_sent.size(); index++)
    {
        if(num_sent[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_recv.size(); index++)
    {
        if(num_recv[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::has_operation() const
{
    for (std::size_t index=0; index<num_sent.size(); index++)
    {
        if(num_sent[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_recv.size(); index++)
    {
        if(num_recv[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_sent_drop.size(); index++)
    {
        if(num_sent_drop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<num_recv_drop.size(); index++)
    {
        if(num_recv_drop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncd-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "num-sent")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent>();
        c->parent = this;
        num_sent.push_back(c);
        return c;
    }

    if(child_yang_name == "num-recv")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv>();
        c->parent = this;
        num_recv.push_back(c);
        return c;
    }

    if(child_yang_name == "num-sent-drop")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop>();
        c->parent = this;
        num_sent_drop.push_back(c);
        return c;
    }

    if(child_yang_name == "num-recv-drop")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop>();
        c->parent = this;
        num_recv_drop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : num_sent)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : num_recv)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : num_sent_drop)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : num_recv_drop)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-sent" || name == "num-recv" || name == "num-sent-drop" || name == "num-recv-drop")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::NumSent()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "num-sent"; yang_parent_name = "ncd-pri"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::~NumSent()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::NumRecv()
    :
    entry{YType::uint64, "entry"}
{

    yang_name = "num-recv"; yang_parent_name = "ncd-pri"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::~NumRecv()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-recv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NumSentDrop()
{

    yang_name = "num-sent-drop"; yang_parent_name = "ncd-pri"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::~NumSentDrop()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_data() const
{
    for (std::size_t index=0; index<nsr_pl_send_drop_array.size(); index++)
    {
        if(nsr_pl_send_drop_array[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_operation() const
{
    for (std::size_t index=0; index<nsr_pl_send_drop_array.size(); index++)
    {
        if(nsr_pl_send_drop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-sent-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pl-send-drop-array")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray>();
        c->parent = this;
        nsr_pl_send_drop_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nsr_pl_send_drop_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pl-send-drop-array")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::NsrPlSendDropArray()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "nsr-pl-send-drop-array"; yang_parent_name = "num-sent-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::~NsrPlSendDropArray()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-send-drop-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumSentDrop::NsrPlSendDropArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NumRecvDrop()
{

    yang_name = "num-recv-drop"; yang_parent_name = "ncd-pri"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::~NumRecvDrop()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_data() const
{
    for (std::size_t index=0; index<nsr_pl_recv_drop_array.size(); index++)
    {
        if(nsr_pl_recv_drop_array[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_operation() const
{
    for (std::size_t index=0; index<nsr_pl_recv_drop_array.size(); index++)
    {
        if(nsr_pl_recv_drop_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-recv-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pl-recv-drop-array")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray>();
        c->parent = this;
        nsr_pl_recv_drop_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nsr_pl_recv_drop_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pl-recv-drop-array")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::NsrPlRecvDropArray()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "nsr-pl-recv-drop-array"; yang_parent_name = "num-recv-drop"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::~NsrPlRecvDropArray()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pl-recv-drop-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrPlStats::NcdPri::NumRecvDrop::NsrPlRecvDropArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrStats()
    :
    nsr_rev{YType::int32, "nsr-rev"},
    nsr_fsm_state{YType::int32, "nsr-fsm-state"},
    nsr_version{YType::uint32, "nsr-version"},
    nsr_nodeid{YType::uint32, "nsr-nodeid"},
    nsr_peer_version{YType::uint32, "nsr-peer-version"},
    nsr_peer_nodeid{YType::uint32, "nsr-peer-nodeid"},
    nsr_mtu{YType::uint32, "nsr-mtu"},
    nsr_nbr_qad_qid{YType::uint32, "nsr-nbr-qad-qid"},
    nsr_lsa_qad_qid{YType::uint32, "nsr-lsa-qad-qid"},
    nsr_nbr_qad_mdata_count{YType::uint32, "nsr-nbr-qad-mdata-count"},
    nsr_lsa_qad_mdata_count{YType::uint32, "nsr-lsa-qad-mdata-count"},
    nsr_nbr_init_sync_pend_count{YType::int32, "nsr-nbr-init-sync-pend-count"},
    nsr_lsa_init_sync_pend_count{YType::int32, "nsr-lsa-init-sync-pend-count"},
    nsr_nbr_seq_no{YType::uint32, "nsr-nbr-seq-no"},
    nsr_intf_seq_no{YType::uint32, "nsr-intf-seq-no"},
    nsr_tmr_quant{YType::int32, "nsr-tmr-quant"},
    nsr_conn_to_active_attempts{YType::uint64, "nsr-conn-to-active-attempts"},
    nsr_conn_to_active_fails{YType::uint64, "nsr-conn-to-active-fails"},
    nsr_conn_to_active_opens{YType::uint64, "nsr-conn-to-active-opens"},
    nsr_conn_to_active_closes{YType::uint64, "nsr-conn-to-active-closes"},
    nsr_conn_to_active_errors{YType::uint64, "nsr-conn-to-active-errors"}
    	,
    nsr_thd_sched(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched>())
	,nsr_rtr_thd_sched(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched>())
{
    nsr_thd_sched->parent = this;
    nsr_rtr_thd_sched->parent = this;

    yang_name = "nsr-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::~NsrStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::has_data() const
{
    return nsr_rev.is_set
	|| nsr_fsm_state.is_set
	|| nsr_version.is_set
	|| nsr_nodeid.is_set
	|| nsr_peer_version.is_set
	|| nsr_peer_nodeid.is_set
	|| nsr_mtu.is_set
	|| nsr_nbr_qad_qid.is_set
	|| nsr_lsa_qad_qid.is_set
	|| nsr_nbr_qad_mdata_count.is_set
	|| nsr_lsa_qad_mdata_count.is_set
	|| nsr_nbr_init_sync_pend_count.is_set
	|| nsr_lsa_init_sync_pend_count.is_set
	|| nsr_nbr_seq_no.is_set
	|| nsr_intf_seq_no.is_set
	|| nsr_tmr_quant.is_set
	|| nsr_conn_to_active_attempts.is_set
	|| nsr_conn_to_active_fails.is_set
	|| nsr_conn_to_active_opens.is_set
	|| nsr_conn_to_active_closes.is_set
	|| nsr_conn_to_active_errors.is_set
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_data())
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_rev.yfilter)
	|| ydk::is_set(nsr_fsm_state.yfilter)
	|| ydk::is_set(nsr_version.yfilter)
	|| ydk::is_set(nsr_nodeid.yfilter)
	|| ydk::is_set(nsr_peer_version.yfilter)
	|| ydk::is_set(nsr_peer_nodeid.yfilter)
	|| ydk::is_set(nsr_mtu.yfilter)
	|| ydk::is_set(nsr_nbr_qad_qid.yfilter)
	|| ydk::is_set(nsr_lsa_qad_qid.yfilter)
	|| ydk::is_set(nsr_nbr_qad_mdata_count.yfilter)
	|| ydk::is_set(nsr_lsa_qad_mdata_count.yfilter)
	|| ydk::is_set(nsr_nbr_init_sync_pend_count.yfilter)
	|| ydk::is_set(nsr_lsa_init_sync_pend_count.yfilter)
	|| ydk::is_set(nsr_nbr_seq_no.yfilter)
	|| ydk::is_set(nsr_intf_seq_no.yfilter)
	|| ydk::is_set(nsr_tmr_quant.yfilter)
	|| ydk::is_set(nsr_conn_to_active_attempts.yfilter)
	|| ydk::is_set(nsr_conn_to_active_fails.yfilter)
	|| ydk::is_set(nsr_conn_to_active_opens.yfilter)
	|| ydk::is_set(nsr_conn_to_active_closes.yfilter)
	|| ydk::is_set(nsr_conn_to_active_errors.yfilter)
	|| (nsr_thd_sched !=  nullptr && nsr_thd_sched->has_operation())
	|| (nsr_rtr_thd_sched !=  nullptr && nsr_rtr_thd_sched->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_rev.is_set || is_set(nsr_rev.yfilter)) leaf_name_data.push_back(nsr_rev.get_name_leafdata());
    if (nsr_fsm_state.is_set || is_set(nsr_fsm_state.yfilter)) leaf_name_data.push_back(nsr_fsm_state.get_name_leafdata());
    if (nsr_version.is_set || is_set(nsr_version.yfilter)) leaf_name_data.push_back(nsr_version.get_name_leafdata());
    if (nsr_nodeid.is_set || is_set(nsr_nodeid.yfilter)) leaf_name_data.push_back(nsr_nodeid.get_name_leafdata());
    if (nsr_peer_version.is_set || is_set(nsr_peer_version.yfilter)) leaf_name_data.push_back(nsr_peer_version.get_name_leafdata());
    if (nsr_peer_nodeid.is_set || is_set(nsr_peer_nodeid.yfilter)) leaf_name_data.push_back(nsr_peer_nodeid.get_name_leafdata());
    if (nsr_mtu.is_set || is_set(nsr_mtu.yfilter)) leaf_name_data.push_back(nsr_mtu.get_name_leafdata());
    if (nsr_nbr_qad_qid.is_set || is_set(nsr_nbr_qad_qid.yfilter)) leaf_name_data.push_back(nsr_nbr_qad_qid.get_name_leafdata());
    if (nsr_lsa_qad_qid.is_set || is_set(nsr_lsa_qad_qid.yfilter)) leaf_name_data.push_back(nsr_lsa_qad_qid.get_name_leafdata());
    if (nsr_nbr_qad_mdata_count.is_set || is_set(nsr_nbr_qad_mdata_count.yfilter)) leaf_name_data.push_back(nsr_nbr_qad_mdata_count.get_name_leafdata());
    if (nsr_lsa_qad_mdata_count.is_set || is_set(nsr_lsa_qad_mdata_count.yfilter)) leaf_name_data.push_back(nsr_lsa_qad_mdata_count.get_name_leafdata());
    if (nsr_nbr_init_sync_pend_count.is_set || is_set(nsr_nbr_init_sync_pend_count.yfilter)) leaf_name_data.push_back(nsr_nbr_init_sync_pend_count.get_name_leafdata());
    if (nsr_lsa_init_sync_pend_count.is_set || is_set(nsr_lsa_init_sync_pend_count.yfilter)) leaf_name_data.push_back(nsr_lsa_init_sync_pend_count.get_name_leafdata());
    if (nsr_nbr_seq_no.is_set || is_set(nsr_nbr_seq_no.yfilter)) leaf_name_data.push_back(nsr_nbr_seq_no.get_name_leafdata());
    if (nsr_intf_seq_no.is_set || is_set(nsr_intf_seq_no.yfilter)) leaf_name_data.push_back(nsr_intf_seq_no.get_name_leafdata());
    if (nsr_tmr_quant.is_set || is_set(nsr_tmr_quant.yfilter)) leaf_name_data.push_back(nsr_tmr_quant.get_name_leafdata());
    if (nsr_conn_to_active_attempts.is_set || is_set(nsr_conn_to_active_attempts.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_attempts.get_name_leafdata());
    if (nsr_conn_to_active_fails.is_set || is_set(nsr_conn_to_active_fails.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_fails.get_name_leafdata());
    if (nsr_conn_to_active_opens.is_set || is_set(nsr_conn_to_active_opens.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_opens.get_name_leafdata());
    if (nsr_conn_to_active_closes.is_set || is_set(nsr_conn_to_active_closes.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_closes.get_name_leafdata());
    if (nsr_conn_to_active_errors.is_set || is_set(nsr_conn_to_active_errors.yfilter)) leaf_name_data.push_back(nsr_conn_to_active_errors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-thd-sched")
    {
        if(nsr_thd_sched == nullptr)
        {
            nsr_thd_sched = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched>();
        }
        return nsr_thd_sched;
    }

    if(child_yang_name == "nsr-rtr-thd-sched")
    {
        if(nsr_rtr_thd_sched == nullptr)
        {
            nsr_rtr_thd_sched = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched>();
        }
        return nsr_rtr_thd_sched;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nsr_thd_sched != nullptr)
    {
        children["nsr-thd-sched"] = nsr_thd_sched;
    }

    if(nsr_rtr_thd_sched != nullptr)
    {
        children["nsr-rtr-thd-sched"] = nsr_rtr_thd_sched;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-rev")
    {
        nsr_rev = value;
        nsr_rev.value_namespace = name_space;
        nsr_rev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state = value;
        nsr_fsm_state.value_namespace = name_space;
        nsr_fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-version")
    {
        nsr_version = value;
        nsr_version.value_namespace = name_space;
        nsr_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nodeid")
    {
        nsr_nodeid = value;
        nsr_nodeid.value_namespace = name_space;
        nsr_nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version = value;
        nsr_peer_version.value_namespace = name_space;
        nsr_peer_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-peer-nodeid")
    {
        nsr_peer_nodeid = value;
        nsr_peer_nodeid.value_namespace = name_space;
        nsr_peer_nodeid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu = value;
        nsr_mtu.value_namespace = name_space;
        nsr_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid = value;
        nsr_nbr_qad_qid.value_namespace = name_space;
        nsr_nbr_qad_qid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid = value;
        nsr_lsa_qad_qid.value_namespace = name_space;
        nsr_lsa_qad_qid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count = value;
        nsr_nbr_qad_mdata_count.value_namespace = name_space;
        nsr_nbr_qad_mdata_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count = value;
        nsr_lsa_qad_mdata_count.value_namespace = name_space;
        nsr_lsa_qad_mdata_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count = value;
        nsr_nbr_init_sync_pend_count.value_namespace = name_space;
        nsr_nbr_init_sync_pend_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count = value;
        nsr_lsa_init_sync_pend_count.value_namespace = name_space;
        nsr_lsa_init_sync_pend_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no = value;
        nsr_nbr_seq_no.value_namespace = name_space;
        nsr_nbr_seq_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no = value;
        nsr_intf_seq_no.value_namespace = name_space;
        nsr_intf_seq_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant = value;
        nsr_tmr_quant.value_namespace = name_space;
        nsr_tmr_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts = value;
        nsr_conn_to_active_attempts.value_namespace = name_space;
        nsr_conn_to_active_attempts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails = value;
        nsr_conn_to_active_fails.value_namespace = name_space;
        nsr_conn_to_active_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens = value;
        nsr_conn_to_active_opens.value_namespace = name_space;
        nsr_conn_to_active_opens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes = value;
        nsr_conn_to_active_closes.value_namespace = name_space;
        nsr_conn_to_active_closes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors = value;
        nsr_conn_to_active_errors.value_namespace = name_space;
        nsr_conn_to_active_errors.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-rev")
    {
        nsr_rev.yfilter = yfilter;
    }
    if(value_path == "nsr-fsm-state")
    {
        nsr_fsm_state.yfilter = yfilter;
    }
    if(value_path == "nsr-version")
    {
        nsr_version.yfilter = yfilter;
    }
    if(value_path == "nsr-nodeid")
    {
        nsr_nodeid.yfilter = yfilter;
    }
    if(value_path == "nsr-peer-version")
    {
        nsr_peer_version.yfilter = yfilter;
    }
    if(value_path == "nsr-peer-nodeid")
    {
        nsr_peer_nodeid.yfilter = yfilter;
    }
    if(value_path == "nsr-mtu")
    {
        nsr_mtu.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-qad-qid")
    {
        nsr_nbr_qad_qid.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-qad-qid")
    {
        nsr_lsa_qad_qid.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-qad-mdata-count")
    {
        nsr_nbr_qad_mdata_count.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-qad-mdata-count")
    {
        nsr_lsa_qad_mdata_count.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-init-sync-pend-count")
    {
        nsr_nbr_init_sync_pend_count.yfilter = yfilter;
    }
    if(value_path == "nsr-lsa-init-sync-pend-count")
    {
        nsr_lsa_init_sync_pend_count.yfilter = yfilter;
    }
    if(value_path == "nsr-nbr-seq-no")
    {
        nsr_nbr_seq_no.yfilter = yfilter;
    }
    if(value_path == "nsr-intf-seq-no")
    {
        nsr_intf_seq_no.yfilter = yfilter;
    }
    if(value_path == "nsr-tmr-quant")
    {
        nsr_tmr_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-attempts")
    {
        nsr_conn_to_active_attempts.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-fails")
    {
        nsr_conn_to_active_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-opens")
    {
        nsr_conn_to_active_opens.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-closes")
    {
        nsr_conn_to_active_closes.yfilter = yfilter;
    }
    if(value_path == "nsr-conn-to-active-errors")
    {
        nsr_conn_to_active_errors.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-thd-sched" || name == "nsr-rtr-thd-sched" || name == "nsr-rev" || name == "nsr-fsm-state" || name == "nsr-version" || name == "nsr-nodeid" || name == "nsr-peer-version" || name == "nsr-peer-nodeid" || name == "nsr-mtu" || name == "nsr-nbr-qad-qid" || name == "nsr-lsa-qad-qid" || name == "nsr-nbr-qad-mdata-count" || name == "nsr-lsa-qad-mdata-count" || name == "nsr-nbr-init-sync-pend-count" || name == "nsr-lsa-init-sync-pend-count" || name == "nsr-nbr-seq-no" || name == "nsr-intf-seq-no" || name == "nsr-tmr-quant" || name == "nsr-conn-to-active-attempts" || name == "nsr-conn-to-active-fails" || name == "nsr-conn-to-active-opens" || name == "nsr-conn-to-active-closes" || name == "nsr-conn-to-active-errors")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrThdSched()
    :
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"}
{

    yang_name = "nsr-thd-sched"; yang_parent_name = "nsr-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::~NsrThdSched()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_pulse_quant.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_tx.is_set
	|| nsr_events_rx.is_set
	|| nsr_bad_pulses_rx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulses_tx.is_set
	|| nsr_pulse_tx_fails.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nsr_pulse_quant.yfilter)
	|| ydk::is_set(nsr_events_in_q.yfilter)
	|| ydk::is_set(nsr_events_tx.yfilter)
	|| ydk::is_set(nsr_events_rx.yfilter)
	|| ydk::is_set(nsr_bad_pulses_rx.yfilter)
	|| ydk::is_set(nsr_good_pulses_rx.yfilter)
	|| ydk::is_set(nsr_pulses_tx.yfilter)
	|| ydk::is_set(nsr_pulse_tx_fails.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-thd-sched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.yfilter)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.yfilter)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.yfilter)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.yfilter)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.yfilter)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.yfilter)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pri")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
        nsr_pulse_quant.value_namespace = name_space;
        nsr_pulse_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
        nsr_events_in_q.value_namespace = name_space;
        nsr_events_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
        nsr_events_tx.value_namespace = name_space;
        nsr_events_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
        nsr_events_rx.value_namespace = name_space;
        nsr_events_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
        nsr_bad_pulses_rx.value_namespace = name_space;
        nsr_bad_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
        nsr_good_pulses_rx.value_namespace = name_space;
        nsr_good_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
        nsr_pulses_tx.value_namespace = name_space;
        nsr_pulses_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
        nsr_pulse_tx_fails.value_namespace = name_space;
        nsr_pulse_tx_fails.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pri" || name == "nsr-pulse-quant" || name == "nsr-events-in-q" || name == "nsr-events-tx" || name == "nsr-events-rx" || name == "nsr-bad-pulses-rx" || name == "nsr-good-pulses-rx" || name == "nsr-pulses-tx" || name == "nsr-pulse-tx-fails")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"}
{

    yang_name = "nsr-pri"; yang_parent_name = "nsr-thd-sched"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::has_data() const
{
    return nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_sched_pri.yfilter)
	|| ydk::is_set(nsr_sched_quant.yfilter)
	|| ydk::is_set(nsr_sched_remain_quant.yfilter)
	|| ydk::is_set(nsr_sched_evs_in_q.yfilter)
	|| ydk::is_set(nsr_sched_max_evs.yfilter)
	|| ydk::is_set(nsr_sched_peak_q_len.yfilter)
	|| ydk::is_set(nsr_sched_evs_qd.yfilter)
	|| ydk::is_set(nsr_sched_enq_fails.yfilter)
	|| ydk::is_set(nsr_sched_evs_deqd.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.yfilter)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.yfilter)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.yfilter)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.yfilter)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.yfilter)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.yfilter)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.yfilter)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
        nsr_sched_pri.value_namespace = name_space;
        nsr_sched_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
        nsr_sched_quant.value_namespace = name_space;
        nsr_sched_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
        nsr_sched_remain_quant.value_namespace = name_space;
        nsr_sched_remain_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
        nsr_sched_evs_in_q.value_namespace = name_space;
        nsr_sched_evs_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
        nsr_sched_max_evs.value_namespace = name_space;
        nsr_sched_max_evs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
        nsr_sched_peak_q_len.value_namespace = name_space;
        nsr_sched_peak_q_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
        nsr_sched_evs_qd.value_namespace = name_space;
        nsr_sched_evs_qd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
        nsr_sched_enq_fails.value_namespace = name_space;
        nsr_sched_enq_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
        nsr_sched_evs_deqd.value_namespace = name_space;
        nsr_sched_evs_deqd.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrThdSched::NsrPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-sched-pri" || name == "nsr-sched-quant" || name == "nsr-sched-remain-quant" || name == "nsr-sched-evs-in-q" || name == "nsr-sched-max-evs" || name == "nsr-sched-peak-q-len" || name == "nsr-sched-evs-qd" || name == "nsr-sched-enq-fails" || name == "nsr-sched-evs-deqd")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrRtrThdSched()
    :
    nsr_pulse_quant{YType::int32, "nsr-pulse-quant"},
    nsr_events_in_q{YType::uint32, "nsr-events-in-q"},
    nsr_events_tx{YType::uint64, "nsr-events-tx"},
    nsr_events_rx{YType::uint64, "nsr-events-rx"},
    nsr_bad_pulses_rx{YType::uint64, "nsr-bad-pulses-rx"},
    nsr_good_pulses_rx{YType::uint64, "nsr-good-pulses-rx"},
    nsr_pulses_tx{YType::uint64, "nsr-pulses-tx"},
    nsr_pulse_tx_fails{YType::uint64, "nsr-pulse-tx-fails"}
{

    yang_name = "nsr-rtr-thd-sched"; yang_parent_name = "nsr-stats"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::~NsrRtrThdSched()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::has_data() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_data())
            return true;
    }
    return nsr_pulse_quant.is_set
	|| nsr_events_in_q.is_set
	|| nsr_events_tx.is_set
	|| nsr_events_rx.is_set
	|| nsr_bad_pulses_rx.is_set
	|| nsr_good_pulses_rx.is_set
	|| nsr_pulses_tx.is_set
	|| nsr_pulse_tx_fails.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::has_operation() const
{
    for (std::size_t index=0; index<nsr_pri.size(); index++)
    {
        if(nsr_pri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(nsr_pulse_quant.yfilter)
	|| ydk::is_set(nsr_events_in_q.yfilter)
	|| ydk::is_set(nsr_events_tx.yfilter)
	|| ydk::is_set(nsr_events_rx.yfilter)
	|| ydk::is_set(nsr_bad_pulses_rx.yfilter)
	|| ydk::is_set(nsr_good_pulses_rx.yfilter)
	|| ydk::is_set(nsr_pulses_tx.yfilter)
	|| ydk::is_set(nsr_pulse_tx_fails.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-rtr-thd-sched";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_pulse_quant.is_set || is_set(nsr_pulse_quant.yfilter)) leaf_name_data.push_back(nsr_pulse_quant.get_name_leafdata());
    if (nsr_events_in_q.is_set || is_set(nsr_events_in_q.yfilter)) leaf_name_data.push_back(nsr_events_in_q.get_name_leafdata());
    if (nsr_events_tx.is_set || is_set(nsr_events_tx.yfilter)) leaf_name_data.push_back(nsr_events_tx.get_name_leafdata());
    if (nsr_events_rx.is_set || is_set(nsr_events_rx.yfilter)) leaf_name_data.push_back(nsr_events_rx.get_name_leafdata());
    if (nsr_bad_pulses_rx.is_set || is_set(nsr_bad_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_bad_pulses_rx.get_name_leafdata());
    if (nsr_good_pulses_rx.is_set || is_set(nsr_good_pulses_rx.yfilter)) leaf_name_data.push_back(nsr_good_pulses_rx.get_name_leafdata());
    if (nsr_pulses_tx.is_set || is_set(nsr_pulses_tx.yfilter)) leaf_name_data.push_back(nsr_pulses_tx.get_name_leafdata());
    if (nsr_pulse_tx_fails.is_set || is_set(nsr_pulse_tx_fails.yfilter)) leaf_name_data.push_back(nsr_pulse_tx_fails.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-pri")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri>();
        c->parent = this;
        nsr_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : nsr_pri)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant = value;
        nsr_pulse_quant.value_namespace = name_space;
        nsr_pulse_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q = value;
        nsr_events_in_q.value_namespace = name_space;
        nsr_events_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx = value;
        nsr_events_tx.value_namespace = name_space;
        nsr_events_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx = value;
        nsr_events_rx.value_namespace = name_space;
        nsr_events_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx = value;
        nsr_bad_pulses_rx.value_namespace = name_space;
        nsr_bad_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx = value;
        nsr_good_pulses_rx.value_namespace = name_space;
        nsr_good_pulses_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx = value;
        nsr_pulses_tx.value_namespace = name_space;
        nsr_pulses_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails = value;
        nsr_pulse_tx_fails.value_namespace = name_space;
        nsr_pulse_tx_fails.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-pulse-quant")
    {
        nsr_pulse_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-events-in-q")
    {
        nsr_events_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-events-tx")
    {
        nsr_events_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-events-rx")
    {
        nsr_events_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-bad-pulses-rx")
    {
        nsr_bad_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-good-pulses-rx")
    {
        nsr_good_pulses_rx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulses-tx")
    {
        nsr_pulses_tx.yfilter = yfilter;
    }
    if(value_path == "nsr-pulse-tx-fails")
    {
        nsr_pulse_tx_fails.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-pri" || name == "nsr-pulse-quant" || name == "nsr-events-in-q" || name == "nsr-events-tx" || name == "nsr-events-rx" || name == "nsr-bad-pulses-rx" || name == "nsr-good-pulses-rx" || name == "nsr-pulses-tx" || name == "nsr-pulse-tx-fails")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::NsrPri()
    :
    nsr_sched_pri{YType::uint32, "nsr-sched-pri"},
    nsr_sched_quant{YType::uint8, "nsr-sched-quant"},
    nsr_sched_remain_quant{YType::uint8, "nsr-sched-remain-quant"},
    nsr_sched_evs_in_q{YType::uint16, "nsr-sched-evs-in-q"},
    nsr_sched_max_evs{YType::uint16, "nsr-sched-max-evs"},
    nsr_sched_peak_q_len{YType::uint16, "nsr-sched-peak-q-len"},
    nsr_sched_evs_qd{YType::uint64, "nsr-sched-evs-qd"},
    nsr_sched_enq_fails{YType::uint64, "nsr-sched-enq-fails"},
    nsr_sched_evs_deqd{YType::uint64, "nsr-sched-evs-deqd"}
{

    yang_name = "nsr-pri"; yang_parent_name = "nsr-rtr-thd-sched"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::~NsrPri()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_data() const
{
    return nsr_sched_pri.is_set
	|| nsr_sched_quant.is_set
	|| nsr_sched_remain_quant.is_set
	|| nsr_sched_evs_in_q.is_set
	|| nsr_sched_max_evs.is_set
	|| nsr_sched_peak_q_len.is_set
	|| nsr_sched_evs_qd.is_set
	|| nsr_sched_enq_fails.is_set
	|| nsr_sched_evs_deqd.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_sched_pri.yfilter)
	|| ydk::is_set(nsr_sched_quant.yfilter)
	|| ydk::is_set(nsr_sched_remain_quant.yfilter)
	|| ydk::is_set(nsr_sched_evs_in_q.yfilter)
	|| ydk::is_set(nsr_sched_max_evs.yfilter)
	|| ydk::is_set(nsr_sched_peak_q_len.yfilter)
	|| ydk::is_set(nsr_sched_evs_qd.yfilter)
	|| ydk::is_set(nsr_sched_enq_fails.yfilter)
	|| ydk::is_set(nsr_sched_evs_deqd.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pri";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_sched_pri.is_set || is_set(nsr_sched_pri.yfilter)) leaf_name_data.push_back(nsr_sched_pri.get_name_leafdata());
    if (nsr_sched_quant.is_set || is_set(nsr_sched_quant.yfilter)) leaf_name_data.push_back(nsr_sched_quant.get_name_leafdata());
    if (nsr_sched_remain_quant.is_set || is_set(nsr_sched_remain_quant.yfilter)) leaf_name_data.push_back(nsr_sched_remain_quant.get_name_leafdata());
    if (nsr_sched_evs_in_q.is_set || is_set(nsr_sched_evs_in_q.yfilter)) leaf_name_data.push_back(nsr_sched_evs_in_q.get_name_leafdata());
    if (nsr_sched_max_evs.is_set || is_set(nsr_sched_max_evs.yfilter)) leaf_name_data.push_back(nsr_sched_max_evs.get_name_leafdata());
    if (nsr_sched_peak_q_len.is_set || is_set(nsr_sched_peak_q_len.yfilter)) leaf_name_data.push_back(nsr_sched_peak_q_len.get_name_leafdata());
    if (nsr_sched_evs_qd.is_set || is_set(nsr_sched_evs_qd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_qd.get_name_leafdata());
    if (nsr_sched_enq_fails.is_set || is_set(nsr_sched_enq_fails.yfilter)) leaf_name_data.push_back(nsr_sched_enq_fails.get_name_leafdata());
    if (nsr_sched_evs_deqd.is_set || is_set(nsr_sched_evs_deqd.yfilter)) leaf_name_data.push_back(nsr_sched_evs_deqd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri = value;
        nsr_sched_pri.value_namespace = name_space;
        nsr_sched_pri.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant = value;
        nsr_sched_quant.value_namespace = name_space;
        nsr_sched_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant = value;
        nsr_sched_remain_quant.value_namespace = name_space;
        nsr_sched_remain_quant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q = value;
        nsr_sched_evs_in_q.value_namespace = name_space;
        nsr_sched_evs_in_q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs = value;
        nsr_sched_max_evs.value_namespace = name_space;
        nsr_sched_max_evs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len = value;
        nsr_sched_peak_q_len.value_namespace = name_space;
        nsr_sched_peak_q_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd = value;
        nsr_sched_evs_qd.value_namespace = name_space;
        nsr_sched_evs_qd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails = value;
        nsr_sched_enq_fails.value_namespace = name_space;
        nsr_sched_enq_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd = value;
        nsr_sched_evs_deqd.value_namespace = name_space;
        nsr_sched_evs_deqd.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-sched-pri")
    {
        nsr_sched_pri.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-quant")
    {
        nsr_sched_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-remain-quant")
    {
        nsr_sched_remain_quant.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-in-q")
    {
        nsr_sched_evs_in_q.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-max-evs")
    {
        nsr_sched_max_evs.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-peak-q-len")
    {
        nsr_sched_peak_q_len.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-qd")
    {
        nsr_sched_evs_qd.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-enq-fails")
    {
        nsr_sched_enq_fails.yfilter = yfilter;
    }
    if(value_path == "nsr-sched-evs-deqd")
    {
        nsr_sched_evs_deqd.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::NsrStats::NsrRtrThdSched::NsrPri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsr-sched-pri" || name == "nsr-sched-quant" || name == "nsr-sched-remain-quant" || name == "nsr-sched-evs-in-q" || name == "nsr-sched-max-evs" || name == "nsr-sched-peak-q-len" || name == "nsr-sched-evs-qd" || name == "nsr-sched-enq-fails" || name == "nsr-sched-evs-deqd")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::FrrStats()
    :
    fs_paths{YType::uint32, "fs-paths"},
    fs_paths_eligible{YType::uint32, "fs-paths-eligible"},
    fs_paths_protected{YType::uint32, "fs-paths-protected"}
{

    yang_name = "frr-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::~FrrStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::has_data() const
{
    return fs_paths.is_set
	|| fs_paths_eligible.is_set
	|| fs_paths_protected.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fs_paths.yfilter)
	|| ydk::is_set(fs_paths_eligible.yfilter)
	|| ydk::is_set(fs_paths_protected.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fs_paths.is_set || is_set(fs_paths.yfilter)) leaf_name_data.push_back(fs_paths.get_name_leafdata());
    if (fs_paths_eligible.is_set || is_set(fs_paths_eligible.yfilter)) leaf_name_data.push_back(fs_paths_eligible.get_name_leafdata());
    if (fs_paths_protected.is_set || is_set(fs_paths_protected.yfilter)) leaf_name_data.push_back(fs_paths_protected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fs-paths")
    {
        fs_paths = value;
        fs_paths.value_namespace = name_space;
        fs_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fs-paths-eligible")
    {
        fs_paths_eligible = value;
        fs_paths_eligible.value_namespace = name_space;
        fs_paths_eligible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fs-paths-protected")
    {
        fs_paths_protected = value;
        fs_paths_protected.value_namespace = name_space;
        fs_paths_protected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fs-paths")
    {
        fs_paths.yfilter = yfilter;
    }
    if(value_path == "fs-paths-eligible")
    {
        fs_paths_eligible.yfilter = yfilter;
    }
    if(value_path == "fs-paths-protected")
    {
        fs_paths_protected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::FrrStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fs-paths" || name == "fs-paths-eligible" || name == "fs-paths-protected")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::TeStats()
    :
    te_connected{YType::boolean, "te-connected"},
    control_disconnects{YType::uint32, "control-disconnects"},
    te_disconnects{YType::uint32, "te-disconnects"},
    adj_gets{YType::uint32, "adj-gets"},
    link_floods{YType::uint32, "link-floods"},
    link_fragment_floods{YType::uint32, "link-fragment-floods"},
    lsp_gets{YType::uint32, "lsp-gets"},
    tunnel_announces{YType::uint32, "tunnel-announces"},
    total_tunnels{YType::uint32, "total-tunnels"},
    control_batch_reads{YType::uint32, "control-batch-reads"},
    control_batch_writes{YType::uint32, "control-batch-writes"},
    link_batch_reads{YType::uint32, "link-batch-reads"},
    link_batch_writes{YType::uint32, "link-batch-writes"},
    adj_changes{YType::uint32, "adj-changes"},
    fragment_deletes{YType::uint32, "fragment-deletes"},
    fragment_announces{YType::uint32, "fragment-announces"},
    data_trans_completes{YType::uint32, "data-trans-completes"},
    pce_listen{YType::uint32, "pce-listen"},
    pce_stoplisten{YType::uint32, "pce-stoplisten"},
    pce_flood{YType::uint32, "pce-flood"},
    pce_get{YType::uint32, "pce-get"},
    pce_br_lookup{YType::uint32, "pce-br-lookup"},
    pce_br_lkup_num_dests{YType::uint32, "pce-br-lkup-num-dests"},
    pce_br_resp_fails{YType::uint32, "pce-br-resp-fails"},
    pce_node_announce_batches{YType::uint32, "pce-node-announce-batches"},
    pce_node_delete_batches{YType::uint32, "pce-node-delete-batches"},
    pce_num_node_announce{YType::uint32, "pce-num-node-announce"},
    pce_num_node_delete{YType::uint32, "pce-num-node-delete"},
    pce_node_send_fails{YType::uint32, "pce-node-send-fails"},
    te_sr_path_reg_idt_recvd{YType::boolean, "te-sr-path-reg-idt-recvd"},
    te_sr_idt_sent{YType::boolean, "te-sr-idt-sent"},
    sr_num_area_enabled{YType::uint32, "sr-num-area-enabled"}
{

    yang_name = "te-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::~TeStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::has_data() const
{
    return te_connected.is_set
	|| control_disconnects.is_set
	|| te_disconnects.is_set
	|| adj_gets.is_set
	|| link_floods.is_set
	|| link_fragment_floods.is_set
	|| lsp_gets.is_set
	|| tunnel_announces.is_set
	|| total_tunnels.is_set
	|| control_batch_reads.is_set
	|| control_batch_writes.is_set
	|| link_batch_reads.is_set
	|| link_batch_writes.is_set
	|| adj_changes.is_set
	|| fragment_deletes.is_set
	|| fragment_announces.is_set
	|| data_trans_completes.is_set
	|| pce_listen.is_set
	|| pce_stoplisten.is_set
	|| pce_flood.is_set
	|| pce_get.is_set
	|| pce_br_lookup.is_set
	|| pce_br_lkup_num_dests.is_set
	|| pce_br_resp_fails.is_set
	|| pce_node_announce_batches.is_set
	|| pce_node_delete_batches.is_set
	|| pce_num_node_announce.is_set
	|| pce_num_node_delete.is_set
	|| pce_node_send_fails.is_set
	|| te_sr_path_reg_idt_recvd.is_set
	|| te_sr_idt_sent.is_set
	|| sr_num_area_enabled.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_connected.yfilter)
	|| ydk::is_set(control_disconnects.yfilter)
	|| ydk::is_set(te_disconnects.yfilter)
	|| ydk::is_set(adj_gets.yfilter)
	|| ydk::is_set(link_floods.yfilter)
	|| ydk::is_set(link_fragment_floods.yfilter)
	|| ydk::is_set(lsp_gets.yfilter)
	|| ydk::is_set(tunnel_announces.yfilter)
	|| ydk::is_set(total_tunnels.yfilter)
	|| ydk::is_set(control_batch_reads.yfilter)
	|| ydk::is_set(control_batch_writes.yfilter)
	|| ydk::is_set(link_batch_reads.yfilter)
	|| ydk::is_set(link_batch_writes.yfilter)
	|| ydk::is_set(adj_changes.yfilter)
	|| ydk::is_set(fragment_deletes.yfilter)
	|| ydk::is_set(fragment_announces.yfilter)
	|| ydk::is_set(data_trans_completes.yfilter)
	|| ydk::is_set(pce_listen.yfilter)
	|| ydk::is_set(pce_stoplisten.yfilter)
	|| ydk::is_set(pce_flood.yfilter)
	|| ydk::is_set(pce_get.yfilter)
	|| ydk::is_set(pce_br_lookup.yfilter)
	|| ydk::is_set(pce_br_lkup_num_dests.yfilter)
	|| ydk::is_set(pce_br_resp_fails.yfilter)
	|| ydk::is_set(pce_node_announce_batches.yfilter)
	|| ydk::is_set(pce_node_delete_batches.yfilter)
	|| ydk::is_set(pce_num_node_announce.yfilter)
	|| ydk::is_set(pce_num_node_delete.yfilter)
	|| ydk::is_set(pce_node_send_fails.yfilter)
	|| ydk::is_set(te_sr_path_reg_idt_recvd.yfilter)
	|| ydk::is_set(te_sr_idt_sent.yfilter)
	|| ydk::is_set(sr_num_area_enabled.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_connected.is_set || is_set(te_connected.yfilter)) leaf_name_data.push_back(te_connected.get_name_leafdata());
    if (control_disconnects.is_set || is_set(control_disconnects.yfilter)) leaf_name_data.push_back(control_disconnects.get_name_leafdata());
    if (te_disconnects.is_set || is_set(te_disconnects.yfilter)) leaf_name_data.push_back(te_disconnects.get_name_leafdata());
    if (adj_gets.is_set || is_set(adj_gets.yfilter)) leaf_name_data.push_back(adj_gets.get_name_leafdata());
    if (link_floods.is_set || is_set(link_floods.yfilter)) leaf_name_data.push_back(link_floods.get_name_leafdata());
    if (link_fragment_floods.is_set || is_set(link_fragment_floods.yfilter)) leaf_name_data.push_back(link_fragment_floods.get_name_leafdata());
    if (lsp_gets.is_set || is_set(lsp_gets.yfilter)) leaf_name_data.push_back(lsp_gets.get_name_leafdata());
    if (tunnel_announces.is_set || is_set(tunnel_announces.yfilter)) leaf_name_data.push_back(tunnel_announces.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.yfilter)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());
    if (control_batch_reads.is_set || is_set(control_batch_reads.yfilter)) leaf_name_data.push_back(control_batch_reads.get_name_leafdata());
    if (control_batch_writes.is_set || is_set(control_batch_writes.yfilter)) leaf_name_data.push_back(control_batch_writes.get_name_leafdata());
    if (link_batch_reads.is_set || is_set(link_batch_reads.yfilter)) leaf_name_data.push_back(link_batch_reads.get_name_leafdata());
    if (link_batch_writes.is_set || is_set(link_batch_writes.yfilter)) leaf_name_data.push_back(link_batch_writes.get_name_leafdata());
    if (adj_changes.is_set || is_set(adj_changes.yfilter)) leaf_name_data.push_back(adj_changes.get_name_leafdata());
    if (fragment_deletes.is_set || is_set(fragment_deletes.yfilter)) leaf_name_data.push_back(fragment_deletes.get_name_leafdata());
    if (fragment_announces.is_set || is_set(fragment_announces.yfilter)) leaf_name_data.push_back(fragment_announces.get_name_leafdata());
    if (data_trans_completes.is_set || is_set(data_trans_completes.yfilter)) leaf_name_data.push_back(data_trans_completes.get_name_leafdata());
    if (pce_listen.is_set || is_set(pce_listen.yfilter)) leaf_name_data.push_back(pce_listen.get_name_leafdata());
    if (pce_stoplisten.is_set || is_set(pce_stoplisten.yfilter)) leaf_name_data.push_back(pce_stoplisten.get_name_leafdata());
    if (pce_flood.is_set || is_set(pce_flood.yfilter)) leaf_name_data.push_back(pce_flood.get_name_leafdata());
    if (pce_get.is_set || is_set(pce_get.yfilter)) leaf_name_data.push_back(pce_get.get_name_leafdata());
    if (pce_br_lookup.is_set || is_set(pce_br_lookup.yfilter)) leaf_name_data.push_back(pce_br_lookup.get_name_leafdata());
    if (pce_br_lkup_num_dests.is_set || is_set(pce_br_lkup_num_dests.yfilter)) leaf_name_data.push_back(pce_br_lkup_num_dests.get_name_leafdata());
    if (pce_br_resp_fails.is_set || is_set(pce_br_resp_fails.yfilter)) leaf_name_data.push_back(pce_br_resp_fails.get_name_leafdata());
    if (pce_node_announce_batches.is_set || is_set(pce_node_announce_batches.yfilter)) leaf_name_data.push_back(pce_node_announce_batches.get_name_leafdata());
    if (pce_node_delete_batches.is_set || is_set(pce_node_delete_batches.yfilter)) leaf_name_data.push_back(pce_node_delete_batches.get_name_leafdata());
    if (pce_num_node_announce.is_set || is_set(pce_num_node_announce.yfilter)) leaf_name_data.push_back(pce_num_node_announce.get_name_leafdata());
    if (pce_num_node_delete.is_set || is_set(pce_num_node_delete.yfilter)) leaf_name_data.push_back(pce_num_node_delete.get_name_leafdata());
    if (pce_node_send_fails.is_set || is_set(pce_node_send_fails.yfilter)) leaf_name_data.push_back(pce_node_send_fails.get_name_leafdata());
    if (te_sr_path_reg_idt_recvd.is_set || is_set(te_sr_path_reg_idt_recvd.yfilter)) leaf_name_data.push_back(te_sr_path_reg_idt_recvd.get_name_leafdata());
    if (te_sr_idt_sent.is_set || is_set(te_sr_idt_sent.yfilter)) leaf_name_data.push_back(te_sr_idt_sent.get_name_leafdata());
    if (sr_num_area_enabled.is_set || is_set(sr_num_area_enabled.yfilter)) leaf_name_data.push_back(sr_num_area_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-connected")
    {
        te_connected = value;
        te_connected.value_namespace = name_space;
        te_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-disconnects")
    {
        control_disconnects = value;
        control_disconnects.value_namespace = name_space;
        control_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-disconnects")
    {
        te_disconnects = value;
        te_disconnects.value_namespace = name_space;
        te_disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-gets")
    {
        adj_gets = value;
        adj_gets.value_namespace = name_space;
        adj_gets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-floods")
    {
        link_floods = value;
        link_floods.value_namespace = name_space;
        link_floods.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-fragment-floods")
    {
        link_fragment_floods = value;
        link_fragment_floods.value_namespace = name_space;
        link_fragment_floods.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-gets")
    {
        lsp_gets = value;
        lsp_gets.value_namespace = name_space;
        lsp_gets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-announces")
    {
        tunnel_announces = value;
        tunnel_announces.value_namespace = name_space;
        tunnel_announces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
        total_tunnels.value_namespace = name_space;
        total_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-batch-reads")
    {
        control_batch_reads = value;
        control_batch_reads.value_namespace = name_space;
        control_batch_reads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-batch-writes")
    {
        control_batch_writes = value;
        control_batch_writes.value_namespace = name_space;
        control_batch_writes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-batch-reads")
    {
        link_batch_reads = value;
        link_batch_reads.value_namespace = name_space;
        link_batch_reads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-batch-writes")
    {
        link_batch_writes = value;
        link_batch_writes.value_namespace = name_space;
        link_batch_writes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-changes")
    {
        adj_changes = value;
        adj_changes.value_namespace = name_space;
        adj_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-deletes")
    {
        fragment_deletes = value;
        fragment_deletes.value_namespace = name_space;
        fragment_deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragment-announces")
    {
        fragment_announces = value;
        fragment_announces.value_namespace = name_space;
        fragment_announces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-trans-completes")
    {
        data_trans_completes = value;
        data_trans_completes.value_namespace = name_space;
        data_trans_completes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-listen")
    {
        pce_listen = value;
        pce_listen.value_namespace = name_space;
        pce_listen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-stoplisten")
    {
        pce_stoplisten = value;
        pce_stoplisten.value_namespace = name_space;
        pce_stoplisten.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-flood")
    {
        pce_flood = value;
        pce_flood.value_namespace = name_space;
        pce_flood.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-get")
    {
        pce_get = value;
        pce_get.value_namespace = name_space;
        pce_get.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-br-lookup")
    {
        pce_br_lookup = value;
        pce_br_lookup.value_namespace = name_space;
        pce_br_lookup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-br-lkup-num-dests")
    {
        pce_br_lkup_num_dests = value;
        pce_br_lkup_num_dests.value_namespace = name_space;
        pce_br_lkup_num_dests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-br-resp-fails")
    {
        pce_br_resp_fails = value;
        pce_br_resp_fails.value_namespace = name_space;
        pce_br_resp_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-node-announce-batches")
    {
        pce_node_announce_batches = value;
        pce_node_announce_batches.value_namespace = name_space;
        pce_node_announce_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-node-delete-batches")
    {
        pce_node_delete_batches = value;
        pce_node_delete_batches.value_namespace = name_space;
        pce_node_delete_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-num-node-announce")
    {
        pce_num_node_announce = value;
        pce_num_node_announce.value_namespace = name_space;
        pce_num_node_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-num-node-delete")
    {
        pce_num_node_delete = value;
        pce_num_node_delete.value_namespace = name_space;
        pce_num_node_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-node-send-fails")
    {
        pce_node_send_fails = value;
        pce_node_send_fails.value_namespace = name_space;
        pce_node_send_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-sr-path-reg-idt-recvd")
    {
        te_sr_path_reg_idt_recvd = value;
        te_sr_path_reg_idt_recvd.value_namespace = name_space;
        te_sr_path_reg_idt_recvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-sr-idt-sent")
    {
        te_sr_idt_sent = value;
        te_sr_idt_sent.value_namespace = name_space;
        te_sr_idt_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-num-area-enabled")
    {
        sr_num_area_enabled = value;
        sr_num_area_enabled.value_namespace = name_space;
        sr_num_area_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-connected")
    {
        te_connected.yfilter = yfilter;
    }
    if(value_path == "control-disconnects")
    {
        control_disconnects.yfilter = yfilter;
    }
    if(value_path == "te-disconnects")
    {
        te_disconnects.yfilter = yfilter;
    }
    if(value_path == "adj-gets")
    {
        adj_gets.yfilter = yfilter;
    }
    if(value_path == "link-floods")
    {
        link_floods.yfilter = yfilter;
    }
    if(value_path == "link-fragment-floods")
    {
        link_fragment_floods.yfilter = yfilter;
    }
    if(value_path == "lsp-gets")
    {
        lsp_gets.yfilter = yfilter;
    }
    if(value_path == "tunnel-announces")
    {
        tunnel_announces.yfilter = yfilter;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels.yfilter = yfilter;
    }
    if(value_path == "control-batch-reads")
    {
        control_batch_reads.yfilter = yfilter;
    }
    if(value_path == "control-batch-writes")
    {
        control_batch_writes.yfilter = yfilter;
    }
    if(value_path == "link-batch-reads")
    {
        link_batch_reads.yfilter = yfilter;
    }
    if(value_path == "link-batch-writes")
    {
        link_batch_writes.yfilter = yfilter;
    }
    if(value_path == "adj-changes")
    {
        adj_changes.yfilter = yfilter;
    }
    if(value_path == "fragment-deletes")
    {
        fragment_deletes.yfilter = yfilter;
    }
    if(value_path == "fragment-announces")
    {
        fragment_announces.yfilter = yfilter;
    }
    if(value_path == "data-trans-completes")
    {
        data_trans_completes.yfilter = yfilter;
    }
    if(value_path == "pce-listen")
    {
        pce_listen.yfilter = yfilter;
    }
    if(value_path == "pce-stoplisten")
    {
        pce_stoplisten.yfilter = yfilter;
    }
    if(value_path == "pce-flood")
    {
        pce_flood.yfilter = yfilter;
    }
    if(value_path == "pce-get")
    {
        pce_get.yfilter = yfilter;
    }
    if(value_path == "pce-br-lookup")
    {
        pce_br_lookup.yfilter = yfilter;
    }
    if(value_path == "pce-br-lkup-num-dests")
    {
        pce_br_lkup_num_dests.yfilter = yfilter;
    }
    if(value_path == "pce-br-resp-fails")
    {
        pce_br_resp_fails.yfilter = yfilter;
    }
    if(value_path == "pce-node-announce-batches")
    {
        pce_node_announce_batches.yfilter = yfilter;
    }
    if(value_path == "pce-node-delete-batches")
    {
        pce_node_delete_batches.yfilter = yfilter;
    }
    if(value_path == "pce-num-node-announce")
    {
        pce_num_node_announce.yfilter = yfilter;
    }
    if(value_path == "pce-num-node-delete")
    {
        pce_num_node_delete.yfilter = yfilter;
    }
    if(value_path == "pce-node-send-fails")
    {
        pce_node_send_fails.yfilter = yfilter;
    }
    if(value_path == "te-sr-path-reg-idt-recvd")
    {
        te_sr_path_reg_idt_recvd.yfilter = yfilter;
    }
    if(value_path == "te-sr-idt-sent")
    {
        te_sr_idt_sent.yfilter = yfilter;
    }
    if(value_path == "sr-num-area-enabled")
    {
        sr_num_area_enabled.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::TeStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-connected" || name == "control-disconnects" || name == "te-disconnects" || name == "adj-gets" || name == "link-floods" || name == "link-fragment-floods" || name == "lsp-gets" || name == "tunnel-announces" || name == "total-tunnels" || name == "control-batch-reads" || name == "control-batch-writes" || name == "link-batch-reads" || name == "link-batch-writes" || name == "adj-changes" || name == "fragment-deletes" || name == "fragment-announces" || name == "data-trans-completes" || name == "pce-listen" || name == "pce-stoplisten" || name == "pce-flood" || name == "pce-get" || name == "pce-br-lookup" || name == "pce-br-lkup-num-dests" || name == "pce-br-resp-fails" || name == "pce-node-announce-batches" || name == "pce-node-delete-batches" || name == "pce-num-node-announce" || name == "pce-num-node-delete" || name == "pce-node-send-fails" || name == "te-sr-path-reg-idt-recvd" || name == "te-sr-idt-sent" || name == "sr-num-area-enabled")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::ProtocolStats()
    :
    inputs{YType::uint32, "inputs"},
    input_hello{YType::uint32, "input-hello"},
    input_dbdes{YType::uint32, "input-dbdes"},
    input_dbdes_lsa{YType::uint32, "input-dbdes-lsa"},
    input_req{YType::uint32, "input-req"},
    input_req_lsa{YType::uint32, "input-req-lsa"},
    input_lsupd{YType::uint32, "input-lsupd"},
    input_lsupd_lsa{YType::uint32, "input-lsupd-lsa"},
    input_ack{YType::uint32, "input-ack"},
    input_ack_lsa{YType::uint32, "input-ack-lsa"},
    checksumerr{YType::uint32, "checksumerr"},
    input_autherr{YType::uint32, "input-autherr"},
    outputs{YType::uint32, "outputs"},
    output_hello{YType::uint32, "output-hello"},
    output_dbdes{YType::uint32, "output-dbdes"},
    output_dbdes_lsa{YType::uint32, "output-dbdes-lsa"},
    output_req{YType::uint32, "output-req"},
    output_req_lsa{YType::uint32, "output-req-lsa"},
    output_lsupd{YType::uint32, "output-lsupd"},
    output_lsupd_lsa{YType::uint32, "output-lsupd-lsa"},
    output_ack{YType::uint32, "output-ack"},
    output_ack_lsa{YType::uint32, "output-ack-lsa"},
    output_autherr{YType::uint32, "output-autherr"},
    h_input_dbdes{YType::uint32, "h-input-dbdes"},
    h_input_req{YType::uint32, "h-input-req"},
    h_input_lsupd{YType::uint32, "h-input-lsupd"},
    h_input_ack{YType::uint32, "h-input-ack"}
{

    yang_name = "protocol-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::~ProtocolStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::has_data() const
{
    return inputs.is_set
	|| input_hello.is_set
	|| input_dbdes.is_set
	|| input_dbdes_lsa.is_set
	|| input_req.is_set
	|| input_req_lsa.is_set
	|| input_lsupd.is_set
	|| input_lsupd_lsa.is_set
	|| input_ack.is_set
	|| input_ack_lsa.is_set
	|| checksumerr.is_set
	|| input_autherr.is_set
	|| outputs.is_set
	|| output_hello.is_set
	|| output_dbdes.is_set
	|| output_dbdes_lsa.is_set
	|| output_req.is_set
	|| output_req_lsa.is_set
	|| output_lsupd.is_set
	|| output_lsupd_lsa.is_set
	|| output_ack.is_set
	|| output_ack_lsa.is_set
	|| output_autherr.is_set
	|| h_input_dbdes.is_set
	|| h_input_req.is_set
	|| h_input_lsupd.is_set
	|| h_input_ack.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inputs.yfilter)
	|| ydk::is_set(input_hello.yfilter)
	|| ydk::is_set(input_dbdes.yfilter)
	|| ydk::is_set(input_dbdes_lsa.yfilter)
	|| ydk::is_set(input_req.yfilter)
	|| ydk::is_set(input_req_lsa.yfilter)
	|| ydk::is_set(input_lsupd.yfilter)
	|| ydk::is_set(input_lsupd_lsa.yfilter)
	|| ydk::is_set(input_ack.yfilter)
	|| ydk::is_set(input_ack_lsa.yfilter)
	|| ydk::is_set(checksumerr.yfilter)
	|| ydk::is_set(input_autherr.yfilter)
	|| ydk::is_set(outputs.yfilter)
	|| ydk::is_set(output_hello.yfilter)
	|| ydk::is_set(output_dbdes.yfilter)
	|| ydk::is_set(output_dbdes_lsa.yfilter)
	|| ydk::is_set(output_req.yfilter)
	|| ydk::is_set(output_req_lsa.yfilter)
	|| ydk::is_set(output_lsupd.yfilter)
	|| ydk::is_set(output_lsupd_lsa.yfilter)
	|| ydk::is_set(output_ack.yfilter)
	|| ydk::is_set(output_ack_lsa.yfilter)
	|| ydk::is_set(output_autherr.yfilter)
	|| ydk::is_set(h_input_dbdes.yfilter)
	|| ydk::is_set(h_input_req.yfilter)
	|| ydk::is_set(h_input_lsupd.yfilter)
	|| ydk::is_set(h_input_ack.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inputs.is_set || is_set(inputs.yfilter)) leaf_name_data.push_back(inputs.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.yfilter)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (input_dbdes.is_set || is_set(input_dbdes.yfilter)) leaf_name_data.push_back(input_dbdes.get_name_leafdata());
    if (input_dbdes_lsa.is_set || is_set(input_dbdes_lsa.yfilter)) leaf_name_data.push_back(input_dbdes_lsa.get_name_leafdata());
    if (input_req.is_set || is_set(input_req.yfilter)) leaf_name_data.push_back(input_req.get_name_leafdata());
    if (input_req_lsa.is_set || is_set(input_req_lsa.yfilter)) leaf_name_data.push_back(input_req_lsa.get_name_leafdata());
    if (input_lsupd.is_set || is_set(input_lsupd.yfilter)) leaf_name_data.push_back(input_lsupd.get_name_leafdata());
    if (input_lsupd_lsa.is_set || is_set(input_lsupd_lsa.yfilter)) leaf_name_data.push_back(input_lsupd_lsa.get_name_leafdata());
    if (input_ack.is_set || is_set(input_ack.yfilter)) leaf_name_data.push_back(input_ack.get_name_leafdata());
    if (input_ack_lsa.is_set || is_set(input_ack_lsa.yfilter)) leaf_name_data.push_back(input_ack_lsa.get_name_leafdata());
    if (checksumerr.is_set || is_set(checksumerr.yfilter)) leaf_name_data.push_back(checksumerr.get_name_leafdata());
    if (input_autherr.is_set || is_set(input_autherr.yfilter)) leaf_name_data.push_back(input_autherr.get_name_leafdata());
    if (outputs.is_set || is_set(outputs.yfilter)) leaf_name_data.push_back(outputs.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.yfilter)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (output_dbdes.is_set || is_set(output_dbdes.yfilter)) leaf_name_data.push_back(output_dbdes.get_name_leafdata());
    if (output_dbdes_lsa.is_set || is_set(output_dbdes_lsa.yfilter)) leaf_name_data.push_back(output_dbdes_lsa.get_name_leafdata());
    if (output_req.is_set || is_set(output_req.yfilter)) leaf_name_data.push_back(output_req.get_name_leafdata());
    if (output_req_lsa.is_set || is_set(output_req_lsa.yfilter)) leaf_name_data.push_back(output_req_lsa.get_name_leafdata());
    if (output_lsupd.is_set || is_set(output_lsupd.yfilter)) leaf_name_data.push_back(output_lsupd.get_name_leafdata());
    if (output_lsupd_lsa.is_set || is_set(output_lsupd_lsa.yfilter)) leaf_name_data.push_back(output_lsupd_lsa.get_name_leafdata());
    if (output_ack.is_set || is_set(output_ack.yfilter)) leaf_name_data.push_back(output_ack.get_name_leafdata());
    if (output_ack_lsa.is_set || is_set(output_ack_lsa.yfilter)) leaf_name_data.push_back(output_ack_lsa.get_name_leafdata());
    if (output_autherr.is_set || is_set(output_autherr.yfilter)) leaf_name_data.push_back(output_autherr.get_name_leafdata());
    if (h_input_dbdes.is_set || is_set(h_input_dbdes.yfilter)) leaf_name_data.push_back(h_input_dbdes.get_name_leafdata());
    if (h_input_req.is_set || is_set(h_input_req.yfilter)) leaf_name_data.push_back(h_input_req.get_name_leafdata());
    if (h_input_lsupd.is_set || is_set(h_input_lsupd.yfilter)) leaf_name_data.push_back(h_input_lsupd.get_name_leafdata());
    if (h_input_ack.is_set || is_set(h_input_ack.yfilter)) leaf_name_data.push_back(h_input_ack.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inputs")
    {
        inputs = value;
        inputs.value_namespace = name_space;
        inputs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
        input_hello.value_namespace = name_space;
        input_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-dbdes")
    {
        input_dbdes = value;
        input_dbdes.value_namespace = name_space;
        input_dbdes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-dbdes-lsa")
    {
        input_dbdes_lsa = value;
        input_dbdes_lsa.value_namespace = name_space;
        input_dbdes_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-req")
    {
        input_req = value;
        input_req.value_namespace = name_space;
        input_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-req-lsa")
    {
        input_req_lsa = value;
        input_req_lsa.value_namespace = name_space;
        input_req_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsupd")
    {
        input_lsupd = value;
        input_lsupd.value_namespace = name_space;
        input_lsupd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-lsupd-lsa")
    {
        input_lsupd_lsa = value;
        input_lsupd_lsa.value_namespace = name_space;
        input_lsupd_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ack")
    {
        input_ack = value;
        input_ack.value_namespace = name_space;
        input_ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ack-lsa")
    {
        input_ack_lsa = value;
        input_ack_lsa.value_namespace = name_space;
        input_ack_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksumerr")
    {
        checksumerr = value;
        checksumerr.value_namespace = name_space;
        checksumerr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-autherr")
    {
        input_autherr = value;
        input_autherr.value_namespace = name_space;
        input_autherr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outputs")
    {
        outputs = value;
        outputs.value_namespace = name_space;
        outputs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
        output_hello.value_namespace = name_space;
        output_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-dbdes")
    {
        output_dbdes = value;
        output_dbdes.value_namespace = name_space;
        output_dbdes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-dbdes-lsa")
    {
        output_dbdes_lsa = value;
        output_dbdes_lsa.value_namespace = name_space;
        output_dbdes_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-req")
    {
        output_req = value;
        output_req.value_namespace = name_space;
        output_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-req-lsa")
    {
        output_req_lsa = value;
        output_req_lsa.value_namespace = name_space;
        output_req_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsupd")
    {
        output_lsupd = value;
        output_lsupd.value_namespace = name_space;
        output_lsupd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-lsupd-lsa")
    {
        output_lsupd_lsa = value;
        output_lsupd_lsa.value_namespace = name_space;
        output_lsupd_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ack")
    {
        output_ack = value;
        output_ack.value_namespace = name_space;
        output_ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ack-lsa")
    {
        output_ack_lsa = value;
        output_ack_lsa.value_namespace = name_space;
        output_ack_lsa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-autherr")
    {
        output_autherr = value;
        output_autherr.value_namespace = name_space;
        output_autherr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "h-input-dbdes")
    {
        h_input_dbdes = value;
        h_input_dbdes.value_namespace = name_space;
        h_input_dbdes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "h-input-req")
    {
        h_input_req = value;
        h_input_req.value_namespace = name_space;
        h_input_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "h-input-lsupd")
    {
        h_input_lsupd = value;
        h_input_lsupd.value_namespace = name_space;
        h_input_lsupd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "h-input-ack")
    {
        h_input_ack = value;
        h_input_ack.value_namespace = name_space;
        h_input_ack.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inputs")
    {
        inputs.yfilter = yfilter;
    }
    if(value_path == "input-hello")
    {
        input_hello.yfilter = yfilter;
    }
    if(value_path == "input-dbdes")
    {
        input_dbdes.yfilter = yfilter;
    }
    if(value_path == "input-dbdes-lsa")
    {
        input_dbdes_lsa.yfilter = yfilter;
    }
    if(value_path == "input-req")
    {
        input_req.yfilter = yfilter;
    }
    if(value_path == "input-req-lsa")
    {
        input_req_lsa.yfilter = yfilter;
    }
    if(value_path == "input-lsupd")
    {
        input_lsupd.yfilter = yfilter;
    }
    if(value_path == "input-lsupd-lsa")
    {
        input_lsupd_lsa.yfilter = yfilter;
    }
    if(value_path == "input-ack")
    {
        input_ack.yfilter = yfilter;
    }
    if(value_path == "input-ack-lsa")
    {
        input_ack_lsa.yfilter = yfilter;
    }
    if(value_path == "checksumerr")
    {
        checksumerr.yfilter = yfilter;
    }
    if(value_path == "input-autherr")
    {
        input_autherr.yfilter = yfilter;
    }
    if(value_path == "outputs")
    {
        outputs.yfilter = yfilter;
    }
    if(value_path == "output-hello")
    {
        output_hello.yfilter = yfilter;
    }
    if(value_path == "output-dbdes")
    {
        output_dbdes.yfilter = yfilter;
    }
    if(value_path == "output-dbdes-lsa")
    {
        output_dbdes_lsa.yfilter = yfilter;
    }
    if(value_path == "output-req")
    {
        output_req.yfilter = yfilter;
    }
    if(value_path == "output-req-lsa")
    {
        output_req_lsa.yfilter = yfilter;
    }
    if(value_path == "output-lsupd")
    {
        output_lsupd.yfilter = yfilter;
    }
    if(value_path == "output-lsupd-lsa")
    {
        output_lsupd_lsa.yfilter = yfilter;
    }
    if(value_path == "output-ack")
    {
        output_ack.yfilter = yfilter;
    }
    if(value_path == "output-ack-lsa")
    {
        output_ack_lsa.yfilter = yfilter;
    }
    if(value_path == "output-autherr")
    {
        output_autherr.yfilter = yfilter;
    }
    if(value_path == "h-input-dbdes")
    {
        h_input_dbdes.yfilter = yfilter;
    }
    if(value_path == "h-input-req")
    {
        h_input_req.yfilter = yfilter;
    }
    if(value_path == "h-input-lsupd")
    {
        h_input_lsupd.yfilter = yfilter;
    }
    if(value_path == "h-input-ack")
    {
        h_input_ack.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::ProtocolStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inputs" || name == "input-hello" || name == "input-dbdes" || name == "input-dbdes-lsa" || name == "input-req" || name == "input-req-lsa" || name == "input-lsupd" || name == "input-lsupd-lsa" || name == "input-ack" || name == "input-ack-lsa" || name == "checksumerr" || name == "input-autherr" || name == "outputs" || name == "output-hello" || name == "output-dbdes" || name == "output-dbdes-lsa" || name == "output-req" || name == "output-req-lsa" || name == "output-lsupd" || name == "output-lsupd-lsa" || name == "output-ack" || name == "output-ack-lsa" || name == "output-autherr" || name == "h-input-dbdes" || name == "h-input-req" || name == "h-input-lsupd" || name == "h-input-ack")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::RawIoStats()
    :
    out_sent{YType::uint32, "out-sent"},
    out_bytes_sent{YType::uint32, "out-bytes-sent"},
    out_no_conn_discarded{YType::uint32, "out-no-conn-discarded"},
    out_null_src_discarded{YType::uint32, "out-null-src-discarded"},
    out_no_pak_discarded{YType::uint32, "out-no-pak-discarded"},
    out_ipv4_hdr_err_discarded{YType::uint32, "out-ipv4-hdr-err-discarded"},
    out_send_pak_err_discarded{YType::uint32, "out-send-pak-err-discarded"},
    in_rcv{YType::uint32, "in-rcv"},
    in_bytes_rcv{YType::uint32, "in-bytes-rcv"},
    in_short_msg_discarded{YType::uint32, "in-short-msg-discarded"},
    in_no_mem_discarded{YType::uint32, "in-no-mem-discarded"},
    in_raw_event{YType::uint32, "in-raw-event"},
    disconnects{YType::uint32, "disconnects"},
    in_standby_discarded{YType::uint32, "in-standby-discarded"},
    nsr_not_ready_discarded{YType::uint32, "nsr-not-ready-discarded"},
    raw_connected{YType::boolean, "raw-connected"},
    sl_raw_connected{YType::boolean, "sl-raw-connected"}
{

    yang_name = "raw-io-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::~RawIoStats()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::has_data() const
{
    return out_sent.is_set
	|| out_bytes_sent.is_set
	|| out_no_conn_discarded.is_set
	|| out_null_src_discarded.is_set
	|| out_no_pak_discarded.is_set
	|| out_ipv4_hdr_err_discarded.is_set
	|| out_send_pak_err_discarded.is_set
	|| in_rcv.is_set
	|| in_bytes_rcv.is_set
	|| in_short_msg_discarded.is_set
	|| in_no_mem_discarded.is_set
	|| in_raw_event.is_set
	|| disconnects.is_set
	|| in_standby_discarded.is_set
	|| nsr_not_ready_discarded.is_set
	|| raw_connected.is_set
	|| sl_raw_connected.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_sent.yfilter)
	|| ydk::is_set(out_bytes_sent.yfilter)
	|| ydk::is_set(out_no_conn_discarded.yfilter)
	|| ydk::is_set(out_null_src_discarded.yfilter)
	|| ydk::is_set(out_no_pak_discarded.yfilter)
	|| ydk::is_set(out_ipv4_hdr_err_discarded.yfilter)
	|| ydk::is_set(out_send_pak_err_discarded.yfilter)
	|| ydk::is_set(in_rcv.yfilter)
	|| ydk::is_set(in_bytes_rcv.yfilter)
	|| ydk::is_set(in_short_msg_discarded.yfilter)
	|| ydk::is_set(in_no_mem_discarded.yfilter)
	|| ydk::is_set(in_raw_event.yfilter)
	|| ydk::is_set(disconnects.yfilter)
	|| ydk::is_set(in_standby_discarded.yfilter)
	|| ydk::is_set(nsr_not_ready_discarded.yfilter)
	|| ydk::is_set(raw_connected.yfilter)
	|| ydk::is_set(sl_raw_connected.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raw-io-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_sent.is_set || is_set(out_sent.yfilter)) leaf_name_data.push_back(out_sent.get_name_leafdata());
    if (out_bytes_sent.is_set || is_set(out_bytes_sent.yfilter)) leaf_name_data.push_back(out_bytes_sent.get_name_leafdata());
    if (out_no_conn_discarded.is_set || is_set(out_no_conn_discarded.yfilter)) leaf_name_data.push_back(out_no_conn_discarded.get_name_leafdata());
    if (out_null_src_discarded.is_set || is_set(out_null_src_discarded.yfilter)) leaf_name_data.push_back(out_null_src_discarded.get_name_leafdata());
    if (out_no_pak_discarded.is_set || is_set(out_no_pak_discarded.yfilter)) leaf_name_data.push_back(out_no_pak_discarded.get_name_leafdata());
    if (out_ipv4_hdr_err_discarded.is_set || is_set(out_ipv4_hdr_err_discarded.yfilter)) leaf_name_data.push_back(out_ipv4_hdr_err_discarded.get_name_leafdata());
    if (out_send_pak_err_discarded.is_set || is_set(out_send_pak_err_discarded.yfilter)) leaf_name_data.push_back(out_send_pak_err_discarded.get_name_leafdata());
    if (in_rcv.is_set || is_set(in_rcv.yfilter)) leaf_name_data.push_back(in_rcv.get_name_leafdata());
    if (in_bytes_rcv.is_set || is_set(in_bytes_rcv.yfilter)) leaf_name_data.push_back(in_bytes_rcv.get_name_leafdata());
    if (in_short_msg_discarded.is_set || is_set(in_short_msg_discarded.yfilter)) leaf_name_data.push_back(in_short_msg_discarded.get_name_leafdata());
    if (in_no_mem_discarded.is_set || is_set(in_no_mem_discarded.yfilter)) leaf_name_data.push_back(in_no_mem_discarded.get_name_leafdata());
    if (in_raw_event.is_set || is_set(in_raw_event.yfilter)) leaf_name_data.push_back(in_raw_event.get_name_leafdata());
    if (disconnects.is_set || is_set(disconnects.yfilter)) leaf_name_data.push_back(disconnects.get_name_leafdata());
    if (in_standby_discarded.is_set || is_set(in_standby_discarded.yfilter)) leaf_name_data.push_back(in_standby_discarded.get_name_leafdata());
    if (nsr_not_ready_discarded.is_set || is_set(nsr_not_ready_discarded.yfilter)) leaf_name_data.push_back(nsr_not_ready_discarded.get_name_leafdata());
    if (raw_connected.is_set || is_set(raw_connected.yfilter)) leaf_name_data.push_back(raw_connected.get_name_leafdata());
    if (sl_raw_connected.is_set || is_set(sl_raw_connected.yfilter)) leaf_name_data.push_back(sl_raw_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-sent")
    {
        out_sent = value;
        out_sent.value_namespace = name_space;
        out_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-bytes-sent")
    {
        out_bytes_sent = value;
        out_bytes_sent.value_namespace = name_space;
        out_bytes_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-no-conn-discarded")
    {
        out_no_conn_discarded = value;
        out_no_conn_discarded.value_namespace = name_space;
        out_no_conn_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-null-src-discarded")
    {
        out_null_src_discarded = value;
        out_null_src_discarded.value_namespace = name_space;
        out_null_src_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-no-pak-discarded")
    {
        out_no_pak_discarded = value;
        out_no_pak_discarded.value_namespace = name_space;
        out_no_pak_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-ipv4-hdr-err-discarded")
    {
        out_ipv4_hdr_err_discarded = value;
        out_ipv4_hdr_err_discarded.value_namespace = name_space;
        out_ipv4_hdr_err_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-send-pak-err-discarded")
    {
        out_send_pak_err_discarded = value;
        out_send_pak_err_discarded.value_namespace = name_space;
        out_send_pak_err_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-rcv")
    {
        in_rcv = value;
        in_rcv.value_namespace = name_space;
        in_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bytes-rcv")
    {
        in_bytes_rcv = value;
        in_bytes_rcv.value_namespace = name_space;
        in_bytes_rcv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-short-msg-discarded")
    {
        in_short_msg_discarded = value;
        in_short_msg_discarded.value_namespace = name_space;
        in_short_msg_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-no-mem-discarded")
    {
        in_no_mem_discarded = value;
        in_no_mem_discarded.value_namespace = name_space;
        in_no_mem_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-raw-event")
    {
        in_raw_event = value;
        in_raw_event.value_namespace = name_space;
        in_raw_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnects")
    {
        disconnects = value;
        disconnects.value_namespace = name_space;
        disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-standby-discarded")
    {
        in_standby_discarded = value;
        in_standby_discarded.value_namespace = name_space;
        in_standby_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-not-ready-discarded")
    {
        nsr_not_ready_discarded = value;
        nsr_not_ready_discarded.value_namespace = name_space;
        nsr_not_ready_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-connected")
    {
        raw_connected = value;
        raw_connected.value_namespace = name_space;
        raw_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sl-raw-connected")
    {
        sl_raw_connected = value;
        sl_raw_connected.value_namespace = name_space;
        sl_raw_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-sent")
    {
        out_sent.yfilter = yfilter;
    }
    if(value_path == "out-bytes-sent")
    {
        out_bytes_sent.yfilter = yfilter;
    }
    if(value_path == "out-no-conn-discarded")
    {
        out_no_conn_discarded.yfilter = yfilter;
    }
    if(value_path == "out-null-src-discarded")
    {
        out_null_src_discarded.yfilter = yfilter;
    }
    if(value_path == "out-no-pak-discarded")
    {
        out_no_pak_discarded.yfilter = yfilter;
    }
    if(value_path == "out-ipv4-hdr-err-discarded")
    {
        out_ipv4_hdr_err_discarded.yfilter = yfilter;
    }
    if(value_path == "out-send-pak-err-discarded")
    {
        out_send_pak_err_discarded.yfilter = yfilter;
    }
    if(value_path == "in-rcv")
    {
        in_rcv.yfilter = yfilter;
    }
    if(value_path == "in-bytes-rcv")
    {
        in_bytes_rcv.yfilter = yfilter;
    }
    if(value_path == "in-short-msg-discarded")
    {
        in_short_msg_discarded.yfilter = yfilter;
    }
    if(value_path == "in-no-mem-discarded")
    {
        in_no_mem_discarded.yfilter = yfilter;
    }
    if(value_path == "in-raw-event")
    {
        in_raw_event.yfilter = yfilter;
    }
    if(value_path == "disconnects")
    {
        disconnects.yfilter = yfilter;
    }
    if(value_path == "in-standby-discarded")
    {
        in_standby_discarded.yfilter = yfilter;
    }
    if(value_path == "nsr-not-ready-discarded")
    {
        nsr_not_ready_discarded.yfilter = yfilter;
    }
    if(value_path == "raw-connected")
    {
        raw_connected.yfilter = yfilter;
    }
    if(value_path == "sl-raw-connected")
    {
        sl_raw_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::RawIoStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-sent" || name == "out-bytes-sent" || name == "out-no-conn-discarded" || name == "out-null-src-discarded" || name == "out-no-pak-discarded" || name == "out-ipv4-hdr-err-discarded" || name == "out-send-pak-err-discarded" || name == "in-rcv" || name == "in-bytes-rcv" || name == "in-short-msg-discarded" || name == "in-no-mem-discarded" || name == "in-raw-event" || name == "disconnects" || name == "in-standby-discarded" || name == "nsr-not-ready-discarded" || name == "raw-connected" || name == "sl-raw-connected")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntries()
{

    yang_name = "interface-stats-entries"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::~InterfaceStatsEntries()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::has_data() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::has_operation() const
{
    for (std::size_t index=0; index<interface_stats_entry.size(); index++)
    {
        if(interface_stats_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-stats-entry")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry>();
        c->parent = this;
        interface_stats_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_stats_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-stats-entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::InterfaceStatsEntry()
    :
    interface_name{YType::str, "interface-name"},
    handle{YType::str, "handle"},
    if_name_str{YType::str, "if-name-str"}
{

    yang_name = "interface-stats-entry"; yang_parent_name = "interface-stats-entries"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::~InterfaceStatsEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::has_data() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| handle.is_set
	|| if_name_str.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::has_operation() const
{
    for (std::size_t index=0; index<if_entry.size(); index++)
    {
        if(if_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(if_name_str.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-stats-entry" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (if_name_str.is_set || is_set(if_name_str.yfilter)) leaf_name_data.push_back(if_name_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-entry")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry>();
        c->parent = this;
        if_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : if_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-name-str")
    {
        if_name_str = value;
        if_name_str.value_namespace = name_space;
        if_name_str.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "if-name-str")
    {
        if_name_str.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-entry" || name == "interface-name" || name == "handle" || name == "if-name-str")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfEntry()
    :
    madj_intf{YType::boolean, "madj-intf"},
    area_id{YType::uint32, "area-id"},
    area_id_str{YType::str, "area-id-str"}
{

    yang_name = "if-entry"; yang_parent_name = "interface-stats-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::~IfEntry()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_data() const
{
    for (std::size_t index=0; index<if_stat.size(); index++)
    {
        if(if_stat[index]->has_data())
            return true;
    }
    return madj_intf.is_set
	|| area_id.is_set
	|| area_id_str.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_operation() const
{
    for (std::size_t index=0; index<if_stat.size(); index++)
    {
        if(if_stat[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(madj_intf.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_id_str.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (madj_intf.is_set || is_set(madj_intf.yfilter)) leaf_name_data.push_back(madj_intf.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_id_str.is_set || is_set(area_id_str.yfilter)) leaf_name_data.push_back(area_id_str.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "if-stat")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat>();
        c->parent = this;
        if_stat.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : if_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "madj-intf")
    {
        madj_intf = value;
        madj_intf.value_namespace = name_space;
        madj_intf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id-str")
    {
        area_id_str = value;
        area_id_str.value_namespace = name_space;
        area_id_str.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "madj-intf")
    {
        madj_intf.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-id-str")
    {
        area_id_str.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-stat" || name == "madj-intf" || name == "area-id" || name == "area-id-str")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::IfStat()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "if-stat"; yang_parent_name = "if-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::~IfStat()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_data() const
{
    return entry.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::Statistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry::IfStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::AdjacencyInformation()
    :
    neighbors(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors>())
	,requests(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests>())
	,retransmissions(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions>())
	,neighbor_details(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails>())
{
    neighbors->parent = this;
    requests->parent = this;
    retransmissions->parent = this;
    neighbor_details->parent = this;

    yang_name = "adjacency-information"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::~AdjacencyInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::has_data() const
{
    return (neighbors !=  nullptr && neighbors->has_data())
	|| (requests !=  nullptr && requests->has_data())
	|| (retransmissions !=  nullptr && retransmissions->has_data())
	|| (neighbor_details !=  nullptr && neighbor_details->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::has_operation() const
{
    return is_set(yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (requests !=  nullptr && requests->has_operation())
	|| (retransmissions !=  nullptr && retransmissions->has_operation())
	|| (neighbor_details !=  nullptr && neighbor_details->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "requests")
    {
        if(requests == nullptr)
        {
            requests = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests>();
        }
        return requests;
    }

    if(child_yang_name == "retransmissions")
    {
        if(retransmissions == nullptr)
        {
            retransmissions = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions>();
        }
        return retransmissions;
    }

    if(child_yang_name == "neighbor-details")
    {
        if(neighbor_details == nullptr)
        {
            neighbor_details = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails>();
        }
        return neighbor_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(requests != nullptr)
    {
        children["requests"] = requests;
    }

    if(retransmissions != nullptr)
    {
        children["retransmissions"] = retransmissions;
    }

    if(neighbor_details != nullptr)
    {
        children["neighbor-details"] = neighbor_details;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors" || name == "requests" || name == "retransmissions" || name == "neighbor-details")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "adjacency-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::~Neighbors()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    dr_bdr_state{YType::enumeration, "dr-bdr-state"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"},
    neighbor_madj_interface{YType::boolean, "neighbor-madj-interface"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::has_data() const
{
    return interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_interface_name.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_state.is_set
	|| dr_bdr_state.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_up_time.is_set
	|| neighbor_madj_interface.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_address_xr.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(neighbor_dr_priority.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(dr_bdr_state.yfilter)
	|| ydk::is_set(neighbor_dead_timer.yfilter)
	|| ydk::is_set(neighbor_up_time.yfilter)
	|| ydk::is_set(neighbor_madj_interface.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.yfilter)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.yfilter)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (dr_bdr_state.is_set || is_set(dr_bdr_state.yfilter)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.yfilter)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.yfilter)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.yfilter)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
        neighbor_address_xr.value_namespace = name_space;
        neighbor_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
        neighbor_dr_priority.value_namespace = name_space;
        neighbor_dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
        dr_bdr_state.value_namespace = name_space;
        dr_bdr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
        neighbor_dead_timer.value_namespace = name_space;
        neighbor_dead_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
        neighbor_up_time.value_namespace = name_space;
        neighbor_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
        neighbor_madj_interface.value_namespace = name_space;
        neighbor_madj_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "interface-name" || name == "neighbor-address" || name == "neighbor-id" || name == "neighbor-address-xr" || name == "neighbor-interface-name" || name == "neighbor-dr-priority" || name == "neighbor-state" || name == "dr-bdr-state" || name == "neighbor-dead-timer" || name == "neighbor-up-time" || name == "neighbor-madj-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Neighbors::Neighbor::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Requests()
{

    yang_name = "requests"; yang_parent_name = "adjacency-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::~Requests()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "requests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : request)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    request_neighbor_id{YType::str, "request-neighbor-id"},
    request_neighbor_address{YType::str, "request-neighbor-address"},
    request_interface_name{YType::str, "request-interface-name"}
{

    yang_name = "request"; yang_parent_name = "requests"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::~Request()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::has_data() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| request_neighbor_id.is_set
	|| request_neighbor_address.is_set
	|| request_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::has_operation() const
{
    for (std::size_t index=0; index<request.size(); index++)
    {
        if(request[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(request_neighbor_id.yfilter)
	|| ydk::is_set(request_neighbor_address.yfilter)
	|| ydk::is_set(request_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (request_neighbor_id.is_set || is_set(request_neighbor_id.yfilter)) leaf_name_data.push_back(request_neighbor_id.get_name_leafdata());
    if (request_neighbor_address.is_set || is_set(request_neighbor_address.yfilter)) leaf_name_data.push_back(request_neighbor_address.get_name_leafdata());
    if (request_interface_name.is_set || is_set(request_interface_name.yfilter)) leaf_name_data.push_back(request_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_>();
        c->parent = this;
        request.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : request)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-neighbor-id")
    {
        request_neighbor_id = value;
        request_neighbor_id.value_namespace = name_space;
        request_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address = value;
        request_neighbor_address.value_namespace = name_space;
        request_neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-interface-name")
    {
        request_interface_name = value;
        request_interface_name.value_namespace = name_space;
        request_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "request-neighbor-id")
    {
        request_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "request-neighbor-address")
    {
        request_neighbor_address.yfilter = yfilter;
    }
    if(value_path == "request-interface-name")
    {
        request_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request" || name == "interface-name" || name == "neighbor-address" || name == "request-neighbor-id" || name == "request-neighbor-address" || name == "request-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::Request_()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_ls_id{YType::str, "header-ls-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::uint32, "header-sequence-number"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"}
{

    yang_name = "request"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::~Request_()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::has_data() const
{
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_ls_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set
	|| header_lsa_checksum.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Requests::Request::Request_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-ls-id" || name == "header-advertising-router" || name == "header-sequence-number" || name == "header-lsa-checksum")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmissions()
{

    yang_name = "retransmissions"; yang_parent_name = "adjacency-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::~Retransmissions()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::has_data() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::has_operation() const
{
    for (std::size_t index=0; index<retransmission.size(); index++)
    {
        if(retransmission[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmissions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmission")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission>();
        c->parent = this;
        retransmission.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : retransmission)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmission")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::Retransmission()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    retransmission_neighbor_id{YType::str, "retransmission-neighbor-id"},
    retransmission_neighbor_ip_address{YType::str, "retransmission-neighbor-ip-address"},
    retransmission_interface_name{YType::str, "retransmission-interface-name"},
    retransmission_timer{YType::uint32, "retransmission-timer"},
    retransmission_count{YType::uint32, "retransmission-count"}
{

    yang_name = "retransmission"; yang_parent_name = "retransmissions"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::~Retransmission()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::has_data() const
{
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| retransmission_neighbor_id.is_set
	|| retransmission_neighbor_ip_address.is_set
	|| retransmission_interface_name.is_set
	|| retransmission_timer.is_set
	|| retransmission_count.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::has_operation() const
{
    for (std::size_t index=0; index<retransmission_area_db.size(); index++)
    {
        if(retransmission_area_db[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<retransmission_asdb.size(); index++)
    {
        if(retransmission_asdb[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(retransmission_neighbor_id.yfilter)
	|| ydk::is_set(retransmission_neighbor_ip_address.yfilter)
	|| ydk::is_set(retransmission_interface_name.yfilter)
	|| ydk::is_set(retransmission_timer.yfilter)
	|| ydk::is_set(retransmission_count.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (retransmission_neighbor_id.is_set || is_set(retransmission_neighbor_id.yfilter)) leaf_name_data.push_back(retransmission_neighbor_id.get_name_leafdata());
    if (retransmission_neighbor_ip_address.is_set || is_set(retransmission_neighbor_ip_address.yfilter)) leaf_name_data.push_back(retransmission_neighbor_ip_address.get_name_leafdata());
    if (retransmission_interface_name.is_set || is_set(retransmission_interface_name.yfilter)) leaf_name_data.push_back(retransmission_interface_name.get_name_leafdata());
    if (retransmission_timer.is_set || is_set(retransmission_timer.yfilter)) leaf_name_data.push_back(retransmission_timer.get_name_leafdata());
    if (retransmission_count.is_set || is_set(retransmission_count.yfilter)) leaf_name_data.push_back(retransmission_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "retransmission-area-db")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb>();
        c->parent = this;
        retransmission_area_db.push_back(c);
        return c;
    }

    if(child_yang_name == "retransmission-asdb")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb>();
        c->parent = this;
        retransmission_asdb.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : retransmission_area_db)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : retransmission_asdb)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-neighbor-id")
    {
        retransmission_neighbor_id = value;
        retransmission_neighbor_id.value_namespace = name_space;
        retransmission_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-neighbor-ip-address")
    {
        retransmission_neighbor_ip_address = value;
        retransmission_neighbor_ip_address.value_namespace = name_space;
        retransmission_neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-interface-name")
    {
        retransmission_interface_name = value;
        retransmission_interface_name.value_namespace = name_space;
        retransmission_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer = value;
        retransmission_timer.value_namespace = name_space;
        retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmission-count")
    {
        retransmission_count = value;
        retransmission_count.value_namespace = name_space;
        retransmission_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "retransmission-neighbor-id")
    {
        retransmission_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "retransmission-neighbor-ip-address")
    {
        retransmission_neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "retransmission-interface-name")
    {
        retransmission_interface_name.yfilter = yfilter;
    }
    if(value_path == "retransmission-timer")
    {
        retransmission_timer.yfilter = yfilter;
    }
    if(value_path == "retransmission-count")
    {
        retransmission_count.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "retransmission-area-db" || name == "retransmission-asdb" || name == "interface-name" || name == "neighbor-address" || name == "retransmission-neighbor-id" || name == "retransmission-neighbor-ip-address" || name == "retransmission-interface-name" || name == "retransmission-timer" || name == "retransmission-count")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::RetransmissionAreaDb()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_ls_id{YType::str, "header-ls-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::uint32, "header-sequence-number"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"}
{

    yang_name = "retransmission-area-db"; yang_parent_name = "retransmission"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::~RetransmissionAreaDb()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::has_data() const
{
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_ls_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set
	|| header_lsa_checksum.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-area-db";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAreaDb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-ls-id" || name == "header-advertising-router" || name == "header-sequence-number" || name == "header-lsa-checksum")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::RetransmissionAsdb()
    :
    header_lsa_type{YType::enumeration, "header-lsa-type"},
    header_lsa_age{YType::uint16, "header-lsa-age"},
    header_ls_id{YType::str, "header-ls-id"},
    header_advertising_router{YType::str, "header-advertising-router"},
    header_sequence_number{YType::uint32, "header-sequence-number"},
    header_lsa_checksum{YType::uint16, "header-lsa-checksum"}
{

    yang_name = "retransmission-asdb"; yang_parent_name = "retransmission"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::~RetransmissionAsdb()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::has_data() const
{
    return header_lsa_type.is_set
	|| header_lsa_age.is_set
	|| header_ls_id.is_set
	|| header_advertising_router.is_set
	|| header_sequence_number.is_set
	|| header_lsa_checksum.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(header_lsa_type.yfilter)
	|| ydk::is_set(header_lsa_age.yfilter)
	|| ydk::is_set(header_ls_id.yfilter)
	|| ydk::is_set(header_advertising_router.yfilter)
	|| ydk::is_set(header_sequence_number.yfilter)
	|| ydk::is_set(header_lsa_checksum.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmission-asdb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (header_lsa_type.is_set || is_set(header_lsa_type.yfilter)) leaf_name_data.push_back(header_lsa_type.get_name_leafdata());
    if (header_lsa_age.is_set || is_set(header_lsa_age.yfilter)) leaf_name_data.push_back(header_lsa_age.get_name_leafdata());
    if (header_ls_id.is_set || is_set(header_ls_id.yfilter)) leaf_name_data.push_back(header_ls_id.get_name_leafdata());
    if (header_advertising_router.is_set || is_set(header_advertising_router.yfilter)) leaf_name_data.push_back(header_advertising_router.get_name_leafdata());
    if (header_sequence_number.is_set || is_set(header_sequence_number.yfilter)) leaf_name_data.push_back(header_sequence_number.get_name_leafdata());
    if (header_lsa_checksum.is_set || is_set(header_lsa_checksum.yfilter)) leaf_name_data.push_back(header_lsa_checksum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type = value;
        header_lsa_type.value_namespace = name_space;
        header_lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age = value;
        header_lsa_age.value_namespace = name_space;
        header_lsa_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id = value;
        header_ls_id.value_namespace = name_space;
        header_ls_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router = value;
        header_advertising_router.value_namespace = name_space;
        header_advertising_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number = value;
        header_sequence_number.value_namespace = name_space;
        header_sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum = value;
        header_lsa_checksum.value_namespace = name_space;
        header_lsa_checksum.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "header-lsa-type")
    {
        header_lsa_type.yfilter = yfilter;
    }
    if(value_path == "header-lsa-age")
    {
        header_lsa_age.yfilter = yfilter;
    }
    if(value_path == "header-ls-id")
    {
        header_ls_id.yfilter = yfilter;
    }
    if(value_path == "header-advertising-router")
    {
        header_advertising_router.yfilter = yfilter;
    }
    if(value_path == "header-sequence-number")
    {
        header_sequence_number.yfilter = yfilter;
    }
    if(value_path == "header-lsa-checksum")
    {
        header_lsa_checksum.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::Retransmissions::Retransmission::RetransmissionAsdb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header-lsa-type" || name == "header-lsa-age" || name == "header-ls-id" || name == "header-advertising-router" || name == "header-sequence-number" || name == "header-lsa-checksum")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetails()
{

    yang_name = "neighbor-details"; yang_parent_name = "adjacency-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::~NeighborDetails()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::has_data() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::has_operation() const
{
    for (std::size_t index=0; index<neighbor_detail.size(); index++)
    {
        if(neighbor_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-detail")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail>();
        c->parent = this;
        neighbor_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-detail")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborDetail()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_area_id{YType::str, "neighbor-area-id"},
    state_change_count{YType::uint16, "state-change-count"},
    neighbor_cost{YType::uint16, "neighbor-cost"},
    neighbor_filter{YType::boolean, "neighbor-filter"},
    neighbor_designated_router_address{YType::str, "neighbor-designated-router-address"},
    neighbor_backup_designated_router_address{YType::str, "neighbor-backup-designated-router-address"},
    interface_type{YType::enumeration, "interface-type"},
    poll_interval{YType::uint32, "poll-interval"},
    next_poll_interval{YType::uint32, "next-poll-interval"},
    neighbor_option{YType::uint8, "neighbor-option"},
    pending_events{YType::uint16, "pending-events"},
    neighbor_lls_option{YType::uint32, "neighbor-lls-option"},
    oob_resynchronization{YType::boolean, "oob-resynchronization"},
    nsf_router_state{YType::enumeration, "nsf-router-state"},
    last_oob_time{YType::uint32, "last-oob-time"},
    lfa_interface{YType::str, "lfa-interface"},
    lfa_next_hop{YType::str, "lfa-next-hop"},
    lfa_neighbor_id{YType::str, "lfa-neighbor-id"},
    lfa_neighbor_revision{YType::uint32, "lfa-neighbor-revision"},
    neighbor_ack_list_count{YType::uint32, "neighbor-ack-list-count"},
    neighbor_ack_list_high_watermark{YType::uint32, "neighbor-ack-list-high-watermark"},
    adjacency_sid_label{YType::uint32, "adjacency-sid-label"},
    adjacency_sid_protected{YType::boolean, "adjacency-sid-protected"},
    adjacency_sid_unprotected_label{YType::uint32, "adjacency-sid-unprotected-label"},
    neighbor_interface_id{YType::uint16, "neighbor-interface-id"}
    	,
    neighbor_summary(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary>())
	,neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation>())
	,neighbor_retransmission_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>())
{
    neighbor_summary->parent = this;
    neighbor_bfd_information->parent = this;
    neighbor_retransmission_information->parent = this;

    yang_name = "neighbor-detail"; yang_parent_name = "neighbor-details"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::~NeighborDetail()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::has_data() const
{
    return interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_area_id.is_set
	|| state_change_count.is_set
	|| neighbor_cost.is_set
	|| neighbor_filter.is_set
	|| neighbor_designated_router_address.is_set
	|| neighbor_backup_designated_router_address.is_set
	|| interface_type.is_set
	|| poll_interval.is_set
	|| next_poll_interval.is_set
	|| neighbor_option.is_set
	|| pending_events.is_set
	|| neighbor_lls_option.is_set
	|| oob_resynchronization.is_set
	|| nsf_router_state.is_set
	|| last_oob_time.is_set
	|| lfa_interface.is_set
	|| lfa_next_hop.is_set
	|| lfa_neighbor_id.is_set
	|| lfa_neighbor_revision.is_set
	|| neighbor_ack_list_count.is_set
	|| neighbor_ack_list_high_watermark.is_set
	|| adjacency_sid_label.is_set
	|| adjacency_sid_protected.is_set
	|| adjacency_sid_unprotected_label.is_set
	|| neighbor_interface_id.is_set
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_data())
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(neighbor_area_id.yfilter)
	|| ydk::is_set(state_change_count.yfilter)
	|| ydk::is_set(neighbor_cost.yfilter)
	|| ydk::is_set(neighbor_filter.yfilter)
	|| ydk::is_set(neighbor_designated_router_address.yfilter)
	|| ydk::is_set(neighbor_backup_designated_router_address.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(poll_interval.yfilter)
	|| ydk::is_set(next_poll_interval.yfilter)
	|| ydk::is_set(neighbor_option.yfilter)
	|| ydk::is_set(pending_events.yfilter)
	|| ydk::is_set(neighbor_lls_option.yfilter)
	|| ydk::is_set(oob_resynchronization.yfilter)
	|| ydk::is_set(nsf_router_state.yfilter)
	|| ydk::is_set(last_oob_time.yfilter)
	|| ydk::is_set(lfa_interface.yfilter)
	|| ydk::is_set(lfa_next_hop.yfilter)
	|| ydk::is_set(lfa_neighbor_id.yfilter)
	|| ydk::is_set(lfa_neighbor_revision.yfilter)
	|| ydk::is_set(neighbor_ack_list_count.yfilter)
	|| ydk::is_set(neighbor_ack_list_high_watermark.yfilter)
	|| ydk::is_set(adjacency_sid_label.yfilter)
	|| ydk::is_set(adjacency_sid_protected.yfilter)
	|| ydk::is_set(adjacency_sid_unprotected_label.yfilter)
	|| ydk::is_set(neighbor_interface_id.yfilter)
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_operation())
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation())
	|| (neighbor_retransmission_information !=  nullptr && neighbor_retransmission_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_area_id.is_set || is_set(neighbor_area_id.yfilter)) leaf_name_data.push_back(neighbor_area_id.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.yfilter)) leaf_name_data.push_back(state_change_count.get_name_leafdata());
    if (neighbor_cost.is_set || is_set(neighbor_cost.yfilter)) leaf_name_data.push_back(neighbor_cost.get_name_leafdata());
    if (neighbor_filter.is_set || is_set(neighbor_filter.yfilter)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());
    if (neighbor_designated_router_address.is_set || is_set(neighbor_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_designated_router_address.get_name_leafdata());
    if (neighbor_backup_designated_router_address.is_set || is_set(neighbor_backup_designated_router_address.yfilter)) leaf_name_data.push_back(neighbor_backup_designated_router_address.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.yfilter)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (next_poll_interval.is_set || is_set(next_poll_interval.yfilter)) leaf_name_data.push_back(next_poll_interval.get_name_leafdata());
    if (neighbor_option.is_set || is_set(neighbor_option.yfilter)) leaf_name_data.push_back(neighbor_option.get_name_leafdata());
    if (pending_events.is_set || is_set(pending_events.yfilter)) leaf_name_data.push_back(pending_events.get_name_leafdata());
    if (neighbor_lls_option.is_set || is_set(neighbor_lls_option.yfilter)) leaf_name_data.push_back(neighbor_lls_option.get_name_leafdata());
    if (oob_resynchronization.is_set || is_set(oob_resynchronization.yfilter)) leaf_name_data.push_back(oob_resynchronization.get_name_leafdata());
    if (nsf_router_state.is_set || is_set(nsf_router_state.yfilter)) leaf_name_data.push_back(nsf_router_state.get_name_leafdata());
    if (last_oob_time.is_set || is_set(last_oob_time.yfilter)) leaf_name_data.push_back(last_oob_time.get_name_leafdata());
    if (lfa_interface.is_set || is_set(lfa_interface.yfilter)) leaf_name_data.push_back(lfa_interface.get_name_leafdata());
    if (lfa_next_hop.is_set || is_set(lfa_next_hop.yfilter)) leaf_name_data.push_back(lfa_next_hop.get_name_leafdata());
    if (lfa_neighbor_id.is_set || is_set(lfa_neighbor_id.yfilter)) leaf_name_data.push_back(lfa_neighbor_id.get_name_leafdata());
    if (lfa_neighbor_revision.is_set || is_set(lfa_neighbor_revision.yfilter)) leaf_name_data.push_back(lfa_neighbor_revision.get_name_leafdata());
    if (neighbor_ack_list_count.is_set || is_set(neighbor_ack_list_count.yfilter)) leaf_name_data.push_back(neighbor_ack_list_count.get_name_leafdata());
    if (neighbor_ack_list_high_watermark.is_set || is_set(neighbor_ack_list_high_watermark.yfilter)) leaf_name_data.push_back(neighbor_ack_list_high_watermark.get_name_leafdata());
    if (adjacency_sid_label.is_set || is_set(adjacency_sid_label.yfilter)) leaf_name_data.push_back(adjacency_sid_label.get_name_leafdata());
    if (adjacency_sid_protected.is_set || is_set(adjacency_sid_protected.yfilter)) leaf_name_data.push_back(adjacency_sid_protected.get_name_leafdata());
    if (adjacency_sid_unprotected_label.is_set || is_set(adjacency_sid_unprotected_label.yfilter)) leaf_name_data.push_back(adjacency_sid_unprotected_label.get_name_leafdata());
    if (neighbor_interface_id.is_set || is_set(neighbor_interface_id.yfilter)) leaf_name_data.push_back(neighbor_interface_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-summary")
    {
        if(neighbor_summary == nullptr)
        {
            neighbor_summary = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary>();
        }
        return neighbor_summary;
    }

    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    if(child_yang_name == "neighbor-retransmission-information")
    {
        if(neighbor_retransmission_information == nullptr)
        {
            neighbor_retransmission_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation>();
        }
        return neighbor_retransmission_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_summary != nullptr)
    {
        children["neighbor-summary"] = neighbor_summary;
    }

    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    if(neighbor_retransmission_information != nullptr)
    {
        children["neighbor-retransmission-information"] = neighbor_retransmission_information;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-area-id")
    {
        neighbor_area_id = value;
        neighbor_area_id.value_namespace = name_space;
        neighbor_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
        state_change_count.value_namespace = name_space;
        state_change_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost = value;
        neighbor_cost.value_namespace = name_space;
        neighbor_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
        neighbor_filter.value_namespace = name_space;
        neighbor_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address = value;
        neighbor_designated_router_address.value_namespace = name_space;
        neighbor_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address = value;
        neighbor_backup_designated_router_address.value_namespace = name_space;
        neighbor_backup_designated_router_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
        poll_interval.value_namespace = name_space;
        poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval = value;
        next_poll_interval.value_namespace = name_space;
        next_poll_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option = value;
        neighbor_option.value_namespace = name_space;
        neighbor_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-events")
    {
        pending_events = value;
        pending_events.value_namespace = name_space;
        pending_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-lls-option")
    {
        neighbor_lls_option = value;
        neighbor_lls_option.value_namespace = name_space;
        neighbor_lls_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oob-resynchronization")
    {
        oob_resynchronization = value;
        oob_resynchronization.value_namespace = name_space;
        oob_resynchronization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-router-state")
    {
        nsf_router_state = value;
        nsf_router_state.value_namespace = name_space;
        nsf_router_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-oob-time")
    {
        last_oob_time = value;
        last_oob_time.value_namespace = name_space;
        last_oob_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-interface")
    {
        lfa_interface = value;
        lfa_interface.value_namespace = name_space;
        lfa_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-next-hop")
    {
        lfa_next_hop = value;
        lfa_next_hop.value_namespace = name_space;
        lfa_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-neighbor-id")
    {
        lfa_neighbor_id = value;
        lfa_neighbor_id.value_namespace = name_space;
        lfa_neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-neighbor-revision")
    {
        lfa_neighbor_revision = value;
        lfa_neighbor_revision.value_namespace = name_space;
        lfa_neighbor_revision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ack-list-count")
    {
        neighbor_ack_list_count = value;
        neighbor_ack_list_count.value_namespace = name_space;
        neighbor_ack_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-ack-list-high-watermark")
    {
        neighbor_ack_list_high_watermark = value;
        neighbor_ack_list_high_watermark.value_namespace = name_space;
        neighbor_ack_list_high_watermark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sid-label")
    {
        adjacency_sid_label = value;
        adjacency_sid_label.value_namespace = name_space;
        adjacency_sid_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sid-protected")
    {
        adjacency_sid_protected = value;
        adjacency_sid_protected.value_namespace = name_space;
        adjacency_sid_protected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sid-unprotected-label")
    {
        adjacency_sid_unprotected_label = value;
        adjacency_sid_unprotected_label.value_namespace = name_space;
        adjacency_sid_unprotected_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id = value;
        neighbor_interface_id.value_namespace = name_space;
        neighbor_interface_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-area-id")
    {
        neighbor_area_id.yfilter = yfilter;
    }
    if(value_path == "state-change-count")
    {
        state_change_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-cost")
    {
        neighbor_cost.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter")
    {
        neighbor_filter.yfilter = yfilter;
    }
    if(value_path == "neighbor-designated-router-address")
    {
        neighbor_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "neighbor-backup-designated-router-address")
    {
        neighbor_backup_designated_router_address.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "poll-interval")
    {
        poll_interval.yfilter = yfilter;
    }
    if(value_path == "next-poll-interval")
    {
        next_poll_interval.yfilter = yfilter;
    }
    if(value_path == "neighbor-option")
    {
        neighbor_option.yfilter = yfilter;
    }
    if(value_path == "pending-events")
    {
        pending_events.yfilter = yfilter;
    }
    if(value_path == "neighbor-lls-option")
    {
        neighbor_lls_option.yfilter = yfilter;
    }
    if(value_path == "oob-resynchronization")
    {
        oob_resynchronization.yfilter = yfilter;
    }
    if(value_path == "nsf-router-state")
    {
        nsf_router_state.yfilter = yfilter;
    }
    if(value_path == "last-oob-time")
    {
        last_oob_time.yfilter = yfilter;
    }
    if(value_path == "lfa-interface")
    {
        lfa_interface.yfilter = yfilter;
    }
    if(value_path == "lfa-next-hop")
    {
        lfa_next_hop.yfilter = yfilter;
    }
    if(value_path == "lfa-neighbor-id")
    {
        lfa_neighbor_id.yfilter = yfilter;
    }
    if(value_path == "lfa-neighbor-revision")
    {
        lfa_neighbor_revision.yfilter = yfilter;
    }
    if(value_path == "neighbor-ack-list-count")
    {
        neighbor_ack_list_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-ack-list-high-watermark")
    {
        neighbor_ack_list_high_watermark.yfilter = yfilter;
    }
    if(value_path == "adjacency-sid-label")
    {
        adjacency_sid_label.yfilter = yfilter;
    }
    if(value_path == "adjacency-sid-protected")
    {
        adjacency_sid_protected.yfilter = yfilter;
    }
    if(value_path == "adjacency-sid-unprotected-label")
    {
        adjacency_sid_unprotected_label.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-id")
    {
        neighbor_interface_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-summary" || name == "neighbor-bfd-information" || name == "neighbor-retransmission-information" || name == "interface-name" || name == "neighbor-address" || name == "neighbor-area-id" || name == "state-change-count" || name == "neighbor-cost" || name == "neighbor-filter" || name == "neighbor-designated-router-address" || name == "neighbor-backup-designated-router-address" || name == "interface-type" || name == "poll-interval" || name == "next-poll-interval" || name == "neighbor-option" || name == "pending-events" || name == "neighbor-lls-option" || name == "oob-resynchronization" || name == "nsf-router-state" || name == "last-oob-time" || name == "lfa-interface" || name == "lfa-next-hop" || name == "lfa-neighbor-id" || name == "lfa-neighbor-revision" || name == "neighbor-ack-list-count" || name == "neighbor-ack-list-high-watermark" || name == "adjacency-sid-label" || name == "adjacency-sid-protected" || name == "adjacency-sid-unprotected-label" || name == "neighbor-interface-id")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborSummary()
    :
    neighbor_id{YType::str, "neighbor-id"},
    neighbor_address_xr{YType::str, "neighbor-address-xr"},
    neighbor_interface_name{YType::str, "neighbor-interface-name"},
    neighbor_dr_priority{YType::uint8, "neighbor-dr-priority"},
    neighbor_state{YType::enumeration, "neighbor-state"},
    dr_bdr_state{YType::enumeration, "dr-bdr-state"},
    neighbor_dead_timer{YType::uint32, "neighbor-dead-timer"},
    neighbor_up_time{YType::uint32, "neighbor-up-time"},
    neighbor_madj_interface{YType::boolean, "neighbor-madj-interface"}
    	,
    neighbor_bfd_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>())
{
    neighbor_bfd_information->parent = this;

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::~NeighborSummary()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_data() const
{
    return neighbor_id.is_set
	|| neighbor_address_xr.is_set
	|| neighbor_interface_name.is_set
	|| neighbor_dr_priority.is_set
	|| neighbor_state.is_set
	|| dr_bdr_state.is_set
	|| neighbor_dead_timer.is_set
	|| neighbor_up_time.is_set
	|| neighbor_madj_interface.is_set
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(neighbor_address_xr.yfilter)
	|| ydk::is_set(neighbor_interface_name.yfilter)
	|| ydk::is_set(neighbor_dr_priority.yfilter)
	|| ydk::is_set(neighbor_state.yfilter)
	|| ydk::is_set(dr_bdr_state.yfilter)
	|| ydk::is_set(neighbor_dead_timer.yfilter)
	|| ydk::is_set(neighbor_up_time.yfilter)
	|| ydk::is_set(neighbor_madj_interface.yfilter)
	|| (neighbor_bfd_information !=  nullptr && neighbor_bfd_information->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (neighbor_address_xr.is_set || is_set(neighbor_address_xr.yfilter)) leaf_name_data.push_back(neighbor_address_xr.get_name_leafdata());
    if (neighbor_interface_name.is_set || is_set(neighbor_interface_name.yfilter)) leaf_name_data.push_back(neighbor_interface_name.get_name_leafdata());
    if (neighbor_dr_priority.is_set || is_set(neighbor_dr_priority.yfilter)) leaf_name_data.push_back(neighbor_dr_priority.get_name_leafdata());
    if (neighbor_state.is_set || is_set(neighbor_state.yfilter)) leaf_name_data.push_back(neighbor_state.get_name_leafdata());
    if (dr_bdr_state.is_set || is_set(dr_bdr_state.yfilter)) leaf_name_data.push_back(dr_bdr_state.get_name_leafdata());
    if (neighbor_dead_timer.is_set || is_set(neighbor_dead_timer.yfilter)) leaf_name_data.push_back(neighbor_dead_timer.get_name_leafdata());
    if (neighbor_up_time.is_set || is_set(neighbor_up_time.yfilter)) leaf_name_data.push_back(neighbor_up_time.get_name_leafdata());
    if (neighbor_madj_interface.is_set || is_set(neighbor_madj_interface.yfilter)) leaf_name_data.push_back(neighbor_madj_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-bfd-information")
    {
        if(neighbor_bfd_information == nullptr)
        {
            neighbor_bfd_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation>();
        }
        return neighbor_bfd_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor_bfd_information != nullptr)
    {
        children["neighbor-bfd-information"] = neighbor_bfd_information;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr = value;
        neighbor_address_xr.value_namespace = name_space;
        neighbor_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name = value;
        neighbor_interface_name.value_namespace = name_space;
        neighbor_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority = value;
        neighbor_dr_priority.value_namespace = name_space;
        neighbor_dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state = value;
        neighbor_state.value_namespace = name_space;
        neighbor_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state = value;
        dr_bdr_state.value_namespace = name_space;
        dr_bdr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer = value;
        neighbor_dead_timer.value_namespace = name_space;
        neighbor_dead_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time = value;
        neighbor_up_time.value_namespace = name_space;
        neighbor_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface = value;
        neighbor_madj_interface.value_namespace = name_space;
        neighbor_madj_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-address-xr")
    {
        neighbor_address_xr.yfilter = yfilter;
    }
    if(value_path == "neighbor-interface-name")
    {
        neighbor_interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-dr-priority")
    {
        neighbor_dr_priority.yfilter = yfilter;
    }
    if(value_path == "neighbor-state")
    {
        neighbor_state.yfilter = yfilter;
    }
    if(value_path == "dr-bdr-state")
    {
        dr_bdr_state.yfilter = yfilter;
    }
    if(value_path == "neighbor-dead-timer")
    {
        neighbor_dead_timer.yfilter = yfilter;
    }
    if(value_path == "neighbor-up-time")
    {
        neighbor_up_time.yfilter = yfilter;
    }
    if(value_path == "neighbor-madj-interface")
    {
        neighbor_madj_interface.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-bfd-information" || name == "neighbor-id" || name == "neighbor-address-xr" || name == "neighbor-interface-name" || name == "neighbor-dr-priority" || name == "neighbor-state" || name == "dr-bdr-state" || name == "neighbor-dead-timer" || name == "neighbor-up-time" || name == "neighbor-madj-interface")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::NeighborBfdInformation()
    :
    bfd_intf_enable_mode{YType::uint32, "bfd-intf-enable-mode"},
    bfd_status_flag{YType::uint8, "bfd-status-flag"}
{

    yang_name = "neighbor-bfd-information"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::~NeighborBfdInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_data() const
{
    return bfd_intf_enable_mode.is_set
	|| bfd_status_flag.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd_intf_enable_mode.yfilter)
	|| ydk::is_set(bfd_status_flag.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-bfd-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_intf_enable_mode.is_set || is_set(bfd_intf_enable_mode.yfilter)) leaf_name_data.push_back(bfd_intf_enable_mode.get_name_leafdata());
    if (bfd_status_flag.is_set || is_set(bfd_status_flag.yfilter)) leaf_name_data.push_back(bfd_status_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode = value;
        bfd_intf_enable_mode.value_namespace = name_space;
        bfd_intf_enable_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag = value;
        bfd_status_flag.value_namespace = name_space;
        bfd_status_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd-intf-enable-mode")
    {
        bfd_intf_enable_mode.yfilter = yfilter;
    }
    if(value_path == "bfd-status-flag")
    {
        bfd_status_flag.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborBfdInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-intf-enable-mode" || name == "bfd-status-flag")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::NeighborRetransmissionInformation()
    :
    dbd_retransmission_count{YType::uint32, "dbd-retransmission-count"},
    dbd_retransmission_total_count{YType::uint32, "dbd-retransmission-total-count"},
    area_flooding_index{YType::uint32, "area-flooding-index"},
    as_flood_index{YType::uint32, "as-flood-index"},
    neighbor_retransmission_count{YType::uint32, "neighbor-retransmission-count"},
    number_of_retransmissions{YType::uint32, "number-of-retransmissions"},
    area_first_flood_information{YType::uint32, "area-first-flood-information"},
    area_first_flood_information_index{YType::uint32, "area-first-flood-information-index"},
    as_first_flood_information{YType::uint32, "as-first-flood-information"},
    as_first_flood_information_index{YType::uint32, "as-first-flood-information-index"},
    area_next_flood_information{YType::uint32, "area-next-flood-information"},
    area_next_flood_information_index{YType::uint32, "area-next-flood-information-index"},
    as_next_flood_information{YType::uint32, "as-next-flood-information"},
    as_next_flood_information_index{YType::uint32, "as-next-flood-information-index"},
    last_retransmission_length{YType::uint32, "last-retransmission-length"},
    maximum_retransmission_length{YType::uint32, "maximum-retransmission-length"},
    last_retransmission_time{YType::uint32, "last-retransmission-time"},
    maximum_retransmission_time{YType::uint32, "maximum-retransmission-time"},
    lsa_retransmission_timer{YType::uint32, "lsa-retransmission-timer"}
{

    yang_name = "neighbor-retransmission-information"; yang_parent_name = "neighbor-detail"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::~NeighborRetransmissionInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_data() const
{
    return dbd_retransmission_count.is_set
	|| dbd_retransmission_total_count.is_set
	|| area_flooding_index.is_set
	|| as_flood_index.is_set
	|| neighbor_retransmission_count.is_set
	|| number_of_retransmissions.is_set
	|| area_first_flood_information.is_set
	|| area_first_flood_information_index.is_set
	|| as_first_flood_information.is_set
	|| as_first_flood_information_index.is_set
	|| area_next_flood_information.is_set
	|| area_next_flood_information_index.is_set
	|| as_next_flood_information.is_set
	|| as_next_flood_information_index.is_set
	|| last_retransmission_length.is_set
	|| maximum_retransmission_length.is_set
	|| last_retransmission_time.is_set
	|| maximum_retransmission_time.is_set
	|| lsa_retransmission_timer.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dbd_retransmission_count.yfilter)
	|| ydk::is_set(dbd_retransmission_total_count.yfilter)
	|| ydk::is_set(area_flooding_index.yfilter)
	|| ydk::is_set(as_flood_index.yfilter)
	|| ydk::is_set(neighbor_retransmission_count.yfilter)
	|| ydk::is_set(number_of_retransmissions.yfilter)
	|| ydk::is_set(area_first_flood_information.yfilter)
	|| ydk::is_set(area_first_flood_information_index.yfilter)
	|| ydk::is_set(as_first_flood_information.yfilter)
	|| ydk::is_set(as_first_flood_information_index.yfilter)
	|| ydk::is_set(area_next_flood_information.yfilter)
	|| ydk::is_set(area_next_flood_information_index.yfilter)
	|| ydk::is_set(as_next_flood_information.yfilter)
	|| ydk::is_set(as_next_flood_information_index.yfilter)
	|| ydk::is_set(last_retransmission_length.yfilter)
	|| ydk::is_set(maximum_retransmission_length.yfilter)
	|| ydk::is_set(last_retransmission_time.yfilter)
	|| ydk::is_set(maximum_retransmission_time.yfilter)
	|| ydk::is_set(lsa_retransmission_timer.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-retransmission-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dbd_retransmission_count.is_set || is_set(dbd_retransmission_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_count.get_name_leafdata());
    if (dbd_retransmission_total_count.is_set || is_set(dbd_retransmission_total_count.yfilter)) leaf_name_data.push_back(dbd_retransmission_total_count.get_name_leafdata());
    if (area_flooding_index.is_set || is_set(area_flooding_index.yfilter)) leaf_name_data.push_back(area_flooding_index.get_name_leafdata());
    if (as_flood_index.is_set || is_set(as_flood_index.yfilter)) leaf_name_data.push_back(as_flood_index.get_name_leafdata());
    if (neighbor_retransmission_count.is_set || is_set(neighbor_retransmission_count.yfilter)) leaf_name_data.push_back(neighbor_retransmission_count.get_name_leafdata());
    if (number_of_retransmissions.is_set || is_set(number_of_retransmissions.yfilter)) leaf_name_data.push_back(number_of_retransmissions.get_name_leafdata());
    if (area_first_flood_information.is_set || is_set(area_first_flood_information.yfilter)) leaf_name_data.push_back(area_first_flood_information.get_name_leafdata());
    if (area_first_flood_information_index.is_set || is_set(area_first_flood_information_index.yfilter)) leaf_name_data.push_back(area_first_flood_information_index.get_name_leafdata());
    if (as_first_flood_information.is_set || is_set(as_first_flood_information.yfilter)) leaf_name_data.push_back(as_first_flood_information.get_name_leafdata());
    if (as_first_flood_information_index.is_set || is_set(as_first_flood_information_index.yfilter)) leaf_name_data.push_back(as_first_flood_information_index.get_name_leafdata());
    if (area_next_flood_information.is_set || is_set(area_next_flood_information.yfilter)) leaf_name_data.push_back(area_next_flood_information.get_name_leafdata());
    if (area_next_flood_information_index.is_set || is_set(area_next_flood_information_index.yfilter)) leaf_name_data.push_back(area_next_flood_information_index.get_name_leafdata());
    if (as_next_flood_information.is_set || is_set(as_next_flood_information.yfilter)) leaf_name_data.push_back(as_next_flood_information.get_name_leafdata());
    if (as_next_flood_information_index.is_set || is_set(as_next_flood_information_index.yfilter)) leaf_name_data.push_back(as_next_flood_information_index.get_name_leafdata());
    if (last_retransmission_length.is_set || is_set(last_retransmission_length.yfilter)) leaf_name_data.push_back(last_retransmission_length.get_name_leafdata());
    if (maximum_retransmission_length.is_set || is_set(maximum_retransmission_length.yfilter)) leaf_name_data.push_back(maximum_retransmission_length.get_name_leafdata());
    if (last_retransmission_time.is_set || is_set(last_retransmission_time.yfilter)) leaf_name_data.push_back(last_retransmission_time.get_name_leafdata());
    if (maximum_retransmission_time.is_set || is_set(maximum_retransmission_time.yfilter)) leaf_name_data.push_back(maximum_retransmission_time.get_name_leafdata());
    if (lsa_retransmission_timer.is_set || is_set(lsa_retransmission_timer.yfilter)) leaf_name_data.push_back(lsa_retransmission_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count = value;
        dbd_retransmission_count.value_namespace = name_space;
        dbd_retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count = value;
        dbd_retransmission_total_count.value_namespace = name_space;
        dbd_retransmission_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index = value;
        area_flooding_index.value_namespace = name_space;
        area_flooding_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index = value;
        as_flood_index.value_namespace = name_space;
        as_flood_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count = value;
        neighbor_retransmission_count.value_namespace = name_space;
        neighbor_retransmission_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions = value;
        number_of_retransmissions.value_namespace = name_space;
        number_of_retransmissions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information = value;
        area_first_flood_information.value_namespace = name_space;
        area_first_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index = value;
        area_first_flood_information_index.value_namespace = name_space;
        area_first_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information = value;
        as_first_flood_information.value_namespace = name_space;
        as_first_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index = value;
        as_first_flood_information_index.value_namespace = name_space;
        as_first_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information = value;
        area_next_flood_information.value_namespace = name_space;
        area_next_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index = value;
        area_next_flood_information_index.value_namespace = name_space;
        area_next_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information = value;
        as_next_flood_information.value_namespace = name_space;
        as_next_flood_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index = value;
        as_next_flood_information_index.value_namespace = name_space;
        as_next_flood_information_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length = value;
        last_retransmission_length.value_namespace = name_space;
        last_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length = value;
        maximum_retransmission_length.value_namespace = name_space;
        maximum_retransmission_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time = value;
        last_retransmission_time.value_namespace = name_space;
        last_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time = value;
        maximum_retransmission_time.value_namespace = name_space;
        maximum_retransmission_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer = value;
        lsa_retransmission_timer.value_namespace = name_space;
        lsa_retransmission_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dbd-retransmission-count")
    {
        dbd_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "dbd-retransmission-total-count")
    {
        dbd_retransmission_total_count.yfilter = yfilter;
    }
    if(value_path == "area-flooding-index")
    {
        area_flooding_index.yfilter = yfilter;
    }
    if(value_path == "as-flood-index")
    {
        as_flood_index.yfilter = yfilter;
    }
    if(value_path == "neighbor-retransmission-count")
    {
        neighbor_retransmission_count.yfilter = yfilter;
    }
    if(value_path == "number-of-retransmissions")
    {
        number_of_retransmissions.yfilter = yfilter;
    }
    if(value_path == "area-first-flood-information")
    {
        area_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-first-flood-information-index")
    {
        area_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information")
    {
        as_first_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-first-flood-information-index")
    {
        as_first_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information")
    {
        area_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "area-next-flood-information-index")
    {
        area_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information")
    {
        as_next_flood_information.yfilter = yfilter;
    }
    if(value_path == "as-next-flood-information-index")
    {
        as_next_flood_information_index.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-length")
    {
        last_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-length")
    {
        maximum_retransmission_length.yfilter = yfilter;
    }
    if(value_path == "last-retransmission-time")
    {
        last_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "maximum-retransmission-time")
    {
        maximum_retransmission_time.yfilter = yfilter;
    }
    if(value_path == "lsa-retransmission-timer")
    {
        lsa_retransmission_timer.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::AdjacencyInformation::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dbd-retransmission-count" || name == "dbd-retransmission-total-count" || name == "area-flooding-index" || name == "as-flood-index" || name == "neighbor-retransmission-count" || name == "number-of-retransmissions" || name == "area-first-flood-information" || name == "area-first-flood-information-index" || name == "as-first-flood-information" || name == "as-first-flood-information-index" || name == "area-next-flood-information" || name == "area-next-flood-information-index" || name == "as-next-flood-information" || name == "as-next-flood-information-index" || name == "last-retransmission-length" || name == "maximum-retransmission-length" || name == "last-retransmission-time" || name == "maximum-retransmission-time" || name == "lsa-retransmission-timer")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteInformation()
    :
    backup_routes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes>())
	,multicast_intact_route_table(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable>())
	,multicast_intact_backup_routes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes>())
	,summary_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation>())
	,connected_routes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes>())
	,local_routes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes>())
	,route_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas>())
	,route_table(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable>())
	,external_routes(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes>())
{
    backup_routes->parent = this;
    multicast_intact_route_table->parent = this;
    multicast_intact_backup_routes->parent = this;
    summary_information->parent = this;
    connected_routes->parent = this;
    local_routes->parent = this;
    route_areas->parent = this;
    route_table->parent = this;
    external_routes->parent = this;

    yang_name = "route-information"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::~RouteInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::has_data() const
{
    return (backup_routes !=  nullptr && backup_routes->has_data())
	|| (multicast_intact_route_table !=  nullptr && multicast_intact_route_table->has_data())
	|| (multicast_intact_backup_routes !=  nullptr && multicast_intact_backup_routes->has_data())
	|| (summary_information !=  nullptr && summary_information->has_data())
	|| (connected_routes !=  nullptr && connected_routes->has_data())
	|| (local_routes !=  nullptr && local_routes->has_data())
	|| (route_areas !=  nullptr && route_areas->has_data())
	|| (route_table !=  nullptr && route_table->has_data())
	|| (external_routes !=  nullptr && external_routes->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::has_operation() const
{
    return is_set(yfilter)
	|| (backup_routes !=  nullptr && backup_routes->has_operation())
	|| (multicast_intact_route_table !=  nullptr && multicast_intact_route_table->has_operation())
	|| (multicast_intact_backup_routes !=  nullptr && multicast_intact_backup_routes->has_operation())
	|| (summary_information !=  nullptr && summary_information->has_operation())
	|| (connected_routes !=  nullptr && connected_routes->has_operation())
	|| (local_routes !=  nullptr && local_routes->has_operation())
	|| (route_areas !=  nullptr && route_areas->has_operation())
	|| (route_table !=  nullptr && route_table->has_operation())
	|| (external_routes !=  nullptr && external_routes->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-routes")
    {
        if(backup_routes == nullptr)
        {
            backup_routes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes>();
        }
        return backup_routes;
    }

    if(child_yang_name == "multicast-intact-route-table")
    {
        if(multicast_intact_route_table == nullptr)
        {
            multicast_intact_route_table = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable>();
        }
        return multicast_intact_route_table;
    }

    if(child_yang_name == "multicast-intact-backup-routes")
    {
        if(multicast_intact_backup_routes == nullptr)
        {
            multicast_intact_backup_routes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes>();
        }
        return multicast_intact_backup_routes;
    }

    if(child_yang_name == "summary-information")
    {
        if(summary_information == nullptr)
        {
            summary_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation>();
        }
        return summary_information;
    }

    if(child_yang_name == "connected-routes")
    {
        if(connected_routes == nullptr)
        {
            connected_routes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes>();
        }
        return connected_routes;
    }

    if(child_yang_name == "local-routes")
    {
        if(local_routes == nullptr)
        {
            local_routes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes>();
        }
        return local_routes;
    }

    if(child_yang_name == "route-areas")
    {
        if(route_areas == nullptr)
        {
            route_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas>();
        }
        return route_areas;
    }

    if(child_yang_name == "route-table")
    {
        if(route_table == nullptr)
        {
            route_table = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteTable>();
        }
        return route_table;
    }

    if(child_yang_name == "external-routes")
    {
        if(external_routes == nullptr)
        {
            external_routes = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ExternalRoutes>();
        }
        return external_routes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(backup_routes != nullptr)
    {
        children["backup-routes"] = backup_routes;
    }

    if(multicast_intact_route_table != nullptr)
    {
        children["multicast-intact-route-table"] = multicast_intact_route_table;
    }

    if(multicast_intact_backup_routes != nullptr)
    {
        children["multicast-intact-backup-routes"] = multicast_intact_backup_routes;
    }

    if(summary_information != nullptr)
    {
        children["summary-information"] = summary_information;
    }

    if(connected_routes != nullptr)
    {
        children["connected-routes"] = connected_routes;
    }

    if(local_routes != nullptr)
    {
        children["local-routes"] = local_routes;
    }

    if(route_areas != nullptr)
    {
        children["route-areas"] = route_areas;
    }

    if(route_table != nullptr)
    {
        children["route-table"] = route_table;
    }

    if(external_routes != nullptr)
    {
        children["external-routes"] = external_routes;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-routes" || name == "multicast-intact-route-table" || name == "multicast-intact-backup-routes" || name == "summary-information" || name == "connected-routes" || name == "local-routes" || name == "route-areas" || name == "route-table" || name == "external-routes")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoutes()
{

    yang_name = "backup-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::~BackupRoutes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::has_data() const
{
    for (std::size_t index=0; index<backup_route.size(); index++)
    {
        if(backup_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::has_operation() const
{
    for (std::size_t index=0; index<backup_route.size(); index++)
    {
        if(backup_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-route")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute>();
        c->parent = this;
        backup_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-route")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::BackupRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "backup-route"; yang_parent_name = "backup-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::~BackupRoute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "backup-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    route_path_id{YType::uint16, "route-path-id"},
    lsa_type{YType::uint8, "lsa-type"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "backup-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| route_path_id.is_set
	|| lsa_type.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "route-path-id" || name == "lsa-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_metric{YType::uint32, "backup-metric"},
    primary_path{YType::boolean, "primary-path"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    downstream{YType::boolean, "downstream"},
    node_protect{YType::boolean, "node-protect"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_metric.is_set
	|| primary_path.is_set
	|| line_card_disjoint.is_set
	|| downstream.is_set
	|| node_protect.is_set
	|| srlg_disjoint.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter)
	|| ydk::is_set(backup_remote_lfa.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(backup_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.yfilter)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.yfilter)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
        backup_remote_lfa.value_namespace = name_space;
        backup_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
        backup_tunnel_interface_name.value_namespace = name_space;
        backup_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-metric" || name == "primary-path" || name == "line-card-disjoint" || name == "downstream" || name == "node-protect" || name == "srlg-disjoint" || name == "backup-remote-lfa" || name == "backup-repair-list-size" || name == "backup-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "backup-repair"; yang_parent_name = "route-backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::BackupRoutes::BackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::MulticastIntactRouteTable()
{

    yang_name = "multicast-intact-route-table"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::~MulticastIntactRouteTable()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-route-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route>();
        c->parent = this;
        route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : route)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::Route()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route"; yang_parent_name = "multicast-intact-route-table"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::~Route()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    lsa_type{YType::uint8, "lsa-type"},
    area_id{YType::uint32, "area-id"},
    area_format{YType::boolean, "area-format"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| lsa_type.is_set
	|| area_id.is_set
	|| area_format.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "lsa-type" || name == "area-id" || name == "area-format")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactRouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoutes()
{

    yang_name = "multicast-intact-backup-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::~MulticastIntactBackupRoutes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::has_data() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route.size(); index++)
    {
        if(multicast_intact_backup_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::has_operation() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route.size(); index++)
    {
        if(multicast_intact_backup_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-intact-backup-route")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute>();
        c->parent = this;
        multicast_intact_backup_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : multicast_intact_backup_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-intact-backup-route")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::MulticastIntactBackupRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "multicast-intact-backup-route"; yang_parent_name = "multicast-intact-backup-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::~MulticastIntactBackupRoute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "multicast-intact-backup-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    route_path_id{YType::uint16, "route-path-id"},
    lsa_type{YType::uint8, "lsa-type"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "multicast-intact-backup-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| route_path_id.is_set
	|| lsa_type.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "route-path-id" || name == "lsa-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_metric{YType::uint32, "backup-metric"},
    primary_path{YType::boolean, "primary-path"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    downstream{YType::boolean, "downstream"},
    node_protect{YType::boolean, "node-protect"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_metric.is_set
	|| primary_path.is_set
	|| line_card_disjoint.is_set
	|| downstream.is_set
	|| node_protect.is_set
	|| srlg_disjoint.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter)
	|| ydk::is_set(backup_remote_lfa.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(backup_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.yfilter)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.yfilter)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
        backup_remote_lfa.value_namespace = name_space;
        backup_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
        backup_tunnel_interface_name.value_namespace = name_space;
        backup_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-metric" || name == "primary-path" || name == "line-card-disjoint" || name == "downstream" || name == "node-protect" || name == "srlg-disjoint" || name == "backup-remote-lfa" || name == "backup-repair-list-size" || name == "backup-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "backup-repair"; yang_parent_name = "route-backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::RouteBackupPath::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::MulticastIntactBackupRoutes::MulticastIntactBackupRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::SummaryInformation()
    :
    failures{YType::uint32, "failures"},
    failure_address{YType::str, "failure-address"}
    	,
    failure_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime>())
	,common(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common>())
{
    failure_time->parent = this;
    common->parent = this;

    yang_name = "summary-information"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::~SummaryInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::has_data() const
{
    return failures.is_set
	|| failure_address.is_set
	|| (failure_time !=  nullptr && failure_time->has_data())
	|| (common !=  nullptr && common->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failures.yfilter)
	|| ydk::is_set(failure_address.yfilter)
	|| (failure_time !=  nullptr && failure_time->has_operation())
	|| (common !=  nullptr && common->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failures.is_set || is_set(failures.yfilter)) leaf_name_data.push_back(failures.get_name_leafdata());
    if (failure_address.is_set || is_set(failure_address.yfilter)) leaf_name_data.push_back(failure_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure-time")
    {
        if(failure_time == nullptr)
        {
            failure_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime>();
        }
        return failure_time;
    }

    if(child_yang_name == "common")
    {
        if(common == nullptr)
        {
            common = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common>();
        }
        return common;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(failure_time != nullptr)
    {
        children["failure-time"] = failure_time;
    }

    if(common != nullptr)
    {
        children["common"] = common;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failures")
    {
        failures = value;
        failures.value_namespace = name_space;
        failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-address")
    {
        failure_address = value;
        failure_address.value_namespace = name_space;
        failure_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failures")
    {
        failures.yfilter = yfilter;
    }
    if(value_path == "failure-address")
    {
        failure_address.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure-time" || name == "common" || name == "failures" || name == "failure-address")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::FailureTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "failure-time"; yang_parent_name = "summary-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::~FailureTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::FailureTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::Common()
    :
    external_type1s{YType::uint32, "external-type1s"},
    external_type2s{YType::uint32, "external-type2s"},
    external_nssa_type1s{YType::uint32, "external-nssa-type1s"},
    external_nssa_type2s{YType::uint32, "external-nssa-type2s"},
    inter_areas{YType::uint32, "inter-areas"},
    intra_areas{YType::uint32, "intra-areas"},
    total{YType::uint32, "total"}
{

    yang_name = "common"; yang_parent_name = "summary-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::~Common()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::has_data() const
{
    return external_type1s.is_set
	|| external_type2s.is_set
	|| external_nssa_type1s.is_set
	|| external_nssa_type2s.is_set
	|| inter_areas.is_set
	|| intra_areas.is_set
	|| total.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_type1s.yfilter)
	|| ydk::is_set(external_type2s.yfilter)
	|| ydk::is_set(external_nssa_type1s.yfilter)
	|| ydk::is_set(external_nssa_type2s.yfilter)
	|| ydk::is_set(inter_areas.yfilter)
	|| ydk::is_set(intra_areas.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_type1s.is_set || is_set(external_type1s.yfilter)) leaf_name_data.push_back(external_type1s.get_name_leafdata());
    if (external_type2s.is_set || is_set(external_type2s.yfilter)) leaf_name_data.push_back(external_type2s.get_name_leafdata());
    if (external_nssa_type1s.is_set || is_set(external_nssa_type1s.yfilter)) leaf_name_data.push_back(external_nssa_type1s.get_name_leafdata());
    if (external_nssa_type2s.is_set || is_set(external_nssa_type2s.yfilter)) leaf_name_data.push_back(external_nssa_type2s.get_name_leafdata());
    if (inter_areas.is_set || is_set(inter_areas.yfilter)) leaf_name_data.push_back(inter_areas.get_name_leafdata());
    if (intra_areas.is_set || is_set(intra_areas.yfilter)) leaf_name_data.push_back(intra_areas.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-type1s")
    {
        external_type1s = value;
        external_type1s.value_namespace = name_space;
        external_type1s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-type2s")
    {
        external_type2s = value;
        external_type2s.value_namespace = name_space;
        external_type2s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-nssa-type1s")
    {
        external_nssa_type1s = value;
        external_nssa_type1s.value_namespace = name_space;
        external_nssa_type1s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-nssa-type2s")
    {
        external_nssa_type2s = value;
        external_nssa_type2s.value_namespace = name_space;
        external_nssa_type2s.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-areas")
    {
        inter_areas = value;
        inter_areas.value_namespace = name_space;
        inter_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intra-areas")
    {
        intra_areas = value;
        intra_areas.value_namespace = name_space;
        intra_areas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-type1s")
    {
        external_type1s.yfilter = yfilter;
    }
    if(value_path == "external-type2s")
    {
        external_type2s.yfilter = yfilter;
    }
    if(value_path == "external-nssa-type1s")
    {
        external_nssa_type1s.yfilter = yfilter;
    }
    if(value_path == "external-nssa-type2s")
    {
        external_nssa_type2s.yfilter = yfilter;
    }
    if(value_path == "inter-areas")
    {
        inter_areas.yfilter = yfilter;
    }
    if(value_path == "intra-areas")
    {
        intra_areas.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::SummaryInformation::Common::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-type1s" || name == "external-type2s" || name == "external-nssa-type1s" || name == "external-nssa-type2s" || name == "inter-areas" || name == "intra-areas" || name == "total")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoutes()
{

    yang_name = "connected-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::~ConnectedRoutes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::has_data() const
{
    for (std::size_t index=0; index<connected_route.size(); index++)
    {
        if(connected_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::has_operation() const
{
    for (std::size_t index=0; index<connected_route.size(); index++)
    {
        if(connected_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-route")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute>();
        c->parent = this;
        connected_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : connected_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-route")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::ConnectedRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "connected-route"; yang_parent_name = "connected-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::~ConnectedRoute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "connected-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    lsa_type{YType::uint8, "lsa-type"},
    area_id{YType::uint32, "area-id"},
    area_format{YType::boolean, "area-format"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "connected-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| lsa_type.is_set
	|| area_id.is_set
	|| area_format.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "lsa-type" || name == "area-id" || name == "area-format")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::ConnectedRoutes::ConnectedRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoutes()
{

    yang_name = "local-routes"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::~LocalRoutes()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::has_data() const
{
    for (std::size_t index=0; index<local_route.size(); index++)
    {
        if(local_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::has_operation() const
{
    for (std::size_t index=0; index<local_route.size(); index++)
    {
        if(local_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-route")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute>();
        c->parent = this;
        local_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : local_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-route")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::LocalRoute()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "local-route"; yang_parent_name = "local-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::~LocalRoute()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "local-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    lsa_type{YType::uint8, "lsa-type"},
    area_id{YType::uint32, "area-id"},
    area_format{YType::boolean, "area-format"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "local-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| lsa_type.is_set
	|| area_id.is_set
	|| area_format.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "lsa-type" || name == "area-id" || name == "area-format")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::LocalRoutes::LocalRoute::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteAreas()
{

    yang_name = "route-areas"; yang_parent_name = "route-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::~RouteAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::has_data() const
{
    for (std::size_t index=0; index<route_area.size(); index++)
    {
        if(route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::has_operation() const
{
    for (std::size_t index=0; index<route_area.size(); index++)
    {
        if(route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-area")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea>();
        c->parent = this;
        route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : route_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-area")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteArea()
    :
    area_id{YType::int32, "area-id"}
    	,
    multicast_intact_backup_route_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas>())
	,connected_route_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas>())
	,backup_route_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas>())
	,route_area_informations(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations>())
	,multicast_intact_route_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas>())
	,summary_area_information(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation>())
	,local_route_areas(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas>())
{
    multicast_intact_backup_route_areas->parent = this;
    connected_route_areas->parent = this;
    backup_route_areas->parent = this;
    route_area_informations->parent = this;
    multicast_intact_route_areas->parent = this;
    summary_area_information->parent = this;
    local_route_areas->parent = this;

    yang_name = "route-area"; yang_parent_name = "route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::~RouteArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::has_data() const
{
    return area_id.is_set
	|| (multicast_intact_backup_route_areas !=  nullptr && multicast_intact_backup_route_areas->has_data())
	|| (connected_route_areas !=  nullptr && connected_route_areas->has_data())
	|| (backup_route_areas !=  nullptr && backup_route_areas->has_data())
	|| (route_area_informations !=  nullptr && route_area_informations->has_data())
	|| (multicast_intact_route_areas !=  nullptr && multicast_intact_route_areas->has_data())
	|| (summary_area_information !=  nullptr && summary_area_information->has_data())
	|| (local_route_areas !=  nullptr && local_route_areas->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| (multicast_intact_backup_route_areas !=  nullptr && multicast_intact_backup_route_areas->has_operation())
	|| (connected_route_areas !=  nullptr && connected_route_areas->has_operation())
	|| (backup_route_areas !=  nullptr && backup_route_areas->has_operation())
	|| (route_area_informations !=  nullptr && route_area_informations->has_operation())
	|| (multicast_intact_route_areas !=  nullptr && multicast_intact_route_areas->has_operation())
	|| (summary_area_information !=  nullptr && summary_area_information->has_operation())
	|| (local_route_areas !=  nullptr && local_route_areas->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area" <<"[area-id='" <<area_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-intact-backup-route-areas")
    {
        if(multicast_intact_backup_route_areas == nullptr)
        {
            multicast_intact_backup_route_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas>();
        }
        return multicast_intact_backup_route_areas;
    }

    if(child_yang_name == "connected-route-areas")
    {
        if(connected_route_areas == nullptr)
        {
            connected_route_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas>();
        }
        return connected_route_areas;
    }

    if(child_yang_name == "backup-route-areas")
    {
        if(backup_route_areas == nullptr)
        {
            backup_route_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas>();
        }
        return backup_route_areas;
    }

    if(child_yang_name == "route-area-informations")
    {
        if(route_area_informations == nullptr)
        {
            route_area_informations = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations>();
        }
        return route_area_informations;
    }

    if(child_yang_name == "multicast-intact-route-areas")
    {
        if(multicast_intact_route_areas == nullptr)
        {
            multicast_intact_route_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactRouteAreas>();
        }
        return multicast_intact_route_areas;
    }

    if(child_yang_name == "summary-area-information")
    {
        if(summary_area_information == nullptr)
        {
            summary_area_information = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::SummaryAreaInformation>();
        }
        return summary_area_information;
    }

    if(child_yang_name == "local-route-areas")
    {
        if(local_route_areas == nullptr)
        {
            local_route_areas = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::LocalRouteAreas>();
        }
        return local_route_areas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(multicast_intact_backup_route_areas != nullptr)
    {
        children["multicast-intact-backup-route-areas"] = multicast_intact_backup_route_areas;
    }

    if(connected_route_areas != nullptr)
    {
        children["connected-route-areas"] = connected_route_areas;
    }

    if(backup_route_areas != nullptr)
    {
        children["backup-route-areas"] = backup_route_areas;
    }

    if(route_area_informations != nullptr)
    {
        children["route-area-informations"] = route_area_informations;
    }

    if(multicast_intact_route_areas != nullptr)
    {
        children["multicast-intact-route-areas"] = multicast_intact_route_areas;
    }

    if(summary_area_information != nullptr)
    {
        children["summary-area-information"] = summary_area_information;
    }

    if(local_route_areas != nullptr)
    {
        children["local-route-areas"] = local_route_areas;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-intact-backup-route-areas" || name == "connected-route-areas" || name == "backup-route-areas" || name == "route-area-informations" || name == "multicast-intact-route-areas" || name == "summary-area-information" || name == "local-route-areas" || name == "area-id")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteAreas()
{

    yang_name = "multicast-intact-backup-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::~MulticastIntactBackupRouteAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::has_data() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route_area.size(); index++)
    {
        if(multicast_intact_backup_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<multicast_intact_backup_route_area.size(); index++)
    {
        if(multicast_intact_backup_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-intact-backup-route-area")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea>();
        c->parent = this;
        multicast_intact_backup_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : multicast_intact_backup_route_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-intact-backup-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::MulticastIntactBackupRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "multicast-intact-backup-route-area"; yang_parent_name = "multicast-intact-backup-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::~MulticastIntactBackupRouteArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-intact-backup-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "multicast-intact-backup-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    route_path_id{YType::uint16, "route-path-id"},
    lsa_type{YType::uint8, "lsa-type"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "multicast-intact-backup-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| route_path_id.is_set
	|| lsa_type.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "route-path-id" || name == "lsa-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_metric{YType::uint32, "backup-metric"},
    primary_path{YType::boolean, "primary-path"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    downstream{YType::boolean, "downstream"},
    node_protect{YType::boolean, "node-protect"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_metric.is_set
	|| primary_path.is_set
	|| line_card_disjoint.is_set
	|| downstream.is_set
	|| node_protect.is_set
	|| srlg_disjoint.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter)
	|| ydk::is_set(backup_remote_lfa.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(backup_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.yfilter)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.yfilter)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
        backup_remote_lfa.value_namespace = name_space;
        backup_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
        backup_tunnel_interface_name.value_namespace = name_space;
        backup_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-metric" || name == "primary-path" || name == "line-card-disjoint" || name == "downstream" || name == "node-protect" || name == "srlg-disjoint" || name == "backup-remote-lfa" || name == "backup-repair-list-size" || name == "backup-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "backup-repair"; yang_parent_name = "route-backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::MulticastIntactBackupRouteAreas::MulticastIntactBackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteAreas()
{

    yang_name = "connected-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::~ConnectedRouteAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::has_data() const
{
    for (std::size_t index=0; index<connected_route_area.size(); index++)
    {
        if(connected_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<connected_route_area.size(); index++)
    {
        if(connected_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-route-area")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea>();
        c->parent = this;
        connected_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : connected_route_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::ConnectedRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "connected-route-area"; yang_parent_name = "connected-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::~ConnectedRouteArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "connected-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    lsa_type{YType::uint8, "lsa-type"},
    area_id{YType::uint32, "area-id"},
    area_format{YType::boolean, "area-format"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "connected-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| lsa_type.is_set
	|| area_id.is_set
	|| area_format.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "lsa-type" || name == "area-id" || name == "area-format")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::ConnectedRouteAreas::ConnectedRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteAreas()
{

    yang_name = "backup-route-areas"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::~BackupRouteAreas()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::has_data() const
{
    for (std::size_t index=0; index<backup_route_area.size(); index++)
    {
        if(backup_route_area[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::has_operation() const
{
    for (std::size_t index=0; index<backup_route_area.size(); index++)
    {
        if(backup_route_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route-areas";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-route-area")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea>();
        c->parent = this;
        backup_route_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_route_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-route-area")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::BackupRouteArea()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "backup-route-area"; yang_parent_name = "backup-route-areas"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::~BackupRouteArea()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-route-area";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "backup-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    route_path_id{YType::uint16, "route-path-id"},
    lsa_type{YType::uint8, "lsa-type"}
    	,
    route_backup_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath>())
	,sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath>())
{
    route_backup_path->parent = this;
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "backup-route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| route_path_id.is_set
	|| lsa_type.is_set
	|| (route_backup_path !=  nullptr && route_backup_path->has_data())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_path_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| (route_backup_path !=  nullptr && route_backup_path->has_operation())
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_path_id.is_set || is_set(route_path_id.yfilter)) leaf_name_data.push_back(route_path_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-backup-path")
    {
        if(route_backup_path == nullptr)
        {
            route_backup_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath>();
        }
        return route_backup_path;
    }

    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_backup_path != nullptr)
    {
        children["route-backup-path"] = route_backup_path;
    }

    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-id")
    {
        route_path_id = value;
        route_path_id.value_namespace = name_space;
        route_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-path-id")
    {
        route_path_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-backup-path" || name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "route-path-id" || name == "lsa-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::RouteBackupPath()
    :
    backup_route_interface_name{YType::str, "backup-route-interface-name"},
    backup_route_next_hop_address{YType::str, "backup-route-next-hop-address"},
    backup_route_source{YType::str, "backup-route-source"},
    backup_metric{YType::uint32, "backup-metric"},
    primary_path{YType::boolean, "primary-path"},
    line_card_disjoint{YType::boolean, "line-card-disjoint"},
    downstream{YType::boolean, "downstream"},
    node_protect{YType::boolean, "node-protect"},
    srlg_disjoint{YType::boolean, "srlg-disjoint"},
    backup_remote_lfa{YType::str, "backup-remote-lfa"},
    backup_repair_list_size{YType::uint32, "backup-repair-list-size"},
    backup_tunnel_interface_name{YType::str, "backup-tunnel-interface-name"}
{

    yang_name = "route-backup-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::~RouteBackupPath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::has_data() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_data())
            return true;
    }
    return backup_route_interface_name.is_set
	|| backup_route_next_hop_address.is_set
	|| backup_route_source.is_set
	|| backup_metric.is_set
	|| primary_path.is_set
	|| line_card_disjoint.is_set
	|| downstream.is_set
	|| node_protect.is_set
	|| srlg_disjoint.is_set
	|| backup_remote_lfa.is_set
	|| backup_repair_list_size.is_set
	|| backup_tunnel_interface_name.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::has_operation() const
{
    for (std::size_t index=0; index<backup_repair.size(); index++)
    {
        if(backup_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backup_route_interface_name.yfilter)
	|| ydk::is_set(backup_route_next_hop_address.yfilter)
	|| ydk::is_set(backup_route_source.yfilter)
	|| ydk::is_set(backup_metric.yfilter)
	|| ydk::is_set(primary_path.yfilter)
	|| ydk::is_set(line_card_disjoint.yfilter)
	|| ydk::is_set(downstream.yfilter)
	|| ydk::is_set(node_protect.yfilter)
	|| ydk::is_set(srlg_disjoint.yfilter)
	|| ydk::is_set(backup_remote_lfa.yfilter)
	|| ydk::is_set(backup_repair_list_size.yfilter)
	|| ydk::is_set(backup_tunnel_interface_name.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_route_interface_name.is_set || is_set(backup_route_interface_name.yfilter)) leaf_name_data.push_back(backup_route_interface_name.get_name_leafdata());
    if (backup_route_next_hop_address.is_set || is_set(backup_route_next_hop_address.yfilter)) leaf_name_data.push_back(backup_route_next_hop_address.get_name_leafdata());
    if (backup_route_source.is_set || is_set(backup_route_source.yfilter)) leaf_name_data.push_back(backup_route_source.get_name_leafdata());
    if (backup_metric.is_set || is_set(backup_metric.yfilter)) leaf_name_data.push_back(backup_metric.get_name_leafdata());
    if (primary_path.is_set || is_set(primary_path.yfilter)) leaf_name_data.push_back(primary_path.get_name_leafdata());
    if (line_card_disjoint.is_set || is_set(line_card_disjoint.yfilter)) leaf_name_data.push_back(line_card_disjoint.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());
    if (srlg_disjoint.is_set || is_set(srlg_disjoint.yfilter)) leaf_name_data.push_back(srlg_disjoint.get_name_leafdata());
    if (backup_remote_lfa.is_set || is_set(backup_remote_lfa.yfilter)) leaf_name_data.push_back(backup_remote_lfa.get_name_leafdata());
    if (backup_repair_list_size.is_set || is_set(backup_repair_list_size.yfilter)) leaf_name_data.push_back(backup_repair_list_size.get_name_leafdata());
    if (backup_tunnel_interface_name.is_set || is_set(backup_tunnel_interface_name.yfilter)) leaf_name_data.push_back(backup_tunnel_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair>();
        c->parent = this;
        backup_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : backup_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name = value;
        backup_route_interface_name.value_namespace = name_space;
        backup_route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address = value;
        backup_route_next_hop_address.value_namespace = name_space;
        backup_route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source = value;
        backup_route_source.value_namespace = name_space;
        backup_route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-metric")
    {
        backup_metric = value;
        backup_metric.value_namespace = name_space;
        backup_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-path")
    {
        primary_path = value;
        primary_path.value_namespace = name_space;
        primary_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint = value;
        line_card_disjoint.value_namespace = name_space;
        line_card_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint = value;
        srlg_disjoint.value_namespace = name_space;
        srlg_disjoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa = value;
        backup_remote_lfa.value_namespace = name_space;
        backup_remote_lfa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size = value;
        backup_repair_list_size.value_namespace = name_space;
        backup_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name = value;
        backup_tunnel_interface_name.value_namespace = name_space;
        backup_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup-route-interface-name")
    {
        backup_route_interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-route-next-hop-address")
    {
        backup_route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-route-source")
    {
        backup_route_source.yfilter = yfilter;
    }
    if(value_path == "backup-metric")
    {
        backup_metric.yfilter = yfilter;
    }
    if(value_path == "primary-path")
    {
        primary_path.yfilter = yfilter;
    }
    if(value_path == "line-card-disjoint")
    {
        line_card_disjoint.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
    if(value_path == "srlg-disjoint")
    {
        srlg_disjoint.yfilter = yfilter;
    }
    if(value_path == "backup-remote-lfa")
    {
        backup_remote_lfa.yfilter = yfilter;
    }
    if(value_path == "backup-repair-list-size")
    {
        backup_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-interface-name")
    {
        backup_tunnel_interface_name.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-repair" || name == "backup-route-interface-name" || name == "backup-route-next-hop-address" || name == "backup-route-source" || name == "backup-metric" || name == "primary-path" || name == "line-card-disjoint" || name == "downstream" || name == "node-protect" || name == "srlg-disjoint" || name == "backup-remote-lfa" || name == "backup-repair-list-size" || name == "backup-tunnel-interface-name")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::BackupRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "backup-repair"; yang_parent_name = "route-backup-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::~BackupRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::RouteBackupPath::BackupRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::MicroloopRepair()
    :
    repair_element_id{YType::str, "repair-element-id"},
    repair_label{YType::uint32, "repair-label"},
    repair_element_type{YType::uint32, "repair-element-type"}
{

    yang_name = "microloop-repair"; yang_parent_name = "sr-microloop-avoidance-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::~MicroloopRepair()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_data() const
{
    return repair_element_id.is_set
	|| repair_label.is_set
	|| repair_element_type.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(repair_element_id.yfilter)
	|| ydk::is_set(repair_label.yfilter)
	|| ydk::is_set(repair_element_type.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "microloop-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (repair_element_id.is_set || is_set(repair_element_id.yfilter)) leaf_name_data.push_back(repair_element_id.get_name_leafdata());
    if (repair_label.is_set || is_set(repair_label.yfilter)) leaf_name_data.push_back(repair_label.get_name_leafdata());
    if (repair_element_type.is_set || is_set(repair_element_type.yfilter)) leaf_name_data.push_back(repair_element_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id = value;
        repair_element_id.value_namespace = name_space;
        repair_element_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-label")
    {
        repair_label = value;
        repair_label.value_namespace = name_space;
        repair_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type = value;
        repair_element_type.value_namespace = name_space;
        repair_element_type.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "repair-element-id")
    {
        repair_element_id.yfilter = yfilter;
    }
    if(value_path == "repair-label")
    {
        repair_label.yfilter = yfilter;
    }
    if(value_path == "repair-element-type")
    {
        repair_element_type.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::BackupRouteAreas::BackupRouteArea::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "repair-element-id" || name == "repair-label" || name == "repair-element-type")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformations()
{

    yang_name = "route-area-informations"; yang_parent_name = "route-area"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::~RouteAreaInformations()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::has_data() const
{
    for (std::size_t index=0; index<route_area_information.size(); index++)
    {
        if(route_area_information[index]->has_data())
            return true;
    }
    return false;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::has_operation() const
{
    for (std::size_t index=0; index<route_area_information.size(); index++)
    {
        if(route_area_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area-informations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-area-information")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation>();
        c->parent = this;
        route_area_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : route_area_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-area-information")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteAreaInformation()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    route_prefix{YType::str, "route-prefix"},
    route_prefix_length{YType::uint32, "route-prefix-length"},
    route_metric{YType::uint32, "route-metric"},
    route_type{YType::enumeration, "route-type"},
    route_connected{YType::boolean, "route-connected"}
    	,
    route_info(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo>())
{
    route_info->parent = this;

    yang_name = "route-area-information"; yang_parent_name = "route-area-informations"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::~RouteAreaInformation()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::has_data() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| prefix_length.is_set
	|| route_prefix.is_set
	|| route_prefix_length.is_set
	|| route_metric.is_set
	|| route_type.is_set
	|| route_connected.is_set
	|| (route_info !=  nullptr && route_info->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::has_operation() const
{
    for (std::size_t index=0; index<route_path.size(); index++)
    {
        if(route_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_prefix.yfilter)
	|| ydk::is_set(route_prefix_length.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_connected.yfilter)
	|| (route_info !=  nullptr && route_info->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-area-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_prefix.is_set || is_set(route_prefix.yfilter)) leaf_name_data.push_back(route_prefix.get_name_leafdata());
    if (route_prefix_length.is_set || is_set(route_prefix_length.yfilter)) leaf_name_data.push_back(route_prefix_length.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_connected.is_set || is_set(route_connected.yfilter)) leaf_name_data.push_back(route_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-info")
    {
        if(route_info == nullptr)
        {
            route_info = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo>();
        }
        return route_info;
    }

    if(child_yang_name == "route-path")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath>();
        c->parent = this;
        route_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_info != nullptr)
    {
        children["route-info"] = route_info;
    }

    count = 0;
    for (auto const & c : route_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix")
    {
        route_prefix = value;
        route_prefix.value_namespace = name_space;
        route_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length = value;
        route_prefix_length.value_namespace = name_space;
        route_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-connected")
    {
        route_connected = value;
        route_connected.value_namespace = name_space;
        route_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-prefix")
    {
        route_prefix.yfilter = yfilter;
    }
    if(value_path == "route-prefix-length")
    {
        route_prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-connected")
    {
        route_connected.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-info" || name == "route-path" || name == "prefix" || name == "prefix-length" || name == "route-prefix" || name == "route-prefix-length" || name == "route-metric" || name == "route-type" || name == "route-connected")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteInfo()
    :
    route_area_id{YType::uint32, "route-area-id"},
    route_te_metric{YType::uint32, "route-te-metric"},
    route_rib_version{YType::uint32, "route-rib-version"},
    route_spf_version{YType::uint64, "route-spf-version"},
    route_forward_distance{YType::uint32, "route-forward-distance"},
    route_source{YType::uint16, "route-source"},
    route_spf_priority{YType::uint8, "route-spf-priority"},
    route_auto_excluded{YType::boolean, "route-auto-excluded"},
    route_srte_prefix_registered{YType::boolean, "route-srte-prefix-registered"},
    route_srte_nbr_registered{YType::uint16, "route-srte-nbr-registered"}
    	,
    route_update_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime>())
	,route_fail_time(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime>())
{
    route_update_time->parent = this;
    route_fail_time->parent = this;

    yang_name = "route-info"; yang_parent_name = "route-area-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::~RouteInfo()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::has_data() const
{
    return route_area_id.is_set
	|| route_te_metric.is_set
	|| route_rib_version.is_set
	|| route_spf_version.is_set
	|| route_forward_distance.is_set
	|| route_source.is_set
	|| route_spf_priority.is_set
	|| route_auto_excluded.is_set
	|| route_srte_prefix_registered.is_set
	|| route_srte_nbr_registered.is_set
	|| (route_update_time !=  nullptr && route_update_time->has_data())
	|| (route_fail_time !=  nullptr && route_fail_time->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_area_id.yfilter)
	|| ydk::is_set(route_te_metric.yfilter)
	|| ydk::is_set(route_rib_version.yfilter)
	|| ydk::is_set(route_spf_version.yfilter)
	|| ydk::is_set(route_forward_distance.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_spf_priority.yfilter)
	|| ydk::is_set(route_auto_excluded.yfilter)
	|| ydk::is_set(route_srte_prefix_registered.yfilter)
	|| ydk::is_set(route_srte_nbr_registered.yfilter)
	|| (route_update_time !=  nullptr && route_update_time->has_operation())
	|| (route_fail_time !=  nullptr && route_fail_time->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_area_id.is_set || is_set(route_area_id.yfilter)) leaf_name_data.push_back(route_area_id.get_name_leafdata());
    if (route_te_metric.is_set || is_set(route_te_metric.yfilter)) leaf_name_data.push_back(route_te_metric.get_name_leafdata());
    if (route_rib_version.is_set || is_set(route_rib_version.yfilter)) leaf_name_data.push_back(route_rib_version.get_name_leafdata());
    if (route_spf_version.is_set || is_set(route_spf_version.yfilter)) leaf_name_data.push_back(route_spf_version.get_name_leafdata());
    if (route_forward_distance.is_set || is_set(route_forward_distance.yfilter)) leaf_name_data.push_back(route_forward_distance.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_spf_priority.is_set || is_set(route_spf_priority.yfilter)) leaf_name_data.push_back(route_spf_priority.get_name_leafdata());
    if (route_auto_excluded.is_set || is_set(route_auto_excluded.yfilter)) leaf_name_data.push_back(route_auto_excluded.get_name_leafdata());
    if (route_srte_prefix_registered.is_set || is_set(route_srte_prefix_registered.yfilter)) leaf_name_data.push_back(route_srte_prefix_registered.get_name_leafdata());
    if (route_srte_nbr_registered.is_set || is_set(route_srte_nbr_registered.yfilter)) leaf_name_data.push_back(route_srte_nbr_registered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-update-time")
    {
        if(route_update_time == nullptr)
        {
            route_update_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime>();
        }
        return route_update_time;
    }

    if(child_yang_name == "route-fail-time")
    {
        if(route_fail_time == nullptr)
        {
            route_fail_time = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime>();
        }
        return route_fail_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_update_time != nullptr)
    {
        children["route-update-time"] = route_update_time;
    }

    if(route_fail_time != nullptr)
    {
        children["route-fail-time"] = route_fail_time;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-area-id")
    {
        route_area_id = value;
        route_area_id.value_namespace = name_space;
        route_area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric = value;
        route_te_metric.value_namespace = name_space;
        route_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version = value;
        route_rib_version.value_namespace = name_space;
        route_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version = value;
        route_spf_version.value_namespace = name_space;
        route_spf_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance = value;
        route_forward_distance.value_namespace = name_space;
        route_forward_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority = value;
        route_spf_priority.value_namespace = name_space;
        route_spf_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded = value;
        route_auto_excluded.value_namespace = name_space;
        route_auto_excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered = value;
        route_srte_prefix_registered.value_namespace = name_space;
        route_srte_prefix_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered = value;
        route_srte_nbr_registered.value_namespace = name_space;
        route_srte_nbr_registered.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-area-id")
    {
        route_area_id.yfilter = yfilter;
    }
    if(value_path == "route-te-metric")
    {
        route_te_metric.yfilter = yfilter;
    }
    if(value_path == "route-rib-version")
    {
        route_rib_version.yfilter = yfilter;
    }
    if(value_path == "route-spf-version")
    {
        route_spf_version.yfilter = yfilter;
    }
    if(value_path == "route-forward-distance")
    {
        route_forward_distance.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-spf-priority")
    {
        route_spf_priority.yfilter = yfilter;
    }
    if(value_path == "route-auto-excluded")
    {
        route_auto_excluded.yfilter = yfilter;
    }
    if(value_path == "route-srte-prefix-registered")
    {
        route_srte_prefix_registered.yfilter = yfilter;
    }
    if(value_path == "route-srte-nbr-registered")
    {
        route_srte_nbr_registered.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-update-time" || name == "route-fail-time" || name == "route-area-id" || name == "route-te-metric" || name == "route-rib-version" || name == "route-spf-version" || name == "route-forward-distance" || name == "route-source" || name == "route-spf-priority" || name == "route-auto-excluded" || name == "route-srte-prefix-registered" || name == "route-srte-nbr-registered")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::RouteUpdateTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-update-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::~RouteUpdateTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteUpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::RouteFailTime()
    :
    second{YType::uint32, "second"},
    nanosecond{YType::uint32, "nanosecond"}
{

    yang_name = "route-fail-time"; yang_parent_name = "route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::~RouteFailTime()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::has_data() const
{
    return second.is_set
	|| nanosecond.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(nanosecond.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-fail-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (nanosecond.is_set || is_set(nanosecond.yfilter)) leaf_name_data.push_back(nanosecond.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanosecond")
    {
        nanosecond = value;
        nanosecond.value_namespace = name_space;
        nanosecond.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "nanosecond")
    {
        nanosecond.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RouteInfo::RouteFailTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "nanosecond")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::RoutePath()
    :
    route_interface_name{YType::str, "route-interface-name"},
    route_next_hop_address{YType::str, "route-next-hop-address"},
    route_source{YType::str, "route-source"},
    route_lsaid{YType::str, "route-lsaid"},
    route_path_is_mcast_intact{YType::boolean, "route-path-is-mcast-intact"},
    route_path_is_ucmp_path{YType::boolean, "route-path-is-ucmp-path"},
    route_metric{YType::uint32, "route-metric"},
    lsa_type{YType::uint8, "lsa-type"},
    area_id{YType::uint32, "area-id"},
    area_format{YType::boolean, "area-format"}
    	,
    sr_microloop_avoidance_path(std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath>())
{
    sr_microloop_avoidance_path->parent = this;

    yang_name = "route-path"; yang_parent_name = "route-area-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::~RoutePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::has_data() const
{
    return route_interface_name.is_set
	|| route_next_hop_address.is_set
	|| route_source.is_set
	|| route_lsaid.is_set
	|| route_path_is_mcast_intact.is_set
	|| route_path_is_ucmp_path.is_set
	|| route_metric.is_set
	|| lsa_type.is_set
	|| area_id.is_set
	|| area_format.is_set
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_data());
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_interface_name.yfilter)
	|| ydk::is_set(route_next_hop_address.yfilter)
	|| ydk::is_set(route_source.yfilter)
	|| ydk::is_set(route_lsaid.yfilter)
	|| ydk::is_set(route_path_is_mcast_intact.yfilter)
	|| ydk::is_set(route_path_is_ucmp_path.yfilter)
	|| ydk::is_set(route_metric.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(area_id.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| (sr_microloop_avoidance_path !=  nullptr && sr_microloop_avoidance_path->has_operation());
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_interface_name.is_set || is_set(route_interface_name.yfilter)) leaf_name_data.push_back(route_interface_name.get_name_leafdata());
    if (route_next_hop_address.is_set || is_set(route_next_hop_address.yfilter)) leaf_name_data.push_back(route_next_hop_address.get_name_leafdata());
    if (route_source.is_set || is_set(route_source.yfilter)) leaf_name_data.push_back(route_source.get_name_leafdata());
    if (route_lsaid.is_set || is_set(route_lsaid.yfilter)) leaf_name_data.push_back(route_lsaid.get_name_leafdata());
    if (route_path_is_mcast_intact.is_set || is_set(route_path_is_mcast_intact.yfilter)) leaf_name_data.push_back(route_path_is_mcast_intact.get_name_leafdata());
    if (route_path_is_ucmp_path.is_set || is_set(route_path_is_ucmp_path.yfilter)) leaf_name_data.push_back(route_path_is_ucmp_path.get_name_leafdata());
    if (route_metric.is_set || is_set(route_metric.yfilter)) leaf_name_data.push_back(route_metric.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (area_id.is_set || is_set(area_id.yfilter)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-microloop-avoidance-path")
    {
        if(sr_microloop_avoidance_path == nullptr)
        {
            sr_microloop_avoidance_path = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath>();
        }
        return sr_microloop_avoidance_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sr_microloop_avoidance_path != nullptr)
    {
        children["sr-microloop-avoidance-path"] = sr_microloop_avoidance_path;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name = value;
        route_interface_name.value_namespace = name_space;
        route_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address = value;
        route_next_hop_address.value_namespace = name_space;
        route_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-source")
    {
        route_source = value;
        route_source.value_namespace = name_space;
        route_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid = value;
        route_lsaid.value_namespace = name_space;
        route_lsaid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact = value;
        route_path_is_mcast_intact.value_namespace = name_space;
        route_path_is_mcast_intact.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path = value;
        route_path_is_ucmp_path.value_namespace = name_space;
        route_path_is_ucmp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-metric")
    {
        route_metric = value;
        route_metric.value_namespace = name_space;
        route_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-id")
    {
        area_id = value;
        area_id.value_namespace = name_space;
        area_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-interface-name")
    {
        route_interface_name.yfilter = yfilter;
    }
    if(value_path == "route-next-hop-address")
    {
        route_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "route-source")
    {
        route_source.yfilter = yfilter;
    }
    if(value_path == "route-lsaid")
    {
        route_lsaid.yfilter = yfilter;
    }
    if(value_path == "route-path-is-mcast-intact")
    {
        route_path_is_mcast_intact.yfilter = yfilter;
    }
    if(value_path == "route-path-is-ucmp-path")
    {
        route_path_is_ucmp_path.yfilter = yfilter;
    }
    if(value_path == "route-metric")
    {
        route_metric.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "area-id")
    {
        area_id.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-microloop-avoidance-path" || name == "route-interface-name" || name == "route-next-hop-address" || name == "route-source" || name == "route-lsaid" || name == "route-path-is-mcast-intact" || name == "route-path-is-ucmp-path" || name == "route-metric" || name == "lsa-type" || name == "area-id" || name == "area-format")
        return true;
    return false;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::SrMicroloopAvoidancePath()
    :
    microloop_repair_list_size{YType::uint32, "microloop-repair-list-size"},
    microloop_tunnel_interface_name{YType::str, "microloop-tunnel-interface-name"},
    microloop_strict_spf{YType::boolean, "microloop-strict-spf"}
{

    yang_name = "sr-microloop-avoidance-path"; yang_parent_name = "route-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::~SrMicroloopAvoidancePath()
{
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::has_data() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_data())
            return true;
    }
    return microloop_repair_list_size.is_set
	|| microloop_tunnel_interface_name.is_set
	|| microloop_strict_spf.is_set;
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::has_operation() const
{
    for (std::size_t index=0; index<microloop_repair.size(); index++)
    {
        if(microloop_repair[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(microloop_repair_list_size.yfilter)
	|| ydk::is_set(microloop_tunnel_interface_name.yfilter)
	|| ydk::is_set(microloop_strict_spf.yfilter);
}

std::string Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-microloop-avoidance-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (microloop_repair_list_size.is_set || is_set(microloop_repair_list_size.yfilter)) leaf_name_data.push_back(microloop_repair_list_size.get_name_leafdata());
    if (microloop_tunnel_interface_name.is_set || is_set(microloop_tunnel_interface_name.yfilter)) leaf_name_data.push_back(microloop_tunnel_interface_name.get_name_leafdata());
    if (microloop_strict_spf.is_set || is_set(microloop_strict_spf.yfilter)) leaf_name_data.push_back(microloop_strict_spf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "microloop-repair")
    {
        auto c = std::make_shared<Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair>();
        c->parent = this;
        microloop_repair.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : microloop_repair)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size = value;
        microloop_repair_list_size.value_namespace = name_space;
        microloop_repair_list_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name = value;
        microloop_tunnel_interface_name.value_namespace = name_space;
        microloop_tunnel_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf = value;
        microloop_strict_spf.value_namespace = name_space;
        microloop_strict_spf.value_namespace_prefix = name_space_prefix;
    }
}

void Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "microloop-repair-list-size")
    {
        microloop_repair_list_size.yfilter = yfilter;
    }
    if(value_path == "microloop-tunnel-interface-name")
    {
        microloop_tunnel_interface_name.yfilter = yfilter;
    }
    if(value_path == "microloop-strict-spf")
    {
        microloop_strict_spf.yfilter = yfilter;
    }
}

bool Ospf::Processes::Process::Vrfs::Vrf::RouteInformation::RouteAreas::RouteArea::RouteAreaInformations::RouteAreaInformation::RoutePath::SrMicroloopAvoidancePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "microloop-repair" || name == "microloop-repair-list-size" || name == "microloop-tunnel-interface-name" || name == "microloop-strict-spf")
        return true;
    return false;
}


}
}

