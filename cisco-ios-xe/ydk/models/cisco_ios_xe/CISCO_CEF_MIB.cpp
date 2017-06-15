
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CEF_MIB.hpp"

namespace ydk {
namespace CISCO_CEF_MIB {

CiscoCefMib::CiscoCefMib()
    :
    cefadjsummarytable_(std::make_shared<CiscoCefMib::Cefadjsummarytable>())
	,cefadjtable_(std::make_shared<CiscoCefMib::Cefadjtable>())
	,cefcc_(std::make_shared<CiscoCefMib::Cefcc>())
	,cefccglobaltable_(std::make_shared<CiscoCefMib::Cefccglobaltable>())
	,cefcctypetable_(std::make_shared<CiscoCefMib::Cefcctypetable>())
	,cefcfgtable_(std::make_shared<CiscoCefMib::Cefcfgtable>())
	,ceffeselectiontable_(std::make_shared<CiscoCefMib::Ceffeselectiontable>())
	,ceffib_(std::make_shared<CiscoCefMib::Ceffib>())
	,ceffibsummarytable_(std::make_shared<CiscoCefMib::Ceffibsummarytable>())
	,cefinconsistencyrecordtable_(std::make_shared<CiscoCefMib::Cefinconsistencyrecordtable>())
	,cefinttable_(std::make_shared<CiscoCefMib::Cefinttable>())
	,ceflmprefixtable_(std::make_shared<CiscoCefMib::Ceflmprefixtable>())
	,cefnotifcntl_(std::make_shared<CiscoCefMib::Cefnotifcntl>())
	,cefpathtable_(std::make_shared<CiscoCefMib::Cefpathtable>())
	,cefpeerfibtable_(std::make_shared<CiscoCefMib::Cefpeerfibtable>())
	,cefpeertable_(std::make_shared<CiscoCefMib::Cefpeertable>())
	,cefprefixtable_(std::make_shared<CiscoCefMib::Cefprefixtable>())
	,cefresourcetable_(std::make_shared<CiscoCefMib::Cefresourcetable>())
	,cefstatsprefixlentable_(std::make_shared<CiscoCefMib::Cefstatsprefixlentable>())
	,cefswitchingstatstable_(std::make_shared<CiscoCefMib::Cefswitchingstatstable>())
{
    cefadjsummarytable_->parent = this;

    cefadjtable_->parent = this;

    cefcc_->parent = this;

    cefccglobaltable_->parent = this;

    cefcctypetable_->parent = this;

    cefcfgtable_->parent = this;

    ceffeselectiontable_->parent = this;

    ceffib_->parent = this;

    ceffibsummarytable_->parent = this;

    cefinconsistencyrecordtable_->parent = this;

    cefinttable_->parent = this;

    ceflmprefixtable_->parent = this;

    cefnotifcntl_->parent = this;

    cefpathtable_->parent = this;

    cefpeerfibtable_->parent = this;

    cefpeertable_->parent = this;

    cefprefixtable_->parent = this;

    cefresourcetable_->parent = this;

    cefstatsprefixlentable_->parent = this;

    cefswitchingstatstable_->parent = this;

    yang_name = "CISCO-CEF-MIB"; yang_parent_name = "CISCO-CEF-MIB";
}

CiscoCefMib::~CiscoCefMib()
{
}

bool CiscoCefMib::has_data() const
{
    return (cefadjsummarytable_ !=  nullptr && cefadjsummarytable_->has_data())
	|| (cefadjtable_ !=  nullptr && cefadjtable_->has_data())
	|| (cefcc_ !=  nullptr && cefcc_->has_data())
	|| (cefccglobaltable_ !=  nullptr && cefccglobaltable_->has_data())
	|| (cefcctypetable_ !=  nullptr && cefcctypetable_->has_data())
	|| (cefcfgtable_ !=  nullptr && cefcfgtable_->has_data())
	|| (ceffeselectiontable_ !=  nullptr && ceffeselectiontable_->has_data())
	|| (ceffib_ !=  nullptr && ceffib_->has_data())
	|| (ceffibsummarytable_ !=  nullptr && ceffibsummarytable_->has_data())
	|| (cefinconsistencyrecordtable_ !=  nullptr && cefinconsistencyrecordtable_->has_data())
	|| (cefinttable_ !=  nullptr && cefinttable_->has_data())
	|| (ceflmprefixtable_ !=  nullptr && ceflmprefixtable_->has_data())
	|| (cefnotifcntl_ !=  nullptr && cefnotifcntl_->has_data())
	|| (cefpathtable_ !=  nullptr && cefpathtable_->has_data())
	|| (cefpeerfibtable_ !=  nullptr && cefpeerfibtable_->has_data())
	|| (cefpeertable_ !=  nullptr && cefpeertable_->has_data())
	|| (cefprefixtable_ !=  nullptr && cefprefixtable_->has_data())
	|| (cefresourcetable_ !=  nullptr && cefresourcetable_->has_data())
	|| (cefstatsprefixlentable_ !=  nullptr && cefstatsprefixlentable_->has_data())
	|| (cefswitchingstatstable_ !=  nullptr && cefswitchingstatstable_->has_data());
}

bool CiscoCefMib::has_operation() const
{
    return is_set(operation)
	|| (cefadjsummarytable_ !=  nullptr && cefadjsummarytable_->has_operation())
	|| (cefadjtable_ !=  nullptr && cefadjtable_->has_operation())
	|| (cefcc_ !=  nullptr && cefcc_->has_operation())
	|| (cefccglobaltable_ !=  nullptr && cefccglobaltable_->has_operation())
	|| (cefcctypetable_ !=  nullptr && cefcctypetable_->has_operation())
	|| (cefcfgtable_ !=  nullptr && cefcfgtable_->has_operation())
	|| (ceffeselectiontable_ !=  nullptr && ceffeselectiontable_->has_operation())
	|| (ceffib_ !=  nullptr && ceffib_->has_operation())
	|| (ceffibsummarytable_ !=  nullptr && ceffibsummarytable_->has_operation())
	|| (cefinconsistencyrecordtable_ !=  nullptr && cefinconsistencyrecordtable_->has_operation())
	|| (cefinttable_ !=  nullptr && cefinttable_->has_operation())
	|| (ceflmprefixtable_ !=  nullptr && ceflmprefixtable_->has_operation())
	|| (cefnotifcntl_ !=  nullptr && cefnotifcntl_->has_operation())
	|| (cefpathtable_ !=  nullptr && cefpathtable_->has_operation())
	|| (cefpeerfibtable_ !=  nullptr && cefpeerfibtable_->has_operation())
	|| (cefpeertable_ !=  nullptr && cefpeertable_->has_operation())
	|| (cefprefixtable_ !=  nullptr && cefprefixtable_->has_operation())
	|| (cefresourcetable_ !=  nullptr && cefresourcetable_->has_operation())
	|| (cefstatsprefixlentable_ !=  nullptr && cefstatsprefixlentable_->has_operation())
	|| (cefswitchingstatstable_ !=  nullptr && cefswitchingstatstable_->has_operation());
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
        if(cefadjsummarytable_ == nullptr)
        {
            cefadjsummarytable_ = std::make_shared<CiscoCefMib::Cefadjsummarytable>();
        }
        return cefadjsummarytable_;
    }

    if(child_yang_name == "cefAdjTable")
    {
        if(cefadjtable_ == nullptr)
        {
            cefadjtable_ = std::make_shared<CiscoCefMib::Cefadjtable>();
        }
        return cefadjtable_;
    }

    if(child_yang_name == "cefCC")
    {
        if(cefcc_ == nullptr)
        {
            cefcc_ = std::make_shared<CiscoCefMib::Cefcc>();
        }
        return cefcc_;
    }

    if(child_yang_name == "cefCCGlobalTable")
    {
        if(cefccglobaltable_ == nullptr)
        {
            cefccglobaltable_ = std::make_shared<CiscoCefMib::Cefccglobaltable>();
        }
        return cefccglobaltable_;
    }

    if(child_yang_name == "cefCCTypeTable")
    {
        if(cefcctypetable_ == nullptr)
        {
            cefcctypetable_ = std::make_shared<CiscoCefMib::Cefcctypetable>();
        }
        return cefcctypetable_;
    }

    if(child_yang_name == "cefCfgTable")
    {
        if(cefcfgtable_ == nullptr)
        {
            cefcfgtable_ = std::make_shared<CiscoCefMib::Cefcfgtable>();
        }
        return cefcfgtable_;
    }

    if(child_yang_name == "cefFESelectionTable")
    {
        if(ceffeselectiontable_ == nullptr)
        {
            ceffeselectiontable_ = std::make_shared<CiscoCefMib::Ceffeselectiontable>();
        }
        return ceffeselectiontable_;
    }

    if(child_yang_name == "cefFIB")
    {
        if(ceffib_ == nullptr)
        {
            ceffib_ = std::make_shared<CiscoCefMib::Ceffib>();
        }
        return ceffib_;
    }

    if(child_yang_name == "cefFIBSummaryTable")
    {
        if(ceffibsummarytable_ == nullptr)
        {
            ceffibsummarytable_ = std::make_shared<CiscoCefMib::Ceffibsummarytable>();
        }
        return ceffibsummarytable_;
    }

    if(child_yang_name == "cefInconsistencyRecordTable")
    {
        if(cefinconsistencyrecordtable_ == nullptr)
        {
            cefinconsistencyrecordtable_ = std::make_shared<CiscoCefMib::Cefinconsistencyrecordtable>();
        }
        return cefinconsistencyrecordtable_;
    }

    if(child_yang_name == "cefIntTable")
    {
        if(cefinttable_ == nullptr)
        {
            cefinttable_ = std::make_shared<CiscoCefMib::Cefinttable>();
        }
        return cefinttable_;
    }

    if(child_yang_name == "cefLMPrefixTable")
    {
        if(ceflmprefixtable_ == nullptr)
        {
            ceflmprefixtable_ = std::make_shared<CiscoCefMib::Ceflmprefixtable>();
        }
        return ceflmprefixtable_;
    }

    if(child_yang_name == "cefNotifCntl")
    {
        if(cefnotifcntl_ == nullptr)
        {
            cefnotifcntl_ = std::make_shared<CiscoCefMib::Cefnotifcntl>();
        }
        return cefnotifcntl_;
    }

    if(child_yang_name == "cefPathTable")
    {
        if(cefpathtable_ == nullptr)
        {
            cefpathtable_ = std::make_shared<CiscoCefMib::Cefpathtable>();
        }
        return cefpathtable_;
    }

    if(child_yang_name == "cefPeerFIBTable")
    {
        if(cefpeerfibtable_ == nullptr)
        {
            cefpeerfibtable_ = std::make_shared<CiscoCefMib::Cefpeerfibtable>();
        }
        return cefpeerfibtable_;
    }

    if(child_yang_name == "cefPeerTable")
    {
        if(cefpeertable_ == nullptr)
        {
            cefpeertable_ = std::make_shared<CiscoCefMib::Cefpeertable>();
        }
        return cefpeertable_;
    }

    if(child_yang_name == "cefPrefixTable")
    {
        if(cefprefixtable_ == nullptr)
        {
            cefprefixtable_ = std::make_shared<CiscoCefMib::Cefprefixtable>();
        }
        return cefprefixtable_;
    }

    if(child_yang_name == "cefResourceTable")
    {
        if(cefresourcetable_ == nullptr)
        {
            cefresourcetable_ = std::make_shared<CiscoCefMib::Cefresourcetable>();
        }
        return cefresourcetable_;
    }

    if(child_yang_name == "cefStatsPrefixLenTable")
    {
        if(cefstatsprefixlentable_ == nullptr)
        {
            cefstatsprefixlentable_ = std::make_shared<CiscoCefMib::Cefstatsprefixlentable>();
        }
        return cefstatsprefixlentable_;
    }

    if(child_yang_name == "cefSwitchingStatsTable")
    {
        if(cefswitchingstatstable_ == nullptr)
        {
            cefswitchingstatstable_ = std::make_shared<CiscoCefMib::Cefswitchingstatstable>();
        }
        return cefswitchingstatstable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cefadjsummarytable_ != nullptr)
    {
        children["cefAdjSummaryTable"] = cefadjsummarytable_;
    }

    if(cefadjtable_ != nullptr)
    {
        children["cefAdjTable"] = cefadjtable_;
    }

    if(cefcc_ != nullptr)
    {
        children["cefCC"] = cefcc_;
    }

    if(cefccglobaltable_ != nullptr)
    {
        children["cefCCGlobalTable"] = cefccglobaltable_;
    }

    if(cefcctypetable_ != nullptr)
    {
        children["cefCCTypeTable"] = cefcctypetable_;
    }

    if(cefcfgtable_ != nullptr)
    {
        children["cefCfgTable"] = cefcfgtable_;
    }

    if(ceffeselectiontable_ != nullptr)
    {
        children["cefFESelectionTable"] = ceffeselectiontable_;
    }

    if(ceffib_ != nullptr)
    {
        children["cefFIB"] = ceffib_;
    }

    if(ceffibsummarytable_ != nullptr)
    {
        children["cefFIBSummaryTable"] = ceffibsummarytable_;
    }

    if(cefinconsistencyrecordtable_ != nullptr)
    {
        children["cefInconsistencyRecordTable"] = cefinconsistencyrecordtable_;
    }

    if(cefinttable_ != nullptr)
    {
        children["cefIntTable"] = cefinttable_;
    }

    if(ceflmprefixtable_ != nullptr)
    {
        children["cefLMPrefixTable"] = ceflmprefixtable_;
    }

    if(cefnotifcntl_ != nullptr)
    {
        children["cefNotifCntl"] = cefnotifcntl_;
    }

    if(cefpathtable_ != nullptr)
    {
        children["cefPathTable"] = cefpathtable_;
    }

    if(cefpeerfibtable_ != nullptr)
    {
        children["cefPeerFIBTable"] = cefpeerfibtable_;
    }

    if(cefpeertable_ != nullptr)
    {
        children["cefPeerTable"] = cefpeertable_;
    }

    if(cefprefixtable_ != nullptr)
    {
        children["cefPrefixTable"] = cefprefixtable_;
    }

    if(cefresourcetable_ != nullptr)
    {
        children["cefResourceTable"] = cefresourcetable_;
    }

    if(cefstatsprefixlentable_ != nullptr)
    {
        children["cefStatsPrefixLenTable"] = cefstatsprefixlentable_;
    }

    if(cefswitchingstatstable_ != nullptr)
    {
        children["cefSwitchingStatsTable"] = cefswitchingstatstable_;
    }

    return children;
}

void CiscoCefMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(ceflmprefixspinlock.operation);
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

    if (ceflmprefixspinlock.is_set || is_set(ceflmprefixspinlock.operation)) leaf_name_data.push_back(ceflmprefixspinlock.get_name_leafdata());


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

void CiscoCefMib::Ceffib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cefLMPrefixSpinLock")
    {
        ceflmprefixspinlock = value;
    }
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
    return is_set(operation)
	|| is_set(cefinconsistencyreset.operation)
	|| is_set(cefinconsistencyresetstatus.operation)
	|| is_set(entlastinconsistencydetecttime.operation);
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

    if (cefinconsistencyreset.is_set || is_set(cefinconsistencyreset.operation)) leaf_name_data.push_back(cefinconsistencyreset.get_name_leafdata());
    if (cefinconsistencyresetstatus.is_set || is_set(cefinconsistencyresetstatus.operation)) leaf_name_data.push_back(cefinconsistencyresetstatus.get_name_leafdata());
    if (entlastinconsistencydetecttime.is_set || is_set(entlastinconsistencydetecttime.operation)) leaf_name_data.push_back(entlastinconsistencydetecttime.get_name_leafdata());


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

void CiscoCefMib::Cefcc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cefInconsistencyReset")
    {
        cefinconsistencyreset = value;
    }
    if(value_path == "cefInconsistencyResetStatus")
    {
        cefinconsistencyresetstatus = value;
    }
    if(value_path == "entLastInconsistencyDetectTime")
    {
        entlastinconsistencydetecttime = value;
    }
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
    return is_set(operation)
	|| is_set(cefinconsistencynotifenable.operation)
	|| is_set(cefnotifthrottlinginterval.operation)
	|| is_set(cefpeerfibstatechangenotifenable.operation)
	|| is_set(cefpeerstatechangenotifenable.operation)
	|| is_set(cefresourcefailurenotifenable.operation);
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

    if (cefinconsistencynotifenable.is_set || is_set(cefinconsistencynotifenable.operation)) leaf_name_data.push_back(cefinconsistencynotifenable.get_name_leafdata());
    if (cefnotifthrottlinginterval.is_set || is_set(cefnotifthrottlinginterval.operation)) leaf_name_data.push_back(cefnotifthrottlinginterval.get_name_leafdata());
    if (cefpeerfibstatechangenotifenable.is_set || is_set(cefpeerfibstatechangenotifenable.operation)) leaf_name_data.push_back(cefpeerfibstatechangenotifenable.get_name_leafdata());
    if (cefpeerstatechangenotifenable.is_set || is_set(cefpeerstatechangenotifenable.operation)) leaf_name_data.push_back(cefpeerstatechangenotifenable.get_name_leafdata());
    if (cefresourcefailurenotifenable.is_set || is_set(cefresourcefailurenotifenable.operation)) leaf_name_data.push_back(cefresourcefailurenotifenable.get_name_leafdata());


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

void CiscoCefMib::Cefnotifcntl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cefInconsistencyNotifEnable")
    {
        cefinconsistencynotifenable = value;
    }
    if(value_path == "cefNotifThrottlingInterval")
    {
        cefnotifthrottlinginterval = value;
    }
    if(value_path == "cefPeerFIBStateChangeNotifEnable")
    {
        cefpeerfibstatechangenotifenable = value;
    }
    if(value_path == "cefPeerStateChangeNotifEnable")
    {
        cefpeerstatechangenotifenable = value;
    }
    if(value_path == "cefResourceFailureNotifEnable")
    {
        cefresourcefailurenotifenable = value;
    }
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
    for (std::size_t index=0; index<ceffibsummaryentry_.size(); index++)
    {
        if(ceffibsummaryentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Ceffibsummarytable::has_operation() const
{
    for (std::size_t index=0; index<ceffibsummaryentry_.size(); index++)
    {
        if(ceffibsummaryentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : ceffibsummaryentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry>();
        c->parent = this;
        ceffibsummaryentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Ceffibsummarytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceffibsummaryentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Ceffibsummarytable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(ceffibipversion.operation)
	|| is_set(ceffibsummaryfwdprefixes.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.operation)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (ceffibsummaryfwdprefixes.is_set || is_set(ceffibsummaryfwdprefixes.operation)) leaf_name_data.push_back(ceffibsummaryfwdprefixes.get_name_leafdata());


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

void CiscoCefMib::Ceffibsummarytable::Ceffibsummaryentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
    }
    if(value_path == "cefFIBSummaryFwdPrefixes")
    {
        ceffibsummaryfwdprefixes = value;
    }
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
    for (std::size_t index=0; index<cefprefixentry_.size(); index++)
    {
        if(cefprefixentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefprefixtable::has_operation() const
{
    for (std::size_t index=0; index<cefprefixentry_.size(); index++)
    {
        if(cefprefixentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefprefixentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefprefixtable::Cefprefixentry>();
        c->parent = this;
        cefprefixentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefprefixtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefprefixentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefprefixtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefprefixtype.operation)
	|| is_set(cefprefixaddr.operation)
	|| is_set(cefprefixlen.operation)
	|| is_set(cefprefixbytes.operation)
	|| is_set(cefprefixexternalnrbytes.operation)
	|| is_set(cefprefixexternalnrhcbytes.operation)
	|| is_set(cefprefixexternalnrhcpkts.operation)
	|| is_set(cefprefixexternalnrpkts.operation)
	|| is_set(cefprefixforwardinginfo.operation)
	|| is_set(cefprefixhcbytes.operation)
	|| is_set(cefprefixhcpkts.operation)
	|| is_set(cefprefixinternalnrbytes.operation)
	|| is_set(cefprefixinternalnrhcbytes.operation)
	|| is_set(cefprefixinternalnrhcpkts.operation)
	|| is_set(cefprefixinternalnrpkts.operation)
	|| is_set(cefprefixpkts.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefprefixtype.is_set || is_set(cefprefixtype.operation)) leaf_name_data.push_back(cefprefixtype.get_name_leafdata());
    if (cefprefixaddr.is_set || is_set(cefprefixaddr.operation)) leaf_name_data.push_back(cefprefixaddr.get_name_leafdata());
    if (cefprefixlen.is_set || is_set(cefprefixlen.operation)) leaf_name_data.push_back(cefprefixlen.get_name_leafdata());
    if (cefprefixbytes.is_set || is_set(cefprefixbytes.operation)) leaf_name_data.push_back(cefprefixbytes.get_name_leafdata());
    if (cefprefixexternalnrbytes.is_set || is_set(cefprefixexternalnrbytes.operation)) leaf_name_data.push_back(cefprefixexternalnrbytes.get_name_leafdata());
    if (cefprefixexternalnrhcbytes.is_set || is_set(cefprefixexternalnrhcbytes.operation)) leaf_name_data.push_back(cefprefixexternalnrhcbytes.get_name_leafdata());
    if (cefprefixexternalnrhcpkts.is_set || is_set(cefprefixexternalnrhcpkts.operation)) leaf_name_data.push_back(cefprefixexternalnrhcpkts.get_name_leafdata());
    if (cefprefixexternalnrpkts.is_set || is_set(cefprefixexternalnrpkts.operation)) leaf_name_data.push_back(cefprefixexternalnrpkts.get_name_leafdata());
    if (cefprefixforwardinginfo.is_set || is_set(cefprefixforwardinginfo.operation)) leaf_name_data.push_back(cefprefixforwardinginfo.get_name_leafdata());
    if (cefprefixhcbytes.is_set || is_set(cefprefixhcbytes.operation)) leaf_name_data.push_back(cefprefixhcbytes.get_name_leafdata());
    if (cefprefixhcpkts.is_set || is_set(cefprefixhcpkts.operation)) leaf_name_data.push_back(cefprefixhcpkts.get_name_leafdata());
    if (cefprefixinternalnrbytes.is_set || is_set(cefprefixinternalnrbytes.operation)) leaf_name_data.push_back(cefprefixinternalnrbytes.get_name_leafdata());
    if (cefprefixinternalnrhcbytes.is_set || is_set(cefprefixinternalnrhcbytes.operation)) leaf_name_data.push_back(cefprefixinternalnrhcbytes.get_name_leafdata());
    if (cefprefixinternalnrhcpkts.is_set || is_set(cefprefixinternalnrhcpkts.operation)) leaf_name_data.push_back(cefprefixinternalnrhcpkts.get_name_leafdata());
    if (cefprefixinternalnrpkts.is_set || is_set(cefprefixinternalnrpkts.operation)) leaf_name_data.push_back(cefprefixinternalnrpkts.get_name_leafdata());
    if (cefprefixpkts.is_set || is_set(cefprefixpkts.operation)) leaf_name_data.push_back(cefprefixpkts.get_name_leafdata());


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

void CiscoCefMib::Cefprefixtable::Cefprefixentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefPrefixType")
    {
        cefprefixtype = value;
    }
    if(value_path == "cefPrefixAddr")
    {
        cefprefixaddr = value;
    }
    if(value_path == "cefPrefixLen")
    {
        cefprefixlen = value;
    }
    if(value_path == "cefPrefixBytes")
    {
        cefprefixbytes = value;
    }
    if(value_path == "cefPrefixExternalNRBytes")
    {
        cefprefixexternalnrbytes = value;
    }
    if(value_path == "cefPrefixExternalNRHCBytes")
    {
        cefprefixexternalnrhcbytes = value;
    }
    if(value_path == "cefPrefixExternalNRHCPkts")
    {
        cefprefixexternalnrhcpkts = value;
    }
    if(value_path == "cefPrefixExternalNRPkts")
    {
        cefprefixexternalnrpkts = value;
    }
    if(value_path == "cefPrefixForwardingInfo")
    {
        cefprefixforwardinginfo = value;
    }
    if(value_path == "cefPrefixHCBytes")
    {
        cefprefixhcbytes = value;
    }
    if(value_path == "cefPrefixHCPkts")
    {
        cefprefixhcpkts = value;
    }
    if(value_path == "cefPrefixInternalNRBytes")
    {
        cefprefixinternalnrbytes = value;
    }
    if(value_path == "cefPrefixInternalNRHCBytes")
    {
        cefprefixinternalnrhcbytes = value;
    }
    if(value_path == "cefPrefixInternalNRHCPkts")
    {
        cefprefixinternalnrhcpkts = value;
    }
    if(value_path == "cefPrefixInternalNRPkts")
    {
        cefprefixinternalnrpkts = value;
    }
    if(value_path == "cefPrefixPkts")
    {
        cefprefixpkts = value;
    }
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
    for (std::size_t index=0; index<ceflmprefixentry_.size(); index++)
    {
        if(ceflmprefixentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Ceflmprefixtable::has_operation() const
{
    for (std::size_t index=0; index<ceflmprefixentry_.size(); index++)
    {
        if(ceflmprefixentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : ceflmprefixentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry>();
        c->parent = this;
        ceflmprefixentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Ceflmprefixtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceflmprefixentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Ceflmprefixtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(ceflmprefixdestaddrtype.operation)
	|| is_set(ceflmprefixdestaddr.operation)
	|| is_set(ceflmprefixaddr.operation)
	|| is_set(ceflmprefixlen.operation)
	|| is_set(ceflmprefixrowstatus.operation)
	|| is_set(ceflmprefixstate.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceflmprefixdestaddrtype.is_set || is_set(ceflmprefixdestaddrtype.operation)) leaf_name_data.push_back(ceflmprefixdestaddrtype.get_name_leafdata());
    if (ceflmprefixdestaddr.is_set || is_set(ceflmprefixdestaddr.operation)) leaf_name_data.push_back(ceflmprefixdestaddr.get_name_leafdata());
    if (ceflmprefixaddr.is_set || is_set(ceflmprefixaddr.operation)) leaf_name_data.push_back(ceflmprefixaddr.get_name_leafdata());
    if (ceflmprefixlen.is_set || is_set(ceflmprefixlen.operation)) leaf_name_data.push_back(ceflmprefixlen.get_name_leafdata());
    if (ceflmprefixrowstatus.is_set || is_set(ceflmprefixrowstatus.operation)) leaf_name_data.push_back(ceflmprefixrowstatus.get_name_leafdata());
    if (ceflmprefixstate.is_set || is_set(ceflmprefixstate.operation)) leaf_name_data.push_back(ceflmprefixstate.get_name_leafdata());


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

void CiscoCefMib::Ceflmprefixtable::Ceflmprefixentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefLMPrefixDestAddrType")
    {
        ceflmprefixdestaddrtype = value;
    }
    if(value_path == "cefLMPrefixDestAddr")
    {
        ceflmprefixdestaddr = value;
    }
    if(value_path == "cefLMPrefixAddr")
    {
        ceflmprefixaddr = value;
    }
    if(value_path == "cefLMPrefixLen")
    {
        ceflmprefixlen = value;
    }
    if(value_path == "cefLMPrefixRowStatus")
    {
        ceflmprefixrowstatus = value;
    }
    if(value_path == "cefLMPrefixState")
    {
        ceflmprefixstate = value;
    }
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
    for (std::size_t index=0; index<cefpathentry_.size(); index++)
    {
        if(cefpathentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefpathtable::has_operation() const
{
    for (std::size_t index=0; index<cefpathentry_.size(); index++)
    {
        if(cefpathentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefpathentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefpathtable::Cefpathentry>();
        c->parent = this;
        cefpathentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefpathtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefpathentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefpathtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefprefixtype.operation)
	|| is_set(cefprefixaddr.operation)
	|| is_set(cefprefixlen.operation)
	|| is_set(cefpathid.operation)
	|| is_set(cefpathinterface.operation)
	|| is_set(cefpathnexthopaddr.operation)
	|| is_set(cefpathrecursevrfname.operation)
	|| is_set(cefpathtype.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefprefixtype.is_set || is_set(cefprefixtype.operation)) leaf_name_data.push_back(cefprefixtype.get_name_leafdata());
    if (cefprefixaddr.is_set || is_set(cefprefixaddr.operation)) leaf_name_data.push_back(cefprefixaddr.get_name_leafdata());
    if (cefprefixlen.is_set || is_set(cefprefixlen.operation)) leaf_name_data.push_back(cefprefixlen.get_name_leafdata());
    if (cefpathid.is_set || is_set(cefpathid.operation)) leaf_name_data.push_back(cefpathid.get_name_leafdata());
    if (cefpathinterface.is_set || is_set(cefpathinterface.operation)) leaf_name_data.push_back(cefpathinterface.get_name_leafdata());
    if (cefpathnexthopaddr.is_set || is_set(cefpathnexthopaddr.operation)) leaf_name_data.push_back(cefpathnexthopaddr.get_name_leafdata());
    if (cefpathrecursevrfname.is_set || is_set(cefpathrecursevrfname.operation)) leaf_name_data.push_back(cefpathrecursevrfname.get_name_leafdata());
    if (cefpathtype.is_set || is_set(cefpathtype.operation)) leaf_name_data.push_back(cefpathtype.get_name_leafdata());


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

void CiscoCefMib::Cefpathtable::Cefpathentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefPrefixType")
    {
        cefprefixtype = value;
    }
    if(value_path == "cefPrefixAddr")
    {
        cefprefixaddr = value;
    }
    if(value_path == "cefPrefixLen")
    {
        cefprefixlen = value;
    }
    if(value_path == "cefPathId")
    {
        cefpathid = value;
    }
    if(value_path == "cefPathInterface")
    {
        cefpathinterface = value;
    }
    if(value_path == "cefPathNextHopAddr")
    {
        cefpathnexthopaddr = value;
    }
    if(value_path == "cefPathRecurseVrfName")
    {
        cefpathrecursevrfname = value;
    }
    if(value_path == "cefPathType")
    {
        cefpathtype = value;
    }
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
    for (std::size_t index=0; index<cefadjsummaryentry_.size(); index++)
    {
        if(cefadjsummaryentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefadjsummarytable::has_operation() const
{
    for (std::size_t index=0; index<cefadjsummaryentry_.size(); index++)
    {
        if(cefadjsummaryentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefadjsummaryentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry>();
        c->parent = this;
        cefadjsummaryentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefadjsummarytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefadjsummaryentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefadjsummarytable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefadjsummarylinktype.operation)
	|| is_set(cefadjsummarycomplete.operation)
	|| is_set(cefadjsummaryfixup.operation)
	|| is_set(cefadjsummaryincomplete.operation)
	|| is_set(cefadjsummaryredirect.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefadjsummarylinktype.is_set || is_set(cefadjsummarylinktype.operation)) leaf_name_data.push_back(cefadjsummarylinktype.get_name_leafdata());
    if (cefadjsummarycomplete.is_set || is_set(cefadjsummarycomplete.operation)) leaf_name_data.push_back(cefadjsummarycomplete.get_name_leafdata());
    if (cefadjsummaryfixup.is_set || is_set(cefadjsummaryfixup.operation)) leaf_name_data.push_back(cefadjsummaryfixup.get_name_leafdata());
    if (cefadjsummaryincomplete.is_set || is_set(cefadjsummaryincomplete.operation)) leaf_name_data.push_back(cefadjsummaryincomplete.get_name_leafdata());
    if (cefadjsummaryredirect.is_set || is_set(cefadjsummaryredirect.operation)) leaf_name_data.push_back(cefadjsummaryredirect.get_name_leafdata());


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

void CiscoCefMib::Cefadjsummarytable::Cefadjsummaryentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefAdjSummaryLinkType")
    {
        cefadjsummarylinktype = value;
    }
    if(value_path == "cefAdjSummaryComplete")
    {
        cefadjsummarycomplete = value;
    }
    if(value_path == "cefAdjSummaryFixup")
    {
        cefadjsummaryfixup = value;
    }
    if(value_path == "cefAdjSummaryIncomplete")
    {
        cefadjsummaryincomplete = value;
    }
    if(value_path == "cefAdjSummaryRedirect")
    {
        cefadjsummaryredirect = value;
    }
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
    for (std::size_t index=0; index<cefadjentry_.size(); index++)
    {
        if(cefadjentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefadjtable::has_operation() const
{
    for (std::size_t index=0; index<cefadjentry_.size(); index++)
    {
        if(cefadjentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefadjentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefadjtable::Cefadjentry>();
        c->parent = this;
        cefadjentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefadjtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefadjentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefadjtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(ifindex.operation)
	|| is_set(cefadjnexthopaddrtype.operation)
	|| is_set(cefadjnexthopaddr.operation)
	|| is_set(cefadjconnid.operation)
	|| is_set(cefadjsummarylinktype.operation)
	|| is_set(cefadjbytes.operation)
	|| is_set(cefadjencap.operation)
	|| is_set(cefadjfixup.operation)
	|| is_set(cefadjforwardinginfo.operation)
	|| is_set(cefadjhcbytes.operation)
	|| is_set(cefadjhcpkts.operation)
	|| is_set(cefadjmtu.operation)
	|| is_set(cefadjpkts.operation)
	|| is_set(cefadjsource.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cefadjnexthopaddrtype.is_set || is_set(cefadjnexthopaddrtype.operation)) leaf_name_data.push_back(cefadjnexthopaddrtype.get_name_leafdata());
    if (cefadjnexthopaddr.is_set || is_set(cefadjnexthopaddr.operation)) leaf_name_data.push_back(cefadjnexthopaddr.get_name_leafdata());
    if (cefadjconnid.is_set || is_set(cefadjconnid.operation)) leaf_name_data.push_back(cefadjconnid.get_name_leafdata());
    if (cefadjsummarylinktype.is_set || is_set(cefadjsummarylinktype.operation)) leaf_name_data.push_back(cefadjsummarylinktype.get_name_leafdata());
    if (cefadjbytes.is_set || is_set(cefadjbytes.operation)) leaf_name_data.push_back(cefadjbytes.get_name_leafdata());
    if (cefadjencap.is_set || is_set(cefadjencap.operation)) leaf_name_data.push_back(cefadjencap.get_name_leafdata());
    if (cefadjfixup.is_set || is_set(cefadjfixup.operation)) leaf_name_data.push_back(cefadjfixup.get_name_leafdata());
    if (cefadjforwardinginfo.is_set || is_set(cefadjforwardinginfo.operation)) leaf_name_data.push_back(cefadjforwardinginfo.get_name_leafdata());
    if (cefadjhcbytes.is_set || is_set(cefadjhcbytes.operation)) leaf_name_data.push_back(cefadjhcbytes.get_name_leafdata());
    if (cefadjhcpkts.is_set || is_set(cefadjhcpkts.operation)) leaf_name_data.push_back(cefadjhcpkts.get_name_leafdata());
    if (cefadjmtu.is_set || is_set(cefadjmtu.operation)) leaf_name_data.push_back(cefadjmtu.get_name_leafdata());
    if (cefadjpkts.is_set || is_set(cefadjpkts.operation)) leaf_name_data.push_back(cefadjpkts.get_name_leafdata());
    if (cefadjsource.is_set || is_set(cefadjsource.operation)) leaf_name_data.push_back(cefadjsource.get_name_leafdata());


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

void CiscoCefMib::Cefadjtable::Cefadjentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cefAdjNextHopAddrType")
    {
        cefadjnexthopaddrtype = value;
    }
    if(value_path == "cefAdjNextHopAddr")
    {
        cefadjnexthopaddr = value;
    }
    if(value_path == "cefAdjConnId")
    {
        cefadjconnid = value;
    }
    if(value_path == "cefAdjSummaryLinkType")
    {
        cefadjsummarylinktype = value;
    }
    if(value_path == "cefAdjBytes")
    {
        cefadjbytes = value;
    }
    if(value_path == "cefAdjEncap")
    {
        cefadjencap = value;
    }
    if(value_path == "cefAdjFixup")
    {
        cefadjfixup = value;
    }
    if(value_path == "cefAdjForwardingInfo")
    {
        cefadjforwardinginfo = value;
    }
    if(value_path == "cefAdjHCBytes")
    {
        cefadjhcbytes = value;
    }
    if(value_path == "cefAdjHCPkts")
    {
        cefadjhcpkts = value;
    }
    if(value_path == "cefAdjMTU")
    {
        cefadjmtu = value;
    }
    if(value_path == "cefAdjPkts")
    {
        cefadjpkts = value;
    }
    if(value_path == "cefAdjSource")
    {
        cefadjsource[value] = true;
    }
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
    for (std::size_t index=0; index<ceffeselectionentry_.size(); index++)
    {
        if(ceffeselectionentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Ceffeselectiontable::has_operation() const
{
    for (std::size_t index=0; index<ceffeselectionentry_.size(); index++)
    {
        if(ceffeselectionentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : ceffeselectionentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry>();
        c->parent = this;
        ceffeselectionentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Ceffeselectiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ceffeselectionentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Ceffeselectiontable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(ceffeselectionname.operation)
	|| is_set(ceffeselectionid.operation)
	|| is_set(ceffeselectionadjconnid.operation)
	|| is_set(ceffeselectionadjinterface.operation)
	|| is_set(ceffeselectionadjlinktype.operation)
	|| is_set(ceffeselectionadjnexthopaddr.operation)
	|| is_set(ceffeselectionadjnexthopaddrtype.operation)
	|| is_set(ceffeselectionlabels.operation)
	|| is_set(ceffeselectionspecial.operation)
	|| is_set(ceffeselectionvrfname.operation)
	|| is_set(ceffeselectionweight.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffeselectionname.is_set || is_set(ceffeselectionname.operation)) leaf_name_data.push_back(ceffeselectionname.get_name_leafdata());
    if (ceffeselectionid.is_set || is_set(ceffeselectionid.operation)) leaf_name_data.push_back(ceffeselectionid.get_name_leafdata());
    if (ceffeselectionadjconnid.is_set || is_set(ceffeselectionadjconnid.operation)) leaf_name_data.push_back(ceffeselectionadjconnid.get_name_leafdata());
    if (ceffeselectionadjinterface.is_set || is_set(ceffeselectionadjinterface.operation)) leaf_name_data.push_back(ceffeselectionadjinterface.get_name_leafdata());
    if (ceffeselectionadjlinktype.is_set || is_set(ceffeselectionadjlinktype.operation)) leaf_name_data.push_back(ceffeselectionadjlinktype.get_name_leafdata());
    if (ceffeselectionadjnexthopaddr.is_set || is_set(ceffeselectionadjnexthopaddr.operation)) leaf_name_data.push_back(ceffeselectionadjnexthopaddr.get_name_leafdata());
    if (ceffeselectionadjnexthopaddrtype.is_set || is_set(ceffeselectionadjnexthopaddrtype.operation)) leaf_name_data.push_back(ceffeselectionadjnexthopaddrtype.get_name_leafdata());
    if (ceffeselectionlabels.is_set || is_set(ceffeselectionlabels.operation)) leaf_name_data.push_back(ceffeselectionlabels.get_name_leafdata());
    if (ceffeselectionspecial.is_set || is_set(ceffeselectionspecial.operation)) leaf_name_data.push_back(ceffeselectionspecial.get_name_leafdata());
    if (ceffeselectionvrfname.is_set || is_set(ceffeselectionvrfname.operation)) leaf_name_data.push_back(ceffeselectionvrfname.get_name_leafdata());
    if (ceffeselectionweight.is_set || is_set(ceffeselectionweight.operation)) leaf_name_data.push_back(ceffeselectionweight.get_name_leafdata());


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

void CiscoCefMib::Ceffeselectiontable::Ceffeselectionentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefFESelectionName")
    {
        ceffeselectionname = value;
    }
    if(value_path == "cefFESelectionId")
    {
        ceffeselectionid = value;
    }
    if(value_path == "cefFESelectionAdjConnId")
    {
        ceffeselectionadjconnid = value;
    }
    if(value_path == "cefFESelectionAdjInterface")
    {
        ceffeselectionadjinterface = value;
    }
    if(value_path == "cefFESelectionAdjLinkType")
    {
        ceffeselectionadjlinktype = value;
    }
    if(value_path == "cefFESelectionAdjNextHopAddr")
    {
        ceffeselectionadjnexthopaddr = value;
    }
    if(value_path == "cefFESelectionAdjNextHopAddrType")
    {
        ceffeselectionadjnexthopaddrtype = value;
    }
    if(value_path == "cefFESelectionLabels")
    {
        ceffeselectionlabels = value;
    }
    if(value_path == "cefFESelectionSpecial")
    {
        ceffeselectionspecial = value;
    }
    if(value_path == "cefFESelectionVrfName")
    {
        ceffeselectionvrfname = value;
    }
    if(value_path == "cefFESelectionWeight")
    {
        ceffeselectionweight = value;
    }
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
    for (std::size_t index=0; index<cefcfgentry_.size(); index++)
    {
        if(cefcfgentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefcfgtable::has_operation() const
{
    for (std::size_t index=0; index<cefcfgentry_.size(); index++)
    {
        if(cefcfgentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcfgentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefcfgtable::Cefcfgentry>();
        c->parent = this;
        cefcfgentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefcfgtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcfgentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefcfgtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(ceffibipversion.operation)
	|| is_set(cefcfgaccountingmap.operation)
	|| is_set(cefcfgadminstate.operation)
	|| is_set(cefcfgdistributionadminstate.operation)
	|| is_set(cefcfgdistributionoperstate.operation)
	|| is_set(cefcfgloadsharingalgorithm.operation)
	|| is_set(cefcfgloadsharingid.operation)
	|| is_set(cefcfgoperstate.operation)
	|| is_set(cefcfgtrafficstatsloadinterval.operation)
	|| is_set(cefcfgtrafficstatsupdaterate.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.operation)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefcfgaccountingmap.is_set || is_set(cefcfgaccountingmap.operation)) leaf_name_data.push_back(cefcfgaccountingmap.get_name_leafdata());
    if (cefcfgadminstate.is_set || is_set(cefcfgadminstate.operation)) leaf_name_data.push_back(cefcfgadminstate.get_name_leafdata());
    if (cefcfgdistributionadminstate.is_set || is_set(cefcfgdistributionadminstate.operation)) leaf_name_data.push_back(cefcfgdistributionadminstate.get_name_leafdata());
    if (cefcfgdistributionoperstate.is_set || is_set(cefcfgdistributionoperstate.operation)) leaf_name_data.push_back(cefcfgdistributionoperstate.get_name_leafdata());
    if (cefcfgloadsharingalgorithm.is_set || is_set(cefcfgloadsharingalgorithm.operation)) leaf_name_data.push_back(cefcfgloadsharingalgorithm.get_name_leafdata());
    if (cefcfgloadsharingid.is_set || is_set(cefcfgloadsharingid.operation)) leaf_name_data.push_back(cefcfgloadsharingid.get_name_leafdata());
    if (cefcfgoperstate.is_set || is_set(cefcfgoperstate.operation)) leaf_name_data.push_back(cefcfgoperstate.get_name_leafdata());
    if (cefcfgtrafficstatsloadinterval.is_set || is_set(cefcfgtrafficstatsloadinterval.operation)) leaf_name_data.push_back(cefcfgtrafficstatsloadinterval.get_name_leafdata());
    if (cefcfgtrafficstatsupdaterate.is_set || is_set(cefcfgtrafficstatsupdaterate.operation)) leaf_name_data.push_back(cefcfgtrafficstatsupdaterate.get_name_leafdata());


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

void CiscoCefMib::Cefcfgtable::Cefcfgentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
    }
    if(value_path == "cefCfgAccountingMap")
    {
        cefcfgaccountingmap[value] = true;
    }
    if(value_path == "cefCfgAdminState")
    {
        cefcfgadminstate = value;
    }
    if(value_path == "cefCfgDistributionAdminState")
    {
        cefcfgdistributionadminstate = value;
    }
    if(value_path == "cefCfgDistributionOperState")
    {
        cefcfgdistributionoperstate = value;
    }
    if(value_path == "cefCfgLoadSharingAlgorithm")
    {
        cefcfgloadsharingalgorithm = value;
    }
    if(value_path == "cefCfgLoadSharingID")
    {
        cefcfgloadsharingid = value;
    }
    if(value_path == "cefCfgOperState")
    {
        cefcfgoperstate = value;
    }
    if(value_path == "cefCfgTrafficStatsLoadInterval")
    {
        cefcfgtrafficstatsloadinterval = value;
    }
    if(value_path == "cefCfgTrafficStatsUpdateRate")
    {
        cefcfgtrafficstatsupdaterate = value;
    }
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
    for (std::size_t index=0; index<cefresourceentry_.size(); index++)
    {
        if(cefresourceentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefresourcetable::has_operation() const
{
    for (std::size_t index=0; index<cefresourceentry_.size(); index++)
    {
        if(cefresourceentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefresourceentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefresourcetable::Cefresourceentry>();
        c->parent = this;
        cefresourceentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefresourcetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefresourceentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefresourcetable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cefresourcefailurereason.operation)
	|| is_set(cefresourcememoryused.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cefresourcefailurereason.is_set || is_set(cefresourcefailurereason.operation)) leaf_name_data.push_back(cefresourcefailurereason.get_name_leafdata());
    if (cefresourcememoryused.is_set || is_set(cefresourcememoryused.operation)) leaf_name_data.push_back(cefresourcememoryused.get_name_leafdata());


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

void CiscoCefMib::Cefresourcetable::Cefresourceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefResourceFailureReason")
    {
        cefresourcefailurereason = value;
    }
    if(value_path == "cefResourceMemoryUsed")
    {
        cefresourcememoryused = value;
    }
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
    for (std::size_t index=0; index<cefintentry_.size(); index++)
    {
        if(cefintentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefinttable::has_operation() const
{
    for (std::size_t index=0; index<cefintentry_.size(); index++)
    {
        if(cefintentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefintentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefinttable::Cefintentry>();
        c->parent = this;
        cefintentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefinttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefintentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefinttable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(ceffibipversion.operation)
	|| is_set(ifindex.operation)
	|| is_set(cefintloadsharing.operation)
	|| is_set(cefintnonrecursiveaccouting.operation)
	|| is_set(cefintswitchingstate.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.operation)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cefintloadsharing.is_set || is_set(cefintloadsharing.operation)) leaf_name_data.push_back(cefintloadsharing.get_name_leafdata());
    if (cefintnonrecursiveaccouting.is_set || is_set(cefintnonrecursiveaccouting.operation)) leaf_name_data.push_back(cefintnonrecursiveaccouting.get_name_leafdata());
    if (cefintswitchingstate.is_set || is_set(cefintswitchingstate.operation)) leaf_name_data.push_back(cefintswitchingstate.get_name_leafdata());


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

void CiscoCefMib::Cefinttable::Cefintentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
    }
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cefIntLoadSharing")
    {
        cefintloadsharing = value;
    }
    if(value_path == "cefIntNonrecursiveAccouting")
    {
        cefintnonrecursiveaccouting = value;
    }
    if(value_path == "cefIntSwitchingState")
    {
        cefintswitchingstate = value;
    }
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
    for (std::size_t index=0; index<cefpeerentry_.size(); index++)
    {
        if(cefpeerentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefpeertable::has_operation() const
{
    for (std::size_t index=0; index<cefpeerentry_.size(); index++)
    {
        if(cefpeerentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefpeerentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefpeertable::Cefpeerentry>();
        c->parent = this;
        cefpeerentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefpeertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefpeerentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefpeertable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(entpeerphysicalindex.operation)
	|| is_set(cefpeernumberofresets.operation)
	|| is_set(cefpeeroperstate.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entpeerphysicalindex.is_set || is_set(entpeerphysicalindex.operation)) leaf_name_data.push_back(entpeerphysicalindex.get_name_leafdata());
    if (cefpeernumberofresets.is_set || is_set(cefpeernumberofresets.operation)) leaf_name_data.push_back(cefpeernumberofresets.get_name_leafdata());
    if (cefpeeroperstate.is_set || is_set(cefpeeroperstate.operation)) leaf_name_data.push_back(cefpeeroperstate.get_name_leafdata());


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

void CiscoCefMib::Cefpeertable::Cefpeerentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "entPeerPhysicalIndex")
    {
        entpeerphysicalindex = value;
    }
    if(value_path == "cefPeerNumberOfResets")
    {
        cefpeernumberofresets = value;
    }
    if(value_path == "cefPeerOperState")
    {
        cefpeeroperstate = value;
    }
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
    for (std::size_t index=0; index<cefpeerfibentry_.size(); index++)
    {
        if(cefpeerfibentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefpeerfibtable::has_operation() const
{
    for (std::size_t index=0; index<cefpeerfibentry_.size(); index++)
    {
        if(cefpeerfibentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefpeerfibentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry>();
        c->parent = this;
        cefpeerfibentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefpeerfibtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefpeerfibentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefpeerfibtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(entpeerphysicalindex.operation)
	|| is_set(ceffibipversion.operation)
	|| is_set(cefpeerfiboperstate.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (entpeerphysicalindex.is_set || is_set(entpeerphysicalindex.operation)) leaf_name_data.push_back(entpeerphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.operation)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefpeerfiboperstate.is_set || is_set(cefpeerfiboperstate.operation)) leaf_name_data.push_back(cefpeerfiboperstate.get_name_leafdata());


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

void CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "entPeerPhysicalIndex")
    {
        entpeerphysicalindex = value;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
    }
    if(value_path == "cefPeerFIBOperState")
    {
        cefpeerfiboperstate = value;
    }
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
    for (std::size_t index=0; index<cefccglobalentry_.size(); index++)
    {
        if(cefccglobalentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefccglobaltable::has_operation() const
{
    for (std::size_t index=0; index<cefccglobalentry_.size(); index++)
    {
        if(cefccglobalentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefccglobalentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefccglobaltable::Cefccglobalentry>();
        c->parent = this;
        cefccglobalentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefccglobaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefccglobalentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefccglobaltable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ceffibipversion.operation)
	|| is_set(cefccglobalautorepairdelay.operation)
	|| is_set(cefccglobalautorepairenabled.operation)
	|| is_set(cefccglobalautorepairholddown.operation)
	|| is_set(cefccglobalerrormsgenabled.operation)
	|| is_set(cefccglobalfullscanaction.operation)
	|| is_set(cefccglobalfullscanstatus.operation);
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

    if (ceffibipversion.is_set || is_set(ceffibipversion.operation)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefccglobalautorepairdelay.is_set || is_set(cefccglobalautorepairdelay.operation)) leaf_name_data.push_back(cefccglobalautorepairdelay.get_name_leafdata());
    if (cefccglobalautorepairenabled.is_set || is_set(cefccglobalautorepairenabled.operation)) leaf_name_data.push_back(cefccglobalautorepairenabled.get_name_leafdata());
    if (cefccglobalautorepairholddown.is_set || is_set(cefccglobalautorepairholddown.operation)) leaf_name_data.push_back(cefccglobalautorepairholddown.get_name_leafdata());
    if (cefccglobalerrormsgenabled.is_set || is_set(cefccglobalerrormsgenabled.operation)) leaf_name_data.push_back(cefccglobalerrormsgenabled.get_name_leafdata());
    if (cefccglobalfullscanaction.is_set || is_set(cefccglobalfullscanaction.operation)) leaf_name_data.push_back(cefccglobalfullscanaction.get_name_leafdata());
    if (cefccglobalfullscanstatus.is_set || is_set(cefccglobalfullscanstatus.operation)) leaf_name_data.push_back(cefccglobalfullscanstatus.get_name_leafdata());


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

void CiscoCefMib::Cefccglobaltable::Cefccglobalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
    }
    if(value_path == "cefCCGlobalAutoRepairDelay")
    {
        cefccglobalautorepairdelay = value;
    }
    if(value_path == "cefCCGlobalAutoRepairEnabled")
    {
        cefccglobalautorepairenabled = value;
    }
    if(value_path == "cefCCGlobalAutoRepairHoldDown")
    {
        cefccglobalautorepairholddown = value;
    }
    if(value_path == "cefCCGlobalErrorMsgEnabled")
    {
        cefccglobalerrormsgenabled = value;
    }
    if(value_path == "cefCCGlobalFullScanAction")
    {
        cefccglobalfullscanaction = value;
    }
    if(value_path == "cefCCGlobalFullScanStatus")
    {
        cefccglobalfullscanstatus = value;
    }
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
    for (std::size_t index=0; index<cefcctypeentry_.size(); index++)
    {
        if(cefcctypeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefcctypetable::has_operation() const
{
    for (std::size_t index=0; index<cefcctypeentry_.size(); index++)
    {
        if(cefcctypeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefcctypeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefcctypetable::Cefcctypeentry>();
        c->parent = this;
        cefcctypeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefcctypetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefcctypeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefcctypetable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ceffibipversion.operation)
	|| is_set(cefcctype.operation)
	|| is_set(cefcccount.operation)
	|| is_set(cefccenabled.operation)
	|| is_set(cefccperiod.operation)
	|| is_set(cefccquerieschecked.operation)
	|| is_set(cefccqueriesignored.operation)
	|| is_set(cefccqueriesiterated.operation)
	|| is_set(cefccqueriessent.operation);
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

    if (ceffibipversion.is_set || is_set(ceffibipversion.operation)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefcctype.is_set || is_set(cefcctype.operation)) leaf_name_data.push_back(cefcctype.get_name_leafdata());
    if (cefcccount.is_set || is_set(cefcccount.operation)) leaf_name_data.push_back(cefcccount.get_name_leafdata());
    if (cefccenabled.is_set || is_set(cefccenabled.operation)) leaf_name_data.push_back(cefccenabled.get_name_leafdata());
    if (cefccperiod.is_set || is_set(cefccperiod.operation)) leaf_name_data.push_back(cefccperiod.get_name_leafdata());
    if (cefccquerieschecked.is_set || is_set(cefccquerieschecked.operation)) leaf_name_data.push_back(cefccquerieschecked.get_name_leafdata());
    if (cefccqueriesignored.is_set || is_set(cefccqueriesignored.operation)) leaf_name_data.push_back(cefccqueriesignored.get_name_leafdata());
    if (cefccqueriesiterated.is_set || is_set(cefccqueriesiterated.operation)) leaf_name_data.push_back(cefccqueriesiterated.get_name_leafdata());
    if (cefccqueriessent.is_set || is_set(cefccqueriessent.operation)) leaf_name_data.push_back(cefccqueriessent.get_name_leafdata());


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

void CiscoCefMib::Cefcctypetable::Cefcctypeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
    }
    if(value_path == "cefCCType")
    {
        cefcctype = value;
    }
    if(value_path == "cefCCCount")
    {
        cefcccount = value;
    }
    if(value_path == "cefCCEnabled")
    {
        cefccenabled = value;
    }
    if(value_path == "cefCCPeriod")
    {
        cefccperiod = value;
    }
    if(value_path == "cefCCQueriesChecked")
    {
        cefccquerieschecked = value;
    }
    if(value_path == "cefCCQueriesIgnored")
    {
        cefccqueriesignored = value;
    }
    if(value_path == "cefCCQueriesIterated")
    {
        cefccqueriesiterated = value;
    }
    if(value_path == "cefCCQueriesSent")
    {
        cefccqueriessent = value;
    }
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
    for (std::size_t index=0; index<cefinconsistencyrecordentry_.size(); index++)
    {
        if(cefinconsistencyrecordentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefinconsistencyrecordtable::has_operation() const
{
    for (std::size_t index=0; index<cefinconsistencyrecordentry_.size(); index++)
    {
        if(cefinconsistencyrecordentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefinconsistencyrecordentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry>();
        c->parent = this;
        cefinconsistencyrecordentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefinconsistencyrecordtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefinconsistencyrecordentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefinconsistencyrecordtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ceffibipversion.operation)
	|| is_set(cefinconsistencyrecid.operation)
	|| is_set(cefinconsistencycctype.operation)
	|| is_set(cefinconsistencyentity.operation)
	|| is_set(cefinconsistencyprefixaddr.operation)
	|| is_set(cefinconsistencyprefixlen.operation)
	|| is_set(cefinconsistencyprefixtype.operation)
	|| is_set(cefinconsistencyreason.operation)
	|| is_set(cefinconsistencyvrfname.operation);
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

    if (ceffibipversion.is_set || is_set(ceffibipversion.operation)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefinconsistencyrecid.is_set || is_set(cefinconsistencyrecid.operation)) leaf_name_data.push_back(cefinconsistencyrecid.get_name_leafdata());
    if (cefinconsistencycctype.is_set || is_set(cefinconsistencycctype.operation)) leaf_name_data.push_back(cefinconsistencycctype.get_name_leafdata());
    if (cefinconsistencyentity.is_set || is_set(cefinconsistencyentity.operation)) leaf_name_data.push_back(cefinconsistencyentity.get_name_leafdata());
    if (cefinconsistencyprefixaddr.is_set || is_set(cefinconsistencyprefixaddr.operation)) leaf_name_data.push_back(cefinconsistencyprefixaddr.get_name_leafdata());
    if (cefinconsistencyprefixlen.is_set || is_set(cefinconsistencyprefixlen.operation)) leaf_name_data.push_back(cefinconsistencyprefixlen.get_name_leafdata());
    if (cefinconsistencyprefixtype.is_set || is_set(cefinconsistencyprefixtype.operation)) leaf_name_data.push_back(cefinconsistencyprefixtype.get_name_leafdata());
    if (cefinconsistencyreason.is_set || is_set(cefinconsistencyreason.operation)) leaf_name_data.push_back(cefinconsistencyreason.get_name_leafdata());
    if (cefinconsistencyvrfname.is_set || is_set(cefinconsistencyvrfname.operation)) leaf_name_data.push_back(cefinconsistencyvrfname.get_name_leafdata());


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

void CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
    }
    if(value_path == "cefInconsistencyRecId")
    {
        cefinconsistencyrecid = value;
    }
    if(value_path == "cefInconsistencyCCType")
    {
        cefinconsistencycctype = value;
    }
    if(value_path == "cefInconsistencyEntity")
    {
        cefinconsistencyentity = value;
    }
    if(value_path == "cefInconsistencyPrefixAddr")
    {
        cefinconsistencyprefixaddr = value;
    }
    if(value_path == "cefInconsistencyPrefixLen")
    {
        cefinconsistencyprefixlen = value;
    }
    if(value_path == "cefInconsistencyPrefixType")
    {
        cefinconsistencyprefixtype = value;
    }
    if(value_path == "cefInconsistencyReason")
    {
        cefinconsistencyreason = value;
    }
    if(value_path == "cefInconsistencyVrfName")
    {
        cefinconsistencyvrfname = value;
    }
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
    for (std::size_t index=0; index<cefstatsprefixlenentry_.size(); index++)
    {
        if(cefstatsprefixlenentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefstatsprefixlentable::has_operation() const
{
    for (std::size_t index=0; index<cefstatsprefixlenentry_.size(); index++)
    {
        if(cefstatsprefixlenentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefstatsprefixlenentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry>();
        c->parent = this;
        cefstatsprefixlenentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefstatsprefixlentable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefstatsprefixlenentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefstatsprefixlentable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(ceffibipversion.operation)
	|| is_set(cefstatsprefixlen.operation)
	|| is_set(cefstatsprefixdeletes.operation)
	|| is_set(cefstatsprefixelements.operation)
	|| is_set(cefstatsprefixhcdeletes.operation)
	|| is_set(cefstatsprefixhcelements.operation)
	|| is_set(cefstatsprefixhcinserts.operation)
	|| is_set(cefstatsprefixhcqueries.operation)
	|| is_set(cefstatsprefixinserts.operation)
	|| is_set(cefstatsprefixqueries.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.operation)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefstatsprefixlen.is_set || is_set(cefstatsprefixlen.operation)) leaf_name_data.push_back(cefstatsprefixlen.get_name_leafdata());
    if (cefstatsprefixdeletes.is_set || is_set(cefstatsprefixdeletes.operation)) leaf_name_data.push_back(cefstatsprefixdeletes.get_name_leafdata());
    if (cefstatsprefixelements.is_set || is_set(cefstatsprefixelements.operation)) leaf_name_data.push_back(cefstatsprefixelements.get_name_leafdata());
    if (cefstatsprefixhcdeletes.is_set || is_set(cefstatsprefixhcdeletes.operation)) leaf_name_data.push_back(cefstatsprefixhcdeletes.get_name_leafdata());
    if (cefstatsprefixhcelements.is_set || is_set(cefstatsprefixhcelements.operation)) leaf_name_data.push_back(cefstatsprefixhcelements.get_name_leafdata());
    if (cefstatsprefixhcinserts.is_set || is_set(cefstatsprefixhcinserts.operation)) leaf_name_data.push_back(cefstatsprefixhcinserts.get_name_leafdata());
    if (cefstatsprefixhcqueries.is_set || is_set(cefstatsprefixhcqueries.operation)) leaf_name_data.push_back(cefstatsprefixhcqueries.get_name_leafdata());
    if (cefstatsprefixinserts.is_set || is_set(cefstatsprefixinserts.operation)) leaf_name_data.push_back(cefstatsprefixinserts.get_name_leafdata());
    if (cefstatsprefixqueries.is_set || is_set(cefstatsprefixqueries.operation)) leaf_name_data.push_back(cefstatsprefixqueries.get_name_leafdata());


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

void CiscoCefMib::Cefstatsprefixlentable::Cefstatsprefixlenentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
    }
    if(value_path == "cefStatsPrefixLen")
    {
        cefstatsprefixlen = value;
    }
    if(value_path == "cefStatsPrefixDeletes")
    {
        cefstatsprefixdeletes = value;
    }
    if(value_path == "cefStatsPrefixElements")
    {
        cefstatsprefixelements = value;
    }
    if(value_path == "cefStatsPrefixHCDeletes")
    {
        cefstatsprefixhcdeletes = value;
    }
    if(value_path == "cefStatsPrefixHCElements")
    {
        cefstatsprefixhcelements = value;
    }
    if(value_path == "cefStatsPrefixHCInserts")
    {
        cefstatsprefixhcinserts = value;
    }
    if(value_path == "cefStatsPrefixHCQueries")
    {
        cefstatsprefixhcqueries = value;
    }
    if(value_path == "cefStatsPrefixInserts")
    {
        cefstatsprefixinserts = value;
    }
    if(value_path == "cefStatsPrefixQueries")
    {
        cefstatsprefixqueries = value;
    }
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
    for (std::size_t index=0; index<cefswitchingstatsentry_.size(); index++)
    {
        if(cefswitchingstatsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoCefMib::Cefswitchingstatstable::has_operation() const
{
    for (std::size_t index=0; index<cefswitchingstatsentry_.size(); index++)
    {
        if(cefswitchingstatsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cefswitchingstatsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry>();
        c->parent = this;
        cefswitchingstatsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoCefMib::Cefswitchingstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cefswitchingstatsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoCefMib::Cefswitchingstatstable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(ceffibipversion.operation)
	|| is_set(cefswitchingindex.operation)
	|| is_set(cefswitchingdrop.operation)
	|| is_set(cefswitchinghcdrop.operation)
	|| is_set(cefswitchinghcpunt.operation)
	|| is_set(cefswitchinghcpunt2host.operation)
	|| is_set(cefswitchingpath.operation)
	|| is_set(cefswitchingpunt.operation)
	|| is_set(cefswitchingpunt2host.operation);
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

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (ceffibipversion.is_set || is_set(ceffibipversion.operation)) leaf_name_data.push_back(ceffibipversion.get_name_leafdata());
    if (cefswitchingindex.is_set || is_set(cefswitchingindex.operation)) leaf_name_data.push_back(cefswitchingindex.get_name_leafdata());
    if (cefswitchingdrop.is_set || is_set(cefswitchingdrop.operation)) leaf_name_data.push_back(cefswitchingdrop.get_name_leafdata());
    if (cefswitchinghcdrop.is_set || is_set(cefswitchinghcdrop.operation)) leaf_name_data.push_back(cefswitchinghcdrop.get_name_leafdata());
    if (cefswitchinghcpunt.is_set || is_set(cefswitchinghcpunt.operation)) leaf_name_data.push_back(cefswitchinghcpunt.get_name_leafdata());
    if (cefswitchinghcpunt2host.is_set || is_set(cefswitchinghcpunt2host.operation)) leaf_name_data.push_back(cefswitchinghcpunt2host.get_name_leafdata());
    if (cefswitchingpath.is_set || is_set(cefswitchingpath.operation)) leaf_name_data.push_back(cefswitchingpath.get_name_leafdata());
    if (cefswitchingpunt.is_set || is_set(cefswitchingpunt.operation)) leaf_name_data.push_back(cefswitchingpunt.get_name_leafdata());
    if (cefswitchingpunt2host.is_set || is_set(cefswitchingpunt2host.operation)) leaf_name_data.push_back(cefswitchingpunt2host.get_name_leafdata());


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

void CiscoCefMib::Cefswitchingstatstable::Cefswitchingstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cefFIBIpVersion")
    {
        ceffibipversion = value;
    }
    if(value_path == "cefSwitchingIndex")
    {
        cefswitchingindex = value;
    }
    if(value_path == "cefSwitchingDrop")
    {
        cefswitchingdrop = value;
    }
    if(value_path == "cefSwitchingHCDrop")
    {
        cefswitchinghcdrop = value;
    }
    if(value_path == "cefSwitchingHCPunt")
    {
        cefswitchinghcpunt = value;
    }
    if(value_path == "cefSwitchingHCPunt2Host")
    {
        cefswitchinghcpunt2host = value;
    }
    if(value_path == "cefSwitchingPath")
    {
        cefswitchingpath = value;
    }
    if(value_path == "cefSwitchingPunt")
    {
        cefswitchingpunt = value;
    }
    if(value_path == "cefSwitchingPunt2Host")
    {
        cefswitchingpunt2host = value;
    }
}

const Enum::YLeaf CiscoCefMib::Cefcfgtable::Cefcfgentry::CefcfgloadsharingalgorithmEnum::none {1, "none"};
const Enum::YLeaf CiscoCefMib::Cefcfgtable::Cefcfgentry::CefcfgloadsharingalgorithmEnum::original {2, "original"};
const Enum::YLeaf CiscoCefMib::Cefcfgtable::Cefcfgentry::CefcfgloadsharingalgorithmEnum::tunnel {3, "tunnel"};
const Enum::YLeaf CiscoCefMib::Cefcfgtable::Cefcfgentry::CefcfgloadsharingalgorithmEnum::universal {4, "universal"};

const Enum::YLeaf CiscoCefMib::Cefinttable::Cefintentry::CefintswitchingstateEnum::cefEnabled {1, "cefEnabled"};
const Enum::YLeaf CiscoCefMib::Cefinttable::Cefintentry::CefintswitchingstateEnum::distCefEnabled {2, "distCefEnabled"};
const Enum::YLeaf CiscoCefMib::Cefinttable::Cefintentry::CefintswitchingstateEnum::cefDisabled {3, "cefDisabled"};

const Enum::YLeaf CiscoCefMib::Cefinttable::Cefintentry::CefintloadsharingEnum::perPacket {1, "perPacket"};
const Enum::YLeaf CiscoCefMib::Cefinttable::Cefintentry::CefintloadsharingEnum::perDestination {2, "perDestination"};

const Enum::YLeaf CiscoCefMib::Cefinttable::Cefintentry::CefintnonrecursiveaccoutingEnum::internal {1, "internal"};
const Enum::YLeaf CiscoCefMib::Cefinttable::Cefintentry::CefintnonrecursiveaccoutingEnum::external {2, "external"};

const Enum::YLeaf CiscoCefMib::Cefpeertable::Cefpeerentry::CefpeeroperstateEnum::peerDisabled {1, "peerDisabled"};
const Enum::YLeaf CiscoCefMib::Cefpeertable::Cefpeerentry::CefpeeroperstateEnum::peerUp {2, "peerUp"};
const Enum::YLeaf CiscoCefMib::Cefpeertable::Cefpeerentry::CefpeeroperstateEnum::peerHold {3, "peerHold"};

const Enum::YLeaf CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::CefpeerfiboperstateEnum::peerFIBDown {1, "peerFIBDown"};
const Enum::YLeaf CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::CefpeerfiboperstateEnum::peerFIBUp {2, "peerFIBUp"};
const Enum::YLeaf CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::CefpeerfiboperstateEnum::peerFIBReloadRequest {3, "peerFIBReloadRequest"};
const Enum::YLeaf CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::CefpeerfiboperstateEnum::peerFIBReloading {4, "peerFIBReloading"};
const Enum::YLeaf CiscoCefMib::Cefpeerfibtable::Cefpeerfibentry::CefpeerfiboperstateEnum::peerFIBSynced {5, "peerFIBSynced"};

const Enum::YLeaf CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::CefinconsistencyreasonEnum::missing {1, "missing"};
const Enum::YLeaf CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::CefinconsistencyreasonEnum::checksumErr {2, "checksumErr"};
const Enum::YLeaf CiscoCefMib::Cefinconsistencyrecordtable::Cefinconsistencyrecordentry::CefinconsistencyreasonEnum::unknown {3, "unknown"};


}
}

