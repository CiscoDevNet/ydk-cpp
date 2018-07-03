
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_PROCESS_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_PROCESS_MIB {

CISCOPROCESSMIB::CISCOPROCESSMIB()
    :
    cpmcpuhistory(std::make_shared<CISCOPROCESSMIB::CpmCPUHistory>())
    , cpmcputotaltable(std::make_shared<CISCOPROCESSMIB::CpmCPUTotalTable>())
    , cpmcoretable(std::make_shared<CISCOPROCESSMIB::CpmCoreTable>())
    , cpmprocesstable(std::make_shared<CISCOPROCESSMIB::CpmProcessTable>())
    , cpmprocessextrevtable(std::make_shared<CISCOPROCESSMIB::CpmProcessExtRevTable>())
    , cpmcputhresholdtable(std::make_shared<CISCOPROCESSMIB::CpmCPUThresholdTable>())
    , cpmcpuhistorytable(std::make_shared<CISCOPROCESSMIB::CpmCPUHistoryTable>())
    , cpmcpuprocesshistorytable(std::make_shared<CISCOPROCESSMIB::CpmCPUProcessHistoryTable>())
    , cpmthreadtable(std::make_shared<CISCOPROCESSMIB::CpmThreadTable>())
    , cpmvirtualprocesstable(std::make_shared<CISCOPROCESSMIB::CpmVirtualProcessTable>())
{
    cpmcpuhistory->parent = this;
    cpmcputotaltable->parent = this;
    cpmcoretable->parent = this;
    cpmprocesstable->parent = this;
    cpmprocessextrevtable->parent = this;
    cpmcputhresholdtable->parent = this;
    cpmcpuhistorytable->parent = this;
    cpmcpuprocesshistorytable->parent = this;
    cpmthreadtable->parent = this;
    cpmvirtualprocesstable->parent = this;

    yang_name = "CISCO-PROCESS-MIB"; yang_parent_name = "CISCO-PROCESS-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOPROCESSMIB::~CISCOPROCESSMIB()
{
}

bool CISCOPROCESSMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cpmcpuhistory !=  nullptr && cpmcpuhistory->has_data())
	|| (cpmcputotaltable !=  nullptr && cpmcputotaltable->has_data())
	|| (cpmcoretable !=  nullptr && cpmcoretable->has_data())
	|| (cpmprocesstable !=  nullptr && cpmprocesstable->has_data())
	|| (cpmprocessextrevtable !=  nullptr && cpmprocessextrevtable->has_data())
	|| (cpmcputhresholdtable !=  nullptr && cpmcputhresholdtable->has_data())
	|| (cpmcpuhistorytable !=  nullptr && cpmcpuhistorytable->has_data())
	|| (cpmcpuprocesshistorytable !=  nullptr && cpmcpuprocesshistorytable->has_data())
	|| (cpmthreadtable !=  nullptr && cpmthreadtable->has_data())
	|| (cpmvirtualprocesstable !=  nullptr && cpmvirtualprocesstable->has_data());
}

bool CISCOPROCESSMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cpmcpuhistory !=  nullptr && cpmcpuhistory->has_operation())
	|| (cpmcputotaltable !=  nullptr && cpmcputotaltable->has_operation())
	|| (cpmcoretable !=  nullptr && cpmcoretable->has_operation())
	|| (cpmprocesstable !=  nullptr && cpmprocesstable->has_operation())
	|| (cpmprocessextrevtable !=  nullptr && cpmprocessextrevtable->has_operation())
	|| (cpmcputhresholdtable !=  nullptr && cpmcputhresholdtable->has_operation())
	|| (cpmcpuhistorytable !=  nullptr && cpmcpuhistorytable->has_operation())
	|| (cpmcpuprocesshistorytable !=  nullptr && cpmcpuprocesshistorytable->has_operation())
	|| (cpmthreadtable !=  nullptr && cpmthreadtable->has_operation())
	|| (cpmvirtualprocesstable !=  nullptr && cpmvirtualprocesstable->has_operation());
}

std::string CISCOPROCESSMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpmCPUHistory")
    {
        if(cpmcpuhistory == nullptr)
        {
            cpmcpuhistory = std::make_shared<CISCOPROCESSMIB::CpmCPUHistory>();
        }
        return cpmcpuhistory;
    }

    if(child_yang_name == "cpmCPUTotalTable")
    {
        if(cpmcputotaltable == nullptr)
        {
            cpmcputotaltable = std::make_shared<CISCOPROCESSMIB::CpmCPUTotalTable>();
        }
        return cpmcputotaltable;
    }

    if(child_yang_name == "cpmCoreTable")
    {
        if(cpmcoretable == nullptr)
        {
            cpmcoretable = std::make_shared<CISCOPROCESSMIB::CpmCoreTable>();
        }
        return cpmcoretable;
    }

    if(child_yang_name == "cpmProcessTable")
    {
        if(cpmprocesstable == nullptr)
        {
            cpmprocesstable = std::make_shared<CISCOPROCESSMIB::CpmProcessTable>();
        }
        return cpmprocesstable;
    }

    if(child_yang_name == "cpmProcessExtRevTable")
    {
        if(cpmprocessextrevtable == nullptr)
        {
            cpmprocessextrevtable = std::make_shared<CISCOPROCESSMIB::CpmProcessExtRevTable>();
        }
        return cpmprocessextrevtable;
    }

    if(child_yang_name == "cpmCPUThresholdTable")
    {
        if(cpmcputhresholdtable == nullptr)
        {
            cpmcputhresholdtable = std::make_shared<CISCOPROCESSMIB::CpmCPUThresholdTable>();
        }
        return cpmcputhresholdtable;
    }

    if(child_yang_name == "cpmCPUHistoryTable")
    {
        if(cpmcpuhistorytable == nullptr)
        {
            cpmcpuhistorytable = std::make_shared<CISCOPROCESSMIB::CpmCPUHistoryTable>();
        }
        return cpmcpuhistorytable;
    }

    if(child_yang_name == "cpmCPUProcessHistoryTable")
    {
        if(cpmcpuprocesshistorytable == nullptr)
        {
            cpmcpuprocesshistorytable = std::make_shared<CISCOPROCESSMIB::CpmCPUProcessHistoryTable>();
        }
        return cpmcpuprocesshistorytable;
    }

    if(child_yang_name == "cpmThreadTable")
    {
        if(cpmthreadtable == nullptr)
        {
            cpmthreadtable = std::make_shared<CISCOPROCESSMIB::CpmThreadTable>();
        }
        return cpmthreadtable;
    }

    if(child_yang_name == "cpmVirtualProcessTable")
    {
        if(cpmvirtualprocesstable == nullptr)
        {
            cpmvirtualprocesstable = std::make_shared<CISCOPROCESSMIB::CpmVirtualProcessTable>();
        }
        return cpmvirtualprocesstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cpmcpuhistory != nullptr)
    {
        children["cpmCPUHistory"] = cpmcpuhistory;
    }

    if(cpmcputotaltable != nullptr)
    {
        children["cpmCPUTotalTable"] = cpmcputotaltable;
    }

    if(cpmcoretable != nullptr)
    {
        children["cpmCoreTable"] = cpmcoretable;
    }

    if(cpmprocesstable != nullptr)
    {
        children["cpmProcessTable"] = cpmprocesstable;
    }

    if(cpmprocessextrevtable != nullptr)
    {
        children["cpmProcessExtRevTable"] = cpmprocessextrevtable;
    }

    if(cpmcputhresholdtable != nullptr)
    {
        children["cpmCPUThresholdTable"] = cpmcputhresholdtable;
    }

    if(cpmcpuhistorytable != nullptr)
    {
        children["cpmCPUHistoryTable"] = cpmcpuhistorytable;
    }

    if(cpmcpuprocesshistorytable != nullptr)
    {
        children["cpmCPUProcessHistoryTable"] = cpmcpuprocesshistorytable;
    }

    if(cpmthreadtable != nullptr)
    {
        children["cpmThreadTable"] = cpmthreadtable;
    }

    if(cpmvirtualprocesstable != nullptr)
    {
        children["cpmVirtualProcessTable"] = cpmvirtualprocesstable;
    }

    return children;
}

void CISCOPROCESSMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPROCESSMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOPROCESSMIB::clone_ptr() const
{
    return std::make_shared<CISCOPROCESSMIB>();
}

std::string CISCOPROCESSMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOPROCESSMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOPROCESSMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOPROCESSMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOPROCESSMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmCPUHistory" || name == "cpmCPUTotalTable" || name == "cpmCoreTable" || name == "cpmProcessTable" || name == "cpmProcessExtRevTable" || name == "cpmCPUThresholdTable" || name == "cpmCPUHistoryTable" || name == "cpmCPUProcessHistoryTable" || name == "cpmThreadTable" || name == "cpmVirtualProcessTable")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmCPUHistory::CpmCPUHistory()
    :
    cpmcpuhistorythreshold{YType::uint32, "cpmCPUHistoryThreshold"},
    cpmcpuhistorysize{YType::uint32, "cpmCPUHistorySize"}
{

    yang_name = "cpmCPUHistory"; yang_parent_name = "CISCO-PROCESS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmCPUHistory::~CpmCPUHistory()
{
}

bool CISCOPROCESSMIB::CpmCPUHistory::has_data() const
{
    if (is_presence_container) return true;
    return cpmcpuhistorythreshold.is_set
	|| cpmcpuhistorysize.is_set;
}

bool CISCOPROCESSMIB::CpmCPUHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpmcpuhistorythreshold.yfilter)
	|| ydk::is_set(cpmcpuhistorysize.yfilter);
}

std::string CISCOPROCESSMIB::CpmCPUHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmCPUHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmCPUHistory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmCPUHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpmcpuhistorythreshold.is_set || is_set(cpmcpuhistorythreshold.yfilter)) leaf_name_data.push_back(cpmcpuhistorythreshold.get_name_leafdata());
    if (cpmcpuhistorysize.is_set || is_set(cpmcpuhistorysize.yfilter)) leaf_name_data.push_back(cpmcpuhistorysize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmCPUHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmCPUHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPROCESSMIB::CpmCPUHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpmCPUHistoryThreshold")
    {
        cpmcpuhistorythreshold = value;
        cpmcpuhistorythreshold.value_namespace = name_space;
        cpmcpuhistorythreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUHistorySize")
    {
        cpmcpuhistorysize = value;
        cpmcpuhistorysize.value_namespace = name_space;
        cpmcpuhistorysize.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPROCESSMIB::CpmCPUHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpmCPUHistoryThreshold")
    {
        cpmcpuhistorythreshold.yfilter = yfilter;
    }
    if(value_path == "cpmCPUHistorySize")
    {
        cpmcpuhistorysize.yfilter = yfilter;
    }
}

bool CISCOPROCESSMIB::CpmCPUHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmCPUHistoryThreshold" || name == "cpmCPUHistorySize")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalTable()
    :
    cpmcputotalentry(this, {"cpmcputotalindex"})
{

    yang_name = "cpmCPUTotalTable"; yang_parent_name = "CISCO-PROCESS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmCPUTotalTable::~CpmCPUTotalTable()
{
}

bool CISCOPROCESSMIB::CpmCPUTotalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpmcputotalentry.len(); index++)
    {
        if(cpmcputotalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPROCESSMIB::CpmCPUTotalTable::has_operation() const
{
    for (std::size_t index=0; index<cpmcputotalentry.len(); index++)
    {
        if(cpmcputotalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPROCESSMIB::CpmCPUTotalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmCPUTotalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmCPUTotalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmCPUTotalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmCPUTotalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpmCPUTotalEntry")
    {
        auto c = std::make_shared<CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry>();
        c->parent = this;
        cpmcputotalentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmCPUTotalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpmcputotalentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPROCESSMIB::CpmCPUTotalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPROCESSMIB::CpmCPUTotalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPROCESSMIB::CpmCPUTotalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmCPUTotalEntry")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::CpmCPUTotalEntry()
    :
    cpmcputotalindex{YType::uint32, "cpmCPUTotalIndex"},
    cpmcputotalphysicalindex{YType::int32, "cpmCPUTotalPhysicalIndex"},
    cpmcputotal5sec{YType::uint32, "cpmCPUTotal5sec"},
    cpmcputotal1min{YType::uint32, "cpmCPUTotal1min"},
    cpmcputotal5min{YType::uint32, "cpmCPUTotal5min"},
    cpmcputotal5secrev{YType::uint32, "cpmCPUTotal5secRev"},
    cpmcputotal1minrev{YType::uint32, "cpmCPUTotal1minRev"},
    cpmcputotal5minrev{YType::uint32, "cpmCPUTotal5minRev"},
    cpmcpumoninterval{YType::uint32, "cpmCPUMonInterval"},
    cpmcputotalmonintervalvalue{YType::uint32, "cpmCPUTotalMonIntervalValue"},
    cpmcpuinterruptmonintervalvalue{YType::uint32, "cpmCPUInterruptMonIntervalValue"},
    cpmcpumemoryused{YType::uint32, "cpmCPUMemoryUsed"},
    cpmcpumemoryfree{YType::uint32, "cpmCPUMemoryFree"},
    cpmcpumemorykernelreserved{YType::uint32, "cpmCPUMemoryKernelReserved"},
    cpmcpumemorylowest{YType::uint32, "cpmCPUMemoryLowest"},
    cpmcpumemoryusedovrflw{YType::uint32, "cpmCPUMemoryUsedOvrflw"},
    cpmcpumemoryhcused{YType::uint64, "cpmCPUMemoryHCUsed"},
    cpmcpumemoryfreeovrflw{YType::uint32, "cpmCPUMemoryFreeOvrflw"},
    cpmcpumemoryhcfree{YType::uint64, "cpmCPUMemoryHCFree"},
    cpmcpumemorykernelreservedovrflw{YType::uint32, "cpmCPUMemoryKernelReservedOvrflw"},
    cpmcpumemoryhckernelreserved{YType::uint64, "cpmCPUMemoryHCKernelReserved"},
    cpmcpumemorylowestovrflw{YType::uint32, "cpmCPUMemoryLowestOvrflw"},
    cpmcpumemoryhclowest{YType::uint64, "cpmCPUMemoryHCLowest"},
    cpmcpuloadavg1min{YType::uint32, "cpmCPULoadAvg1min"},
    cpmcpuloadavg5min{YType::uint32, "cpmCPULoadAvg5min"},
    cpmcpuloadavg15min{YType::uint32, "cpmCPULoadAvg15min"},
    cpmcpumemorycommitted{YType::uint32, "cpmCPUMemoryCommitted"},
    cpmcpumemorycommittedovrflw{YType::uint32, "cpmCPUMemoryCommittedOvrflw"},
    cpmcpumemoryhccommitted{YType::uint64, "cpmCPUMemoryHCCommitted"}
{

    yang_name = "cpmCPUTotalEntry"; yang_parent_name = "cpmCPUTotalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::~CpmCPUTotalEntry()
{
}

bool CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::has_data() const
{
    if (is_presence_container) return true;
    return cpmcputotalindex.is_set
	|| cpmcputotalphysicalindex.is_set
	|| cpmcputotal5sec.is_set
	|| cpmcputotal1min.is_set
	|| cpmcputotal5min.is_set
	|| cpmcputotal5secrev.is_set
	|| cpmcputotal1minrev.is_set
	|| cpmcputotal5minrev.is_set
	|| cpmcpumoninterval.is_set
	|| cpmcputotalmonintervalvalue.is_set
	|| cpmcpuinterruptmonintervalvalue.is_set
	|| cpmcpumemoryused.is_set
	|| cpmcpumemoryfree.is_set
	|| cpmcpumemorykernelreserved.is_set
	|| cpmcpumemorylowest.is_set
	|| cpmcpumemoryusedovrflw.is_set
	|| cpmcpumemoryhcused.is_set
	|| cpmcpumemoryfreeovrflw.is_set
	|| cpmcpumemoryhcfree.is_set
	|| cpmcpumemorykernelreservedovrflw.is_set
	|| cpmcpumemoryhckernelreserved.is_set
	|| cpmcpumemorylowestovrflw.is_set
	|| cpmcpumemoryhclowest.is_set
	|| cpmcpuloadavg1min.is_set
	|| cpmcpuloadavg5min.is_set
	|| cpmcpuloadavg15min.is_set
	|| cpmcpumemorycommitted.is_set
	|| cpmcpumemorycommittedovrflw.is_set
	|| cpmcpumemoryhccommitted.is_set;
}

bool CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpmcputotalindex.yfilter)
	|| ydk::is_set(cpmcputotalphysicalindex.yfilter)
	|| ydk::is_set(cpmcputotal5sec.yfilter)
	|| ydk::is_set(cpmcputotal1min.yfilter)
	|| ydk::is_set(cpmcputotal5min.yfilter)
	|| ydk::is_set(cpmcputotal5secrev.yfilter)
	|| ydk::is_set(cpmcputotal1minrev.yfilter)
	|| ydk::is_set(cpmcputotal5minrev.yfilter)
	|| ydk::is_set(cpmcpumoninterval.yfilter)
	|| ydk::is_set(cpmcputotalmonintervalvalue.yfilter)
	|| ydk::is_set(cpmcpuinterruptmonintervalvalue.yfilter)
	|| ydk::is_set(cpmcpumemoryused.yfilter)
	|| ydk::is_set(cpmcpumemoryfree.yfilter)
	|| ydk::is_set(cpmcpumemorykernelreserved.yfilter)
	|| ydk::is_set(cpmcpumemorylowest.yfilter)
	|| ydk::is_set(cpmcpumemoryusedovrflw.yfilter)
	|| ydk::is_set(cpmcpumemoryhcused.yfilter)
	|| ydk::is_set(cpmcpumemoryfreeovrflw.yfilter)
	|| ydk::is_set(cpmcpumemoryhcfree.yfilter)
	|| ydk::is_set(cpmcpumemorykernelreservedovrflw.yfilter)
	|| ydk::is_set(cpmcpumemoryhckernelreserved.yfilter)
	|| ydk::is_set(cpmcpumemorylowestovrflw.yfilter)
	|| ydk::is_set(cpmcpumemoryhclowest.yfilter)
	|| ydk::is_set(cpmcpuloadavg1min.yfilter)
	|| ydk::is_set(cpmcpuloadavg5min.yfilter)
	|| ydk::is_set(cpmcpuloadavg15min.yfilter)
	|| ydk::is_set(cpmcpumemorycommitted.yfilter)
	|| ydk::is_set(cpmcpumemorycommittedovrflw.yfilter)
	|| ydk::is_set(cpmcpumemoryhccommitted.yfilter);
}

std::string CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/cpmCPUTotalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmCPUTotalEntry";
    ADD_KEY_TOKEN(cpmcputotalindex, "cpmCPUTotalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpmcputotalindex.is_set || is_set(cpmcputotalindex.yfilter)) leaf_name_data.push_back(cpmcputotalindex.get_name_leafdata());
    if (cpmcputotalphysicalindex.is_set || is_set(cpmcputotalphysicalindex.yfilter)) leaf_name_data.push_back(cpmcputotalphysicalindex.get_name_leafdata());
    if (cpmcputotal5sec.is_set || is_set(cpmcputotal5sec.yfilter)) leaf_name_data.push_back(cpmcputotal5sec.get_name_leafdata());
    if (cpmcputotal1min.is_set || is_set(cpmcputotal1min.yfilter)) leaf_name_data.push_back(cpmcputotal1min.get_name_leafdata());
    if (cpmcputotal5min.is_set || is_set(cpmcputotal5min.yfilter)) leaf_name_data.push_back(cpmcputotal5min.get_name_leafdata());
    if (cpmcputotal5secrev.is_set || is_set(cpmcputotal5secrev.yfilter)) leaf_name_data.push_back(cpmcputotal5secrev.get_name_leafdata());
    if (cpmcputotal1minrev.is_set || is_set(cpmcputotal1minrev.yfilter)) leaf_name_data.push_back(cpmcputotal1minrev.get_name_leafdata());
    if (cpmcputotal5minrev.is_set || is_set(cpmcputotal5minrev.yfilter)) leaf_name_data.push_back(cpmcputotal5minrev.get_name_leafdata());
    if (cpmcpumoninterval.is_set || is_set(cpmcpumoninterval.yfilter)) leaf_name_data.push_back(cpmcpumoninterval.get_name_leafdata());
    if (cpmcputotalmonintervalvalue.is_set || is_set(cpmcputotalmonintervalvalue.yfilter)) leaf_name_data.push_back(cpmcputotalmonintervalvalue.get_name_leafdata());
    if (cpmcpuinterruptmonintervalvalue.is_set || is_set(cpmcpuinterruptmonintervalvalue.yfilter)) leaf_name_data.push_back(cpmcpuinterruptmonintervalvalue.get_name_leafdata());
    if (cpmcpumemoryused.is_set || is_set(cpmcpumemoryused.yfilter)) leaf_name_data.push_back(cpmcpumemoryused.get_name_leafdata());
    if (cpmcpumemoryfree.is_set || is_set(cpmcpumemoryfree.yfilter)) leaf_name_data.push_back(cpmcpumemoryfree.get_name_leafdata());
    if (cpmcpumemorykernelreserved.is_set || is_set(cpmcpumemorykernelreserved.yfilter)) leaf_name_data.push_back(cpmcpumemorykernelreserved.get_name_leafdata());
    if (cpmcpumemorylowest.is_set || is_set(cpmcpumemorylowest.yfilter)) leaf_name_data.push_back(cpmcpumemorylowest.get_name_leafdata());
    if (cpmcpumemoryusedovrflw.is_set || is_set(cpmcpumemoryusedovrflw.yfilter)) leaf_name_data.push_back(cpmcpumemoryusedovrflw.get_name_leafdata());
    if (cpmcpumemoryhcused.is_set || is_set(cpmcpumemoryhcused.yfilter)) leaf_name_data.push_back(cpmcpumemoryhcused.get_name_leafdata());
    if (cpmcpumemoryfreeovrflw.is_set || is_set(cpmcpumemoryfreeovrflw.yfilter)) leaf_name_data.push_back(cpmcpumemoryfreeovrflw.get_name_leafdata());
    if (cpmcpumemoryhcfree.is_set || is_set(cpmcpumemoryhcfree.yfilter)) leaf_name_data.push_back(cpmcpumemoryhcfree.get_name_leafdata());
    if (cpmcpumemorykernelreservedovrflw.is_set || is_set(cpmcpumemorykernelreservedovrflw.yfilter)) leaf_name_data.push_back(cpmcpumemorykernelreservedovrflw.get_name_leafdata());
    if (cpmcpumemoryhckernelreserved.is_set || is_set(cpmcpumemoryhckernelreserved.yfilter)) leaf_name_data.push_back(cpmcpumemoryhckernelreserved.get_name_leafdata());
    if (cpmcpumemorylowestovrflw.is_set || is_set(cpmcpumemorylowestovrflw.yfilter)) leaf_name_data.push_back(cpmcpumemorylowestovrflw.get_name_leafdata());
    if (cpmcpumemoryhclowest.is_set || is_set(cpmcpumemoryhclowest.yfilter)) leaf_name_data.push_back(cpmcpumemoryhclowest.get_name_leafdata());
    if (cpmcpuloadavg1min.is_set || is_set(cpmcpuloadavg1min.yfilter)) leaf_name_data.push_back(cpmcpuloadavg1min.get_name_leafdata());
    if (cpmcpuloadavg5min.is_set || is_set(cpmcpuloadavg5min.yfilter)) leaf_name_data.push_back(cpmcpuloadavg5min.get_name_leafdata());
    if (cpmcpuloadavg15min.is_set || is_set(cpmcpuloadavg15min.yfilter)) leaf_name_data.push_back(cpmcpuloadavg15min.get_name_leafdata());
    if (cpmcpumemorycommitted.is_set || is_set(cpmcpumemorycommitted.yfilter)) leaf_name_data.push_back(cpmcpumemorycommitted.get_name_leafdata());
    if (cpmcpumemorycommittedovrflw.is_set || is_set(cpmcpumemorycommittedovrflw.yfilter)) leaf_name_data.push_back(cpmcpumemorycommittedovrflw.get_name_leafdata());
    if (cpmcpumemoryhccommitted.is_set || is_set(cpmcpumemoryhccommitted.yfilter)) leaf_name_data.push_back(cpmcpumemoryhccommitted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex = value;
        cpmcputotalindex.value_namespace = name_space;
        cpmcputotalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUTotalPhysicalIndex")
    {
        cpmcputotalphysicalindex = value;
        cpmcputotalphysicalindex.value_namespace = name_space;
        cpmcputotalphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUTotal5sec")
    {
        cpmcputotal5sec = value;
        cpmcputotal5sec.value_namespace = name_space;
        cpmcputotal5sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUTotal1min")
    {
        cpmcputotal1min = value;
        cpmcputotal1min.value_namespace = name_space;
        cpmcputotal1min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUTotal5min")
    {
        cpmcputotal5min = value;
        cpmcputotal5min.value_namespace = name_space;
        cpmcputotal5min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUTotal5secRev")
    {
        cpmcputotal5secrev = value;
        cpmcputotal5secrev.value_namespace = name_space;
        cpmcputotal5secrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUTotal1minRev")
    {
        cpmcputotal1minrev = value;
        cpmcputotal1minrev.value_namespace = name_space;
        cpmcputotal1minrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUTotal5minRev")
    {
        cpmcputotal5minrev = value;
        cpmcputotal5minrev.value_namespace = name_space;
        cpmcputotal5minrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUMonInterval")
    {
        cpmcpumoninterval = value;
        cpmcpumoninterval.value_namespace = name_space;
        cpmcpumoninterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUTotalMonIntervalValue")
    {
        cpmcputotalmonintervalvalue = value;
        cpmcputotalmonintervalvalue.value_namespace = name_space;
        cpmcputotalmonintervalvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUInterruptMonIntervalValue")
    {
        cpmcpuinterruptmonintervalvalue = value;
        cpmcpuinterruptmonintervalvalue.value_namespace = name_space;
        cpmcpuinterruptmonintervalvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUMemoryUsed")
    {
        cpmcpumemoryused = value;
        cpmcpumemoryused.value_namespace = name_space;
        cpmcpumemoryused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUMemoryFree")
    {
        cpmcpumemoryfree = value;
        cpmcpumemoryfree.value_namespace = name_space;
        cpmcpumemoryfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUMemoryKernelReserved")
    {
        cpmcpumemorykernelreserved = value;
        cpmcpumemorykernelreserved.value_namespace = name_space;
        cpmcpumemorykernelreserved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUMemoryLowest")
    {
        cpmcpumemorylowest = value;
        cpmcpumemorylowest.value_namespace = name_space;
        cpmcpumemorylowest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUMemoryUsedOvrflw")
    {
        cpmcpumemoryusedovrflw = value;
        cpmcpumemoryusedovrflw.value_namespace = name_space;
        cpmcpumemoryusedovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUMemoryHCUsed")
    {
        cpmcpumemoryhcused = value;
        cpmcpumemoryhcused.value_namespace = name_space;
        cpmcpumemoryhcused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUMemoryFreeOvrflw")
    {
        cpmcpumemoryfreeovrflw = value;
        cpmcpumemoryfreeovrflw.value_namespace = name_space;
        cpmcpumemoryfreeovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUMemoryHCFree")
    {
        cpmcpumemoryhcfree = value;
        cpmcpumemoryhcfree.value_namespace = name_space;
        cpmcpumemoryhcfree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUMemoryKernelReservedOvrflw")
    {
        cpmcpumemorykernelreservedovrflw = value;
        cpmcpumemorykernelreservedovrflw.value_namespace = name_space;
        cpmcpumemorykernelreservedovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUMemoryHCKernelReserved")
    {
        cpmcpumemoryhckernelreserved = value;
        cpmcpumemoryhckernelreserved.value_namespace = name_space;
        cpmcpumemoryhckernelreserved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUMemoryLowestOvrflw")
    {
        cpmcpumemorylowestovrflw = value;
        cpmcpumemorylowestovrflw.value_namespace = name_space;
        cpmcpumemorylowestovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUMemoryHCLowest")
    {
        cpmcpumemoryhclowest = value;
        cpmcpumemoryhclowest.value_namespace = name_space;
        cpmcpumemoryhclowest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPULoadAvg1min")
    {
        cpmcpuloadavg1min = value;
        cpmcpuloadavg1min.value_namespace = name_space;
        cpmcpuloadavg1min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPULoadAvg5min")
    {
        cpmcpuloadavg5min = value;
        cpmcpuloadavg5min.value_namespace = name_space;
        cpmcpuloadavg5min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPULoadAvg15min")
    {
        cpmcpuloadavg15min = value;
        cpmcpuloadavg15min.value_namespace = name_space;
        cpmcpuloadavg15min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUMemoryCommitted")
    {
        cpmcpumemorycommitted = value;
        cpmcpumemorycommitted.value_namespace = name_space;
        cpmcpumemorycommitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUMemoryCommittedOvrflw")
    {
        cpmcpumemorycommittedovrflw = value;
        cpmcpumemorycommittedovrflw.value_namespace = name_space;
        cpmcpumemorycommittedovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUMemoryHCCommitted")
    {
        cpmcpumemoryhccommitted = value;
        cpmcpumemoryhccommitted.value_namespace = name_space;
        cpmcpumemoryhccommitted.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex.yfilter = yfilter;
    }
    if(value_path == "cpmCPUTotalPhysicalIndex")
    {
        cpmcputotalphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cpmCPUTotal5sec")
    {
        cpmcputotal5sec.yfilter = yfilter;
    }
    if(value_path == "cpmCPUTotal1min")
    {
        cpmcputotal1min.yfilter = yfilter;
    }
    if(value_path == "cpmCPUTotal5min")
    {
        cpmcputotal5min.yfilter = yfilter;
    }
    if(value_path == "cpmCPUTotal5secRev")
    {
        cpmcputotal5secrev.yfilter = yfilter;
    }
    if(value_path == "cpmCPUTotal1minRev")
    {
        cpmcputotal1minrev.yfilter = yfilter;
    }
    if(value_path == "cpmCPUTotal5minRev")
    {
        cpmcputotal5minrev.yfilter = yfilter;
    }
    if(value_path == "cpmCPUMonInterval")
    {
        cpmcpumoninterval.yfilter = yfilter;
    }
    if(value_path == "cpmCPUTotalMonIntervalValue")
    {
        cpmcputotalmonintervalvalue.yfilter = yfilter;
    }
    if(value_path == "cpmCPUInterruptMonIntervalValue")
    {
        cpmcpuinterruptmonintervalvalue.yfilter = yfilter;
    }
    if(value_path == "cpmCPUMemoryUsed")
    {
        cpmcpumemoryused.yfilter = yfilter;
    }
    if(value_path == "cpmCPUMemoryFree")
    {
        cpmcpumemoryfree.yfilter = yfilter;
    }
    if(value_path == "cpmCPUMemoryKernelReserved")
    {
        cpmcpumemorykernelreserved.yfilter = yfilter;
    }
    if(value_path == "cpmCPUMemoryLowest")
    {
        cpmcpumemorylowest.yfilter = yfilter;
    }
    if(value_path == "cpmCPUMemoryUsedOvrflw")
    {
        cpmcpumemoryusedovrflw.yfilter = yfilter;
    }
    if(value_path == "cpmCPUMemoryHCUsed")
    {
        cpmcpumemoryhcused.yfilter = yfilter;
    }
    if(value_path == "cpmCPUMemoryFreeOvrflw")
    {
        cpmcpumemoryfreeovrflw.yfilter = yfilter;
    }
    if(value_path == "cpmCPUMemoryHCFree")
    {
        cpmcpumemoryhcfree.yfilter = yfilter;
    }
    if(value_path == "cpmCPUMemoryKernelReservedOvrflw")
    {
        cpmcpumemorykernelreservedovrflw.yfilter = yfilter;
    }
    if(value_path == "cpmCPUMemoryHCKernelReserved")
    {
        cpmcpumemoryhckernelreserved.yfilter = yfilter;
    }
    if(value_path == "cpmCPUMemoryLowestOvrflw")
    {
        cpmcpumemorylowestovrflw.yfilter = yfilter;
    }
    if(value_path == "cpmCPUMemoryHCLowest")
    {
        cpmcpumemoryhclowest.yfilter = yfilter;
    }
    if(value_path == "cpmCPULoadAvg1min")
    {
        cpmcpuloadavg1min.yfilter = yfilter;
    }
    if(value_path == "cpmCPULoadAvg5min")
    {
        cpmcpuloadavg5min.yfilter = yfilter;
    }
    if(value_path == "cpmCPULoadAvg15min")
    {
        cpmcpuloadavg15min.yfilter = yfilter;
    }
    if(value_path == "cpmCPUMemoryCommitted")
    {
        cpmcpumemorycommitted.yfilter = yfilter;
    }
    if(value_path == "cpmCPUMemoryCommittedOvrflw")
    {
        cpmcpumemorycommittedovrflw.yfilter = yfilter;
    }
    if(value_path == "cpmCPUMemoryHCCommitted")
    {
        cpmcpumemoryhccommitted.yfilter = yfilter;
    }
}

bool CISCOPROCESSMIB::CpmCPUTotalTable::CpmCPUTotalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmCPUTotalIndex" || name == "cpmCPUTotalPhysicalIndex" || name == "cpmCPUTotal5sec" || name == "cpmCPUTotal1min" || name == "cpmCPUTotal5min" || name == "cpmCPUTotal5secRev" || name == "cpmCPUTotal1minRev" || name == "cpmCPUTotal5minRev" || name == "cpmCPUMonInterval" || name == "cpmCPUTotalMonIntervalValue" || name == "cpmCPUInterruptMonIntervalValue" || name == "cpmCPUMemoryUsed" || name == "cpmCPUMemoryFree" || name == "cpmCPUMemoryKernelReserved" || name == "cpmCPUMemoryLowest" || name == "cpmCPUMemoryUsedOvrflw" || name == "cpmCPUMemoryHCUsed" || name == "cpmCPUMemoryFreeOvrflw" || name == "cpmCPUMemoryHCFree" || name == "cpmCPUMemoryKernelReservedOvrflw" || name == "cpmCPUMemoryHCKernelReserved" || name == "cpmCPUMemoryLowestOvrflw" || name == "cpmCPUMemoryHCLowest" || name == "cpmCPULoadAvg1min" || name == "cpmCPULoadAvg5min" || name == "cpmCPULoadAvg15min" || name == "cpmCPUMemoryCommitted" || name == "cpmCPUMemoryCommittedOvrflw" || name == "cpmCPUMemoryHCCommitted")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmCoreTable::CpmCoreTable()
    :
    cpmcoreentry(this, {"cpmcputotalindex", "cpmcoreindex"})
{

    yang_name = "cpmCoreTable"; yang_parent_name = "CISCO-PROCESS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmCoreTable::~CpmCoreTable()
{
}

bool CISCOPROCESSMIB::CpmCoreTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpmcoreentry.len(); index++)
    {
        if(cpmcoreentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPROCESSMIB::CpmCoreTable::has_operation() const
{
    for (std::size_t index=0; index<cpmcoreentry.len(); index++)
    {
        if(cpmcoreentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPROCESSMIB::CpmCoreTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmCoreTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmCoreTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmCoreTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmCoreTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpmCoreEntry")
    {
        auto c = std::make_shared<CISCOPROCESSMIB::CpmCoreTable::CpmCoreEntry>();
        c->parent = this;
        cpmcoreentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmCoreTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpmcoreentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPROCESSMIB::CpmCoreTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPROCESSMIB::CpmCoreTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPROCESSMIB::CpmCoreTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmCoreEntry")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmCoreTable::CpmCoreEntry::CpmCoreEntry()
    :
    cpmcputotalindex{YType::str, "cpmCPUTotalIndex"},
    cpmcoreindex{YType::uint32, "cpmCoreIndex"},
    cpmcorephysicalindex{YType::int32, "cpmCorePhysicalIndex"},
    cpmcore5sec{YType::uint32, "cpmCore5sec"},
    cpmcore1min{YType::uint32, "cpmCore1min"},
    cpmcore5min{YType::uint32, "cpmCore5min"},
    cpmcoreloadavg1min{YType::uint32, "cpmCoreLoadAvg1min"},
    cpmcoreloadavg5min{YType::uint32, "cpmCoreLoadAvg5min"},
    cpmcoreloadavg15min{YType::uint32, "cpmCoreLoadAvg15min"}
{

    yang_name = "cpmCoreEntry"; yang_parent_name = "cpmCoreTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmCoreTable::CpmCoreEntry::~CpmCoreEntry()
{
}

bool CISCOPROCESSMIB::CpmCoreTable::CpmCoreEntry::has_data() const
{
    if (is_presence_container) return true;
    return cpmcputotalindex.is_set
	|| cpmcoreindex.is_set
	|| cpmcorephysicalindex.is_set
	|| cpmcore5sec.is_set
	|| cpmcore1min.is_set
	|| cpmcore5min.is_set
	|| cpmcoreloadavg1min.is_set
	|| cpmcoreloadavg5min.is_set
	|| cpmcoreloadavg15min.is_set;
}

bool CISCOPROCESSMIB::CpmCoreTable::CpmCoreEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpmcputotalindex.yfilter)
	|| ydk::is_set(cpmcoreindex.yfilter)
	|| ydk::is_set(cpmcorephysicalindex.yfilter)
	|| ydk::is_set(cpmcore5sec.yfilter)
	|| ydk::is_set(cpmcore1min.yfilter)
	|| ydk::is_set(cpmcore5min.yfilter)
	|| ydk::is_set(cpmcoreloadavg1min.yfilter)
	|| ydk::is_set(cpmcoreloadavg5min.yfilter)
	|| ydk::is_set(cpmcoreloadavg15min.yfilter);
}

std::string CISCOPROCESSMIB::CpmCoreTable::CpmCoreEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/cpmCoreTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmCoreTable::CpmCoreEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmCoreEntry";
    ADD_KEY_TOKEN(cpmcputotalindex, "cpmCPUTotalIndex");
    ADD_KEY_TOKEN(cpmcoreindex, "cpmCoreIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmCoreTable::CpmCoreEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpmcputotalindex.is_set || is_set(cpmcputotalindex.yfilter)) leaf_name_data.push_back(cpmcputotalindex.get_name_leafdata());
    if (cpmcoreindex.is_set || is_set(cpmcoreindex.yfilter)) leaf_name_data.push_back(cpmcoreindex.get_name_leafdata());
    if (cpmcorephysicalindex.is_set || is_set(cpmcorephysicalindex.yfilter)) leaf_name_data.push_back(cpmcorephysicalindex.get_name_leafdata());
    if (cpmcore5sec.is_set || is_set(cpmcore5sec.yfilter)) leaf_name_data.push_back(cpmcore5sec.get_name_leafdata());
    if (cpmcore1min.is_set || is_set(cpmcore1min.yfilter)) leaf_name_data.push_back(cpmcore1min.get_name_leafdata());
    if (cpmcore5min.is_set || is_set(cpmcore5min.yfilter)) leaf_name_data.push_back(cpmcore5min.get_name_leafdata());
    if (cpmcoreloadavg1min.is_set || is_set(cpmcoreloadavg1min.yfilter)) leaf_name_data.push_back(cpmcoreloadavg1min.get_name_leafdata());
    if (cpmcoreloadavg5min.is_set || is_set(cpmcoreloadavg5min.yfilter)) leaf_name_data.push_back(cpmcoreloadavg5min.get_name_leafdata());
    if (cpmcoreloadavg15min.is_set || is_set(cpmcoreloadavg15min.yfilter)) leaf_name_data.push_back(cpmcoreloadavg15min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmCoreTable::CpmCoreEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmCoreTable::CpmCoreEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPROCESSMIB::CpmCoreTable::CpmCoreEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex = value;
        cpmcputotalindex.value_namespace = name_space;
        cpmcputotalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCoreIndex")
    {
        cpmcoreindex = value;
        cpmcoreindex.value_namespace = name_space;
        cpmcoreindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCorePhysicalIndex")
    {
        cpmcorephysicalindex = value;
        cpmcorephysicalindex.value_namespace = name_space;
        cpmcorephysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCore5sec")
    {
        cpmcore5sec = value;
        cpmcore5sec.value_namespace = name_space;
        cpmcore5sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCore1min")
    {
        cpmcore1min = value;
        cpmcore1min.value_namespace = name_space;
        cpmcore1min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCore5min")
    {
        cpmcore5min = value;
        cpmcore5min.value_namespace = name_space;
        cpmcore5min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCoreLoadAvg1min")
    {
        cpmcoreloadavg1min = value;
        cpmcoreloadavg1min.value_namespace = name_space;
        cpmcoreloadavg1min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCoreLoadAvg5min")
    {
        cpmcoreloadavg5min = value;
        cpmcoreloadavg5min.value_namespace = name_space;
        cpmcoreloadavg5min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCoreLoadAvg15min")
    {
        cpmcoreloadavg15min = value;
        cpmcoreloadavg15min.value_namespace = name_space;
        cpmcoreloadavg15min.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPROCESSMIB::CpmCoreTable::CpmCoreEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex.yfilter = yfilter;
    }
    if(value_path == "cpmCoreIndex")
    {
        cpmcoreindex.yfilter = yfilter;
    }
    if(value_path == "cpmCorePhysicalIndex")
    {
        cpmcorephysicalindex.yfilter = yfilter;
    }
    if(value_path == "cpmCore5sec")
    {
        cpmcore5sec.yfilter = yfilter;
    }
    if(value_path == "cpmCore1min")
    {
        cpmcore1min.yfilter = yfilter;
    }
    if(value_path == "cpmCore5min")
    {
        cpmcore5min.yfilter = yfilter;
    }
    if(value_path == "cpmCoreLoadAvg1min")
    {
        cpmcoreloadavg1min.yfilter = yfilter;
    }
    if(value_path == "cpmCoreLoadAvg5min")
    {
        cpmcoreloadavg5min.yfilter = yfilter;
    }
    if(value_path == "cpmCoreLoadAvg15min")
    {
        cpmcoreloadavg15min.yfilter = yfilter;
    }
}

bool CISCOPROCESSMIB::CpmCoreTable::CpmCoreEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmCPUTotalIndex" || name == "cpmCoreIndex" || name == "cpmCorePhysicalIndex" || name == "cpmCore5sec" || name == "cpmCore1min" || name == "cpmCore5min" || name == "cpmCoreLoadAvg1min" || name == "cpmCoreLoadAvg5min" || name == "cpmCoreLoadAvg15min")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmProcessTable::CpmProcessTable()
    :
    cpmprocessentry(this, {"cpmcputotalindex", "cpmprocesspid"})
{

    yang_name = "cpmProcessTable"; yang_parent_name = "CISCO-PROCESS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmProcessTable::~CpmProcessTable()
{
}

bool CISCOPROCESSMIB::CpmProcessTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpmprocessentry.len(); index++)
    {
        if(cpmprocessentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPROCESSMIB::CpmProcessTable::has_operation() const
{
    for (std::size_t index=0; index<cpmprocessentry.len(); index++)
    {
        if(cpmprocessentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPROCESSMIB::CpmProcessTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmProcessTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmProcessTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmProcessTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmProcessTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpmProcessEntry")
    {
        auto c = std::make_shared<CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry>();
        c->parent = this;
        cpmprocessentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmProcessTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpmprocessentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPROCESSMIB::CpmProcessTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPROCESSMIB::CpmProcessTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPROCESSMIB::CpmProcessTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmProcessEntry")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::CpmProcessEntry()
    :
    cpmcputotalindex{YType::str, "cpmCPUTotalIndex"},
    cpmprocesspid{YType::uint32, "cpmProcessPID"},
    cpmprocessname{YType::str, "cpmProcessName"},
    cpmprocessusecs{YType::uint32, "cpmProcessuSecs"},
    cpmprocesstimecreated{YType::uint32, "cpmProcessTimeCreated"},
    cpmprocessaverageusecs{YType::uint32, "cpmProcessAverageUSecs"},
    cpmprocextmemallocated{YType::uint32, "cpmProcExtMemAllocated"},
    cpmprocextmemfreed{YType::uint32, "cpmProcExtMemFreed"},
    cpmprocextinvoked{YType::uint32, "cpmProcExtInvoked"},
    cpmprocextruntime{YType::uint32, "cpmProcExtRuntime"},
    cpmprocextutil5sec{YType::uint32, "cpmProcExtUtil5Sec"},
    cpmprocextutil1min{YType::uint32, "cpmProcExtUtil1Min"},
    cpmprocextutil5min{YType::uint32, "cpmProcExtUtil5Min"},
    cpmprocextpriority{YType::enumeration, "cpmProcExtPriority"}
{

    yang_name = "cpmProcessEntry"; yang_parent_name = "cpmProcessTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::~CpmProcessEntry()
{
}

bool CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::has_data() const
{
    if (is_presence_container) return true;
    return cpmcputotalindex.is_set
	|| cpmprocesspid.is_set
	|| cpmprocessname.is_set
	|| cpmprocessusecs.is_set
	|| cpmprocesstimecreated.is_set
	|| cpmprocessaverageusecs.is_set
	|| cpmprocextmemallocated.is_set
	|| cpmprocextmemfreed.is_set
	|| cpmprocextinvoked.is_set
	|| cpmprocextruntime.is_set
	|| cpmprocextutil5sec.is_set
	|| cpmprocextutil1min.is_set
	|| cpmprocextutil5min.is_set
	|| cpmprocextpriority.is_set;
}

bool CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpmcputotalindex.yfilter)
	|| ydk::is_set(cpmprocesspid.yfilter)
	|| ydk::is_set(cpmprocessname.yfilter)
	|| ydk::is_set(cpmprocessusecs.yfilter)
	|| ydk::is_set(cpmprocesstimecreated.yfilter)
	|| ydk::is_set(cpmprocessaverageusecs.yfilter)
	|| ydk::is_set(cpmprocextmemallocated.yfilter)
	|| ydk::is_set(cpmprocextmemfreed.yfilter)
	|| ydk::is_set(cpmprocextinvoked.yfilter)
	|| ydk::is_set(cpmprocextruntime.yfilter)
	|| ydk::is_set(cpmprocextutil5sec.yfilter)
	|| ydk::is_set(cpmprocextutil1min.yfilter)
	|| ydk::is_set(cpmprocextutil5min.yfilter)
	|| ydk::is_set(cpmprocextpriority.yfilter);
}

std::string CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/cpmProcessTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmProcessEntry";
    ADD_KEY_TOKEN(cpmcputotalindex, "cpmCPUTotalIndex");
    ADD_KEY_TOKEN(cpmprocesspid, "cpmProcessPID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpmcputotalindex.is_set || is_set(cpmcputotalindex.yfilter)) leaf_name_data.push_back(cpmcputotalindex.get_name_leafdata());
    if (cpmprocesspid.is_set || is_set(cpmprocesspid.yfilter)) leaf_name_data.push_back(cpmprocesspid.get_name_leafdata());
    if (cpmprocessname.is_set || is_set(cpmprocessname.yfilter)) leaf_name_data.push_back(cpmprocessname.get_name_leafdata());
    if (cpmprocessusecs.is_set || is_set(cpmprocessusecs.yfilter)) leaf_name_data.push_back(cpmprocessusecs.get_name_leafdata());
    if (cpmprocesstimecreated.is_set || is_set(cpmprocesstimecreated.yfilter)) leaf_name_data.push_back(cpmprocesstimecreated.get_name_leafdata());
    if (cpmprocessaverageusecs.is_set || is_set(cpmprocessaverageusecs.yfilter)) leaf_name_data.push_back(cpmprocessaverageusecs.get_name_leafdata());
    if (cpmprocextmemallocated.is_set || is_set(cpmprocextmemallocated.yfilter)) leaf_name_data.push_back(cpmprocextmemallocated.get_name_leafdata());
    if (cpmprocextmemfreed.is_set || is_set(cpmprocextmemfreed.yfilter)) leaf_name_data.push_back(cpmprocextmemfreed.get_name_leafdata());
    if (cpmprocextinvoked.is_set || is_set(cpmprocextinvoked.yfilter)) leaf_name_data.push_back(cpmprocextinvoked.get_name_leafdata());
    if (cpmprocextruntime.is_set || is_set(cpmprocextruntime.yfilter)) leaf_name_data.push_back(cpmprocextruntime.get_name_leafdata());
    if (cpmprocextutil5sec.is_set || is_set(cpmprocextutil5sec.yfilter)) leaf_name_data.push_back(cpmprocextutil5sec.get_name_leafdata());
    if (cpmprocextutil1min.is_set || is_set(cpmprocextutil1min.yfilter)) leaf_name_data.push_back(cpmprocextutil1min.get_name_leafdata());
    if (cpmprocextutil5min.is_set || is_set(cpmprocextutil5min.yfilter)) leaf_name_data.push_back(cpmprocextutil5min.get_name_leafdata());
    if (cpmprocextpriority.is_set || is_set(cpmprocextpriority.yfilter)) leaf_name_data.push_back(cpmprocextpriority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex = value;
        cpmcputotalindex.value_namespace = name_space;
        cpmcputotalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessPID")
    {
        cpmprocesspid = value;
        cpmprocesspid.value_namespace = name_space;
        cpmprocesspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessName")
    {
        cpmprocessname = value;
        cpmprocessname.value_namespace = name_space;
        cpmprocessname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessuSecs")
    {
        cpmprocessusecs = value;
        cpmprocessusecs.value_namespace = name_space;
        cpmprocessusecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessTimeCreated")
    {
        cpmprocesstimecreated = value;
        cpmprocesstimecreated.value_namespace = name_space;
        cpmprocesstimecreated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessAverageUSecs")
    {
        cpmprocessaverageusecs = value;
        cpmprocessaverageusecs.value_namespace = name_space;
        cpmprocessaverageusecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtMemAllocated")
    {
        cpmprocextmemallocated = value;
        cpmprocextmemallocated.value_namespace = name_space;
        cpmprocextmemallocated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtMemFreed")
    {
        cpmprocextmemfreed = value;
        cpmprocextmemfreed.value_namespace = name_space;
        cpmprocextmemfreed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtInvoked")
    {
        cpmprocextinvoked = value;
        cpmprocextinvoked.value_namespace = name_space;
        cpmprocextinvoked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtRuntime")
    {
        cpmprocextruntime = value;
        cpmprocextruntime.value_namespace = name_space;
        cpmprocextruntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtUtil5Sec")
    {
        cpmprocextutil5sec = value;
        cpmprocextutil5sec.value_namespace = name_space;
        cpmprocextutil5sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtUtil1Min")
    {
        cpmprocextutil1min = value;
        cpmprocextutil1min.value_namespace = name_space;
        cpmprocextutil1min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtUtil5Min")
    {
        cpmprocextutil5min = value;
        cpmprocextutil5min.value_namespace = name_space;
        cpmprocextutil5min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtPriority")
    {
        cpmprocextpriority = value;
        cpmprocextpriority.value_namespace = name_space;
        cpmprocextpriority.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex.yfilter = yfilter;
    }
    if(value_path == "cpmProcessPID")
    {
        cpmprocesspid.yfilter = yfilter;
    }
    if(value_path == "cpmProcessName")
    {
        cpmprocessname.yfilter = yfilter;
    }
    if(value_path == "cpmProcessuSecs")
    {
        cpmprocessusecs.yfilter = yfilter;
    }
    if(value_path == "cpmProcessTimeCreated")
    {
        cpmprocesstimecreated.yfilter = yfilter;
    }
    if(value_path == "cpmProcessAverageUSecs")
    {
        cpmprocessaverageusecs.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtMemAllocated")
    {
        cpmprocextmemallocated.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtMemFreed")
    {
        cpmprocextmemfreed.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtInvoked")
    {
        cpmprocextinvoked.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtRuntime")
    {
        cpmprocextruntime.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtUtil5Sec")
    {
        cpmprocextutil5sec.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtUtil1Min")
    {
        cpmprocextutil1min.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtUtil5Min")
    {
        cpmprocextutil5min.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtPriority")
    {
        cpmprocextpriority.yfilter = yfilter;
    }
}

bool CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmCPUTotalIndex" || name == "cpmProcessPID" || name == "cpmProcessName" || name == "cpmProcessuSecs" || name == "cpmProcessTimeCreated" || name == "cpmProcessAverageUSecs" || name == "cpmProcExtMemAllocated" || name == "cpmProcExtMemFreed" || name == "cpmProcExtInvoked" || name == "cpmProcExtRuntime" || name == "cpmProcExtUtil5Sec" || name == "cpmProcExtUtil1Min" || name == "cpmProcExtUtil5Min" || name == "cpmProcExtPriority")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevTable()
    :
    cpmprocessextreventry(this, {"cpmcputotalindex", "cpmprocesspid"})
{

    yang_name = "cpmProcessExtRevTable"; yang_parent_name = "CISCO-PROCESS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmProcessExtRevTable::~CpmProcessExtRevTable()
{
}

bool CISCOPROCESSMIB::CpmProcessExtRevTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpmprocessextreventry.len(); index++)
    {
        if(cpmprocessextreventry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPROCESSMIB::CpmProcessExtRevTable::has_operation() const
{
    for (std::size_t index=0; index<cpmprocessextreventry.len(); index++)
    {
        if(cpmprocessextreventry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPROCESSMIB::CpmProcessExtRevTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmProcessExtRevTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmProcessExtRevTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmProcessExtRevTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmProcessExtRevTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpmProcessExtRevEntry")
    {
        auto c = std::make_shared<CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry>();
        c->parent = this;
        cpmprocessextreventry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmProcessExtRevTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpmprocessextreventry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPROCESSMIB::CpmProcessExtRevTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPROCESSMIB::CpmProcessExtRevTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPROCESSMIB::CpmProcessExtRevTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmProcessExtRevEntry")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcessExtRevEntry()
    :
    cpmcputotalindex{YType::str, "cpmCPUTotalIndex"},
    cpmprocesspid{YType::str, "cpmProcessPID"},
    cpmprocextmemallocatedrev{YType::uint32, "cpmProcExtMemAllocatedRev"},
    cpmprocextmemfreedrev{YType::uint32, "cpmProcExtMemFreedRev"},
    cpmprocextinvokedrev{YType::uint32, "cpmProcExtInvokedRev"},
    cpmprocextruntimerev{YType::uint32, "cpmProcExtRuntimeRev"},
    cpmprocextutil5secrev{YType::uint32, "cpmProcExtUtil5SecRev"},
    cpmprocextutil1minrev{YType::uint32, "cpmProcExtUtil1MinRev"},
    cpmprocextutil5minrev{YType::uint32, "cpmProcExtUtil5MinRev"},
    cpmprocextpriorityrev{YType::enumeration, "cpmProcExtPriorityRev"},
    cpmprocesstype{YType::enumeration, "cpmProcessType"},
    cpmprocessrespawn{YType::uint32, "cpmProcessRespawn"},
    cpmprocessrespawncount{YType::uint32, "cpmProcessRespawnCount"},
    cpmprocessrespawnafterlastpatch{YType::uint32, "cpmProcessRespawnAfterLastPatch"},
    cpmprocessmemorycore{YType::enumeration, "cpmProcessMemoryCore"},
    cpmprocesslastrestartuser{YType::str, "cpmProcessLastRestartUser"},
    cpmprocesstextsegmentsize{YType::uint32, "cpmProcessTextSegmentSize"},
    cpmprocessdatasegmentsize{YType::uint32, "cpmProcessDataSegmentSize"},
    cpmprocessstacksize{YType::uint32, "cpmProcessStackSize"},
    cpmprocessdynamicmemorysize{YType::uint32, "cpmProcessDynamicMemorySize"},
    cpmprocextmemallocatedrevovrflw{YType::uint32, "cpmProcExtMemAllocatedRevOvrflw"},
    cpmprocexthcmemallocatedrev{YType::uint64, "cpmProcExtHCMemAllocatedRev"},
    cpmprocextmemfreedrevovrflw{YType::uint32, "cpmProcExtMemFreedRevOvrflw"},
    cpmprocexthcmemfreedrev{YType::uint64, "cpmProcExtHCMemFreedRev"},
    cpmprocesstextsegmentsizeovrflw{YType::uint32, "cpmProcessTextSegmentSizeOvrflw"},
    cpmprocesshctextsegmentsize{YType::uint64, "cpmProcessHCTextSegmentSize"},
    cpmprocessdatasegmentsizeovrflw{YType::uint32, "cpmProcessDataSegmentSizeOvrflw"},
    cpmprocesshcdatasegmentsize{YType::uint64, "cpmProcessHCDataSegmentSize"},
    cpmprocessstacksizeovrflw{YType::uint32, "cpmProcessStackSizeOvrflw"},
    cpmprocesshcstacksize{YType::uint64, "cpmProcessHCStackSize"},
    cpmprocessdynamicmemorysizeovrflw{YType::uint32, "cpmProcessDynamicMemorySizeOvrflw"},
    cpmprocesshcdynamicmemorysize{YType::uint64, "cpmProcessHCDynamicMemorySize"}
{

    yang_name = "cpmProcessExtRevEntry"; yang_parent_name = "cpmProcessExtRevTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::~CpmProcessExtRevEntry()
{
}

bool CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::has_data() const
{
    if (is_presence_container) return true;
    return cpmcputotalindex.is_set
	|| cpmprocesspid.is_set
	|| cpmprocextmemallocatedrev.is_set
	|| cpmprocextmemfreedrev.is_set
	|| cpmprocextinvokedrev.is_set
	|| cpmprocextruntimerev.is_set
	|| cpmprocextutil5secrev.is_set
	|| cpmprocextutil1minrev.is_set
	|| cpmprocextutil5minrev.is_set
	|| cpmprocextpriorityrev.is_set
	|| cpmprocesstype.is_set
	|| cpmprocessrespawn.is_set
	|| cpmprocessrespawncount.is_set
	|| cpmprocessrespawnafterlastpatch.is_set
	|| cpmprocessmemorycore.is_set
	|| cpmprocesslastrestartuser.is_set
	|| cpmprocesstextsegmentsize.is_set
	|| cpmprocessdatasegmentsize.is_set
	|| cpmprocessstacksize.is_set
	|| cpmprocessdynamicmemorysize.is_set
	|| cpmprocextmemallocatedrevovrflw.is_set
	|| cpmprocexthcmemallocatedrev.is_set
	|| cpmprocextmemfreedrevovrflw.is_set
	|| cpmprocexthcmemfreedrev.is_set
	|| cpmprocesstextsegmentsizeovrflw.is_set
	|| cpmprocesshctextsegmentsize.is_set
	|| cpmprocessdatasegmentsizeovrflw.is_set
	|| cpmprocesshcdatasegmentsize.is_set
	|| cpmprocessstacksizeovrflw.is_set
	|| cpmprocesshcstacksize.is_set
	|| cpmprocessdynamicmemorysizeovrflw.is_set
	|| cpmprocesshcdynamicmemorysize.is_set;
}

bool CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpmcputotalindex.yfilter)
	|| ydk::is_set(cpmprocesspid.yfilter)
	|| ydk::is_set(cpmprocextmemallocatedrev.yfilter)
	|| ydk::is_set(cpmprocextmemfreedrev.yfilter)
	|| ydk::is_set(cpmprocextinvokedrev.yfilter)
	|| ydk::is_set(cpmprocextruntimerev.yfilter)
	|| ydk::is_set(cpmprocextutil5secrev.yfilter)
	|| ydk::is_set(cpmprocextutil1minrev.yfilter)
	|| ydk::is_set(cpmprocextutil5minrev.yfilter)
	|| ydk::is_set(cpmprocextpriorityrev.yfilter)
	|| ydk::is_set(cpmprocesstype.yfilter)
	|| ydk::is_set(cpmprocessrespawn.yfilter)
	|| ydk::is_set(cpmprocessrespawncount.yfilter)
	|| ydk::is_set(cpmprocessrespawnafterlastpatch.yfilter)
	|| ydk::is_set(cpmprocessmemorycore.yfilter)
	|| ydk::is_set(cpmprocesslastrestartuser.yfilter)
	|| ydk::is_set(cpmprocesstextsegmentsize.yfilter)
	|| ydk::is_set(cpmprocessdatasegmentsize.yfilter)
	|| ydk::is_set(cpmprocessstacksize.yfilter)
	|| ydk::is_set(cpmprocessdynamicmemorysize.yfilter)
	|| ydk::is_set(cpmprocextmemallocatedrevovrflw.yfilter)
	|| ydk::is_set(cpmprocexthcmemallocatedrev.yfilter)
	|| ydk::is_set(cpmprocextmemfreedrevovrflw.yfilter)
	|| ydk::is_set(cpmprocexthcmemfreedrev.yfilter)
	|| ydk::is_set(cpmprocesstextsegmentsizeovrflw.yfilter)
	|| ydk::is_set(cpmprocesshctextsegmentsize.yfilter)
	|| ydk::is_set(cpmprocessdatasegmentsizeovrflw.yfilter)
	|| ydk::is_set(cpmprocesshcdatasegmentsize.yfilter)
	|| ydk::is_set(cpmprocessstacksizeovrflw.yfilter)
	|| ydk::is_set(cpmprocesshcstacksize.yfilter)
	|| ydk::is_set(cpmprocessdynamicmemorysizeovrflw.yfilter)
	|| ydk::is_set(cpmprocesshcdynamicmemorysize.yfilter);
}

std::string CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/cpmProcessExtRevTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmProcessExtRevEntry";
    ADD_KEY_TOKEN(cpmcputotalindex, "cpmCPUTotalIndex");
    ADD_KEY_TOKEN(cpmprocesspid, "cpmProcessPID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpmcputotalindex.is_set || is_set(cpmcputotalindex.yfilter)) leaf_name_data.push_back(cpmcputotalindex.get_name_leafdata());
    if (cpmprocesspid.is_set || is_set(cpmprocesspid.yfilter)) leaf_name_data.push_back(cpmprocesspid.get_name_leafdata());
    if (cpmprocextmemallocatedrev.is_set || is_set(cpmprocextmemallocatedrev.yfilter)) leaf_name_data.push_back(cpmprocextmemallocatedrev.get_name_leafdata());
    if (cpmprocextmemfreedrev.is_set || is_set(cpmprocextmemfreedrev.yfilter)) leaf_name_data.push_back(cpmprocextmemfreedrev.get_name_leafdata());
    if (cpmprocextinvokedrev.is_set || is_set(cpmprocextinvokedrev.yfilter)) leaf_name_data.push_back(cpmprocextinvokedrev.get_name_leafdata());
    if (cpmprocextruntimerev.is_set || is_set(cpmprocextruntimerev.yfilter)) leaf_name_data.push_back(cpmprocextruntimerev.get_name_leafdata());
    if (cpmprocextutil5secrev.is_set || is_set(cpmprocextutil5secrev.yfilter)) leaf_name_data.push_back(cpmprocextutil5secrev.get_name_leafdata());
    if (cpmprocextutil1minrev.is_set || is_set(cpmprocextutil1minrev.yfilter)) leaf_name_data.push_back(cpmprocextutil1minrev.get_name_leafdata());
    if (cpmprocextutil5minrev.is_set || is_set(cpmprocextutil5minrev.yfilter)) leaf_name_data.push_back(cpmprocextutil5minrev.get_name_leafdata());
    if (cpmprocextpriorityrev.is_set || is_set(cpmprocextpriorityrev.yfilter)) leaf_name_data.push_back(cpmprocextpriorityrev.get_name_leafdata());
    if (cpmprocesstype.is_set || is_set(cpmprocesstype.yfilter)) leaf_name_data.push_back(cpmprocesstype.get_name_leafdata());
    if (cpmprocessrespawn.is_set || is_set(cpmprocessrespawn.yfilter)) leaf_name_data.push_back(cpmprocessrespawn.get_name_leafdata());
    if (cpmprocessrespawncount.is_set || is_set(cpmprocessrespawncount.yfilter)) leaf_name_data.push_back(cpmprocessrespawncount.get_name_leafdata());
    if (cpmprocessrespawnafterlastpatch.is_set || is_set(cpmprocessrespawnafterlastpatch.yfilter)) leaf_name_data.push_back(cpmprocessrespawnafterlastpatch.get_name_leafdata());
    if (cpmprocessmemorycore.is_set || is_set(cpmprocessmemorycore.yfilter)) leaf_name_data.push_back(cpmprocessmemorycore.get_name_leafdata());
    if (cpmprocesslastrestartuser.is_set || is_set(cpmprocesslastrestartuser.yfilter)) leaf_name_data.push_back(cpmprocesslastrestartuser.get_name_leafdata());
    if (cpmprocesstextsegmentsize.is_set || is_set(cpmprocesstextsegmentsize.yfilter)) leaf_name_data.push_back(cpmprocesstextsegmentsize.get_name_leafdata());
    if (cpmprocessdatasegmentsize.is_set || is_set(cpmprocessdatasegmentsize.yfilter)) leaf_name_data.push_back(cpmprocessdatasegmentsize.get_name_leafdata());
    if (cpmprocessstacksize.is_set || is_set(cpmprocessstacksize.yfilter)) leaf_name_data.push_back(cpmprocessstacksize.get_name_leafdata());
    if (cpmprocessdynamicmemorysize.is_set || is_set(cpmprocessdynamicmemorysize.yfilter)) leaf_name_data.push_back(cpmprocessdynamicmemorysize.get_name_leafdata());
    if (cpmprocextmemallocatedrevovrflw.is_set || is_set(cpmprocextmemallocatedrevovrflw.yfilter)) leaf_name_data.push_back(cpmprocextmemallocatedrevovrflw.get_name_leafdata());
    if (cpmprocexthcmemallocatedrev.is_set || is_set(cpmprocexthcmemallocatedrev.yfilter)) leaf_name_data.push_back(cpmprocexthcmemallocatedrev.get_name_leafdata());
    if (cpmprocextmemfreedrevovrflw.is_set || is_set(cpmprocextmemfreedrevovrflw.yfilter)) leaf_name_data.push_back(cpmprocextmemfreedrevovrflw.get_name_leafdata());
    if (cpmprocexthcmemfreedrev.is_set || is_set(cpmprocexthcmemfreedrev.yfilter)) leaf_name_data.push_back(cpmprocexthcmemfreedrev.get_name_leafdata());
    if (cpmprocesstextsegmentsizeovrflw.is_set || is_set(cpmprocesstextsegmentsizeovrflw.yfilter)) leaf_name_data.push_back(cpmprocesstextsegmentsizeovrflw.get_name_leafdata());
    if (cpmprocesshctextsegmentsize.is_set || is_set(cpmprocesshctextsegmentsize.yfilter)) leaf_name_data.push_back(cpmprocesshctextsegmentsize.get_name_leafdata());
    if (cpmprocessdatasegmentsizeovrflw.is_set || is_set(cpmprocessdatasegmentsizeovrflw.yfilter)) leaf_name_data.push_back(cpmprocessdatasegmentsizeovrflw.get_name_leafdata());
    if (cpmprocesshcdatasegmentsize.is_set || is_set(cpmprocesshcdatasegmentsize.yfilter)) leaf_name_data.push_back(cpmprocesshcdatasegmentsize.get_name_leafdata());
    if (cpmprocessstacksizeovrflw.is_set || is_set(cpmprocessstacksizeovrflw.yfilter)) leaf_name_data.push_back(cpmprocessstacksizeovrflw.get_name_leafdata());
    if (cpmprocesshcstacksize.is_set || is_set(cpmprocesshcstacksize.yfilter)) leaf_name_data.push_back(cpmprocesshcstacksize.get_name_leafdata());
    if (cpmprocessdynamicmemorysizeovrflw.is_set || is_set(cpmprocessdynamicmemorysizeovrflw.yfilter)) leaf_name_data.push_back(cpmprocessdynamicmemorysizeovrflw.get_name_leafdata());
    if (cpmprocesshcdynamicmemorysize.is_set || is_set(cpmprocesshcdynamicmemorysize.yfilter)) leaf_name_data.push_back(cpmprocesshcdynamicmemorysize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex = value;
        cpmcputotalindex.value_namespace = name_space;
        cpmcputotalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessPID")
    {
        cpmprocesspid = value;
        cpmprocesspid.value_namespace = name_space;
        cpmprocesspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtMemAllocatedRev")
    {
        cpmprocextmemallocatedrev = value;
        cpmprocextmemallocatedrev.value_namespace = name_space;
        cpmprocextmemallocatedrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtMemFreedRev")
    {
        cpmprocextmemfreedrev = value;
        cpmprocextmemfreedrev.value_namespace = name_space;
        cpmprocextmemfreedrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtInvokedRev")
    {
        cpmprocextinvokedrev = value;
        cpmprocextinvokedrev.value_namespace = name_space;
        cpmprocextinvokedrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtRuntimeRev")
    {
        cpmprocextruntimerev = value;
        cpmprocextruntimerev.value_namespace = name_space;
        cpmprocextruntimerev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtUtil5SecRev")
    {
        cpmprocextutil5secrev = value;
        cpmprocextutil5secrev.value_namespace = name_space;
        cpmprocextutil5secrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtUtil1MinRev")
    {
        cpmprocextutil1minrev = value;
        cpmprocextutil1minrev.value_namespace = name_space;
        cpmprocextutil1minrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtUtil5MinRev")
    {
        cpmprocextutil5minrev = value;
        cpmprocextutil5minrev.value_namespace = name_space;
        cpmprocextutil5minrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtPriorityRev")
    {
        cpmprocextpriorityrev = value;
        cpmprocextpriorityrev.value_namespace = name_space;
        cpmprocextpriorityrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessType")
    {
        cpmprocesstype = value;
        cpmprocesstype.value_namespace = name_space;
        cpmprocesstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessRespawn")
    {
        cpmprocessrespawn = value;
        cpmprocessrespawn.value_namespace = name_space;
        cpmprocessrespawn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessRespawnCount")
    {
        cpmprocessrespawncount = value;
        cpmprocessrespawncount.value_namespace = name_space;
        cpmprocessrespawncount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessRespawnAfterLastPatch")
    {
        cpmprocessrespawnafterlastpatch = value;
        cpmprocessrespawnafterlastpatch.value_namespace = name_space;
        cpmprocessrespawnafterlastpatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessMemoryCore")
    {
        cpmprocessmemorycore = value;
        cpmprocessmemorycore.value_namespace = name_space;
        cpmprocessmemorycore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessLastRestartUser")
    {
        cpmprocesslastrestartuser = value;
        cpmprocesslastrestartuser.value_namespace = name_space;
        cpmprocesslastrestartuser.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessTextSegmentSize")
    {
        cpmprocesstextsegmentsize = value;
        cpmprocesstextsegmentsize.value_namespace = name_space;
        cpmprocesstextsegmentsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessDataSegmentSize")
    {
        cpmprocessdatasegmentsize = value;
        cpmprocessdatasegmentsize.value_namespace = name_space;
        cpmprocessdatasegmentsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessStackSize")
    {
        cpmprocessstacksize = value;
        cpmprocessstacksize.value_namespace = name_space;
        cpmprocessstacksize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessDynamicMemorySize")
    {
        cpmprocessdynamicmemorysize = value;
        cpmprocessdynamicmemorysize.value_namespace = name_space;
        cpmprocessdynamicmemorysize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtMemAllocatedRevOvrflw")
    {
        cpmprocextmemallocatedrevovrflw = value;
        cpmprocextmemallocatedrevovrflw.value_namespace = name_space;
        cpmprocextmemallocatedrevovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtHCMemAllocatedRev")
    {
        cpmprocexthcmemallocatedrev = value;
        cpmprocexthcmemallocatedrev.value_namespace = name_space;
        cpmprocexthcmemallocatedrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtMemFreedRevOvrflw")
    {
        cpmprocextmemfreedrevovrflw = value;
        cpmprocextmemfreedrevovrflw.value_namespace = name_space;
        cpmprocextmemfreedrevovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcExtHCMemFreedRev")
    {
        cpmprocexthcmemfreedrev = value;
        cpmprocexthcmemfreedrev.value_namespace = name_space;
        cpmprocexthcmemfreedrev.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessTextSegmentSizeOvrflw")
    {
        cpmprocesstextsegmentsizeovrflw = value;
        cpmprocesstextsegmentsizeovrflw.value_namespace = name_space;
        cpmprocesstextsegmentsizeovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessHCTextSegmentSize")
    {
        cpmprocesshctextsegmentsize = value;
        cpmprocesshctextsegmentsize.value_namespace = name_space;
        cpmprocesshctextsegmentsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessDataSegmentSizeOvrflw")
    {
        cpmprocessdatasegmentsizeovrflw = value;
        cpmprocessdatasegmentsizeovrflw.value_namespace = name_space;
        cpmprocessdatasegmentsizeovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessHCDataSegmentSize")
    {
        cpmprocesshcdatasegmentsize = value;
        cpmprocesshcdatasegmentsize.value_namespace = name_space;
        cpmprocesshcdatasegmentsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessStackSizeOvrflw")
    {
        cpmprocessstacksizeovrflw = value;
        cpmprocessstacksizeovrflw.value_namespace = name_space;
        cpmprocessstacksizeovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessHCStackSize")
    {
        cpmprocesshcstacksize = value;
        cpmprocesshcstacksize.value_namespace = name_space;
        cpmprocesshcstacksize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessDynamicMemorySizeOvrflw")
    {
        cpmprocessdynamicmemorysizeovrflw = value;
        cpmprocessdynamicmemorysizeovrflw.value_namespace = name_space;
        cpmprocessdynamicmemorysizeovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessHCDynamicMemorySize")
    {
        cpmprocesshcdynamicmemorysize = value;
        cpmprocesshcdynamicmemorysize.value_namespace = name_space;
        cpmprocesshcdynamicmemorysize.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex.yfilter = yfilter;
    }
    if(value_path == "cpmProcessPID")
    {
        cpmprocesspid.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtMemAllocatedRev")
    {
        cpmprocextmemallocatedrev.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtMemFreedRev")
    {
        cpmprocextmemfreedrev.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtInvokedRev")
    {
        cpmprocextinvokedrev.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtRuntimeRev")
    {
        cpmprocextruntimerev.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtUtil5SecRev")
    {
        cpmprocextutil5secrev.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtUtil1MinRev")
    {
        cpmprocextutil1minrev.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtUtil5MinRev")
    {
        cpmprocextutil5minrev.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtPriorityRev")
    {
        cpmprocextpriorityrev.yfilter = yfilter;
    }
    if(value_path == "cpmProcessType")
    {
        cpmprocesstype.yfilter = yfilter;
    }
    if(value_path == "cpmProcessRespawn")
    {
        cpmprocessrespawn.yfilter = yfilter;
    }
    if(value_path == "cpmProcessRespawnCount")
    {
        cpmprocessrespawncount.yfilter = yfilter;
    }
    if(value_path == "cpmProcessRespawnAfterLastPatch")
    {
        cpmprocessrespawnafterlastpatch.yfilter = yfilter;
    }
    if(value_path == "cpmProcessMemoryCore")
    {
        cpmprocessmemorycore.yfilter = yfilter;
    }
    if(value_path == "cpmProcessLastRestartUser")
    {
        cpmprocesslastrestartuser.yfilter = yfilter;
    }
    if(value_path == "cpmProcessTextSegmentSize")
    {
        cpmprocesstextsegmentsize.yfilter = yfilter;
    }
    if(value_path == "cpmProcessDataSegmentSize")
    {
        cpmprocessdatasegmentsize.yfilter = yfilter;
    }
    if(value_path == "cpmProcessStackSize")
    {
        cpmprocessstacksize.yfilter = yfilter;
    }
    if(value_path == "cpmProcessDynamicMemorySize")
    {
        cpmprocessdynamicmemorysize.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtMemAllocatedRevOvrflw")
    {
        cpmprocextmemallocatedrevovrflw.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtHCMemAllocatedRev")
    {
        cpmprocexthcmemallocatedrev.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtMemFreedRevOvrflw")
    {
        cpmprocextmemfreedrevovrflw.yfilter = yfilter;
    }
    if(value_path == "cpmProcExtHCMemFreedRev")
    {
        cpmprocexthcmemfreedrev.yfilter = yfilter;
    }
    if(value_path == "cpmProcessTextSegmentSizeOvrflw")
    {
        cpmprocesstextsegmentsizeovrflw.yfilter = yfilter;
    }
    if(value_path == "cpmProcessHCTextSegmentSize")
    {
        cpmprocesshctextsegmentsize.yfilter = yfilter;
    }
    if(value_path == "cpmProcessDataSegmentSizeOvrflw")
    {
        cpmprocessdatasegmentsizeovrflw.yfilter = yfilter;
    }
    if(value_path == "cpmProcessHCDataSegmentSize")
    {
        cpmprocesshcdatasegmentsize.yfilter = yfilter;
    }
    if(value_path == "cpmProcessStackSizeOvrflw")
    {
        cpmprocessstacksizeovrflw.yfilter = yfilter;
    }
    if(value_path == "cpmProcessHCStackSize")
    {
        cpmprocesshcstacksize.yfilter = yfilter;
    }
    if(value_path == "cpmProcessDynamicMemorySizeOvrflw")
    {
        cpmprocessdynamicmemorysizeovrflw.yfilter = yfilter;
    }
    if(value_path == "cpmProcessHCDynamicMemorySize")
    {
        cpmprocesshcdynamicmemorysize.yfilter = yfilter;
    }
}

bool CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmCPUTotalIndex" || name == "cpmProcessPID" || name == "cpmProcExtMemAllocatedRev" || name == "cpmProcExtMemFreedRev" || name == "cpmProcExtInvokedRev" || name == "cpmProcExtRuntimeRev" || name == "cpmProcExtUtil5SecRev" || name == "cpmProcExtUtil1MinRev" || name == "cpmProcExtUtil5MinRev" || name == "cpmProcExtPriorityRev" || name == "cpmProcessType" || name == "cpmProcessRespawn" || name == "cpmProcessRespawnCount" || name == "cpmProcessRespawnAfterLastPatch" || name == "cpmProcessMemoryCore" || name == "cpmProcessLastRestartUser" || name == "cpmProcessTextSegmentSize" || name == "cpmProcessDataSegmentSize" || name == "cpmProcessStackSize" || name == "cpmProcessDynamicMemorySize" || name == "cpmProcExtMemAllocatedRevOvrflw" || name == "cpmProcExtHCMemAllocatedRev" || name == "cpmProcExtMemFreedRevOvrflw" || name == "cpmProcExtHCMemFreedRev" || name == "cpmProcessTextSegmentSizeOvrflw" || name == "cpmProcessHCTextSegmentSize" || name == "cpmProcessDataSegmentSizeOvrflw" || name == "cpmProcessHCDataSegmentSize" || name == "cpmProcessStackSizeOvrflw" || name == "cpmProcessHCStackSize" || name == "cpmProcessDynamicMemorySizeOvrflw" || name == "cpmProcessHCDynamicMemorySize")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdTable()
    :
    cpmcputhresholdentry(this, {"cpmcputotalindex", "cpmcputhresholdclass"})
{

    yang_name = "cpmCPUThresholdTable"; yang_parent_name = "CISCO-PROCESS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmCPUThresholdTable::~CpmCPUThresholdTable()
{
}

bool CISCOPROCESSMIB::CpmCPUThresholdTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpmcputhresholdentry.len(); index++)
    {
        if(cpmcputhresholdentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPROCESSMIB::CpmCPUThresholdTable::has_operation() const
{
    for (std::size_t index=0; index<cpmcputhresholdentry.len(); index++)
    {
        if(cpmcputhresholdentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPROCESSMIB::CpmCPUThresholdTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmCPUThresholdTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmCPUThresholdTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmCPUThresholdTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmCPUThresholdTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpmCPUThresholdEntry")
    {
        auto c = std::make_shared<CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry>();
        c->parent = this;
        cpmcputhresholdentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmCPUThresholdTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpmcputhresholdentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPROCESSMIB::CpmCPUThresholdTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPROCESSMIB::CpmCPUThresholdTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPROCESSMIB::CpmCPUThresholdTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmCPUThresholdEntry")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry::CpmCPUThresholdEntry()
    :
    cpmcputotalindex{YType::str, "cpmCPUTotalIndex"},
    cpmcputhresholdclass{YType::enumeration, "cpmCPUThresholdClass"},
    cpmcpurisingthresholdvalue{YType::uint32, "cpmCPURisingThresholdValue"},
    cpmcpurisingthresholdperiod{YType::uint32, "cpmCPURisingThresholdPeriod"},
    cpmcpufallingthresholdvalue{YType::uint32, "cpmCPUFallingThresholdValue"},
    cpmcpufallingthresholdperiod{YType::uint32, "cpmCPUFallingThresholdPeriod"},
    cpmcputhresholdentrystatus{YType::enumeration, "cpmCPUThresholdEntryStatus"}
{

    yang_name = "cpmCPUThresholdEntry"; yang_parent_name = "cpmCPUThresholdTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry::~CpmCPUThresholdEntry()
{
}

bool CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry::has_data() const
{
    if (is_presence_container) return true;
    return cpmcputotalindex.is_set
	|| cpmcputhresholdclass.is_set
	|| cpmcpurisingthresholdvalue.is_set
	|| cpmcpurisingthresholdperiod.is_set
	|| cpmcpufallingthresholdvalue.is_set
	|| cpmcpufallingthresholdperiod.is_set
	|| cpmcputhresholdentrystatus.is_set;
}

bool CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpmcputotalindex.yfilter)
	|| ydk::is_set(cpmcputhresholdclass.yfilter)
	|| ydk::is_set(cpmcpurisingthresholdvalue.yfilter)
	|| ydk::is_set(cpmcpurisingthresholdperiod.yfilter)
	|| ydk::is_set(cpmcpufallingthresholdvalue.yfilter)
	|| ydk::is_set(cpmcpufallingthresholdperiod.yfilter)
	|| ydk::is_set(cpmcputhresholdentrystatus.yfilter);
}

std::string CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/cpmCPUThresholdTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmCPUThresholdEntry";
    ADD_KEY_TOKEN(cpmcputotalindex, "cpmCPUTotalIndex");
    ADD_KEY_TOKEN(cpmcputhresholdclass, "cpmCPUThresholdClass");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpmcputotalindex.is_set || is_set(cpmcputotalindex.yfilter)) leaf_name_data.push_back(cpmcputotalindex.get_name_leafdata());
    if (cpmcputhresholdclass.is_set || is_set(cpmcputhresholdclass.yfilter)) leaf_name_data.push_back(cpmcputhresholdclass.get_name_leafdata());
    if (cpmcpurisingthresholdvalue.is_set || is_set(cpmcpurisingthresholdvalue.yfilter)) leaf_name_data.push_back(cpmcpurisingthresholdvalue.get_name_leafdata());
    if (cpmcpurisingthresholdperiod.is_set || is_set(cpmcpurisingthresholdperiod.yfilter)) leaf_name_data.push_back(cpmcpurisingthresholdperiod.get_name_leafdata());
    if (cpmcpufallingthresholdvalue.is_set || is_set(cpmcpufallingthresholdvalue.yfilter)) leaf_name_data.push_back(cpmcpufallingthresholdvalue.get_name_leafdata());
    if (cpmcpufallingthresholdperiod.is_set || is_set(cpmcpufallingthresholdperiod.yfilter)) leaf_name_data.push_back(cpmcpufallingthresholdperiod.get_name_leafdata());
    if (cpmcputhresholdentrystatus.is_set || is_set(cpmcputhresholdentrystatus.yfilter)) leaf_name_data.push_back(cpmcputhresholdentrystatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex = value;
        cpmcputotalindex.value_namespace = name_space;
        cpmcputotalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUThresholdClass")
    {
        cpmcputhresholdclass = value;
        cpmcputhresholdclass.value_namespace = name_space;
        cpmcputhresholdclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPURisingThresholdValue")
    {
        cpmcpurisingthresholdvalue = value;
        cpmcpurisingthresholdvalue.value_namespace = name_space;
        cpmcpurisingthresholdvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPURisingThresholdPeriod")
    {
        cpmcpurisingthresholdperiod = value;
        cpmcpurisingthresholdperiod.value_namespace = name_space;
        cpmcpurisingthresholdperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUFallingThresholdValue")
    {
        cpmcpufallingthresholdvalue = value;
        cpmcpufallingthresholdvalue.value_namespace = name_space;
        cpmcpufallingthresholdvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUFallingThresholdPeriod")
    {
        cpmcpufallingthresholdperiod = value;
        cpmcpufallingthresholdperiod.value_namespace = name_space;
        cpmcpufallingthresholdperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUThresholdEntryStatus")
    {
        cpmcputhresholdentrystatus = value;
        cpmcputhresholdentrystatus.value_namespace = name_space;
        cpmcputhresholdentrystatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex.yfilter = yfilter;
    }
    if(value_path == "cpmCPUThresholdClass")
    {
        cpmcputhresholdclass.yfilter = yfilter;
    }
    if(value_path == "cpmCPURisingThresholdValue")
    {
        cpmcpurisingthresholdvalue.yfilter = yfilter;
    }
    if(value_path == "cpmCPURisingThresholdPeriod")
    {
        cpmcpurisingthresholdperiod.yfilter = yfilter;
    }
    if(value_path == "cpmCPUFallingThresholdValue")
    {
        cpmcpufallingthresholdvalue.yfilter = yfilter;
    }
    if(value_path == "cpmCPUFallingThresholdPeriod")
    {
        cpmcpufallingthresholdperiod.yfilter = yfilter;
    }
    if(value_path == "cpmCPUThresholdEntryStatus")
    {
        cpmcputhresholdentrystatus.yfilter = yfilter;
    }
}

bool CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmCPUTotalIndex" || name == "cpmCPUThresholdClass" || name == "cpmCPURisingThresholdValue" || name == "cpmCPURisingThresholdPeriod" || name == "cpmCPUFallingThresholdValue" || name == "cpmCPUFallingThresholdPeriod" || name == "cpmCPUThresholdEntryStatus")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryTable()
    :
    cpmcpuhistoryentry(this, {"cpmcputotalindex", "cpmcpuhistoryreportid"})
{

    yang_name = "cpmCPUHistoryTable"; yang_parent_name = "CISCO-PROCESS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmCPUHistoryTable::~CpmCPUHistoryTable()
{
}

bool CISCOPROCESSMIB::CpmCPUHistoryTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpmcpuhistoryentry.len(); index++)
    {
        if(cpmcpuhistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPROCESSMIB::CpmCPUHistoryTable::has_operation() const
{
    for (std::size_t index=0; index<cpmcpuhistoryentry.len(); index++)
    {
        if(cpmcpuhistoryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPROCESSMIB::CpmCPUHistoryTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmCPUHistoryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmCPUHistoryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmCPUHistoryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmCPUHistoryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpmCPUHistoryEntry")
    {
        auto c = std::make_shared<CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryEntry>();
        c->parent = this;
        cpmcpuhistoryentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmCPUHistoryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpmcpuhistoryentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPROCESSMIB::CpmCPUHistoryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPROCESSMIB::CpmCPUHistoryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPROCESSMIB::CpmCPUHistoryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmCPUHistoryEntry")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryEntry::CpmCPUHistoryEntry()
    :
    cpmcputotalindex{YType::str, "cpmCPUTotalIndex"},
    cpmcpuhistoryreportid{YType::uint32, "cpmCPUHistoryReportId"},
    cpmcpuhistoryreportsize{YType::uint32, "cpmCPUHistoryReportSize"},
    cpmcpuhistorytotalutil{YType::uint32, "cpmCPUHistoryTotalUtil"},
    cpmcpuhistoryinterruptutil{YType::uint32, "cpmCPUHistoryInterruptUtil"},
    cpmcpuhistorycreatedtime{YType::uint32, "cpmCPUHistoryCreatedTime"}
{

    yang_name = "cpmCPUHistoryEntry"; yang_parent_name = "cpmCPUHistoryTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryEntry::~CpmCPUHistoryEntry()
{
}

bool CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryEntry::has_data() const
{
    if (is_presence_container) return true;
    return cpmcputotalindex.is_set
	|| cpmcpuhistoryreportid.is_set
	|| cpmcpuhistoryreportsize.is_set
	|| cpmcpuhistorytotalutil.is_set
	|| cpmcpuhistoryinterruptutil.is_set
	|| cpmcpuhistorycreatedtime.is_set;
}

bool CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpmcputotalindex.yfilter)
	|| ydk::is_set(cpmcpuhistoryreportid.yfilter)
	|| ydk::is_set(cpmcpuhistoryreportsize.yfilter)
	|| ydk::is_set(cpmcpuhistorytotalutil.yfilter)
	|| ydk::is_set(cpmcpuhistoryinterruptutil.yfilter)
	|| ydk::is_set(cpmcpuhistorycreatedtime.yfilter);
}

std::string CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/cpmCPUHistoryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmCPUHistoryEntry";
    ADD_KEY_TOKEN(cpmcputotalindex, "cpmCPUTotalIndex");
    ADD_KEY_TOKEN(cpmcpuhistoryreportid, "cpmCPUHistoryReportId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpmcputotalindex.is_set || is_set(cpmcputotalindex.yfilter)) leaf_name_data.push_back(cpmcputotalindex.get_name_leafdata());
    if (cpmcpuhistoryreportid.is_set || is_set(cpmcpuhistoryreportid.yfilter)) leaf_name_data.push_back(cpmcpuhistoryreportid.get_name_leafdata());
    if (cpmcpuhistoryreportsize.is_set || is_set(cpmcpuhistoryreportsize.yfilter)) leaf_name_data.push_back(cpmcpuhistoryreportsize.get_name_leafdata());
    if (cpmcpuhistorytotalutil.is_set || is_set(cpmcpuhistorytotalutil.yfilter)) leaf_name_data.push_back(cpmcpuhistorytotalutil.get_name_leafdata());
    if (cpmcpuhistoryinterruptutil.is_set || is_set(cpmcpuhistoryinterruptutil.yfilter)) leaf_name_data.push_back(cpmcpuhistoryinterruptutil.get_name_leafdata());
    if (cpmcpuhistorycreatedtime.is_set || is_set(cpmcpuhistorycreatedtime.yfilter)) leaf_name_data.push_back(cpmcpuhistorycreatedtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex = value;
        cpmcputotalindex.value_namespace = name_space;
        cpmcputotalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUHistoryReportId")
    {
        cpmcpuhistoryreportid = value;
        cpmcpuhistoryreportid.value_namespace = name_space;
        cpmcpuhistoryreportid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUHistoryReportSize")
    {
        cpmcpuhistoryreportsize = value;
        cpmcpuhistoryreportsize.value_namespace = name_space;
        cpmcpuhistoryreportsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUHistoryTotalUtil")
    {
        cpmcpuhistorytotalutil = value;
        cpmcpuhistorytotalutil.value_namespace = name_space;
        cpmcpuhistorytotalutil.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUHistoryInterruptUtil")
    {
        cpmcpuhistoryinterruptutil = value;
        cpmcpuhistoryinterruptutil.value_namespace = name_space;
        cpmcpuhistoryinterruptutil.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUHistoryCreatedTime")
    {
        cpmcpuhistorycreatedtime = value;
        cpmcpuhistorycreatedtime.value_namespace = name_space;
        cpmcpuhistorycreatedtime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex.yfilter = yfilter;
    }
    if(value_path == "cpmCPUHistoryReportId")
    {
        cpmcpuhistoryreportid.yfilter = yfilter;
    }
    if(value_path == "cpmCPUHistoryReportSize")
    {
        cpmcpuhistoryreportsize.yfilter = yfilter;
    }
    if(value_path == "cpmCPUHistoryTotalUtil")
    {
        cpmcpuhistorytotalutil.yfilter = yfilter;
    }
    if(value_path == "cpmCPUHistoryInterruptUtil")
    {
        cpmcpuhistoryinterruptutil.yfilter = yfilter;
    }
    if(value_path == "cpmCPUHistoryCreatedTime")
    {
        cpmcpuhistorycreatedtime.yfilter = yfilter;
    }
}

bool CISCOPROCESSMIB::CpmCPUHistoryTable::CpmCPUHistoryEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmCPUTotalIndex" || name == "cpmCPUHistoryReportId" || name == "cpmCPUHistoryReportSize" || name == "cpmCPUHistoryTotalUtil" || name == "cpmCPUHistoryInterruptUtil" || name == "cpmCPUHistoryCreatedTime")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmCPUProcessHistoryTable::CpmCPUProcessHistoryTable()
    :
    cpmcpuprocesshistoryentry(this, {"cpmcputotalindex", "cpmcpuhistoryreportid", "cpmcpuprocesshistoryindex"})
{

    yang_name = "cpmCPUProcessHistoryTable"; yang_parent_name = "CISCO-PROCESS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmCPUProcessHistoryTable::~CpmCPUProcessHistoryTable()
{
}

bool CISCOPROCESSMIB::CpmCPUProcessHistoryTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpmcpuprocesshistoryentry.len(); index++)
    {
        if(cpmcpuprocesshistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPROCESSMIB::CpmCPUProcessHistoryTable::has_operation() const
{
    for (std::size_t index=0; index<cpmcpuprocesshistoryentry.len(); index++)
    {
        if(cpmcpuprocesshistoryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPROCESSMIB::CpmCPUProcessHistoryTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmCPUProcessHistoryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmCPUProcessHistoryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmCPUProcessHistoryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmCPUProcessHistoryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpmCPUProcessHistoryEntry")
    {
        auto c = std::make_shared<CISCOPROCESSMIB::CpmCPUProcessHistoryTable::CpmCPUProcessHistoryEntry>();
        c->parent = this;
        cpmcpuprocesshistoryentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmCPUProcessHistoryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpmcpuprocesshistoryentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPROCESSMIB::CpmCPUProcessHistoryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPROCESSMIB::CpmCPUProcessHistoryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPROCESSMIB::CpmCPUProcessHistoryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmCPUProcessHistoryEntry")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmCPUProcessHistoryTable::CpmCPUProcessHistoryEntry::CpmCPUProcessHistoryEntry()
    :
    cpmcputotalindex{YType::str, "cpmCPUTotalIndex"},
    cpmcpuhistoryreportid{YType::str, "cpmCPUHistoryReportId"},
    cpmcpuprocesshistoryindex{YType::uint32, "cpmCPUProcessHistoryIndex"},
    cpmcpuhistoryprocid{YType::uint32, "cpmCPUHistoryProcId"},
    cpmcpuhistoryprocname{YType::str, "cpmCPUHistoryProcName"},
    cpmcpuhistoryproccreated{YType::uint32, "cpmCPUHistoryProcCreated"},
    cpmcpuhistoryprocutil{YType::uint32, "cpmCPUHistoryProcUtil"}
{

    yang_name = "cpmCPUProcessHistoryEntry"; yang_parent_name = "cpmCPUProcessHistoryTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmCPUProcessHistoryTable::CpmCPUProcessHistoryEntry::~CpmCPUProcessHistoryEntry()
{
}

bool CISCOPROCESSMIB::CpmCPUProcessHistoryTable::CpmCPUProcessHistoryEntry::has_data() const
{
    if (is_presence_container) return true;
    return cpmcputotalindex.is_set
	|| cpmcpuhistoryreportid.is_set
	|| cpmcpuprocesshistoryindex.is_set
	|| cpmcpuhistoryprocid.is_set
	|| cpmcpuhistoryprocname.is_set
	|| cpmcpuhistoryproccreated.is_set
	|| cpmcpuhistoryprocutil.is_set;
}

bool CISCOPROCESSMIB::CpmCPUProcessHistoryTable::CpmCPUProcessHistoryEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpmcputotalindex.yfilter)
	|| ydk::is_set(cpmcpuhistoryreportid.yfilter)
	|| ydk::is_set(cpmcpuprocesshistoryindex.yfilter)
	|| ydk::is_set(cpmcpuhistoryprocid.yfilter)
	|| ydk::is_set(cpmcpuhistoryprocname.yfilter)
	|| ydk::is_set(cpmcpuhistoryproccreated.yfilter)
	|| ydk::is_set(cpmcpuhistoryprocutil.yfilter);
}

std::string CISCOPROCESSMIB::CpmCPUProcessHistoryTable::CpmCPUProcessHistoryEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/cpmCPUProcessHistoryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmCPUProcessHistoryTable::CpmCPUProcessHistoryEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmCPUProcessHistoryEntry";
    ADD_KEY_TOKEN(cpmcputotalindex, "cpmCPUTotalIndex");
    ADD_KEY_TOKEN(cpmcpuhistoryreportid, "cpmCPUHistoryReportId");
    ADD_KEY_TOKEN(cpmcpuprocesshistoryindex, "cpmCPUProcessHistoryIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmCPUProcessHistoryTable::CpmCPUProcessHistoryEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpmcputotalindex.is_set || is_set(cpmcputotalindex.yfilter)) leaf_name_data.push_back(cpmcputotalindex.get_name_leafdata());
    if (cpmcpuhistoryreportid.is_set || is_set(cpmcpuhistoryreportid.yfilter)) leaf_name_data.push_back(cpmcpuhistoryreportid.get_name_leafdata());
    if (cpmcpuprocesshistoryindex.is_set || is_set(cpmcpuprocesshistoryindex.yfilter)) leaf_name_data.push_back(cpmcpuprocesshistoryindex.get_name_leafdata());
    if (cpmcpuhistoryprocid.is_set || is_set(cpmcpuhistoryprocid.yfilter)) leaf_name_data.push_back(cpmcpuhistoryprocid.get_name_leafdata());
    if (cpmcpuhistoryprocname.is_set || is_set(cpmcpuhistoryprocname.yfilter)) leaf_name_data.push_back(cpmcpuhistoryprocname.get_name_leafdata());
    if (cpmcpuhistoryproccreated.is_set || is_set(cpmcpuhistoryproccreated.yfilter)) leaf_name_data.push_back(cpmcpuhistoryproccreated.get_name_leafdata());
    if (cpmcpuhistoryprocutil.is_set || is_set(cpmcpuhistoryprocutil.yfilter)) leaf_name_data.push_back(cpmcpuhistoryprocutil.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmCPUProcessHistoryTable::CpmCPUProcessHistoryEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmCPUProcessHistoryTable::CpmCPUProcessHistoryEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPROCESSMIB::CpmCPUProcessHistoryTable::CpmCPUProcessHistoryEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex = value;
        cpmcputotalindex.value_namespace = name_space;
        cpmcputotalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUHistoryReportId")
    {
        cpmcpuhistoryreportid = value;
        cpmcpuhistoryreportid.value_namespace = name_space;
        cpmcpuhistoryreportid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUProcessHistoryIndex")
    {
        cpmcpuprocesshistoryindex = value;
        cpmcpuprocesshistoryindex.value_namespace = name_space;
        cpmcpuprocesshistoryindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUHistoryProcId")
    {
        cpmcpuhistoryprocid = value;
        cpmcpuhistoryprocid.value_namespace = name_space;
        cpmcpuhistoryprocid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUHistoryProcName")
    {
        cpmcpuhistoryprocname = value;
        cpmcpuhistoryprocname.value_namespace = name_space;
        cpmcpuhistoryprocname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUHistoryProcCreated")
    {
        cpmcpuhistoryproccreated = value;
        cpmcpuhistoryproccreated.value_namespace = name_space;
        cpmcpuhistoryproccreated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmCPUHistoryProcUtil")
    {
        cpmcpuhistoryprocutil = value;
        cpmcpuhistoryprocutil.value_namespace = name_space;
        cpmcpuhistoryprocutil.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPROCESSMIB::CpmCPUProcessHistoryTable::CpmCPUProcessHistoryEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex.yfilter = yfilter;
    }
    if(value_path == "cpmCPUHistoryReportId")
    {
        cpmcpuhistoryreportid.yfilter = yfilter;
    }
    if(value_path == "cpmCPUProcessHistoryIndex")
    {
        cpmcpuprocesshistoryindex.yfilter = yfilter;
    }
    if(value_path == "cpmCPUHistoryProcId")
    {
        cpmcpuhistoryprocid.yfilter = yfilter;
    }
    if(value_path == "cpmCPUHistoryProcName")
    {
        cpmcpuhistoryprocname.yfilter = yfilter;
    }
    if(value_path == "cpmCPUHistoryProcCreated")
    {
        cpmcpuhistoryproccreated.yfilter = yfilter;
    }
    if(value_path == "cpmCPUHistoryProcUtil")
    {
        cpmcpuhistoryprocutil.yfilter = yfilter;
    }
}

bool CISCOPROCESSMIB::CpmCPUProcessHistoryTable::CpmCPUProcessHistoryEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmCPUTotalIndex" || name == "cpmCPUHistoryReportId" || name == "cpmCPUProcessHistoryIndex" || name == "cpmCPUHistoryProcId" || name == "cpmCPUHistoryProcName" || name == "cpmCPUHistoryProcCreated" || name == "cpmCPUHistoryProcUtil")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmThreadTable::CpmThreadTable()
    :
    cpmthreadentry(this, {"cpmcputotalindex", "cpmprocesspid", "cpmthreadid"})
{

    yang_name = "cpmThreadTable"; yang_parent_name = "CISCO-PROCESS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmThreadTable::~CpmThreadTable()
{
}

bool CISCOPROCESSMIB::CpmThreadTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpmthreadentry.len(); index++)
    {
        if(cpmthreadentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPROCESSMIB::CpmThreadTable::has_operation() const
{
    for (std::size_t index=0; index<cpmthreadentry.len(); index++)
    {
        if(cpmthreadentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPROCESSMIB::CpmThreadTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmThreadTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmThreadTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmThreadTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmThreadTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpmThreadEntry")
    {
        auto c = std::make_shared<CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry>();
        c->parent = this;
        cpmthreadentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmThreadTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpmthreadentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPROCESSMIB::CpmThreadTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPROCESSMIB::CpmThreadTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPROCESSMIB::CpmThreadTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmThreadEntry")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadEntry()
    :
    cpmcputotalindex{YType::str, "cpmCPUTotalIndex"},
    cpmprocesspid{YType::str, "cpmProcessPID"},
    cpmthreadid{YType::uint32, "cpmThreadID"},
    cpmthreadname{YType::str, "cpmThreadName"},
    cpmthreadpriority{YType::uint32, "cpmThreadPriority"},
    cpmthreadstate{YType::enumeration, "cpmThreadState"},
    cpmthreadblockingprocess{YType::str, "cpmThreadBlockingProcess"},
    cpmthreadcpuutilization{YType::uint32, "cpmThreadCpuUtilization"},
    cpmthreadstacksize{YType::uint32, "cpmThreadStackSize"},
    cpmthreadstacksizeovrflw{YType::uint32, "cpmThreadStackSizeOvrflw"},
    cpmthreadhcstacksize{YType::uint64, "cpmThreadHCStackSize"}
{

    yang_name = "cpmThreadEntry"; yang_parent_name = "cpmThreadTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::~CpmThreadEntry()
{
}

bool CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::has_data() const
{
    if (is_presence_container) return true;
    return cpmcputotalindex.is_set
	|| cpmprocesspid.is_set
	|| cpmthreadid.is_set
	|| cpmthreadname.is_set
	|| cpmthreadpriority.is_set
	|| cpmthreadstate.is_set
	|| cpmthreadblockingprocess.is_set
	|| cpmthreadcpuutilization.is_set
	|| cpmthreadstacksize.is_set
	|| cpmthreadstacksizeovrflw.is_set
	|| cpmthreadhcstacksize.is_set;
}

bool CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpmcputotalindex.yfilter)
	|| ydk::is_set(cpmprocesspid.yfilter)
	|| ydk::is_set(cpmthreadid.yfilter)
	|| ydk::is_set(cpmthreadname.yfilter)
	|| ydk::is_set(cpmthreadpriority.yfilter)
	|| ydk::is_set(cpmthreadstate.yfilter)
	|| ydk::is_set(cpmthreadblockingprocess.yfilter)
	|| ydk::is_set(cpmthreadcpuutilization.yfilter)
	|| ydk::is_set(cpmthreadstacksize.yfilter)
	|| ydk::is_set(cpmthreadstacksizeovrflw.yfilter)
	|| ydk::is_set(cpmthreadhcstacksize.yfilter);
}

std::string CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/cpmThreadTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmThreadEntry";
    ADD_KEY_TOKEN(cpmcputotalindex, "cpmCPUTotalIndex");
    ADD_KEY_TOKEN(cpmprocesspid, "cpmProcessPID");
    ADD_KEY_TOKEN(cpmthreadid, "cpmThreadID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpmcputotalindex.is_set || is_set(cpmcputotalindex.yfilter)) leaf_name_data.push_back(cpmcputotalindex.get_name_leafdata());
    if (cpmprocesspid.is_set || is_set(cpmprocesspid.yfilter)) leaf_name_data.push_back(cpmprocesspid.get_name_leafdata());
    if (cpmthreadid.is_set || is_set(cpmthreadid.yfilter)) leaf_name_data.push_back(cpmthreadid.get_name_leafdata());
    if (cpmthreadname.is_set || is_set(cpmthreadname.yfilter)) leaf_name_data.push_back(cpmthreadname.get_name_leafdata());
    if (cpmthreadpriority.is_set || is_set(cpmthreadpriority.yfilter)) leaf_name_data.push_back(cpmthreadpriority.get_name_leafdata());
    if (cpmthreadstate.is_set || is_set(cpmthreadstate.yfilter)) leaf_name_data.push_back(cpmthreadstate.get_name_leafdata());
    if (cpmthreadblockingprocess.is_set || is_set(cpmthreadblockingprocess.yfilter)) leaf_name_data.push_back(cpmthreadblockingprocess.get_name_leafdata());
    if (cpmthreadcpuutilization.is_set || is_set(cpmthreadcpuutilization.yfilter)) leaf_name_data.push_back(cpmthreadcpuutilization.get_name_leafdata());
    if (cpmthreadstacksize.is_set || is_set(cpmthreadstacksize.yfilter)) leaf_name_data.push_back(cpmthreadstacksize.get_name_leafdata());
    if (cpmthreadstacksizeovrflw.is_set || is_set(cpmthreadstacksizeovrflw.yfilter)) leaf_name_data.push_back(cpmthreadstacksizeovrflw.get_name_leafdata());
    if (cpmthreadhcstacksize.is_set || is_set(cpmthreadhcstacksize.yfilter)) leaf_name_data.push_back(cpmthreadhcstacksize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex = value;
        cpmcputotalindex.value_namespace = name_space;
        cpmcputotalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessPID")
    {
        cpmprocesspid = value;
        cpmprocesspid.value_namespace = name_space;
        cpmprocesspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmThreadID")
    {
        cpmthreadid = value;
        cpmthreadid.value_namespace = name_space;
        cpmthreadid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmThreadName")
    {
        cpmthreadname = value;
        cpmthreadname.value_namespace = name_space;
        cpmthreadname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmThreadPriority")
    {
        cpmthreadpriority = value;
        cpmthreadpriority.value_namespace = name_space;
        cpmthreadpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmThreadState")
    {
        cpmthreadstate = value;
        cpmthreadstate.value_namespace = name_space;
        cpmthreadstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmThreadBlockingProcess")
    {
        cpmthreadblockingprocess = value;
        cpmthreadblockingprocess.value_namespace = name_space;
        cpmthreadblockingprocess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmThreadCpuUtilization")
    {
        cpmthreadcpuutilization = value;
        cpmthreadcpuutilization.value_namespace = name_space;
        cpmthreadcpuutilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmThreadStackSize")
    {
        cpmthreadstacksize = value;
        cpmthreadstacksize.value_namespace = name_space;
        cpmthreadstacksize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmThreadStackSizeOvrflw")
    {
        cpmthreadstacksizeovrflw = value;
        cpmthreadstacksizeovrflw.value_namespace = name_space;
        cpmthreadstacksizeovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmThreadHCStackSize")
    {
        cpmthreadhcstacksize = value;
        cpmthreadhcstacksize.value_namespace = name_space;
        cpmthreadhcstacksize.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex.yfilter = yfilter;
    }
    if(value_path == "cpmProcessPID")
    {
        cpmprocesspid.yfilter = yfilter;
    }
    if(value_path == "cpmThreadID")
    {
        cpmthreadid.yfilter = yfilter;
    }
    if(value_path == "cpmThreadName")
    {
        cpmthreadname.yfilter = yfilter;
    }
    if(value_path == "cpmThreadPriority")
    {
        cpmthreadpriority.yfilter = yfilter;
    }
    if(value_path == "cpmThreadState")
    {
        cpmthreadstate.yfilter = yfilter;
    }
    if(value_path == "cpmThreadBlockingProcess")
    {
        cpmthreadblockingprocess.yfilter = yfilter;
    }
    if(value_path == "cpmThreadCpuUtilization")
    {
        cpmthreadcpuutilization.yfilter = yfilter;
    }
    if(value_path == "cpmThreadStackSize")
    {
        cpmthreadstacksize.yfilter = yfilter;
    }
    if(value_path == "cpmThreadStackSizeOvrflw")
    {
        cpmthreadstacksizeovrflw.yfilter = yfilter;
    }
    if(value_path == "cpmThreadHCStackSize")
    {
        cpmthreadhcstacksize.yfilter = yfilter;
    }
}

bool CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmCPUTotalIndex" || name == "cpmProcessPID" || name == "cpmThreadID" || name == "cpmThreadName" || name == "cpmThreadPriority" || name == "cpmThreadState" || name == "cpmThreadBlockingProcess" || name == "cpmThreadCpuUtilization" || name == "cpmThreadStackSize" || name == "cpmThreadStackSizeOvrflw" || name == "cpmThreadHCStackSize")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmVirtualProcessTable::CpmVirtualProcessTable()
    :
    cpmvirtualprocessentry(this, {"cpmcputotalindex", "cpmprocesspid", "cpmvirtualprocessid"})
{

    yang_name = "cpmVirtualProcessTable"; yang_parent_name = "CISCO-PROCESS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmVirtualProcessTable::~CpmVirtualProcessTable()
{
}

bool CISCOPROCESSMIB::CpmVirtualProcessTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cpmvirtualprocessentry.len(); index++)
    {
        if(cpmvirtualprocessentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPROCESSMIB::CpmVirtualProcessTable::has_operation() const
{
    for (std::size_t index=0; index<cpmvirtualprocessentry.len(); index++)
    {
        if(cpmvirtualprocessentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPROCESSMIB::CpmVirtualProcessTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmVirtualProcessTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmVirtualProcessTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmVirtualProcessTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmVirtualProcessTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cpmVirtualProcessEntry")
    {
        auto c = std::make_shared<CISCOPROCESSMIB::CpmVirtualProcessTable::CpmVirtualProcessEntry>();
        c->parent = this;
        cpmvirtualprocessentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmVirtualProcessTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cpmvirtualprocessentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPROCESSMIB::CpmVirtualProcessTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPROCESSMIB::CpmVirtualProcessTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPROCESSMIB::CpmVirtualProcessTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmVirtualProcessEntry")
        return true;
    return false;
}

CISCOPROCESSMIB::CpmVirtualProcessTable::CpmVirtualProcessEntry::CpmVirtualProcessEntry()
    :
    cpmcputotalindex{YType::str, "cpmCPUTotalIndex"},
    cpmprocesspid{YType::str, "cpmProcessPID"},
    cpmvirtualprocessid{YType::uint32, "cpmVirtualProcessID"},
    cpmvirtualprocessname{YType::str, "cpmVirtualProcessName"},
    cpmvirtualprocessutil5sec{YType::uint32, "cpmVirtualProcessUtil5Sec"},
    cpmvirtualprocessutil1min{YType::uint32, "cpmVirtualProcessUtil1Min"},
    cpmvirtualprocessutil5min{YType::uint32, "cpmVirtualProcessUtil5Min"},
    cpmvirtualprocessmemallocated{YType::uint32, "cpmVirtualProcessMemAllocated"},
    cpmvirtualprocessmemfreed{YType::uint32, "cpmVirtualProcessMemFreed"},
    cpmvirtualprocessinvokecount{YType::uint32, "cpmVirtualProcessInvokeCount"},
    cpmvirtualprocessruntime{YType::uint32, "cpmVirtualProcessRuntime"},
    cpmvirtualprocessmemallocatedovrflw{YType::uint32, "cpmVirtualProcessMemAllocatedOvrflw"},
    cpmvirtualprocesshcmemallocated{YType::uint64, "cpmVirtualProcessHCMemAllocated"},
    cpmvirtualprocessmemfreedovrflw{YType::uint32, "cpmVirtualProcessMemFreedOvrflw"},
    cpmvirtualprocesshcmemfreed{YType::uint64, "cpmVirtualProcessHCMemFreed"}
{

    yang_name = "cpmVirtualProcessEntry"; yang_parent_name = "cpmVirtualProcessTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPROCESSMIB::CpmVirtualProcessTable::CpmVirtualProcessEntry::~CpmVirtualProcessEntry()
{
}

bool CISCOPROCESSMIB::CpmVirtualProcessTable::CpmVirtualProcessEntry::has_data() const
{
    if (is_presence_container) return true;
    return cpmcputotalindex.is_set
	|| cpmprocesspid.is_set
	|| cpmvirtualprocessid.is_set
	|| cpmvirtualprocessname.is_set
	|| cpmvirtualprocessutil5sec.is_set
	|| cpmvirtualprocessutil1min.is_set
	|| cpmvirtualprocessutil5min.is_set
	|| cpmvirtualprocessmemallocated.is_set
	|| cpmvirtualprocessmemfreed.is_set
	|| cpmvirtualprocessinvokecount.is_set
	|| cpmvirtualprocessruntime.is_set
	|| cpmvirtualprocessmemallocatedovrflw.is_set
	|| cpmvirtualprocesshcmemallocated.is_set
	|| cpmvirtualprocessmemfreedovrflw.is_set
	|| cpmvirtualprocesshcmemfreed.is_set;
}

bool CISCOPROCESSMIB::CpmVirtualProcessTable::CpmVirtualProcessEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cpmcputotalindex.yfilter)
	|| ydk::is_set(cpmprocesspid.yfilter)
	|| ydk::is_set(cpmvirtualprocessid.yfilter)
	|| ydk::is_set(cpmvirtualprocessname.yfilter)
	|| ydk::is_set(cpmvirtualprocessutil5sec.yfilter)
	|| ydk::is_set(cpmvirtualprocessutil1min.yfilter)
	|| ydk::is_set(cpmvirtualprocessutil5min.yfilter)
	|| ydk::is_set(cpmvirtualprocessmemallocated.yfilter)
	|| ydk::is_set(cpmvirtualprocessmemfreed.yfilter)
	|| ydk::is_set(cpmvirtualprocessinvokecount.yfilter)
	|| ydk::is_set(cpmvirtualprocessruntime.yfilter)
	|| ydk::is_set(cpmvirtualprocessmemallocatedovrflw.yfilter)
	|| ydk::is_set(cpmvirtualprocesshcmemallocated.yfilter)
	|| ydk::is_set(cpmvirtualprocessmemfreedovrflw.yfilter)
	|| ydk::is_set(cpmvirtualprocesshcmemfreed.yfilter);
}

std::string CISCOPROCESSMIB::CpmVirtualProcessTable::CpmVirtualProcessEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PROCESS-MIB:CISCO-PROCESS-MIB/cpmVirtualProcessTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPROCESSMIB::CpmVirtualProcessTable::CpmVirtualProcessEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cpmVirtualProcessEntry";
    ADD_KEY_TOKEN(cpmcputotalindex, "cpmCPUTotalIndex");
    ADD_KEY_TOKEN(cpmprocesspid, "cpmProcessPID");
    ADD_KEY_TOKEN(cpmvirtualprocessid, "cpmVirtualProcessID");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPROCESSMIB::CpmVirtualProcessTable::CpmVirtualProcessEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cpmcputotalindex.is_set || is_set(cpmcputotalindex.yfilter)) leaf_name_data.push_back(cpmcputotalindex.get_name_leafdata());
    if (cpmprocesspid.is_set || is_set(cpmprocesspid.yfilter)) leaf_name_data.push_back(cpmprocesspid.get_name_leafdata());
    if (cpmvirtualprocessid.is_set || is_set(cpmvirtualprocessid.yfilter)) leaf_name_data.push_back(cpmvirtualprocessid.get_name_leafdata());
    if (cpmvirtualprocessname.is_set || is_set(cpmvirtualprocessname.yfilter)) leaf_name_data.push_back(cpmvirtualprocessname.get_name_leafdata());
    if (cpmvirtualprocessutil5sec.is_set || is_set(cpmvirtualprocessutil5sec.yfilter)) leaf_name_data.push_back(cpmvirtualprocessutil5sec.get_name_leafdata());
    if (cpmvirtualprocessutil1min.is_set || is_set(cpmvirtualprocessutil1min.yfilter)) leaf_name_data.push_back(cpmvirtualprocessutil1min.get_name_leafdata());
    if (cpmvirtualprocessutil5min.is_set || is_set(cpmvirtualprocessutil5min.yfilter)) leaf_name_data.push_back(cpmvirtualprocessutil5min.get_name_leafdata());
    if (cpmvirtualprocessmemallocated.is_set || is_set(cpmvirtualprocessmemallocated.yfilter)) leaf_name_data.push_back(cpmvirtualprocessmemallocated.get_name_leafdata());
    if (cpmvirtualprocessmemfreed.is_set || is_set(cpmvirtualprocessmemfreed.yfilter)) leaf_name_data.push_back(cpmvirtualprocessmemfreed.get_name_leafdata());
    if (cpmvirtualprocessinvokecount.is_set || is_set(cpmvirtualprocessinvokecount.yfilter)) leaf_name_data.push_back(cpmvirtualprocessinvokecount.get_name_leafdata());
    if (cpmvirtualprocessruntime.is_set || is_set(cpmvirtualprocessruntime.yfilter)) leaf_name_data.push_back(cpmvirtualprocessruntime.get_name_leafdata());
    if (cpmvirtualprocessmemallocatedovrflw.is_set || is_set(cpmvirtualprocessmemallocatedovrflw.yfilter)) leaf_name_data.push_back(cpmvirtualprocessmemallocatedovrflw.get_name_leafdata());
    if (cpmvirtualprocesshcmemallocated.is_set || is_set(cpmvirtualprocesshcmemallocated.yfilter)) leaf_name_data.push_back(cpmvirtualprocesshcmemallocated.get_name_leafdata());
    if (cpmvirtualprocessmemfreedovrflw.is_set || is_set(cpmvirtualprocessmemfreedovrflw.yfilter)) leaf_name_data.push_back(cpmvirtualprocessmemfreedovrflw.get_name_leafdata());
    if (cpmvirtualprocesshcmemfreed.is_set || is_set(cpmvirtualprocesshcmemfreed.yfilter)) leaf_name_data.push_back(cpmvirtualprocesshcmemfreed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPROCESSMIB::CpmVirtualProcessTable::CpmVirtualProcessEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPROCESSMIB::CpmVirtualProcessTable::CpmVirtualProcessEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPROCESSMIB::CpmVirtualProcessTable::CpmVirtualProcessEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex = value;
        cpmcputotalindex.value_namespace = name_space;
        cpmcputotalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmProcessPID")
    {
        cpmprocesspid = value;
        cpmprocesspid.value_namespace = name_space;
        cpmprocesspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmVirtualProcessID")
    {
        cpmvirtualprocessid = value;
        cpmvirtualprocessid.value_namespace = name_space;
        cpmvirtualprocessid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmVirtualProcessName")
    {
        cpmvirtualprocessname = value;
        cpmvirtualprocessname.value_namespace = name_space;
        cpmvirtualprocessname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmVirtualProcessUtil5Sec")
    {
        cpmvirtualprocessutil5sec = value;
        cpmvirtualprocessutil5sec.value_namespace = name_space;
        cpmvirtualprocessutil5sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmVirtualProcessUtil1Min")
    {
        cpmvirtualprocessutil1min = value;
        cpmvirtualprocessutil1min.value_namespace = name_space;
        cpmvirtualprocessutil1min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmVirtualProcessUtil5Min")
    {
        cpmvirtualprocessutil5min = value;
        cpmvirtualprocessutil5min.value_namespace = name_space;
        cpmvirtualprocessutil5min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmVirtualProcessMemAllocated")
    {
        cpmvirtualprocessmemallocated = value;
        cpmvirtualprocessmemallocated.value_namespace = name_space;
        cpmvirtualprocessmemallocated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmVirtualProcessMemFreed")
    {
        cpmvirtualprocessmemfreed = value;
        cpmvirtualprocessmemfreed.value_namespace = name_space;
        cpmvirtualprocessmemfreed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmVirtualProcessInvokeCount")
    {
        cpmvirtualprocessinvokecount = value;
        cpmvirtualprocessinvokecount.value_namespace = name_space;
        cpmvirtualprocessinvokecount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmVirtualProcessRuntime")
    {
        cpmvirtualprocessruntime = value;
        cpmvirtualprocessruntime.value_namespace = name_space;
        cpmvirtualprocessruntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmVirtualProcessMemAllocatedOvrflw")
    {
        cpmvirtualprocessmemallocatedovrflw = value;
        cpmvirtualprocessmemallocatedovrflw.value_namespace = name_space;
        cpmvirtualprocessmemallocatedovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmVirtualProcessHCMemAllocated")
    {
        cpmvirtualprocesshcmemallocated = value;
        cpmvirtualprocesshcmemallocated.value_namespace = name_space;
        cpmvirtualprocesshcmemallocated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmVirtualProcessMemFreedOvrflw")
    {
        cpmvirtualprocessmemfreedovrflw = value;
        cpmvirtualprocessmemfreedovrflw.value_namespace = name_space;
        cpmvirtualprocessmemfreedovrflw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpmVirtualProcessHCMemFreed")
    {
        cpmvirtualprocesshcmemfreed = value;
        cpmvirtualprocesshcmemfreed.value_namespace = name_space;
        cpmvirtualprocesshcmemfreed.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPROCESSMIB::CpmVirtualProcessTable::CpmVirtualProcessEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cpmCPUTotalIndex")
    {
        cpmcputotalindex.yfilter = yfilter;
    }
    if(value_path == "cpmProcessPID")
    {
        cpmprocesspid.yfilter = yfilter;
    }
    if(value_path == "cpmVirtualProcessID")
    {
        cpmvirtualprocessid.yfilter = yfilter;
    }
    if(value_path == "cpmVirtualProcessName")
    {
        cpmvirtualprocessname.yfilter = yfilter;
    }
    if(value_path == "cpmVirtualProcessUtil5Sec")
    {
        cpmvirtualprocessutil5sec.yfilter = yfilter;
    }
    if(value_path == "cpmVirtualProcessUtil1Min")
    {
        cpmvirtualprocessutil1min.yfilter = yfilter;
    }
    if(value_path == "cpmVirtualProcessUtil5Min")
    {
        cpmvirtualprocessutil5min.yfilter = yfilter;
    }
    if(value_path == "cpmVirtualProcessMemAllocated")
    {
        cpmvirtualprocessmemallocated.yfilter = yfilter;
    }
    if(value_path == "cpmVirtualProcessMemFreed")
    {
        cpmvirtualprocessmemfreed.yfilter = yfilter;
    }
    if(value_path == "cpmVirtualProcessInvokeCount")
    {
        cpmvirtualprocessinvokecount.yfilter = yfilter;
    }
    if(value_path == "cpmVirtualProcessRuntime")
    {
        cpmvirtualprocessruntime.yfilter = yfilter;
    }
    if(value_path == "cpmVirtualProcessMemAllocatedOvrflw")
    {
        cpmvirtualprocessmemallocatedovrflw.yfilter = yfilter;
    }
    if(value_path == "cpmVirtualProcessHCMemAllocated")
    {
        cpmvirtualprocesshcmemallocated.yfilter = yfilter;
    }
    if(value_path == "cpmVirtualProcessMemFreedOvrflw")
    {
        cpmvirtualprocessmemfreedovrflw.yfilter = yfilter;
    }
    if(value_path == "cpmVirtualProcessHCMemFreed")
    {
        cpmvirtualprocesshcmemfreed.yfilter = yfilter;
    }
}

bool CISCOPROCESSMIB::CpmVirtualProcessTable::CpmVirtualProcessEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cpmCPUTotalIndex" || name == "cpmProcessPID" || name == "cpmVirtualProcessID" || name == "cpmVirtualProcessName" || name == "cpmVirtualProcessUtil5Sec" || name == "cpmVirtualProcessUtil1Min" || name == "cpmVirtualProcessUtil5Min" || name == "cpmVirtualProcessMemAllocated" || name == "cpmVirtualProcessMemFreed" || name == "cpmVirtualProcessInvokeCount" || name == "cpmVirtualProcessRuntime" || name == "cpmVirtualProcessMemAllocatedOvrflw" || name == "cpmVirtualProcessHCMemAllocated" || name == "cpmVirtualProcessMemFreedOvrflw" || name == "cpmVirtualProcessHCMemFreed")
        return true;
    return false;
}

const Enum::YLeaf CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::CpmProcExtPriority::critical {1, "critical"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::CpmProcExtPriority::high {2, "high"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::CpmProcExtPriority::normal {3, "normal"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::CpmProcExtPriority::low {4, "low"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessTable::CpmProcessEntry::CpmProcExtPriority::notAssigned {5, "notAssigned"};

const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcExtPriorityRev::critical {1, "critical"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcExtPriorityRev::high {2, "high"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcExtPriorityRev::normal {3, "normal"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcExtPriorityRev::low {4, "low"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcExtPriorityRev::notAssigned {5, "notAssigned"};

const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcessType::none {0, "none"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcessType::other {1, "other"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcessType::posix {2, "posix"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcessType::ios {3, "ios"};

const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcessMemoryCore::none {0, "none"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcessMemoryCore::other {1, "other"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcessMemoryCore::mainmem {2, "mainmem"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcessMemoryCore::mainmemSharedmem {3, "mainmemSharedmem"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcessMemoryCore::mainmemText {4, "mainmemText"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcessMemoryCore::mainmemTextSharedmem {5, "mainmemTextSharedmem"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcessMemoryCore::sharedmem {6, "sharedmem"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcessMemoryCore::sparse {7, "sparse"};
const Enum::YLeaf CISCOPROCESSMIB::CpmProcessExtRevTable::CpmProcessExtRevEntry::CpmProcessMemoryCore::off {8, "off"};

const Enum::YLeaf CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry::CpmCPUThresholdClass::total {1, "total"};
const Enum::YLeaf CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry::CpmCPUThresholdClass::interrupt {2, "interrupt"};
const Enum::YLeaf CISCOPROCESSMIB::CpmCPUThresholdTable::CpmCPUThresholdEntry::CpmCPUThresholdClass::process {3, "process"};

const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::other {1, "other"};
const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::dead {2, "dead"};
const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::running {3, "running"};
const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::ready {4, "ready"};
const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::stopped {5, "stopped"};
const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::send {6, "send"};
const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::receive {7, "receive"};
const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::reply {8, "reply"};
const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::stack {9, "stack"};
const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::waitpage {10, "waitpage"};
const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::sigsuspend {11, "sigsuspend"};
const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::sigwaitinfo {12, "sigwaitinfo"};
const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::nanosleep {13, "nanosleep"};
const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::mutex {14, "mutex"};
const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::condvar {15, "condvar"};
const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::join {16, "join"};
const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::intr {17, "intr"};
const Enum::YLeaf CISCOPROCESSMIB::CpmThreadTable::CpmThreadEntry::CpmThreadState::sem {18, "sem"};


}
}

