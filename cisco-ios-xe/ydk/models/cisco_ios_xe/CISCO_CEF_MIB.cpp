
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CEF_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CEF_MIB {

CISCOCEFMIB::CISCOCEFMIB()
    :
    ceffib(std::make_shared<CISCOCEFMIB::CefFIB>())
    , cefcc(std::make_shared<CISCOCEFMIB::CefCC>())
    , cefnotifcntl(std::make_shared<CISCOCEFMIB::CefNotifCntl>())
    , ceffibsummarytable(std::make_shared<CISCOCEFMIB::CefFIBSummaryTable>())
    , cefprefixtable(std::make_shared<CISCOCEFMIB::CefPrefixTable>())
    , ceflmprefixtable(std::make_shared<CISCOCEFMIB::CefLMPrefixTable>())
    , cefpathtable(std::make_shared<CISCOCEFMIB::CefPathTable>())
    , cefadjsummarytable(std::make_shared<CISCOCEFMIB::CefAdjSummaryTable>())
    , cefadjtable(std::make_shared<CISCOCEFMIB::CefAdjTable>())
    , ceffeselectiontable(std::make_shared<CISCOCEFMIB::CefFESelectionTable>())
    , cefcfgtable(std::make_shared<CISCOCEFMIB::CefCfgTable>())
    , cefresourcetable(std::make_shared<CISCOCEFMIB::CefResourceTable>())
    , cefinttable(std::make_shared<CISCOCEFMIB::CefIntTable>())
    , cefpeertable(std::make_shared<CISCOCEFMIB::CefPeerTable>())
    , cefpeerfibtable(std::make_shared<CISCOCEFMIB::CefPeerFIBTable>())
    , cefccglobaltable(std::make_shared<CISCOCEFMIB::CefCCGlobalTable>())
    , cefcctypetable(std::make_shared<CISCOCEFMIB::CefCCTypeTable>())
    , cefinconsistencyrecordtable(std::make_shared<CISCOCEFMIB::CefInconsistencyRecordTable>())
    , cefstatsprefixlentable(std::make_shared<CISCOCEFMIB::CefStatsPrefixLenTable>())
    , cefswitchingstatstable(std::make_shared<CISCOCEFMIB::CefSwitchingStatsTable>())
{
    ceffib->parent = this;
    cefcc->parent = this;
    cefnotifcntl->parent = this;
    ceffibsummarytable->parent = this;
    cefprefixtable->parent = this;
    ceflmprefixtable->parent = this;
    cefpathtable->parent = this;
    cefadjsummarytable->parent = this;
    cefadjtable->parent = this;
    ceffeselectiontable->parent = this;
    cefcfgtable->parent = this;
    cefresourcetable->parent = this;
    cefinttable->parent = this;
    cefpeertable->parent = this;
    cefpeerfibtable->parent = this;
    cefccglobaltable->parent = this;
    cefcctypetable->parent = this;
    cefinconsistencyrecordtable->parent = this;
    cefstatsprefixlentable->parent = this;
    cefswitchingstatstable->parent = this;

    yang_name = "CISCO-CEF-MIB"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOCEFMIB::~CISCOCEFMIB()
{
}

bool CISCOCEFMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ceffib !=  nullptr && ceffib->has_data())
	|| (cefcc !=  nullptr && cefcc->has_data())
	|| (cefnotifcntl !=  nullptr && cefnotifcntl->has_data())
	|| (ceffibsummarytable !=  nullptr && ceffibsummarytable->has_data())
	|| (cefprefixtable !=  nullptr && cefprefixtable->has_data())
	|| (ceflmprefixtable !=  nullptr && ceflmprefixtable->has_data())
	|| (cefpathtable !=  nullptr && cefpathtable->has_data())
	|| (cefadjsummarytable !=  nullptr && cefadjsummarytable->has_data())
	|| (cefadjtable !=  nullptr && cefadjtable->has_data())
	|| (ceffeselectiontable !=  nullptr && ceffeselectiontable->has_data())
	|| (cefcfgtable !=  nullptr && cefcfgtable->has_data())
	|| (cefresourcetable !=  nullptr && cefresourcetable->has_data())
	|| (cefinttable !=  nullptr && cefinttable->has_data())
	|| (cefpeertable !=  nullptr && cefpeertable->has_data())
	|| (cefpeerfibtable !=  nullptr && cefpeerfibtable->has_data())
	|| (cefccglobaltable !=  nullptr && cefccglobaltable->has_data())
	|| (cefcctypetable !=  nullptr && cefcctypetable->has_data())
	|| (cefinconsistencyrecordtable !=  nullptr && cefinconsistencyrecordtable->has_data())
	|| (cefstatsprefixlentable !=  nullptr && cefstatsprefixlentable->has_data())
	|| (cefswitchingstatstable !=  nullptr && cefswitchingstatstable->has_data());
}

bool CISCOCEFMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ceffib !=  nullptr && ceffib->has_operation())
	|| (cefcc !=  nullptr && cefcc->has_operation())
	|| (cefnotifcntl !=  nullptr && cefnotifcntl->has_operation())
	|| (ceffibsummarytable !=  nullptr && ceffibsummarytable->has_operation())
	|| (cefprefixtable !=  nullptr && cefprefixtable->has_operation())
	|| (ceflmprefixtable !=  nullptr && ceflmprefixtable->has_operation())
	|| (cefpathtable !=  nullptr && cefpathtable->has_operation())
	|| (cefadjsummarytable !=  nullptr && cefadjsummarytable->has_operation())
	|| (cefadjtable !=  nullptr && cefadjtable->has_operation())
	|| (ceffeselectiontable !=  nullptr && ceffeselectiontable->has_operation())
	|| (cefcfgtable !=  nullptr && cefcfgtable->has_operation())
	|| (cefresourcetable !=  nullptr && cefresourcetable->has_operation())
	|| (cefinttable !=  nullptr && cefinttable->has_operation())
	|| (cefpeertable !=  nullptr && cefpeertable->has_operation())
	|| (cefpeerfibtable !=  nullptr && cefpeerfibtable->has_operation())
	|| (cefccglobaltable !=  nullptr && cefccglobaltable->has_operation())
	|| (cefcctypetable !=  nullptr && cefcctypetable->has_operation())
	|| (cefinconsistencyrecordtable !=  nullptr && cefinconsistencyrecordtable->has_operation())
	|| (cefstatsprefixlentable !=  nullptr && cefstatsprefixlentable->has_operation())
	|| (cefswitchingstatstable !=  nullptr && cefswitchingstatstable->has_operation());
}

std::string CISCOCEFMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefFIB")
    {
        if(ceffib == nullptr)
        {
            ceffib = std::make_shared<CISCOCEFMIB::CefFIB>();
        }
        return ceffib;
    }

    if(child_yang_name == "cefCC")
    {
        if(cefcc == nullptr)
        {
            cefcc = std::make_shared<CISCOCEFMIB::CefCC>();
        }
        return cefcc;
    }

    if(child_yang_name == "cefNotifCntl")
    {
        if(cefnotifcntl == nullptr)
        {
            cefnotifcntl = std::make_shared<CISCOCEFMIB::CefNotifCntl>();
        }
        return cefnotifcntl;
    }

    if(child_yang_name == "cefFIBSummaryTable")
    {
        if(ceffibsummarytable == nullptr)
        {
            ceffibsummarytable = std::make_shared<CISCOCEFMIB::CefFIBSummaryTable>();
        }
        return ceffibsummarytable;
    }

    if(child_yang_name == "cefPrefixTable")
    {
        if(cefprefixtable == nullptr)
        {
            cefprefixtable = std::make_shared<CISCOCEFMIB::CefPrefixTable>();
        }
        return cefprefixtable;
    }

    if(child_yang_name == "cefLMPrefixTable")
    {
        if(ceflmprefixtable == nullptr)
        {
            ceflmprefixtable = std::make_shared<CISCOCEFMIB::CefLMPrefixTable>();
        }
        return ceflmprefixtable;
    }

    if(child_yang_name == "cefPathTable")
    {
        if(cefpathtable == nullptr)
        {
            cefpathtable = std::make_shared<CISCOCEFMIB::CefPathTable>();
        }
        return cefpathtable;
    }

    if(child_yang_name == "cefAdjSummaryTable")
    {
        if(cefadjsummarytable == nullptr)
        {
            cefadjsummarytable = std::make_shared<CISCOCEFMIB::CefAdjSummaryTable>();
        }
        return cefadjsummarytable;
    }

    if(child_yang_name == "cefAdjTable")
    {
        if(cefadjtable == nullptr)
        {
            cefadjtable = std::make_shared<CISCOCEFMIB::CefAdjTable>();
        }
        return cefadjtable;
    }

    if(child_yang_name == "cefFESelectionTable")
    {
        if(ceffeselectiontable == nullptr)
        {
            ceffeselectiontable = std::make_shared<CISCOCEFMIB::CefFESelectionTable>();
        }
        return ceffeselectiontable;
    }

    if(child_yang_name == "cefCfgTable")
    {
        if(cefcfgtable == nullptr)
        {
            cefcfgtable = std::make_shared<CISCOCEFMIB::CefCfgTable>();
        }
        return cefcfgtable;
    }

    if(child_yang_name == "cefResourceTable")
    {
        if(cefresourcetable == nullptr)
        {
            cefresourcetable = std::make_shared<CISCOCEFMIB::CefResourceTable>();
        }
        return cefresourcetable;
    }

    if(child_yang_name == "cefIntTable")
    {
        if(cefinttable == nullptr)
        {
            cefinttable = std::make_shared<CISCOCEFMIB::CefIntTable>();
        }
        return cefinttable;
    }

    if(child_yang_name == "cefPeerTable")
    {
        if(cefpeertable == nullptr)
        {
            cefpeertable = std::make_shared<CISCOCEFMIB::CefPeerTable>();
        }
        return cefpeertable;
    }

    if(child_yang_name == "cefPeerFIBTable")
    {
        if(cefpeerfibtable == nullptr)
        {
            cefpeerfibtable = std::make_shared<CISCOCEFMIB::CefPeerFIBTable>();
        }
        return cefpeerfibtable;
    }

    if(child_yang_name == "cefCCGlobalTable")
    {
        if(cefccglobaltable == nullptr)
        {
            cefccglobaltable = std::make_shared<CISCOCEFMIB::CefCCGlobalTable>();
        }
        return cefccglobaltable;
    }

    if(child_yang_name == "cefCCTypeTable")
    {
        if(cefcctypetable == nullptr)
        {
            cefcctypetable = std::make_shared<CISCOCEFMIB::CefCCTypeTable>();
        }
        return cefcctypetable;
    }

    if(child_yang_name == "cefInconsistencyRecordTable")
    {
        if(cefinconsistencyrecordtable == nullptr)
        {
            cefinconsistencyrecordtable = std::make_shared<CISCOCEFMIB::CefInconsistencyRecordTable>();
        }
        return cefinconsistencyrecordtable;
    }

    if(child_yang_name == "cefStatsPrefixLenTable")
    {
        if(cefstatsprefixlentable == nullptr)
        {
            cefstatsprefixlentable = std::make_shared<CISCOCEFMIB::CefStatsPrefixLenTable>();
        }
        return cefstatsprefixlentable;
    }

    if(child_yang_name == "cefSwitchingStatsTable")
    {
        if(cefswitchingstatstable == nullptr)
        {
            cefswitchingstatstable = std::make_shared<CISCOCEFMIB::CefSwitchingStatsTable>();
        }
        return cefswitchingstatstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ceffib != nullptr)
    {
        children["cefFIB"] = ceffib;
    }

    if(cefcc != nullptr)
    {
        children["cefCC"] = cefcc;
    }

    if(cefnotifcntl != nullptr)
    {
        children["cefNotifCntl"] = cefnotifcntl;
    }

    if(ceffibsummarytable != nullptr)
    {
        children["cefFIBSummaryTable"] = ceffibsummarytable;
    }

    if(cefprefixtable != nullptr)
    {
        children["cefPrefixTable"] = cefprefixtable;
    }

    if(ceflmprefixtable != nullptr)
    {
        children["cefLMPrefixTable"] = ceflmprefixtable;
    }

    if(cefpathtable != nullptr)
    {
        children["cefPathTable"] = cefpathtable;
    }

    if(cefadjsummarytable != nullptr)
    {
        children["cefAdjSummaryTable"] = cefadjsummarytable;
    }

    if(cefadjtable != nullptr)
    {
        children["cefAdjTable"] = cefadjtable;
    }

    if(ceffeselectiontable != nullptr)
    {
        children["cefFESelectionTable"] = ceffeselectiontable;
    }

    if(cefcfgtable != nullptr)
    {
        children["cefCfgTable"] = cefcfgtable;
    }

    if(cefresourcetable != nullptr)
    {
        children["cefResourceTable"] = cefresourcetable;
    }

    if(cefinttable != nullptr)
    {
        children["cefIntTable"] = cefinttable;
    }

    if(cefpeertable != nullptr)
    {
        children["cefPeerTable"] = cefpeertable;
    }

    if(cefpeerfibtable != nullptr)
    {
        children["cefPeerFIBTable"] = cefpeerfibtable;
    }

    if(cefccglobaltable != nullptr)
    {
        children["cefCCGlobalTable"] = cefccglobaltable;
    }

    if(cefcctypetable != nullptr)
    {
        children["cefCCTypeTable"] = cefcctypetable;
    }

    if(cefinconsistencyrecordtable != nullptr)
    {
        children["cefInconsistencyRecordTable"] = cefinconsistencyrecordtable;
    }

    if(cefstatsprefixlentable != nullptr)
    {
        children["cefStatsPrefixLenTable"] = cefstatsprefixlentable;
    }

    if(cefswitchingstatstable != nullptr)
    {
        children["cefSwitchingStatsTable"] = cefswitchingstatstable;
    }

    return children;
}

void CISCOCEFMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOCEFMIB::clone_ptr() const
{
    return std::make_shared<CISCOCEFMIB>();
}

std::string CISCOCEFMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOCEFMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOCEFMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOCEFMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOCEFMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefFIB" || name == "cefCC" || name == "cefNotifCntl" || name == "cefFIBSummaryTable" || name == "cefPrefixTable" || name == "cefLMPrefixTable" || name == "cefPathTable" || name == "cefAdjSummaryTable" || name == "cefAdjTable" || name == "cefFESelectionTable" || name == "cefCfgTable" || name == "cefResourceTable" || name == "cefIntTable" || name == "cefPeerTable" || name == "cefPeerFIBTable" || name == "cefCCGlobalTable" || name == "cefCCTypeTable" || name == "cefInconsistencyRecordTable" || name == "cefStatsPrefixLenTable" || name == "cefSwitchingStatsTable")
        return true;
    return false;
}

CISCOCEFMIB::CefFIB::CefFIB()
    :
    ceflmprefixspinlock{YType::int32, "cefLMPrefixSpinLock"}
{

    yang_name = "cefFIB"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefFIB::~CefFIB()
{
}

bool CISCOCEFMIB::CefFIB::has_data() const
{
    if (is_presence_container) return true;
    return ceflmprefixspinlock.is_set;
}

bool CISCOCEFMIB::CefFIB::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceflmprefixspinlock.yfilter);
}

std::string CISCOCEFMIB::CefFIB::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefFIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefFIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefFIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceflmprefixspinlock.is_set || is_set(ceflmprefixspinlock.yfilter)) leaf_name_data.push_back(ceflmprefixspinlock.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefFIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefFIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefFIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cefLMPrefixSpinLock")
    {
        ceflmprefixspinlock = value;
        ceflmprefixspinlock.value_namespace = name_space;
        ceflmprefixspinlock.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefFIB::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cefLMPrefixSpinLock")
    {
        ceflmprefixspinlock.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefFIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefLMPrefixSpinLock")
        return true;
    return false;
}

CISCOCEFMIB::CefCC::CefCC()
    :
    entlastinconsistencydetecttime{YType::uint32, "entLastInconsistencyDetectTime"},
    cefinconsistencyreset{YType::enumeration, "cefInconsistencyReset"},
    cefinconsistencyresetstatus{YType::enumeration, "cefInconsistencyResetStatus"}
{

    yang_name = "cefCC"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefCC::~CefCC()
{
}

bool CISCOCEFMIB::CefCC::has_data() const
{
    if (is_presence_container) return true;
    return entlastinconsistencydetecttime.is_set
	|| cefinconsistencyreset.is_set
	|| cefinconsistencyresetstatus.is_set;
}

bool CISCOCEFMIB::CefCC::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entlastinconsistencydetecttime.yfilter)
	|| ydk::is_set(cefinconsistencyreset.yfilter)
	|| ydk::is_set(cefinconsistencyresetstatus.yfilter);
}

std::string CISCOCEFMIB::CefCC::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefCC::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefCC";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefCC::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entlastinconsistencydetecttime.is_set || is_set(entlastinconsistencydetecttime.yfilter)) leaf_name_data.push_back(entlastinconsistencydetecttime.get_name_leafdata());
    if (cefinconsistencyreset.is_set || is_set(cefinconsistencyreset.yfilter)) leaf_name_data.push_back(cefinconsistencyreset.get_name_leafdata());
    if (cefinconsistencyresetstatus.is_set || is_set(cefinconsistencyresetstatus.yfilter)) leaf_name_data.push_back(cefinconsistencyresetstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefCC::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefCC::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefCC::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entLastInconsistencyDetectTime")
    {
        entlastinconsistencydetecttime = value;
        entlastinconsistencydetecttime.value_namespace = name_space;
        entlastinconsistencydetecttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefInconsistencyReset")
    {
        cefinconsistencyreset = value;
        cefinconsistencyreset.value_namespace = name_space;
        cefinconsistencyreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefInconsistencyResetStatus")
    {
        cefinconsistencyresetstatus = value;
        cefinconsistencyresetstatus.value_namespace = name_space;
        cefinconsistencyresetstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefCC::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entLastInconsistencyDetectTime")
    {
        entlastinconsistencydetecttime.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyReset")
    {
        cefinconsistencyreset.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyResetStatus")
    {
        cefinconsistencyresetstatus.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefCC::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entLastInconsistencyDetectTime" || name == "cefInconsistencyReset" || name == "cefInconsistencyResetStatus")
        return true;
    return false;
}

CISCOCEFMIB::CefNotifCntl::CefNotifCntl()
    :
    cefresourcefailurenotifenable{YType::boolean, "cefResourceFailureNotifEnable"},
    cefpeerstatechangenotifenable{YType::boolean, "cefPeerStateChangeNotifEnable"},
    cefpeerfibstatechangenotifenable{YType::boolean, "cefPeerFIBStateChangeNotifEnable"},
    cefnotifthrottlinginterval{YType::int32, "cefNotifThrottlingInterval"},
    cefinconsistencynotifenable{YType::boolean, "cefInconsistencyNotifEnable"}
{

    yang_name = "cefNotifCntl"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefNotifCntl::~CefNotifCntl()
{
}

bool CISCOCEFMIB::CefNotifCntl::has_data() const
{
    if (is_presence_container) return true;
    return cefresourcefailurenotifenable.is_set
	|| cefpeerstatechangenotifenable.is_set
	|| cefpeerfibstatechangenotifenable.is_set
	|| cefnotifthrottlinginterval.is_set
	|| cefinconsistencynotifenable.is_set;
}

bool CISCOCEFMIB::CefNotifCntl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cefresourcefailurenotifenable.yfilter)
	|| ydk::is_set(cefpeerstatechangenotifenable.yfilter)
	|| ydk::is_set(cefpeerfibstatechangenotifenable.yfilter)
	|| ydk::is_set(cefnotifthrottlinginterval.yfilter)
	|| ydk::is_set(cefinconsistencynotifenable.yfilter);
}

std::string CISCOCEFMIB::CefNotifCntl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefNotifCntl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefNotifCntl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefNotifCntl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cefresourcefailurenotifenable.is_set || is_set(cefresourcefailurenotifenable.yfilter)) leaf_name_data.push_back(cefresourcefailurenotifenable.get_name_leafdata());
    if (cefpeerstatechangenotifenable.is_set || is_set(cefpeerstatechangenotifenable.yfilter)) leaf_name_data.push_back(cefpeerstatechangenotifenable.get_name_leafdata());
    if (cefpeerfibstatechangenotifenable.is_set || is_set(cefpeerfibstatechangenotifenable.yfilter)) leaf_name_data.push_back(cefpeerfibstatechangenotifenable.get_name_leafdata());
    if (cefnotifthrottlinginterval.is_set || is_set(cefnotifthrottlinginterval.yfilter)) leaf_name_data.push_back(cefnotifthrottlinginterval.get_name_leafdata());
    if (cefinconsistencynotifenable.is_set || is_set(cefinconsistencynotifenable.yfilter)) leaf_name_data.push_back(cefinconsistencynotifenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefNotifCntl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefNotifCntl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefNotifCntl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cefResourceFailureNotifEnable")
    {
        cefresourcefailurenotifenable = value;
        cefresourcefailurenotifenable.value_namespace = name_space;
        cefresourcefailurenotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPeerStateChangeNotifEnable")
    {
        cefpeerstatechangenotifenable = value;
        cefpeerstatechangenotifenable.value_namespace = name_space;
        cefpeerstatechangenotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPeerFIBStateChangeNotifEnable")
    {
        cefpeerfibstatechangenotifenable = value;
        cefpeerfibstatechangenotifenable.value_namespace = name_space;
        cefpeerfibstatechangenotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefNotifThrottlingInterval")
    {
        cefnotifthrottlinginterval = value;
        cefnotifthrottlinginterval.value_namespace = name_space;
        cefnotifthrottlinginterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefInconsistencyNotifEnable")
    {
        cefinconsistencynotifenable = value;
        cefinconsistencynotifenable.value_namespace = name_space;
        cefinconsistencynotifenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefNotifCntl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cefResourceFailureNotifEnable")
    {
        cefresourcefailurenotifenable.yfilter = yfilter;
    }
    if(value_path == "cefPeerStateChangeNotifEnable")
    {
        cefpeerstatechangenotifenable.yfilter = yfilter;
    }
    if(value_path == "cefPeerFIBStateChangeNotifEnable")
    {
        cefpeerfibstatechangenotifenable.yfilter = yfilter;
    }
    if(value_path == "cefNotifThrottlingInterval")
    {
        cefnotifthrottlinginterval.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyNotifEnable")
    {
        cefinconsistencynotifenable.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefNotifCntl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefResourceFailureNotifEnable" || name == "cefPeerStateChangeNotifEnable" || name == "cefPeerFIBStateChangeNotifEnable" || name == "cefNotifThrottlingInterval" || name == "cefInconsistencyNotifEnable")
        return true;
    return false;
}

CISCOCEFMIB::CefFIBSummaryTable::CefFIBSummaryTable()
    :
    ceffibsummaryentry(this, {"entphysicalindex", "ceffibipversion"})
{

    yang_name = "cefFIBSummaryTable"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefFIBSummaryTable::~CefFIBSummaryTable()
{
}

bool CISCOCEFMIB::CefFIBSummaryTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ceffibsummaryentry.len(); index++)
    {
        if(ceffibsummaryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCEFMIB::CefFIBSummaryTable::has_operation() const
{
    for (std::size_t index=0; index<ceffibsummaryentry.len(); index++)
    {
        if(ceffibsummaryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCEFMIB::CefFIBSummaryTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefFIBSummaryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefFIBSummaryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefFIBSummaryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefFIBSummaryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefFIBSummaryEntry")
    {
        auto c = std::make_shared<CISCOCEFMIB::CefFIBSummaryTable::CefFIBSummaryEntry>();
        c->parent = this;
        ceffibsummaryentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefFIBSummaryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ceffibsummaryentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCEFMIB::CefFIBSummaryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::CefFIBSummaryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCEFMIB::CefFIBSummaryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefFIBSummaryEntry")
        return true;
    return false;
}

CISCOCEFMIB::CefFIBSummaryTable::CefFIBSummaryEntry::CefFIBSummaryEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    ceffibsummaryfwdprefixes{YType::uint32, "cefFIBSummaryFwdPrefixes"}
{

    yang_name = "cefFIBSummaryEntry"; yang_parent_name = "cefFIBSummaryTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefFIBSummaryTable::CefFIBSummaryEntry::~CefFIBSummaryEntry()
{
}

bool CISCOCEFMIB::CefFIBSummaryTable::CefFIBSummaryEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| ceffibipversion.is_set
	|| ceffibsummaryfwdprefixes.is_set;
}

bool CISCOCEFMIB::CefFIBSummaryTable::CefFIBSummaryEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(ceffibsummaryfwdprefixes.yfilter);
}

std::string CISCOCEFMIB::CefFIBSummaryTable::CefFIBSummaryEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefFIBSummaryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefFIBSummaryTable::CefFIBSummaryEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefFIBSummaryEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(ceffibipversion, "cefFIBIpVersion");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefFIBSummaryTable::CefFIBSummaryEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (ceffibsummaryfwdprefixes.is_set || is_set(ceffibsummaryfwdprefixes.yfilter)) leaf_name_data.push_back(ceffibsummaryfwdprefixes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefFIBSummaryTable::CefFIBSummaryEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefFIBSummaryTable::CefFIBSummaryEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefFIBSummaryTable::CefFIBSummaryEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
        ceffibipversion.value_namespace = name_space;
        ceffibipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFIBSummaryFwdPrefixes")
    {
        ceffibsummaryfwdprefixes = value;
        ceffibsummaryfwdprefixes.value_namespace = name_space;
        ceffibsummaryfwdprefixes.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefFIBSummaryTable::CefFIBSummaryEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion.yfilter = yfilter;
    }
    if(value_path == "cefFIBSummaryFwdPrefixes")
    {
        ceffibsummaryfwdprefixes.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefFIBSummaryTable::CefFIBSummaryEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefFIBIpVersion" || name == "cefFIBSummaryFwdPrefixes")
        return true;
    return false;
}

CISCOCEFMIB::CefPrefixTable::CefPrefixTable()
    :
    cefprefixentry(this, {"entphysicalindex", "cefprefixtype", "cefprefixaddr", "cefprefixlen"})
{

    yang_name = "cefPrefixTable"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefPrefixTable::~CefPrefixTable()
{
}

bool CISCOCEFMIB::CefPrefixTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefprefixentry.len(); index++)
    {
        if(cefprefixentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCEFMIB::CefPrefixTable::has_operation() const
{
    for (std::size_t index=0; index<cefprefixentry.len(); index++)
    {
        if(cefprefixentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCEFMIB::CefPrefixTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefPrefixTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefPrefixTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefPrefixTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefPrefixTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefPrefixEntry")
    {
        auto c = std::make_shared<CISCOCEFMIB::CefPrefixTable::CefPrefixEntry>();
        c->parent = this;
        cefprefixentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefPrefixTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefprefixentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCEFMIB::CefPrefixTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::CefPrefixTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCEFMIB::CefPrefixTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefPrefixEntry")
        return true;
    return false;
}

CISCOCEFMIB::CefPrefixTable::CefPrefixEntry::CefPrefixEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefprefixtype{YType::enumeration, "cefPrefixType"},
    cefprefixaddr{YType::str, "cefPrefixAddr"},
    cefprefixlen{YType::uint32, "cefPrefixLen"},
    cefprefixforwardinginfo{YType::str, "cefPrefixForwardingInfo"},
    cefprefixpkts{YType::uint32, "cefPrefixPkts"},
    cefprefixhcpkts{YType::uint64, "cefPrefixHCPkts"},
    cefprefixbytes{YType::uint32, "cefPrefixBytes"},
    cefprefixhcbytes{YType::uint64, "cefPrefixHCBytes"},
    cefprefixinternalnrpkts{YType::uint32, "cefPrefixInternalNRPkts"},
    cefprefixinternalnrhcpkts{YType::uint64, "cefPrefixInternalNRHCPkts"},
    cefprefixinternalnrbytes{YType::uint32, "cefPrefixInternalNRBytes"},
    cefprefixinternalnrhcbytes{YType::uint64, "cefPrefixInternalNRHCBytes"},
    cefprefixexternalnrpkts{YType::uint32, "cefPrefixExternalNRPkts"},
    cefprefixexternalnrhcpkts{YType::uint64, "cefPrefixExternalNRHCPkts"},
    cefprefixexternalnrbytes{YType::uint32, "cefPrefixExternalNRBytes"},
    cefprefixexternalnrhcbytes{YType::uint64, "cefPrefixExternalNRHCBytes"}
{

    yang_name = "cefPrefixEntry"; yang_parent_name = "cefPrefixTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefPrefixTable::CefPrefixEntry::~CefPrefixEntry()
{
}

bool CISCOCEFMIB::CefPrefixTable::CefPrefixEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefprefixtype.is_set
	|| cefprefixaddr.is_set
	|| cefprefixlen.is_set
	|| cefprefixforwardinginfo.is_set
	|| cefprefixpkts.is_set
	|| cefprefixhcpkts.is_set
	|| cefprefixbytes.is_set
	|| cefprefixhcbytes.is_set
	|| cefprefixinternalnrpkts.is_set
	|| cefprefixinternalnrhcpkts.is_set
	|| cefprefixinternalnrbytes.is_set
	|| cefprefixinternalnrhcbytes.is_set
	|| cefprefixexternalnrpkts.is_set
	|| cefprefixexternalnrhcpkts.is_set
	|| cefprefixexternalnrbytes.is_set
	|| cefprefixexternalnrhcbytes.is_set;
}

bool CISCOCEFMIB::CefPrefixTable::CefPrefixEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefprefixtype.yfilter)
	|| ydk::is_set(cefprefixaddr.yfilter)
	|| ydk::is_set(cefprefixlen.yfilter)
	|| ydk::is_set(cefprefixforwardinginfo.yfilter)
	|| ydk::is_set(cefprefixpkts.yfilter)
	|| ydk::is_set(cefprefixhcpkts.yfilter)
	|| ydk::is_set(cefprefixbytes.yfilter)
	|| ydk::is_set(cefprefixhcbytes.yfilter)
	|| ydk::is_set(cefprefixinternalnrpkts.yfilter)
	|| ydk::is_set(cefprefixinternalnrhcpkts.yfilter)
	|| ydk::is_set(cefprefixinternalnrbytes.yfilter)
	|| ydk::is_set(cefprefixinternalnrhcbytes.yfilter)
	|| ydk::is_set(cefprefixexternalnrpkts.yfilter)
	|| ydk::is_set(cefprefixexternalnrhcpkts.yfilter)
	|| ydk::is_set(cefprefixexternalnrbytes.yfilter)
	|| ydk::is_set(cefprefixexternalnrhcbytes.yfilter);
}

std::string CISCOCEFMIB::CefPrefixTable::CefPrefixEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefPrefixTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefPrefixTable::CefPrefixEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefPrefixEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(cefprefixtype, "cefPrefixType");
    ADD_KEY_TOKEN(cefprefixaddr, "cefPrefixAddr");
    ADD_KEY_TOKEN(cefprefixlen, "cefPrefixLen");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefPrefixTable::CefPrefixEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefprefixtype.is_set || is_set(cefprefixtype.yfilter)) leaf_name_data.push_back(cefprefixtype.get_name_leafdata());
    if (cefprefixaddr.is_set || is_set(cefprefixaddr.yfilter)) leaf_name_data.push_back(cefprefixaddr.get_name_leafdata());
    if (cefprefixlen.is_set || is_set(cefprefixlen.yfilter)) leaf_name_data.push_back(cefprefixlen.get_name_leafdata());
    if (cefprefixforwardinginfo.is_set || is_set(cefprefixforwardinginfo.yfilter)) leaf_name_data.push_back(cefprefixforwardinginfo.get_name_leafdata());
    if (cefprefixpkts.is_set || is_set(cefprefixpkts.yfilter)) leaf_name_data.push_back(cefprefixpkts.get_name_leafdata());
    if (cefprefixhcpkts.is_set || is_set(cefprefixhcpkts.yfilter)) leaf_name_data.push_back(cefprefixhcpkts.get_name_leafdata());
    if (cefprefixbytes.is_set || is_set(cefprefixbytes.yfilter)) leaf_name_data.push_back(cefprefixbytes.get_name_leafdata());
    if (cefprefixhcbytes.is_set || is_set(cefprefixhcbytes.yfilter)) leaf_name_data.push_back(cefprefixhcbytes.get_name_leafdata());
    if (cefprefixinternalnrpkts.is_set || is_set(cefprefixinternalnrpkts.yfilter)) leaf_name_data.push_back(cefprefixinternalnrpkts.get_name_leafdata());
    if (cefprefixinternalnrhcpkts.is_set || is_set(cefprefixinternalnrhcpkts.yfilter)) leaf_name_data.push_back(cefprefixinternalnrhcpkts.get_name_leafdata());
    if (cefprefixinternalnrbytes.is_set || is_set(cefprefixinternalnrbytes.yfilter)) leaf_name_data.push_back(cefprefixinternalnrbytes.get_name_leafdata());
    if (cefprefixinternalnrhcbytes.is_set || is_set(cefprefixinternalnrhcbytes.yfilter)) leaf_name_data.push_back(cefprefixinternalnrhcbytes.get_name_leafdata());
    if (cefprefixexternalnrpkts.is_set || is_set(cefprefixexternalnrpkts.yfilter)) leaf_name_data.push_back(cefprefixexternalnrpkts.get_name_leafdata());
    if (cefprefixexternalnrhcpkts.is_set || is_set(cefprefixexternalnrhcpkts.yfilter)) leaf_name_data.push_back(cefprefixexternalnrhcpkts.get_name_leafdata());
    if (cefprefixexternalnrbytes.is_set || is_set(cefprefixexternalnrbytes.yfilter)) leaf_name_data.push_back(cefprefixexternalnrbytes.get_name_leafdata());
    if (cefprefixexternalnrhcbytes.is_set || is_set(cefprefixexternalnrhcbytes.yfilter)) leaf_name_data.push_back(cefprefixexternalnrhcbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefPrefixTable::CefPrefixEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefPrefixTable::CefPrefixEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefPrefixTable::CefPrefixEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixType")
    {
        cefprefixtype = value;
        cefprefixtype.value_namespace = name_space;
        cefprefixtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixAddr")
    {
        cefprefixaddr = value;
        cefprefixaddr.value_namespace = name_space;
        cefprefixaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixLen")
    {
        cefprefixlen = value;
        cefprefixlen.value_namespace = name_space;
        cefprefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixForwardingInfo")
    {
        cefprefixforwardinginfo = value;
        cefprefixforwardinginfo.value_namespace = name_space;
        cefprefixforwardinginfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixPkts")
    {
        cefprefixpkts = value;
        cefprefixpkts.value_namespace = name_space;
        cefprefixpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixHCPkts")
    {
        cefprefixhcpkts = value;
        cefprefixhcpkts.value_namespace = name_space;
        cefprefixhcpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixBytes")
    {
        cefprefixbytes = value;
        cefprefixbytes.value_namespace = name_space;
        cefprefixbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixHCBytes")
    {
        cefprefixhcbytes = value;
        cefprefixhcbytes.value_namespace = name_space;
        cefprefixhcbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixInternalNRPkts")
    {
        cefprefixinternalnrpkts = value;
        cefprefixinternalnrpkts.value_namespace = name_space;
        cefprefixinternalnrpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixInternalNRHCPkts")
    {
        cefprefixinternalnrhcpkts = value;
        cefprefixinternalnrhcpkts.value_namespace = name_space;
        cefprefixinternalnrhcpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixInternalNRBytes")
    {
        cefprefixinternalnrbytes = value;
        cefprefixinternalnrbytes.value_namespace = name_space;
        cefprefixinternalnrbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixInternalNRHCBytes")
    {
        cefprefixinternalnrhcbytes = value;
        cefprefixinternalnrhcbytes.value_namespace = name_space;
        cefprefixinternalnrhcbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixExternalNRPkts")
    {
        cefprefixexternalnrpkts = value;
        cefprefixexternalnrpkts.value_namespace = name_space;
        cefprefixexternalnrpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixExternalNRHCPkts")
    {
        cefprefixexternalnrhcpkts = value;
        cefprefixexternalnrhcpkts.value_namespace = name_space;
        cefprefixexternalnrhcpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixExternalNRBytes")
    {
        cefprefixexternalnrbytes = value;
        cefprefixexternalnrbytes.value_namespace = name_space;
        cefprefixexternalnrbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixExternalNRHCBytes")
    {
        cefprefixexternalnrhcbytes = value;
        cefprefixexternalnrhcbytes.value_namespace = name_space;
        cefprefixexternalnrhcbytes.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefPrefixTable::CefPrefixEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefPrefixType")
    {
        cefprefixtype.yfilter = yfilter;
    }
    if(value_path == "cefPrefixAddr")
    {
        cefprefixaddr.yfilter = yfilter;
    }
    if(value_path == "cefPrefixLen")
    {
        cefprefixlen.yfilter = yfilter;
    }
    if(value_path == "cefPrefixForwardingInfo")
    {
        cefprefixforwardinginfo.yfilter = yfilter;
    }
    if(value_path == "cefPrefixPkts")
    {
        cefprefixpkts.yfilter = yfilter;
    }
    if(value_path == "cefPrefixHCPkts")
    {
        cefprefixhcpkts.yfilter = yfilter;
    }
    if(value_path == "cefPrefixBytes")
    {
        cefprefixbytes.yfilter = yfilter;
    }
    if(value_path == "cefPrefixHCBytes")
    {
        cefprefixhcbytes.yfilter = yfilter;
    }
    if(value_path == "cefPrefixInternalNRPkts")
    {
        cefprefixinternalnrpkts.yfilter = yfilter;
    }
    if(value_path == "cefPrefixInternalNRHCPkts")
    {
        cefprefixinternalnrhcpkts.yfilter = yfilter;
    }
    if(value_path == "cefPrefixInternalNRBytes")
    {
        cefprefixinternalnrbytes.yfilter = yfilter;
    }
    if(value_path == "cefPrefixInternalNRHCBytes")
    {
        cefprefixinternalnrhcbytes.yfilter = yfilter;
    }
    if(value_path == "cefPrefixExternalNRPkts")
    {
        cefprefixexternalnrpkts.yfilter = yfilter;
    }
    if(value_path == "cefPrefixExternalNRHCPkts")
    {
        cefprefixexternalnrhcpkts.yfilter = yfilter;
    }
    if(value_path == "cefPrefixExternalNRBytes")
    {
        cefprefixexternalnrbytes.yfilter = yfilter;
    }
    if(value_path == "cefPrefixExternalNRHCBytes")
    {
        cefprefixexternalnrhcbytes.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefPrefixTable::CefPrefixEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefPrefixType" || name == "cefPrefixAddr" || name == "cefPrefixLen" || name == "cefPrefixForwardingInfo" || name == "cefPrefixPkts" || name == "cefPrefixHCPkts" || name == "cefPrefixBytes" || name == "cefPrefixHCBytes" || name == "cefPrefixInternalNRPkts" || name == "cefPrefixInternalNRHCPkts" || name == "cefPrefixInternalNRBytes" || name == "cefPrefixInternalNRHCBytes" || name == "cefPrefixExternalNRPkts" || name == "cefPrefixExternalNRHCPkts" || name == "cefPrefixExternalNRBytes" || name == "cefPrefixExternalNRHCBytes")
        return true;
    return false;
}

CISCOCEFMIB::CefLMPrefixTable::CefLMPrefixTable()
    :
    ceflmprefixentry(this, {"entphysicalindex", "ceflmprefixdestaddrtype", "ceflmprefixdestaddr"})
{

    yang_name = "cefLMPrefixTable"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefLMPrefixTable::~CefLMPrefixTable()
{
}

bool CISCOCEFMIB::CefLMPrefixTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ceflmprefixentry.len(); index++)
    {
        if(ceflmprefixentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCEFMIB::CefLMPrefixTable::has_operation() const
{
    for (std::size_t index=0; index<ceflmprefixentry.len(); index++)
    {
        if(ceflmprefixentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCEFMIB::CefLMPrefixTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefLMPrefixTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefLMPrefixTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefLMPrefixTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefLMPrefixTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefLMPrefixEntry")
    {
        auto c = std::make_shared<CISCOCEFMIB::CefLMPrefixTable::CefLMPrefixEntry>();
        c->parent = this;
        ceflmprefixentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefLMPrefixTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ceflmprefixentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCEFMIB::CefLMPrefixTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::CefLMPrefixTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCEFMIB::CefLMPrefixTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefLMPrefixEntry")
        return true;
    return false;
}

CISCOCEFMIB::CefLMPrefixTable::CefLMPrefixEntry::CefLMPrefixEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceflmprefixdestaddrtype{YType::enumeration, "cefLMPrefixDestAddrType"},
    ceflmprefixdestaddr{YType::str, "cefLMPrefixDestAddr"},
    ceflmprefixstate{YType::enumeration, "cefLMPrefixState"},
    ceflmprefixaddr{YType::str, "cefLMPrefixAddr"},
    ceflmprefixlen{YType::uint32, "cefLMPrefixLen"},
    ceflmprefixrowstatus{YType::enumeration, "cefLMPrefixRowStatus"}
{

    yang_name = "cefLMPrefixEntry"; yang_parent_name = "cefLMPrefixTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefLMPrefixTable::CefLMPrefixEntry::~CefLMPrefixEntry()
{
}

bool CISCOCEFMIB::CefLMPrefixTable::CefLMPrefixEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| ceflmprefixdestaddrtype.is_set
	|| ceflmprefixdestaddr.is_set
	|| ceflmprefixstate.is_set
	|| ceflmprefixaddr.is_set
	|| ceflmprefixlen.is_set
	|| ceflmprefixrowstatus.is_set;
}

bool CISCOCEFMIB::CefLMPrefixTable::CefLMPrefixEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceflmprefixdestaddrtype.yfilter)
	|| ydk::is_set(ceflmprefixdestaddr.yfilter)
	|| ydk::is_set(ceflmprefixstate.yfilter)
	|| ydk::is_set(ceflmprefixaddr.yfilter)
	|| ydk::is_set(ceflmprefixlen.yfilter)
	|| ydk::is_set(ceflmprefixrowstatus.yfilter);
}

std::string CISCOCEFMIB::CefLMPrefixTable::CefLMPrefixEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefLMPrefixTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefLMPrefixTable::CefLMPrefixEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefLMPrefixEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(ceflmprefixdestaddrtype, "cefLMPrefixDestAddrType");
    ADD_KEY_TOKEN(ceflmprefixdestaddr, "cefLMPrefixDestAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefLMPrefixTable::CefLMPrefixEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceflmprefixdestaddrtype.is_set || is_set(ceflmprefixdestaddrtype.yfilter)) leaf_name_data.push_back(ceflmprefixdestaddrtype.get_name_leafdata());
    if (ceflmprefixdestaddr.is_set || is_set(ceflmprefixdestaddr.yfilter)) leaf_name_data.push_back(ceflmprefixdestaddr.get_name_leafdata());
    if (ceflmprefixstate.is_set || is_set(ceflmprefixstate.yfilter)) leaf_name_data.push_back(ceflmprefixstate.get_name_leafdata());
    if (ceflmprefixaddr.is_set || is_set(ceflmprefixaddr.yfilter)) leaf_name_data.push_back(ceflmprefixaddr.get_name_leafdata());
    if (ceflmprefixlen.is_set || is_set(ceflmprefixlen.yfilter)) leaf_name_data.push_back(ceflmprefixlen.get_name_leafdata());
    if (ceflmprefixrowstatus.is_set || is_set(ceflmprefixrowstatus.yfilter)) leaf_name_data.push_back(ceflmprefixrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefLMPrefixTable::CefLMPrefixEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefLMPrefixTable::CefLMPrefixEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefLMPrefixTable::CefLMPrefixEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefLMPrefixDestAddrType")
    {
        ceflmprefixdestaddrtype = value;
        ceflmprefixdestaddrtype.value_namespace = name_space;
        ceflmprefixdestaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefLMPrefixDestAddr")
    {
        ceflmprefixdestaddr = value;
        ceflmprefixdestaddr.value_namespace = name_space;
        ceflmprefixdestaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefLMPrefixState")
    {
        ceflmprefixstate = value;
        ceflmprefixstate.value_namespace = name_space;
        ceflmprefixstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefLMPrefixAddr")
    {
        ceflmprefixaddr = value;
        ceflmprefixaddr.value_namespace = name_space;
        ceflmprefixaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefLMPrefixLen")
    {
        ceflmprefixlen = value;
        ceflmprefixlen.value_namespace = name_space;
        ceflmprefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefLMPrefixRowStatus")
    {
        ceflmprefixrowstatus = value;
        ceflmprefixrowstatus.value_namespace = name_space;
        ceflmprefixrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefLMPrefixTable::CefLMPrefixEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefLMPrefixDestAddrType")
    {
        ceflmprefixdestaddrtype.yfilter = yfilter;
    }
    if(value_path == "cefLMPrefixDestAddr")
    {
        ceflmprefixdestaddr.yfilter = yfilter;
    }
    if(value_path == "cefLMPrefixState")
    {
        ceflmprefixstate.yfilter = yfilter;
    }
    if(value_path == "cefLMPrefixAddr")
    {
        ceflmprefixaddr.yfilter = yfilter;
    }
    if(value_path == "cefLMPrefixLen")
    {
        ceflmprefixlen.yfilter = yfilter;
    }
    if(value_path == "cefLMPrefixRowStatus")
    {
        ceflmprefixrowstatus.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefLMPrefixTable::CefLMPrefixEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefLMPrefixDestAddrType" || name == "cefLMPrefixDestAddr" || name == "cefLMPrefixState" || name == "cefLMPrefixAddr" || name == "cefLMPrefixLen" || name == "cefLMPrefixRowStatus")
        return true;
    return false;
}

CISCOCEFMIB::CefPathTable::CefPathTable()
    :
    cefpathentry(this, {"entphysicalindex", "cefprefixtype", "cefprefixaddr", "cefprefixlen", "cefpathid"})
{

    yang_name = "cefPathTable"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefPathTable::~CefPathTable()
{
}

bool CISCOCEFMIB::CefPathTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefpathentry.len(); index++)
    {
        if(cefpathentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCEFMIB::CefPathTable::has_operation() const
{
    for (std::size_t index=0; index<cefpathentry.len(); index++)
    {
        if(cefpathentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCEFMIB::CefPathTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefPathTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefPathTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefPathTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefPathTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefPathEntry")
    {
        auto c = std::make_shared<CISCOCEFMIB::CefPathTable::CefPathEntry>();
        c->parent = this;
        cefpathentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefPathTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefpathentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCEFMIB::CefPathTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::CefPathTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCEFMIB::CefPathTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefPathEntry")
        return true;
    return false;
}

CISCOCEFMIB::CefPathTable::CefPathEntry::CefPathEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefprefixtype{YType::enumeration, "cefPrefixType"},
    cefprefixaddr{YType::str, "cefPrefixAddr"},
    cefprefixlen{YType::str, "cefPrefixLen"},
    cefpathid{YType::int32, "cefPathId"},
    cefpathtype{YType::enumeration, "cefPathType"},
    cefpathinterface{YType::int32, "cefPathInterface"},
    cefpathnexthopaddr{YType::str, "cefPathNextHopAddr"},
    cefpathrecursevrfname{YType::str, "cefPathRecurseVrfName"}
{

    yang_name = "cefPathEntry"; yang_parent_name = "cefPathTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefPathTable::CefPathEntry::~CefPathEntry()
{
}

bool CISCOCEFMIB::CefPathTable::CefPathEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefprefixtype.is_set
	|| cefprefixaddr.is_set
	|| cefprefixlen.is_set
	|| cefpathid.is_set
	|| cefpathtype.is_set
	|| cefpathinterface.is_set
	|| cefpathnexthopaddr.is_set
	|| cefpathrecursevrfname.is_set;
}

bool CISCOCEFMIB::CefPathTable::CefPathEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefprefixtype.yfilter)
	|| ydk::is_set(cefprefixaddr.yfilter)
	|| ydk::is_set(cefprefixlen.yfilter)
	|| ydk::is_set(cefpathid.yfilter)
	|| ydk::is_set(cefpathtype.yfilter)
	|| ydk::is_set(cefpathinterface.yfilter)
	|| ydk::is_set(cefpathnexthopaddr.yfilter)
	|| ydk::is_set(cefpathrecursevrfname.yfilter);
}

std::string CISCOCEFMIB::CefPathTable::CefPathEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefPathTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefPathTable::CefPathEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefPathEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(cefprefixtype, "cefPrefixType");
    ADD_KEY_TOKEN(cefprefixaddr, "cefPrefixAddr");
    ADD_KEY_TOKEN(cefprefixlen, "cefPrefixLen");
    ADD_KEY_TOKEN(cefpathid, "cefPathId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefPathTable::CefPathEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefprefixtype.is_set || is_set(cefprefixtype.yfilter)) leaf_name_data.push_back(cefprefixtype.get_name_leafdata());
    if (cefprefixaddr.is_set || is_set(cefprefixaddr.yfilter)) leaf_name_data.push_back(cefprefixaddr.get_name_leafdata());
    if (cefprefixlen.is_set || is_set(cefprefixlen.yfilter)) leaf_name_data.push_back(cefprefixlen.get_name_leafdata());
    if (cefpathid.is_set || is_set(cefpathid.yfilter)) leaf_name_data.push_back(cefpathid.get_name_leafdata());
    if (cefpathtype.is_set || is_set(cefpathtype.yfilter)) leaf_name_data.push_back(cefpathtype.get_name_leafdata());
    if (cefpathinterface.is_set || is_set(cefpathinterface.yfilter)) leaf_name_data.push_back(cefpathinterface.get_name_leafdata());
    if (cefpathnexthopaddr.is_set || is_set(cefpathnexthopaddr.yfilter)) leaf_name_data.push_back(cefpathnexthopaddr.get_name_leafdata());
    if (cefpathrecursevrfname.is_set || is_set(cefpathrecursevrfname.yfilter)) leaf_name_data.push_back(cefpathrecursevrfname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefPathTable::CefPathEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefPathTable::CefPathEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefPathTable::CefPathEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixType")
    {
        cefprefixtype = value;
        cefprefixtype.value_namespace = name_space;
        cefprefixtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixAddr")
    {
        cefprefixaddr = value;
        cefprefixaddr.value_namespace = name_space;
        cefprefixaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixLen")
    {
        cefprefixlen = value;
        cefprefixlen.value_namespace = name_space;
        cefprefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPathId")
    {
        cefpathid = value;
        cefpathid.value_namespace = name_space;
        cefpathid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPathType")
    {
        cefpathtype = value;
        cefpathtype.value_namespace = name_space;
        cefpathtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPathInterface")
    {
        cefpathinterface = value;
        cefpathinterface.value_namespace = name_space;
        cefpathinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPathNextHopAddr")
    {
        cefpathnexthopaddr = value;
        cefpathnexthopaddr.value_namespace = name_space;
        cefpathnexthopaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPathRecurseVrfName")
    {
        cefpathrecursevrfname = value;
        cefpathrecursevrfname.value_namespace = name_space;
        cefpathrecursevrfname.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefPathTable::CefPathEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefPrefixType")
    {
        cefprefixtype.yfilter = yfilter;
    }
    if(value_path == "cefPrefixAddr")
    {
        cefprefixaddr.yfilter = yfilter;
    }
    if(value_path == "cefPrefixLen")
    {
        cefprefixlen.yfilter = yfilter;
    }
    if(value_path == "cefPathId")
    {
        cefpathid.yfilter = yfilter;
    }
    if(value_path == "cefPathType")
    {
        cefpathtype.yfilter = yfilter;
    }
    if(value_path == "cefPathInterface")
    {
        cefpathinterface.yfilter = yfilter;
    }
    if(value_path == "cefPathNextHopAddr")
    {
        cefpathnexthopaddr.yfilter = yfilter;
    }
    if(value_path == "cefPathRecurseVrfName")
    {
        cefpathrecursevrfname.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefPathTable::CefPathEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefPrefixType" || name == "cefPrefixAddr" || name == "cefPrefixLen" || name == "cefPathId" || name == "cefPathType" || name == "cefPathInterface" || name == "cefPathNextHopAddr" || name == "cefPathRecurseVrfName")
        return true;
    return false;
}

CISCOCEFMIB::CefAdjSummaryTable::CefAdjSummaryTable()
    :
    cefadjsummaryentry(this, {"entphysicalindex", "cefadjsummarylinktype"})
{

    yang_name = "cefAdjSummaryTable"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefAdjSummaryTable::~CefAdjSummaryTable()
{
}

bool CISCOCEFMIB::CefAdjSummaryTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefadjsummaryentry.len(); index++)
    {
        if(cefadjsummaryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCEFMIB::CefAdjSummaryTable::has_operation() const
{
    for (std::size_t index=0; index<cefadjsummaryentry.len(); index++)
    {
        if(cefadjsummaryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCEFMIB::CefAdjSummaryTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefAdjSummaryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefAdjSummaryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefAdjSummaryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefAdjSummaryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefAdjSummaryEntry")
    {
        auto c = std::make_shared<CISCOCEFMIB::CefAdjSummaryTable::CefAdjSummaryEntry>();
        c->parent = this;
        cefadjsummaryentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefAdjSummaryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefadjsummaryentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCEFMIB::CefAdjSummaryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::CefAdjSummaryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCEFMIB::CefAdjSummaryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefAdjSummaryEntry")
        return true;
    return false;
}

CISCOCEFMIB::CefAdjSummaryTable::CefAdjSummaryEntry::CefAdjSummaryEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefadjsummarylinktype{YType::enumeration, "cefAdjSummaryLinkType"},
    cefadjsummarycomplete{YType::uint32, "cefAdjSummaryComplete"},
    cefadjsummaryincomplete{YType::uint32, "cefAdjSummaryIncomplete"},
    cefadjsummaryfixup{YType::uint32, "cefAdjSummaryFixup"},
    cefadjsummaryredirect{YType::uint32, "cefAdjSummaryRedirect"}
{

    yang_name = "cefAdjSummaryEntry"; yang_parent_name = "cefAdjSummaryTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefAdjSummaryTable::CefAdjSummaryEntry::~CefAdjSummaryEntry()
{
}

bool CISCOCEFMIB::CefAdjSummaryTable::CefAdjSummaryEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefadjsummarylinktype.is_set
	|| cefadjsummarycomplete.is_set
	|| cefadjsummaryincomplete.is_set
	|| cefadjsummaryfixup.is_set
	|| cefadjsummaryredirect.is_set;
}

bool CISCOCEFMIB::CefAdjSummaryTable::CefAdjSummaryEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefadjsummarylinktype.yfilter)
	|| ydk::is_set(cefadjsummarycomplete.yfilter)
	|| ydk::is_set(cefadjsummaryincomplete.yfilter)
	|| ydk::is_set(cefadjsummaryfixup.yfilter)
	|| ydk::is_set(cefadjsummaryredirect.yfilter);
}

std::string CISCOCEFMIB::CefAdjSummaryTable::CefAdjSummaryEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefAdjSummaryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefAdjSummaryTable::CefAdjSummaryEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefAdjSummaryEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(cefadjsummarylinktype, "cefAdjSummaryLinkType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefAdjSummaryTable::CefAdjSummaryEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefadjsummarylinktype.is_set || is_set(cefadjsummarylinktype.yfilter)) leaf_name_data.push_back(cefadjsummarylinktype.get_name_leafdata());
    if (cefadjsummarycomplete.is_set || is_set(cefadjsummarycomplete.yfilter)) leaf_name_data.push_back(cefadjsummarycomplete.get_name_leafdata());
    if (cefadjsummaryincomplete.is_set || is_set(cefadjsummaryincomplete.yfilter)) leaf_name_data.push_back(cefadjsummaryincomplete.get_name_leafdata());
    if (cefadjsummaryfixup.is_set || is_set(cefadjsummaryfixup.yfilter)) leaf_name_data.push_back(cefadjsummaryfixup.get_name_leafdata());
    if (cefadjsummaryredirect.is_set || is_set(cefadjsummaryredirect.yfilter)) leaf_name_data.push_back(cefadjsummaryredirect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefAdjSummaryTable::CefAdjSummaryEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefAdjSummaryTable::CefAdjSummaryEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefAdjSummaryTable::CefAdjSummaryEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjSummaryLinkType")
    {
        cefadjsummarylinktype = value;
        cefadjsummarylinktype.value_namespace = name_space;
        cefadjsummarylinktype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjSummaryComplete")
    {
        cefadjsummarycomplete = value;
        cefadjsummarycomplete.value_namespace = name_space;
        cefadjsummarycomplete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjSummaryIncomplete")
    {
        cefadjsummaryincomplete = value;
        cefadjsummaryincomplete.value_namespace = name_space;
        cefadjsummaryincomplete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjSummaryFixup")
    {
        cefadjsummaryfixup = value;
        cefadjsummaryfixup.value_namespace = name_space;
        cefadjsummaryfixup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjSummaryRedirect")
    {
        cefadjsummaryredirect = value;
        cefadjsummaryredirect.value_namespace = name_space;
        cefadjsummaryredirect.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefAdjSummaryTable::CefAdjSummaryEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefAdjSummaryLinkType")
    {
        cefadjsummarylinktype.yfilter = yfilter;
    }
    if(value_path == "cefAdjSummaryComplete")
    {
        cefadjsummarycomplete.yfilter = yfilter;
    }
    if(value_path == "cefAdjSummaryIncomplete")
    {
        cefadjsummaryincomplete.yfilter = yfilter;
    }
    if(value_path == "cefAdjSummaryFixup")
    {
        cefadjsummaryfixup.yfilter = yfilter;
    }
    if(value_path == "cefAdjSummaryRedirect")
    {
        cefadjsummaryredirect.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefAdjSummaryTable::CefAdjSummaryEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefAdjSummaryLinkType" || name == "cefAdjSummaryComplete" || name == "cefAdjSummaryIncomplete" || name == "cefAdjSummaryFixup" || name == "cefAdjSummaryRedirect")
        return true;
    return false;
}

CISCOCEFMIB::CefAdjTable::CefAdjTable()
    :
    cefadjentry(this, {"entphysicalindex", "ifindex", "cefadjnexthopaddrtype", "cefadjnexthopaddr", "cefadjconnid", "cefadjsummarylinktype"})
{

    yang_name = "cefAdjTable"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefAdjTable::~CefAdjTable()
{
}

bool CISCOCEFMIB::CefAdjTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefadjentry.len(); index++)
    {
        if(cefadjentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCEFMIB::CefAdjTable::has_operation() const
{
    for (std::size_t index=0; index<cefadjentry.len(); index++)
    {
        if(cefadjentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCEFMIB::CefAdjTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefAdjTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefAdjTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefAdjTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefAdjTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefAdjEntry")
    {
        auto c = std::make_shared<CISCOCEFMIB::CefAdjTable::CefAdjEntry>();
        c->parent = this;
        cefadjentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefAdjTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefadjentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCEFMIB::CefAdjTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::CefAdjTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCEFMIB::CefAdjTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefAdjEntry")
        return true;
    return false;
}

CISCOCEFMIB::CefAdjTable::CefAdjEntry::CefAdjEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ifindex{YType::str, "ifIndex"},
    cefadjnexthopaddrtype{YType::enumeration, "cefAdjNextHopAddrType"},
    cefadjnexthopaddr{YType::str, "cefAdjNextHopAddr"},
    cefadjconnid{YType::uint32, "cefAdjConnId"},
    cefadjsummarylinktype{YType::enumeration, "cefAdjSummaryLinkType"},
    cefadjsource{YType::bits, "cefAdjSource"},
    cefadjencap{YType::str, "cefAdjEncap"},
    cefadjfixup{YType::str, "cefAdjFixup"},
    cefadjmtu{YType::uint32, "cefAdjMTU"},
    cefadjforwardinginfo{YType::str, "cefAdjForwardingInfo"},
    cefadjpkts{YType::uint32, "cefAdjPkts"},
    cefadjhcpkts{YType::uint64, "cefAdjHCPkts"},
    cefadjbytes{YType::uint32, "cefAdjBytes"},
    cefadjhcbytes{YType::uint64, "cefAdjHCBytes"}
{

    yang_name = "cefAdjEntry"; yang_parent_name = "cefAdjTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefAdjTable::CefAdjEntry::~CefAdjEntry()
{
}

bool CISCOCEFMIB::CefAdjTable::CefAdjEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| ifindex.is_set
	|| cefadjnexthopaddrtype.is_set
	|| cefadjnexthopaddr.is_set
	|| cefadjconnid.is_set
	|| cefadjsummarylinktype.is_set
	|| cefadjsource.is_set
	|| cefadjencap.is_set
	|| cefadjfixup.is_set
	|| cefadjmtu.is_set
	|| cefadjforwardinginfo.is_set
	|| cefadjpkts.is_set
	|| cefadjhcpkts.is_set
	|| cefadjbytes.is_set
	|| cefadjhcbytes.is_set;
}

bool CISCOCEFMIB::CefAdjTable::CefAdjEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cefadjnexthopaddrtype.yfilter)
	|| ydk::is_set(cefadjnexthopaddr.yfilter)
	|| ydk::is_set(cefadjconnid.yfilter)
	|| ydk::is_set(cefadjsummarylinktype.yfilter)
	|| ydk::is_set(cefadjsource.yfilter)
	|| ydk::is_set(cefadjencap.yfilter)
	|| ydk::is_set(cefadjfixup.yfilter)
	|| ydk::is_set(cefadjmtu.yfilter)
	|| ydk::is_set(cefadjforwardinginfo.yfilter)
	|| ydk::is_set(cefadjpkts.yfilter)
	|| ydk::is_set(cefadjhcpkts.yfilter)
	|| ydk::is_set(cefadjbytes.yfilter)
	|| ydk::is_set(cefadjhcbytes.yfilter);
}

std::string CISCOCEFMIB::CefAdjTable::CefAdjEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefAdjTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefAdjTable::CefAdjEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefAdjEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(cefadjnexthopaddrtype, "cefAdjNextHopAddrType");
    ADD_KEY_TOKEN(cefadjnexthopaddr, "cefAdjNextHopAddr");
    ADD_KEY_TOKEN(cefadjconnid, "cefAdjConnId");
    ADD_KEY_TOKEN(cefadjsummarylinktype, "cefAdjSummaryLinkType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefAdjTable::CefAdjEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cefadjnexthopaddrtype.is_set || is_set(cefadjnexthopaddrtype.yfilter)) leaf_name_data.push_back(cefadjnexthopaddrtype.get_name_leafdata());
    if (cefadjnexthopaddr.is_set || is_set(cefadjnexthopaddr.yfilter)) leaf_name_data.push_back(cefadjnexthopaddr.get_name_leafdata());
    if (cefadjconnid.is_set || is_set(cefadjconnid.yfilter)) leaf_name_data.push_back(cefadjconnid.get_name_leafdata());
    if (cefadjsummarylinktype.is_set || is_set(cefadjsummarylinktype.yfilter)) leaf_name_data.push_back(cefadjsummarylinktype.get_name_leafdata());
    if (cefadjsource.is_set || is_set(cefadjsource.yfilter)) leaf_name_data.push_back(cefadjsource.get_name_leafdata());
    if (cefadjencap.is_set || is_set(cefadjencap.yfilter)) leaf_name_data.push_back(cefadjencap.get_name_leafdata());
    if (cefadjfixup.is_set || is_set(cefadjfixup.yfilter)) leaf_name_data.push_back(cefadjfixup.get_name_leafdata());
    if (cefadjmtu.is_set || is_set(cefadjmtu.yfilter)) leaf_name_data.push_back(cefadjmtu.get_name_leafdata());
    if (cefadjforwardinginfo.is_set || is_set(cefadjforwardinginfo.yfilter)) leaf_name_data.push_back(cefadjforwardinginfo.get_name_leafdata());
    if (cefadjpkts.is_set || is_set(cefadjpkts.yfilter)) leaf_name_data.push_back(cefadjpkts.get_name_leafdata());
    if (cefadjhcpkts.is_set || is_set(cefadjhcpkts.yfilter)) leaf_name_data.push_back(cefadjhcpkts.get_name_leafdata());
    if (cefadjbytes.is_set || is_set(cefadjbytes.yfilter)) leaf_name_data.push_back(cefadjbytes.get_name_leafdata());
    if (cefadjhcbytes.is_set || is_set(cefadjhcbytes.yfilter)) leaf_name_data.push_back(cefadjhcbytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefAdjTable::CefAdjEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefAdjTable::CefAdjEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefAdjTable::CefAdjEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjNextHopAddrType")
    {
        cefadjnexthopaddrtype = value;
        cefadjnexthopaddrtype.value_namespace = name_space;
        cefadjnexthopaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjNextHopAddr")
    {
        cefadjnexthopaddr = value;
        cefadjnexthopaddr.value_namespace = name_space;
        cefadjnexthopaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjConnId")
    {
        cefadjconnid = value;
        cefadjconnid.value_namespace = name_space;
        cefadjconnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjSummaryLinkType")
    {
        cefadjsummarylinktype = value;
        cefadjsummarylinktype.value_namespace = name_space;
        cefadjsummarylinktype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjSource")
    {
        cefadjsource[value] = true;
    }
    if(value_path == "cefAdjEncap")
    {
        cefadjencap = value;
        cefadjencap.value_namespace = name_space;
        cefadjencap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjFixup")
    {
        cefadjfixup = value;
        cefadjfixup.value_namespace = name_space;
        cefadjfixup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjMTU")
    {
        cefadjmtu = value;
        cefadjmtu.value_namespace = name_space;
        cefadjmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjForwardingInfo")
    {
        cefadjforwardinginfo = value;
        cefadjforwardinginfo.value_namespace = name_space;
        cefadjforwardinginfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjPkts")
    {
        cefadjpkts = value;
        cefadjpkts.value_namespace = name_space;
        cefadjpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjHCPkts")
    {
        cefadjhcpkts = value;
        cefadjhcpkts.value_namespace = name_space;
        cefadjhcpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjBytes")
    {
        cefadjbytes = value;
        cefadjbytes.value_namespace = name_space;
        cefadjbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjHCBytes")
    {
        cefadjhcbytes = value;
        cefadjhcbytes.value_namespace = name_space;
        cefadjhcbytes.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefAdjTable::CefAdjEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cefAdjNextHopAddrType")
    {
        cefadjnexthopaddrtype.yfilter = yfilter;
    }
    if(value_path == "cefAdjNextHopAddr")
    {
        cefadjnexthopaddr.yfilter = yfilter;
    }
    if(value_path == "cefAdjConnId")
    {
        cefadjconnid.yfilter = yfilter;
    }
    if(value_path == "cefAdjSummaryLinkType")
    {
        cefadjsummarylinktype.yfilter = yfilter;
    }
    if(value_path == "cefAdjSource")
    {
        cefadjsource.yfilter = yfilter;
    }
    if(value_path == "cefAdjEncap")
    {
        cefadjencap.yfilter = yfilter;
    }
    if(value_path == "cefAdjFixup")
    {
        cefadjfixup.yfilter = yfilter;
    }
    if(value_path == "cefAdjMTU")
    {
        cefadjmtu.yfilter = yfilter;
    }
    if(value_path == "cefAdjForwardingInfo")
    {
        cefadjforwardinginfo.yfilter = yfilter;
    }
    if(value_path == "cefAdjPkts")
    {
        cefadjpkts.yfilter = yfilter;
    }
    if(value_path == "cefAdjHCPkts")
    {
        cefadjhcpkts.yfilter = yfilter;
    }
    if(value_path == "cefAdjBytes")
    {
        cefadjbytes.yfilter = yfilter;
    }
    if(value_path == "cefAdjHCBytes")
    {
        cefadjhcbytes.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefAdjTable::CefAdjEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "ifIndex" || name == "cefAdjNextHopAddrType" || name == "cefAdjNextHopAddr" || name == "cefAdjConnId" || name == "cefAdjSummaryLinkType" || name == "cefAdjSource" || name == "cefAdjEncap" || name == "cefAdjFixup" || name == "cefAdjMTU" || name == "cefAdjForwardingInfo" || name == "cefAdjPkts" || name == "cefAdjHCPkts" || name == "cefAdjBytes" || name == "cefAdjHCBytes")
        return true;
    return false;
}

CISCOCEFMIB::CefFESelectionTable::CefFESelectionTable()
    :
    ceffeselectionentry(this, {"entphysicalindex", "ceffeselectionname", "ceffeselectionid"})
{

    yang_name = "cefFESelectionTable"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefFESelectionTable::~CefFESelectionTable()
{
}

bool CISCOCEFMIB::CefFESelectionTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ceffeselectionentry.len(); index++)
    {
        if(ceffeselectionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCEFMIB::CefFESelectionTable::has_operation() const
{
    for (std::size_t index=0; index<ceffeselectionentry.len(); index++)
    {
        if(ceffeselectionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCEFMIB::CefFESelectionTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefFESelectionTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefFESelectionTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefFESelectionTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefFESelectionTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefFESelectionEntry")
    {
        auto c = std::make_shared<CISCOCEFMIB::CefFESelectionTable::CefFESelectionEntry>();
        c->parent = this;
        ceffeselectionentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefFESelectionTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ceffeselectionentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCEFMIB::CefFESelectionTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::CefFESelectionTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCEFMIB::CefFESelectionTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefFESelectionEntry")
        return true;
    return false;
}

CISCOCEFMIB::CefFESelectionTable::CefFESelectionEntry::CefFESelectionEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceffeselectionname{YType::str, "cefFESelectionName"},
    ceffeselectionid{YType::int32, "cefFESelectionId"},
    ceffeselectionspecial{YType::enumeration, "cefFESelectionSpecial"},
    ceffeselectionlabels{YType::str, "cefFESelectionLabels"},
    ceffeselectionadjlinktype{YType::enumeration, "cefFESelectionAdjLinkType"},
    ceffeselectionadjinterface{YType::int32, "cefFESelectionAdjInterface"},
    ceffeselectionadjnexthopaddrtype{YType::enumeration, "cefFESelectionAdjNextHopAddrType"},
    ceffeselectionadjnexthopaddr{YType::str, "cefFESelectionAdjNextHopAddr"},
    ceffeselectionadjconnid{YType::uint32, "cefFESelectionAdjConnId"},
    ceffeselectionvrfname{YType::str, "cefFESelectionVrfName"},
    ceffeselectionweight{YType::uint32, "cefFESelectionWeight"}
{

    yang_name = "cefFESelectionEntry"; yang_parent_name = "cefFESelectionTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefFESelectionTable::CefFESelectionEntry::~CefFESelectionEntry()
{
}

bool CISCOCEFMIB::CefFESelectionTable::CefFESelectionEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| ceffeselectionname.is_set
	|| ceffeselectionid.is_set
	|| ceffeselectionspecial.is_set
	|| ceffeselectionlabels.is_set
	|| ceffeselectionadjlinktype.is_set
	|| ceffeselectionadjinterface.is_set
	|| ceffeselectionadjnexthopaddrtype.is_set
	|| ceffeselectionadjnexthopaddr.is_set
	|| ceffeselectionadjconnid.is_set
	|| ceffeselectionvrfname.is_set
	|| ceffeselectionweight.is_set;
}

bool CISCOCEFMIB::CefFESelectionTable::CefFESelectionEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceffeselectionname.yfilter)
	|| ydk::is_set(ceffeselectionid.yfilter)
	|| ydk::is_set(ceffeselectionspecial.yfilter)
	|| ydk::is_set(ceffeselectionlabels.yfilter)
	|| ydk::is_set(ceffeselectionadjlinktype.yfilter)
	|| ydk::is_set(ceffeselectionadjinterface.yfilter)
	|| ydk::is_set(ceffeselectionadjnexthopaddrtype.yfilter)
	|| ydk::is_set(ceffeselectionadjnexthopaddr.yfilter)
	|| ydk::is_set(ceffeselectionadjconnid.yfilter)
	|| ydk::is_set(ceffeselectionvrfname.yfilter)
	|| ydk::is_set(ceffeselectionweight.yfilter);
}

std::string CISCOCEFMIB::CefFESelectionTable::CefFESelectionEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefFESelectionTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefFESelectionTable::CefFESelectionEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefFESelectionEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(ceffeselectionname, "cefFESelectionName");
    ADD_KEY_TOKEN(ceffeselectionid, "cefFESelectionId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefFESelectionTable::CefFESelectionEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffeselectionname.is_set || is_set(ceffeselectionname.yfilter)) leaf_name_data.push_back(ceffeselectionname.get_name_leafdata());
    if (ceffeselectionid.is_set || is_set(ceffeselectionid.yfilter)) leaf_name_data.push_back(ceffeselectionid.get_name_leafdata());
    if (ceffeselectionspecial.is_set || is_set(ceffeselectionspecial.yfilter)) leaf_name_data.push_back(ceffeselectionspecial.get_name_leafdata());
    if (ceffeselectionlabels.is_set || is_set(ceffeselectionlabels.yfilter)) leaf_name_data.push_back(ceffeselectionlabels.get_name_leafdata());
    if (ceffeselectionadjlinktype.is_set || is_set(ceffeselectionadjlinktype.yfilter)) leaf_name_data.push_back(ceffeselectionadjlinktype.get_name_leafdata());
    if (ceffeselectionadjinterface.is_set || is_set(ceffeselectionadjinterface.yfilter)) leaf_name_data.push_back(ceffeselectionadjinterface.get_name_leafdata());
    if (ceffeselectionadjnexthopaddrtype.is_set || is_set(ceffeselectionadjnexthopaddrtype.yfilter)) leaf_name_data.push_back(ceffeselectionadjnexthopaddrtype.get_name_leafdata());
    if (ceffeselectionadjnexthopaddr.is_set || is_set(ceffeselectionadjnexthopaddr.yfilter)) leaf_name_data.push_back(ceffeselectionadjnexthopaddr.get_name_leafdata());
    if (ceffeselectionadjconnid.is_set || is_set(ceffeselectionadjconnid.yfilter)) leaf_name_data.push_back(ceffeselectionadjconnid.get_name_leafdata());
    if (ceffeselectionvrfname.is_set || is_set(ceffeselectionvrfname.yfilter)) leaf_name_data.push_back(ceffeselectionvrfname.get_name_leafdata());
    if (ceffeselectionweight.is_set || is_set(ceffeselectionweight.yfilter)) leaf_name_data.push_back(ceffeselectionweight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefFESelectionTable::CefFESelectionEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefFESelectionTable::CefFESelectionEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefFESelectionTable::CefFESelectionEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFESelectionName")
    {
        ceffeselectionname = value;
        ceffeselectionname.value_namespace = name_space;
        ceffeselectionname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFESelectionId")
    {
        ceffeselectionid = value;
        ceffeselectionid.value_namespace = name_space;
        ceffeselectionid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFESelectionSpecial")
    {
        ceffeselectionspecial = value;
        ceffeselectionspecial.value_namespace = name_space;
        ceffeselectionspecial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFESelectionLabels")
    {
        ceffeselectionlabels = value;
        ceffeselectionlabels.value_namespace = name_space;
        ceffeselectionlabels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFESelectionAdjLinkType")
    {
        ceffeselectionadjlinktype = value;
        ceffeselectionadjlinktype.value_namespace = name_space;
        ceffeselectionadjlinktype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFESelectionAdjInterface")
    {
        ceffeselectionadjinterface = value;
        ceffeselectionadjinterface.value_namespace = name_space;
        ceffeselectionadjinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFESelectionAdjNextHopAddrType")
    {
        ceffeselectionadjnexthopaddrtype = value;
        ceffeselectionadjnexthopaddrtype.value_namespace = name_space;
        ceffeselectionadjnexthopaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFESelectionAdjNextHopAddr")
    {
        ceffeselectionadjnexthopaddr = value;
        ceffeselectionadjnexthopaddr.value_namespace = name_space;
        ceffeselectionadjnexthopaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFESelectionAdjConnId")
    {
        ceffeselectionadjconnid = value;
        ceffeselectionadjconnid.value_namespace = name_space;
        ceffeselectionadjconnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFESelectionVrfName")
    {
        ceffeselectionvrfname = value;
        ceffeselectionvrfname.value_namespace = name_space;
        ceffeselectionvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFESelectionWeight")
    {
        ceffeselectionweight = value;
        ceffeselectionweight.value_namespace = name_space;
        ceffeselectionweight.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefFESelectionTable::CefFESelectionEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefFESelectionName")
    {
        ceffeselectionname.yfilter = yfilter;
    }
    if(value_path == "cefFESelectionId")
    {
        ceffeselectionid.yfilter = yfilter;
    }
    if(value_path == "cefFESelectionSpecial")
    {
        ceffeselectionspecial.yfilter = yfilter;
    }
    if(value_path == "cefFESelectionLabels")
    {
        ceffeselectionlabels.yfilter = yfilter;
    }
    if(value_path == "cefFESelectionAdjLinkType")
    {
        ceffeselectionadjlinktype.yfilter = yfilter;
    }
    if(value_path == "cefFESelectionAdjInterface")
    {
        ceffeselectionadjinterface.yfilter = yfilter;
    }
    if(value_path == "cefFESelectionAdjNextHopAddrType")
    {
        ceffeselectionadjnexthopaddrtype.yfilter = yfilter;
    }
    if(value_path == "cefFESelectionAdjNextHopAddr")
    {
        ceffeselectionadjnexthopaddr.yfilter = yfilter;
    }
    if(value_path == "cefFESelectionAdjConnId")
    {
        ceffeselectionadjconnid.yfilter = yfilter;
    }
    if(value_path == "cefFESelectionVrfName")
    {
        ceffeselectionvrfname.yfilter = yfilter;
    }
    if(value_path == "cefFESelectionWeight")
    {
        ceffeselectionweight.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefFESelectionTable::CefFESelectionEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefFESelectionName" || name == "cefFESelectionId" || name == "cefFESelectionSpecial" || name == "cefFESelectionLabels" || name == "cefFESelectionAdjLinkType" || name == "cefFESelectionAdjInterface" || name == "cefFESelectionAdjNextHopAddrType" || name == "cefFESelectionAdjNextHopAddr" || name == "cefFESelectionAdjConnId" || name == "cefFESelectionVrfName" || name == "cefFESelectionWeight")
        return true;
    return false;
}

CISCOCEFMIB::CefCfgTable::CefCfgTable()
    :
    cefcfgentry(this, {"entphysicalindex", "ceffibipversion"})
{

    yang_name = "cefCfgTable"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefCfgTable::~CefCfgTable()
{
}

bool CISCOCEFMIB::CefCfgTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcfgentry.len(); index++)
    {
        if(cefcfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCEFMIB::CefCfgTable::has_operation() const
{
    for (std::size_t index=0; index<cefcfgentry.len(); index++)
    {
        if(cefcfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCEFMIB::CefCfgTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefCfgTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefCfgTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefCfgTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefCfgTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefCfgEntry")
    {
        auto c = std::make_shared<CISCOCEFMIB::CefCfgTable::CefCfgEntry>();
        c->parent = this;
        cefcfgentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefCfgTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcfgentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCEFMIB::CefCfgTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::CefCfgTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCEFMIB::CefCfgTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefCfgEntry")
        return true;
    return false;
}

CISCOCEFMIB::CefCfgTable::CefCfgEntry::CefCfgEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    cefcfgadminstate{YType::enumeration, "cefCfgAdminState"},
    cefcfgoperstate{YType::enumeration, "cefCfgOperState"},
    cefcfgdistributionadminstate{YType::enumeration, "cefCfgDistributionAdminState"},
    cefcfgdistributionoperstate{YType::enumeration, "cefCfgDistributionOperState"},
    cefcfgaccountingmap{YType::bits, "cefCfgAccountingMap"},
    cefcfgloadsharingalgorithm{YType::enumeration, "cefCfgLoadSharingAlgorithm"},
    cefcfgloadsharingid{YType::uint32, "cefCfgLoadSharingID"},
    cefcfgtrafficstatsloadinterval{YType::uint32, "cefCfgTrafficStatsLoadInterval"},
    cefcfgtrafficstatsupdaterate{YType::uint32, "cefCfgTrafficStatsUpdateRate"}
{

    yang_name = "cefCfgEntry"; yang_parent_name = "cefCfgTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefCfgTable::CefCfgEntry::~CefCfgEntry()
{
}

bool CISCOCEFMIB::CefCfgTable::CefCfgEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| ceffibipversion.is_set
	|| cefcfgadminstate.is_set
	|| cefcfgoperstate.is_set
	|| cefcfgdistributionadminstate.is_set
	|| cefcfgdistributionoperstate.is_set
	|| cefcfgaccountingmap.is_set
	|| cefcfgloadsharingalgorithm.is_set
	|| cefcfgloadsharingid.is_set
	|| cefcfgtrafficstatsloadinterval.is_set
	|| cefcfgtrafficstatsupdaterate.is_set;
}

bool CISCOCEFMIB::CefCfgTable::CefCfgEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(cefcfgadminstate.yfilter)
	|| ydk::is_set(cefcfgoperstate.yfilter)
	|| ydk::is_set(cefcfgdistributionadminstate.yfilter)
	|| ydk::is_set(cefcfgdistributionoperstate.yfilter)
	|| ydk::is_set(cefcfgaccountingmap.yfilter)
	|| ydk::is_set(cefcfgloadsharingalgorithm.yfilter)
	|| ydk::is_set(cefcfgloadsharingid.yfilter)
	|| ydk::is_set(cefcfgtrafficstatsloadinterval.yfilter)
	|| ydk::is_set(cefcfgtrafficstatsupdaterate.yfilter);
}

std::string CISCOCEFMIB::CefCfgTable::CefCfgEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefCfgTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefCfgTable::CefCfgEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefCfgEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(ceffibipversion, "cefFIBIpVersion");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefCfgTable::CefCfgEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefcfgadminstate.is_set || is_set(cefcfgadminstate.yfilter)) leaf_name_data.push_back(cefcfgadminstate.get_name_leafdata());
    if (cefcfgoperstate.is_set || is_set(cefcfgoperstate.yfilter)) leaf_name_data.push_back(cefcfgoperstate.get_name_leafdata());
    if (cefcfgdistributionadminstate.is_set || is_set(cefcfgdistributionadminstate.yfilter)) leaf_name_data.push_back(cefcfgdistributionadminstate.get_name_leafdata());
    if (cefcfgdistributionoperstate.is_set || is_set(cefcfgdistributionoperstate.yfilter)) leaf_name_data.push_back(cefcfgdistributionoperstate.get_name_leafdata());
    if (cefcfgaccountingmap.is_set || is_set(cefcfgaccountingmap.yfilter)) leaf_name_data.push_back(cefcfgaccountingmap.get_name_leafdata());
    if (cefcfgloadsharingalgorithm.is_set || is_set(cefcfgloadsharingalgorithm.yfilter)) leaf_name_data.push_back(cefcfgloadsharingalgorithm.get_name_leafdata());
    if (cefcfgloadsharingid.is_set || is_set(cefcfgloadsharingid.yfilter)) leaf_name_data.push_back(cefcfgloadsharingid.get_name_leafdata());
    if (cefcfgtrafficstatsloadinterval.is_set || is_set(cefcfgtrafficstatsloadinterval.yfilter)) leaf_name_data.push_back(cefcfgtrafficstatsloadinterval.get_name_leafdata());
    if (cefcfgtrafficstatsupdaterate.is_set || is_set(cefcfgtrafficstatsupdaterate.yfilter)) leaf_name_data.push_back(cefcfgtrafficstatsupdaterate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefCfgTable::CefCfgEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefCfgTable::CefCfgEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefCfgTable::CefCfgEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
        ceffibipversion.value_namespace = name_space;
        ceffibipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCfgAdminState")
    {
        cefcfgadminstate = value;
        cefcfgadminstate.value_namespace = name_space;
        cefcfgadminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCfgOperState")
    {
        cefcfgoperstate = value;
        cefcfgoperstate.value_namespace = name_space;
        cefcfgoperstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCfgDistributionAdminState")
    {
        cefcfgdistributionadminstate = value;
        cefcfgdistributionadminstate.value_namespace = name_space;
        cefcfgdistributionadminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCfgDistributionOperState")
    {
        cefcfgdistributionoperstate = value;
        cefcfgdistributionoperstate.value_namespace = name_space;
        cefcfgdistributionoperstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCfgAccountingMap")
    {
        cefcfgaccountingmap[value] = true;
    }
    if(value_path == "cefCfgLoadSharingAlgorithm")
    {
        cefcfgloadsharingalgorithm = value;
        cefcfgloadsharingalgorithm.value_namespace = name_space;
        cefcfgloadsharingalgorithm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCfgLoadSharingID")
    {
        cefcfgloadsharingid = value;
        cefcfgloadsharingid.value_namespace = name_space;
        cefcfgloadsharingid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCfgTrafficStatsLoadInterval")
    {
        cefcfgtrafficstatsloadinterval = value;
        cefcfgtrafficstatsloadinterval.value_namespace = name_space;
        cefcfgtrafficstatsloadinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCfgTrafficStatsUpdateRate")
    {
        cefcfgtrafficstatsupdaterate = value;
        cefcfgtrafficstatsupdaterate.value_namespace = name_space;
        cefcfgtrafficstatsupdaterate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefCfgTable::CefCfgEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion.yfilter = yfilter;
    }
    if(value_path == "cefCfgAdminState")
    {
        cefcfgadminstate.yfilter = yfilter;
    }
    if(value_path == "cefCfgOperState")
    {
        cefcfgoperstate.yfilter = yfilter;
    }
    if(value_path == "cefCfgDistributionAdminState")
    {
        cefcfgdistributionadminstate.yfilter = yfilter;
    }
    if(value_path == "cefCfgDistributionOperState")
    {
        cefcfgdistributionoperstate.yfilter = yfilter;
    }
    if(value_path == "cefCfgAccountingMap")
    {
        cefcfgaccountingmap.yfilter = yfilter;
    }
    if(value_path == "cefCfgLoadSharingAlgorithm")
    {
        cefcfgloadsharingalgorithm.yfilter = yfilter;
    }
    if(value_path == "cefCfgLoadSharingID")
    {
        cefcfgloadsharingid.yfilter = yfilter;
    }
    if(value_path == "cefCfgTrafficStatsLoadInterval")
    {
        cefcfgtrafficstatsloadinterval.yfilter = yfilter;
    }
    if(value_path == "cefCfgTrafficStatsUpdateRate")
    {
        cefcfgtrafficstatsupdaterate.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefCfgTable::CefCfgEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefFIBIpVersion" || name == "cefCfgAdminState" || name == "cefCfgOperState" || name == "cefCfgDistributionAdminState" || name == "cefCfgDistributionOperState" || name == "cefCfgAccountingMap" || name == "cefCfgLoadSharingAlgorithm" || name == "cefCfgLoadSharingID" || name == "cefCfgTrafficStatsLoadInterval" || name == "cefCfgTrafficStatsUpdateRate")
        return true;
    return false;
}

CISCOCEFMIB::CefResourceTable::CefResourceTable()
    :
    cefresourceentry(this, {"entphysicalindex"})
{

    yang_name = "cefResourceTable"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefResourceTable::~CefResourceTable()
{
}

bool CISCOCEFMIB::CefResourceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefresourceentry.len(); index++)
    {
        if(cefresourceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCEFMIB::CefResourceTable::has_operation() const
{
    for (std::size_t index=0; index<cefresourceentry.len(); index++)
    {
        if(cefresourceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCEFMIB::CefResourceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefResourceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefResourceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefResourceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefResourceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefResourceEntry")
    {
        auto c = std::make_shared<CISCOCEFMIB::CefResourceTable::CefResourceEntry>();
        c->parent = this;
        cefresourceentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefResourceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefresourceentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCEFMIB::CefResourceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::CefResourceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCEFMIB::CefResourceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefResourceEntry")
        return true;
    return false;
}

CISCOCEFMIB::CefResourceTable::CefResourceEntry::CefResourceEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefresourcememoryused{YType::uint32, "cefResourceMemoryUsed"},
    cefresourcefailurereason{YType::enumeration, "cefResourceFailureReason"}
{

    yang_name = "cefResourceEntry"; yang_parent_name = "cefResourceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefResourceTable::CefResourceEntry::~CefResourceEntry()
{
}

bool CISCOCEFMIB::CefResourceTable::CefResourceEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| cefresourcememoryused.is_set
	|| cefresourcefailurereason.is_set;
}

bool CISCOCEFMIB::CefResourceTable::CefResourceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefresourcememoryused.yfilter)
	|| ydk::is_set(cefresourcefailurereason.yfilter);
}

std::string CISCOCEFMIB::CefResourceTable::CefResourceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefResourceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefResourceTable::CefResourceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefResourceEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefResourceTable::CefResourceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefresourcememoryused.is_set || is_set(cefresourcememoryused.yfilter)) leaf_name_data.push_back(cefresourcememoryused.get_name_leafdata());
    if (cefresourcefailurereason.is_set || is_set(cefresourcefailurereason.yfilter)) leaf_name_data.push_back(cefresourcefailurereason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefResourceTable::CefResourceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefResourceTable::CefResourceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefResourceTable::CefResourceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefResourceMemoryUsed")
    {
        cefresourcememoryused = value;
        cefresourcememoryused.value_namespace = name_space;
        cefresourcememoryused.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefResourceFailureReason")
    {
        cefresourcefailurereason = value;
        cefresourcefailurereason.value_namespace = name_space;
        cefresourcefailurereason.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefResourceTable::CefResourceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefResourceMemoryUsed")
    {
        cefresourcememoryused.yfilter = yfilter;
    }
    if(value_path == "cefResourceFailureReason")
    {
        cefresourcefailurereason.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefResourceTable::CefResourceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefResourceMemoryUsed" || name == "cefResourceFailureReason")
        return true;
    return false;
}

CISCOCEFMIB::CefIntTable::CefIntTable()
    :
    cefintentry(this, {"entphysicalindex", "ceffibipversion", "ifindex"})
{

    yang_name = "cefIntTable"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefIntTable::~CefIntTable()
{
}

bool CISCOCEFMIB::CefIntTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefintentry.len(); index++)
    {
        if(cefintentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCEFMIB::CefIntTable::has_operation() const
{
    for (std::size_t index=0; index<cefintentry.len(); index++)
    {
        if(cefintentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCEFMIB::CefIntTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefIntTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefIntTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefIntTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefIntTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefIntEntry")
    {
        auto c = std::make_shared<CISCOCEFMIB::CefIntTable::CefIntEntry>();
        c->parent = this;
        cefintentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefIntTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefintentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCEFMIB::CefIntTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::CefIntTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCEFMIB::CefIntTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefIntEntry")
        return true;
    return false;
}

CISCOCEFMIB::CefIntTable::CefIntEntry::CefIntEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    ifindex{YType::str, "ifIndex"},
    cefintswitchingstate{YType::enumeration, "cefIntSwitchingState"},
    cefintloadsharing{YType::enumeration, "cefIntLoadSharing"},
    cefintnonrecursiveaccouting{YType::enumeration, "cefIntNonrecursiveAccouting"}
{

    yang_name = "cefIntEntry"; yang_parent_name = "cefIntTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefIntTable::CefIntEntry::~CefIntEntry()
{
}

bool CISCOCEFMIB::CefIntTable::CefIntEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| ceffibipversion.is_set
	|| ifindex.is_set
	|| cefintswitchingstate.is_set
	|| cefintloadsharing.is_set
	|| cefintnonrecursiveaccouting.is_set;
}

bool CISCOCEFMIB::CefIntTable::CefIntEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cefintswitchingstate.yfilter)
	|| ydk::is_set(cefintloadsharing.yfilter)
	|| ydk::is_set(cefintnonrecursiveaccouting.yfilter);
}

std::string CISCOCEFMIB::CefIntTable::CefIntEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefIntTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefIntTable::CefIntEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefIntEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(ceffibipversion, "cefFIBIpVersion");
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefIntTable::CefIntEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cefintswitchingstate.is_set || is_set(cefintswitchingstate.yfilter)) leaf_name_data.push_back(cefintswitchingstate.get_name_leafdata());
    if (cefintloadsharing.is_set || is_set(cefintloadsharing.yfilter)) leaf_name_data.push_back(cefintloadsharing.get_name_leafdata());
    if (cefintnonrecursiveaccouting.is_set || is_set(cefintnonrecursiveaccouting.yfilter)) leaf_name_data.push_back(cefintnonrecursiveaccouting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefIntTable::CefIntEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefIntTable::CefIntEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefIntTable::CefIntEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
        ceffibipversion.value_namespace = name_space;
        ceffibipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefIntSwitchingState")
    {
        cefintswitchingstate = value;
        cefintswitchingstate.value_namespace = name_space;
        cefintswitchingstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefIntLoadSharing")
    {
        cefintloadsharing = value;
        cefintloadsharing.value_namespace = name_space;
        cefintloadsharing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefIntNonrecursiveAccouting")
    {
        cefintnonrecursiveaccouting = value;
        cefintnonrecursiveaccouting.value_namespace = name_space;
        cefintnonrecursiveaccouting.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefIntTable::CefIntEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion.yfilter = yfilter;
    }
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cefIntSwitchingState")
    {
        cefintswitchingstate.yfilter = yfilter;
    }
    if(value_path == "cefIntLoadSharing")
    {
        cefintloadsharing.yfilter = yfilter;
    }
    if(value_path == "cefIntNonrecursiveAccouting")
    {
        cefintnonrecursiveaccouting.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefIntTable::CefIntEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefFIBIpVersion" || name == "ifIndex" || name == "cefIntSwitchingState" || name == "cefIntLoadSharing" || name == "cefIntNonrecursiveAccouting")
        return true;
    return false;
}

CISCOCEFMIB::CefPeerTable::CefPeerTable()
    :
    cefpeerentry(this, {"entphysicalindex", "entpeerphysicalindex"})
{

    yang_name = "cefPeerTable"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefPeerTable::~CefPeerTable()
{
}

bool CISCOCEFMIB::CefPeerTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefpeerentry.len(); index++)
    {
        if(cefpeerentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCEFMIB::CefPeerTable::has_operation() const
{
    for (std::size_t index=0; index<cefpeerentry.len(); index++)
    {
        if(cefpeerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCEFMIB::CefPeerTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefPeerTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefPeerTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefPeerTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefPeerTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefPeerEntry")
    {
        auto c = std::make_shared<CISCOCEFMIB::CefPeerTable::CefPeerEntry>();
        c->parent = this;
        cefpeerentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefPeerTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefpeerentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCEFMIB::CefPeerTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::CefPeerTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCEFMIB::CefPeerTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefPeerEntry")
        return true;
    return false;
}

CISCOCEFMIB::CefPeerTable::CefPeerEntry::CefPeerEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    entpeerphysicalindex{YType::int32, "entPeerPhysicalIndex"},
    cefpeeroperstate{YType::enumeration, "cefPeerOperState"},
    cefpeernumberofresets{YType::uint32, "cefPeerNumberOfResets"}
{

    yang_name = "cefPeerEntry"; yang_parent_name = "cefPeerTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefPeerTable::CefPeerEntry::~CefPeerEntry()
{
}

bool CISCOCEFMIB::CefPeerTable::CefPeerEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| entpeerphysicalindex.is_set
	|| cefpeeroperstate.is_set
	|| cefpeernumberofresets.is_set;
}

bool CISCOCEFMIB::CefPeerTable::CefPeerEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(entpeerphysicalindex.yfilter)
	|| ydk::is_set(cefpeeroperstate.yfilter)
	|| ydk::is_set(cefpeernumberofresets.yfilter);
}

std::string CISCOCEFMIB::CefPeerTable::CefPeerEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefPeerTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefPeerTable::CefPeerEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefPeerEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(entpeerphysicalindex, "entPeerPhysicalIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefPeerTable::CefPeerEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entpeerphysicalindex.is_set || is_set(entpeerphysicalindex.yfilter)) leaf_name_data.push_back(entpeerphysicalindex.get_name_leafdata());
    if (cefpeeroperstate.is_set || is_set(cefpeeroperstate.yfilter)) leaf_name_data.push_back(cefpeeroperstate.get_name_leafdata());
    if (cefpeernumberofresets.is_set || is_set(cefpeernumberofresets.yfilter)) leaf_name_data.push_back(cefpeernumberofresets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefPeerTable::CefPeerEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefPeerTable::CefPeerEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefPeerTable::CefPeerEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPeerPhysicalIndex")
    {
        entpeerphysicalindex = value;
        entpeerphysicalindex.value_namespace = name_space;
        entpeerphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPeerOperState")
    {
        cefpeeroperstate = value;
        cefpeeroperstate.value_namespace = name_space;
        cefpeeroperstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPeerNumberOfResets")
    {
        cefpeernumberofresets = value;
        cefpeernumberofresets.value_namespace = name_space;
        cefpeernumberofresets.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefPeerTable::CefPeerEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "entPeerPhysicalIndex")
    {
        entpeerphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefPeerOperState")
    {
        cefpeeroperstate.yfilter = yfilter;
    }
    if(value_path == "cefPeerNumberOfResets")
    {
        cefpeernumberofresets.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefPeerTable::CefPeerEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "entPeerPhysicalIndex" || name == "cefPeerOperState" || name == "cefPeerNumberOfResets")
        return true;
    return false;
}

CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBTable()
    :
    cefpeerfibentry(this, {"entphysicalindex", "entpeerphysicalindex", "ceffibipversion"})
{

    yang_name = "cefPeerFIBTable"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefPeerFIBTable::~CefPeerFIBTable()
{
}

bool CISCOCEFMIB::CefPeerFIBTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefpeerfibentry.len(); index++)
    {
        if(cefpeerfibentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCEFMIB::CefPeerFIBTable::has_operation() const
{
    for (std::size_t index=0; index<cefpeerfibentry.len(); index++)
    {
        if(cefpeerfibentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCEFMIB::CefPeerFIBTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefPeerFIBTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefPeerFIBTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefPeerFIBTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefPeerFIBTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefPeerFIBEntry")
    {
        auto c = std::make_shared<CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry>();
        c->parent = this;
        cefpeerfibentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefPeerFIBTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefpeerfibentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCEFMIB::CefPeerFIBTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::CefPeerFIBTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCEFMIB::CefPeerFIBTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefPeerFIBEntry")
        return true;
    return false;
}

CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::CefPeerFIBEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    entpeerphysicalindex{YType::str, "entPeerPhysicalIndex"},
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    cefpeerfiboperstate{YType::enumeration, "cefPeerFIBOperState"}
{

    yang_name = "cefPeerFIBEntry"; yang_parent_name = "cefPeerFIBTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::~CefPeerFIBEntry()
{
}

bool CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| entpeerphysicalindex.is_set
	|| ceffibipversion.is_set
	|| cefpeerfiboperstate.is_set;
}

bool CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(entpeerphysicalindex.yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(cefpeerfiboperstate.yfilter);
}

std::string CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefPeerFIBTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefPeerFIBEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(entpeerphysicalindex, "entPeerPhysicalIndex");
    ADD_KEY_TOKEN(ceffibipversion, "cefFIBIpVersion");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entpeerphysicalindex.is_set || is_set(entpeerphysicalindex.yfilter)) leaf_name_data.push_back(entpeerphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefpeerfiboperstate.is_set || is_set(cefpeerfiboperstate.yfilter)) leaf_name_data.push_back(cefpeerfiboperstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entPeerPhysicalIndex")
    {
        entpeerphysicalindex = value;
        entpeerphysicalindex.value_namespace = name_space;
        entpeerphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
        ceffibipversion.value_namespace = name_space;
        ceffibipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPeerFIBOperState")
    {
        cefpeerfiboperstate = value;
        cefpeerfiboperstate.value_namespace = name_space;
        cefpeerfiboperstate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "entPeerPhysicalIndex")
    {
        entpeerphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion.yfilter = yfilter;
    }
    if(value_path == "cefPeerFIBOperState")
    {
        cefpeerfiboperstate.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "entPeerPhysicalIndex" || name == "cefFIBIpVersion" || name == "cefPeerFIBOperState")
        return true;
    return false;
}

CISCOCEFMIB::CefCCGlobalTable::CefCCGlobalTable()
    :
    cefccglobalentry(this, {"ceffibipversion"})
{

    yang_name = "cefCCGlobalTable"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefCCGlobalTable::~CefCCGlobalTable()
{
}

bool CISCOCEFMIB::CefCCGlobalTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefccglobalentry.len(); index++)
    {
        if(cefccglobalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCEFMIB::CefCCGlobalTable::has_operation() const
{
    for (std::size_t index=0; index<cefccglobalentry.len(); index++)
    {
        if(cefccglobalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCEFMIB::CefCCGlobalTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefCCGlobalTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefCCGlobalTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefCCGlobalTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefCCGlobalTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefCCGlobalEntry")
    {
        auto c = std::make_shared<CISCOCEFMIB::CefCCGlobalTable::CefCCGlobalEntry>();
        c->parent = this;
        cefccglobalentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefCCGlobalTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefccglobalentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCEFMIB::CefCCGlobalTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::CefCCGlobalTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCEFMIB::CefCCGlobalTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefCCGlobalEntry")
        return true;
    return false;
}

CISCOCEFMIB::CefCCGlobalTable::CefCCGlobalEntry::CefCCGlobalEntry()
    :
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    cefccglobalautorepairenabled{YType::boolean, "cefCCGlobalAutoRepairEnabled"},
    cefccglobalautorepairdelay{YType::uint32, "cefCCGlobalAutoRepairDelay"},
    cefccglobalautorepairholddown{YType::uint32, "cefCCGlobalAutoRepairHoldDown"},
    cefccglobalerrormsgenabled{YType::boolean, "cefCCGlobalErrorMsgEnabled"},
    cefccglobalfullscanaction{YType::enumeration, "cefCCGlobalFullScanAction"},
    cefccglobalfullscanstatus{YType::enumeration, "cefCCGlobalFullScanStatus"}
{

    yang_name = "cefCCGlobalEntry"; yang_parent_name = "cefCCGlobalTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefCCGlobalTable::CefCCGlobalEntry::~CefCCGlobalEntry()
{
}

bool CISCOCEFMIB::CefCCGlobalTable::CefCCGlobalEntry::has_data() const
{
    if (is_presence_container) return true;
    return ceffibipversion.is_set
	|| cefccglobalautorepairenabled.is_set
	|| cefccglobalautorepairdelay.is_set
	|| cefccglobalautorepairholddown.is_set
	|| cefccglobalerrormsgenabled.is_set
	|| cefccglobalfullscanaction.is_set
	|| cefccglobalfullscanstatus.is_set;
}

bool CISCOCEFMIB::CefCCGlobalTable::CefCCGlobalEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(cefccglobalautorepairenabled.yfilter)
	|| ydk::is_set(cefccglobalautorepairdelay.yfilter)
	|| ydk::is_set(cefccglobalautorepairholddown.yfilter)
	|| ydk::is_set(cefccglobalerrormsgenabled.yfilter)
	|| ydk::is_set(cefccglobalfullscanaction.yfilter)
	|| ydk::is_set(cefccglobalfullscanstatus.yfilter);
}

std::string CISCOCEFMIB::CefCCGlobalTable::CefCCGlobalEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefCCGlobalTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefCCGlobalTable::CefCCGlobalEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefCCGlobalEntry";
    ADD_KEY_TOKEN(ceffibipversion, "cefFIBIpVersion");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefCCGlobalTable::CefCCGlobalEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefccglobalautorepairenabled.is_set || is_set(cefccglobalautorepairenabled.yfilter)) leaf_name_data.push_back(cefccglobalautorepairenabled.get_name_leafdata());
    if (cefccglobalautorepairdelay.is_set || is_set(cefccglobalautorepairdelay.yfilter)) leaf_name_data.push_back(cefccglobalautorepairdelay.get_name_leafdata());
    if (cefccglobalautorepairholddown.is_set || is_set(cefccglobalautorepairholddown.yfilter)) leaf_name_data.push_back(cefccglobalautorepairholddown.get_name_leafdata());
    if (cefccglobalerrormsgenabled.is_set || is_set(cefccglobalerrormsgenabled.yfilter)) leaf_name_data.push_back(cefccglobalerrormsgenabled.get_name_leafdata());
    if (cefccglobalfullscanaction.is_set || is_set(cefccglobalfullscanaction.yfilter)) leaf_name_data.push_back(cefccglobalfullscanaction.get_name_leafdata());
    if (cefccglobalfullscanstatus.is_set || is_set(cefccglobalfullscanstatus.yfilter)) leaf_name_data.push_back(cefccglobalfullscanstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefCCGlobalTable::CefCCGlobalEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefCCGlobalTable::CefCCGlobalEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefCCGlobalTable::CefCCGlobalEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
        ceffibipversion.value_namespace = name_space;
        ceffibipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCGlobalAutoRepairEnabled")
    {
        cefccglobalautorepairenabled = value;
        cefccglobalautorepairenabled.value_namespace = name_space;
        cefccglobalautorepairenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCGlobalAutoRepairDelay")
    {
        cefccglobalautorepairdelay = value;
        cefccglobalautorepairdelay.value_namespace = name_space;
        cefccglobalautorepairdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCGlobalAutoRepairHoldDown")
    {
        cefccglobalautorepairholddown = value;
        cefccglobalautorepairholddown.value_namespace = name_space;
        cefccglobalautorepairholddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCGlobalErrorMsgEnabled")
    {
        cefccglobalerrormsgenabled = value;
        cefccglobalerrormsgenabled.value_namespace = name_space;
        cefccglobalerrormsgenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCGlobalFullScanAction")
    {
        cefccglobalfullscanaction = value;
        cefccglobalfullscanaction.value_namespace = name_space;
        cefccglobalfullscanaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCGlobalFullScanStatus")
    {
        cefccglobalfullscanstatus = value;
        cefccglobalfullscanstatus.value_namespace = name_space;
        cefccglobalfullscanstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefCCGlobalTable::CefCCGlobalEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion.yfilter = yfilter;
    }
    if(value_path == "cefCCGlobalAutoRepairEnabled")
    {
        cefccglobalautorepairenabled.yfilter = yfilter;
    }
    if(value_path == "cefCCGlobalAutoRepairDelay")
    {
        cefccglobalautorepairdelay.yfilter = yfilter;
    }
    if(value_path == "cefCCGlobalAutoRepairHoldDown")
    {
        cefccglobalautorepairholddown.yfilter = yfilter;
    }
    if(value_path == "cefCCGlobalErrorMsgEnabled")
    {
        cefccglobalerrormsgenabled.yfilter = yfilter;
    }
    if(value_path == "cefCCGlobalFullScanAction")
    {
        cefccglobalfullscanaction.yfilter = yfilter;
    }
    if(value_path == "cefCCGlobalFullScanStatus")
    {
        cefccglobalfullscanstatus.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefCCGlobalTable::CefCCGlobalEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefFIBIpVersion" || name == "cefCCGlobalAutoRepairEnabled" || name == "cefCCGlobalAutoRepairDelay" || name == "cefCCGlobalAutoRepairHoldDown" || name == "cefCCGlobalErrorMsgEnabled" || name == "cefCCGlobalFullScanAction" || name == "cefCCGlobalFullScanStatus")
        return true;
    return false;
}

CISCOCEFMIB::CefCCTypeTable::CefCCTypeTable()
    :
    cefcctypeentry(this, {"ceffibipversion", "cefcctype"})
{

    yang_name = "cefCCTypeTable"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefCCTypeTable::~CefCCTypeTable()
{
}

bool CISCOCEFMIB::CefCCTypeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefcctypeentry.len(); index++)
    {
        if(cefcctypeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCEFMIB::CefCCTypeTable::has_operation() const
{
    for (std::size_t index=0; index<cefcctypeentry.len(); index++)
    {
        if(cefcctypeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCEFMIB::CefCCTypeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefCCTypeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefCCTypeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefCCTypeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefCCTypeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefCCTypeEntry")
    {
        auto c = std::make_shared<CISCOCEFMIB::CefCCTypeTable::CefCCTypeEntry>();
        c->parent = this;
        cefcctypeentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefCCTypeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefcctypeentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCEFMIB::CefCCTypeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::CefCCTypeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCEFMIB::CefCCTypeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefCCTypeEntry")
        return true;
    return false;
}

CISCOCEFMIB::CefCCTypeTable::CefCCTypeEntry::CefCCTypeEntry()
    :
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    cefcctype{YType::enumeration, "cefCCType"},
    cefccenabled{YType::boolean, "cefCCEnabled"},
    cefcccount{YType::uint32, "cefCCCount"},
    cefccperiod{YType::uint32, "cefCCPeriod"},
    cefccqueriessent{YType::uint32, "cefCCQueriesSent"},
    cefccqueriesignored{YType::uint32, "cefCCQueriesIgnored"},
    cefccquerieschecked{YType::uint32, "cefCCQueriesChecked"},
    cefccqueriesiterated{YType::uint32, "cefCCQueriesIterated"}
{

    yang_name = "cefCCTypeEntry"; yang_parent_name = "cefCCTypeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefCCTypeTable::CefCCTypeEntry::~CefCCTypeEntry()
{
}

bool CISCOCEFMIB::CefCCTypeTable::CefCCTypeEntry::has_data() const
{
    if (is_presence_container) return true;
    return ceffibipversion.is_set
	|| cefcctype.is_set
	|| cefccenabled.is_set
	|| cefcccount.is_set
	|| cefccperiod.is_set
	|| cefccqueriessent.is_set
	|| cefccqueriesignored.is_set
	|| cefccquerieschecked.is_set
	|| cefccqueriesiterated.is_set;
}

bool CISCOCEFMIB::CefCCTypeTable::CefCCTypeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(cefcctype.yfilter)
	|| ydk::is_set(cefccenabled.yfilter)
	|| ydk::is_set(cefcccount.yfilter)
	|| ydk::is_set(cefccperiod.yfilter)
	|| ydk::is_set(cefccqueriessent.yfilter)
	|| ydk::is_set(cefccqueriesignored.yfilter)
	|| ydk::is_set(cefccquerieschecked.yfilter)
	|| ydk::is_set(cefccqueriesiterated.yfilter);
}

std::string CISCOCEFMIB::CefCCTypeTable::CefCCTypeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefCCTypeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefCCTypeTable::CefCCTypeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefCCTypeEntry";
    ADD_KEY_TOKEN(ceffibipversion, "cefFIBIpVersion");
    ADD_KEY_TOKEN(cefcctype, "cefCCType");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefCCTypeTable::CefCCTypeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefcctype.is_set || is_set(cefcctype.yfilter)) leaf_name_data.push_back(cefcctype.get_name_leafdata());
    if (cefccenabled.is_set || is_set(cefccenabled.yfilter)) leaf_name_data.push_back(cefccenabled.get_name_leafdata());
    if (cefcccount.is_set || is_set(cefcccount.yfilter)) leaf_name_data.push_back(cefcccount.get_name_leafdata());
    if (cefccperiod.is_set || is_set(cefccperiod.yfilter)) leaf_name_data.push_back(cefccperiod.get_name_leafdata());
    if (cefccqueriessent.is_set || is_set(cefccqueriessent.yfilter)) leaf_name_data.push_back(cefccqueriessent.get_name_leafdata());
    if (cefccqueriesignored.is_set || is_set(cefccqueriesignored.yfilter)) leaf_name_data.push_back(cefccqueriesignored.get_name_leafdata());
    if (cefccquerieschecked.is_set || is_set(cefccquerieschecked.yfilter)) leaf_name_data.push_back(cefccquerieschecked.get_name_leafdata());
    if (cefccqueriesiterated.is_set || is_set(cefccqueriesiterated.yfilter)) leaf_name_data.push_back(cefccqueriesiterated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefCCTypeTable::CefCCTypeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefCCTypeTable::CefCCTypeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefCCTypeTable::CefCCTypeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
        ceffibipversion.value_namespace = name_space;
        ceffibipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCType")
    {
        cefcctype = value;
        cefcctype.value_namespace = name_space;
        cefcctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCEnabled")
    {
        cefccenabled = value;
        cefccenabled.value_namespace = name_space;
        cefccenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCCount")
    {
        cefcccount = value;
        cefcccount.value_namespace = name_space;
        cefcccount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCPeriod")
    {
        cefccperiod = value;
        cefccperiod.value_namespace = name_space;
        cefccperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCQueriesSent")
    {
        cefccqueriessent = value;
        cefccqueriessent.value_namespace = name_space;
        cefccqueriessent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCQueriesIgnored")
    {
        cefccqueriesignored = value;
        cefccqueriesignored.value_namespace = name_space;
        cefccqueriesignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCQueriesChecked")
    {
        cefccquerieschecked = value;
        cefccquerieschecked.value_namespace = name_space;
        cefccquerieschecked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCQueriesIterated")
    {
        cefccqueriesiterated = value;
        cefccqueriesiterated.value_namespace = name_space;
        cefccqueriesiterated.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefCCTypeTable::CefCCTypeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion.yfilter = yfilter;
    }
    if(value_path == "cefCCType")
    {
        cefcctype.yfilter = yfilter;
    }
    if(value_path == "cefCCEnabled")
    {
        cefccenabled.yfilter = yfilter;
    }
    if(value_path == "cefCCCount")
    {
        cefcccount.yfilter = yfilter;
    }
    if(value_path == "cefCCPeriod")
    {
        cefccperiod.yfilter = yfilter;
    }
    if(value_path == "cefCCQueriesSent")
    {
        cefccqueriessent.yfilter = yfilter;
    }
    if(value_path == "cefCCQueriesIgnored")
    {
        cefccqueriesignored.yfilter = yfilter;
    }
    if(value_path == "cefCCQueriesChecked")
    {
        cefccquerieschecked.yfilter = yfilter;
    }
    if(value_path == "cefCCQueriesIterated")
    {
        cefccqueriesiterated.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefCCTypeTable::CefCCTypeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefFIBIpVersion" || name == "cefCCType" || name == "cefCCEnabled" || name == "cefCCCount" || name == "cefCCPeriod" || name == "cefCCQueriesSent" || name == "cefCCQueriesIgnored" || name == "cefCCQueriesChecked" || name == "cefCCQueriesIterated")
        return true;
    return false;
}

CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordTable()
    :
    cefinconsistencyrecordentry(this, {"ceffibipversion", "cefinconsistencyrecid"})
{

    yang_name = "cefInconsistencyRecordTable"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefInconsistencyRecordTable::~CefInconsistencyRecordTable()
{
}

bool CISCOCEFMIB::CefInconsistencyRecordTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefinconsistencyrecordentry.len(); index++)
    {
        if(cefinconsistencyrecordentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCEFMIB::CefInconsistencyRecordTable::has_operation() const
{
    for (std::size_t index=0; index<cefinconsistencyrecordentry.len(); index++)
    {
        if(cefinconsistencyrecordentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCEFMIB::CefInconsistencyRecordTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefInconsistencyRecordTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefInconsistencyRecordTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefInconsistencyRecordTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefInconsistencyRecordTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefInconsistencyRecordEntry")
    {
        auto c = std::make_shared<CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry>();
        c->parent = this;
        cefinconsistencyrecordentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefInconsistencyRecordTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefinconsistencyrecordentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCEFMIB::CefInconsistencyRecordTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::CefInconsistencyRecordTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCEFMIB::CefInconsistencyRecordTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefInconsistencyRecordEntry")
        return true;
    return false;
}

CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry::CefInconsistencyRecordEntry()
    :
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    cefinconsistencyrecid{YType::int32, "cefInconsistencyRecId"},
    cefinconsistencyprefixtype{YType::enumeration, "cefInconsistencyPrefixType"},
    cefinconsistencyprefixaddr{YType::str, "cefInconsistencyPrefixAddr"},
    cefinconsistencyprefixlen{YType::uint32, "cefInconsistencyPrefixLen"},
    cefinconsistencyvrfname{YType::str, "cefInconsistencyVrfName"},
    cefinconsistencycctype{YType::enumeration, "cefInconsistencyCCType"},
    cefinconsistencyentity{YType::int32, "cefInconsistencyEntity"},
    cefinconsistencyreason{YType::enumeration, "cefInconsistencyReason"}
{

    yang_name = "cefInconsistencyRecordEntry"; yang_parent_name = "cefInconsistencyRecordTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry::~CefInconsistencyRecordEntry()
{
}

bool CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry::has_data() const
{
    if (is_presence_container) return true;
    return ceffibipversion.is_set
	|| cefinconsistencyrecid.is_set
	|| cefinconsistencyprefixtype.is_set
	|| cefinconsistencyprefixaddr.is_set
	|| cefinconsistencyprefixlen.is_set
	|| cefinconsistencyvrfname.is_set
	|| cefinconsistencycctype.is_set
	|| cefinconsistencyentity.is_set
	|| cefinconsistencyreason.is_set;
}

bool CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(cefinconsistencyrecid.yfilter)
	|| ydk::is_set(cefinconsistencyprefixtype.yfilter)
	|| ydk::is_set(cefinconsistencyprefixaddr.yfilter)
	|| ydk::is_set(cefinconsistencyprefixlen.yfilter)
	|| ydk::is_set(cefinconsistencyvrfname.yfilter)
	|| ydk::is_set(cefinconsistencycctype.yfilter)
	|| ydk::is_set(cefinconsistencyentity.yfilter)
	|| ydk::is_set(cefinconsistencyreason.yfilter);
}

std::string CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefInconsistencyRecordTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefInconsistencyRecordEntry";
    ADD_KEY_TOKEN(ceffibipversion, "cefFIBIpVersion");
    ADD_KEY_TOKEN(cefinconsistencyrecid, "cefInconsistencyRecId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefinconsistencyrecid.is_set || is_set(cefinconsistencyrecid.yfilter)) leaf_name_data.push_back(cefinconsistencyrecid.get_name_leafdata());
    if (cefinconsistencyprefixtype.is_set || is_set(cefinconsistencyprefixtype.yfilter)) leaf_name_data.push_back(cefinconsistencyprefixtype.get_name_leafdata());
    if (cefinconsistencyprefixaddr.is_set || is_set(cefinconsistencyprefixaddr.yfilter)) leaf_name_data.push_back(cefinconsistencyprefixaddr.get_name_leafdata());
    if (cefinconsistencyprefixlen.is_set || is_set(cefinconsistencyprefixlen.yfilter)) leaf_name_data.push_back(cefinconsistencyprefixlen.get_name_leafdata());
    if (cefinconsistencyvrfname.is_set || is_set(cefinconsistencyvrfname.yfilter)) leaf_name_data.push_back(cefinconsistencyvrfname.get_name_leafdata());
    if (cefinconsistencycctype.is_set || is_set(cefinconsistencycctype.yfilter)) leaf_name_data.push_back(cefinconsistencycctype.get_name_leafdata());
    if (cefinconsistencyentity.is_set || is_set(cefinconsistencyentity.yfilter)) leaf_name_data.push_back(cefinconsistencyentity.get_name_leafdata());
    if (cefinconsistencyreason.is_set || is_set(cefinconsistencyreason.yfilter)) leaf_name_data.push_back(cefinconsistencyreason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
        ceffibipversion.value_namespace = name_space;
        ceffibipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefInconsistencyRecId")
    {
        cefinconsistencyrecid = value;
        cefinconsistencyrecid.value_namespace = name_space;
        cefinconsistencyrecid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefInconsistencyPrefixType")
    {
        cefinconsistencyprefixtype = value;
        cefinconsistencyprefixtype.value_namespace = name_space;
        cefinconsistencyprefixtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefInconsistencyPrefixAddr")
    {
        cefinconsistencyprefixaddr = value;
        cefinconsistencyprefixaddr.value_namespace = name_space;
        cefinconsistencyprefixaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefInconsistencyPrefixLen")
    {
        cefinconsistencyprefixlen = value;
        cefinconsistencyprefixlen.value_namespace = name_space;
        cefinconsistencyprefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefInconsistencyVrfName")
    {
        cefinconsistencyvrfname = value;
        cefinconsistencyvrfname.value_namespace = name_space;
        cefinconsistencyvrfname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefInconsistencyCCType")
    {
        cefinconsistencycctype = value;
        cefinconsistencycctype.value_namespace = name_space;
        cefinconsistencycctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefInconsistencyEntity")
    {
        cefinconsistencyentity = value;
        cefinconsistencyentity.value_namespace = name_space;
        cefinconsistencyentity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefInconsistencyReason")
    {
        cefinconsistencyreason = value;
        cefinconsistencyreason.value_namespace = name_space;
        cefinconsistencyreason.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyRecId")
    {
        cefinconsistencyrecid.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyPrefixType")
    {
        cefinconsistencyprefixtype.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyPrefixAddr")
    {
        cefinconsistencyprefixaddr.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyPrefixLen")
    {
        cefinconsistencyprefixlen.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyVrfName")
    {
        cefinconsistencyvrfname.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyCCType")
    {
        cefinconsistencycctype.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyEntity")
    {
        cefinconsistencyentity.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyReason")
    {
        cefinconsistencyreason.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefFIBIpVersion" || name == "cefInconsistencyRecId" || name == "cefInconsistencyPrefixType" || name == "cefInconsistencyPrefixAddr" || name == "cefInconsistencyPrefixLen" || name == "cefInconsistencyVrfName" || name == "cefInconsistencyCCType" || name == "cefInconsistencyEntity" || name == "cefInconsistencyReason")
        return true;
    return false;
}

CISCOCEFMIB::CefStatsPrefixLenTable::CefStatsPrefixLenTable()
    :
    cefstatsprefixlenentry(this, {"entphysicalindex", "ceffibipversion", "cefstatsprefixlen"})
{

    yang_name = "cefStatsPrefixLenTable"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefStatsPrefixLenTable::~CefStatsPrefixLenTable()
{
}

bool CISCOCEFMIB::CefStatsPrefixLenTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefstatsprefixlenentry.len(); index++)
    {
        if(cefstatsprefixlenentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCEFMIB::CefStatsPrefixLenTable::has_operation() const
{
    for (std::size_t index=0; index<cefstatsprefixlenentry.len(); index++)
    {
        if(cefstatsprefixlenentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCEFMIB::CefStatsPrefixLenTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefStatsPrefixLenTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefStatsPrefixLenTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefStatsPrefixLenTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefStatsPrefixLenTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefStatsPrefixLenEntry")
    {
        auto c = std::make_shared<CISCOCEFMIB::CefStatsPrefixLenTable::CefStatsPrefixLenEntry>();
        c->parent = this;
        cefstatsprefixlenentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefStatsPrefixLenTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefstatsprefixlenentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCEFMIB::CefStatsPrefixLenTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::CefStatsPrefixLenTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCEFMIB::CefStatsPrefixLenTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefStatsPrefixLenEntry")
        return true;
    return false;
}

CISCOCEFMIB::CefStatsPrefixLenTable::CefStatsPrefixLenEntry::CefStatsPrefixLenEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    cefstatsprefixlen{YType::uint32, "cefStatsPrefixLen"},
    cefstatsprefixqueries{YType::uint32, "cefStatsPrefixQueries"},
    cefstatsprefixhcqueries{YType::uint64, "cefStatsPrefixHCQueries"},
    cefstatsprefixinserts{YType::uint32, "cefStatsPrefixInserts"},
    cefstatsprefixhcinserts{YType::uint64, "cefStatsPrefixHCInserts"},
    cefstatsprefixdeletes{YType::uint32, "cefStatsPrefixDeletes"},
    cefstatsprefixhcdeletes{YType::uint64, "cefStatsPrefixHCDeletes"},
    cefstatsprefixelements{YType::uint32, "cefStatsPrefixElements"},
    cefstatsprefixhcelements{YType::uint64, "cefStatsPrefixHCElements"}
{

    yang_name = "cefStatsPrefixLenEntry"; yang_parent_name = "cefStatsPrefixLenTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefStatsPrefixLenTable::CefStatsPrefixLenEntry::~CefStatsPrefixLenEntry()
{
}

bool CISCOCEFMIB::CefStatsPrefixLenTable::CefStatsPrefixLenEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| ceffibipversion.is_set
	|| cefstatsprefixlen.is_set
	|| cefstatsprefixqueries.is_set
	|| cefstatsprefixhcqueries.is_set
	|| cefstatsprefixinserts.is_set
	|| cefstatsprefixhcinserts.is_set
	|| cefstatsprefixdeletes.is_set
	|| cefstatsprefixhcdeletes.is_set
	|| cefstatsprefixelements.is_set
	|| cefstatsprefixhcelements.is_set;
}

bool CISCOCEFMIB::CefStatsPrefixLenTable::CefStatsPrefixLenEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(cefstatsprefixlen.yfilter)
	|| ydk::is_set(cefstatsprefixqueries.yfilter)
	|| ydk::is_set(cefstatsprefixhcqueries.yfilter)
	|| ydk::is_set(cefstatsprefixinserts.yfilter)
	|| ydk::is_set(cefstatsprefixhcinserts.yfilter)
	|| ydk::is_set(cefstatsprefixdeletes.yfilter)
	|| ydk::is_set(cefstatsprefixhcdeletes.yfilter)
	|| ydk::is_set(cefstatsprefixelements.yfilter)
	|| ydk::is_set(cefstatsprefixhcelements.yfilter);
}

std::string CISCOCEFMIB::CefStatsPrefixLenTable::CefStatsPrefixLenEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefStatsPrefixLenTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefStatsPrefixLenTable::CefStatsPrefixLenEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefStatsPrefixLenEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(ceffibipversion, "cefFIBIpVersion");
    ADD_KEY_TOKEN(cefstatsprefixlen, "cefStatsPrefixLen");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefStatsPrefixLenTable::CefStatsPrefixLenEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefstatsprefixlen.is_set || is_set(cefstatsprefixlen.yfilter)) leaf_name_data.push_back(cefstatsprefixlen.get_name_leafdata());
    if (cefstatsprefixqueries.is_set || is_set(cefstatsprefixqueries.yfilter)) leaf_name_data.push_back(cefstatsprefixqueries.get_name_leafdata());
    if (cefstatsprefixhcqueries.is_set || is_set(cefstatsprefixhcqueries.yfilter)) leaf_name_data.push_back(cefstatsprefixhcqueries.get_name_leafdata());
    if (cefstatsprefixinserts.is_set || is_set(cefstatsprefixinserts.yfilter)) leaf_name_data.push_back(cefstatsprefixinserts.get_name_leafdata());
    if (cefstatsprefixhcinserts.is_set || is_set(cefstatsprefixhcinserts.yfilter)) leaf_name_data.push_back(cefstatsprefixhcinserts.get_name_leafdata());
    if (cefstatsprefixdeletes.is_set || is_set(cefstatsprefixdeletes.yfilter)) leaf_name_data.push_back(cefstatsprefixdeletes.get_name_leafdata());
    if (cefstatsprefixhcdeletes.is_set || is_set(cefstatsprefixhcdeletes.yfilter)) leaf_name_data.push_back(cefstatsprefixhcdeletes.get_name_leafdata());
    if (cefstatsprefixelements.is_set || is_set(cefstatsprefixelements.yfilter)) leaf_name_data.push_back(cefstatsprefixelements.get_name_leafdata());
    if (cefstatsprefixhcelements.is_set || is_set(cefstatsprefixhcelements.yfilter)) leaf_name_data.push_back(cefstatsprefixhcelements.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefStatsPrefixLenTable::CefStatsPrefixLenEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefStatsPrefixLenTable::CefStatsPrefixLenEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefStatsPrefixLenTable::CefStatsPrefixLenEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
        ceffibipversion.value_namespace = name_space;
        ceffibipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefStatsPrefixLen")
    {
        cefstatsprefixlen = value;
        cefstatsprefixlen.value_namespace = name_space;
        cefstatsprefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefStatsPrefixQueries")
    {
        cefstatsprefixqueries = value;
        cefstatsprefixqueries.value_namespace = name_space;
        cefstatsprefixqueries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefStatsPrefixHCQueries")
    {
        cefstatsprefixhcqueries = value;
        cefstatsprefixhcqueries.value_namespace = name_space;
        cefstatsprefixhcqueries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefStatsPrefixInserts")
    {
        cefstatsprefixinserts = value;
        cefstatsprefixinserts.value_namespace = name_space;
        cefstatsprefixinserts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefStatsPrefixHCInserts")
    {
        cefstatsprefixhcinserts = value;
        cefstatsprefixhcinserts.value_namespace = name_space;
        cefstatsprefixhcinserts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefStatsPrefixDeletes")
    {
        cefstatsprefixdeletes = value;
        cefstatsprefixdeletes.value_namespace = name_space;
        cefstatsprefixdeletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefStatsPrefixHCDeletes")
    {
        cefstatsprefixhcdeletes = value;
        cefstatsprefixhcdeletes.value_namespace = name_space;
        cefstatsprefixhcdeletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefStatsPrefixElements")
    {
        cefstatsprefixelements = value;
        cefstatsprefixelements.value_namespace = name_space;
        cefstatsprefixelements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefStatsPrefixHCElements")
    {
        cefstatsprefixhcelements = value;
        cefstatsprefixhcelements.value_namespace = name_space;
        cefstatsprefixhcelements.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefStatsPrefixLenTable::CefStatsPrefixLenEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion.yfilter = yfilter;
    }
    if(value_path == "cefStatsPrefixLen")
    {
        cefstatsprefixlen.yfilter = yfilter;
    }
    if(value_path == "cefStatsPrefixQueries")
    {
        cefstatsprefixqueries.yfilter = yfilter;
    }
    if(value_path == "cefStatsPrefixHCQueries")
    {
        cefstatsprefixhcqueries.yfilter = yfilter;
    }
    if(value_path == "cefStatsPrefixInserts")
    {
        cefstatsprefixinserts.yfilter = yfilter;
    }
    if(value_path == "cefStatsPrefixHCInserts")
    {
        cefstatsprefixhcinserts.yfilter = yfilter;
    }
    if(value_path == "cefStatsPrefixDeletes")
    {
        cefstatsprefixdeletes.yfilter = yfilter;
    }
    if(value_path == "cefStatsPrefixHCDeletes")
    {
        cefstatsprefixhcdeletes.yfilter = yfilter;
    }
    if(value_path == "cefStatsPrefixElements")
    {
        cefstatsprefixelements.yfilter = yfilter;
    }
    if(value_path == "cefStatsPrefixHCElements")
    {
        cefstatsprefixhcelements.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefStatsPrefixLenTable::CefStatsPrefixLenEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefFIBIpVersion" || name == "cefStatsPrefixLen" || name == "cefStatsPrefixQueries" || name == "cefStatsPrefixHCQueries" || name == "cefStatsPrefixInserts" || name == "cefStatsPrefixHCInserts" || name == "cefStatsPrefixDeletes" || name == "cefStatsPrefixHCDeletes" || name == "cefStatsPrefixElements" || name == "cefStatsPrefixHCElements")
        return true;
    return false;
}

CISCOCEFMIB::CefSwitchingStatsTable::CefSwitchingStatsTable()
    :
    cefswitchingstatsentry(this, {"entphysicalindex", "ceffibipversion", "cefswitchingindex"})
{

    yang_name = "cefSwitchingStatsTable"; yang_parent_name = "CISCO-CEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefSwitchingStatsTable::~CefSwitchingStatsTable()
{
}

bool CISCOCEFMIB::CefSwitchingStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cefswitchingstatsentry.len(); index++)
    {
        if(cefswitchingstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCEFMIB::CefSwitchingStatsTable::has_operation() const
{
    for (std::size_t index=0; index<cefswitchingstatsentry.len(); index++)
    {
        if(cefswitchingstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCEFMIB::CefSwitchingStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefSwitchingStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefSwitchingStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefSwitchingStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefSwitchingStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefSwitchingStatsEntry")
    {
        auto c = std::make_shared<CISCOCEFMIB::CefSwitchingStatsTable::CefSwitchingStatsEntry>();
        c->parent = this;
        cefswitchingstatsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefSwitchingStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cefswitchingstatsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOCEFMIB::CefSwitchingStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCEFMIB::CefSwitchingStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCEFMIB::CefSwitchingStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefSwitchingStatsEntry")
        return true;
    return false;
}

CISCOCEFMIB::CefSwitchingStatsTable::CefSwitchingStatsEntry::CefSwitchingStatsEntry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    cefswitchingindex{YType::int32, "cefSwitchingIndex"},
    cefswitchingpath{YType::str, "cefSwitchingPath"},
    cefswitchingdrop{YType::uint32, "cefSwitchingDrop"},
    cefswitchinghcdrop{YType::uint64, "cefSwitchingHCDrop"},
    cefswitchingpunt{YType::uint32, "cefSwitchingPunt"},
    cefswitchinghcpunt{YType::uint64, "cefSwitchingHCPunt"},
    cefswitchingpunt2host{YType::uint32, "cefSwitchingPunt2Host"},
    cefswitchinghcpunt2host{YType::uint64, "cefSwitchingHCPunt2Host"}
{

    yang_name = "cefSwitchingStatsEntry"; yang_parent_name = "cefSwitchingStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCEFMIB::CefSwitchingStatsTable::CefSwitchingStatsEntry::~CefSwitchingStatsEntry()
{
}

bool CISCOCEFMIB::CefSwitchingStatsTable::CefSwitchingStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return entphysicalindex.is_set
	|| ceffibipversion.is_set
	|| cefswitchingindex.is_set
	|| cefswitchingpath.is_set
	|| cefswitchingdrop.is_set
	|| cefswitchinghcdrop.is_set
	|| cefswitchingpunt.is_set
	|| cefswitchinghcpunt.is_set
	|| cefswitchingpunt2host.is_set
	|| cefswitchinghcpunt2host.is_set;
}

bool CISCOCEFMIB::CefSwitchingStatsTable::CefSwitchingStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(cefswitchingindex.yfilter)
	|| ydk::is_set(cefswitchingpath.yfilter)
	|| ydk::is_set(cefswitchingdrop.yfilter)
	|| ydk::is_set(cefswitchinghcdrop.yfilter)
	|| ydk::is_set(cefswitchingpunt.yfilter)
	|| ydk::is_set(cefswitchinghcpunt.yfilter)
	|| ydk::is_set(cefswitchingpunt2host.yfilter)
	|| ydk::is_set(cefswitchinghcpunt2host.yfilter);
}

std::string CISCOCEFMIB::CefSwitchingStatsTable::CefSwitchingStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefSwitchingStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCEFMIB::CefSwitchingStatsTable::CefSwitchingStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefSwitchingStatsEntry";
    ADD_KEY_TOKEN(entphysicalindex, "entPhysicalIndex");
    ADD_KEY_TOKEN(ceffibipversion, "cefFIBIpVersion");
    ADD_KEY_TOKEN(cefswitchingindex, "cefSwitchingIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCEFMIB::CefSwitchingStatsTable::CefSwitchingStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefswitchingindex.is_set || is_set(cefswitchingindex.yfilter)) leaf_name_data.push_back(cefswitchingindex.get_name_leafdata());
    if (cefswitchingpath.is_set || is_set(cefswitchingpath.yfilter)) leaf_name_data.push_back(cefswitchingpath.get_name_leafdata());
    if (cefswitchingdrop.is_set || is_set(cefswitchingdrop.yfilter)) leaf_name_data.push_back(cefswitchingdrop.get_name_leafdata());
    if (cefswitchinghcdrop.is_set || is_set(cefswitchinghcdrop.yfilter)) leaf_name_data.push_back(cefswitchinghcdrop.get_name_leafdata());
    if (cefswitchingpunt.is_set || is_set(cefswitchingpunt.yfilter)) leaf_name_data.push_back(cefswitchingpunt.get_name_leafdata());
    if (cefswitchinghcpunt.is_set || is_set(cefswitchinghcpunt.yfilter)) leaf_name_data.push_back(cefswitchinghcpunt.get_name_leafdata());
    if (cefswitchingpunt2host.is_set || is_set(cefswitchingpunt2host.yfilter)) leaf_name_data.push_back(cefswitchingpunt2host.get_name_leafdata());
    if (cefswitchinghcpunt2host.is_set || is_set(cefswitchinghcpunt2host.yfilter)) leaf_name_data.push_back(cefswitchinghcpunt2host.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOCEFMIB::CefSwitchingStatsTable::CefSwitchingStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOCEFMIB::CefSwitchingStatsTable::CefSwitchingStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOCEFMIB::CefSwitchingStatsTable::CefSwitchingStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
        ceffibipversion.value_namespace = name_space;
        ceffibipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefSwitchingIndex")
    {
        cefswitchingindex = value;
        cefswitchingindex.value_namespace = name_space;
        cefswitchingindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefSwitchingPath")
    {
        cefswitchingpath = value;
        cefswitchingpath.value_namespace = name_space;
        cefswitchingpath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefSwitchingDrop")
    {
        cefswitchingdrop = value;
        cefswitchingdrop.value_namespace = name_space;
        cefswitchingdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefSwitchingHCDrop")
    {
        cefswitchinghcdrop = value;
        cefswitchinghcdrop.value_namespace = name_space;
        cefswitchinghcdrop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefSwitchingPunt")
    {
        cefswitchingpunt = value;
        cefswitchingpunt.value_namespace = name_space;
        cefswitchingpunt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefSwitchingHCPunt")
    {
        cefswitchinghcpunt = value;
        cefswitchinghcpunt.value_namespace = name_space;
        cefswitchinghcpunt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefSwitchingPunt2Host")
    {
        cefswitchingpunt2host = value;
        cefswitchingpunt2host.value_namespace = name_space;
        cefswitchingpunt2host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefSwitchingHCPunt2Host")
    {
        cefswitchinghcpunt2host = value;
        cefswitchinghcpunt2host.value_namespace = name_space;
        cefswitchinghcpunt2host.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCEFMIB::CefSwitchingStatsTable::CefSwitchingStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion.yfilter = yfilter;
    }
    if(value_path == "cefSwitchingIndex")
    {
        cefswitchingindex.yfilter = yfilter;
    }
    if(value_path == "cefSwitchingPath")
    {
        cefswitchingpath.yfilter = yfilter;
    }
    if(value_path == "cefSwitchingDrop")
    {
        cefswitchingdrop.yfilter = yfilter;
    }
    if(value_path == "cefSwitchingHCDrop")
    {
        cefswitchinghcdrop.yfilter = yfilter;
    }
    if(value_path == "cefSwitchingPunt")
    {
        cefswitchingpunt.yfilter = yfilter;
    }
    if(value_path == "cefSwitchingHCPunt")
    {
        cefswitchinghcpunt.yfilter = yfilter;
    }
    if(value_path == "cefSwitchingPunt2Host")
    {
        cefswitchingpunt2host.yfilter = yfilter;
    }
    if(value_path == "cefSwitchingHCPunt2Host")
    {
        cefswitchinghcpunt2host.yfilter = yfilter;
    }
}

bool CISCOCEFMIB::CefSwitchingStatsTable::CefSwitchingStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefFIBIpVersion" || name == "cefSwitchingIndex" || name == "cefSwitchingPath" || name == "cefSwitchingDrop" || name == "cefSwitchingHCDrop" || name == "cefSwitchingPunt" || name == "cefSwitchingHCPunt" || name == "cefSwitchingPunt2Host" || name == "cefSwitchingHCPunt2Host")
        return true;
    return false;
}

const Enum::YLeaf CISCOCEFMIB::CefCfgTable::CefCfgEntry::CefCfgLoadSharingAlgorithm::none {1, "none"};
const Enum::YLeaf CISCOCEFMIB::CefCfgTable::CefCfgEntry::CefCfgLoadSharingAlgorithm::original {2, "original"};
const Enum::YLeaf CISCOCEFMIB::CefCfgTable::CefCfgEntry::CefCfgLoadSharingAlgorithm::tunnel {3, "tunnel"};
const Enum::YLeaf CISCOCEFMIB::CefCfgTable::CefCfgEntry::CefCfgLoadSharingAlgorithm::universal {4, "universal"};

const Enum::YLeaf CISCOCEFMIB::CefIntTable::CefIntEntry::CefIntSwitchingState::cefEnabled {1, "cefEnabled"};
const Enum::YLeaf CISCOCEFMIB::CefIntTable::CefIntEntry::CefIntSwitchingState::distCefEnabled {2, "distCefEnabled"};
const Enum::YLeaf CISCOCEFMIB::CefIntTable::CefIntEntry::CefIntSwitchingState::cefDisabled {3, "cefDisabled"};

const Enum::YLeaf CISCOCEFMIB::CefIntTable::CefIntEntry::CefIntLoadSharing::perPacket {1, "perPacket"};
const Enum::YLeaf CISCOCEFMIB::CefIntTable::CefIntEntry::CefIntLoadSharing::perDestination {2, "perDestination"};

const Enum::YLeaf CISCOCEFMIB::CefIntTable::CefIntEntry::CefIntNonrecursiveAccouting::internal {1, "internal"};
const Enum::YLeaf CISCOCEFMIB::CefIntTable::CefIntEntry::CefIntNonrecursiveAccouting::external {2, "external"};

const Enum::YLeaf CISCOCEFMIB::CefPeerTable::CefPeerEntry::CefPeerOperState::peerDisabled {1, "peerDisabled"};
const Enum::YLeaf CISCOCEFMIB::CefPeerTable::CefPeerEntry::CefPeerOperState::peerUp {2, "peerUp"};
const Enum::YLeaf CISCOCEFMIB::CefPeerTable::CefPeerEntry::CefPeerOperState::peerHold {3, "peerHold"};

const Enum::YLeaf CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::CefPeerFIBOperState::peerFIBDown {1, "peerFIBDown"};
const Enum::YLeaf CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::CefPeerFIBOperState::peerFIBUp {2, "peerFIBUp"};
const Enum::YLeaf CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::CefPeerFIBOperState::peerFIBReloadRequest {3, "peerFIBReloadRequest"};
const Enum::YLeaf CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::CefPeerFIBOperState::peerFIBReloading {4, "peerFIBReloading"};
const Enum::YLeaf CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::CefPeerFIBOperState::peerFIBSynced {5, "peerFIBSynced"};

const Enum::YLeaf CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry::CefInconsistencyReason::missing {1, "missing"};
const Enum::YLeaf CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry::CefInconsistencyReason::checksumErr {2, "checksumErr"};
const Enum::YLeaf CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry::CefInconsistencyReason::unknown {3, "unknown"};


}
}

