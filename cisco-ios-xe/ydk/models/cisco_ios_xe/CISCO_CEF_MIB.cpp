
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CEF_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CEF_MIB {

CiscoCefMib::CiscoCefMib()
    :
    cefadjsummarytable(std::make_shared<CiscoCefMib::Cefadjsummarytable>())
	,cefadjtable(std::make_shared<CiscoCefMib::Cefadjtable>())
	,cefcc(std::make_shared<CiscoCefMib::Cefcc>())
	,cefccglobaltable(std::make_shared<CiscoCefMib::Cefccglobaltable>())
	,cefcctypetable(std::make_shared<CiscoCefMib::Cefcctypetable>())
	,cefcfgtable(std::make_shared<CiscoCefMib::Cefcfgtable>())
	,ceffeselectiontable(std::make_shared<CiscoCefMib::Ceffeselectiontable>())
	,ceffib(std::make_shared<CiscoCefMib::Ceffib>())
	,ceffibsummarytable(std::make_shared<CiscoCefMib::Ceffibsummarytable>())
	,cefinconsistencyrecordtable(std::make_shared<CiscoCefMib::Cefinconsistencyrecordtable>())
	,cefinttable(std::make_shared<CiscoCefMib::Cefinttable>())
	,ceflmprefixtable(std::make_shared<CiscoCefMib::Ceflmprefixtable>())
	,cefnotifcntl(std::make_shared<CiscoCefMib::Cefnotifcntl>())
	,cefpathtable(std::make_shared<CiscoCefMib::Cefpathtable>())
	,cefpeerfibtable(std::make_shared<CiscoCefMib::Cefpeerfibtable>())
	,cefpeertable(std::make_shared<CiscoCefMib::Cefpeertable>())
	,cefprefixtable(std::make_shared<CiscoCefMib::Cefprefixtable>())
	,cefresourcetable(std::make_shared<CiscoCefMib::Cefresourcetable>())
	,cefstatsprefixlentable(std::make_shared<CiscoCefMib::Cefstatsprefixlentable>())
	,cefswitchingstatstable(std::make_shared<CiscoCefMib::Cefswitchingstatstable>())
{
    cefadjsummarytable->parent = this;

    cefadjtable->parent = this;

    cefcc->parent = this;

    cefccglobaltable->parent = this;

    cefcctypetable->parent = this;

    cefcfgtable->parent = this;

    ceffeselectiontable->parent = this;

    ceffib->parent = this;

    ceffibsummarytable->parent = this;

    cefinconsistencyrecordtable->parent = this;

    cefinttable->parent = this;

    ceflmprefixtable->parent = this;

    cefnotifcntl->parent = this;

    cefpathtable->parent = this;

    cefpeerfibtable->parent = this;

    cefpeertable->parent = this;

    cefprefixtable->parent = this;

    cefresourcetable->parent = this;

    cefstatsprefixlentable->parent = this;

    cefswitchingstatstable->parent = this;

    yang_name = "CISCO-CEF-MIB"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::~CiscoCefMib()
{
}

bool CiscoCefMib::has_data() const
{
    return (cefadjsummarytable !=  nullptr && cefadjsummarytable->has_data())
	|| (cefadjtable !=  nullptr && cefadjtable->has_data())
	|| (cefcc !=  nullptr && cefcc->has_data())
	|| (cefccglobaltable !=  nullptr && cefccglobaltable->has_data())
	|| (cefcctypetable !=  nullptr && cefcctypetable->has_data())
	|| (cefcfgtable !=  nullptr && cefcfgtable->has_data())
	|| (ceffeselectiontable !=  nullptr && ceffeselectiontable->has_data())
	|| (ceffib !=  nullptr && ceffib->has_data())
	|| (ceffibsummarytable !=  nullptr && ceffibsummarytable->has_data())
	|| (cefinconsistencyrecordtable !=  nullptr && cefinconsistencyrecordtable->has_data())
	|| (cefinttable !=  nullptr && cefinttable->has_data())
	|| (ceflmprefixtable !=  nullptr && ceflmprefixtable->has_data())
	|| (cefnotifcntl !=  nullptr && cefnotifcntl->has_data())
	|| (cefpathtable !=  nullptr && cefpathtable->has_data())
	|| (cefpeerfibtable !=  nullptr && cefpeerfibtable->has_data())
	|| (cefpeertable !=  nullptr && cefpeertable->has_data())
	|| (cefprefixtable !=  nullptr && cefprefixtable->has_data())
	|| (cefresourcetable !=  nullptr && cefresourcetable->has_data())
	|| (cefstatsprefixlentable !=  nullptr && cefstatsprefixlentable->has_data())
	|| (cefswitchingstatstable !=  nullptr && cefswitchingstatstable->has_data());
}

bool CiscoCefMib::has_operation() const
{
    return is_set(yfilter)
	|| (cefadjsummarytable !=  nullptr && cefadjsummarytable->has_operation())
	|| (cefadjtable !=  nullptr && cefadjtable->has_operation())
	|| (cefcc !=  nullptr && cefcc->has_operation())
	|| (cefccglobaltable !=  nullptr && cefccglobaltable->has_operation())
	|| (cefcctypetable !=  nullptr && cefcctypetable->has_operation())
	|| (cefcfgtable !=  nullptr && cefcfgtable->has_operation())
	|| (ceffeselectiontable !=  nullptr && ceffeselectiontable->has_operation())
	|| (ceffib !=  nullptr && ceffib->has_operation())
	|| (ceffibsummarytable !=  nullptr && ceffibsummarytable->has_operation())
	|| (cefinconsistencyrecordtable !=  nullptr && cefinconsistencyrecordtable->has_operation())
	|| (cefinttable !=  nullptr && cefinttable->has_operation())
	|| (ceflmprefixtable !=  nullptr && ceflmprefixtable->has_operation())
	|| (cefnotifcntl !=  nullptr && cefnotifcntl->has_operation())
	|| (cefpathtable !=  nullptr && cefpathtable->has_operation())
	|| (cefpeerfibtable !=  nullptr && cefpeerfibtable->has_operation())
	|| (cefpeertable !=  nullptr && cefpeertable->has_operation())
	|| (cefprefixtable !=  nullptr && cefprefixtable->has_operation())
	|| (cefresourcetable !=  nullptr && cefresourcetable->has_operation())
	|| (cefstatsprefixlentable !=  nullptr && cefstatsprefixlentable->has_operation())
	|| (cefswitchingstatstable !=  nullptr && cefswitchingstatstable->has_operation());
}

std::string CiscoCefMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefAdjSummaryTable")
    {
        if(cefadjsummarytable == nullptr)
        {
            cefadjsummarytable = std::make_shared<CiscoCefMib::Cefadjsummarytable>();
        }
        return cefadjsummarytable;
    }

    if(child_yang_name == "cefAdjTable")
    {
        if(cefadjtable == nullptr)
        {
            cefadjtable = std::make_shared<CiscoCefMib::Cefadjtable>();
        }
        return cefadjtable;
    }

    if(child_yang_name == "cefCC")
    {
        if(cefcc == nullptr)
        {
            cefcc = std::make_shared<CiscoCefMib::Cefcc>();
        }
        return cefcc;
    }

    if(child_yang_name == "cefCCGlobalTable")
    {
        if(cefccglobaltable == nullptr)
        {
            cefccglobaltable = std::make_shared<CiscoCefMib::Cefccglobaltable>();
        }
        return cefccglobaltable;
    }

    if(child_yang_name == "cefCCTypeTable")
    {
        if(cefcctypetable == nullptr)
        {
            cefcctypetable = std::make_shared<CiscoCefMib::Cefcctypetable>();
        }
        return cefcctypetable;
    }

    if(child_yang_name == "cefCfgTable")
    {
        if(cefcfgtable == nullptr)
        {
            cefcfgtable = std::make_shared<CiscoCefMib::Cefcfgtable>();
        }
        return cefcfgtable;
    }

    if(child_yang_name == "cefFESelectionTable")
    {
        if(ceffeselectiontable == nullptr)
        {
            ceffeselectiontable = std::make_shared<CiscoCefMib::Ceffeselectiontable>();
        }
        return ceffeselectiontable;
    }

    if(child_yang_name == "cefFIB")
    {
        if(ceffib == nullptr)
        {
            ceffib = std::make_shared<CiscoCefMib::Ceffib>();
        }
        return ceffib;
    }

    if(child_yang_name == "cefFIBSummaryTable")
    {
        if(ceffibsummarytable == nullptr)
        {
            ceffibsummarytable = std::make_shared<CiscoCefMib::Ceffibsummarytable>();
        }
        return ceffibsummarytable;
    }

    if(child_yang_name == "cefInconsistencyRecordTable")
    {
        if(cefinconsistencyrecordtable == nullptr)
        {
            cefinconsistencyrecordtable = std::make_shared<CiscoCefMib::Cefinconsistencyrecordtable>();
        }
        return cefinconsistencyrecordtable;
    }

    if(child_yang_name == "cefIntTable")
    {
        if(cefinttable == nullptr)
        {
            cefinttable = std::make_shared<CiscoCefMib::Cefinttable>();
        }
        return cefinttable;
    }

    if(child_yang_name == "cefLMPrefixTable")
    {
        if(ceflmprefixtable == nullptr)
        {
            ceflmprefixtable = std::make_shared<CiscoCefMib::Ceflmprefixtable>();
        }
        return ceflmprefixtable;
    }

    if(child_yang_name == "cefNotifCntl")
    {
        if(cefnotifcntl == nullptr)
        {
            cefnotifcntl = std::make_shared<CiscoCefMib::Cefnotifcntl>();
        }
        return cefnotifcntl;
    }

    if(child_yang_name == "cefPathTable")
    {
        if(cefpathtable == nullptr)
        {
            cefpathtable = std::make_shared<CiscoCefMib::Cefpathtable>();
        }
        return cefpathtable;
    }

    if(child_yang_name == "cefPeerFIBTable")
    {
        if(cefpeerfibtable == nullptr)
        {
            cefpeerfibtable = std::make_shared<CiscoCefMib::Cefpeerfibtable>();
        }
        return cefpeerfibtable;
    }

    if(child_yang_name == "cefPeerTable")
    {
        if(cefpeertable == nullptr)
        {
            cefpeertable = std::make_shared<CiscoCefMib::Cefpeertable>();
        }
        return cefpeertable;
    }

    if(child_yang_name == "cefPrefixTable")
    {
        if(cefprefixtable == nullptr)
        {
            cefprefixtable = std::make_shared<CiscoCefMib::Cefprefixtable>();
        }
        return cefprefixtable;
    }

    if(child_yang_name == "cefResourceTable")
    {
        if(cefresourcetable == nullptr)
        {
            cefresourcetable = std::make_shared<CiscoCefMib::Cefresourcetable>();
        }
        return cefresourcetable;
    }

    if(child_yang_name == "cefStatsPrefixLenTable")
    {
        if(cefstatsprefixlentable == nullptr)
        {
            cefstatsprefixlentable = std::make_shared<CiscoCefMib::Cefstatsprefixlentable>();
        }
        return cefstatsprefixlentable;
    }

    if(child_yang_name == "cefSwitchingStatsTable")
    {
        if(cefswitchingstatstable == nullptr)
        {
            cefswitchingstatstable = std::make_shared<CiscoCefMib::Cefswitchingstatstable>();
        }
        return cefswitchingstatstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cefadjsummarytable != nullptr)
    {
        children["cefAdjSummaryTable"] = cefadjsummarytable;
    }

    if(cefadjtable != nullptr)
    {
        children["cefAdjTable"] = cefadjtable;
    }

    if(cefcc != nullptr)
    {
        children["cefCC"] = cefcc;
    }

    if(cefccglobaltable != nullptr)
    {
        children["cefCCGlobalTable"] = cefccglobaltable;
    }

    if(cefcctypetable != nullptr)
    {
        children["cefCCTypeTable"] = cefcctypetable;
    }

    if(cefcfgtable != nullptr)
    {
        children["cefCfgTable"] = cefcfgtable;
    }

    if(ceffeselectiontable != nullptr)
    {
        children["cefFESelectionTable"] = ceffeselectiontable;
    }

    if(ceffib != nullptr)
    {
        children["cefFIB"] = ceffib;
    }

    if(ceffibsummarytable != nullptr)
    {
        children["cefFIBSummaryTable"] = ceffibsummarytable;
    }

    if(cefinconsistencyrecordtable != nullptr)
    {
        children["cefInconsistencyRecordTable"] = cefinconsistencyrecordtable;
    }

    if(cefinttable != nullptr)
    {
        children["cefIntTable"] = cefinttable;
    }

    if(ceflmprefixtable != nullptr)
    {
        children["cefLMPrefixTable"] = ceflmprefixtable;
    }

    if(cefnotifcntl != nullptr)
    {
        children["cefNotifCntl"] = cefnotifcntl;
    }

    if(cefpathtable != nullptr)
    {
        children["cefPathTable"] = cefpathtable;
    }

    if(cefpeerfibtable != nullptr)
    {
        children["cefPeerFIBTable"] = cefpeerfibtable;
    }

    if(cefpeertable != nullptr)
    {
        children["cefPeerTable"] = cefpeertable;
    }

    if(cefprefixtable != nullptr)
    {
        children["cefPrefixTable"] = cefprefixtable;
    }

    if(cefresourcetable != nullptr)
    {
        children["cefResourceTable"] = cefresourcetable;
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

void CiscoCefMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoCefMib::clone_ptr() const
{
    return std::make_shared<CiscoCefMib>();
}

std::string CiscoCefMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoCefMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoCefMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoCefMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoCefMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefAdjSummaryTable" || name == "cefAdjTable" || name == "cefCC" || name == "cefCCGlobalTable" || name == "cefCCTypeTable" || name == "cefCfgTable" || name == "cefFESelectionTable" || name == "cefFIB" || name == "cefFIBSummaryTable" || name == "cefInconsistencyRecordTable" || name == "cefIntTable" || name == "cefLMPrefixTable" || name == "cefNotifCntl" || name == "cefPathTable" || name == "cefPeerFIBTable" || name == "cefPeerTable" || name == "cefPrefixTable" || name == "cefResourceTable" || name == "cefStatsPrefixLenTable" || name == "cefSwitchingStatsTable")
        return true;
    return false;
}

CiscoCefMib::Ceffib::Ceffib()
    :
    ceflmprefixspinlock{YType::int32, "cefLMPrefixSpinLock"}
{
    yang_name = "cefFIB"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Ceffib::~Ceffib()
{
}

bool CiscoCefMib::Ceffib::has_data() const
{
    return ceflmprefixspinlock.is_set;
}

bool CiscoCefMib::Ceffib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceflmprefixspinlock.yfilter);
}

std::string CiscoCefMib::Ceffib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefFIB";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Ceffib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceflmprefixspinlock.is_set || is_set(ceflmprefixspinlock.yfilter)) leaf_name_data.push_back(ceflmprefixspinlock.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Ceffib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Ceffib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Ceffib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cefLMPrefixSpinLock")
    {
        ceflmprefixspinlock = value;
        ceflmprefixspinlock.value_namespace = name_space;
        ceflmprefixspinlock.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCefMib::Ceffib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cefLMPrefixSpinLock")
    {
        ceflmprefixspinlock.yfilter = yfilter;
    }
}

bool CiscoCefMib::Ceffib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefLMPrefixSpinLock")
        return true;
    return false;
}

CiscoCefMib::Cefcc::Cefcc()
    :
    cefinconsistencyreset{YType::enumeration, "cefInconsistencyReset"},
    cefinconsistencyresetstatus{YType::enumeration, "cefInconsistencyResetStatus"},
    entlastinconsistencydetecttime{YType::uint32, "entLastInconsistencyDetectTime"}
{
    yang_name = "cefCC"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Cefcc::~Cefcc()
{
}

bool CiscoCefMib::Cefcc::has_data() const
{
    return cefinconsistencyreset.is_set
	|| cefinconsistencyresetstatus.is_set
	|| entlastinconsistencydetecttime.is_set;
}

bool CiscoCefMib::Cefcc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cefinconsistencyreset.yfilter)
	|| ydk::is_set(cefinconsistencyresetstatus.yfilter)
	|| ydk::is_set(entlastinconsistencydetecttime.yfilter);
}

std::string CiscoCefMib::Cefcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefCC";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefcc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cefinconsistencyreset.is_set || is_set(cefinconsistencyreset.yfilter)) leaf_name_data.push_back(cefinconsistencyreset.get_name_leafdata());
    if (cefinconsistencyresetstatus.is_set || is_set(cefinconsistencyresetstatus.yfilter)) leaf_name_data.push_back(cefinconsistencyresetstatus.get_name_leafdata());
    if (entlastinconsistencydetecttime.is_set || is_set(entlastinconsistencydetecttime.yfilter)) leaf_name_data.push_back(entlastinconsistencydetecttime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefcc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Cefcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "entLastInconsistencyDetectTime")
    {
        entlastinconsistencydetecttime = value;
        entlastinconsistencydetecttime.value_namespace = name_space;
        entlastinconsistencydetecttime.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCefMib::Cefcc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cefInconsistencyReset")
    {
        cefinconsistencyreset.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyResetStatus")
    {
        cefinconsistencyresetstatus.yfilter = yfilter;
    }
    if(value_path == "entLastInconsistencyDetectTime")
    {
        entlastinconsistencydetecttime.yfilter = yfilter;
    }
}

bool CiscoCefMib::Cefcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefInconsistencyReset" || name == "cefInconsistencyResetStatus" || name == "entLastInconsistencyDetectTime")
        return true;
    return false;
}

CiscoCefMib::Cefnotifcntl::Cefnotifcntl()
    :
    cefinconsistencynotifenable{YType::boolean, "cefInconsistencyNotifEnable"},
    cefnotifthrottlinginterval{YType::int32, "cefNotifThrottlingInterval"},
    cefpeerfibstatechangenotifenable{YType::boolean, "cefPeerFIBStateChangeNotifEnable"},
    cefpeerstatechangenotifenable{YType::boolean, "cefPeerStateChangeNotifEnable"},
    cefresourcefailurenotifenable{YType::boolean, "cefResourceFailureNotifEnable"}
{
    yang_name = "cefNotifCntl"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Cefnotifcntl::~Cefnotifcntl()
{
}

bool CiscoCefMib::Cefnotifcntl::has_data() const
{
    return cefinconsistencynotifenable.is_set
	|| cefnotifthrottlinginterval.is_set
	|| cefpeerfibstatechangenotifenable.is_set
	|| cefpeerstatechangenotifenable.is_set
	|| cefresourcefailurenotifenable.is_set;
}

bool CiscoCefMib::Cefnotifcntl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cefinconsistencynotifenable.yfilter)
	|| ydk::is_set(cefnotifthrottlinginterval.yfilter)
	|| ydk::is_set(cefpeerfibstatechangenotifenable.yfilter)
	|| ydk::is_set(cefpeerstatechangenotifenable.yfilter)
	|| ydk::is_set(cefresourcefailurenotifenable.yfilter);
}

std::string CiscoCefMib::Cefnotifcntl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefNotifCntl";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefnotifcntl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cefinconsistencynotifenable.is_set || is_set(cefinconsistencynotifenable.yfilter)) leaf_name_data.push_back(cefinconsistencynotifenable.get_name_leafdata());
    if (cefnotifthrottlinginterval.is_set || is_set(cefnotifthrottlinginterval.yfilter)) leaf_name_data.push_back(cefnotifthrottlinginterval.get_name_leafdata());
    if (cefpeerfibstatechangenotifenable.is_set || is_set(cefpeerfibstatechangenotifenable.yfilter)) leaf_name_data.push_back(cefpeerfibstatechangenotifenable.get_name_leafdata());
    if (cefpeerstatechangenotifenable.is_set || is_set(cefpeerstatechangenotifenable.yfilter)) leaf_name_data.push_back(cefpeerstatechangenotifenable.get_name_leafdata());
    if (cefresourcefailurenotifenable.is_set || is_set(cefresourcefailurenotifenable.yfilter)) leaf_name_data.push_back(cefresourcefailurenotifenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefnotifcntl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefnotifcntl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Cefnotifcntl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cefInconsistencyNotifEnable")
    {
        cefinconsistencynotifenable = value;
        cefinconsistencynotifenable.value_namespace = name_space;
        cefinconsistencynotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefNotifThrottlingInterval")
    {
        cefnotifthrottlinginterval = value;
        cefnotifthrottlinginterval.value_namespace = name_space;
        cefnotifthrottlinginterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPeerFIBStateChangeNotifEnable")
    {
        cefpeerfibstatechangenotifenable = value;
        cefpeerfibstatechangenotifenable.value_namespace = name_space;
        cefpeerfibstatechangenotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPeerStateChangeNotifEnable")
    {
        cefpeerstatechangenotifenable = value;
        cefpeerstatechangenotifenable.value_namespace = name_space;
        cefpeerstatechangenotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefResourceFailureNotifEnable")
    {
        cefresourcefailurenotifenable = value;
        cefresourcefailurenotifenable.value_namespace = name_space;
        cefresourcefailurenotifenable.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCefMib::Cefnotifcntl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cefInconsistencyNotifEnable")
    {
        cefinconsistencynotifenable.yfilter = yfilter;
    }
    if(value_path == "cefNotifThrottlingInterval")
    {
        cefnotifthrottlinginterval.yfilter = yfilter;
    }
    if(value_path == "cefPeerFIBStateChangeNotifEnable")
    {
        cefpeerfibstatechangenotifenable.yfilter = yfilter;
    }
    if(value_path == "cefPeerStateChangeNotifEnable")
    {
        cefpeerstatechangenotifenable.yfilter = yfilter;
    }
    if(value_path == "cefResourceFailureNotifEnable")
    {
        cefresourcefailurenotifenable.yfilter = yfilter;
    }
}

bool CiscoCefMib::Cefnotifcntl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefInconsistencyNotifEnable" || name == "cefNotifThrottlingInterval" || name == "cefPeerFIBStateChangeNotifEnable" || name == "cefPeerStateChangeNotifEnable" || name == "cefResourceFailureNotifEnable")
        return true;
    return false;
}

CiscoCefMib::Ceffibsummarytable::Ceffibsummarytable()
{
    yang_name = "cefFIBSummaryTable"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Ceffibsummarytable::~Ceffibsummarytable()
{
}

bool CiscoCefMib::Ceffibsummarytable::has_data() const
{
    for (std::size_t index=0; index<ceffibsummaryentry.size(); index++)
    {
        if(ceffibsummaryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Ceffibsummarytable::has_operation() const
{
    for (std::size_t index=0; index<ceffibsummaryentry.size(); index++)
    {
        if(ceffibsummaryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCefMib::Ceffibsummarytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefFIBSummaryTable";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Ceffibsummarytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Ceffibsummarytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefFIBSummaryEntry")
    {
        for(auto const & c : ceffibsummaryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry>();
        c->parent = this;
        ceffibsummaryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Ceffibsummarytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceffibsummaryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Ceffibsummarytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::Ceffibsummarytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCefMib::Ceffibsummarytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefFIBSummaryEntry")
        return true;
    return false;
}

CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry::Ceffibsummaryentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    ceffibsummaryfwdprefixes{YType::uint32, "cefFIBSummaryFwdPrefixes"}
{
    yang_name = "cefFIBSummaryEntry"; yang_parent_name = "cefFIBSummaryTable";
}

CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry::~Ceffibsummaryentry()
{
}

bool CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry::has_data() const
{
    return entphysicalindex.is_set
	|| ceffibipversion.is_set
	|| ceffibsummaryfwdprefixes.is_set;
}

bool CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(ceffibsummaryfwdprefixes.yfilter);
}

std::string CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefFIBSummaryEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cefFIBIpVersion='" <<ceffibipversion <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefFIBSummaryTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (ceffibsummaryfwdprefixes.is_set || is_set(ceffibsummaryfwdprefixes.yfilter)) leaf_name_data.push_back(ceffibsummaryfwdprefixes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefFIBIpVersion" || name == "cefFIBSummaryFwdPrefixes")
        return true;
    return false;
}

CiscoCefMib::Cefprefixtable::Cefprefixtable()
{
    yang_name = "cefPrefixTable"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Cefprefixtable::~Cefprefixtable()
{
}

bool CiscoCefMib::Cefprefixtable::has_data() const
{
    for (std::size_t index=0; index<cefprefixentry.size(); index++)
    {
        if(cefprefixentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefprefixtable::has_operation() const
{
    for (std::size_t index=0; index<cefprefixentry.size(); index++)
    {
        if(cefprefixentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCefMib::Cefprefixtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefPrefixTable";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefprefixtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefprefixtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefPrefixEntry")
    {
        for(auto const & c : cefprefixentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefprefixtable::Cefprefixentry>();
        c->parent = this;
        cefprefixentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefprefixtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefprefixentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefprefixtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::Cefprefixtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCefMib::Cefprefixtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefPrefixEntry")
        return true;
    return false;
}

CiscoCefMib::Cefprefixtable::Cefprefixentry::Cefprefixentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefprefixtype{YType::enumeration, "cefPrefixType"},
    cefprefixaddr{YType::str, "cefPrefixAddr"},
    cefprefixlen{YType::uint32, "cefPrefixLen"},
    cefprefixbytes{YType::uint32, "cefPrefixBytes"},
    cefprefixexternalnrbytes{YType::uint32, "cefPrefixExternalNRBytes"},
    cefprefixexternalnrhcbytes{YType::uint64, "cefPrefixExternalNRHCBytes"},
    cefprefixexternalnrhcpkts{YType::uint64, "cefPrefixExternalNRHCPkts"},
    cefprefixexternalnrpkts{YType::uint32, "cefPrefixExternalNRPkts"},
    cefprefixforwardinginfo{YType::str, "cefPrefixForwardingInfo"},
    cefprefixhcbytes{YType::uint64, "cefPrefixHCBytes"},
    cefprefixhcpkts{YType::uint64, "cefPrefixHCPkts"},
    cefprefixinternalnrbytes{YType::uint32, "cefPrefixInternalNRBytes"},
    cefprefixinternalnrhcbytes{YType::uint64, "cefPrefixInternalNRHCBytes"},
    cefprefixinternalnrhcpkts{YType::uint64, "cefPrefixInternalNRHCPkts"},
    cefprefixinternalnrpkts{YType::uint32, "cefPrefixInternalNRPkts"},
    cefprefixpkts{YType::uint32, "cefPrefixPkts"}
{
    yang_name = "cefPrefixEntry"; yang_parent_name = "cefPrefixTable";
}

CiscoCefMib::Cefprefixtable::Cefprefixentry::~Cefprefixentry()
{
}

bool CiscoCefMib::Cefprefixtable::Cefprefixentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefprefixtype.is_set
	|| cefprefixaddr.is_set
	|| cefprefixlen.is_set
	|| cefprefixbytes.is_set
	|| cefprefixexternalnrbytes.is_set
	|| cefprefixexternalnrhcbytes.is_set
	|| cefprefixexternalnrhcpkts.is_set
	|| cefprefixexternalnrpkts.is_set
	|| cefprefixforwardinginfo.is_set
	|| cefprefixhcbytes.is_set
	|| cefprefixhcpkts.is_set
	|| cefprefixinternalnrbytes.is_set
	|| cefprefixinternalnrhcbytes.is_set
	|| cefprefixinternalnrhcpkts.is_set
	|| cefprefixinternalnrpkts.is_set
	|| cefprefixpkts.is_set;
}

bool CiscoCefMib::Cefprefixtable::Cefprefixentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefprefixtype.yfilter)
	|| ydk::is_set(cefprefixaddr.yfilter)
	|| ydk::is_set(cefprefixlen.yfilter)
	|| ydk::is_set(cefprefixbytes.yfilter)
	|| ydk::is_set(cefprefixexternalnrbytes.yfilter)
	|| ydk::is_set(cefprefixexternalnrhcbytes.yfilter)
	|| ydk::is_set(cefprefixexternalnrhcpkts.yfilter)
	|| ydk::is_set(cefprefixexternalnrpkts.yfilter)
	|| ydk::is_set(cefprefixforwardinginfo.yfilter)
	|| ydk::is_set(cefprefixhcbytes.yfilter)
	|| ydk::is_set(cefprefixhcpkts.yfilter)
	|| ydk::is_set(cefprefixinternalnrbytes.yfilter)
	|| ydk::is_set(cefprefixinternalnrhcbytes.yfilter)
	|| ydk::is_set(cefprefixinternalnrhcpkts.yfilter)
	|| ydk::is_set(cefprefixinternalnrpkts.yfilter)
	|| ydk::is_set(cefprefixpkts.yfilter);
}

std::string CiscoCefMib::Cefprefixtable::Cefprefixentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefPrefixEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cefPrefixType='" <<cefprefixtype <<"']" <<"[cefPrefixAddr='" <<cefprefixaddr <<"']" <<"[cefPrefixLen='" <<cefprefixlen <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefprefixtable::Cefprefixentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefPrefixTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefprefixtype.is_set || is_set(cefprefixtype.yfilter)) leaf_name_data.push_back(cefprefixtype.get_name_leafdata());
    if (cefprefixaddr.is_set || is_set(cefprefixaddr.yfilter)) leaf_name_data.push_back(cefprefixaddr.get_name_leafdata());
    if (cefprefixlen.is_set || is_set(cefprefixlen.yfilter)) leaf_name_data.push_back(cefprefixlen.get_name_leafdata());
    if (cefprefixbytes.is_set || is_set(cefprefixbytes.yfilter)) leaf_name_data.push_back(cefprefixbytes.get_name_leafdata());
    if (cefprefixexternalnrbytes.is_set || is_set(cefprefixexternalnrbytes.yfilter)) leaf_name_data.push_back(cefprefixexternalnrbytes.get_name_leafdata());
    if (cefprefixexternalnrhcbytes.is_set || is_set(cefprefixexternalnrhcbytes.yfilter)) leaf_name_data.push_back(cefprefixexternalnrhcbytes.get_name_leafdata());
    if (cefprefixexternalnrhcpkts.is_set || is_set(cefprefixexternalnrhcpkts.yfilter)) leaf_name_data.push_back(cefprefixexternalnrhcpkts.get_name_leafdata());
    if (cefprefixexternalnrpkts.is_set || is_set(cefprefixexternalnrpkts.yfilter)) leaf_name_data.push_back(cefprefixexternalnrpkts.get_name_leafdata());
    if (cefprefixforwardinginfo.is_set || is_set(cefprefixforwardinginfo.yfilter)) leaf_name_data.push_back(cefprefixforwardinginfo.get_name_leafdata());
    if (cefprefixhcbytes.is_set || is_set(cefprefixhcbytes.yfilter)) leaf_name_data.push_back(cefprefixhcbytes.get_name_leafdata());
    if (cefprefixhcpkts.is_set || is_set(cefprefixhcpkts.yfilter)) leaf_name_data.push_back(cefprefixhcpkts.get_name_leafdata());
    if (cefprefixinternalnrbytes.is_set || is_set(cefprefixinternalnrbytes.yfilter)) leaf_name_data.push_back(cefprefixinternalnrbytes.get_name_leafdata());
    if (cefprefixinternalnrhcbytes.is_set || is_set(cefprefixinternalnrhcbytes.yfilter)) leaf_name_data.push_back(cefprefixinternalnrhcbytes.get_name_leafdata());
    if (cefprefixinternalnrhcpkts.is_set || is_set(cefprefixinternalnrhcpkts.yfilter)) leaf_name_data.push_back(cefprefixinternalnrhcpkts.get_name_leafdata());
    if (cefprefixinternalnrpkts.is_set || is_set(cefprefixinternalnrpkts.yfilter)) leaf_name_data.push_back(cefprefixinternalnrpkts.get_name_leafdata());
    if (cefprefixpkts.is_set || is_set(cefprefixpkts.yfilter)) leaf_name_data.push_back(cefprefixpkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefprefixtable::Cefprefixentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefprefixtable::Cefprefixentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Cefprefixtable::Cefprefixentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cefPrefixBytes")
    {
        cefprefixbytes = value;
        cefprefixbytes.value_namespace = name_space;
        cefprefixbytes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cefPrefixExternalNRHCPkts")
    {
        cefprefixexternalnrhcpkts = value;
        cefprefixexternalnrhcpkts.value_namespace = name_space;
        cefprefixexternalnrhcpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixExternalNRPkts")
    {
        cefprefixexternalnrpkts = value;
        cefprefixexternalnrpkts.value_namespace = name_space;
        cefprefixexternalnrpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixForwardingInfo")
    {
        cefprefixforwardinginfo = value;
        cefprefixforwardinginfo.value_namespace = name_space;
        cefprefixforwardinginfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixHCBytes")
    {
        cefprefixhcbytes = value;
        cefprefixhcbytes.value_namespace = name_space;
        cefprefixhcbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixHCPkts")
    {
        cefprefixhcpkts = value;
        cefprefixhcpkts.value_namespace = name_space;
        cefprefixhcpkts.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cefPrefixInternalNRHCPkts")
    {
        cefprefixinternalnrhcpkts = value;
        cefprefixinternalnrhcpkts.value_namespace = name_space;
        cefprefixinternalnrhcpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixInternalNRPkts")
    {
        cefprefixinternalnrpkts = value;
        cefprefixinternalnrpkts.value_namespace = name_space;
        cefprefixinternalnrpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPrefixPkts")
    {
        cefprefixpkts = value;
        cefprefixpkts.value_namespace = name_space;
        cefprefixpkts.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCefMib::Cefprefixtable::Cefprefixentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cefPrefixBytes")
    {
        cefprefixbytes.yfilter = yfilter;
    }
    if(value_path == "cefPrefixExternalNRBytes")
    {
        cefprefixexternalnrbytes.yfilter = yfilter;
    }
    if(value_path == "cefPrefixExternalNRHCBytes")
    {
        cefprefixexternalnrhcbytes.yfilter = yfilter;
    }
    if(value_path == "cefPrefixExternalNRHCPkts")
    {
        cefprefixexternalnrhcpkts.yfilter = yfilter;
    }
    if(value_path == "cefPrefixExternalNRPkts")
    {
        cefprefixexternalnrpkts.yfilter = yfilter;
    }
    if(value_path == "cefPrefixForwardingInfo")
    {
        cefprefixforwardinginfo.yfilter = yfilter;
    }
    if(value_path == "cefPrefixHCBytes")
    {
        cefprefixhcbytes.yfilter = yfilter;
    }
    if(value_path == "cefPrefixHCPkts")
    {
        cefprefixhcpkts.yfilter = yfilter;
    }
    if(value_path == "cefPrefixInternalNRBytes")
    {
        cefprefixinternalnrbytes.yfilter = yfilter;
    }
    if(value_path == "cefPrefixInternalNRHCBytes")
    {
        cefprefixinternalnrhcbytes.yfilter = yfilter;
    }
    if(value_path == "cefPrefixInternalNRHCPkts")
    {
        cefprefixinternalnrhcpkts.yfilter = yfilter;
    }
    if(value_path == "cefPrefixInternalNRPkts")
    {
        cefprefixinternalnrpkts.yfilter = yfilter;
    }
    if(value_path == "cefPrefixPkts")
    {
        cefprefixpkts.yfilter = yfilter;
    }
}

bool CiscoCefMib::Cefprefixtable::Cefprefixentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefPrefixType" || name == "cefPrefixAddr" || name == "cefPrefixLen" || name == "cefPrefixBytes" || name == "cefPrefixExternalNRBytes" || name == "cefPrefixExternalNRHCBytes" || name == "cefPrefixExternalNRHCPkts" || name == "cefPrefixExternalNRPkts" || name == "cefPrefixForwardingInfo" || name == "cefPrefixHCBytes" || name == "cefPrefixHCPkts" || name == "cefPrefixInternalNRBytes" || name == "cefPrefixInternalNRHCBytes" || name == "cefPrefixInternalNRHCPkts" || name == "cefPrefixInternalNRPkts" || name == "cefPrefixPkts")
        return true;
    return false;
}

CiscoCefMib::Ceflmprefixtable::Ceflmprefixtable()
{
    yang_name = "cefLMPrefixTable"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Ceflmprefixtable::~Ceflmprefixtable()
{
}

bool CiscoCefMib::Ceflmprefixtable::has_data() const
{
    for (std::size_t index=0; index<ceflmprefixentry.size(); index++)
    {
        if(ceflmprefixentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Ceflmprefixtable::has_operation() const
{
    for (std::size_t index=0; index<ceflmprefixentry.size(); index++)
    {
        if(ceflmprefixentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCefMib::Ceflmprefixtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefLMPrefixTable";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Ceflmprefixtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Ceflmprefixtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefLMPrefixEntry")
    {
        for(auto const & c : ceflmprefixentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry>();
        c->parent = this;
        ceflmprefixentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Ceflmprefixtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceflmprefixentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Ceflmprefixtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::Ceflmprefixtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCefMib::Ceflmprefixtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefLMPrefixEntry")
        return true;
    return false;
}

CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry::Ceflmprefixentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceflmprefixdestaddrtype{YType::enumeration, "cefLMPrefixDestAddrType"},
    ceflmprefixdestaddr{YType::str, "cefLMPrefixDestAddr"},
    ceflmprefixaddr{YType::str, "cefLMPrefixAddr"},
    ceflmprefixlen{YType::uint32, "cefLMPrefixLen"},
    ceflmprefixrowstatus{YType::enumeration, "cefLMPrefixRowStatus"},
    ceflmprefixstate{YType::enumeration, "cefLMPrefixState"}
{
    yang_name = "cefLMPrefixEntry"; yang_parent_name = "cefLMPrefixTable";
}

CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry::~Ceflmprefixentry()
{
}

bool CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry::has_data() const
{
    return entphysicalindex.is_set
	|| ceflmprefixdestaddrtype.is_set
	|| ceflmprefixdestaddr.is_set
	|| ceflmprefixaddr.is_set
	|| ceflmprefixlen.is_set
	|| ceflmprefixrowstatus.is_set
	|| ceflmprefixstate.is_set;
}

bool CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceflmprefixdestaddrtype.yfilter)
	|| ydk::is_set(ceflmprefixdestaddr.yfilter)
	|| ydk::is_set(ceflmprefixaddr.yfilter)
	|| ydk::is_set(ceflmprefixlen.yfilter)
	|| ydk::is_set(ceflmprefixrowstatus.yfilter)
	|| ydk::is_set(ceflmprefixstate.yfilter);
}

std::string CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefLMPrefixEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cefLMPrefixDestAddrType='" <<ceflmprefixdestaddrtype <<"']" <<"[cefLMPrefixDestAddr='" <<ceflmprefixdestaddr <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefLMPrefixTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceflmprefixdestaddrtype.is_set || is_set(ceflmprefixdestaddrtype.yfilter)) leaf_name_data.push_back(ceflmprefixdestaddrtype.get_name_leafdata());
    if (ceflmprefixdestaddr.is_set || is_set(ceflmprefixdestaddr.yfilter)) leaf_name_data.push_back(ceflmprefixdestaddr.get_name_leafdata());
    if (ceflmprefixaddr.is_set || is_set(ceflmprefixaddr.yfilter)) leaf_name_data.push_back(ceflmprefixaddr.get_name_leafdata());
    if (ceflmprefixlen.is_set || is_set(ceflmprefixlen.yfilter)) leaf_name_data.push_back(ceflmprefixlen.get_name_leafdata());
    if (ceflmprefixrowstatus.is_set || is_set(ceflmprefixrowstatus.yfilter)) leaf_name_data.push_back(ceflmprefixrowstatus.get_name_leafdata());
    if (ceflmprefixstate.is_set || is_set(ceflmprefixstate.yfilter)) leaf_name_data.push_back(ceflmprefixstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cefLMPrefixState")
    {
        ceflmprefixstate = value;
        ceflmprefixstate.value_namespace = name_space;
        ceflmprefixstate.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cefLMPrefixState")
    {
        ceflmprefixstate.yfilter = yfilter;
    }
}

bool CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefLMPrefixDestAddrType" || name == "cefLMPrefixDestAddr" || name == "cefLMPrefixAddr" || name == "cefLMPrefixLen" || name == "cefLMPrefixRowStatus" || name == "cefLMPrefixState")
        return true;
    return false;
}

CiscoCefMib::Cefpathtable::Cefpathtable()
{
    yang_name = "cefPathTable"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Cefpathtable::~Cefpathtable()
{
}

bool CiscoCefMib::Cefpathtable::has_data() const
{
    for (std::size_t index=0; index<cefpathentry.size(); index++)
    {
        if(cefpathentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefpathtable::has_operation() const
{
    for (std::size_t index=0; index<cefpathentry.size(); index++)
    {
        if(cefpathentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCefMib::Cefpathtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefPathTable";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefpathtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefpathtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefPathEntry")
    {
        for(auto const & c : cefpathentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefpathtable::Cefpathentry>();
        c->parent = this;
        cefpathentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefpathtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefpathentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefpathtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::Cefpathtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCefMib::Cefpathtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefPathEntry")
        return true;
    return false;
}

CiscoCefMib::Cefpathtable::Cefpathentry::Cefpathentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefprefixtype{YType::enumeration, "cefPrefixType"},
    cefprefixaddr{YType::str, "cefPrefixAddr"},
    cefprefixlen{YType::str, "cefPrefixLen"},
    cefpathid{YType::int32, "cefPathId"},
    cefpathinterface{YType::int32, "cefPathInterface"},
    cefpathnexthopaddr{YType::str, "cefPathNextHopAddr"},
    cefpathrecursevrfname{YType::str, "cefPathRecurseVrfName"},
    cefpathtype{YType::enumeration, "cefPathType"}
{
    yang_name = "cefPathEntry"; yang_parent_name = "cefPathTable";
}

CiscoCefMib::Cefpathtable::Cefpathentry::~Cefpathentry()
{
}

bool CiscoCefMib::Cefpathtable::Cefpathentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefprefixtype.is_set
	|| cefprefixaddr.is_set
	|| cefprefixlen.is_set
	|| cefpathid.is_set
	|| cefpathinterface.is_set
	|| cefpathnexthopaddr.is_set
	|| cefpathrecursevrfname.is_set
	|| cefpathtype.is_set;
}

bool CiscoCefMib::Cefpathtable::Cefpathentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefprefixtype.yfilter)
	|| ydk::is_set(cefprefixaddr.yfilter)
	|| ydk::is_set(cefprefixlen.yfilter)
	|| ydk::is_set(cefpathid.yfilter)
	|| ydk::is_set(cefpathinterface.yfilter)
	|| ydk::is_set(cefpathnexthopaddr.yfilter)
	|| ydk::is_set(cefpathrecursevrfname.yfilter)
	|| ydk::is_set(cefpathtype.yfilter);
}

std::string CiscoCefMib::Cefpathtable::Cefpathentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefPathEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cefPrefixType='" <<cefprefixtype <<"']" <<"[cefPrefixAddr='" <<cefprefixaddr <<"']" <<"[cefPrefixLen='" <<cefprefixlen <<"']" <<"[cefPathId='" <<cefpathid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefpathtable::Cefpathentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefPathTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefprefixtype.is_set || is_set(cefprefixtype.yfilter)) leaf_name_data.push_back(cefprefixtype.get_name_leafdata());
    if (cefprefixaddr.is_set || is_set(cefprefixaddr.yfilter)) leaf_name_data.push_back(cefprefixaddr.get_name_leafdata());
    if (cefprefixlen.is_set || is_set(cefprefixlen.yfilter)) leaf_name_data.push_back(cefprefixlen.get_name_leafdata());
    if (cefpathid.is_set || is_set(cefpathid.yfilter)) leaf_name_data.push_back(cefpathid.get_name_leafdata());
    if (cefpathinterface.is_set || is_set(cefpathinterface.yfilter)) leaf_name_data.push_back(cefpathinterface.get_name_leafdata());
    if (cefpathnexthopaddr.is_set || is_set(cefpathnexthopaddr.yfilter)) leaf_name_data.push_back(cefpathnexthopaddr.get_name_leafdata());
    if (cefpathrecursevrfname.is_set || is_set(cefpathrecursevrfname.yfilter)) leaf_name_data.push_back(cefpathrecursevrfname.get_name_leafdata());
    if (cefpathtype.is_set || is_set(cefpathtype.yfilter)) leaf_name_data.push_back(cefpathtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefpathtable::Cefpathentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefpathtable::Cefpathentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Cefpathtable::Cefpathentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cefPathType")
    {
        cefpathtype = value;
        cefpathtype.value_namespace = name_space;
        cefpathtype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCefMib::Cefpathtable::Cefpathentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cefPathType")
    {
        cefpathtype.yfilter = yfilter;
    }
}

bool CiscoCefMib::Cefpathtable::Cefpathentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefPrefixType" || name == "cefPrefixAddr" || name == "cefPrefixLen" || name == "cefPathId" || name == "cefPathInterface" || name == "cefPathNextHopAddr" || name == "cefPathRecurseVrfName" || name == "cefPathType")
        return true;
    return false;
}

CiscoCefMib::Cefadjsummarytable::Cefadjsummarytable()
{
    yang_name = "cefAdjSummaryTable"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Cefadjsummarytable::~Cefadjsummarytable()
{
}

bool CiscoCefMib::Cefadjsummarytable::has_data() const
{
    for (std::size_t index=0; index<cefadjsummaryentry.size(); index++)
    {
        if(cefadjsummaryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefadjsummarytable::has_operation() const
{
    for (std::size_t index=0; index<cefadjsummaryentry.size(); index++)
    {
        if(cefadjsummaryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCefMib::Cefadjsummarytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefAdjSummaryTable";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefadjsummarytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefadjsummarytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefAdjSummaryEntry")
    {
        for(auto const & c : cefadjsummaryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry>();
        c->parent = this;
        cefadjsummaryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefadjsummarytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefadjsummaryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefadjsummarytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::Cefadjsummarytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCefMib::Cefadjsummarytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefAdjSummaryEntry")
        return true;
    return false;
}

CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry::Cefadjsummaryentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefadjsummarylinktype{YType::enumeration, "cefAdjSummaryLinkType"},
    cefadjsummarycomplete{YType::uint32, "cefAdjSummaryComplete"},
    cefadjsummaryfixup{YType::uint32, "cefAdjSummaryFixup"},
    cefadjsummaryincomplete{YType::uint32, "cefAdjSummaryIncomplete"},
    cefadjsummaryredirect{YType::uint32, "cefAdjSummaryRedirect"}
{
    yang_name = "cefAdjSummaryEntry"; yang_parent_name = "cefAdjSummaryTable";
}

CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry::~Cefadjsummaryentry()
{
}

bool CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefadjsummarylinktype.is_set
	|| cefadjsummarycomplete.is_set
	|| cefadjsummaryfixup.is_set
	|| cefadjsummaryincomplete.is_set
	|| cefadjsummaryredirect.is_set;
}

bool CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefadjsummarylinktype.yfilter)
	|| ydk::is_set(cefadjsummarycomplete.yfilter)
	|| ydk::is_set(cefadjsummaryfixup.yfilter)
	|| ydk::is_set(cefadjsummaryincomplete.yfilter)
	|| ydk::is_set(cefadjsummaryredirect.yfilter);
}

std::string CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefAdjSummaryEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cefAdjSummaryLinkType='" <<cefadjsummarylinktype <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefAdjSummaryTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefadjsummarylinktype.is_set || is_set(cefadjsummarylinktype.yfilter)) leaf_name_data.push_back(cefadjsummarylinktype.get_name_leafdata());
    if (cefadjsummarycomplete.is_set || is_set(cefadjsummarycomplete.yfilter)) leaf_name_data.push_back(cefadjsummarycomplete.get_name_leafdata());
    if (cefadjsummaryfixup.is_set || is_set(cefadjsummaryfixup.yfilter)) leaf_name_data.push_back(cefadjsummaryfixup.get_name_leafdata());
    if (cefadjsummaryincomplete.is_set || is_set(cefadjsummaryincomplete.yfilter)) leaf_name_data.push_back(cefadjsummaryincomplete.get_name_leafdata());
    if (cefadjsummaryredirect.is_set || is_set(cefadjsummaryredirect.yfilter)) leaf_name_data.push_back(cefadjsummaryredirect.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cefAdjSummaryFixup")
    {
        cefadjsummaryfixup = value;
        cefadjsummaryfixup.value_namespace = name_space;
        cefadjsummaryfixup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjSummaryIncomplete")
    {
        cefadjsummaryincomplete = value;
        cefadjsummaryincomplete.value_namespace = name_space;
        cefadjsummaryincomplete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjSummaryRedirect")
    {
        cefadjsummaryredirect = value;
        cefadjsummaryredirect.value_namespace = name_space;
        cefadjsummaryredirect.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cefAdjSummaryFixup")
    {
        cefadjsummaryfixup.yfilter = yfilter;
    }
    if(value_path == "cefAdjSummaryIncomplete")
    {
        cefadjsummaryincomplete.yfilter = yfilter;
    }
    if(value_path == "cefAdjSummaryRedirect")
    {
        cefadjsummaryredirect.yfilter = yfilter;
    }
}

bool CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefAdjSummaryLinkType" || name == "cefAdjSummaryComplete" || name == "cefAdjSummaryFixup" || name == "cefAdjSummaryIncomplete" || name == "cefAdjSummaryRedirect")
        return true;
    return false;
}

CiscoCefMib::Cefadjtable::Cefadjtable()
{
    yang_name = "cefAdjTable"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Cefadjtable::~Cefadjtable()
{
}

bool CiscoCefMib::Cefadjtable::has_data() const
{
    for (std::size_t index=0; index<cefadjentry.size(); index++)
    {
        if(cefadjentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefadjtable::has_operation() const
{
    for (std::size_t index=0; index<cefadjentry.size(); index++)
    {
        if(cefadjentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCefMib::Cefadjtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefAdjTable";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefadjtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefadjtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefAdjEntry")
    {
        for(auto const & c : cefadjentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefadjtable::Cefadjentry>();
        c->parent = this;
        cefadjentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefadjtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefadjentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefadjtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::Cefadjtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCefMib::Cefadjtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefAdjEntry")
        return true;
    return false;
}

CiscoCefMib::Cefadjtable::Cefadjentry::Cefadjentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ifindex{YType::str, "ifIndex"},
    cefadjnexthopaddrtype{YType::enumeration, "cefAdjNextHopAddrType"},
    cefadjnexthopaddr{YType::str, "cefAdjNextHopAddr"},
    cefadjconnid{YType::uint32, "cefAdjConnId"},
    cefadjsummarylinktype{YType::enumeration, "cefAdjSummaryLinkType"},
    cefadjbytes{YType::uint32, "cefAdjBytes"},
    cefadjencap{YType::str, "cefAdjEncap"},
    cefadjfixup{YType::str, "cefAdjFixup"},
    cefadjforwardinginfo{YType::str, "cefAdjForwardingInfo"},
    cefadjhcbytes{YType::uint64, "cefAdjHCBytes"},
    cefadjhcpkts{YType::uint64, "cefAdjHCPkts"},
    cefadjmtu{YType::uint32, "cefAdjMTU"},
    cefadjpkts{YType::uint32, "cefAdjPkts"},
    cefadjsource{YType::bits, "cefAdjSource"}
{
    yang_name = "cefAdjEntry"; yang_parent_name = "cefAdjTable";
}

CiscoCefMib::Cefadjtable::Cefadjentry::~Cefadjentry()
{
}

bool CiscoCefMib::Cefadjtable::Cefadjentry::has_data() const
{
    return entphysicalindex.is_set
	|| ifindex.is_set
	|| cefadjnexthopaddrtype.is_set
	|| cefadjnexthopaddr.is_set
	|| cefadjconnid.is_set
	|| cefadjsummarylinktype.is_set
	|| cefadjbytes.is_set
	|| cefadjencap.is_set
	|| cefadjfixup.is_set
	|| cefadjforwardinginfo.is_set
	|| cefadjhcbytes.is_set
	|| cefadjhcpkts.is_set
	|| cefadjmtu.is_set
	|| cefadjpkts.is_set
	|| cefadjsource.is_set;
}

bool CiscoCefMib::Cefadjtable::Cefadjentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cefadjnexthopaddrtype.yfilter)
	|| ydk::is_set(cefadjnexthopaddr.yfilter)
	|| ydk::is_set(cefadjconnid.yfilter)
	|| ydk::is_set(cefadjsummarylinktype.yfilter)
	|| ydk::is_set(cefadjbytes.yfilter)
	|| ydk::is_set(cefadjencap.yfilter)
	|| ydk::is_set(cefadjfixup.yfilter)
	|| ydk::is_set(cefadjforwardinginfo.yfilter)
	|| ydk::is_set(cefadjhcbytes.yfilter)
	|| ydk::is_set(cefadjhcpkts.yfilter)
	|| ydk::is_set(cefadjmtu.yfilter)
	|| ydk::is_set(cefadjpkts.yfilter)
	|| ydk::is_set(cefadjsource.yfilter);
}

std::string CiscoCefMib::Cefadjtable::Cefadjentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefAdjEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[ifIndex='" <<ifindex <<"']" <<"[cefAdjNextHopAddrType='" <<cefadjnexthopaddrtype <<"']" <<"[cefAdjNextHopAddr='" <<cefadjnexthopaddr <<"']" <<"[cefAdjConnId='" <<cefadjconnid <<"']" <<"[cefAdjSummaryLinkType='" <<cefadjsummarylinktype <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefadjtable::Cefadjentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefAdjTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cefadjnexthopaddrtype.is_set || is_set(cefadjnexthopaddrtype.yfilter)) leaf_name_data.push_back(cefadjnexthopaddrtype.get_name_leafdata());
    if (cefadjnexthopaddr.is_set || is_set(cefadjnexthopaddr.yfilter)) leaf_name_data.push_back(cefadjnexthopaddr.get_name_leafdata());
    if (cefadjconnid.is_set || is_set(cefadjconnid.yfilter)) leaf_name_data.push_back(cefadjconnid.get_name_leafdata());
    if (cefadjsummarylinktype.is_set || is_set(cefadjsummarylinktype.yfilter)) leaf_name_data.push_back(cefadjsummarylinktype.get_name_leafdata());
    if (cefadjbytes.is_set || is_set(cefadjbytes.yfilter)) leaf_name_data.push_back(cefadjbytes.get_name_leafdata());
    if (cefadjencap.is_set || is_set(cefadjencap.yfilter)) leaf_name_data.push_back(cefadjencap.get_name_leafdata());
    if (cefadjfixup.is_set || is_set(cefadjfixup.yfilter)) leaf_name_data.push_back(cefadjfixup.get_name_leafdata());
    if (cefadjforwardinginfo.is_set || is_set(cefadjforwardinginfo.yfilter)) leaf_name_data.push_back(cefadjforwardinginfo.get_name_leafdata());
    if (cefadjhcbytes.is_set || is_set(cefadjhcbytes.yfilter)) leaf_name_data.push_back(cefadjhcbytes.get_name_leafdata());
    if (cefadjhcpkts.is_set || is_set(cefadjhcpkts.yfilter)) leaf_name_data.push_back(cefadjhcpkts.get_name_leafdata());
    if (cefadjmtu.is_set || is_set(cefadjmtu.yfilter)) leaf_name_data.push_back(cefadjmtu.get_name_leafdata());
    if (cefadjpkts.is_set || is_set(cefadjpkts.yfilter)) leaf_name_data.push_back(cefadjpkts.get_name_leafdata());
    if (cefadjsource.is_set || is_set(cefadjsource.yfilter)) leaf_name_data.push_back(cefadjsource.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefadjtable::Cefadjentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefadjtable::Cefadjentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Cefadjtable::Cefadjentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cefAdjBytes")
    {
        cefadjbytes = value;
        cefadjbytes.value_namespace = name_space;
        cefadjbytes.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cefAdjForwardingInfo")
    {
        cefadjforwardinginfo = value;
        cefadjforwardinginfo.value_namespace = name_space;
        cefadjforwardinginfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjHCBytes")
    {
        cefadjhcbytes = value;
        cefadjhcbytes.value_namespace = name_space;
        cefadjhcbytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjHCPkts")
    {
        cefadjhcpkts = value;
        cefadjhcpkts.value_namespace = name_space;
        cefadjhcpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjMTU")
    {
        cefadjmtu = value;
        cefadjmtu.value_namespace = name_space;
        cefadjmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjPkts")
    {
        cefadjpkts = value;
        cefadjpkts.value_namespace = name_space;
        cefadjpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefAdjSource")
    {
        cefadjsource[value] = true;
    }
}

void CiscoCefMib::Cefadjtable::Cefadjentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cefAdjBytes")
    {
        cefadjbytes.yfilter = yfilter;
    }
    if(value_path == "cefAdjEncap")
    {
        cefadjencap.yfilter = yfilter;
    }
    if(value_path == "cefAdjFixup")
    {
        cefadjfixup.yfilter = yfilter;
    }
    if(value_path == "cefAdjForwardingInfo")
    {
        cefadjforwardinginfo.yfilter = yfilter;
    }
    if(value_path == "cefAdjHCBytes")
    {
        cefadjhcbytes.yfilter = yfilter;
    }
    if(value_path == "cefAdjHCPkts")
    {
        cefadjhcpkts.yfilter = yfilter;
    }
    if(value_path == "cefAdjMTU")
    {
        cefadjmtu.yfilter = yfilter;
    }
    if(value_path == "cefAdjPkts")
    {
        cefadjpkts.yfilter = yfilter;
    }
    if(value_path == "cefAdjSource")
    {
        cefadjsource.yfilter = yfilter;
    }
}

bool CiscoCefMib::Cefadjtable::Cefadjentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "ifIndex" || name == "cefAdjNextHopAddrType" || name == "cefAdjNextHopAddr" || name == "cefAdjConnId" || name == "cefAdjSummaryLinkType" || name == "cefAdjBytes" || name == "cefAdjEncap" || name == "cefAdjFixup" || name == "cefAdjForwardingInfo" || name == "cefAdjHCBytes" || name == "cefAdjHCPkts" || name == "cefAdjMTU" || name == "cefAdjPkts" || name == "cefAdjSource")
        return true;
    return false;
}

CiscoCefMib::Ceffeselectiontable::Ceffeselectiontable()
{
    yang_name = "cefFESelectionTable"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Ceffeselectiontable::~Ceffeselectiontable()
{
}

bool CiscoCefMib::Ceffeselectiontable::has_data() const
{
    for (std::size_t index=0; index<ceffeselectionentry.size(); index++)
    {
        if(ceffeselectionentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Ceffeselectiontable::has_operation() const
{
    for (std::size_t index=0; index<ceffeselectionentry.size(); index++)
    {
        if(ceffeselectionentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCefMib::Ceffeselectiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefFESelectionTable";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Ceffeselectiontable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Ceffeselectiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefFESelectionEntry")
    {
        for(auto const & c : ceffeselectionentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry>();
        c->parent = this;
        ceffeselectionentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Ceffeselectiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceffeselectionentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Ceffeselectiontable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::Ceffeselectiontable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCefMib::Ceffeselectiontable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefFESelectionEntry")
        return true;
    return false;
}

CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry::Ceffeselectionentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceffeselectionname{YType::str, "cefFESelectionName"},
    ceffeselectionid{YType::int32, "cefFESelectionId"},
    ceffeselectionadjconnid{YType::uint32, "cefFESelectionAdjConnId"},
    ceffeselectionadjinterface{YType::int32, "cefFESelectionAdjInterface"},
    ceffeselectionadjlinktype{YType::enumeration, "cefFESelectionAdjLinkType"},
    ceffeselectionadjnexthopaddr{YType::str, "cefFESelectionAdjNextHopAddr"},
    ceffeselectionadjnexthopaddrtype{YType::enumeration, "cefFESelectionAdjNextHopAddrType"},
    ceffeselectionlabels{YType::str, "cefFESelectionLabels"},
    ceffeselectionspecial{YType::enumeration, "cefFESelectionSpecial"},
    ceffeselectionvrfname{YType::str, "cefFESelectionVrfName"},
    ceffeselectionweight{YType::uint32, "cefFESelectionWeight"}
{
    yang_name = "cefFESelectionEntry"; yang_parent_name = "cefFESelectionTable";
}

CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry::~Ceffeselectionentry()
{
}

bool CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry::has_data() const
{
    return entphysicalindex.is_set
	|| ceffeselectionname.is_set
	|| ceffeselectionid.is_set
	|| ceffeselectionadjconnid.is_set
	|| ceffeselectionadjinterface.is_set
	|| ceffeselectionadjlinktype.is_set
	|| ceffeselectionadjnexthopaddr.is_set
	|| ceffeselectionadjnexthopaddrtype.is_set
	|| ceffeselectionlabels.is_set
	|| ceffeselectionspecial.is_set
	|| ceffeselectionvrfname.is_set
	|| ceffeselectionweight.is_set;
}

bool CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceffeselectionname.yfilter)
	|| ydk::is_set(ceffeselectionid.yfilter)
	|| ydk::is_set(ceffeselectionadjconnid.yfilter)
	|| ydk::is_set(ceffeselectionadjinterface.yfilter)
	|| ydk::is_set(ceffeselectionadjlinktype.yfilter)
	|| ydk::is_set(ceffeselectionadjnexthopaddr.yfilter)
	|| ydk::is_set(ceffeselectionadjnexthopaddrtype.yfilter)
	|| ydk::is_set(ceffeselectionlabels.yfilter)
	|| ydk::is_set(ceffeselectionspecial.yfilter)
	|| ydk::is_set(ceffeselectionvrfname.yfilter)
	|| ydk::is_set(ceffeselectionweight.yfilter);
}

std::string CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefFESelectionEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cefFESelectionName='" <<ceffeselectionname <<"']" <<"[cefFESelectionId='" <<ceffeselectionid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefFESelectionTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffeselectionname.is_set || is_set(ceffeselectionname.yfilter)) leaf_name_data.push_back(ceffeselectionname.get_name_leafdata());
    if (ceffeselectionid.is_set || is_set(ceffeselectionid.yfilter)) leaf_name_data.push_back(ceffeselectionid.get_name_leafdata());
    if (ceffeselectionadjconnid.is_set || is_set(ceffeselectionadjconnid.yfilter)) leaf_name_data.push_back(ceffeselectionadjconnid.get_name_leafdata());
    if (ceffeselectionadjinterface.is_set || is_set(ceffeselectionadjinterface.yfilter)) leaf_name_data.push_back(ceffeselectionadjinterface.get_name_leafdata());
    if (ceffeselectionadjlinktype.is_set || is_set(ceffeselectionadjlinktype.yfilter)) leaf_name_data.push_back(ceffeselectionadjlinktype.get_name_leafdata());
    if (ceffeselectionadjnexthopaddr.is_set || is_set(ceffeselectionadjnexthopaddr.yfilter)) leaf_name_data.push_back(ceffeselectionadjnexthopaddr.get_name_leafdata());
    if (ceffeselectionadjnexthopaddrtype.is_set || is_set(ceffeselectionadjnexthopaddrtype.yfilter)) leaf_name_data.push_back(ceffeselectionadjnexthopaddrtype.get_name_leafdata());
    if (ceffeselectionlabels.is_set || is_set(ceffeselectionlabels.yfilter)) leaf_name_data.push_back(ceffeselectionlabels.get_name_leafdata());
    if (ceffeselectionspecial.is_set || is_set(ceffeselectionspecial.yfilter)) leaf_name_data.push_back(ceffeselectionspecial.get_name_leafdata());
    if (ceffeselectionvrfname.is_set || is_set(ceffeselectionvrfname.yfilter)) leaf_name_data.push_back(ceffeselectionvrfname.get_name_leafdata());
    if (ceffeselectionweight.is_set || is_set(ceffeselectionweight.yfilter)) leaf_name_data.push_back(ceffeselectionweight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cefFESelectionAdjConnId")
    {
        ceffeselectionadjconnid = value;
        ceffeselectionadjconnid.value_namespace = name_space;
        ceffeselectionadjconnid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFESelectionAdjInterface")
    {
        ceffeselectionadjinterface = value;
        ceffeselectionadjinterface.value_namespace = name_space;
        ceffeselectionadjinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFESelectionAdjLinkType")
    {
        ceffeselectionadjlinktype = value;
        ceffeselectionadjlinktype.value_namespace = name_space;
        ceffeselectionadjlinktype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFESelectionAdjNextHopAddr")
    {
        ceffeselectionadjnexthopaddr = value;
        ceffeselectionadjnexthopaddr.value_namespace = name_space;
        ceffeselectionadjnexthopaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFESelectionAdjNextHopAddrType")
    {
        ceffeselectionadjnexthopaddrtype = value;
        ceffeselectionadjnexthopaddrtype.value_namespace = name_space;
        ceffeselectionadjnexthopaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFESelectionLabels")
    {
        ceffeselectionlabels = value;
        ceffeselectionlabels.value_namespace = name_space;
        ceffeselectionlabels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefFESelectionSpecial")
    {
        ceffeselectionspecial = value;
        ceffeselectionspecial.value_namespace = name_space;
        ceffeselectionspecial.value_namespace_prefix = name_space_prefix;
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

void CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cefFESelectionAdjConnId")
    {
        ceffeselectionadjconnid.yfilter = yfilter;
    }
    if(value_path == "cefFESelectionAdjInterface")
    {
        ceffeselectionadjinterface.yfilter = yfilter;
    }
    if(value_path == "cefFESelectionAdjLinkType")
    {
        ceffeselectionadjlinktype.yfilter = yfilter;
    }
    if(value_path == "cefFESelectionAdjNextHopAddr")
    {
        ceffeselectionadjnexthopaddr.yfilter = yfilter;
    }
    if(value_path == "cefFESelectionAdjNextHopAddrType")
    {
        ceffeselectionadjnexthopaddrtype.yfilter = yfilter;
    }
    if(value_path == "cefFESelectionLabels")
    {
        ceffeselectionlabels.yfilter = yfilter;
    }
    if(value_path == "cefFESelectionSpecial")
    {
        ceffeselectionspecial.yfilter = yfilter;
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

bool CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefFESelectionName" || name == "cefFESelectionId" || name == "cefFESelectionAdjConnId" || name == "cefFESelectionAdjInterface" || name == "cefFESelectionAdjLinkType" || name == "cefFESelectionAdjNextHopAddr" || name == "cefFESelectionAdjNextHopAddrType" || name == "cefFESelectionLabels" || name == "cefFESelectionSpecial" || name == "cefFESelectionVrfName" || name == "cefFESelectionWeight")
        return true;
    return false;
}

CiscoCefMib::Cefcfgtable::Cefcfgtable()
{
    yang_name = "cefCfgTable"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Cefcfgtable::~Cefcfgtable()
{
}

bool CiscoCefMib::Cefcfgtable::has_data() const
{
    for (std::size_t index=0; index<cefcfgentry.size(); index++)
    {
        if(cefcfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefcfgtable::has_operation() const
{
    for (std::size_t index=0; index<cefcfgentry.size(); index++)
    {
        if(cefcfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCefMib::Cefcfgtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefCfgTable";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefcfgtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefcfgtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefCfgEntry")
    {
        for(auto const & c : cefcfgentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefcfgtable::Cefcfgentry>();
        c->parent = this;
        cefcfgentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefcfgtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcfgentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefcfgtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::Cefcfgtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCefMib::Cefcfgtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefCfgEntry")
        return true;
    return false;
}

CiscoCefMib::Cefcfgtable::Cefcfgentry::Cefcfgentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    cefcfgaccountingmap{YType::bits, "cefCfgAccountingMap"},
    cefcfgadminstate{YType::enumeration, "cefCfgAdminState"},
    cefcfgdistributionadminstate{YType::enumeration, "cefCfgDistributionAdminState"},
    cefcfgdistributionoperstate{YType::enumeration, "cefCfgDistributionOperState"},
    cefcfgloadsharingalgorithm{YType::enumeration, "cefCfgLoadSharingAlgorithm"},
    cefcfgloadsharingid{YType::uint32, "cefCfgLoadSharingID"},
    cefcfgoperstate{YType::enumeration, "cefCfgOperState"},
    cefcfgtrafficstatsloadinterval{YType::uint32, "cefCfgTrafficStatsLoadInterval"},
    cefcfgtrafficstatsupdaterate{YType::uint32, "cefCfgTrafficStatsUpdateRate"}
{
    yang_name = "cefCfgEntry"; yang_parent_name = "cefCfgTable";
}

CiscoCefMib::Cefcfgtable::Cefcfgentry::~Cefcfgentry()
{
}

bool CiscoCefMib::Cefcfgtable::Cefcfgentry::has_data() const
{
    return entphysicalindex.is_set
	|| ceffibipversion.is_set
	|| cefcfgaccountingmap.is_set
	|| cefcfgadminstate.is_set
	|| cefcfgdistributionadminstate.is_set
	|| cefcfgdistributionoperstate.is_set
	|| cefcfgloadsharingalgorithm.is_set
	|| cefcfgloadsharingid.is_set
	|| cefcfgoperstate.is_set
	|| cefcfgtrafficstatsloadinterval.is_set
	|| cefcfgtrafficstatsupdaterate.is_set;
}

bool CiscoCefMib::Cefcfgtable::Cefcfgentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(cefcfgaccountingmap.yfilter)
	|| ydk::is_set(cefcfgadminstate.yfilter)
	|| ydk::is_set(cefcfgdistributionadminstate.yfilter)
	|| ydk::is_set(cefcfgdistributionoperstate.yfilter)
	|| ydk::is_set(cefcfgloadsharingalgorithm.yfilter)
	|| ydk::is_set(cefcfgloadsharingid.yfilter)
	|| ydk::is_set(cefcfgoperstate.yfilter)
	|| ydk::is_set(cefcfgtrafficstatsloadinterval.yfilter)
	|| ydk::is_set(cefcfgtrafficstatsupdaterate.yfilter);
}

std::string CiscoCefMib::Cefcfgtable::Cefcfgentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefCfgEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cefFIBIpVersion='" <<ceffibipversion <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefcfgtable::Cefcfgentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefCfgTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefcfgaccountingmap.is_set || is_set(cefcfgaccountingmap.yfilter)) leaf_name_data.push_back(cefcfgaccountingmap.get_name_leafdata());
    if (cefcfgadminstate.is_set || is_set(cefcfgadminstate.yfilter)) leaf_name_data.push_back(cefcfgadminstate.get_name_leafdata());
    if (cefcfgdistributionadminstate.is_set || is_set(cefcfgdistributionadminstate.yfilter)) leaf_name_data.push_back(cefcfgdistributionadminstate.get_name_leafdata());
    if (cefcfgdistributionoperstate.is_set || is_set(cefcfgdistributionoperstate.yfilter)) leaf_name_data.push_back(cefcfgdistributionoperstate.get_name_leafdata());
    if (cefcfgloadsharingalgorithm.is_set || is_set(cefcfgloadsharingalgorithm.yfilter)) leaf_name_data.push_back(cefcfgloadsharingalgorithm.get_name_leafdata());
    if (cefcfgloadsharingid.is_set || is_set(cefcfgloadsharingid.yfilter)) leaf_name_data.push_back(cefcfgloadsharingid.get_name_leafdata());
    if (cefcfgoperstate.is_set || is_set(cefcfgoperstate.yfilter)) leaf_name_data.push_back(cefcfgoperstate.get_name_leafdata());
    if (cefcfgtrafficstatsloadinterval.is_set || is_set(cefcfgtrafficstatsloadinterval.yfilter)) leaf_name_data.push_back(cefcfgtrafficstatsloadinterval.get_name_leafdata());
    if (cefcfgtrafficstatsupdaterate.is_set || is_set(cefcfgtrafficstatsupdaterate.yfilter)) leaf_name_data.push_back(cefcfgtrafficstatsupdaterate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefcfgtable::Cefcfgentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefcfgtable::Cefcfgentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Cefcfgtable::Cefcfgentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cefCfgAccountingMap")
    {
        cefcfgaccountingmap[value] = true;
    }
    if(value_path == "cefCfgAdminState")
    {
        cefcfgadminstate = value;
        cefcfgadminstate.value_namespace = name_space;
        cefcfgadminstate.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cefCfgOperState")
    {
        cefcfgoperstate = value;
        cefcfgoperstate.value_namespace = name_space;
        cefcfgoperstate.value_namespace_prefix = name_space_prefix;
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

void CiscoCefMib::Cefcfgtable::Cefcfgentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion.yfilter = yfilter;
    }
    if(value_path == "cefCfgAccountingMap")
    {
        cefcfgaccountingmap.yfilter = yfilter;
    }
    if(value_path == "cefCfgAdminState")
    {
        cefcfgadminstate.yfilter = yfilter;
    }
    if(value_path == "cefCfgDistributionAdminState")
    {
        cefcfgdistributionadminstate.yfilter = yfilter;
    }
    if(value_path == "cefCfgDistributionOperState")
    {
        cefcfgdistributionoperstate.yfilter = yfilter;
    }
    if(value_path == "cefCfgLoadSharingAlgorithm")
    {
        cefcfgloadsharingalgorithm.yfilter = yfilter;
    }
    if(value_path == "cefCfgLoadSharingID")
    {
        cefcfgloadsharingid.yfilter = yfilter;
    }
    if(value_path == "cefCfgOperState")
    {
        cefcfgoperstate.yfilter = yfilter;
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

bool CiscoCefMib::Cefcfgtable::Cefcfgentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefFIBIpVersion" || name == "cefCfgAccountingMap" || name == "cefCfgAdminState" || name == "cefCfgDistributionAdminState" || name == "cefCfgDistributionOperState" || name == "cefCfgLoadSharingAlgorithm" || name == "cefCfgLoadSharingID" || name == "cefCfgOperState" || name == "cefCfgTrafficStatsLoadInterval" || name == "cefCfgTrafficStatsUpdateRate")
        return true;
    return false;
}

CiscoCefMib::Cefresourcetable::Cefresourcetable()
{
    yang_name = "cefResourceTable"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Cefresourcetable::~Cefresourcetable()
{
}

bool CiscoCefMib::Cefresourcetable::has_data() const
{
    for (std::size_t index=0; index<cefresourceentry.size(); index++)
    {
        if(cefresourceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefresourcetable::has_operation() const
{
    for (std::size_t index=0; index<cefresourceentry.size(); index++)
    {
        if(cefresourceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCefMib::Cefresourcetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefResourceTable";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefresourcetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefresourcetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefResourceEntry")
    {
        for(auto const & c : cefresourceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefresourcetable::Cefresourceentry>();
        c->parent = this;
        cefresourceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefresourcetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefresourceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefresourcetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::Cefresourcetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCefMib::Cefresourcetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefResourceEntry")
        return true;
    return false;
}

CiscoCefMib::Cefresourcetable::Cefresourceentry::Cefresourceentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cefresourcefailurereason{YType::enumeration, "cefResourceFailureReason"},
    cefresourcememoryused{YType::uint32, "cefResourceMemoryUsed"}
{
    yang_name = "cefResourceEntry"; yang_parent_name = "cefResourceTable";
}

CiscoCefMib::Cefresourcetable::Cefresourceentry::~Cefresourceentry()
{
}

bool CiscoCefMib::Cefresourcetable::Cefresourceentry::has_data() const
{
    return entphysicalindex.is_set
	|| cefresourcefailurereason.is_set
	|| cefresourcememoryused.is_set;
}

bool CiscoCefMib::Cefresourcetable::Cefresourceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(cefresourcefailurereason.yfilter)
	|| ydk::is_set(cefresourcememoryused.yfilter);
}

std::string CiscoCefMib::Cefresourcetable::Cefresourceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefResourceEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefresourcetable::Cefresourceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefResourceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefresourcefailurereason.is_set || is_set(cefresourcefailurereason.yfilter)) leaf_name_data.push_back(cefresourcefailurereason.get_name_leafdata());
    if (cefresourcememoryused.is_set || is_set(cefresourcememoryused.yfilter)) leaf_name_data.push_back(cefresourcememoryused.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefresourcetable::Cefresourceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefresourcetable::Cefresourceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Cefresourcetable::Cefresourceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
        entphysicalindex.value_namespace = name_space;
        entphysicalindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefResourceFailureReason")
    {
        cefresourcefailurereason = value;
        cefresourcefailurereason.value_namespace = name_space;
        cefresourcefailurereason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefResourceMemoryUsed")
    {
        cefresourcememoryused = value;
        cefresourcememoryused.value_namespace = name_space;
        cefresourcememoryused.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCefMib::Cefresourcetable::Cefresourceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefResourceFailureReason")
    {
        cefresourcefailurereason.yfilter = yfilter;
    }
    if(value_path == "cefResourceMemoryUsed")
    {
        cefresourcememoryused.yfilter = yfilter;
    }
}

bool CiscoCefMib::Cefresourcetable::Cefresourceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefResourceFailureReason" || name == "cefResourceMemoryUsed")
        return true;
    return false;
}

CiscoCefMib::Cefinttable::Cefinttable()
{
    yang_name = "cefIntTable"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Cefinttable::~Cefinttable()
{
}

bool CiscoCefMib::Cefinttable::has_data() const
{
    for (std::size_t index=0; index<cefintentry.size(); index++)
    {
        if(cefintentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefinttable::has_operation() const
{
    for (std::size_t index=0; index<cefintentry.size(); index++)
    {
        if(cefintentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCefMib::Cefinttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefIntTable";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefinttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefinttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefIntEntry")
    {
        for(auto const & c : cefintentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefinttable::Cefintentry>();
        c->parent = this;
        cefintentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefinttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefintentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefinttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::Cefinttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCefMib::Cefinttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefIntEntry")
        return true;
    return false;
}

CiscoCefMib::Cefinttable::Cefintentry::Cefintentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    ifindex{YType::str, "ifIndex"},
    cefintloadsharing{YType::enumeration, "cefIntLoadSharing"},
    cefintnonrecursiveaccouting{YType::enumeration, "cefIntNonrecursiveAccouting"},
    cefintswitchingstate{YType::enumeration, "cefIntSwitchingState"}
{
    yang_name = "cefIntEntry"; yang_parent_name = "cefIntTable";
}

CiscoCefMib::Cefinttable::Cefintentry::~Cefintentry()
{
}

bool CiscoCefMib::Cefinttable::Cefintentry::has_data() const
{
    return entphysicalindex.is_set
	|| ceffibipversion.is_set
	|| ifindex.is_set
	|| cefintloadsharing.is_set
	|| cefintnonrecursiveaccouting.is_set
	|| cefintswitchingstate.is_set;
}

bool CiscoCefMib::Cefinttable::Cefintentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cefintloadsharing.yfilter)
	|| ydk::is_set(cefintnonrecursiveaccouting.yfilter)
	|| ydk::is_set(cefintswitchingstate.yfilter);
}

std::string CiscoCefMib::Cefinttable::Cefintentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefIntEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cefFIBIpVersion='" <<ceffibipversion <<"']" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefinttable::Cefintentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefIntTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cefintloadsharing.is_set || is_set(cefintloadsharing.yfilter)) leaf_name_data.push_back(cefintloadsharing.get_name_leafdata());
    if (cefintnonrecursiveaccouting.is_set || is_set(cefintnonrecursiveaccouting.yfilter)) leaf_name_data.push_back(cefintnonrecursiveaccouting.get_name_leafdata());
    if (cefintswitchingstate.is_set || is_set(cefintswitchingstate.yfilter)) leaf_name_data.push_back(cefintswitchingstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefinttable::Cefintentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefinttable::Cefintentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Cefinttable::Cefintentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cefIntSwitchingState")
    {
        cefintswitchingstate = value;
        cefintswitchingstate.value_namespace = name_space;
        cefintswitchingstate.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCefMib::Cefinttable::Cefintentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cefIntLoadSharing")
    {
        cefintloadsharing.yfilter = yfilter;
    }
    if(value_path == "cefIntNonrecursiveAccouting")
    {
        cefintnonrecursiveaccouting.yfilter = yfilter;
    }
    if(value_path == "cefIntSwitchingState")
    {
        cefintswitchingstate.yfilter = yfilter;
    }
}

bool CiscoCefMib::Cefinttable::Cefintentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefFIBIpVersion" || name == "ifIndex" || name == "cefIntLoadSharing" || name == "cefIntNonrecursiveAccouting" || name == "cefIntSwitchingState")
        return true;
    return false;
}

CiscoCefMib::Cefpeertable::Cefpeertable()
{
    yang_name = "cefPeerTable"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Cefpeertable::~Cefpeertable()
{
}

bool CiscoCefMib::Cefpeertable::has_data() const
{
    for (std::size_t index=0; index<cefpeerentry.size(); index++)
    {
        if(cefpeerentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefpeertable::has_operation() const
{
    for (std::size_t index=0; index<cefpeerentry.size(); index++)
    {
        if(cefpeerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCefMib::Cefpeertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefPeerTable";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefpeertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefpeertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefPeerEntry")
    {
        for(auto const & c : cefpeerentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefpeertable::Cefpeerentry>();
        c->parent = this;
        cefpeerentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefpeertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefpeerentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefpeertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::Cefpeertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCefMib::Cefpeertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefPeerEntry")
        return true;
    return false;
}

CiscoCefMib::Cefpeertable::Cefpeerentry::Cefpeerentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    entpeerphysicalindex{YType::int32, "entPeerPhysicalIndex"},
    cefpeernumberofresets{YType::uint32, "cefPeerNumberOfResets"},
    cefpeeroperstate{YType::enumeration, "cefPeerOperState"}
{
    yang_name = "cefPeerEntry"; yang_parent_name = "cefPeerTable";
}

CiscoCefMib::Cefpeertable::Cefpeerentry::~Cefpeerentry()
{
}

bool CiscoCefMib::Cefpeertable::Cefpeerentry::has_data() const
{
    return entphysicalindex.is_set
	|| entpeerphysicalindex.is_set
	|| cefpeernumberofresets.is_set
	|| cefpeeroperstate.is_set;
}

bool CiscoCefMib::Cefpeertable::Cefpeerentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(entpeerphysicalindex.yfilter)
	|| ydk::is_set(cefpeernumberofresets.yfilter)
	|| ydk::is_set(cefpeeroperstate.yfilter);
}

std::string CiscoCefMib::Cefpeertable::Cefpeerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefPeerEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[entPeerPhysicalIndex='" <<entpeerphysicalindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefpeertable::Cefpeerentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefPeerTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entpeerphysicalindex.is_set || is_set(entpeerphysicalindex.yfilter)) leaf_name_data.push_back(entpeerphysicalindex.get_name_leafdata());
    if (cefpeernumberofresets.is_set || is_set(cefpeernumberofresets.yfilter)) leaf_name_data.push_back(cefpeernumberofresets.get_name_leafdata());
    if (cefpeeroperstate.is_set || is_set(cefpeeroperstate.yfilter)) leaf_name_data.push_back(cefpeeroperstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefpeertable::Cefpeerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefpeertable::Cefpeerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Cefpeertable::Cefpeerentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cefPeerNumberOfResets")
    {
        cefpeernumberofresets = value;
        cefpeernumberofresets.value_namespace = name_space;
        cefpeernumberofresets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefPeerOperState")
    {
        cefpeeroperstate = value;
        cefpeeroperstate.value_namespace = name_space;
        cefpeeroperstate.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCefMib::Cefpeertable::Cefpeerentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex.yfilter = yfilter;
    }
    if(value_path == "entPeerPhysicalIndex")
    {
        entpeerphysicalindex.yfilter = yfilter;
    }
    if(value_path == "cefPeerNumberOfResets")
    {
        cefpeernumberofresets.yfilter = yfilter;
    }
    if(value_path == "cefPeerOperState")
    {
        cefpeeroperstate.yfilter = yfilter;
    }
}

bool CiscoCefMib::Cefpeertable::Cefpeerentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "entPeerPhysicalIndex" || name == "cefPeerNumberOfResets" || name == "cefPeerOperState")
        return true;
    return false;
}

CiscoCefMib::Cefpeerfibtable::Cefpeerfibtable()
{
    yang_name = "cefPeerFIBTable"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Cefpeerfibtable::~Cefpeerfibtable()
{
}

bool CiscoCefMib::Cefpeerfibtable::has_data() const
{
    for (std::size_t index=0; index<cefpeerfibentry.size(); index++)
    {
        if(cefpeerfibentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefpeerfibtable::has_operation() const
{
    for (std::size_t index=0; index<cefpeerfibentry.size(); index++)
    {
        if(cefpeerfibentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCefMib::Cefpeerfibtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefPeerFIBTable";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefpeerfibtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefpeerfibtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefPeerFIBEntry")
    {
        for(auto const & c : cefpeerfibentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry>();
        c->parent = this;
        cefpeerfibentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefpeerfibtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefpeerfibentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefpeerfibtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::Cefpeerfibtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCefMib::Cefpeerfibtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefPeerFIBEntry")
        return true;
    return false;
}

CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::Cefpeerfibentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    entpeerphysicalindex{YType::str, "entPeerPhysicalIndex"},
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    cefpeerfiboperstate{YType::enumeration, "cefPeerFIBOperState"}
{
    yang_name = "cefPeerFIBEntry"; yang_parent_name = "cefPeerFIBTable";
}

CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::~Cefpeerfibentry()
{
}

bool CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::has_data() const
{
    return entphysicalindex.is_set
	|| entpeerphysicalindex.is_set
	|| ceffibipversion.is_set
	|| cefpeerfiboperstate.is_set;
}

bool CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(entpeerphysicalindex.yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(cefpeerfiboperstate.yfilter);
}

std::string CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefPeerFIBEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[entPeerPhysicalIndex='" <<entpeerphysicalindex <<"']" <<"[cefFIBIpVersion='" <<ceffibipversion <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefPeerFIBTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entpeerphysicalindex.is_set || is_set(entpeerphysicalindex.yfilter)) leaf_name_data.push_back(entpeerphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefpeerfiboperstate.is_set || is_set(cefpeerfiboperstate.yfilter)) leaf_name_data.push_back(cefpeerfiboperstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "entPeerPhysicalIndex" || name == "cefFIBIpVersion" || name == "cefPeerFIBOperState")
        return true;
    return false;
}

CiscoCefMib::Cefccglobaltable::Cefccglobaltable()
{
    yang_name = "cefCCGlobalTable"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Cefccglobaltable::~Cefccglobaltable()
{
}

bool CiscoCefMib::Cefccglobaltable::has_data() const
{
    for (std::size_t index=0; index<cefccglobalentry.size(); index++)
    {
        if(cefccglobalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefccglobaltable::has_operation() const
{
    for (std::size_t index=0; index<cefccglobalentry.size(); index++)
    {
        if(cefccglobalentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCefMib::Cefccglobaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefCCGlobalTable";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefccglobaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefccglobaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefCCGlobalEntry")
    {
        for(auto const & c : cefccglobalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefccglobaltable::Cefccglobalentry>();
        c->parent = this;
        cefccglobalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefccglobaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefccglobalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefccglobaltable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::Cefccglobaltable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCefMib::Cefccglobaltable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefCCGlobalEntry")
        return true;
    return false;
}

CiscoCefMib::Cefccglobaltable::Cefccglobalentry::Cefccglobalentry()
    :
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    cefccglobalautorepairdelay{YType::uint32, "cefCCGlobalAutoRepairDelay"},
    cefccglobalautorepairenabled{YType::boolean, "cefCCGlobalAutoRepairEnabled"},
    cefccglobalautorepairholddown{YType::uint32, "cefCCGlobalAutoRepairHoldDown"},
    cefccglobalerrormsgenabled{YType::boolean, "cefCCGlobalErrorMsgEnabled"},
    cefccglobalfullscanaction{YType::enumeration, "cefCCGlobalFullScanAction"},
    cefccglobalfullscanstatus{YType::enumeration, "cefCCGlobalFullScanStatus"}
{
    yang_name = "cefCCGlobalEntry"; yang_parent_name = "cefCCGlobalTable";
}

CiscoCefMib::Cefccglobaltable::Cefccglobalentry::~Cefccglobalentry()
{
}

bool CiscoCefMib::Cefccglobaltable::Cefccglobalentry::has_data() const
{
    return ceffibipversion.is_set
	|| cefccglobalautorepairdelay.is_set
	|| cefccglobalautorepairenabled.is_set
	|| cefccglobalautorepairholddown.is_set
	|| cefccglobalerrormsgenabled.is_set
	|| cefccglobalfullscanaction.is_set
	|| cefccglobalfullscanstatus.is_set;
}

bool CiscoCefMib::Cefccglobaltable::Cefccglobalentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(cefccglobalautorepairdelay.yfilter)
	|| ydk::is_set(cefccglobalautorepairenabled.yfilter)
	|| ydk::is_set(cefccglobalautorepairholddown.yfilter)
	|| ydk::is_set(cefccglobalerrormsgenabled.yfilter)
	|| ydk::is_set(cefccglobalfullscanaction.yfilter)
	|| ydk::is_set(cefccglobalfullscanstatus.yfilter);
}

std::string CiscoCefMib::Cefccglobaltable::Cefccglobalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefCCGlobalEntry" <<"[cefFIBIpVersion='" <<ceffibipversion <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefccglobaltable::Cefccglobalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefCCGlobalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefccglobalautorepairdelay.is_set || is_set(cefccglobalautorepairdelay.yfilter)) leaf_name_data.push_back(cefccglobalautorepairdelay.get_name_leafdata());
    if (cefccglobalautorepairenabled.is_set || is_set(cefccglobalautorepairenabled.yfilter)) leaf_name_data.push_back(cefccglobalautorepairenabled.get_name_leafdata());
    if (cefccglobalautorepairholddown.is_set || is_set(cefccglobalautorepairholddown.yfilter)) leaf_name_data.push_back(cefccglobalautorepairholddown.get_name_leafdata());
    if (cefccglobalerrormsgenabled.is_set || is_set(cefccglobalerrormsgenabled.yfilter)) leaf_name_data.push_back(cefccglobalerrormsgenabled.get_name_leafdata());
    if (cefccglobalfullscanaction.is_set || is_set(cefccglobalfullscanaction.yfilter)) leaf_name_data.push_back(cefccglobalfullscanaction.get_name_leafdata());
    if (cefccglobalfullscanstatus.is_set || is_set(cefccglobalfullscanstatus.yfilter)) leaf_name_data.push_back(cefccglobalfullscanstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefccglobaltable::Cefccglobalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefccglobaltable::Cefccglobalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Cefccglobaltable::Cefccglobalentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
        ceffibipversion.value_namespace = name_space;
        ceffibipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCGlobalAutoRepairDelay")
    {
        cefccglobalautorepairdelay = value;
        cefccglobalautorepairdelay.value_namespace = name_space;
        cefccglobalautorepairdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCGlobalAutoRepairEnabled")
    {
        cefccglobalautorepairenabled = value;
        cefccglobalautorepairenabled.value_namespace = name_space;
        cefccglobalautorepairenabled.value_namespace_prefix = name_space_prefix;
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

void CiscoCefMib::Cefccglobaltable::Cefccglobalentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion.yfilter = yfilter;
    }
    if(value_path == "cefCCGlobalAutoRepairDelay")
    {
        cefccglobalautorepairdelay.yfilter = yfilter;
    }
    if(value_path == "cefCCGlobalAutoRepairEnabled")
    {
        cefccglobalautorepairenabled.yfilter = yfilter;
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

bool CiscoCefMib::Cefccglobaltable::Cefccglobalentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefFIBIpVersion" || name == "cefCCGlobalAutoRepairDelay" || name == "cefCCGlobalAutoRepairEnabled" || name == "cefCCGlobalAutoRepairHoldDown" || name == "cefCCGlobalErrorMsgEnabled" || name == "cefCCGlobalFullScanAction" || name == "cefCCGlobalFullScanStatus")
        return true;
    return false;
}

CiscoCefMib::Cefcctypetable::Cefcctypetable()
{
    yang_name = "cefCCTypeTable"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Cefcctypetable::~Cefcctypetable()
{
}

bool CiscoCefMib::Cefcctypetable::has_data() const
{
    for (std::size_t index=0; index<cefcctypeentry.size(); index++)
    {
        if(cefcctypeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefcctypetable::has_operation() const
{
    for (std::size_t index=0; index<cefcctypeentry.size(); index++)
    {
        if(cefcctypeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCefMib::Cefcctypetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefCCTypeTable";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefcctypetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefcctypetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefCCTypeEntry")
    {
        for(auto const & c : cefcctypeentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefcctypetable::Cefcctypeentry>();
        c->parent = this;
        cefcctypeentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefcctypetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcctypeentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefcctypetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::Cefcctypetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCefMib::Cefcctypetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefCCTypeEntry")
        return true;
    return false;
}

CiscoCefMib::Cefcctypetable::Cefcctypeentry::Cefcctypeentry()
    :
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    cefcctype{YType::enumeration, "cefCCType"},
    cefcccount{YType::uint32, "cefCCCount"},
    cefccenabled{YType::boolean, "cefCCEnabled"},
    cefccperiod{YType::uint32, "cefCCPeriod"},
    cefccquerieschecked{YType::uint32, "cefCCQueriesChecked"},
    cefccqueriesignored{YType::uint32, "cefCCQueriesIgnored"},
    cefccqueriesiterated{YType::uint32, "cefCCQueriesIterated"},
    cefccqueriessent{YType::uint32, "cefCCQueriesSent"}
{
    yang_name = "cefCCTypeEntry"; yang_parent_name = "cefCCTypeTable";
}

CiscoCefMib::Cefcctypetable::Cefcctypeentry::~Cefcctypeentry()
{
}

bool CiscoCefMib::Cefcctypetable::Cefcctypeentry::has_data() const
{
    return ceffibipversion.is_set
	|| cefcctype.is_set
	|| cefcccount.is_set
	|| cefccenabled.is_set
	|| cefccperiod.is_set
	|| cefccquerieschecked.is_set
	|| cefccqueriesignored.is_set
	|| cefccqueriesiterated.is_set
	|| cefccqueriessent.is_set;
}

bool CiscoCefMib::Cefcctypetable::Cefcctypeentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(cefcctype.yfilter)
	|| ydk::is_set(cefcccount.yfilter)
	|| ydk::is_set(cefccenabled.yfilter)
	|| ydk::is_set(cefccperiod.yfilter)
	|| ydk::is_set(cefccquerieschecked.yfilter)
	|| ydk::is_set(cefccqueriesignored.yfilter)
	|| ydk::is_set(cefccqueriesiterated.yfilter)
	|| ydk::is_set(cefccqueriessent.yfilter);
}

std::string CiscoCefMib::Cefcctypetable::Cefcctypeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefCCTypeEntry" <<"[cefFIBIpVersion='" <<ceffibipversion <<"']" <<"[cefCCType='" <<cefcctype <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefcctypetable::Cefcctypeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefCCTypeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefcctype.is_set || is_set(cefcctype.yfilter)) leaf_name_data.push_back(cefcctype.get_name_leafdata());
    if (cefcccount.is_set || is_set(cefcccount.yfilter)) leaf_name_data.push_back(cefcccount.get_name_leafdata());
    if (cefccenabled.is_set || is_set(cefccenabled.yfilter)) leaf_name_data.push_back(cefccenabled.get_name_leafdata());
    if (cefccperiod.is_set || is_set(cefccperiod.yfilter)) leaf_name_data.push_back(cefccperiod.get_name_leafdata());
    if (cefccquerieschecked.is_set || is_set(cefccquerieschecked.yfilter)) leaf_name_data.push_back(cefccquerieschecked.get_name_leafdata());
    if (cefccqueriesignored.is_set || is_set(cefccqueriesignored.yfilter)) leaf_name_data.push_back(cefccqueriesignored.get_name_leafdata());
    if (cefccqueriesiterated.is_set || is_set(cefccqueriesiterated.yfilter)) leaf_name_data.push_back(cefccqueriesiterated.get_name_leafdata());
    if (cefccqueriessent.is_set || is_set(cefccqueriessent.yfilter)) leaf_name_data.push_back(cefccqueriessent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefcctypetable::Cefcctypeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefcctypetable::Cefcctypeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Cefcctypetable::Cefcctypeentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cefCCCount")
    {
        cefcccount = value;
        cefcccount.value_namespace = name_space;
        cefcccount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCEnabled")
    {
        cefccenabled = value;
        cefccenabled.value_namespace = name_space;
        cefccenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCPeriod")
    {
        cefccperiod = value;
        cefccperiod.value_namespace = name_space;
        cefccperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCQueriesChecked")
    {
        cefccquerieschecked = value;
        cefccquerieschecked.value_namespace = name_space;
        cefccquerieschecked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCQueriesIgnored")
    {
        cefccqueriesignored = value;
        cefccqueriesignored.value_namespace = name_space;
        cefccqueriesignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCQueriesIterated")
    {
        cefccqueriesiterated = value;
        cefccqueriesiterated.value_namespace = name_space;
        cefccqueriesiterated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefCCQueriesSent")
    {
        cefccqueriessent = value;
        cefccqueriessent.value_namespace = name_space;
        cefccqueriessent.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCefMib::Cefcctypetable::Cefcctypeentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion.yfilter = yfilter;
    }
    if(value_path == "cefCCType")
    {
        cefcctype.yfilter = yfilter;
    }
    if(value_path == "cefCCCount")
    {
        cefcccount.yfilter = yfilter;
    }
    if(value_path == "cefCCEnabled")
    {
        cefccenabled.yfilter = yfilter;
    }
    if(value_path == "cefCCPeriod")
    {
        cefccperiod.yfilter = yfilter;
    }
    if(value_path == "cefCCQueriesChecked")
    {
        cefccquerieschecked.yfilter = yfilter;
    }
    if(value_path == "cefCCQueriesIgnored")
    {
        cefccqueriesignored.yfilter = yfilter;
    }
    if(value_path == "cefCCQueriesIterated")
    {
        cefccqueriesiterated.yfilter = yfilter;
    }
    if(value_path == "cefCCQueriesSent")
    {
        cefccqueriessent.yfilter = yfilter;
    }
}

bool CiscoCefMib::Cefcctypetable::Cefcctypeentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefFIBIpVersion" || name == "cefCCType" || name == "cefCCCount" || name == "cefCCEnabled" || name == "cefCCPeriod" || name == "cefCCQueriesChecked" || name == "cefCCQueriesIgnored" || name == "cefCCQueriesIterated" || name == "cefCCQueriesSent")
        return true;
    return false;
}

CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordtable()
{
    yang_name = "cefInconsistencyRecordTable"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Cefinconsistencyrecordtable::~Cefinconsistencyrecordtable()
{
}

bool CiscoCefMib::Cefinconsistencyrecordtable::has_data() const
{
    for (std::size_t index=0; index<cefinconsistencyrecordentry.size(); index++)
    {
        if(cefinconsistencyrecordentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefinconsistencyrecordtable::has_operation() const
{
    for (std::size_t index=0; index<cefinconsistencyrecordentry.size(); index++)
    {
        if(cefinconsistencyrecordentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCefMib::Cefinconsistencyrecordtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefInconsistencyRecordTable";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefinconsistencyrecordtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefinconsistencyrecordtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefInconsistencyRecordEntry")
    {
        for(auto const & c : cefinconsistencyrecordentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry>();
        c->parent = this;
        cefinconsistencyrecordentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefinconsistencyrecordtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefinconsistencyrecordentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefinconsistencyrecordtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::Cefinconsistencyrecordtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCefMib::Cefinconsistencyrecordtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefInconsistencyRecordEntry")
        return true;
    return false;
}

CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::Cefinconsistencyrecordentry()
    :
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    cefinconsistencyrecid{YType::int32, "cefInconsistencyRecId"},
    cefinconsistencycctype{YType::enumeration, "cefInconsistencyCCType"},
    cefinconsistencyentity{YType::int32, "cefInconsistencyEntity"},
    cefinconsistencyprefixaddr{YType::str, "cefInconsistencyPrefixAddr"},
    cefinconsistencyprefixlen{YType::uint32, "cefInconsistencyPrefixLen"},
    cefinconsistencyprefixtype{YType::enumeration, "cefInconsistencyPrefixType"},
    cefinconsistencyreason{YType::enumeration, "cefInconsistencyReason"},
    cefinconsistencyvrfname{YType::str, "cefInconsistencyVrfName"}
{
    yang_name = "cefInconsistencyRecordEntry"; yang_parent_name = "cefInconsistencyRecordTable";
}

CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::~Cefinconsistencyrecordentry()
{
}

bool CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::has_data() const
{
    return ceffibipversion.is_set
	|| cefinconsistencyrecid.is_set
	|| cefinconsistencycctype.is_set
	|| cefinconsistencyentity.is_set
	|| cefinconsistencyprefixaddr.is_set
	|| cefinconsistencyprefixlen.is_set
	|| cefinconsistencyprefixtype.is_set
	|| cefinconsistencyreason.is_set
	|| cefinconsistencyvrfname.is_set;
}

bool CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(cefinconsistencyrecid.yfilter)
	|| ydk::is_set(cefinconsistencycctype.yfilter)
	|| ydk::is_set(cefinconsistencyentity.yfilter)
	|| ydk::is_set(cefinconsistencyprefixaddr.yfilter)
	|| ydk::is_set(cefinconsistencyprefixlen.yfilter)
	|| ydk::is_set(cefinconsistencyprefixtype.yfilter)
	|| ydk::is_set(cefinconsistencyreason.yfilter)
	|| ydk::is_set(cefinconsistencyvrfname.yfilter);
}

std::string CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefInconsistencyRecordEntry" <<"[cefFIBIpVersion='" <<ceffibipversion <<"']" <<"[cefInconsistencyRecId='" <<cefinconsistencyrecid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefInconsistencyRecordTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefinconsistencyrecid.is_set || is_set(cefinconsistencyrecid.yfilter)) leaf_name_data.push_back(cefinconsistencyrecid.get_name_leafdata());
    if (cefinconsistencycctype.is_set || is_set(cefinconsistencycctype.yfilter)) leaf_name_data.push_back(cefinconsistencycctype.get_name_leafdata());
    if (cefinconsistencyentity.is_set || is_set(cefinconsistencyentity.yfilter)) leaf_name_data.push_back(cefinconsistencyentity.get_name_leafdata());
    if (cefinconsistencyprefixaddr.is_set || is_set(cefinconsistencyprefixaddr.yfilter)) leaf_name_data.push_back(cefinconsistencyprefixaddr.get_name_leafdata());
    if (cefinconsistencyprefixlen.is_set || is_set(cefinconsistencyprefixlen.yfilter)) leaf_name_data.push_back(cefinconsistencyprefixlen.get_name_leafdata());
    if (cefinconsistencyprefixtype.is_set || is_set(cefinconsistencyprefixtype.yfilter)) leaf_name_data.push_back(cefinconsistencyprefixtype.get_name_leafdata());
    if (cefinconsistencyreason.is_set || is_set(cefinconsistencyreason.yfilter)) leaf_name_data.push_back(cefinconsistencyreason.get_name_leafdata());
    if (cefinconsistencyvrfname.is_set || is_set(cefinconsistencyvrfname.yfilter)) leaf_name_data.push_back(cefinconsistencyvrfname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cefInconsistencyPrefixType")
    {
        cefinconsistencyprefixtype = value;
        cefinconsistencyprefixtype.value_namespace = name_space;
        cefinconsistencyprefixtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefInconsistencyReason")
    {
        cefinconsistencyreason = value;
        cefinconsistencyreason.value_namespace = name_space;
        cefinconsistencyreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefInconsistencyVrfName")
    {
        cefinconsistencyvrfname = value;
        cefinconsistencyvrfname.value_namespace = name_space;
        cefinconsistencyvrfname.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyRecId")
    {
        cefinconsistencyrecid.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyCCType")
    {
        cefinconsistencycctype.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyEntity")
    {
        cefinconsistencyentity.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyPrefixAddr")
    {
        cefinconsistencyprefixaddr.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyPrefixLen")
    {
        cefinconsistencyprefixlen.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyPrefixType")
    {
        cefinconsistencyprefixtype.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyReason")
    {
        cefinconsistencyreason.yfilter = yfilter;
    }
    if(value_path == "cefInconsistencyVrfName")
    {
        cefinconsistencyvrfname.yfilter = yfilter;
    }
}

bool CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefFIBIpVersion" || name == "cefInconsistencyRecId" || name == "cefInconsistencyCCType" || name == "cefInconsistencyEntity" || name == "cefInconsistencyPrefixAddr" || name == "cefInconsistencyPrefixLen" || name == "cefInconsistencyPrefixType" || name == "cefInconsistencyReason" || name == "cefInconsistencyVrfName")
        return true;
    return false;
}

CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlentable()
{
    yang_name = "cefStatsPrefixLenTable"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Cefstatsprefixlentable::~Cefstatsprefixlentable()
{
}

bool CiscoCefMib::Cefstatsprefixlentable::has_data() const
{
    for (std::size_t index=0; index<cefstatsprefixlenentry.size(); index++)
    {
        if(cefstatsprefixlenentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefstatsprefixlentable::has_operation() const
{
    for (std::size_t index=0; index<cefstatsprefixlenentry.size(); index++)
    {
        if(cefstatsprefixlenentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCefMib::Cefstatsprefixlentable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefStatsPrefixLenTable";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefstatsprefixlentable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefstatsprefixlentable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefStatsPrefixLenEntry")
    {
        for(auto const & c : cefstatsprefixlenentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry>();
        c->parent = this;
        cefstatsprefixlenentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefstatsprefixlentable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefstatsprefixlenentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefstatsprefixlentable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::Cefstatsprefixlentable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCefMib::Cefstatsprefixlentable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefStatsPrefixLenEntry")
        return true;
    return false;
}

CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry::Cefstatsprefixlenentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    cefstatsprefixlen{YType::uint32, "cefStatsPrefixLen"},
    cefstatsprefixdeletes{YType::uint32, "cefStatsPrefixDeletes"},
    cefstatsprefixelements{YType::uint32, "cefStatsPrefixElements"},
    cefstatsprefixhcdeletes{YType::uint64, "cefStatsPrefixHCDeletes"},
    cefstatsprefixhcelements{YType::uint64, "cefStatsPrefixHCElements"},
    cefstatsprefixhcinserts{YType::uint64, "cefStatsPrefixHCInserts"},
    cefstatsprefixhcqueries{YType::uint64, "cefStatsPrefixHCQueries"},
    cefstatsprefixinserts{YType::uint32, "cefStatsPrefixInserts"},
    cefstatsprefixqueries{YType::uint32, "cefStatsPrefixQueries"}
{
    yang_name = "cefStatsPrefixLenEntry"; yang_parent_name = "cefStatsPrefixLenTable";
}

CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry::~Cefstatsprefixlenentry()
{
}

bool CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry::has_data() const
{
    return entphysicalindex.is_set
	|| ceffibipversion.is_set
	|| cefstatsprefixlen.is_set
	|| cefstatsprefixdeletes.is_set
	|| cefstatsprefixelements.is_set
	|| cefstatsprefixhcdeletes.is_set
	|| cefstatsprefixhcelements.is_set
	|| cefstatsprefixhcinserts.is_set
	|| cefstatsprefixhcqueries.is_set
	|| cefstatsprefixinserts.is_set
	|| cefstatsprefixqueries.is_set;
}

bool CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(cefstatsprefixlen.yfilter)
	|| ydk::is_set(cefstatsprefixdeletes.yfilter)
	|| ydk::is_set(cefstatsprefixelements.yfilter)
	|| ydk::is_set(cefstatsprefixhcdeletes.yfilter)
	|| ydk::is_set(cefstatsprefixhcelements.yfilter)
	|| ydk::is_set(cefstatsprefixhcinserts.yfilter)
	|| ydk::is_set(cefstatsprefixhcqueries.yfilter)
	|| ydk::is_set(cefstatsprefixinserts.yfilter)
	|| ydk::is_set(cefstatsprefixqueries.yfilter);
}

std::string CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefStatsPrefixLenEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cefFIBIpVersion='" <<ceffibipversion <<"']" <<"[cefStatsPrefixLen='" <<cefstatsprefixlen <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefStatsPrefixLenTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefstatsprefixlen.is_set || is_set(cefstatsprefixlen.yfilter)) leaf_name_data.push_back(cefstatsprefixlen.get_name_leafdata());
    if (cefstatsprefixdeletes.is_set || is_set(cefstatsprefixdeletes.yfilter)) leaf_name_data.push_back(cefstatsprefixdeletes.get_name_leafdata());
    if (cefstatsprefixelements.is_set || is_set(cefstatsprefixelements.yfilter)) leaf_name_data.push_back(cefstatsprefixelements.get_name_leafdata());
    if (cefstatsprefixhcdeletes.is_set || is_set(cefstatsprefixhcdeletes.yfilter)) leaf_name_data.push_back(cefstatsprefixhcdeletes.get_name_leafdata());
    if (cefstatsprefixhcelements.is_set || is_set(cefstatsprefixhcelements.yfilter)) leaf_name_data.push_back(cefstatsprefixhcelements.get_name_leafdata());
    if (cefstatsprefixhcinserts.is_set || is_set(cefstatsprefixhcinserts.yfilter)) leaf_name_data.push_back(cefstatsprefixhcinserts.get_name_leafdata());
    if (cefstatsprefixhcqueries.is_set || is_set(cefstatsprefixhcqueries.yfilter)) leaf_name_data.push_back(cefstatsprefixhcqueries.get_name_leafdata());
    if (cefstatsprefixinserts.is_set || is_set(cefstatsprefixinserts.yfilter)) leaf_name_data.push_back(cefstatsprefixinserts.get_name_leafdata());
    if (cefstatsprefixqueries.is_set || is_set(cefstatsprefixqueries.yfilter)) leaf_name_data.push_back(cefstatsprefixqueries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cefStatsPrefixDeletes")
    {
        cefstatsprefixdeletes = value;
        cefstatsprefixdeletes.value_namespace = name_space;
        cefstatsprefixdeletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefStatsPrefixElements")
    {
        cefstatsprefixelements = value;
        cefstatsprefixelements.value_namespace = name_space;
        cefstatsprefixelements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefStatsPrefixHCDeletes")
    {
        cefstatsprefixhcdeletes = value;
        cefstatsprefixhcdeletes.value_namespace = name_space;
        cefstatsprefixhcdeletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefStatsPrefixHCElements")
    {
        cefstatsprefixhcelements = value;
        cefstatsprefixhcelements.value_namespace = name_space;
        cefstatsprefixhcelements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefStatsPrefixHCInserts")
    {
        cefstatsprefixhcinserts = value;
        cefstatsprefixhcinserts.value_namespace = name_space;
        cefstatsprefixhcinserts.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cefStatsPrefixQueries")
    {
        cefstatsprefixqueries = value;
        cefstatsprefixqueries.value_namespace = name_space;
        cefstatsprefixqueries.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cefStatsPrefixDeletes")
    {
        cefstatsprefixdeletes.yfilter = yfilter;
    }
    if(value_path == "cefStatsPrefixElements")
    {
        cefstatsprefixelements.yfilter = yfilter;
    }
    if(value_path == "cefStatsPrefixHCDeletes")
    {
        cefstatsprefixhcdeletes.yfilter = yfilter;
    }
    if(value_path == "cefStatsPrefixHCElements")
    {
        cefstatsprefixhcelements.yfilter = yfilter;
    }
    if(value_path == "cefStatsPrefixHCInserts")
    {
        cefstatsprefixhcinserts.yfilter = yfilter;
    }
    if(value_path == "cefStatsPrefixHCQueries")
    {
        cefstatsprefixhcqueries.yfilter = yfilter;
    }
    if(value_path == "cefStatsPrefixInserts")
    {
        cefstatsprefixinserts.yfilter = yfilter;
    }
    if(value_path == "cefStatsPrefixQueries")
    {
        cefstatsprefixqueries.yfilter = yfilter;
    }
}

bool CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefFIBIpVersion" || name == "cefStatsPrefixLen" || name == "cefStatsPrefixDeletes" || name == "cefStatsPrefixElements" || name == "cefStatsPrefixHCDeletes" || name == "cefStatsPrefixHCElements" || name == "cefStatsPrefixHCInserts" || name == "cefStatsPrefixHCQueries" || name == "cefStatsPrefixInserts" || name == "cefStatsPrefixQueries")
        return true;
    return false;
}

CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatstable()
{
    yang_name = "cefSwitchingStatsTable"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::Cefswitchingstatstable::~Cefswitchingstatstable()
{
}

bool CiscoCefMib::Cefswitchingstatstable::has_data() const
{
    for (std::size_t index=0; index<cefswitchingstatsentry.size(); index++)
    {
        if(cefswitchingstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefswitchingstatstable::has_operation() const
{
    for (std::size_t index=0; index<cefswitchingstatsentry.size(); index++)
    {
        if(cefswitchingstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoCefMib::Cefswitchingstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefSwitchingStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefswitchingstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefswitchingstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cefSwitchingStatsEntry")
    {
        for(auto const & c : cefswitchingstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry>();
        c->parent = this;
        cefswitchingstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefswitchingstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefswitchingstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefswitchingstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoCefMib::Cefswitchingstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoCefMib::Cefswitchingstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cefSwitchingStatsEntry")
        return true;
    return false;
}

CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry::Cefswitchingstatsentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    ceffibipversion{YType::enumeration, "cefFIBIpVersion"},
    cefswitchingindex{YType::int32, "cefSwitchingIndex"},
    cefswitchingdrop{YType::uint32, "cefSwitchingDrop"},
    cefswitchinghcdrop{YType::uint64, "cefSwitchingHCDrop"},
    cefswitchinghcpunt{YType::uint64, "cefSwitchingHCPunt"},
    cefswitchinghcpunt2host{YType::uint64, "cefSwitchingHCPunt2Host"},
    cefswitchingpath{YType::str, "cefSwitchingPath"},
    cefswitchingpunt{YType::uint32, "cefSwitchingPunt"},
    cefswitchingpunt2host{YType::uint32, "cefSwitchingPunt2Host"}
{
    yang_name = "cefSwitchingStatsEntry"; yang_parent_name = "cefSwitchingStatsTable";
}

CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry::~Cefswitchingstatsentry()
{
}

bool CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry::has_data() const
{
    return entphysicalindex.is_set
	|| ceffibipversion.is_set
	|| cefswitchingindex.is_set
	|| cefswitchingdrop.is_set
	|| cefswitchinghcdrop.is_set
	|| cefswitchinghcpunt.is_set
	|| cefswitchinghcpunt2host.is_set
	|| cefswitchingpath.is_set
	|| cefswitchingpunt.is_set
	|| cefswitchingpunt2host.is_set;
}

bool CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entphysicalindex.yfilter)
	|| ydk::is_set(ceffibipversion.yfilter)
	|| ydk::is_set(cefswitchingindex.yfilter)
	|| ydk::is_set(cefswitchingdrop.yfilter)
	|| ydk::is_set(cefswitchinghcdrop.yfilter)
	|| ydk::is_set(cefswitchinghcpunt.yfilter)
	|| ydk::is_set(cefswitchinghcpunt2host.yfilter)
	|| ydk::is_set(cefswitchingpath.yfilter)
	|| ydk::is_set(cefswitchingpunt.yfilter)
	|| ydk::is_set(cefswitchingpunt2host.yfilter);
}

std::string CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cefSwitchingStatsEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cefFIBIpVersion='" <<ceffibipversion <<"']" <<"[cefSwitchingIndex='" <<cefswitchingindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CEF-MIB:CISCO-CEF-MIB/cefSwitchingStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.yfilter)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.yfilter)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefswitchingindex.is_set || is_set(cefswitchingindex.yfilter)) leaf_name_data.push_back(cefswitchingindex.get_name_leafdata());
    if (cefswitchingdrop.is_set || is_set(cefswitchingdrop.yfilter)) leaf_name_data.push_back(cefswitchingdrop.get_name_leafdata());
    if (cefswitchinghcdrop.is_set || is_set(cefswitchinghcdrop.yfilter)) leaf_name_data.push_back(cefswitchinghcdrop.get_name_leafdata());
    if (cefswitchinghcpunt.is_set || is_set(cefswitchinghcpunt.yfilter)) leaf_name_data.push_back(cefswitchinghcpunt.get_name_leafdata());
    if (cefswitchinghcpunt2host.is_set || is_set(cefswitchinghcpunt2host.yfilter)) leaf_name_data.push_back(cefswitchinghcpunt2host.get_name_leafdata());
    if (cefswitchingpath.is_set || is_set(cefswitchingpath.yfilter)) leaf_name_data.push_back(cefswitchingpath.get_name_leafdata());
    if (cefswitchingpunt.is_set || is_set(cefswitchingpunt.yfilter)) leaf_name_data.push_back(cefswitchingpunt.get_name_leafdata());
    if (cefswitchingpunt2host.is_set || is_set(cefswitchingpunt2host.yfilter)) leaf_name_data.push_back(cefswitchingpunt2host.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cefSwitchingHCPunt")
    {
        cefswitchinghcpunt = value;
        cefswitchinghcpunt.value_namespace = name_space;
        cefswitchinghcpunt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefSwitchingHCPunt2Host")
    {
        cefswitchinghcpunt2host = value;
        cefswitchinghcpunt2host.value_namespace = name_space;
        cefswitchinghcpunt2host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefSwitchingPath")
    {
        cefswitchingpath = value;
        cefswitchingpath.value_namespace = name_space;
        cefswitchingpath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefSwitchingPunt")
    {
        cefswitchingpunt = value;
        cefswitchingpunt.value_namespace = name_space;
        cefswitchingpunt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cefSwitchingPunt2Host")
    {
        cefswitchingpunt2host = value;
        cefswitchingpunt2host.value_namespace = name_space;
        cefswitchingpunt2host.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "cefSwitchingDrop")
    {
        cefswitchingdrop.yfilter = yfilter;
    }
    if(value_path == "cefSwitchingHCDrop")
    {
        cefswitchinghcdrop.yfilter = yfilter;
    }
    if(value_path == "cefSwitchingHCPunt")
    {
        cefswitchinghcpunt.yfilter = yfilter;
    }
    if(value_path == "cefSwitchingHCPunt2Host")
    {
        cefswitchinghcpunt2host.yfilter = yfilter;
    }
    if(value_path == "cefSwitchingPath")
    {
        cefswitchingpath.yfilter = yfilter;
    }
    if(value_path == "cefSwitchingPunt")
    {
        cefswitchingpunt.yfilter = yfilter;
    }
    if(value_path == "cefSwitchingPunt2Host")
    {
        cefswitchingpunt2host.yfilter = yfilter;
    }
}

bool CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entPhysicalIndex" || name == "cefFIBIpVersion" || name == "cefSwitchingIndex" || name == "cefSwitchingDrop" || name == "cefSwitchingHCDrop" || name == "cefSwitchingHCPunt" || name == "cefSwitchingHCPunt2Host" || name == "cefSwitchingPath" || name == "cefSwitchingPunt" || name == "cefSwitchingPunt2Host")
        return true;
    return false;
}

const Enum::YLeaf CiscoCefMib::Cefcfgtable::Cefcfgentry::Cefcfgloadsharingalgorithm::none {1, "none"};
const Enum::YLeaf CiscoCefMib::Cefcfgtable::Cefcfgentry::Cefcfgloadsharingalgorithm::original {2, "original"};
const Enum::YLeaf CiscoCefMib::Cefcfgtable::Cefcfgentry::Cefcfgloadsharingalgorithm::tunnel {3, "tunnel"};
const Enum::YLeaf CiscoCefMib::Cefcfgtable::Cefcfgentry::Cefcfgloadsharingalgorithm::universal {4, "universal"};

const Enum::YLeaf CiscoCefMib::Cefinttable::Cefintentry::Cefintswitchingstate::cefEnabled {1, "cefEnabled"};
const Enum::YLeaf CiscoCefMib::Cefinttable::Cefintentry::Cefintswitchingstate::distCefEnabled {2, "distCefEnabled"};
const Enum::YLeaf CiscoCefMib::Cefinttable::Cefintentry::Cefintswitchingstate::cefDisabled {3, "cefDisabled"};

const Enum::YLeaf CiscoCefMib::Cefinttable::Cefintentry::Cefintloadsharing::perPacket {1, "perPacket"};
const Enum::YLeaf CiscoCefMib::Cefinttable::Cefintentry::Cefintloadsharing::perDestination {2, "perDestination"};

const Enum::YLeaf CiscoCefMib::Cefinttable::Cefintentry::Cefintnonrecursiveaccouting::internal {1, "internal"};
const Enum::YLeaf CiscoCefMib::Cefinttable::Cefintentry::Cefintnonrecursiveaccouting::external {2, "external"};

const Enum::YLeaf CiscoCefMib::Cefpeertable::Cefpeerentry::Cefpeeroperstate::peerDisabled {1, "peerDisabled"};
const Enum::YLeaf CiscoCefMib::Cefpeertable::Cefpeerentry::Cefpeeroperstate::peerUp {2, "peerUp"};
const Enum::YLeaf CiscoCefMib::Cefpeertable::Cefpeerentry::Cefpeeroperstate::peerHold {3, "peerHold"};

const Enum::YLeaf CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::Cefpeerfiboperstate::peerFIBDown {1, "peerFIBDown"};
const Enum::YLeaf CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::Cefpeerfiboperstate::peerFIBUp {2, "peerFIBUp"};
const Enum::YLeaf CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::Cefpeerfiboperstate::peerFIBReloadRequest {3, "peerFIBReloadRequest"};
const Enum::YLeaf CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::Cefpeerfiboperstate::peerFIBReloading {4, "peerFIBReloading"};
const Enum::YLeaf CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::Cefpeerfiboperstate::peerFIBSynced {5, "peerFIBSynced"};

const Enum::YLeaf CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::Cefinconsistencyreason::missing {1, "missing"};
const Enum::YLeaf CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::Cefinconsistencyreason::checksumErr {2, "checksumErr"};
const Enum::YLeaf CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::Cefinconsistencyreason::unknown {3, "unknown"};


}
}

