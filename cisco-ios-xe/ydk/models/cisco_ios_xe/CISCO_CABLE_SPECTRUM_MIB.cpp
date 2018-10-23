
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CABLE_SPECTRUM_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CABLE_SPECTRUM_MIB {

CISCOCABLESPECTRUMMIB::CISCOCABLESPECTRUMMIB()
    :
    ccsflapobjects(std::make_shared<CISCOCABLESPECTRUMMIB::CcsFlapObjects>())
    , ccsflaptable(std::make_shared<CISCOCABLESPECTRUMMIB::CcsFlapTable>())
    , ccscmflaptable(std::make_shared<CISCOCABLESPECTRUMMIB::CcsCmFlapTable>())
    , ccsspectrumrequesttable(std::make_shared<CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable>())
    , ccsspectrumdatatable(std::make_shared<CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable>())
    , ccssnrrequesttable(std::make_shared<CISCOCABLESPECTRUMMIB::CcsSNRRequestTable>())
    , ccsupinspecgrouptable(std::make_shared<CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable>())
    , ccsupinfibernodetable(std::make_shared<CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable>())
    , ccsupspecmgmttable(std::make_shared<CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable>())
    , ccsspecgroupfreqtable(std::make_shared<CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable>())
{
    ccsflapobjects->parent = this;
    ccsflaptable->parent = this;
    ccscmflaptable->parent = this;
    ccsspectrumrequesttable->parent = this;
    ccsspectrumdatatable->parent = this;
    ccssnrrequesttable->parent = this;
    ccsupinspecgrouptable->parent = this;
    ccsupinfibernodetable->parent = this;
    ccsupspecmgmttable->parent = this;
    ccsspecgroupfreqtable->parent = this;

    yang_name = "CISCO-CABLE-SPECTRUM-MIB"; yang_parent_name = "CISCO-CABLE-SPECTRUM-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::~CISCOCABLESPECTRUMMIB()
{
}

bool CISCOCABLESPECTRUMMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ccsflapobjects !=  nullptr && ccsflapobjects->has_data())
	|| (ccsflaptable !=  nullptr && ccsflaptable->has_data())
	|| (ccscmflaptable !=  nullptr && ccscmflaptable->has_data())
	|| (ccsspectrumrequesttable !=  nullptr && ccsspectrumrequesttable->has_data())
	|| (ccsspectrumdatatable !=  nullptr && ccsspectrumdatatable->has_data())
	|| (ccssnrrequesttable !=  nullptr && ccssnrrequesttable->has_data())
	|| (ccsupinspecgrouptable !=  nullptr && ccsupinspecgrouptable->has_data())
	|| (ccsupinfibernodetable !=  nullptr && ccsupinfibernodetable->has_data())
	|| (ccsupspecmgmttable !=  nullptr && ccsupspecmgmttable->has_data())
	|| (ccsspecgroupfreqtable !=  nullptr && ccsspecgroupfreqtable->has_data());
}

bool CISCOCABLESPECTRUMMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ccsflapobjects !=  nullptr && ccsflapobjects->has_operation())
	|| (ccsflaptable !=  nullptr && ccsflaptable->has_operation())
	|| (ccscmflaptable !=  nullptr && ccscmflaptable->has_operation())
	|| (ccsspectrumrequesttable !=  nullptr && ccsspectrumrequesttable->has_operation())
	|| (ccsspectrumdatatable !=  nullptr && ccsspectrumdatatable->has_operation())
	|| (ccssnrrequesttable !=  nullptr && ccssnrrequesttable->has_operation())
	|| (ccsupinspecgrouptable !=  nullptr && ccsupinspecgrouptable->has_operation())
	|| (ccsupinfibernodetable !=  nullptr && ccsupinfibernodetable->has_operation())
	|| (ccsupspecmgmttable !=  nullptr && ccsupspecmgmttable->has_operation())
	|| (ccsspecgroupfreqtable !=  nullptr && ccsspecgroupfreqtable->has_operation());
}

std::string CISCOCABLESPECTRUMMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccsFlapObjects")
    {
        if(ccsflapobjects == nullptr)
        {
            ccsflapobjects = std::make_shared<CISCOCABLESPECTRUMMIB::CcsFlapObjects>();
        }
        return ccsflapobjects;
    }

    if(child_yang_name == "ccsFlapTable")
    {
        if(ccsflaptable == nullptr)
        {
            ccsflaptable = std::make_shared<CISCOCABLESPECTRUMMIB::CcsFlapTable>();
        }
        return ccsflaptable;
    }

    if(child_yang_name == "ccsCmFlapTable")
    {
        if(ccscmflaptable == nullptr)
        {
            ccscmflaptable = std::make_shared<CISCOCABLESPECTRUMMIB::CcsCmFlapTable>();
        }
        return ccscmflaptable;
    }

    if(child_yang_name == "ccsSpectrumRequestTable")
    {
        if(ccsspectrumrequesttable == nullptr)
        {
            ccsspectrumrequesttable = std::make_shared<CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable>();
        }
        return ccsspectrumrequesttable;
    }

    if(child_yang_name == "ccsSpectrumDataTable")
    {
        if(ccsspectrumdatatable == nullptr)
        {
            ccsspectrumdatatable = std::make_shared<CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable>();
        }
        return ccsspectrumdatatable;
    }

    if(child_yang_name == "ccsSNRRequestTable")
    {
        if(ccssnrrequesttable == nullptr)
        {
            ccssnrrequesttable = std::make_shared<CISCOCABLESPECTRUMMIB::CcsSNRRequestTable>();
        }
        return ccssnrrequesttable;
    }

    if(child_yang_name == "ccsUpInSpecGroupTable")
    {
        if(ccsupinspecgrouptable == nullptr)
        {
            ccsupinspecgrouptable = std::make_shared<CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable>();
        }
        return ccsupinspecgrouptable;
    }

    if(child_yang_name == "ccsUpInFiberNodeTable")
    {
        if(ccsupinfibernodetable == nullptr)
        {
            ccsupinfibernodetable = std::make_shared<CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable>();
        }
        return ccsupinfibernodetable;
    }

    if(child_yang_name == "ccsUpSpecMgmtTable")
    {
        if(ccsupspecmgmttable == nullptr)
        {
            ccsupspecmgmttable = std::make_shared<CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable>();
        }
        return ccsupspecmgmttable;
    }

    if(child_yang_name == "ccsSpecGroupFreqTable")
    {
        if(ccsspecgroupfreqtable == nullptr)
        {
            ccsspecgroupfreqtable = std::make_shared<CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable>();
        }
        return ccsspecgroupfreqtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ccsflapobjects != nullptr)
    {
        _children["ccsFlapObjects"] = ccsflapobjects;
    }

    if(ccsflaptable != nullptr)
    {
        _children["ccsFlapTable"] = ccsflaptable;
    }

    if(ccscmflaptable != nullptr)
    {
        _children["ccsCmFlapTable"] = ccscmflaptable;
    }

    if(ccsspectrumrequesttable != nullptr)
    {
        _children["ccsSpectrumRequestTable"] = ccsspectrumrequesttable;
    }

    if(ccsspectrumdatatable != nullptr)
    {
        _children["ccsSpectrumDataTable"] = ccsspectrumdatatable;
    }

    if(ccssnrrequesttable != nullptr)
    {
        _children["ccsSNRRequestTable"] = ccssnrrequesttable;
    }

    if(ccsupinspecgrouptable != nullptr)
    {
        _children["ccsUpInSpecGroupTable"] = ccsupinspecgrouptable;
    }

    if(ccsupinfibernodetable != nullptr)
    {
        _children["ccsUpInFiberNodeTable"] = ccsupinfibernodetable;
    }

    if(ccsupspecmgmttable != nullptr)
    {
        _children["ccsUpSpecMgmtTable"] = ccsupspecmgmttable;
    }

    if(ccsspecgroupfreqtable != nullptr)
    {
        _children["ccsSpecGroupFreqTable"] = ccsspecgroupfreqtable;
    }

    return _children;
}

void CISCOCABLESPECTRUMMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLESPECTRUMMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::clone_ptr() const
{
    return std::make_shared<CISCOCABLESPECTRUMMIB>();
}

std::string CISCOCABLESPECTRUMMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOCABLESPECTRUMMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOCABLESPECTRUMMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOCABLESPECTRUMMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOCABLESPECTRUMMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsFlapObjects" || name == "ccsFlapTable" || name == "ccsCmFlapTable" || name == "ccsSpectrumRequestTable" || name == "ccsSpectrumDataTable" || name == "ccsSNRRequestTable" || name == "ccsUpInSpecGroupTable" || name == "ccsUpInFiberNodeTable" || name == "ccsUpSpecMgmtTable" || name == "ccsSpecGroupFreqTable")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsFlapObjects::CcsFlapObjects()
    :
    ccsflaplistmaxsize{YType::int32, "ccsFlapListMaxSize"},
    ccsflaplistcurrentsize{YType::uint32, "ccsFlapListCurrentSize"},
    ccsflapaging{YType::int32, "ccsFlapAging"},
    ccsflapinsertiontime{YType::int32, "ccsFlapInsertionTime"},
    ccsflappoweradjustthreshold{YType::int32, "ccsFlapPowerAdjustThreshold"},
    ccsflapmissthreshold{YType::uint32, "ccsFlapMissThreshold"},
    ccsflapresetall{YType::boolean, "ccsFlapResetAll"},
    ccsflapclearall{YType::boolean, "ccsFlapClearAll"},
    ccsflaplastcleartime{YType::str, "ccsFlapLastClearTime"}
{

    yang_name = "ccsFlapObjects"; yang_parent_name = "CISCO-CABLE-SPECTRUM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsFlapObjects::~CcsFlapObjects()
{
}

bool CISCOCABLESPECTRUMMIB::CcsFlapObjects::has_data() const
{
    if (is_presence_container) return true;
    return ccsflaplistmaxsize.is_set
	|| ccsflaplistcurrentsize.is_set
	|| ccsflapaging.is_set
	|| ccsflapinsertiontime.is_set
	|| ccsflappoweradjustthreshold.is_set
	|| ccsflapmissthreshold.is_set
	|| ccsflapresetall.is_set
	|| ccsflapclearall.is_set
	|| ccsflaplastcleartime.is_set;
}

bool CISCOCABLESPECTRUMMIB::CcsFlapObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccsflaplistmaxsize.yfilter)
	|| ydk::is_set(ccsflaplistcurrentsize.yfilter)
	|| ydk::is_set(ccsflapaging.yfilter)
	|| ydk::is_set(ccsflapinsertiontime.yfilter)
	|| ydk::is_set(ccsflappoweradjustthreshold.yfilter)
	|| ydk::is_set(ccsflapmissthreshold.yfilter)
	|| ydk::is_set(ccsflapresetall.yfilter)
	|| ydk::is_set(ccsflapclearall.yfilter)
	|| ydk::is_set(ccsflaplastcleartime.yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsFlapObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsFlapObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsFlapObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsFlapObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccsflaplistmaxsize.is_set || is_set(ccsflaplistmaxsize.yfilter)) leaf_name_data.push_back(ccsflaplistmaxsize.get_name_leafdata());
    if (ccsflaplistcurrentsize.is_set || is_set(ccsflaplistcurrentsize.yfilter)) leaf_name_data.push_back(ccsflaplistcurrentsize.get_name_leafdata());
    if (ccsflapaging.is_set || is_set(ccsflapaging.yfilter)) leaf_name_data.push_back(ccsflapaging.get_name_leafdata());
    if (ccsflapinsertiontime.is_set || is_set(ccsflapinsertiontime.yfilter)) leaf_name_data.push_back(ccsflapinsertiontime.get_name_leafdata());
    if (ccsflappoweradjustthreshold.is_set || is_set(ccsflappoweradjustthreshold.yfilter)) leaf_name_data.push_back(ccsflappoweradjustthreshold.get_name_leafdata());
    if (ccsflapmissthreshold.is_set || is_set(ccsflapmissthreshold.yfilter)) leaf_name_data.push_back(ccsflapmissthreshold.get_name_leafdata());
    if (ccsflapresetall.is_set || is_set(ccsflapresetall.yfilter)) leaf_name_data.push_back(ccsflapresetall.get_name_leafdata());
    if (ccsflapclearall.is_set || is_set(ccsflapclearall.yfilter)) leaf_name_data.push_back(ccsflapclearall.get_name_leafdata());
    if (ccsflaplastcleartime.is_set || is_set(ccsflaplastcleartime.yfilter)) leaf_name_data.push_back(ccsflaplastcleartime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsFlapObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsFlapObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsFlapObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccsFlapListMaxSize")
    {
        ccsflaplistmaxsize = value;
        ccsflaplistmaxsize.value_namespace = name_space;
        ccsflaplistmaxsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapListCurrentSize")
    {
        ccsflaplistcurrentsize = value;
        ccsflaplistcurrentsize.value_namespace = name_space;
        ccsflaplistcurrentsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapAging")
    {
        ccsflapaging = value;
        ccsflapaging.value_namespace = name_space;
        ccsflapaging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapInsertionTime")
    {
        ccsflapinsertiontime = value;
        ccsflapinsertiontime.value_namespace = name_space;
        ccsflapinsertiontime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapPowerAdjustThreshold")
    {
        ccsflappoweradjustthreshold = value;
        ccsflappoweradjustthreshold.value_namespace = name_space;
        ccsflappoweradjustthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapMissThreshold")
    {
        ccsflapmissthreshold = value;
        ccsflapmissthreshold.value_namespace = name_space;
        ccsflapmissthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapResetAll")
    {
        ccsflapresetall = value;
        ccsflapresetall.value_namespace = name_space;
        ccsflapresetall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapClearAll")
    {
        ccsflapclearall = value;
        ccsflapclearall.value_namespace = name_space;
        ccsflapclearall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapLastClearTime")
    {
        ccsflaplastcleartime = value;
        ccsflaplastcleartime.value_namespace = name_space;
        ccsflaplastcleartime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLESPECTRUMMIB::CcsFlapObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccsFlapListMaxSize")
    {
        ccsflaplistmaxsize.yfilter = yfilter;
    }
    if(value_path == "ccsFlapListCurrentSize")
    {
        ccsflaplistcurrentsize.yfilter = yfilter;
    }
    if(value_path == "ccsFlapAging")
    {
        ccsflapaging.yfilter = yfilter;
    }
    if(value_path == "ccsFlapInsertionTime")
    {
        ccsflapinsertiontime.yfilter = yfilter;
    }
    if(value_path == "ccsFlapPowerAdjustThreshold")
    {
        ccsflappoweradjustthreshold.yfilter = yfilter;
    }
    if(value_path == "ccsFlapMissThreshold")
    {
        ccsflapmissthreshold.yfilter = yfilter;
    }
    if(value_path == "ccsFlapResetAll")
    {
        ccsflapresetall.yfilter = yfilter;
    }
    if(value_path == "ccsFlapClearAll")
    {
        ccsflapclearall.yfilter = yfilter;
    }
    if(value_path == "ccsFlapLastClearTime")
    {
        ccsflaplastcleartime.yfilter = yfilter;
    }
}

bool CISCOCABLESPECTRUMMIB::CcsFlapObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsFlapListMaxSize" || name == "ccsFlapListCurrentSize" || name == "ccsFlapAging" || name == "ccsFlapInsertionTime" || name == "ccsFlapPowerAdjustThreshold" || name == "ccsFlapMissThreshold" || name == "ccsFlapResetAll" || name == "ccsFlapClearAll" || name == "ccsFlapLastClearTime")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsFlapTable::CcsFlapTable()
    :
    ccsflapentry(this, {"ccsflapmacaddr"})
{

    yang_name = "ccsFlapTable"; yang_parent_name = "CISCO-CABLE-SPECTRUM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsFlapTable::~CcsFlapTable()
{
}

bool CISCOCABLESPECTRUMMIB::CcsFlapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccsflapentry.len(); index++)
    {
        if(ccsflapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCABLESPECTRUMMIB::CcsFlapTable::has_operation() const
{
    for (std::size_t index=0; index<ccsflapentry.len(); index++)
    {
        if(ccsflapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsFlapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsFlapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsFlapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsFlapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsFlapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccsFlapEntry")
    {
        auto ent_ = std::make_shared<CISCOCABLESPECTRUMMIB::CcsFlapTable::CcsFlapEntry>();
        ent_->parent = this;
        ccsflapentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsFlapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ccsflapentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsFlapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLESPECTRUMMIB::CcsFlapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCABLESPECTRUMMIB::CcsFlapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsFlapEntry")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsFlapTable::CcsFlapEntry::CcsFlapEntry()
    :
    ccsflapmacaddr{YType::str, "ccsFlapMacAddr"},
    ccsflapupstreamifindex{YType::int32, "ccsFlapUpstreamIfIndex"},
    ccsflapdownstreamifindex{YType::int32, "ccsFlapDownstreamIfIndex"},
    ccsflapinsertionfails{YType::uint32, "ccsFlapInsertionFails"},
    ccsflaphits{YType::uint32, "ccsFlapHits"},
    ccsflapmisses{YType::uint32, "ccsFlapMisses"},
    ccsflapcrcerrors{YType::uint32, "ccsFlapCrcErrors"},
    ccsflappoweradjustments{YType::uint32, "ccsFlapPowerAdjustments"},
    ccsflaptotal{YType::uint32, "ccsFlapTotal"},
    ccsflaplastflaptime{YType::str, "ccsFlapLastFlapTime"},
    ccsflapcreatetime{YType::str, "ccsFlapCreateTime"},
    ccsflaprowstatus{YType::enumeration, "ccsFlapRowStatus"},
    ccsflapinsertionfailnum{YType::uint32, "ccsFlapInsertionFailNum"},
    ccsflaphitnum{YType::uint32, "ccsFlapHitNum"},
    ccsflapmissnum{YType::uint32, "ccsFlapMissNum"},
    ccsflapcrcerrornum{YType::uint32, "ccsFlapCrcErrorNum"},
    ccsflappoweradjustmentnum{YType::uint32, "ccsFlapPowerAdjustmentNum"},
    ccsflaptotalnum{YType::uint32, "ccsFlapTotalNum"},
    ccsflapresetnow{YType::boolean, "ccsFlapResetNow"},
    ccsflaplastresettime{YType::str, "ccsFlapLastResetTime"}
{

    yang_name = "ccsFlapEntry"; yang_parent_name = "ccsFlapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsFlapTable::CcsFlapEntry::~CcsFlapEntry()
{
}

bool CISCOCABLESPECTRUMMIB::CcsFlapTable::CcsFlapEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccsflapmacaddr.is_set
	|| ccsflapupstreamifindex.is_set
	|| ccsflapdownstreamifindex.is_set
	|| ccsflapinsertionfails.is_set
	|| ccsflaphits.is_set
	|| ccsflapmisses.is_set
	|| ccsflapcrcerrors.is_set
	|| ccsflappoweradjustments.is_set
	|| ccsflaptotal.is_set
	|| ccsflaplastflaptime.is_set
	|| ccsflapcreatetime.is_set
	|| ccsflaprowstatus.is_set
	|| ccsflapinsertionfailnum.is_set
	|| ccsflaphitnum.is_set
	|| ccsflapmissnum.is_set
	|| ccsflapcrcerrornum.is_set
	|| ccsflappoweradjustmentnum.is_set
	|| ccsflaptotalnum.is_set
	|| ccsflapresetnow.is_set
	|| ccsflaplastresettime.is_set;
}

bool CISCOCABLESPECTRUMMIB::CcsFlapTable::CcsFlapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccsflapmacaddr.yfilter)
	|| ydk::is_set(ccsflapupstreamifindex.yfilter)
	|| ydk::is_set(ccsflapdownstreamifindex.yfilter)
	|| ydk::is_set(ccsflapinsertionfails.yfilter)
	|| ydk::is_set(ccsflaphits.yfilter)
	|| ydk::is_set(ccsflapmisses.yfilter)
	|| ydk::is_set(ccsflapcrcerrors.yfilter)
	|| ydk::is_set(ccsflappoweradjustments.yfilter)
	|| ydk::is_set(ccsflaptotal.yfilter)
	|| ydk::is_set(ccsflaplastflaptime.yfilter)
	|| ydk::is_set(ccsflapcreatetime.yfilter)
	|| ydk::is_set(ccsflaprowstatus.yfilter)
	|| ydk::is_set(ccsflapinsertionfailnum.yfilter)
	|| ydk::is_set(ccsflaphitnum.yfilter)
	|| ydk::is_set(ccsflapmissnum.yfilter)
	|| ydk::is_set(ccsflapcrcerrornum.yfilter)
	|| ydk::is_set(ccsflappoweradjustmentnum.yfilter)
	|| ydk::is_set(ccsflaptotalnum.yfilter)
	|| ydk::is_set(ccsflapresetnow.yfilter)
	|| ydk::is_set(ccsflaplastresettime.yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsFlapTable::CcsFlapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/ccsFlapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsFlapTable::CcsFlapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsFlapEntry";
    ADD_KEY_TOKEN(ccsflapmacaddr, "ccsFlapMacAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsFlapTable::CcsFlapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccsflapmacaddr.is_set || is_set(ccsflapmacaddr.yfilter)) leaf_name_data.push_back(ccsflapmacaddr.get_name_leafdata());
    if (ccsflapupstreamifindex.is_set || is_set(ccsflapupstreamifindex.yfilter)) leaf_name_data.push_back(ccsflapupstreamifindex.get_name_leafdata());
    if (ccsflapdownstreamifindex.is_set || is_set(ccsflapdownstreamifindex.yfilter)) leaf_name_data.push_back(ccsflapdownstreamifindex.get_name_leafdata());
    if (ccsflapinsertionfails.is_set || is_set(ccsflapinsertionfails.yfilter)) leaf_name_data.push_back(ccsflapinsertionfails.get_name_leafdata());
    if (ccsflaphits.is_set || is_set(ccsflaphits.yfilter)) leaf_name_data.push_back(ccsflaphits.get_name_leafdata());
    if (ccsflapmisses.is_set || is_set(ccsflapmisses.yfilter)) leaf_name_data.push_back(ccsflapmisses.get_name_leafdata());
    if (ccsflapcrcerrors.is_set || is_set(ccsflapcrcerrors.yfilter)) leaf_name_data.push_back(ccsflapcrcerrors.get_name_leafdata());
    if (ccsflappoweradjustments.is_set || is_set(ccsflappoweradjustments.yfilter)) leaf_name_data.push_back(ccsflappoweradjustments.get_name_leafdata());
    if (ccsflaptotal.is_set || is_set(ccsflaptotal.yfilter)) leaf_name_data.push_back(ccsflaptotal.get_name_leafdata());
    if (ccsflaplastflaptime.is_set || is_set(ccsflaplastflaptime.yfilter)) leaf_name_data.push_back(ccsflaplastflaptime.get_name_leafdata());
    if (ccsflapcreatetime.is_set || is_set(ccsflapcreatetime.yfilter)) leaf_name_data.push_back(ccsflapcreatetime.get_name_leafdata());
    if (ccsflaprowstatus.is_set || is_set(ccsflaprowstatus.yfilter)) leaf_name_data.push_back(ccsflaprowstatus.get_name_leafdata());
    if (ccsflapinsertionfailnum.is_set || is_set(ccsflapinsertionfailnum.yfilter)) leaf_name_data.push_back(ccsflapinsertionfailnum.get_name_leafdata());
    if (ccsflaphitnum.is_set || is_set(ccsflaphitnum.yfilter)) leaf_name_data.push_back(ccsflaphitnum.get_name_leafdata());
    if (ccsflapmissnum.is_set || is_set(ccsflapmissnum.yfilter)) leaf_name_data.push_back(ccsflapmissnum.get_name_leafdata());
    if (ccsflapcrcerrornum.is_set || is_set(ccsflapcrcerrornum.yfilter)) leaf_name_data.push_back(ccsflapcrcerrornum.get_name_leafdata());
    if (ccsflappoweradjustmentnum.is_set || is_set(ccsflappoweradjustmentnum.yfilter)) leaf_name_data.push_back(ccsflappoweradjustmentnum.get_name_leafdata());
    if (ccsflaptotalnum.is_set || is_set(ccsflaptotalnum.yfilter)) leaf_name_data.push_back(ccsflaptotalnum.get_name_leafdata());
    if (ccsflapresetnow.is_set || is_set(ccsflapresetnow.yfilter)) leaf_name_data.push_back(ccsflapresetnow.get_name_leafdata());
    if (ccsflaplastresettime.is_set || is_set(ccsflaplastresettime.yfilter)) leaf_name_data.push_back(ccsflaplastresettime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsFlapTable::CcsFlapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsFlapTable::CcsFlapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsFlapTable::CcsFlapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccsFlapMacAddr")
    {
        ccsflapmacaddr = value;
        ccsflapmacaddr.value_namespace = name_space;
        ccsflapmacaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapUpstreamIfIndex")
    {
        ccsflapupstreamifindex = value;
        ccsflapupstreamifindex.value_namespace = name_space;
        ccsflapupstreamifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapDownstreamIfIndex")
    {
        ccsflapdownstreamifindex = value;
        ccsflapdownstreamifindex.value_namespace = name_space;
        ccsflapdownstreamifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapInsertionFails")
    {
        ccsflapinsertionfails = value;
        ccsflapinsertionfails.value_namespace = name_space;
        ccsflapinsertionfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapHits")
    {
        ccsflaphits = value;
        ccsflaphits.value_namespace = name_space;
        ccsflaphits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapMisses")
    {
        ccsflapmisses = value;
        ccsflapmisses.value_namespace = name_space;
        ccsflapmisses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapCrcErrors")
    {
        ccsflapcrcerrors = value;
        ccsflapcrcerrors.value_namespace = name_space;
        ccsflapcrcerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapPowerAdjustments")
    {
        ccsflappoweradjustments = value;
        ccsflappoweradjustments.value_namespace = name_space;
        ccsflappoweradjustments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapTotal")
    {
        ccsflaptotal = value;
        ccsflaptotal.value_namespace = name_space;
        ccsflaptotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapLastFlapTime")
    {
        ccsflaplastflaptime = value;
        ccsflaplastflaptime.value_namespace = name_space;
        ccsflaplastflaptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapCreateTime")
    {
        ccsflapcreatetime = value;
        ccsflapcreatetime.value_namespace = name_space;
        ccsflapcreatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapRowStatus")
    {
        ccsflaprowstatus = value;
        ccsflaprowstatus.value_namespace = name_space;
        ccsflaprowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapInsertionFailNum")
    {
        ccsflapinsertionfailnum = value;
        ccsflapinsertionfailnum.value_namespace = name_space;
        ccsflapinsertionfailnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapHitNum")
    {
        ccsflaphitnum = value;
        ccsflaphitnum.value_namespace = name_space;
        ccsflaphitnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapMissNum")
    {
        ccsflapmissnum = value;
        ccsflapmissnum.value_namespace = name_space;
        ccsflapmissnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapCrcErrorNum")
    {
        ccsflapcrcerrornum = value;
        ccsflapcrcerrornum.value_namespace = name_space;
        ccsflapcrcerrornum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapPowerAdjustmentNum")
    {
        ccsflappoweradjustmentnum = value;
        ccsflappoweradjustmentnum.value_namespace = name_space;
        ccsflappoweradjustmentnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapTotalNum")
    {
        ccsflaptotalnum = value;
        ccsflaptotalnum.value_namespace = name_space;
        ccsflaptotalnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapResetNow")
    {
        ccsflapresetnow = value;
        ccsflapresetnow.value_namespace = name_space;
        ccsflapresetnow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFlapLastResetTime")
    {
        ccsflaplastresettime = value;
        ccsflaplastresettime.value_namespace = name_space;
        ccsflaplastresettime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLESPECTRUMMIB::CcsFlapTable::CcsFlapEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccsFlapMacAddr")
    {
        ccsflapmacaddr.yfilter = yfilter;
    }
    if(value_path == "ccsFlapUpstreamIfIndex")
    {
        ccsflapupstreamifindex.yfilter = yfilter;
    }
    if(value_path == "ccsFlapDownstreamIfIndex")
    {
        ccsflapdownstreamifindex.yfilter = yfilter;
    }
    if(value_path == "ccsFlapInsertionFails")
    {
        ccsflapinsertionfails.yfilter = yfilter;
    }
    if(value_path == "ccsFlapHits")
    {
        ccsflaphits.yfilter = yfilter;
    }
    if(value_path == "ccsFlapMisses")
    {
        ccsflapmisses.yfilter = yfilter;
    }
    if(value_path == "ccsFlapCrcErrors")
    {
        ccsflapcrcerrors.yfilter = yfilter;
    }
    if(value_path == "ccsFlapPowerAdjustments")
    {
        ccsflappoweradjustments.yfilter = yfilter;
    }
    if(value_path == "ccsFlapTotal")
    {
        ccsflaptotal.yfilter = yfilter;
    }
    if(value_path == "ccsFlapLastFlapTime")
    {
        ccsflaplastflaptime.yfilter = yfilter;
    }
    if(value_path == "ccsFlapCreateTime")
    {
        ccsflapcreatetime.yfilter = yfilter;
    }
    if(value_path == "ccsFlapRowStatus")
    {
        ccsflaprowstatus.yfilter = yfilter;
    }
    if(value_path == "ccsFlapInsertionFailNum")
    {
        ccsflapinsertionfailnum.yfilter = yfilter;
    }
    if(value_path == "ccsFlapHitNum")
    {
        ccsflaphitnum.yfilter = yfilter;
    }
    if(value_path == "ccsFlapMissNum")
    {
        ccsflapmissnum.yfilter = yfilter;
    }
    if(value_path == "ccsFlapCrcErrorNum")
    {
        ccsflapcrcerrornum.yfilter = yfilter;
    }
    if(value_path == "ccsFlapPowerAdjustmentNum")
    {
        ccsflappoweradjustmentnum.yfilter = yfilter;
    }
    if(value_path == "ccsFlapTotalNum")
    {
        ccsflaptotalnum.yfilter = yfilter;
    }
    if(value_path == "ccsFlapResetNow")
    {
        ccsflapresetnow.yfilter = yfilter;
    }
    if(value_path == "ccsFlapLastResetTime")
    {
        ccsflaplastresettime.yfilter = yfilter;
    }
}

bool CISCOCABLESPECTRUMMIB::CcsFlapTable::CcsFlapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsFlapMacAddr" || name == "ccsFlapUpstreamIfIndex" || name == "ccsFlapDownstreamIfIndex" || name == "ccsFlapInsertionFails" || name == "ccsFlapHits" || name == "ccsFlapMisses" || name == "ccsFlapCrcErrors" || name == "ccsFlapPowerAdjustments" || name == "ccsFlapTotal" || name == "ccsFlapLastFlapTime" || name == "ccsFlapCreateTime" || name == "ccsFlapRowStatus" || name == "ccsFlapInsertionFailNum" || name == "ccsFlapHitNum" || name == "ccsFlapMissNum" || name == "ccsFlapCrcErrorNum" || name == "ccsFlapPowerAdjustmentNum" || name == "ccsFlapTotalNum" || name == "ccsFlapResetNow" || name == "ccsFlapLastResetTime")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsCmFlapTable::CcsCmFlapTable()
    :
    ccscmflapentry(this, {"ccscmflapdownstreamifindex", "ccscmflapupstreamifindex", "ccscmflapmacaddr"})
{

    yang_name = "ccsCmFlapTable"; yang_parent_name = "CISCO-CABLE-SPECTRUM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsCmFlapTable::~CcsCmFlapTable()
{
}

bool CISCOCABLESPECTRUMMIB::CcsCmFlapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccscmflapentry.len(); index++)
    {
        if(ccscmflapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCABLESPECTRUMMIB::CcsCmFlapTable::has_operation() const
{
    for (std::size_t index=0; index<ccscmflapentry.len(); index++)
    {
        if(ccscmflapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsCmFlapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsCmFlapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsCmFlapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsCmFlapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsCmFlapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccsCmFlapEntry")
    {
        auto ent_ = std::make_shared<CISCOCABLESPECTRUMMIB::CcsCmFlapTable::CcsCmFlapEntry>();
        ent_->parent = this;
        ccscmflapentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsCmFlapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ccscmflapentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsCmFlapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLESPECTRUMMIB::CcsCmFlapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCABLESPECTRUMMIB::CcsCmFlapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsCmFlapEntry")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsCmFlapTable::CcsCmFlapEntry::CcsCmFlapEntry()
    :
    ccscmflapdownstreamifindex{YType::int32, "ccsCmFlapDownstreamIfIndex"},
    ccscmflapupstreamifindex{YType::int32, "ccsCmFlapUpstreamIfIndex"},
    ccscmflapmacaddr{YType::str, "ccsCmFlapMacAddr"},
    ccscmflaplastflaptime{YType::str, "ccsCmFlapLastFlapTime"},
    ccscmflapcreatetime{YType::str, "ccsCmFlapCreateTime"},
    ccscmflapinsertionfailnum{YType::uint32, "ccsCmFlapInsertionFailNum"},
    ccscmflaphitnum{YType::uint32, "ccsCmFlapHitNum"},
    ccscmflapmissnum{YType::uint32, "ccsCmFlapMissNum"},
    ccscmflapcrcerrornum{YType::uint32, "ccsCmFlapCrcErrorNum"},
    ccscmflappoweradjustmentnum{YType::uint32, "ccsCmFlapPowerAdjustmentNum"},
    ccscmflaptotalnum{YType::uint32, "ccsCmFlapTotalNum"},
    ccscmflapresetnow{YType::boolean, "ccsCmFlapResetNow"},
    ccscmflaplastresettime{YType::str, "ccsCmFlapLastResetTime"},
    ccscmflaprowstatus{YType::enumeration, "ccsCmFlapRowStatus"}
{

    yang_name = "ccsCmFlapEntry"; yang_parent_name = "ccsCmFlapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsCmFlapTable::CcsCmFlapEntry::~CcsCmFlapEntry()
{
}

bool CISCOCABLESPECTRUMMIB::CcsCmFlapTable::CcsCmFlapEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccscmflapdownstreamifindex.is_set
	|| ccscmflapupstreamifindex.is_set
	|| ccscmflapmacaddr.is_set
	|| ccscmflaplastflaptime.is_set
	|| ccscmflapcreatetime.is_set
	|| ccscmflapinsertionfailnum.is_set
	|| ccscmflaphitnum.is_set
	|| ccscmflapmissnum.is_set
	|| ccscmflapcrcerrornum.is_set
	|| ccscmflappoweradjustmentnum.is_set
	|| ccscmflaptotalnum.is_set
	|| ccscmflapresetnow.is_set
	|| ccscmflaplastresettime.is_set
	|| ccscmflaprowstatus.is_set;
}

bool CISCOCABLESPECTRUMMIB::CcsCmFlapTable::CcsCmFlapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccscmflapdownstreamifindex.yfilter)
	|| ydk::is_set(ccscmflapupstreamifindex.yfilter)
	|| ydk::is_set(ccscmflapmacaddr.yfilter)
	|| ydk::is_set(ccscmflaplastflaptime.yfilter)
	|| ydk::is_set(ccscmflapcreatetime.yfilter)
	|| ydk::is_set(ccscmflapinsertionfailnum.yfilter)
	|| ydk::is_set(ccscmflaphitnum.yfilter)
	|| ydk::is_set(ccscmflapmissnum.yfilter)
	|| ydk::is_set(ccscmflapcrcerrornum.yfilter)
	|| ydk::is_set(ccscmflappoweradjustmentnum.yfilter)
	|| ydk::is_set(ccscmflaptotalnum.yfilter)
	|| ydk::is_set(ccscmflapresetnow.yfilter)
	|| ydk::is_set(ccscmflaplastresettime.yfilter)
	|| ydk::is_set(ccscmflaprowstatus.yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsCmFlapTable::CcsCmFlapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/ccsCmFlapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsCmFlapTable::CcsCmFlapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsCmFlapEntry";
    ADD_KEY_TOKEN(ccscmflapdownstreamifindex, "ccsCmFlapDownstreamIfIndex");
    ADD_KEY_TOKEN(ccscmflapupstreamifindex, "ccsCmFlapUpstreamIfIndex");
    ADD_KEY_TOKEN(ccscmflapmacaddr, "ccsCmFlapMacAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsCmFlapTable::CcsCmFlapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccscmflapdownstreamifindex.is_set || is_set(ccscmflapdownstreamifindex.yfilter)) leaf_name_data.push_back(ccscmflapdownstreamifindex.get_name_leafdata());
    if (ccscmflapupstreamifindex.is_set || is_set(ccscmflapupstreamifindex.yfilter)) leaf_name_data.push_back(ccscmflapupstreamifindex.get_name_leafdata());
    if (ccscmflapmacaddr.is_set || is_set(ccscmflapmacaddr.yfilter)) leaf_name_data.push_back(ccscmflapmacaddr.get_name_leafdata());
    if (ccscmflaplastflaptime.is_set || is_set(ccscmflaplastflaptime.yfilter)) leaf_name_data.push_back(ccscmflaplastflaptime.get_name_leafdata());
    if (ccscmflapcreatetime.is_set || is_set(ccscmflapcreatetime.yfilter)) leaf_name_data.push_back(ccscmflapcreatetime.get_name_leafdata());
    if (ccscmflapinsertionfailnum.is_set || is_set(ccscmflapinsertionfailnum.yfilter)) leaf_name_data.push_back(ccscmflapinsertionfailnum.get_name_leafdata());
    if (ccscmflaphitnum.is_set || is_set(ccscmflaphitnum.yfilter)) leaf_name_data.push_back(ccscmflaphitnum.get_name_leafdata());
    if (ccscmflapmissnum.is_set || is_set(ccscmflapmissnum.yfilter)) leaf_name_data.push_back(ccscmflapmissnum.get_name_leafdata());
    if (ccscmflapcrcerrornum.is_set || is_set(ccscmflapcrcerrornum.yfilter)) leaf_name_data.push_back(ccscmflapcrcerrornum.get_name_leafdata());
    if (ccscmflappoweradjustmentnum.is_set || is_set(ccscmflappoweradjustmentnum.yfilter)) leaf_name_data.push_back(ccscmflappoweradjustmentnum.get_name_leafdata());
    if (ccscmflaptotalnum.is_set || is_set(ccscmflaptotalnum.yfilter)) leaf_name_data.push_back(ccscmflaptotalnum.get_name_leafdata());
    if (ccscmflapresetnow.is_set || is_set(ccscmflapresetnow.yfilter)) leaf_name_data.push_back(ccscmflapresetnow.get_name_leafdata());
    if (ccscmflaplastresettime.is_set || is_set(ccscmflaplastresettime.yfilter)) leaf_name_data.push_back(ccscmflaplastresettime.get_name_leafdata());
    if (ccscmflaprowstatus.is_set || is_set(ccscmflaprowstatus.yfilter)) leaf_name_data.push_back(ccscmflaprowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsCmFlapTable::CcsCmFlapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsCmFlapTable::CcsCmFlapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsCmFlapTable::CcsCmFlapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccsCmFlapDownstreamIfIndex")
    {
        ccscmflapdownstreamifindex = value;
        ccscmflapdownstreamifindex.value_namespace = name_space;
        ccscmflapdownstreamifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsCmFlapUpstreamIfIndex")
    {
        ccscmflapupstreamifindex = value;
        ccscmflapupstreamifindex.value_namespace = name_space;
        ccscmflapupstreamifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsCmFlapMacAddr")
    {
        ccscmflapmacaddr = value;
        ccscmflapmacaddr.value_namespace = name_space;
        ccscmflapmacaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsCmFlapLastFlapTime")
    {
        ccscmflaplastflaptime = value;
        ccscmflaplastflaptime.value_namespace = name_space;
        ccscmflaplastflaptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsCmFlapCreateTime")
    {
        ccscmflapcreatetime = value;
        ccscmflapcreatetime.value_namespace = name_space;
        ccscmflapcreatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsCmFlapInsertionFailNum")
    {
        ccscmflapinsertionfailnum = value;
        ccscmflapinsertionfailnum.value_namespace = name_space;
        ccscmflapinsertionfailnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsCmFlapHitNum")
    {
        ccscmflaphitnum = value;
        ccscmflaphitnum.value_namespace = name_space;
        ccscmflaphitnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsCmFlapMissNum")
    {
        ccscmflapmissnum = value;
        ccscmflapmissnum.value_namespace = name_space;
        ccscmflapmissnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsCmFlapCrcErrorNum")
    {
        ccscmflapcrcerrornum = value;
        ccscmflapcrcerrornum.value_namespace = name_space;
        ccscmflapcrcerrornum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsCmFlapPowerAdjustmentNum")
    {
        ccscmflappoweradjustmentnum = value;
        ccscmflappoweradjustmentnum.value_namespace = name_space;
        ccscmflappoweradjustmentnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsCmFlapTotalNum")
    {
        ccscmflaptotalnum = value;
        ccscmflaptotalnum.value_namespace = name_space;
        ccscmflaptotalnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsCmFlapResetNow")
    {
        ccscmflapresetnow = value;
        ccscmflapresetnow.value_namespace = name_space;
        ccscmflapresetnow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsCmFlapLastResetTime")
    {
        ccscmflaplastresettime = value;
        ccscmflaplastresettime.value_namespace = name_space;
        ccscmflaplastresettime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsCmFlapRowStatus")
    {
        ccscmflaprowstatus = value;
        ccscmflaprowstatus.value_namespace = name_space;
        ccscmflaprowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLESPECTRUMMIB::CcsCmFlapTable::CcsCmFlapEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccsCmFlapDownstreamIfIndex")
    {
        ccscmflapdownstreamifindex.yfilter = yfilter;
    }
    if(value_path == "ccsCmFlapUpstreamIfIndex")
    {
        ccscmflapupstreamifindex.yfilter = yfilter;
    }
    if(value_path == "ccsCmFlapMacAddr")
    {
        ccscmflapmacaddr.yfilter = yfilter;
    }
    if(value_path == "ccsCmFlapLastFlapTime")
    {
        ccscmflaplastflaptime.yfilter = yfilter;
    }
    if(value_path == "ccsCmFlapCreateTime")
    {
        ccscmflapcreatetime.yfilter = yfilter;
    }
    if(value_path == "ccsCmFlapInsertionFailNum")
    {
        ccscmflapinsertionfailnum.yfilter = yfilter;
    }
    if(value_path == "ccsCmFlapHitNum")
    {
        ccscmflaphitnum.yfilter = yfilter;
    }
    if(value_path == "ccsCmFlapMissNum")
    {
        ccscmflapmissnum.yfilter = yfilter;
    }
    if(value_path == "ccsCmFlapCrcErrorNum")
    {
        ccscmflapcrcerrornum.yfilter = yfilter;
    }
    if(value_path == "ccsCmFlapPowerAdjustmentNum")
    {
        ccscmflappoweradjustmentnum.yfilter = yfilter;
    }
    if(value_path == "ccsCmFlapTotalNum")
    {
        ccscmflaptotalnum.yfilter = yfilter;
    }
    if(value_path == "ccsCmFlapResetNow")
    {
        ccscmflapresetnow.yfilter = yfilter;
    }
    if(value_path == "ccsCmFlapLastResetTime")
    {
        ccscmflaplastresettime.yfilter = yfilter;
    }
    if(value_path == "ccsCmFlapRowStatus")
    {
        ccscmflaprowstatus.yfilter = yfilter;
    }
}

bool CISCOCABLESPECTRUMMIB::CcsCmFlapTable::CcsCmFlapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsCmFlapDownstreamIfIndex" || name == "ccsCmFlapUpstreamIfIndex" || name == "ccsCmFlapMacAddr" || name == "ccsCmFlapLastFlapTime" || name == "ccsCmFlapCreateTime" || name == "ccsCmFlapInsertionFailNum" || name == "ccsCmFlapHitNum" || name == "ccsCmFlapMissNum" || name == "ccsCmFlapCrcErrorNum" || name == "ccsCmFlapPowerAdjustmentNum" || name == "ccsCmFlapTotalNum" || name == "ccsCmFlapResetNow" || name == "ccsCmFlapLastResetTime" || name == "ccsCmFlapRowStatus")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestTable()
    :
    ccsspectrumrequestentry(this, {"ccsspectrumrequestindex"})
{

    yang_name = "ccsSpectrumRequestTable"; yang_parent_name = "CISCO-CABLE-SPECTRUM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::~CcsSpectrumRequestTable()
{
}

bool CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccsspectrumrequestentry.len(); index++)
    {
        if(ccsspectrumrequestentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::has_operation() const
{
    for (std::size_t index=0; index<ccsspectrumrequestentry.len(); index++)
    {
        if(ccsspectrumrequestentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsSpectrumRequestTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccsSpectrumRequestEntry")
    {
        auto ent_ = std::make_shared<CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestEntry>();
        ent_->parent = this;
        ccsspectrumrequestentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ccsspectrumrequestentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsSpectrumRequestEntry")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestEntry::CcsSpectrumRequestEntry()
    :
    ccsspectrumrequestindex{YType::int32, "ccsSpectrumRequestIndex"},
    ccsspectrumrequestifindex{YType::int32, "ccsSpectrumRequestIfIndex"},
    ccsspectrumrequestmacaddr{YType::str, "ccsSpectrumRequestMacAddr"},
    ccsspectrumrequestlowfreq{YType::int32, "ccsSpectrumRequestLowFreq"},
    ccsspectrumrequestupperfreq{YType::int32, "ccsSpectrumRequestUpperFreq"},
    ccsspectrumrequestresolution{YType::int32, "ccsSpectrumRequestResolution"},
    ccsspectrumrequestoperation{YType::enumeration, "ccsSpectrumRequestOperation"},
    ccsspectrumrequestoperstate{YType::enumeration, "ccsSpectrumRequestOperState"},
    ccsspectrumrequeststarttime{YType::uint32, "ccsSpectrumRequestStartTime"},
    ccsspectrumrequeststoppedtime{YType::uint32, "ccsSpectrumRequestStoppedTime"},
    ccsspectrumrequeststatus{YType::enumeration, "ccsSpectrumRequestStatus"}
{

    yang_name = "ccsSpectrumRequestEntry"; yang_parent_name = "ccsSpectrumRequestTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestEntry::~CcsSpectrumRequestEntry()
{
}

bool CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccsspectrumrequestindex.is_set
	|| ccsspectrumrequestifindex.is_set
	|| ccsspectrumrequestmacaddr.is_set
	|| ccsspectrumrequestlowfreq.is_set
	|| ccsspectrumrequestupperfreq.is_set
	|| ccsspectrumrequestresolution.is_set
	|| ccsspectrumrequestoperation.is_set
	|| ccsspectrumrequestoperstate.is_set
	|| ccsspectrumrequeststarttime.is_set
	|| ccsspectrumrequeststoppedtime.is_set
	|| ccsspectrumrequeststatus.is_set;
}

bool CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccsspectrumrequestindex.yfilter)
	|| ydk::is_set(ccsspectrumrequestifindex.yfilter)
	|| ydk::is_set(ccsspectrumrequestmacaddr.yfilter)
	|| ydk::is_set(ccsspectrumrequestlowfreq.yfilter)
	|| ydk::is_set(ccsspectrumrequestupperfreq.yfilter)
	|| ydk::is_set(ccsspectrumrequestresolution.yfilter)
	|| ydk::is_set(ccsspectrumrequestoperation.yfilter)
	|| ydk::is_set(ccsspectrumrequestoperstate.yfilter)
	|| ydk::is_set(ccsspectrumrequeststarttime.yfilter)
	|| ydk::is_set(ccsspectrumrequeststoppedtime.yfilter)
	|| ydk::is_set(ccsspectrumrequeststatus.yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/ccsSpectrumRequestTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsSpectrumRequestEntry";
    ADD_KEY_TOKEN(ccsspectrumrequestindex, "ccsSpectrumRequestIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccsspectrumrequestindex.is_set || is_set(ccsspectrumrequestindex.yfilter)) leaf_name_data.push_back(ccsspectrumrequestindex.get_name_leafdata());
    if (ccsspectrumrequestifindex.is_set || is_set(ccsspectrumrequestifindex.yfilter)) leaf_name_data.push_back(ccsspectrumrequestifindex.get_name_leafdata());
    if (ccsspectrumrequestmacaddr.is_set || is_set(ccsspectrumrequestmacaddr.yfilter)) leaf_name_data.push_back(ccsspectrumrequestmacaddr.get_name_leafdata());
    if (ccsspectrumrequestlowfreq.is_set || is_set(ccsspectrumrequestlowfreq.yfilter)) leaf_name_data.push_back(ccsspectrumrequestlowfreq.get_name_leafdata());
    if (ccsspectrumrequestupperfreq.is_set || is_set(ccsspectrumrequestupperfreq.yfilter)) leaf_name_data.push_back(ccsspectrumrequestupperfreq.get_name_leafdata());
    if (ccsspectrumrequestresolution.is_set || is_set(ccsspectrumrequestresolution.yfilter)) leaf_name_data.push_back(ccsspectrumrequestresolution.get_name_leafdata());
    if (ccsspectrumrequestoperation.is_set || is_set(ccsspectrumrequestoperation.yfilter)) leaf_name_data.push_back(ccsspectrumrequestoperation.get_name_leafdata());
    if (ccsspectrumrequestoperstate.is_set || is_set(ccsspectrumrequestoperstate.yfilter)) leaf_name_data.push_back(ccsspectrumrequestoperstate.get_name_leafdata());
    if (ccsspectrumrequeststarttime.is_set || is_set(ccsspectrumrequeststarttime.yfilter)) leaf_name_data.push_back(ccsspectrumrequeststarttime.get_name_leafdata());
    if (ccsspectrumrequeststoppedtime.is_set || is_set(ccsspectrumrequeststoppedtime.yfilter)) leaf_name_data.push_back(ccsspectrumrequeststoppedtime.get_name_leafdata());
    if (ccsspectrumrequeststatus.is_set || is_set(ccsspectrumrequeststatus.yfilter)) leaf_name_data.push_back(ccsspectrumrequeststatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccsSpectrumRequestIndex")
    {
        ccsspectrumrequestindex = value;
        ccsspectrumrequestindex.value_namespace = name_space;
        ccsspectrumrequestindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpectrumRequestIfIndex")
    {
        ccsspectrumrequestifindex = value;
        ccsspectrumrequestifindex.value_namespace = name_space;
        ccsspectrumrequestifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpectrumRequestMacAddr")
    {
        ccsspectrumrequestmacaddr = value;
        ccsspectrumrequestmacaddr.value_namespace = name_space;
        ccsspectrumrequestmacaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpectrumRequestLowFreq")
    {
        ccsspectrumrequestlowfreq = value;
        ccsspectrumrequestlowfreq.value_namespace = name_space;
        ccsspectrumrequestlowfreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpectrumRequestUpperFreq")
    {
        ccsspectrumrequestupperfreq = value;
        ccsspectrumrequestupperfreq.value_namespace = name_space;
        ccsspectrumrequestupperfreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpectrumRequestResolution")
    {
        ccsspectrumrequestresolution = value;
        ccsspectrumrequestresolution.value_namespace = name_space;
        ccsspectrumrequestresolution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpectrumRequestOperation")
    {
        ccsspectrumrequestoperation = value;
        ccsspectrumrequestoperation.value_namespace = name_space;
        ccsspectrumrequestoperation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpectrumRequestOperState")
    {
        ccsspectrumrequestoperstate = value;
        ccsspectrumrequestoperstate.value_namespace = name_space;
        ccsspectrumrequestoperstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpectrumRequestStartTime")
    {
        ccsspectrumrequeststarttime = value;
        ccsspectrumrequeststarttime.value_namespace = name_space;
        ccsspectrumrequeststarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpectrumRequestStoppedTime")
    {
        ccsspectrumrequeststoppedtime = value;
        ccsspectrumrequeststoppedtime.value_namespace = name_space;
        ccsspectrumrequeststoppedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpectrumRequestStatus")
    {
        ccsspectrumrequeststatus = value;
        ccsspectrumrequeststatus.value_namespace = name_space;
        ccsspectrumrequeststatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccsSpectrumRequestIndex")
    {
        ccsspectrumrequestindex.yfilter = yfilter;
    }
    if(value_path == "ccsSpectrumRequestIfIndex")
    {
        ccsspectrumrequestifindex.yfilter = yfilter;
    }
    if(value_path == "ccsSpectrumRequestMacAddr")
    {
        ccsspectrumrequestmacaddr.yfilter = yfilter;
    }
    if(value_path == "ccsSpectrumRequestLowFreq")
    {
        ccsspectrumrequestlowfreq.yfilter = yfilter;
    }
    if(value_path == "ccsSpectrumRequestUpperFreq")
    {
        ccsspectrumrequestupperfreq.yfilter = yfilter;
    }
    if(value_path == "ccsSpectrumRequestResolution")
    {
        ccsspectrumrequestresolution.yfilter = yfilter;
    }
    if(value_path == "ccsSpectrumRequestOperation")
    {
        ccsspectrumrequestoperation.yfilter = yfilter;
    }
    if(value_path == "ccsSpectrumRequestOperState")
    {
        ccsspectrumrequestoperstate.yfilter = yfilter;
    }
    if(value_path == "ccsSpectrumRequestStartTime")
    {
        ccsspectrumrequeststarttime.yfilter = yfilter;
    }
    if(value_path == "ccsSpectrumRequestStoppedTime")
    {
        ccsspectrumrequeststoppedtime.yfilter = yfilter;
    }
    if(value_path == "ccsSpectrumRequestStatus")
    {
        ccsspectrumrequeststatus.yfilter = yfilter;
    }
}

bool CISCOCABLESPECTRUMMIB::CcsSpectrumRequestTable::CcsSpectrumRequestEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsSpectrumRequestIndex" || name == "ccsSpectrumRequestIfIndex" || name == "ccsSpectrumRequestMacAddr" || name == "ccsSpectrumRequestLowFreq" || name == "ccsSpectrumRequestUpperFreq" || name == "ccsSpectrumRequestResolution" || name == "ccsSpectrumRequestOperation" || name == "ccsSpectrumRequestOperState" || name == "ccsSpectrumRequestStartTime" || name == "ccsSpectrumRequestStoppedTime" || name == "ccsSpectrumRequestStatus")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::CcsSpectrumDataTable()
    :
    ccsspectrumdataentry(this, {"ccsspectrumrequestindex", "ccsspectrumdatafreq"})
{

    yang_name = "ccsSpectrumDataTable"; yang_parent_name = "CISCO-CABLE-SPECTRUM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::~CcsSpectrumDataTable()
{
}

bool CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccsspectrumdataentry.len(); index++)
    {
        if(ccsspectrumdataentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::has_operation() const
{
    for (std::size_t index=0; index<ccsspectrumdataentry.len(); index++)
    {
        if(ccsspectrumdataentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsSpectrumDataTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccsSpectrumDataEntry")
    {
        auto ent_ = std::make_shared<CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::CcsSpectrumDataEntry>();
        ent_->parent = this;
        ccsspectrumdataentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ccsspectrumdataentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsSpectrumDataEntry")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::CcsSpectrumDataEntry::CcsSpectrumDataEntry()
    :
    ccsspectrumrequestindex{YType::str, "ccsSpectrumRequestIndex"},
    ccsspectrumdatafreq{YType::int32, "ccsSpectrumDataFreq"},
    ccsspectrumdatapower{YType::int32, "ccsSpectrumDataPower"}
{

    yang_name = "ccsSpectrumDataEntry"; yang_parent_name = "ccsSpectrumDataTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::CcsSpectrumDataEntry::~CcsSpectrumDataEntry()
{
}

bool CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::CcsSpectrumDataEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccsspectrumrequestindex.is_set
	|| ccsspectrumdatafreq.is_set
	|| ccsspectrumdatapower.is_set;
}

bool CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::CcsSpectrumDataEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccsspectrumrequestindex.yfilter)
	|| ydk::is_set(ccsspectrumdatafreq.yfilter)
	|| ydk::is_set(ccsspectrumdatapower.yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::CcsSpectrumDataEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/ccsSpectrumDataTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::CcsSpectrumDataEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsSpectrumDataEntry";
    ADD_KEY_TOKEN(ccsspectrumrequestindex, "ccsSpectrumRequestIndex");
    ADD_KEY_TOKEN(ccsspectrumdatafreq, "ccsSpectrumDataFreq");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::CcsSpectrumDataEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccsspectrumrequestindex.is_set || is_set(ccsspectrumrequestindex.yfilter)) leaf_name_data.push_back(ccsspectrumrequestindex.get_name_leafdata());
    if (ccsspectrumdatafreq.is_set || is_set(ccsspectrumdatafreq.yfilter)) leaf_name_data.push_back(ccsspectrumdatafreq.get_name_leafdata());
    if (ccsspectrumdatapower.is_set || is_set(ccsspectrumdatapower.yfilter)) leaf_name_data.push_back(ccsspectrumdatapower.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::CcsSpectrumDataEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::CcsSpectrumDataEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::CcsSpectrumDataEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccsSpectrumRequestIndex")
    {
        ccsspectrumrequestindex = value;
        ccsspectrumrequestindex.value_namespace = name_space;
        ccsspectrumrequestindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpectrumDataFreq")
    {
        ccsspectrumdatafreq = value;
        ccsspectrumdatafreq.value_namespace = name_space;
        ccsspectrumdatafreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpectrumDataPower")
    {
        ccsspectrumdatapower = value;
        ccsspectrumdatapower.value_namespace = name_space;
        ccsspectrumdatapower.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::CcsSpectrumDataEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccsSpectrumRequestIndex")
    {
        ccsspectrumrequestindex.yfilter = yfilter;
    }
    if(value_path == "ccsSpectrumDataFreq")
    {
        ccsspectrumdatafreq.yfilter = yfilter;
    }
    if(value_path == "ccsSpectrumDataPower")
    {
        ccsspectrumdatapower.yfilter = yfilter;
    }
}

bool CISCOCABLESPECTRUMMIB::CcsSpectrumDataTable::CcsSpectrumDataEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsSpectrumRequestIndex" || name == "ccsSpectrumDataFreq" || name == "ccsSpectrumDataPower")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::CcsSNRRequestTable()
    :
    ccssnrrequestentry(this, {"ccssnrrequestindex"})
{

    yang_name = "ccsSNRRequestTable"; yang_parent_name = "CISCO-CABLE-SPECTRUM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::~CcsSNRRequestTable()
{
}

bool CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccssnrrequestentry.len(); index++)
    {
        if(ccssnrrequestentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::has_operation() const
{
    for (std::size_t index=0; index<ccssnrrequestentry.len(); index++)
    {
        if(ccssnrrequestentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsSNRRequestTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccsSNRRequestEntry")
    {
        auto ent_ = std::make_shared<CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::CcsSNRRequestEntry>();
        ent_->parent = this;
        ccssnrrequestentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ccssnrrequestentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsSNRRequestEntry")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::CcsSNRRequestEntry::CcsSNRRequestEntry()
    :
    ccssnrrequestindex{YType::int32, "ccsSNRRequestIndex"},
    ccssnrrequestmacaddr{YType::str, "ccsSNRRequestMacAddr"},
    ccssnrrequestsnr{YType::int32, "ccsSNRRequestSNR"},
    ccssnrrequestoperation{YType::enumeration, "ccsSNRRequestOperation"},
    ccssnrrequestoperstate{YType::enumeration, "ccsSNRRequestOperState"},
    ccssnrrequeststarttime{YType::uint32, "ccsSNRRequestStartTime"},
    ccssnrrequeststoppedtime{YType::uint32, "ccsSNRRequestStoppedTime"},
    ccssnrrequeststatus{YType::enumeration, "ccsSNRRequestStatus"}
{

    yang_name = "ccsSNRRequestEntry"; yang_parent_name = "ccsSNRRequestTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::CcsSNRRequestEntry::~CcsSNRRequestEntry()
{
}

bool CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::CcsSNRRequestEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccssnrrequestindex.is_set
	|| ccssnrrequestmacaddr.is_set
	|| ccssnrrequestsnr.is_set
	|| ccssnrrequestoperation.is_set
	|| ccssnrrequestoperstate.is_set
	|| ccssnrrequeststarttime.is_set
	|| ccssnrrequeststoppedtime.is_set
	|| ccssnrrequeststatus.is_set;
}

bool CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::CcsSNRRequestEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccssnrrequestindex.yfilter)
	|| ydk::is_set(ccssnrrequestmacaddr.yfilter)
	|| ydk::is_set(ccssnrrequestsnr.yfilter)
	|| ydk::is_set(ccssnrrequestoperation.yfilter)
	|| ydk::is_set(ccssnrrequestoperstate.yfilter)
	|| ydk::is_set(ccssnrrequeststarttime.yfilter)
	|| ydk::is_set(ccssnrrequeststoppedtime.yfilter)
	|| ydk::is_set(ccssnrrequeststatus.yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::CcsSNRRequestEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/ccsSNRRequestTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::CcsSNRRequestEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsSNRRequestEntry";
    ADD_KEY_TOKEN(ccssnrrequestindex, "ccsSNRRequestIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::CcsSNRRequestEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccssnrrequestindex.is_set || is_set(ccssnrrequestindex.yfilter)) leaf_name_data.push_back(ccssnrrequestindex.get_name_leafdata());
    if (ccssnrrequestmacaddr.is_set || is_set(ccssnrrequestmacaddr.yfilter)) leaf_name_data.push_back(ccssnrrequestmacaddr.get_name_leafdata());
    if (ccssnrrequestsnr.is_set || is_set(ccssnrrequestsnr.yfilter)) leaf_name_data.push_back(ccssnrrequestsnr.get_name_leafdata());
    if (ccssnrrequestoperation.is_set || is_set(ccssnrrequestoperation.yfilter)) leaf_name_data.push_back(ccssnrrequestoperation.get_name_leafdata());
    if (ccssnrrequestoperstate.is_set || is_set(ccssnrrequestoperstate.yfilter)) leaf_name_data.push_back(ccssnrrequestoperstate.get_name_leafdata());
    if (ccssnrrequeststarttime.is_set || is_set(ccssnrrequeststarttime.yfilter)) leaf_name_data.push_back(ccssnrrequeststarttime.get_name_leafdata());
    if (ccssnrrequeststoppedtime.is_set || is_set(ccssnrrequeststoppedtime.yfilter)) leaf_name_data.push_back(ccssnrrequeststoppedtime.get_name_leafdata());
    if (ccssnrrequeststatus.is_set || is_set(ccssnrrequeststatus.yfilter)) leaf_name_data.push_back(ccssnrrequeststatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::CcsSNRRequestEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::CcsSNRRequestEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::CcsSNRRequestEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccsSNRRequestIndex")
    {
        ccssnrrequestindex = value;
        ccssnrrequestindex.value_namespace = name_space;
        ccssnrrequestindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSNRRequestMacAddr")
    {
        ccssnrrequestmacaddr = value;
        ccssnrrequestmacaddr.value_namespace = name_space;
        ccssnrrequestmacaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSNRRequestSNR")
    {
        ccssnrrequestsnr = value;
        ccssnrrequestsnr.value_namespace = name_space;
        ccssnrrequestsnr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSNRRequestOperation")
    {
        ccssnrrequestoperation = value;
        ccssnrrequestoperation.value_namespace = name_space;
        ccssnrrequestoperation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSNRRequestOperState")
    {
        ccssnrrequestoperstate = value;
        ccssnrrequestoperstate.value_namespace = name_space;
        ccssnrrequestoperstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSNRRequestStartTime")
    {
        ccssnrrequeststarttime = value;
        ccssnrrequeststarttime.value_namespace = name_space;
        ccssnrrequeststarttime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSNRRequestStoppedTime")
    {
        ccssnrrequeststoppedtime = value;
        ccssnrrequeststoppedtime.value_namespace = name_space;
        ccssnrrequeststoppedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSNRRequestStatus")
    {
        ccssnrrequeststatus = value;
        ccssnrrequeststatus.value_namespace = name_space;
        ccssnrrequeststatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::CcsSNRRequestEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccsSNRRequestIndex")
    {
        ccssnrrequestindex.yfilter = yfilter;
    }
    if(value_path == "ccsSNRRequestMacAddr")
    {
        ccssnrrequestmacaddr.yfilter = yfilter;
    }
    if(value_path == "ccsSNRRequestSNR")
    {
        ccssnrrequestsnr.yfilter = yfilter;
    }
    if(value_path == "ccsSNRRequestOperation")
    {
        ccssnrrequestoperation.yfilter = yfilter;
    }
    if(value_path == "ccsSNRRequestOperState")
    {
        ccssnrrequestoperstate.yfilter = yfilter;
    }
    if(value_path == "ccsSNRRequestStartTime")
    {
        ccssnrrequeststarttime.yfilter = yfilter;
    }
    if(value_path == "ccsSNRRequestStoppedTime")
    {
        ccssnrrequeststoppedtime.yfilter = yfilter;
    }
    if(value_path == "ccsSNRRequestStatus")
    {
        ccssnrrequeststatus.yfilter = yfilter;
    }
}

bool CISCOCABLESPECTRUMMIB::CcsSNRRequestTable::CcsSNRRequestEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsSNRRequestIndex" || name == "ccsSNRRequestMacAddr" || name == "ccsSNRRequestSNR" || name == "ccsSNRRequestOperation" || name == "ccsSNRRequestOperState" || name == "ccsSNRRequestStartTime" || name == "ccsSNRRequestStoppedTime" || name == "ccsSNRRequestStatus")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupTable()
    :
    ccsupinspecgroupentry(this, {"ccsspecgroupnumber", "ccsspecgroupupstreamifindex"})
{

    yang_name = "ccsUpInSpecGroupTable"; yang_parent_name = "CISCO-CABLE-SPECTRUM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::~CcsUpInSpecGroupTable()
{
}

bool CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccsupinspecgroupentry.len(); index++)
    {
        if(ccsupinspecgroupentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::has_operation() const
{
    for (std::size_t index=0; index<ccsupinspecgroupentry.len(); index++)
    {
        if(ccsupinspecgroupentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsUpInSpecGroupTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccsUpInSpecGroupEntry")
    {
        auto ent_ = std::make_shared<CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupEntry>();
        ent_->parent = this;
        ccsupinspecgroupentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ccsupinspecgroupentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsUpInSpecGroupEntry")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupEntry::CcsUpInSpecGroupEntry()
    :
    ccsspecgroupnumber{YType::uint32, "ccsSpecGroupNumber"},
    ccsspecgroupupstreamifindex{YType::int32, "ccsSpecGroupUpstreamIfIndex"},
    ccsspecgroupupstreamstorage{YType::enumeration, "ccsSpecGroupUpstreamStorage"},
    ccsspecgroupupstreamrowstatus{YType::enumeration, "ccsSpecGroupUpstreamRowStatus"}
{

    yang_name = "ccsUpInSpecGroupEntry"; yang_parent_name = "ccsUpInSpecGroupTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupEntry::~CcsUpInSpecGroupEntry()
{
}

bool CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccsspecgroupnumber.is_set
	|| ccsspecgroupupstreamifindex.is_set
	|| ccsspecgroupupstreamstorage.is_set
	|| ccsspecgroupupstreamrowstatus.is_set;
}

bool CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccsspecgroupnumber.yfilter)
	|| ydk::is_set(ccsspecgroupupstreamifindex.yfilter)
	|| ydk::is_set(ccsspecgroupupstreamstorage.yfilter)
	|| ydk::is_set(ccsspecgroupupstreamrowstatus.yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/ccsUpInSpecGroupTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsUpInSpecGroupEntry";
    ADD_KEY_TOKEN(ccsspecgroupnumber, "ccsSpecGroupNumber");
    ADD_KEY_TOKEN(ccsspecgroupupstreamifindex, "ccsSpecGroupUpstreamIfIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccsspecgroupnumber.is_set || is_set(ccsspecgroupnumber.yfilter)) leaf_name_data.push_back(ccsspecgroupnumber.get_name_leafdata());
    if (ccsspecgroupupstreamifindex.is_set || is_set(ccsspecgroupupstreamifindex.yfilter)) leaf_name_data.push_back(ccsspecgroupupstreamifindex.get_name_leafdata());
    if (ccsspecgroupupstreamstorage.is_set || is_set(ccsspecgroupupstreamstorage.yfilter)) leaf_name_data.push_back(ccsspecgroupupstreamstorage.get_name_leafdata());
    if (ccsspecgroupupstreamrowstatus.is_set || is_set(ccsspecgroupupstreamrowstatus.yfilter)) leaf_name_data.push_back(ccsspecgroupupstreamrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccsSpecGroupNumber")
    {
        ccsspecgroupnumber = value;
        ccsspecgroupnumber.value_namespace = name_space;
        ccsspecgroupnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpecGroupUpstreamIfIndex")
    {
        ccsspecgroupupstreamifindex = value;
        ccsspecgroupupstreamifindex.value_namespace = name_space;
        ccsspecgroupupstreamifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpecGroupUpstreamStorage")
    {
        ccsspecgroupupstreamstorage = value;
        ccsspecgroupupstreamstorage.value_namespace = name_space;
        ccsspecgroupupstreamstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpecGroupUpstreamRowStatus")
    {
        ccsspecgroupupstreamrowstatus = value;
        ccsspecgroupupstreamrowstatus.value_namespace = name_space;
        ccsspecgroupupstreamrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccsSpecGroupNumber")
    {
        ccsspecgroupnumber.yfilter = yfilter;
    }
    if(value_path == "ccsSpecGroupUpstreamIfIndex")
    {
        ccsspecgroupupstreamifindex.yfilter = yfilter;
    }
    if(value_path == "ccsSpecGroupUpstreamStorage")
    {
        ccsspecgroupupstreamstorage.yfilter = yfilter;
    }
    if(value_path == "ccsSpecGroupUpstreamRowStatus")
    {
        ccsspecgroupupstreamrowstatus.yfilter = yfilter;
    }
}

bool CISCOCABLESPECTRUMMIB::CcsUpInSpecGroupTable::CcsUpInSpecGroupEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsSpecGroupNumber" || name == "ccsSpecGroupUpstreamIfIndex" || name == "ccsSpecGroupUpstreamStorage" || name == "ccsSpecGroupUpstreamRowStatus")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::CcsUpInFiberNodeTable()
    :
    ccsupinfibernodeentry(this, {"ccsfibernodenumber", "ccsfibernodeupstreamifindex"})
{

    yang_name = "ccsUpInFiberNodeTable"; yang_parent_name = "CISCO-CABLE-SPECTRUM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::~CcsUpInFiberNodeTable()
{
}

bool CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccsupinfibernodeentry.len(); index++)
    {
        if(ccsupinfibernodeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::has_operation() const
{
    for (std::size_t index=0; index<ccsupinfibernodeentry.len(); index++)
    {
        if(ccsupinfibernodeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsUpInFiberNodeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccsUpInFiberNodeEntry")
    {
        auto ent_ = std::make_shared<CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::CcsUpInFiberNodeEntry>();
        ent_->parent = this;
        ccsupinfibernodeentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ccsupinfibernodeentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsUpInFiberNodeEntry")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::CcsUpInFiberNodeEntry::CcsUpInFiberNodeEntry()
    :
    ccsfibernodenumber{YType::uint32, "ccsFiberNodeNumber"},
    ccsfibernodeupstreamifindex{YType::int32, "ccsFiberNodeUpstreamIfIndex"},
    ccsfibernodeupstreamstorage{YType::enumeration, "ccsFiberNodeUpstreamStorage"},
    ccsfibernodeupstreamrowstatus{YType::enumeration, "ccsFiberNodeUpstreamRowStatus"}
{

    yang_name = "ccsUpInFiberNodeEntry"; yang_parent_name = "ccsUpInFiberNodeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::CcsUpInFiberNodeEntry::~CcsUpInFiberNodeEntry()
{
}

bool CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::CcsUpInFiberNodeEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccsfibernodenumber.is_set
	|| ccsfibernodeupstreamifindex.is_set
	|| ccsfibernodeupstreamstorage.is_set
	|| ccsfibernodeupstreamrowstatus.is_set;
}

bool CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::CcsUpInFiberNodeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccsfibernodenumber.yfilter)
	|| ydk::is_set(ccsfibernodeupstreamifindex.yfilter)
	|| ydk::is_set(ccsfibernodeupstreamstorage.yfilter)
	|| ydk::is_set(ccsfibernodeupstreamrowstatus.yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::CcsUpInFiberNodeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/ccsUpInFiberNodeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::CcsUpInFiberNodeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsUpInFiberNodeEntry";
    ADD_KEY_TOKEN(ccsfibernodenumber, "ccsFiberNodeNumber");
    ADD_KEY_TOKEN(ccsfibernodeupstreamifindex, "ccsFiberNodeUpstreamIfIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::CcsUpInFiberNodeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccsfibernodenumber.is_set || is_set(ccsfibernodenumber.yfilter)) leaf_name_data.push_back(ccsfibernodenumber.get_name_leafdata());
    if (ccsfibernodeupstreamifindex.is_set || is_set(ccsfibernodeupstreamifindex.yfilter)) leaf_name_data.push_back(ccsfibernodeupstreamifindex.get_name_leafdata());
    if (ccsfibernodeupstreamstorage.is_set || is_set(ccsfibernodeupstreamstorage.yfilter)) leaf_name_data.push_back(ccsfibernodeupstreamstorage.get_name_leafdata());
    if (ccsfibernodeupstreamrowstatus.is_set || is_set(ccsfibernodeupstreamrowstatus.yfilter)) leaf_name_data.push_back(ccsfibernodeupstreamrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::CcsUpInFiberNodeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::CcsUpInFiberNodeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::CcsUpInFiberNodeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccsFiberNodeNumber")
    {
        ccsfibernodenumber = value;
        ccsfibernodenumber.value_namespace = name_space;
        ccsfibernodenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFiberNodeUpstreamIfIndex")
    {
        ccsfibernodeupstreamifindex = value;
        ccsfibernodeupstreamifindex.value_namespace = name_space;
        ccsfibernodeupstreamifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFiberNodeUpstreamStorage")
    {
        ccsfibernodeupstreamstorage = value;
        ccsfibernodeupstreamstorage.value_namespace = name_space;
        ccsfibernodeupstreamstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsFiberNodeUpstreamRowStatus")
    {
        ccsfibernodeupstreamrowstatus = value;
        ccsfibernodeupstreamrowstatus.value_namespace = name_space;
        ccsfibernodeupstreamrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::CcsUpInFiberNodeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccsFiberNodeNumber")
    {
        ccsfibernodenumber.yfilter = yfilter;
    }
    if(value_path == "ccsFiberNodeUpstreamIfIndex")
    {
        ccsfibernodeupstreamifindex.yfilter = yfilter;
    }
    if(value_path == "ccsFiberNodeUpstreamStorage")
    {
        ccsfibernodeupstreamstorage.yfilter = yfilter;
    }
    if(value_path == "ccsFiberNodeUpstreamRowStatus")
    {
        ccsfibernodeupstreamrowstatus.yfilter = yfilter;
    }
}

bool CISCOCABLESPECTRUMMIB::CcsUpInFiberNodeTable::CcsUpInFiberNodeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsFiberNodeNumber" || name == "ccsFiberNodeUpstreamIfIndex" || name == "ccsFiberNodeUpstreamStorage" || name == "ccsFiberNodeUpstreamRowStatus")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtTable()
    :
    ccsupspecmgmtentry(this, {"ifindex"})
{

    yang_name = "ccsUpSpecMgmtTable"; yang_parent_name = "CISCO-CABLE-SPECTRUM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::~CcsUpSpecMgmtTable()
{
}

bool CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccsupspecmgmtentry.len(); index++)
    {
        if(ccsupspecmgmtentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::has_operation() const
{
    for (std::size_t index=0; index<ccsupspecmgmtentry.len(); index++)
    {
        if(ccsupspecmgmtentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsUpSpecMgmtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccsUpSpecMgmtEntry")
    {
        auto ent_ = std::make_shared<CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry>();
        ent_->parent = this;
        ccsupspecmgmtentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ccsupspecmgmtentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsUpSpecMgmtEntry")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::CcsUpSpecMgmtEntry()
    :
    ifindex{YType::str, "ifIndex"},
    ccsupspecmgmthoppriority{YType::enumeration, "ccsUpSpecMgmtHopPriority"},
    ccsupspecmgmtsnrthres1{YType::int32, "ccsUpSpecMgmtSnrThres1"},
    ccsupspecmgmtsnrthres2{YType::int32, "ccsUpSpecMgmtSnrThres2"},
    ccsupspecmgmtfeccorrectthres1{YType::int32, "ccsUpSpecMgmtFecCorrectThres1"},
    ccsupspecmgmtfeccorrectthres2{YType::int32, "ccsUpSpecMgmtFecCorrectThres2"},
    ccsupspecmgmtfecuncorrectthres1{YType::int32, "ccsUpSpecMgmtFecUnCorrectThres1"},
    ccsupspecmgmtfecuncorrectthres2{YType::int32, "ccsUpSpecMgmtFecUnCorrectThres2"},
    ccsupspecmgmtsnrpollperiod{YType::int32, "ccsUpSpecMgmtSnrPollPeriod"},
    ccsupspecmgmthopcondition{YType::enumeration, "ccsUpSpecMgmtHopCondition"},
    ccsupspecmgmtfromcenterfreq{YType::uint32, "ccsUpSpecMgmtFromCenterFreq"},
    ccsupspecmgmttocenterfreq{YType::uint32, "ccsUpSpecMgmtToCenterFreq"},
    ccsupspecmgmtfrombandwidth{YType::uint32, "ccsUpSpecMgmtFromBandWidth"},
    ccsupspecmgmttobandwidth{YType::uint32, "ccsUpSpecMgmtToBandWidth"},
    ccsupspecmgmtfrommodprofile{YType::int32, "ccsUpSpecMgmtFromModProfile"},
    ccsupspecmgmttomodprofile{YType::int32, "ccsUpSpecMgmtToModProfile"},
    ccsupspecmgmtsnr{YType::int32, "ccsUpSpecMgmtSNR"},
    ccsupspecmgmtupperboundfreq{YType::int32, "ccsUpSpecMgmtUpperBoundFreq"},
    ccsupspecmgmtcnrthres1{YType::int32, "ccsUpSpecMgmtCnrThres1"},
    ccsupspecmgmtcnrthres2{YType::int32, "ccsUpSpecMgmtCnrThres2"},
    ccsupspecmgmtcnr{YType::int32, "ccsUpSpecMgmtCNR"},
    ccsupspecmgmtmissedmaintmsgthres{YType::int32, "ccsUpSpecMgmtMissedMaintMsgThres"},
    ccsupspecmgmthopperiod{YType::int32, "ccsUpSpecMgmtHopPeriod"},
    ccsupspecmgmtcriteria{YType::bits, "ccsUpSpecMgmtCriteria"},
    ccsupspecmgmtspecgroup{YType::uint32, "ccsUpSpecMgmtSpecGroup"},
    ccsupspecmgmtsharedspectrum{YType::uint32, "ccsUpSpecMgmtSharedSpectrum"}
{

    yang_name = "ccsUpSpecMgmtEntry"; yang_parent_name = "ccsUpSpecMgmtTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::~CcsUpSpecMgmtEntry()
{
}

bool CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| ccsupspecmgmthoppriority.is_set
	|| ccsupspecmgmtsnrthres1.is_set
	|| ccsupspecmgmtsnrthres2.is_set
	|| ccsupspecmgmtfeccorrectthres1.is_set
	|| ccsupspecmgmtfeccorrectthres2.is_set
	|| ccsupspecmgmtfecuncorrectthres1.is_set
	|| ccsupspecmgmtfecuncorrectthres2.is_set
	|| ccsupspecmgmtsnrpollperiod.is_set
	|| ccsupspecmgmthopcondition.is_set
	|| ccsupspecmgmtfromcenterfreq.is_set
	|| ccsupspecmgmttocenterfreq.is_set
	|| ccsupspecmgmtfrombandwidth.is_set
	|| ccsupspecmgmttobandwidth.is_set
	|| ccsupspecmgmtfrommodprofile.is_set
	|| ccsupspecmgmttomodprofile.is_set
	|| ccsupspecmgmtsnr.is_set
	|| ccsupspecmgmtupperboundfreq.is_set
	|| ccsupspecmgmtcnrthres1.is_set
	|| ccsupspecmgmtcnrthres2.is_set
	|| ccsupspecmgmtcnr.is_set
	|| ccsupspecmgmtmissedmaintmsgthres.is_set
	|| ccsupspecmgmthopperiod.is_set
	|| ccsupspecmgmtcriteria.is_set
	|| ccsupspecmgmtspecgroup.is_set
	|| ccsupspecmgmtsharedspectrum.is_set;
}

bool CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(ccsupspecmgmthoppriority.yfilter)
	|| ydk::is_set(ccsupspecmgmtsnrthres1.yfilter)
	|| ydk::is_set(ccsupspecmgmtsnrthres2.yfilter)
	|| ydk::is_set(ccsupspecmgmtfeccorrectthres1.yfilter)
	|| ydk::is_set(ccsupspecmgmtfeccorrectthres2.yfilter)
	|| ydk::is_set(ccsupspecmgmtfecuncorrectthres1.yfilter)
	|| ydk::is_set(ccsupspecmgmtfecuncorrectthres2.yfilter)
	|| ydk::is_set(ccsupspecmgmtsnrpollperiod.yfilter)
	|| ydk::is_set(ccsupspecmgmthopcondition.yfilter)
	|| ydk::is_set(ccsupspecmgmtfromcenterfreq.yfilter)
	|| ydk::is_set(ccsupspecmgmttocenterfreq.yfilter)
	|| ydk::is_set(ccsupspecmgmtfrombandwidth.yfilter)
	|| ydk::is_set(ccsupspecmgmttobandwidth.yfilter)
	|| ydk::is_set(ccsupspecmgmtfrommodprofile.yfilter)
	|| ydk::is_set(ccsupspecmgmttomodprofile.yfilter)
	|| ydk::is_set(ccsupspecmgmtsnr.yfilter)
	|| ydk::is_set(ccsupspecmgmtupperboundfreq.yfilter)
	|| ydk::is_set(ccsupspecmgmtcnrthres1.yfilter)
	|| ydk::is_set(ccsupspecmgmtcnrthres2.yfilter)
	|| ydk::is_set(ccsupspecmgmtcnr.yfilter)
	|| ydk::is_set(ccsupspecmgmtmissedmaintmsgthres.yfilter)
	|| ydk::is_set(ccsupspecmgmthopperiod.yfilter)
	|| ydk::is_set(ccsupspecmgmtcriteria.yfilter)
	|| ydk::is_set(ccsupspecmgmtspecgroup.yfilter)
	|| ydk::is_set(ccsupspecmgmtsharedspectrum.yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/ccsUpSpecMgmtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsUpSpecMgmtEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (ccsupspecmgmthoppriority.is_set || is_set(ccsupspecmgmthoppriority.yfilter)) leaf_name_data.push_back(ccsupspecmgmthoppriority.get_name_leafdata());
    if (ccsupspecmgmtsnrthres1.is_set || is_set(ccsupspecmgmtsnrthres1.yfilter)) leaf_name_data.push_back(ccsupspecmgmtsnrthres1.get_name_leafdata());
    if (ccsupspecmgmtsnrthres2.is_set || is_set(ccsupspecmgmtsnrthres2.yfilter)) leaf_name_data.push_back(ccsupspecmgmtsnrthres2.get_name_leafdata());
    if (ccsupspecmgmtfeccorrectthres1.is_set || is_set(ccsupspecmgmtfeccorrectthres1.yfilter)) leaf_name_data.push_back(ccsupspecmgmtfeccorrectthres1.get_name_leafdata());
    if (ccsupspecmgmtfeccorrectthres2.is_set || is_set(ccsupspecmgmtfeccorrectthres2.yfilter)) leaf_name_data.push_back(ccsupspecmgmtfeccorrectthres2.get_name_leafdata());
    if (ccsupspecmgmtfecuncorrectthres1.is_set || is_set(ccsupspecmgmtfecuncorrectthres1.yfilter)) leaf_name_data.push_back(ccsupspecmgmtfecuncorrectthres1.get_name_leafdata());
    if (ccsupspecmgmtfecuncorrectthres2.is_set || is_set(ccsupspecmgmtfecuncorrectthres2.yfilter)) leaf_name_data.push_back(ccsupspecmgmtfecuncorrectthres2.get_name_leafdata());
    if (ccsupspecmgmtsnrpollperiod.is_set || is_set(ccsupspecmgmtsnrpollperiod.yfilter)) leaf_name_data.push_back(ccsupspecmgmtsnrpollperiod.get_name_leafdata());
    if (ccsupspecmgmthopcondition.is_set || is_set(ccsupspecmgmthopcondition.yfilter)) leaf_name_data.push_back(ccsupspecmgmthopcondition.get_name_leafdata());
    if (ccsupspecmgmtfromcenterfreq.is_set || is_set(ccsupspecmgmtfromcenterfreq.yfilter)) leaf_name_data.push_back(ccsupspecmgmtfromcenterfreq.get_name_leafdata());
    if (ccsupspecmgmttocenterfreq.is_set || is_set(ccsupspecmgmttocenterfreq.yfilter)) leaf_name_data.push_back(ccsupspecmgmttocenterfreq.get_name_leafdata());
    if (ccsupspecmgmtfrombandwidth.is_set || is_set(ccsupspecmgmtfrombandwidth.yfilter)) leaf_name_data.push_back(ccsupspecmgmtfrombandwidth.get_name_leafdata());
    if (ccsupspecmgmttobandwidth.is_set || is_set(ccsupspecmgmttobandwidth.yfilter)) leaf_name_data.push_back(ccsupspecmgmttobandwidth.get_name_leafdata());
    if (ccsupspecmgmtfrommodprofile.is_set || is_set(ccsupspecmgmtfrommodprofile.yfilter)) leaf_name_data.push_back(ccsupspecmgmtfrommodprofile.get_name_leafdata());
    if (ccsupspecmgmttomodprofile.is_set || is_set(ccsupspecmgmttomodprofile.yfilter)) leaf_name_data.push_back(ccsupspecmgmttomodprofile.get_name_leafdata());
    if (ccsupspecmgmtsnr.is_set || is_set(ccsupspecmgmtsnr.yfilter)) leaf_name_data.push_back(ccsupspecmgmtsnr.get_name_leafdata());
    if (ccsupspecmgmtupperboundfreq.is_set || is_set(ccsupspecmgmtupperboundfreq.yfilter)) leaf_name_data.push_back(ccsupspecmgmtupperboundfreq.get_name_leafdata());
    if (ccsupspecmgmtcnrthres1.is_set || is_set(ccsupspecmgmtcnrthres1.yfilter)) leaf_name_data.push_back(ccsupspecmgmtcnrthres1.get_name_leafdata());
    if (ccsupspecmgmtcnrthres2.is_set || is_set(ccsupspecmgmtcnrthres2.yfilter)) leaf_name_data.push_back(ccsupspecmgmtcnrthres2.get_name_leafdata());
    if (ccsupspecmgmtcnr.is_set || is_set(ccsupspecmgmtcnr.yfilter)) leaf_name_data.push_back(ccsupspecmgmtcnr.get_name_leafdata());
    if (ccsupspecmgmtmissedmaintmsgthres.is_set || is_set(ccsupspecmgmtmissedmaintmsgthres.yfilter)) leaf_name_data.push_back(ccsupspecmgmtmissedmaintmsgthres.get_name_leafdata());
    if (ccsupspecmgmthopperiod.is_set || is_set(ccsupspecmgmthopperiod.yfilter)) leaf_name_data.push_back(ccsupspecmgmthopperiod.get_name_leafdata());
    if (ccsupspecmgmtcriteria.is_set || is_set(ccsupspecmgmtcriteria.yfilter)) leaf_name_data.push_back(ccsupspecmgmtcriteria.get_name_leafdata());
    if (ccsupspecmgmtspecgroup.is_set || is_set(ccsupspecmgmtspecgroup.yfilter)) leaf_name_data.push_back(ccsupspecmgmtspecgroup.get_name_leafdata());
    if (ccsupspecmgmtsharedspectrum.is_set || is_set(ccsupspecmgmtsharedspectrum.yfilter)) leaf_name_data.push_back(ccsupspecmgmtsharedspectrum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtHopPriority")
    {
        ccsupspecmgmthoppriority = value;
        ccsupspecmgmthoppriority.value_namespace = name_space;
        ccsupspecmgmthoppriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtSnrThres1")
    {
        ccsupspecmgmtsnrthres1 = value;
        ccsupspecmgmtsnrthres1.value_namespace = name_space;
        ccsupspecmgmtsnrthres1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtSnrThres2")
    {
        ccsupspecmgmtsnrthres2 = value;
        ccsupspecmgmtsnrthres2.value_namespace = name_space;
        ccsupspecmgmtsnrthres2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtFecCorrectThres1")
    {
        ccsupspecmgmtfeccorrectthres1 = value;
        ccsupspecmgmtfeccorrectthres1.value_namespace = name_space;
        ccsupspecmgmtfeccorrectthres1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtFecCorrectThres2")
    {
        ccsupspecmgmtfeccorrectthres2 = value;
        ccsupspecmgmtfeccorrectthres2.value_namespace = name_space;
        ccsupspecmgmtfeccorrectthres2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtFecUnCorrectThres1")
    {
        ccsupspecmgmtfecuncorrectthres1 = value;
        ccsupspecmgmtfecuncorrectthres1.value_namespace = name_space;
        ccsupspecmgmtfecuncorrectthres1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtFecUnCorrectThres2")
    {
        ccsupspecmgmtfecuncorrectthres2 = value;
        ccsupspecmgmtfecuncorrectthres2.value_namespace = name_space;
        ccsupspecmgmtfecuncorrectthres2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtSnrPollPeriod")
    {
        ccsupspecmgmtsnrpollperiod = value;
        ccsupspecmgmtsnrpollperiod.value_namespace = name_space;
        ccsupspecmgmtsnrpollperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtHopCondition")
    {
        ccsupspecmgmthopcondition = value;
        ccsupspecmgmthopcondition.value_namespace = name_space;
        ccsupspecmgmthopcondition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtFromCenterFreq")
    {
        ccsupspecmgmtfromcenterfreq = value;
        ccsupspecmgmtfromcenterfreq.value_namespace = name_space;
        ccsupspecmgmtfromcenterfreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtToCenterFreq")
    {
        ccsupspecmgmttocenterfreq = value;
        ccsupspecmgmttocenterfreq.value_namespace = name_space;
        ccsupspecmgmttocenterfreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtFromBandWidth")
    {
        ccsupspecmgmtfrombandwidth = value;
        ccsupspecmgmtfrombandwidth.value_namespace = name_space;
        ccsupspecmgmtfrombandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtToBandWidth")
    {
        ccsupspecmgmttobandwidth = value;
        ccsupspecmgmttobandwidth.value_namespace = name_space;
        ccsupspecmgmttobandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtFromModProfile")
    {
        ccsupspecmgmtfrommodprofile = value;
        ccsupspecmgmtfrommodprofile.value_namespace = name_space;
        ccsupspecmgmtfrommodprofile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtToModProfile")
    {
        ccsupspecmgmttomodprofile = value;
        ccsupspecmgmttomodprofile.value_namespace = name_space;
        ccsupspecmgmttomodprofile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtSNR")
    {
        ccsupspecmgmtsnr = value;
        ccsupspecmgmtsnr.value_namespace = name_space;
        ccsupspecmgmtsnr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtUpperBoundFreq")
    {
        ccsupspecmgmtupperboundfreq = value;
        ccsupspecmgmtupperboundfreq.value_namespace = name_space;
        ccsupspecmgmtupperboundfreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtCnrThres1")
    {
        ccsupspecmgmtcnrthres1 = value;
        ccsupspecmgmtcnrthres1.value_namespace = name_space;
        ccsupspecmgmtcnrthres1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtCnrThres2")
    {
        ccsupspecmgmtcnrthres2 = value;
        ccsupspecmgmtcnrthres2.value_namespace = name_space;
        ccsupspecmgmtcnrthres2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtCNR")
    {
        ccsupspecmgmtcnr = value;
        ccsupspecmgmtcnr.value_namespace = name_space;
        ccsupspecmgmtcnr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtMissedMaintMsgThres")
    {
        ccsupspecmgmtmissedmaintmsgthres = value;
        ccsupspecmgmtmissedmaintmsgthres.value_namespace = name_space;
        ccsupspecmgmtmissedmaintmsgthres.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtHopPeriod")
    {
        ccsupspecmgmthopperiod = value;
        ccsupspecmgmthopperiod.value_namespace = name_space;
        ccsupspecmgmthopperiod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtCriteria")
    {
        ccsupspecmgmtcriteria[value] = true;
    }
    if(value_path == "ccsUpSpecMgmtSpecGroup")
    {
        ccsupspecmgmtspecgroup = value;
        ccsupspecmgmtspecgroup.value_namespace = name_space;
        ccsupspecmgmtspecgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsUpSpecMgmtSharedSpectrum")
    {
        ccsupspecmgmtsharedspectrum = value;
        ccsupspecmgmtsharedspectrum.value_namespace = name_space;
        ccsupspecmgmtsharedspectrum.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtHopPriority")
    {
        ccsupspecmgmthoppriority.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtSnrThres1")
    {
        ccsupspecmgmtsnrthres1.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtSnrThres2")
    {
        ccsupspecmgmtsnrthres2.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtFecCorrectThres1")
    {
        ccsupspecmgmtfeccorrectthres1.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtFecCorrectThres2")
    {
        ccsupspecmgmtfeccorrectthres2.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtFecUnCorrectThres1")
    {
        ccsupspecmgmtfecuncorrectthres1.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtFecUnCorrectThres2")
    {
        ccsupspecmgmtfecuncorrectthres2.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtSnrPollPeriod")
    {
        ccsupspecmgmtsnrpollperiod.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtHopCondition")
    {
        ccsupspecmgmthopcondition.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtFromCenterFreq")
    {
        ccsupspecmgmtfromcenterfreq.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtToCenterFreq")
    {
        ccsupspecmgmttocenterfreq.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtFromBandWidth")
    {
        ccsupspecmgmtfrombandwidth.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtToBandWidth")
    {
        ccsupspecmgmttobandwidth.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtFromModProfile")
    {
        ccsupspecmgmtfrommodprofile.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtToModProfile")
    {
        ccsupspecmgmttomodprofile.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtSNR")
    {
        ccsupspecmgmtsnr.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtUpperBoundFreq")
    {
        ccsupspecmgmtupperboundfreq.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtCnrThres1")
    {
        ccsupspecmgmtcnrthres1.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtCnrThres2")
    {
        ccsupspecmgmtcnrthres2.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtCNR")
    {
        ccsupspecmgmtcnr.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtMissedMaintMsgThres")
    {
        ccsupspecmgmtmissedmaintmsgthres.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtHopPeriod")
    {
        ccsupspecmgmthopperiod.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtCriteria")
    {
        ccsupspecmgmtcriteria.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtSpecGroup")
    {
        ccsupspecmgmtspecgroup.yfilter = yfilter;
    }
    if(value_path == "ccsUpSpecMgmtSharedSpectrum")
    {
        ccsupspecmgmtsharedspectrum.yfilter = yfilter;
    }
}

bool CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "ccsUpSpecMgmtHopPriority" || name == "ccsUpSpecMgmtSnrThres1" || name == "ccsUpSpecMgmtSnrThres2" || name == "ccsUpSpecMgmtFecCorrectThres1" || name == "ccsUpSpecMgmtFecCorrectThres2" || name == "ccsUpSpecMgmtFecUnCorrectThres1" || name == "ccsUpSpecMgmtFecUnCorrectThres2" || name == "ccsUpSpecMgmtSnrPollPeriod" || name == "ccsUpSpecMgmtHopCondition" || name == "ccsUpSpecMgmtFromCenterFreq" || name == "ccsUpSpecMgmtToCenterFreq" || name == "ccsUpSpecMgmtFromBandWidth" || name == "ccsUpSpecMgmtToBandWidth" || name == "ccsUpSpecMgmtFromModProfile" || name == "ccsUpSpecMgmtToModProfile" || name == "ccsUpSpecMgmtSNR" || name == "ccsUpSpecMgmtUpperBoundFreq" || name == "ccsUpSpecMgmtCnrThres1" || name == "ccsUpSpecMgmtCnrThres2" || name == "ccsUpSpecMgmtCNR" || name == "ccsUpSpecMgmtMissedMaintMsgThres" || name == "ccsUpSpecMgmtHopPeriod" || name == "ccsUpSpecMgmtCriteria" || name == "ccsUpSpecMgmtSpecGroup" || name == "ccsUpSpecMgmtSharedSpectrum")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqTable()
    :
    ccsspecgroupfreqentry(this, {"ccsspecgroupnumber", "ccsspecgroupfreqindex"})
{

    yang_name = "ccsSpecGroupFreqTable"; yang_parent_name = "CISCO-CABLE-SPECTRUM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::~CcsSpecGroupFreqTable()
{
}

bool CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ccsspecgroupfreqentry.len(); index++)
    {
        if(ccsspecgroupfreqentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::has_operation() const
{
    for (std::size_t index=0; index<ccsspecgroupfreqentry.len(); index++)
    {
        if(ccsspecgroupfreqentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsSpecGroupFreqTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccsSpecGroupFreqEntry")
    {
        auto ent_ = std::make_shared<CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry>();
        ent_->parent = this;
        ccsspecgroupfreqentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ccsspecgroupfreqentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsSpecGroupFreqEntry")
        return true;
    return false;
}

CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry::CcsSpecGroupFreqEntry()
    :
    ccsspecgroupnumber{YType::str, "ccsSpecGroupNumber"},
    ccsspecgroupfreqindex{YType::uint32, "ccsSpecGroupFreqIndex"},
    ccsspecgroupfreqtype{YType::enumeration, "ccsSpecGroupFreqType"},
    ccsspecgroupfreqlower{YType::int32, "ccsSpecGroupFreqLower"},
    ccsspecgroupfrequpper{YType::int32, "ccsSpecGroupFreqUpper"},
    ccsspecgroupstorage{YType::enumeration, "ccsSpecGroupStorage"},
    ccsspecgrouprowstatus{YType::enumeration, "ccsSpecGroupRowStatus"}
{

    yang_name = "ccsSpecGroupFreqEntry"; yang_parent_name = "ccsSpecGroupFreqTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry::~CcsSpecGroupFreqEntry()
{
}

bool CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry::has_data() const
{
    if (is_presence_container) return true;
    return ccsspecgroupnumber.is_set
	|| ccsspecgroupfreqindex.is_set
	|| ccsspecgroupfreqtype.is_set
	|| ccsspecgroupfreqlower.is_set
	|| ccsspecgroupfrequpper.is_set
	|| ccsspecgroupstorage.is_set
	|| ccsspecgrouprowstatus.is_set;
}

bool CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ccsspecgroupnumber.yfilter)
	|| ydk::is_set(ccsspecgroupfreqindex.yfilter)
	|| ydk::is_set(ccsspecgroupfreqtype.yfilter)
	|| ydk::is_set(ccsspecgroupfreqlower.yfilter)
	|| ydk::is_set(ccsspecgroupfrequpper.yfilter)
	|| ydk::is_set(ccsspecgroupstorage.yfilter)
	|| ydk::is_set(ccsspecgrouprowstatus.yfilter);
}

std::string CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CABLE-SPECTRUM-MIB:CISCO-CABLE-SPECTRUM-MIB/ccsSpecGroupFreqTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccsSpecGroupFreqEntry";
    ADD_KEY_TOKEN(ccsspecgroupnumber, "ccsSpecGroupNumber");
    ADD_KEY_TOKEN(ccsspecgroupfreqindex, "ccsSpecGroupFreqIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ccsspecgroupnumber.is_set || is_set(ccsspecgroupnumber.yfilter)) leaf_name_data.push_back(ccsspecgroupnumber.get_name_leafdata());
    if (ccsspecgroupfreqindex.is_set || is_set(ccsspecgroupfreqindex.yfilter)) leaf_name_data.push_back(ccsspecgroupfreqindex.get_name_leafdata());
    if (ccsspecgroupfreqtype.is_set || is_set(ccsspecgroupfreqtype.yfilter)) leaf_name_data.push_back(ccsspecgroupfreqtype.get_name_leafdata());
    if (ccsspecgroupfreqlower.is_set || is_set(ccsspecgroupfreqlower.yfilter)) leaf_name_data.push_back(ccsspecgroupfreqlower.get_name_leafdata());
    if (ccsspecgroupfrequpper.is_set || is_set(ccsspecgroupfrequpper.yfilter)) leaf_name_data.push_back(ccsspecgroupfrequpper.get_name_leafdata());
    if (ccsspecgroupstorage.is_set || is_set(ccsspecgroupstorage.yfilter)) leaf_name_data.push_back(ccsspecgroupstorage.get_name_leafdata());
    if (ccsspecgrouprowstatus.is_set || is_set(ccsspecgrouprowstatus.yfilter)) leaf_name_data.push_back(ccsspecgrouprowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccsSpecGroupNumber")
    {
        ccsspecgroupnumber = value;
        ccsspecgroupnumber.value_namespace = name_space;
        ccsspecgroupnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpecGroupFreqIndex")
    {
        ccsspecgroupfreqindex = value;
        ccsspecgroupfreqindex.value_namespace = name_space;
        ccsspecgroupfreqindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpecGroupFreqType")
    {
        ccsspecgroupfreqtype = value;
        ccsspecgroupfreqtype.value_namespace = name_space;
        ccsspecgroupfreqtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpecGroupFreqLower")
    {
        ccsspecgroupfreqlower = value;
        ccsspecgroupfreqlower.value_namespace = name_space;
        ccsspecgroupfreqlower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpecGroupFreqUpper")
    {
        ccsspecgroupfrequpper = value;
        ccsspecgroupfrequpper.value_namespace = name_space;
        ccsspecgroupfrequpper.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpecGroupStorage")
    {
        ccsspecgroupstorage = value;
        ccsspecgroupstorage.value_namespace = name_space;
        ccsspecgroupstorage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccsSpecGroupRowStatus")
    {
        ccsspecgrouprowstatus = value;
        ccsspecgrouprowstatus.value_namespace = name_space;
        ccsspecgrouprowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccsSpecGroupNumber")
    {
        ccsspecgroupnumber.yfilter = yfilter;
    }
    if(value_path == "ccsSpecGroupFreqIndex")
    {
        ccsspecgroupfreqindex.yfilter = yfilter;
    }
    if(value_path == "ccsSpecGroupFreqType")
    {
        ccsspecgroupfreqtype.yfilter = yfilter;
    }
    if(value_path == "ccsSpecGroupFreqLower")
    {
        ccsspecgroupfreqlower.yfilter = yfilter;
    }
    if(value_path == "ccsSpecGroupFreqUpper")
    {
        ccsspecgroupfrequpper.yfilter = yfilter;
    }
    if(value_path == "ccsSpecGroupStorage")
    {
        ccsspecgroupstorage.yfilter = yfilter;
    }
    if(value_path == "ccsSpecGroupRowStatus")
    {
        ccsspecgrouprowstatus.yfilter = yfilter;
    }
}

bool CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccsSpecGroupNumber" || name == "ccsSpecGroupFreqIndex" || name == "ccsSpecGroupFreqType" || name == "ccsSpecGroupFreqLower" || name == "ccsSpecGroupFreqUpper" || name == "ccsSpecGroupStorage" || name == "ccsSpecGroupRowStatus")
        return true;
    return false;
}

const Enum::YLeaf CCSRequestOperation::none {0, "none"};
const Enum::YLeaf CCSRequestOperation::start {1, "start"};
const Enum::YLeaf CCSRequestOperation::abort {2, "abort"};

const Enum::YLeaf CCSRequestOperState::idle {0, "idle"};
const Enum::YLeaf CCSRequestOperState::pending {1, "pending"};
const Enum::YLeaf CCSRequestOperState::running {2, "running"};
const Enum::YLeaf CCSRequestOperState::noError {3, "noError"};
const Enum::YLeaf CCSRequestOperState::aborted {4, "aborted"};
const Enum::YLeaf CCSRequestOperState::notOnLine {5, "notOnLine"};
const Enum::YLeaf CCSRequestOperState::invalidMac {6, "invalidMac"};
const Enum::YLeaf CCSRequestOperState::timeOut {7, "timeOut"};
const Enum::YLeaf CCSRequestOperState::fftBusy {8, "fftBusy"};
const Enum::YLeaf CCSRequestOperState::fftFailed {9, "fftFailed"};
const Enum::YLeaf CCSRequestOperState::others {10, "others"};

const Enum::YLeaf CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::CcsUpSpecMgmtHopPriority::frqModChannel {0, "frqModChannel"};
const Enum::YLeaf CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::CcsUpSpecMgmtHopPriority::frqChannelMod {1, "frqChannelMod"};
const Enum::YLeaf CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::CcsUpSpecMgmtHopPriority::modFrqChannel {2, "modFrqChannel"};
const Enum::YLeaf CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::CcsUpSpecMgmtHopPriority::modChannelFrq {3, "modChannelFrq"};
const Enum::YLeaf CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::CcsUpSpecMgmtHopPriority::channelFrqMod {4, "channelFrqMod"};
const Enum::YLeaf CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::CcsUpSpecMgmtHopPriority::channelModFrq {5, "channelModFrq"};

const Enum::YLeaf CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::CcsUpSpecMgmtHopCondition::snr {0, "snr"};
const Enum::YLeaf CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::CcsUpSpecMgmtHopCondition::stationMaintainenceMiss {1, "stationMaintainenceMiss"};
const Enum::YLeaf CISCOCABLESPECTRUMMIB::CcsUpSpecMgmtTable::CcsUpSpecMgmtEntry::CcsUpSpecMgmtHopCondition::others {2, "others"};

const Enum::YLeaf CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry::CcsSpecGroupFreqType::centerFreq {1, "centerFreq"};
const Enum::YLeaf CISCOCABLESPECTRUMMIB::CcsSpecGroupFreqTable::CcsSpecGroupFreqEntry::CcsSpecGroupFreqType::bandFreq {2, "bandFreq"};


}
}

