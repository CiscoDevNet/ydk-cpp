
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_PTP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_PTP_MIB {

CISCOPTPMIB::CISCOPTPMIB()
    :
    ciscoptpmibsysteminfo(std::make_shared<CISCOPTPMIB::CiscoPtpMIBSystemInfo>())
    , cptpsystemtable(std::make_shared<CISCOPTPMIB::CPtpSystemTable>())
    , cptpsystemdomaintable(std::make_shared<CISCOPTPMIB::CPtpSystemDomainTable>())
    , cptpclocknodetable(std::make_shared<CISCOPTPMIB::CPtpClockNodeTable>())
    , cptpclockcurrentdstable(std::make_shared<CISCOPTPMIB::CPtpClockCurrentDSTable>())
    , cptpclockparentdstable(std::make_shared<CISCOPTPMIB::CPtpClockParentDSTable>())
    , cptpclockdefaultdstable(std::make_shared<CISCOPTPMIB::CPtpClockDefaultDSTable>())
    , cptpclockrunningtable(std::make_shared<CISCOPTPMIB::CPtpClockRunningTable>())
    , cptpclocktimepropertiesdstable(std::make_shared<CISCOPTPMIB::CPtpClockTimePropertiesDSTable>())
    , cptpclocktransdefaultdstable(std::make_shared<CISCOPTPMIB::CPtpClockTransDefaultDSTable>())
    , cptpclockporttable(std::make_shared<CISCOPTPMIB::CPtpClockPortTable>())
    , cptpclockportdstable(std::make_shared<CISCOPTPMIB::CPtpClockPortDSTable>())
    , cptpclockportrunningtable(std::make_shared<CISCOPTPMIB::CPtpClockPortRunningTable>())
    , cptpclockporttransdstable(std::make_shared<CISCOPTPMIB::CPtpClockPortTransDSTable>())
    , cptpclockportassociatetable(std::make_shared<CISCOPTPMIB::CPtpClockPortAssociateTable>())
{
    ciscoptpmibsysteminfo->parent = this;
    cptpsystemtable->parent = this;
    cptpsystemdomaintable->parent = this;
    cptpclocknodetable->parent = this;
    cptpclockcurrentdstable->parent = this;
    cptpclockparentdstable->parent = this;
    cptpclockdefaultdstable->parent = this;
    cptpclockrunningtable->parent = this;
    cptpclocktimepropertiesdstable->parent = this;
    cptpclocktransdefaultdstable->parent = this;
    cptpclockporttable->parent = this;
    cptpclockportdstable->parent = this;
    cptpclockportrunningtable->parent = this;
    cptpclockporttransdstable->parent = this;
    cptpclockportassociatetable->parent = this;

    yang_name = "CISCO-PTP-MIB"; yang_parent_name = "CISCO-PTP-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOPTPMIB::~CISCOPTPMIB()
{
}

bool CISCOPTPMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ciscoptpmibsysteminfo !=  nullptr && ciscoptpmibsysteminfo->has_data())
	|| (cptpsystemtable !=  nullptr && cptpsystemtable->has_data())
	|| (cptpsystemdomaintable !=  nullptr && cptpsystemdomaintable->has_data())
	|| (cptpclocknodetable !=  nullptr && cptpclocknodetable->has_data())
	|| (cptpclockcurrentdstable !=  nullptr && cptpclockcurrentdstable->has_data())
	|| (cptpclockparentdstable !=  nullptr && cptpclockparentdstable->has_data())
	|| (cptpclockdefaultdstable !=  nullptr && cptpclockdefaultdstable->has_data())
	|| (cptpclockrunningtable !=  nullptr && cptpclockrunningtable->has_data())
	|| (cptpclocktimepropertiesdstable !=  nullptr && cptpclocktimepropertiesdstable->has_data())
	|| (cptpclocktransdefaultdstable !=  nullptr && cptpclocktransdefaultdstable->has_data())
	|| (cptpclockporttable !=  nullptr && cptpclockporttable->has_data())
	|| (cptpclockportdstable !=  nullptr && cptpclockportdstable->has_data())
	|| (cptpclockportrunningtable !=  nullptr && cptpclockportrunningtable->has_data())
	|| (cptpclockporttransdstable !=  nullptr && cptpclockporttransdstable->has_data())
	|| (cptpclockportassociatetable !=  nullptr && cptpclockportassociatetable->has_data());
}

bool CISCOPTPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ciscoptpmibsysteminfo !=  nullptr && ciscoptpmibsysteminfo->has_operation())
	|| (cptpsystemtable !=  nullptr && cptpsystemtable->has_operation())
	|| (cptpsystemdomaintable !=  nullptr && cptpsystemdomaintable->has_operation())
	|| (cptpclocknodetable !=  nullptr && cptpclocknodetable->has_operation())
	|| (cptpclockcurrentdstable !=  nullptr && cptpclockcurrentdstable->has_operation())
	|| (cptpclockparentdstable !=  nullptr && cptpclockparentdstable->has_operation())
	|| (cptpclockdefaultdstable !=  nullptr && cptpclockdefaultdstable->has_operation())
	|| (cptpclockrunningtable !=  nullptr && cptpclockrunningtable->has_operation())
	|| (cptpclocktimepropertiesdstable !=  nullptr && cptpclocktimepropertiesdstable->has_operation())
	|| (cptpclocktransdefaultdstable !=  nullptr && cptpclocktransdefaultdstable->has_operation())
	|| (cptpclockporttable !=  nullptr && cptpclockporttable->has_operation())
	|| (cptpclockportdstable !=  nullptr && cptpclockportdstable->has_operation())
	|| (cptpclockportrunningtable !=  nullptr && cptpclockportrunningtable->has_operation())
	|| (cptpclockporttransdstable !=  nullptr && cptpclockporttransdstable->has_operation())
	|| (cptpclockportassociatetable !=  nullptr && cptpclockportassociatetable->has_operation());
}

std::string CISCOPTPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoPtpMIBSystemInfo")
    {
        if(ciscoptpmibsysteminfo == nullptr)
        {
            ciscoptpmibsysteminfo = std::make_shared<CISCOPTPMIB::CiscoPtpMIBSystemInfo>();
        }
        return ciscoptpmibsysteminfo;
    }

    if(child_yang_name == "cPtpSystemTable")
    {
        if(cptpsystemtable == nullptr)
        {
            cptpsystemtable = std::make_shared<CISCOPTPMIB::CPtpSystemTable>();
        }
        return cptpsystemtable;
    }

    if(child_yang_name == "cPtpSystemDomainTable")
    {
        if(cptpsystemdomaintable == nullptr)
        {
            cptpsystemdomaintable = std::make_shared<CISCOPTPMIB::CPtpSystemDomainTable>();
        }
        return cptpsystemdomaintable;
    }

    if(child_yang_name == "cPtpClockNodeTable")
    {
        if(cptpclocknodetable == nullptr)
        {
            cptpclocknodetable = std::make_shared<CISCOPTPMIB::CPtpClockNodeTable>();
        }
        return cptpclocknodetable;
    }

    if(child_yang_name == "cPtpClockCurrentDSTable")
    {
        if(cptpclockcurrentdstable == nullptr)
        {
            cptpclockcurrentdstable = std::make_shared<CISCOPTPMIB::CPtpClockCurrentDSTable>();
        }
        return cptpclockcurrentdstable;
    }

    if(child_yang_name == "cPtpClockParentDSTable")
    {
        if(cptpclockparentdstable == nullptr)
        {
            cptpclockparentdstable = std::make_shared<CISCOPTPMIB::CPtpClockParentDSTable>();
        }
        return cptpclockparentdstable;
    }

    if(child_yang_name == "cPtpClockDefaultDSTable")
    {
        if(cptpclockdefaultdstable == nullptr)
        {
            cptpclockdefaultdstable = std::make_shared<CISCOPTPMIB::CPtpClockDefaultDSTable>();
        }
        return cptpclockdefaultdstable;
    }

    if(child_yang_name == "cPtpClockRunningTable")
    {
        if(cptpclockrunningtable == nullptr)
        {
            cptpclockrunningtable = std::make_shared<CISCOPTPMIB::CPtpClockRunningTable>();
        }
        return cptpclockrunningtable;
    }

    if(child_yang_name == "cPtpClockTimePropertiesDSTable")
    {
        if(cptpclocktimepropertiesdstable == nullptr)
        {
            cptpclocktimepropertiesdstable = std::make_shared<CISCOPTPMIB::CPtpClockTimePropertiesDSTable>();
        }
        return cptpclocktimepropertiesdstable;
    }

    if(child_yang_name == "cPtpClockTransDefaultDSTable")
    {
        if(cptpclocktransdefaultdstable == nullptr)
        {
            cptpclocktransdefaultdstable = std::make_shared<CISCOPTPMIB::CPtpClockTransDefaultDSTable>();
        }
        return cptpclocktransdefaultdstable;
    }

    if(child_yang_name == "cPtpClockPortTable")
    {
        if(cptpclockporttable == nullptr)
        {
            cptpclockporttable = std::make_shared<CISCOPTPMIB::CPtpClockPortTable>();
        }
        return cptpclockporttable;
    }

    if(child_yang_name == "cPtpClockPortDSTable")
    {
        if(cptpclockportdstable == nullptr)
        {
            cptpclockportdstable = std::make_shared<CISCOPTPMIB::CPtpClockPortDSTable>();
        }
        return cptpclockportdstable;
    }

    if(child_yang_name == "cPtpClockPortRunningTable")
    {
        if(cptpclockportrunningtable == nullptr)
        {
            cptpclockportrunningtable = std::make_shared<CISCOPTPMIB::CPtpClockPortRunningTable>();
        }
        return cptpclockportrunningtable;
    }

    if(child_yang_name == "cPtpClockPortTransDSTable")
    {
        if(cptpclockporttransdstable == nullptr)
        {
            cptpclockporttransdstable = std::make_shared<CISCOPTPMIB::CPtpClockPortTransDSTable>();
        }
        return cptpclockporttransdstable;
    }

    if(child_yang_name == "cPtpClockPortAssociateTable")
    {
        if(cptpclockportassociatetable == nullptr)
        {
            cptpclockportassociatetable = std::make_shared<CISCOPTPMIB::CPtpClockPortAssociateTable>();
        }
        return cptpclockportassociatetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ciscoptpmibsysteminfo != nullptr)
    {
        children["ciscoPtpMIBSystemInfo"] = ciscoptpmibsysteminfo;
    }

    if(cptpsystemtable != nullptr)
    {
        children["cPtpSystemTable"] = cptpsystemtable;
    }

    if(cptpsystemdomaintable != nullptr)
    {
        children["cPtpSystemDomainTable"] = cptpsystemdomaintable;
    }

    if(cptpclocknodetable != nullptr)
    {
        children["cPtpClockNodeTable"] = cptpclocknodetable;
    }

    if(cptpclockcurrentdstable != nullptr)
    {
        children["cPtpClockCurrentDSTable"] = cptpclockcurrentdstable;
    }

    if(cptpclockparentdstable != nullptr)
    {
        children["cPtpClockParentDSTable"] = cptpclockparentdstable;
    }

    if(cptpclockdefaultdstable != nullptr)
    {
        children["cPtpClockDefaultDSTable"] = cptpclockdefaultdstable;
    }

    if(cptpclockrunningtable != nullptr)
    {
        children["cPtpClockRunningTable"] = cptpclockrunningtable;
    }

    if(cptpclocktimepropertiesdstable != nullptr)
    {
        children["cPtpClockTimePropertiesDSTable"] = cptpclocktimepropertiesdstable;
    }

    if(cptpclocktransdefaultdstable != nullptr)
    {
        children["cPtpClockTransDefaultDSTable"] = cptpclocktransdefaultdstable;
    }

    if(cptpclockporttable != nullptr)
    {
        children["cPtpClockPortTable"] = cptpclockporttable;
    }

    if(cptpclockportdstable != nullptr)
    {
        children["cPtpClockPortDSTable"] = cptpclockportdstable;
    }

    if(cptpclockportrunningtable != nullptr)
    {
        children["cPtpClockPortRunningTable"] = cptpclockportrunningtable;
    }

    if(cptpclockporttransdstable != nullptr)
    {
        children["cPtpClockPortTransDSTable"] = cptpclockporttransdstable;
    }

    if(cptpclockportassociatetable != nullptr)
    {
        children["cPtpClockPortAssociateTable"] = cptpclockportassociatetable;
    }

    return children;
}

void CISCOPTPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPTPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOPTPMIB::clone_ptr() const
{
    return std::make_shared<CISCOPTPMIB>();
}

std::string CISCOPTPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOPTPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOPTPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOPTPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOPTPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoPtpMIBSystemInfo" || name == "cPtpSystemTable" || name == "cPtpSystemDomainTable" || name == "cPtpClockNodeTable" || name == "cPtpClockCurrentDSTable" || name == "cPtpClockParentDSTable" || name == "cPtpClockDefaultDSTable" || name == "cPtpClockRunningTable" || name == "cPtpClockTimePropertiesDSTable" || name == "cPtpClockTransDefaultDSTable" || name == "cPtpClockPortTable" || name == "cPtpClockPortDSTable" || name == "cPtpClockPortRunningTable" || name == "cPtpClockPortTransDSTable" || name == "cPtpClockPortAssociateTable")
        return true;
    return false;
}

CISCOPTPMIB::CiscoPtpMIBSystemInfo::CiscoPtpMIBSystemInfo()
    :
    cptpsystemprofile{YType::enumeration, "cPtpSystemProfile"}
{

    yang_name = "ciscoPtpMIBSystemInfo"; yang_parent_name = "CISCO-PTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CiscoPtpMIBSystemInfo::~CiscoPtpMIBSystemInfo()
{
}

bool CISCOPTPMIB::CiscoPtpMIBSystemInfo::has_data() const
{
    if (is_presence_container) return true;
    return cptpsystemprofile.is_set;
}

bool CISCOPTPMIB::CiscoPtpMIBSystemInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cptpsystemprofile.yfilter);
}

std::string CISCOPTPMIB::CiscoPtpMIBSystemInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CiscoPtpMIBSystemInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoPtpMIBSystemInfo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CiscoPtpMIBSystemInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpsystemprofile.is_set || is_set(cptpsystemprofile.yfilter)) leaf_name_data.push_back(cptpsystemprofile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CiscoPtpMIBSystemInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CiscoPtpMIBSystemInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPTPMIB::CiscoPtpMIBSystemInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cPtpSystemProfile")
    {
        cptpsystemprofile = value;
        cptpsystemprofile.value_namespace = name_space;
        cptpsystemprofile.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPTPMIB::CiscoPtpMIBSystemInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cPtpSystemProfile")
    {
        cptpsystemprofile.yfilter = yfilter;
    }
}

bool CISCOPTPMIB::CiscoPtpMIBSystemInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpSystemProfile")
        return true;
    return false;
}

CISCOPTPMIB::CPtpSystemTable::CPtpSystemTable()
    :
    cptpsystementry(this, {"cptpdomainindex", "cptpinstanceindex"})
{

    yang_name = "cPtpSystemTable"; yang_parent_name = "CISCO-PTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpSystemTable::~CPtpSystemTable()
{
}

bool CISCOPTPMIB::CPtpSystemTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cptpsystementry.len(); index++)
    {
        if(cptpsystementry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPTPMIB::CPtpSystemTable::has_operation() const
{
    for (std::size_t index=0; index<cptpsystementry.len(); index++)
    {
        if(cptpsystementry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPTPMIB::CPtpSystemTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpSystemTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpSystemTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpSystemTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpSystemTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpSystemEntry")
    {
        auto c = std::make_shared<CISCOPTPMIB::CPtpSystemTable::CPtpSystemEntry>();
        c->parent = this;
        cptpsystementry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpSystemTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cptpsystementry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPTPMIB::CPtpSystemTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPTPMIB::CPtpSystemTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPTPMIB::CPtpSystemTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpSystemEntry")
        return true;
    return false;
}

CISCOPTPMIB::CPtpSystemTable::CPtpSystemEntry::CPtpSystemEntry()
    :
    cptpdomainindex{YType::uint32, "cPtpDomainIndex"},
    cptpinstanceindex{YType::uint32, "cPtpInstanceIndex"},
    cptpdomainclockportstotal{YType::uint32, "cPtpDomainClockPortsTotal"},
    cptpdomainclockportphysicalinterfacestotal{YType::uint32, "cPtpDomainClockPortPhysicalInterfacesTotal"}
{

    yang_name = "cPtpSystemEntry"; yang_parent_name = "cPtpSystemTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpSystemTable::CPtpSystemEntry::~CPtpSystemEntry()
{
}

bool CISCOPTPMIB::CPtpSystemTable::CPtpSystemEntry::has_data() const
{
    if (is_presence_container) return true;
    return cptpdomainindex.is_set
	|| cptpinstanceindex.is_set
	|| cptpdomainclockportstotal.is_set
	|| cptpdomainclockportphysicalinterfacestotal.is_set;
}

bool CISCOPTPMIB::CPtpSystemTable::CPtpSystemEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cptpdomainindex.yfilter)
	|| ydk::is_set(cptpinstanceindex.yfilter)
	|| ydk::is_set(cptpdomainclockportstotal.yfilter)
	|| ydk::is_set(cptpdomainclockportphysicalinterfacestotal.yfilter);
}

std::string CISCOPTPMIB::CPtpSystemTable::CPtpSystemEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpSystemTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpSystemTable::CPtpSystemEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpSystemEntry";
    ADD_KEY_TOKEN(cptpdomainindex, "cPtpDomainIndex");
    ADD_KEY_TOKEN(cptpinstanceindex, "cPtpInstanceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpSystemTable::CPtpSystemEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpdomainindex.is_set || is_set(cptpdomainindex.yfilter)) leaf_name_data.push_back(cptpdomainindex.get_name_leafdata());
    if (cptpinstanceindex.is_set || is_set(cptpinstanceindex.yfilter)) leaf_name_data.push_back(cptpinstanceindex.get_name_leafdata());
    if (cptpdomainclockportstotal.is_set || is_set(cptpdomainclockportstotal.yfilter)) leaf_name_data.push_back(cptpdomainclockportstotal.get_name_leafdata());
    if (cptpdomainclockportphysicalinterfacestotal.is_set || is_set(cptpdomainclockportphysicalinterfacestotal.yfilter)) leaf_name_data.push_back(cptpdomainclockportphysicalinterfacestotal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpSystemTable::CPtpSystemEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpSystemTable::CPtpSystemEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPTPMIB::CPtpSystemTable::CPtpSystemEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cPtpDomainIndex")
    {
        cptpdomainindex = value;
        cptpdomainindex.value_namespace = name_space;
        cptpdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpInstanceIndex")
    {
        cptpinstanceindex = value;
        cptpinstanceindex.value_namespace = name_space;
        cptpinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpDomainClockPortsTotal")
    {
        cptpdomainclockportstotal = value;
        cptpdomainclockportstotal.value_namespace = name_space;
        cptpdomainclockportstotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpDomainClockPortPhysicalInterfacesTotal")
    {
        cptpdomainclockportphysicalinterfacestotal = value;
        cptpdomainclockportphysicalinterfacestotal.value_namespace = name_space;
        cptpdomainclockportphysicalinterfacestotal.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPTPMIB::CPtpSystemTable::CPtpSystemEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cPtpDomainIndex")
    {
        cptpdomainindex.yfilter = yfilter;
    }
    if(value_path == "cPtpInstanceIndex")
    {
        cptpinstanceindex.yfilter = yfilter;
    }
    if(value_path == "cPtpDomainClockPortsTotal")
    {
        cptpdomainclockportstotal.yfilter = yfilter;
    }
    if(value_path == "cPtpDomainClockPortPhysicalInterfacesTotal")
    {
        cptpdomainclockportphysicalinterfacestotal.yfilter = yfilter;
    }
}

bool CISCOPTPMIB::CPtpSystemTable::CPtpSystemEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpDomainIndex" || name == "cPtpInstanceIndex" || name == "cPtpDomainClockPortsTotal" || name == "cPtpDomainClockPortPhysicalInterfacesTotal")
        return true;
    return false;
}

CISCOPTPMIB::CPtpSystemDomainTable::CPtpSystemDomainTable()
    :
    cptpsystemdomainentry(this, {"cptpsystemdomainclocktypeindex"})
{

    yang_name = "cPtpSystemDomainTable"; yang_parent_name = "CISCO-PTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpSystemDomainTable::~CPtpSystemDomainTable()
{
}

bool CISCOPTPMIB::CPtpSystemDomainTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cptpsystemdomainentry.len(); index++)
    {
        if(cptpsystemdomainentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPTPMIB::CPtpSystemDomainTable::has_operation() const
{
    for (std::size_t index=0; index<cptpsystemdomainentry.len(); index++)
    {
        if(cptpsystemdomainentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPTPMIB::CPtpSystemDomainTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpSystemDomainTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpSystemDomainTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpSystemDomainTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpSystemDomainTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpSystemDomainEntry")
    {
        auto c = std::make_shared<CISCOPTPMIB::CPtpSystemDomainTable::CPtpSystemDomainEntry>();
        c->parent = this;
        cptpsystemdomainentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpSystemDomainTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cptpsystemdomainentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPTPMIB::CPtpSystemDomainTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPTPMIB::CPtpSystemDomainTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPTPMIB::CPtpSystemDomainTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpSystemDomainEntry")
        return true;
    return false;
}

CISCOPTPMIB::CPtpSystemDomainTable::CPtpSystemDomainEntry::CPtpSystemDomainEntry()
    :
    cptpsystemdomainclocktypeindex{YType::enumeration, "cPtpSystemDomainClockTypeIndex"},
    cptpsystemdomaintotals{YType::uint32, "cPtpSystemDomainTotals"}
{

    yang_name = "cPtpSystemDomainEntry"; yang_parent_name = "cPtpSystemDomainTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpSystemDomainTable::CPtpSystemDomainEntry::~CPtpSystemDomainEntry()
{
}

bool CISCOPTPMIB::CPtpSystemDomainTable::CPtpSystemDomainEntry::has_data() const
{
    if (is_presence_container) return true;
    return cptpsystemdomainclocktypeindex.is_set
	|| cptpsystemdomaintotals.is_set;
}

bool CISCOPTPMIB::CPtpSystemDomainTable::CPtpSystemDomainEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cptpsystemdomainclocktypeindex.yfilter)
	|| ydk::is_set(cptpsystemdomaintotals.yfilter);
}

std::string CISCOPTPMIB::CPtpSystemDomainTable::CPtpSystemDomainEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpSystemDomainTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpSystemDomainTable::CPtpSystemDomainEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpSystemDomainEntry";
    ADD_KEY_TOKEN(cptpsystemdomainclocktypeindex, "cPtpSystemDomainClockTypeIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpSystemDomainTable::CPtpSystemDomainEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpsystemdomainclocktypeindex.is_set || is_set(cptpsystemdomainclocktypeindex.yfilter)) leaf_name_data.push_back(cptpsystemdomainclocktypeindex.get_name_leafdata());
    if (cptpsystemdomaintotals.is_set || is_set(cptpsystemdomaintotals.yfilter)) leaf_name_data.push_back(cptpsystemdomaintotals.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpSystemDomainTable::CPtpSystemDomainEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpSystemDomainTable::CPtpSystemDomainEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPTPMIB::CPtpSystemDomainTable::CPtpSystemDomainEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cPtpSystemDomainClockTypeIndex")
    {
        cptpsystemdomainclocktypeindex = value;
        cptpsystemdomainclocktypeindex.value_namespace = name_space;
        cptpsystemdomainclocktypeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpSystemDomainTotals")
    {
        cptpsystemdomaintotals = value;
        cptpsystemdomaintotals.value_namespace = name_space;
        cptpsystemdomaintotals.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPTPMIB::CPtpSystemDomainTable::CPtpSystemDomainEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cPtpSystemDomainClockTypeIndex")
    {
        cptpsystemdomainclocktypeindex.yfilter = yfilter;
    }
    if(value_path == "cPtpSystemDomainTotals")
    {
        cptpsystemdomaintotals.yfilter = yfilter;
    }
}

bool CISCOPTPMIB::CPtpSystemDomainTable::CPtpSystemDomainEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpSystemDomainClockTypeIndex" || name == "cPtpSystemDomainTotals")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockNodeTable::CPtpClockNodeTable()
    :
    cptpclocknodeentry(this, {"cptpclockdomainindex", "cptpclocktypeindex", "cptpclockinstanceindex"})
{

    yang_name = "cPtpClockNodeTable"; yang_parent_name = "CISCO-PTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockNodeTable::~CPtpClockNodeTable()
{
}

bool CISCOPTPMIB::CPtpClockNodeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cptpclocknodeentry.len(); index++)
    {
        if(cptpclocknodeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPTPMIB::CPtpClockNodeTable::has_operation() const
{
    for (std::size_t index=0; index<cptpclocknodeentry.len(); index++)
    {
        if(cptpclocknodeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPTPMIB::CPtpClockNodeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockNodeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockNodeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockNodeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockNodeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockNodeEntry")
    {
        auto c = std::make_shared<CISCOPTPMIB::CPtpClockNodeTable::CPtpClockNodeEntry>();
        c->parent = this;
        cptpclocknodeentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockNodeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cptpclocknodeentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPTPMIB::CPtpClockNodeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPTPMIB::CPtpClockNodeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPTPMIB::CPtpClockNodeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockNodeEntry")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockNodeTable::CPtpClockNodeEntry::CPtpClockNodeEntry()
    :
    cptpclockdomainindex{YType::uint32, "cPtpClockDomainIndex"},
    cptpclocktypeindex{YType::enumeration, "cPtpClockTypeIndex"},
    cptpclockinstanceindex{YType::uint32, "cPtpClockInstanceIndex"},
    cptpclockinput1ppsenabled{YType::boolean, "cPtpClockInput1ppsEnabled"},
    cptpclockinputfrequencyenabled{YType::boolean, "cPtpClockInputFrequencyEnabled"},
    cptpclocktodenabled{YType::boolean, "cPtpClockTODEnabled"},
    cptpclockoutput1ppsenabled{YType::boolean, "cPtpClockOutput1ppsEnabled"},
    cptpclockoutput1ppsoffsetenabled{YType::boolean, "cPtpClockOutput1ppsOffsetEnabled"},
    cptpclockoutput1ppsoffsetvalue{YType::uint32, "cPtpClockOutput1ppsOffsetValue"},
    cptpclockoutput1ppsoffsetnegative{YType::boolean, "cPtpClockOutput1ppsOffsetNegative"},
    cptpclockinput1ppsinterface{YType::str, "cPtpClockInput1ppsInterface"},
    cptpclockoutput1ppsinterface{YType::str, "cPtpClockOutput1ppsInterface"},
    cptpclocktodinterface{YType::str, "cPtpClockTODInterface"}
{

    yang_name = "cPtpClockNodeEntry"; yang_parent_name = "cPtpClockNodeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockNodeTable::CPtpClockNodeEntry::~CPtpClockNodeEntry()
{
}

bool CISCOPTPMIB::CPtpClockNodeTable::CPtpClockNodeEntry::has_data() const
{
    if (is_presence_container) return true;
    return cptpclockdomainindex.is_set
	|| cptpclocktypeindex.is_set
	|| cptpclockinstanceindex.is_set
	|| cptpclockinput1ppsenabled.is_set
	|| cptpclockinputfrequencyenabled.is_set
	|| cptpclocktodenabled.is_set
	|| cptpclockoutput1ppsenabled.is_set
	|| cptpclockoutput1ppsoffsetenabled.is_set
	|| cptpclockoutput1ppsoffsetvalue.is_set
	|| cptpclockoutput1ppsoffsetnegative.is_set
	|| cptpclockinput1ppsinterface.is_set
	|| cptpclockoutput1ppsinterface.is_set
	|| cptpclocktodinterface.is_set;
}

bool CISCOPTPMIB::CPtpClockNodeTable::CPtpClockNodeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cptpclockdomainindex.yfilter)
	|| ydk::is_set(cptpclocktypeindex.yfilter)
	|| ydk::is_set(cptpclockinstanceindex.yfilter)
	|| ydk::is_set(cptpclockinput1ppsenabled.yfilter)
	|| ydk::is_set(cptpclockinputfrequencyenabled.yfilter)
	|| ydk::is_set(cptpclocktodenabled.yfilter)
	|| ydk::is_set(cptpclockoutput1ppsenabled.yfilter)
	|| ydk::is_set(cptpclockoutput1ppsoffsetenabled.yfilter)
	|| ydk::is_set(cptpclockoutput1ppsoffsetvalue.yfilter)
	|| ydk::is_set(cptpclockoutput1ppsoffsetnegative.yfilter)
	|| ydk::is_set(cptpclockinput1ppsinterface.yfilter)
	|| ydk::is_set(cptpclockoutput1ppsinterface.yfilter)
	|| ydk::is_set(cptpclocktodinterface.yfilter);
}

std::string CISCOPTPMIB::CPtpClockNodeTable::CPtpClockNodeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockNodeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockNodeTable::CPtpClockNodeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockNodeEntry";
    ADD_KEY_TOKEN(cptpclockdomainindex, "cPtpClockDomainIndex");
    ADD_KEY_TOKEN(cptpclocktypeindex, "cPtpClockTypeIndex");
    ADD_KEY_TOKEN(cptpclockinstanceindex, "cPtpClockInstanceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockNodeTable::CPtpClockNodeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockdomainindex.is_set || is_set(cptpclockdomainindex.yfilter)) leaf_name_data.push_back(cptpclockdomainindex.get_name_leafdata());
    if (cptpclocktypeindex.is_set || is_set(cptpclocktypeindex.yfilter)) leaf_name_data.push_back(cptpclocktypeindex.get_name_leafdata());
    if (cptpclockinstanceindex.is_set || is_set(cptpclockinstanceindex.yfilter)) leaf_name_data.push_back(cptpclockinstanceindex.get_name_leafdata());
    if (cptpclockinput1ppsenabled.is_set || is_set(cptpclockinput1ppsenabled.yfilter)) leaf_name_data.push_back(cptpclockinput1ppsenabled.get_name_leafdata());
    if (cptpclockinputfrequencyenabled.is_set || is_set(cptpclockinputfrequencyenabled.yfilter)) leaf_name_data.push_back(cptpclockinputfrequencyenabled.get_name_leafdata());
    if (cptpclocktodenabled.is_set || is_set(cptpclocktodenabled.yfilter)) leaf_name_data.push_back(cptpclocktodenabled.get_name_leafdata());
    if (cptpclockoutput1ppsenabled.is_set || is_set(cptpclockoutput1ppsenabled.yfilter)) leaf_name_data.push_back(cptpclockoutput1ppsenabled.get_name_leafdata());
    if (cptpclockoutput1ppsoffsetenabled.is_set || is_set(cptpclockoutput1ppsoffsetenabled.yfilter)) leaf_name_data.push_back(cptpclockoutput1ppsoffsetenabled.get_name_leafdata());
    if (cptpclockoutput1ppsoffsetvalue.is_set || is_set(cptpclockoutput1ppsoffsetvalue.yfilter)) leaf_name_data.push_back(cptpclockoutput1ppsoffsetvalue.get_name_leafdata());
    if (cptpclockoutput1ppsoffsetnegative.is_set || is_set(cptpclockoutput1ppsoffsetnegative.yfilter)) leaf_name_data.push_back(cptpclockoutput1ppsoffsetnegative.get_name_leafdata());
    if (cptpclockinput1ppsinterface.is_set || is_set(cptpclockinput1ppsinterface.yfilter)) leaf_name_data.push_back(cptpclockinput1ppsinterface.get_name_leafdata());
    if (cptpclockoutput1ppsinterface.is_set || is_set(cptpclockoutput1ppsinterface.yfilter)) leaf_name_data.push_back(cptpclockoutput1ppsinterface.get_name_leafdata());
    if (cptpclocktodinterface.is_set || is_set(cptpclocktodinterface.yfilter)) leaf_name_data.push_back(cptpclocktodinterface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockNodeTable::CPtpClockNodeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockNodeTable::CPtpClockNodeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPTPMIB::CPtpClockNodeTable::CPtpClockNodeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cPtpClockDomainIndex")
    {
        cptpclockdomainindex = value;
        cptpclockdomainindex.value_namespace = name_space;
        cptpclockdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTypeIndex")
    {
        cptpclocktypeindex = value;
        cptpclocktypeindex.value_namespace = name_space;
        cptpclocktypeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockInstanceIndex")
    {
        cptpclockinstanceindex = value;
        cptpclockinstanceindex.value_namespace = name_space;
        cptpclockinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockInput1ppsEnabled")
    {
        cptpclockinput1ppsenabled = value;
        cptpclockinput1ppsenabled.value_namespace = name_space;
        cptpclockinput1ppsenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockInputFrequencyEnabled")
    {
        cptpclockinputfrequencyenabled = value;
        cptpclockinputfrequencyenabled.value_namespace = name_space;
        cptpclockinputfrequencyenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTODEnabled")
    {
        cptpclocktodenabled = value;
        cptpclocktodenabled.value_namespace = name_space;
        cptpclocktodenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockOutput1ppsEnabled")
    {
        cptpclockoutput1ppsenabled = value;
        cptpclockoutput1ppsenabled.value_namespace = name_space;
        cptpclockoutput1ppsenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockOutput1ppsOffsetEnabled")
    {
        cptpclockoutput1ppsoffsetenabled = value;
        cptpclockoutput1ppsoffsetenabled.value_namespace = name_space;
        cptpclockoutput1ppsoffsetenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockOutput1ppsOffsetValue")
    {
        cptpclockoutput1ppsoffsetvalue = value;
        cptpclockoutput1ppsoffsetvalue.value_namespace = name_space;
        cptpclockoutput1ppsoffsetvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockOutput1ppsOffsetNegative")
    {
        cptpclockoutput1ppsoffsetnegative = value;
        cptpclockoutput1ppsoffsetnegative.value_namespace = name_space;
        cptpclockoutput1ppsoffsetnegative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockInput1ppsInterface")
    {
        cptpclockinput1ppsinterface = value;
        cptpclockinput1ppsinterface.value_namespace = name_space;
        cptpclockinput1ppsinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockOutput1ppsInterface")
    {
        cptpclockoutput1ppsinterface = value;
        cptpclockoutput1ppsinterface.value_namespace = name_space;
        cptpclockoutput1ppsinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTODInterface")
    {
        cptpclocktodinterface = value;
        cptpclocktodinterface.value_namespace = name_space;
        cptpclocktodinterface.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPTPMIB::CPtpClockNodeTable::CPtpClockNodeEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cPtpClockDomainIndex")
    {
        cptpclockdomainindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTypeIndex")
    {
        cptpclocktypeindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockInstanceIndex")
    {
        cptpclockinstanceindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockInput1ppsEnabled")
    {
        cptpclockinput1ppsenabled.yfilter = yfilter;
    }
    if(value_path == "cPtpClockInputFrequencyEnabled")
    {
        cptpclockinputfrequencyenabled.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTODEnabled")
    {
        cptpclocktodenabled.yfilter = yfilter;
    }
    if(value_path == "cPtpClockOutput1ppsEnabled")
    {
        cptpclockoutput1ppsenabled.yfilter = yfilter;
    }
    if(value_path == "cPtpClockOutput1ppsOffsetEnabled")
    {
        cptpclockoutput1ppsoffsetenabled.yfilter = yfilter;
    }
    if(value_path == "cPtpClockOutput1ppsOffsetValue")
    {
        cptpclockoutput1ppsoffsetvalue.yfilter = yfilter;
    }
    if(value_path == "cPtpClockOutput1ppsOffsetNegative")
    {
        cptpclockoutput1ppsoffsetnegative.yfilter = yfilter;
    }
    if(value_path == "cPtpClockInput1ppsInterface")
    {
        cptpclockinput1ppsinterface.yfilter = yfilter;
    }
    if(value_path == "cPtpClockOutput1ppsInterface")
    {
        cptpclockoutput1ppsinterface.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTODInterface")
    {
        cptpclocktodinterface.yfilter = yfilter;
    }
}

bool CISCOPTPMIB::CPtpClockNodeTable::CPtpClockNodeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockDomainIndex" || name == "cPtpClockTypeIndex" || name == "cPtpClockInstanceIndex" || name == "cPtpClockInput1ppsEnabled" || name == "cPtpClockInputFrequencyEnabled" || name == "cPtpClockTODEnabled" || name == "cPtpClockOutput1ppsEnabled" || name == "cPtpClockOutput1ppsOffsetEnabled" || name == "cPtpClockOutput1ppsOffsetValue" || name == "cPtpClockOutput1ppsOffsetNegative" || name == "cPtpClockInput1ppsInterface" || name == "cPtpClockOutput1ppsInterface" || name == "cPtpClockTODInterface")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockCurrentDSTable::CPtpClockCurrentDSTable()
    :
    cptpclockcurrentdsentry(this, {"cptpclockcurrentdsdomainindex", "cptpclockcurrentdsclocktypeindex", "cptpclockcurrentdsinstanceindex"})
{

    yang_name = "cPtpClockCurrentDSTable"; yang_parent_name = "CISCO-PTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockCurrentDSTable::~CPtpClockCurrentDSTable()
{
}

bool CISCOPTPMIB::CPtpClockCurrentDSTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cptpclockcurrentdsentry.len(); index++)
    {
        if(cptpclockcurrentdsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPTPMIB::CPtpClockCurrentDSTable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockcurrentdsentry.len(); index++)
    {
        if(cptpclockcurrentdsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPTPMIB::CPtpClockCurrentDSTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockCurrentDSTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockCurrentDSTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockCurrentDSTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockCurrentDSTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockCurrentDSEntry")
    {
        auto c = std::make_shared<CISCOPTPMIB::CPtpClockCurrentDSTable::CPtpClockCurrentDSEntry>();
        c->parent = this;
        cptpclockcurrentdsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockCurrentDSTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cptpclockcurrentdsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPTPMIB::CPtpClockCurrentDSTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPTPMIB::CPtpClockCurrentDSTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPTPMIB::CPtpClockCurrentDSTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockCurrentDSEntry")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockCurrentDSTable::CPtpClockCurrentDSEntry::CPtpClockCurrentDSEntry()
    :
    cptpclockcurrentdsdomainindex{YType::uint32, "cPtpClockCurrentDSDomainIndex"},
    cptpclockcurrentdsclocktypeindex{YType::enumeration, "cPtpClockCurrentDSClockTypeIndex"},
    cptpclockcurrentdsinstanceindex{YType::uint32, "cPtpClockCurrentDSInstanceIndex"},
    cptpclockcurrentdsstepsremoved{YType::uint32, "cPtpClockCurrentDSStepsRemoved"},
    cptpclockcurrentdsoffsetfrommaster{YType::str, "cPtpClockCurrentDSOffsetFromMaster"},
    cptpclockcurrentdsmeanpathdelay{YType::str, "cPtpClockCurrentDSMeanPathDelay"}
{

    yang_name = "cPtpClockCurrentDSEntry"; yang_parent_name = "cPtpClockCurrentDSTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockCurrentDSTable::CPtpClockCurrentDSEntry::~CPtpClockCurrentDSEntry()
{
}

bool CISCOPTPMIB::CPtpClockCurrentDSTable::CPtpClockCurrentDSEntry::has_data() const
{
    if (is_presence_container) return true;
    return cptpclockcurrentdsdomainindex.is_set
	|| cptpclockcurrentdsclocktypeindex.is_set
	|| cptpclockcurrentdsinstanceindex.is_set
	|| cptpclockcurrentdsstepsremoved.is_set
	|| cptpclockcurrentdsoffsetfrommaster.is_set
	|| cptpclockcurrentdsmeanpathdelay.is_set;
}

bool CISCOPTPMIB::CPtpClockCurrentDSTable::CPtpClockCurrentDSEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cptpclockcurrentdsdomainindex.yfilter)
	|| ydk::is_set(cptpclockcurrentdsclocktypeindex.yfilter)
	|| ydk::is_set(cptpclockcurrentdsinstanceindex.yfilter)
	|| ydk::is_set(cptpclockcurrentdsstepsremoved.yfilter)
	|| ydk::is_set(cptpclockcurrentdsoffsetfrommaster.yfilter)
	|| ydk::is_set(cptpclockcurrentdsmeanpathdelay.yfilter);
}

std::string CISCOPTPMIB::CPtpClockCurrentDSTable::CPtpClockCurrentDSEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockCurrentDSTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockCurrentDSTable::CPtpClockCurrentDSEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockCurrentDSEntry";
    ADD_KEY_TOKEN(cptpclockcurrentdsdomainindex, "cPtpClockCurrentDSDomainIndex");
    ADD_KEY_TOKEN(cptpclockcurrentdsclocktypeindex, "cPtpClockCurrentDSClockTypeIndex");
    ADD_KEY_TOKEN(cptpclockcurrentdsinstanceindex, "cPtpClockCurrentDSInstanceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockCurrentDSTable::CPtpClockCurrentDSEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockcurrentdsdomainindex.is_set || is_set(cptpclockcurrentdsdomainindex.yfilter)) leaf_name_data.push_back(cptpclockcurrentdsdomainindex.get_name_leafdata());
    if (cptpclockcurrentdsclocktypeindex.is_set || is_set(cptpclockcurrentdsclocktypeindex.yfilter)) leaf_name_data.push_back(cptpclockcurrentdsclocktypeindex.get_name_leafdata());
    if (cptpclockcurrentdsinstanceindex.is_set || is_set(cptpclockcurrentdsinstanceindex.yfilter)) leaf_name_data.push_back(cptpclockcurrentdsinstanceindex.get_name_leafdata());
    if (cptpclockcurrentdsstepsremoved.is_set || is_set(cptpclockcurrentdsstepsremoved.yfilter)) leaf_name_data.push_back(cptpclockcurrentdsstepsremoved.get_name_leafdata());
    if (cptpclockcurrentdsoffsetfrommaster.is_set || is_set(cptpclockcurrentdsoffsetfrommaster.yfilter)) leaf_name_data.push_back(cptpclockcurrentdsoffsetfrommaster.get_name_leafdata());
    if (cptpclockcurrentdsmeanpathdelay.is_set || is_set(cptpclockcurrentdsmeanpathdelay.yfilter)) leaf_name_data.push_back(cptpclockcurrentdsmeanpathdelay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockCurrentDSTable::CPtpClockCurrentDSEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockCurrentDSTable::CPtpClockCurrentDSEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPTPMIB::CPtpClockCurrentDSTable::CPtpClockCurrentDSEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cPtpClockCurrentDSDomainIndex")
    {
        cptpclockcurrentdsdomainindex = value;
        cptpclockcurrentdsdomainindex.value_namespace = name_space;
        cptpclockcurrentdsdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockCurrentDSClockTypeIndex")
    {
        cptpclockcurrentdsclocktypeindex = value;
        cptpclockcurrentdsclocktypeindex.value_namespace = name_space;
        cptpclockcurrentdsclocktypeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockCurrentDSInstanceIndex")
    {
        cptpclockcurrentdsinstanceindex = value;
        cptpclockcurrentdsinstanceindex.value_namespace = name_space;
        cptpclockcurrentdsinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockCurrentDSStepsRemoved")
    {
        cptpclockcurrentdsstepsremoved = value;
        cptpclockcurrentdsstepsremoved.value_namespace = name_space;
        cptpclockcurrentdsstepsremoved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockCurrentDSOffsetFromMaster")
    {
        cptpclockcurrentdsoffsetfrommaster = value;
        cptpclockcurrentdsoffsetfrommaster.value_namespace = name_space;
        cptpclockcurrentdsoffsetfrommaster.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockCurrentDSMeanPathDelay")
    {
        cptpclockcurrentdsmeanpathdelay = value;
        cptpclockcurrentdsmeanpathdelay.value_namespace = name_space;
        cptpclockcurrentdsmeanpathdelay.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPTPMIB::CPtpClockCurrentDSTable::CPtpClockCurrentDSEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cPtpClockCurrentDSDomainIndex")
    {
        cptpclockcurrentdsdomainindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockCurrentDSClockTypeIndex")
    {
        cptpclockcurrentdsclocktypeindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockCurrentDSInstanceIndex")
    {
        cptpclockcurrentdsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockCurrentDSStepsRemoved")
    {
        cptpclockcurrentdsstepsremoved.yfilter = yfilter;
    }
    if(value_path == "cPtpClockCurrentDSOffsetFromMaster")
    {
        cptpclockcurrentdsoffsetfrommaster.yfilter = yfilter;
    }
    if(value_path == "cPtpClockCurrentDSMeanPathDelay")
    {
        cptpclockcurrentdsmeanpathdelay.yfilter = yfilter;
    }
}

bool CISCOPTPMIB::CPtpClockCurrentDSTable::CPtpClockCurrentDSEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockCurrentDSDomainIndex" || name == "cPtpClockCurrentDSClockTypeIndex" || name == "cPtpClockCurrentDSInstanceIndex" || name == "cPtpClockCurrentDSStepsRemoved" || name == "cPtpClockCurrentDSOffsetFromMaster" || name == "cPtpClockCurrentDSMeanPathDelay")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockParentDSTable::CPtpClockParentDSTable()
    :
    cptpclockparentdsentry(this, {"cptpclockparentdsdomainindex", "cptpclockparentdsclocktypeindex", "cptpclockparentdsinstanceindex"})
{

    yang_name = "cPtpClockParentDSTable"; yang_parent_name = "CISCO-PTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockParentDSTable::~CPtpClockParentDSTable()
{
}

bool CISCOPTPMIB::CPtpClockParentDSTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cptpclockparentdsentry.len(); index++)
    {
        if(cptpclockparentdsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPTPMIB::CPtpClockParentDSTable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockparentdsentry.len(); index++)
    {
        if(cptpclockparentdsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPTPMIB::CPtpClockParentDSTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockParentDSTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockParentDSTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockParentDSTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockParentDSTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockParentDSEntry")
    {
        auto c = std::make_shared<CISCOPTPMIB::CPtpClockParentDSTable::CPtpClockParentDSEntry>();
        c->parent = this;
        cptpclockparentdsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockParentDSTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cptpclockparentdsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPTPMIB::CPtpClockParentDSTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPTPMIB::CPtpClockParentDSTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPTPMIB::CPtpClockParentDSTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockParentDSEntry")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockParentDSTable::CPtpClockParentDSEntry::CPtpClockParentDSEntry()
    :
    cptpclockparentdsdomainindex{YType::uint32, "cPtpClockParentDSDomainIndex"},
    cptpclockparentdsclocktypeindex{YType::enumeration, "cPtpClockParentDSClockTypeIndex"},
    cptpclockparentdsinstanceindex{YType::uint32, "cPtpClockParentDSInstanceIndex"},
    cptpclockparentdsparentportidentity{YType::str, "cPtpClockParentDSParentPortIdentity"},
    cptpclockparentdsparentstats{YType::boolean, "cPtpClockParentDSParentStats"},
    cptpclockparentdsoffset{YType::int32, "cPtpClockParentDSOffset"},
    cptpclockparentdsclockphchrate{YType::int32, "cPtpClockParentDSClockPhChRate"},
    cptpclockparentdsgmclockidentity{YType::str, "cPtpClockParentDSGMClockIdentity"},
    cptpclockparentdsgmclockpriority1{YType::int32, "cPtpClockParentDSGMClockPriority1"},
    cptpclockparentdsgmclockpriority2{YType::int32, "cPtpClockParentDSGMClockPriority2"},
    cptpclockparentdsgmclockqualityclass{YType::uint32, "cPtpClockParentDSGMClockQualityClass"},
    cptpclockparentdsgmclockqualityaccuracy{YType::enumeration, "cPtpClockParentDSGMClockQualityAccuracy"},
    cptpclockparentdsgmclockqualityoffset{YType::uint32, "cPtpClockParentDSGMClockQualityOffset"}
{

    yang_name = "cPtpClockParentDSEntry"; yang_parent_name = "cPtpClockParentDSTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockParentDSTable::CPtpClockParentDSEntry::~CPtpClockParentDSEntry()
{
}

bool CISCOPTPMIB::CPtpClockParentDSTable::CPtpClockParentDSEntry::has_data() const
{
    if (is_presence_container) return true;
    return cptpclockparentdsdomainindex.is_set
	|| cptpclockparentdsclocktypeindex.is_set
	|| cptpclockparentdsinstanceindex.is_set
	|| cptpclockparentdsparentportidentity.is_set
	|| cptpclockparentdsparentstats.is_set
	|| cptpclockparentdsoffset.is_set
	|| cptpclockparentdsclockphchrate.is_set
	|| cptpclockparentdsgmclockidentity.is_set
	|| cptpclockparentdsgmclockpriority1.is_set
	|| cptpclockparentdsgmclockpriority2.is_set
	|| cptpclockparentdsgmclockqualityclass.is_set
	|| cptpclockparentdsgmclockqualityaccuracy.is_set
	|| cptpclockparentdsgmclockqualityoffset.is_set;
}

bool CISCOPTPMIB::CPtpClockParentDSTable::CPtpClockParentDSEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cptpclockparentdsdomainindex.yfilter)
	|| ydk::is_set(cptpclockparentdsclocktypeindex.yfilter)
	|| ydk::is_set(cptpclockparentdsinstanceindex.yfilter)
	|| ydk::is_set(cptpclockparentdsparentportidentity.yfilter)
	|| ydk::is_set(cptpclockparentdsparentstats.yfilter)
	|| ydk::is_set(cptpclockparentdsoffset.yfilter)
	|| ydk::is_set(cptpclockparentdsclockphchrate.yfilter)
	|| ydk::is_set(cptpclockparentdsgmclockidentity.yfilter)
	|| ydk::is_set(cptpclockparentdsgmclockpriority1.yfilter)
	|| ydk::is_set(cptpclockparentdsgmclockpriority2.yfilter)
	|| ydk::is_set(cptpclockparentdsgmclockqualityclass.yfilter)
	|| ydk::is_set(cptpclockparentdsgmclockqualityaccuracy.yfilter)
	|| ydk::is_set(cptpclockparentdsgmclockqualityoffset.yfilter);
}

std::string CISCOPTPMIB::CPtpClockParentDSTable::CPtpClockParentDSEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockParentDSTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockParentDSTable::CPtpClockParentDSEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockParentDSEntry";
    ADD_KEY_TOKEN(cptpclockparentdsdomainindex, "cPtpClockParentDSDomainIndex");
    ADD_KEY_TOKEN(cptpclockparentdsclocktypeindex, "cPtpClockParentDSClockTypeIndex");
    ADD_KEY_TOKEN(cptpclockparentdsinstanceindex, "cPtpClockParentDSInstanceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockParentDSTable::CPtpClockParentDSEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockparentdsdomainindex.is_set || is_set(cptpclockparentdsdomainindex.yfilter)) leaf_name_data.push_back(cptpclockparentdsdomainindex.get_name_leafdata());
    if (cptpclockparentdsclocktypeindex.is_set || is_set(cptpclockparentdsclocktypeindex.yfilter)) leaf_name_data.push_back(cptpclockparentdsclocktypeindex.get_name_leafdata());
    if (cptpclockparentdsinstanceindex.is_set || is_set(cptpclockparentdsinstanceindex.yfilter)) leaf_name_data.push_back(cptpclockparentdsinstanceindex.get_name_leafdata());
    if (cptpclockparentdsparentportidentity.is_set || is_set(cptpclockparentdsparentportidentity.yfilter)) leaf_name_data.push_back(cptpclockparentdsparentportidentity.get_name_leafdata());
    if (cptpclockparentdsparentstats.is_set || is_set(cptpclockparentdsparentstats.yfilter)) leaf_name_data.push_back(cptpclockparentdsparentstats.get_name_leafdata());
    if (cptpclockparentdsoffset.is_set || is_set(cptpclockparentdsoffset.yfilter)) leaf_name_data.push_back(cptpclockparentdsoffset.get_name_leafdata());
    if (cptpclockparentdsclockphchrate.is_set || is_set(cptpclockparentdsclockphchrate.yfilter)) leaf_name_data.push_back(cptpclockparentdsclockphchrate.get_name_leafdata());
    if (cptpclockparentdsgmclockidentity.is_set || is_set(cptpclockparentdsgmclockidentity.yfilter)) leaf_name_data.push_back(cptpclockparentdsgmclockidentity.get_name_leafdata());
    if (cptpclockparentdsgmclockpriority1.is_set || is_set(cptpclockparentdsgmclockpriority1.yfilter)) leaf_name_data.push_back(cptpclockparentdsgmclockpriority1.get_name_leafdata());
    if (cptpclockparentdsgmclockpriority2.is_set || is_set(cptpclockparentdsgmclockpriority2.yfilter)) leaf_name_data.push_back(cptpclockparentdsgmclockpriority2.get_name_leafdata());
    if (cptpclockparentdsgmclockqualityclass.is_set || is_set(cptpclockparentdsgmclockqualityclass.yfilter)) leaf_name_data.push_back(cptpclockparentdsgmclockqualityclass.get_name_leafdata());
    if (cptpclockparentdsgmclockqualityaccuracy.is_set || is_set(cptpclockparentdsgmclockqualityaccuracy.yfilter)) leaf_name_data.push_back(cptpclockparentdsgmclockqualityaccuracy.get_name_leafdata());
    if (cptpclockparentdsgmclockqualityoffset.is_set || is_set(cptpclockparentdsgmclockqualityoffset.yfilter)) leaf_name_data.push_back(cptpclockparentdsgmclockqualityoffset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockParentDSTable::CPtpClockParentDSEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockParentDSTable::CPtpClockParentDSEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPTPMIB::CPtpClockParentDSTable::CPtpClockParentDSEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cPtpClockParentDSDomainIndex")
    {
        cptpclockparentdsdomainindex = value;
        cptpclockparentdsdomainindex.value_namespace = name_space;
        cptpclockparentdsdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockParentDSClockTypeIndex")
    {
        cptpclockparentdsclocktypeindex = value;
        cptpclockparentdsclocktypeindex.value_namespace = name_space;
        cptpclockparentdsclocktypeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockParentDSInstanceIndex")
    {
        cptpclockparentdsinstanceindex = value;
        cptpclockparentdsinstanceindex.value_namespace = name_space;
        cptpclockparentdsinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockParentDSParentPortIdentity")
    {
        cptpclockparentdsparentportidentity = value;
        cptpclockparentdsparentportidentity.value_namespace = name_space;
        cptpclockparentdsparentportidentity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockParentDSParentStats")
    {
        cptpclockparentdsparentstats = value;
        cptpclockparentdsparentstats.value_namespace = name_space;
        cptpclockparentdsparentstats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockParentDSOffset")
    {
        cptpclockparentdsoffset = value;
        cptpclockparentdsoffset.value_namespace = name_space;
        cptpclockparentdsoffset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockParentDSClockPhChRate")
    {
        cptpclockparentdsclockphchrate = value;
        cptpclockparentdsclockphchrate.value_namespace = name_space;
        cptpclockparentdsclockphchrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockParentDSGMClockIdentity")
    {
        cptpclockparentdsgmclockidentity = value;
        cptpclockparentdsgmclockidentity.value_namespace = name_space;
        cptpclockparentdsgmclockidentity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockParentDSGMClockPriority1")
    {
        cptpclockparentdsgmclockpriority1 = value;
        cptpclockparentdsgmclockpriority1.value_namespace = name_space;
        cptpclockparentdsgmclockpriority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockParentDSGMClockPriority2")
    {
        cptpclockparentdsgmclockpriority2 = value;
        cptpclockparentdsgmclockpriority2.value_namespace = name_space;
        cptpclockparentdsgmclockpriority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockParentDSGMClockQualityClass")
    {
        cptpclockparentdsgmclockqualityclass = value;
        cptpclockparentdsgmclockqualityclass.value_namespace = name_space;
        cptpclockparentdsgmclockqualityclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockParentDSGMClockQualityAccuracy")
    {
        cptpclockparentdsgmclockqualityaccuracy = value;
        cptpclockparentdsgmclockqualityaccuracy.value_namespace = name_space;
        cptpclockparentdsgmclockqualityaccuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockParentDSGMClockQualityOffset")
    {
        cptpclockparentdsgmclockqualityoffset = value;
        cptpclockparentdsgmclockqualityoffset.value_namespace = name_space;
        cptpclockparentdsgmclockqualityoffset.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPTPMIB::CPtpClockParentDSTable::CPtpClockParentDSEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cPtpClockParentDSDomainIndex")
    {
        cptpclockparentdsdomainindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockParentDSClockTypeIndex")
    {
        cptpclockparentdsclocktypeindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockParentDSInstanceIndex")
    {
        cptpclockparentdsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockParentDSParentPortIdentity")
    {
        cptpclockparentdsparentportidentity.yfilter = yfilter;
    }
    if(value_path == "cPtpClockParentDSParentStats")
    {
        cptpclockparentdsparentstats.yfilter = yfilter;
    }
    if(value_path == "cPtpClockParentDSOffset")
    {
        cptpclockparentdsoffset.yfilter = yfilter;
    }
    if(value_path == "cPtpClockParentDSClockPhChRate")
    {
        cptpclockparentdsclockphchrate.yfilter = yfilter;
    }
    if(value_path == "cPtpClockParentDSGMClockIdentity")
    {
        cptpclockparentdsgmclockidentity.yfilter = yfilter;
    }
    if(value_path == "cPtpClockParentDSGMClockPriority1")
    {
        cptpclockparentdsgmclockpriority1.yfilter = yfilter;
    }
    if(value_path == "cPtpClockParentDSGMClockPriority2")
    {
        cptpclockparentdsgmclockpriority2.yfilter = yfilter;
    }
    if(value_path == "cPtpClockParentDSGMClockQualityClass")
    {
        cptpclockparentdsgmclockqualityclass.yfilter = yfilter;
    }
    if(value_path == "cPtpClockParentDSGMClockQualityAccuracy")
    {
        cptpclockparentdsgmclockqualityaccuracy.yfilter = yfilter;
    }
    if(value_path == "cPtpClockParentDSGMClockQualityOffset")
    {
        cptpclockparentdsgmclockqualityoffset.yfilter = yfilter;
    }
}

bool CISCOPTPMIB::CPtpClockParentDSTable::CPtpClockParentDSEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockParentDSDomainIndex" || name == "cPtpClockParentDSClockTypeIndex" || name == "cPtpClockParentDSInstanceIndex" || name == "cPtpClockParentDSParentPortIdentity" || name == "cPtpClockParentDSParentStats" || name == "cPtpClockParentDSOffset" || name == "cPtpClockParentDSClockPhChRate" || name == "cPtpClockParentDSGMClockIdentity" || name == "cPtpClockParentDSGMClockPriority1" || name == "cPtpClockParentDSGMClockPriority2" || name == "cPtpClockParentDSGMClockQualityClass" || name == "cPtpClockParentDSGMClockQualityAccuracy" || name == "cPtpClockParentDSGMClockQualityOffset")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockDefaultDSTable::CPtpClockDefaultDSTable()
    :
    cptpclockdefaultdsentry(this, {"cptpclockdefaultdsdomainindex", "cptpclockdefaultdsclocktypeindex", "cptpclockdefaultdsinstanceindex"})
{

    yang_name = "cPtpClockDefaultDSTable"; yang_parent_name = "CISCO-PTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockDefaultDSTable::~CPtpClockDefaultDSTable()
{
}

bool CISCOPTPMIB::CPtpClockDefaultDSTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cptpclockdefaultdsentry.len(); index++)
    {
        if(cptpclockdefaultdsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPTPMIB::CPtpClockDefaultDSTable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockdefaultdsentry.len(); index++)
    {
        if(cptpclockdefaultdsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPTPMIB::CPtpClockDefaultDSTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockDefaultDSTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockDefaultDSTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockDefaultDSTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockDefaultDSTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockDefaultDSEntry")
    {
        auto c = std::make_shared<CISCOPTPMIB::CPtpClockDefaultDSTable::CPtpClockDefaultDSEntry>();
        c->parent = this;
        cptpclockdefaultdsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockDefaultDSTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cptpclockdefaultdsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPTPMIB::CPtpClockDefaultDSTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPTPMIB::CPtpClockDefaultDSTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPTPMIB::CPtpClockDefaultDSTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockDefaultDSEntry")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockDefaultDSTable::CPtpClockDefaultDSEntry::CPtpClockDefaultDSEntry()
    :
    cptpclockdefaultdsdomainindex{YType::uint32, "cPtpClockDefaultDSDomainIndex"},
    cptpclockdefaultdsclocktypeindex{YType::enumeration, "cPtpClockDefaultDSClockTypeIndex"},
    cptpclockdefaultdsinstanceindex{YType::uint32, "cPtpClockDefaultDSInstanceIndex"},
    cptpclockdefaultdstwostepflag{YType::boolean, "cPtpClockDefaultDSTwoStepFlag"},
    cptpclockdefaultdsclockidentity{YType::str, "cPtpClockDefaultDSClockIdentity"},
    cptpclockdefaultdspriority1{YType::int32, "cPtpClockDefaultDSPriority1"},
    cptpclockdefaultdspriority2{YType::int32, "cPtpClockDefaultDSPriority2"},
    cptpclockdefaultdsslaveonly{YType::boolean, "cPtpClockDefaultDSSlaveOnly"},
    cptpclockdefaultdsqualityclass{YType::uint32, "cPtpClockDefaultDSQualityClass"},
    cptpclockdefaultdsqualityaccuracy{YType::enumeration, "cPtpClockDefaultDSQualityAccuracy"},
    cptpclockdefaultdsqualityoffset{YType::int32, "cPtpClockDefaultDSQualityOffset"}
{

    yang_name = "cPtpClockDefaultDSEntry"; yang_parent_name = "cPtpClockDefaultDSTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockDefaultDSTable::CPtpClockDefaultDSEntry::~CPtpClockDefaultDSEntry()
{
}

bool CISCOPTPMIB::CPtpClockDefaultDSTable::CPtpClockDefaultDSEntry::has_data() const
{
    if (is_presence_container) return true;
    return cptpclockdefaultdsdomainindex.is_set
	|| cptpclockdefaultdsclocktypeindex.is_set
	|| cptpclockdefaultdsinstanceindex.is_set
	|| cptpclockdefaultdstwostepflag.is_set
	|| cptpclockdefaultdsclockidentity.is_set
	|| cptpclockdefaultdspriority1.is_set
	|| cptpclockdefaultdspriority2.is_set
	|| cptpclockdefaultdsslaveonly.is_set
	|| cptpclockdefaultdsqualityclass.is_set
	|| cptpclockdefaultdsqualityaccuracy.is_set
	|| cptpclockdefaultdsqualityoffset.is_set;
}

bool CISCOPTPMIB::CPtpClockDefaultDSTable::CPtpClockDefaultDSEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cptpclockdefaultdsdomainindex.yfilter)
	|| ydk::is_set(cptpclockdefaultdsclocktypeindex.yfilter)
	|| ydk::is_set(cptpclockdefaultdsinstanceindex.yfilter)
	|| ydk::is_set(cptpclockdefaultdstwostepflag.yfilter)
	|| ydk::is_set(cptpclockdefaultdsclockidentity.yfilter)
	|| ydk::is_set(cptpclockdefaultdspriority1.yfilter)
	|| ydk::is_set(cptpclockdefaultdspriority2.yfilter)
	|| ydk::is_set(cptpclockdefaultdsslaveonly.yfilter)
	|| ydk::is_set(cptpclockdefaultdsqualityclass.yfilter)
	|| ydk::is_set(cptpclockdefaultdsqualityaccuracy.yfilter)
	|| ydk::is_set(cptpclockdefaultdsqualityoffset.yfilter);
}

std::string CISCOPTPMIB::CPtpClockDefaultDSTable::CPtpClockDefaultDSEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockDefaultDSTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockDefaultDSTable::CPtpClockDefaultDSEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockDefaultDSEntry";
    ADD_KEY_TOKEN(cptpclockdefaultdsdomainindex, "cPtpClockDefaultDSDomainIndex");
    ADD_KEY_TOKEN(cptpclockdefaultdsclocktypeindex, "cPtpClockDefaultDSClockTypeIndex");
    ADD_KEY_TOKEN(cptpclockdefaultdsinstanceindex, "cPtpClockDefaultDSInstanceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockDefaultDSTable::CPtpClockDefaultDSEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockdefaultdsdomainindex.is_set || is_set(cptpclockdefaultdsdomainindex.yfilter)) leaf_name_data.push_back(cptpclockdefaultdsdomainindex.get_name_leafdata());
    if (cptpclockdefaultdsclocktypeindex.is_set || is_set(cptpclockdefaultdsclocktypeindex.yfilter)) leaf_name_data.push_back(cptpclockdefaultdsclocktypeindex.get_name_leafdata());
    if (cptpclockdefaultdsinstanceindex.is_set || is_set(cptpclockdefaultdsinstanceindex.yfilter)) leaf_name_data.push_back(cptpclockdefaultdsinstanceindex.get_name_leafdata());
    if (cptpclockdefaultdstwostepflag.is_set || is_set(cptpclockdefaultdstwostepflag.yfilter)) leaf_name_data.push_back(cptpclockdefaultdstwostepflag.get_name_leafdata());
    if (cptpclockdefaultdsclockidentity.is_set || is_set(cptpclockdefaultdsclockidentity.yfilter)) leaf_name_data.push_back(cptpclockdefaultdsclockidentity.get_name_leafdata());
    if (cptpclockdefaultdspriority1.is_set || is_set(cptpclockdefaultdspriority1.yfilter)) leaf_name_data.push_back(cptpclockdefaultdspriority1.get_name_leafdata());
    if (cptpclockdefaultdspriority2.is_set || is_set(cptpclockdefaultdspriority2.yfilter)) leaf_name_data.push_back(cptpclockdefaultdspriority2.get_name_leafdata());
    if (cptpclockdefaultdsslaveonly.is_set || is_set(cptpclockdefaultdsslaveonly.yfilter)) leaf_name_data.push_back(cptpclockdefaultdsslaveonly.get_name_leafdata());
    if (cptpclockdefaultdsqualityclass.is_set || is_set(cptpclockdefaultdsqualityclass.yfilter)) leaf_name_data.push_back(cptpclockdefaultdsqualityclass.get_name_leafdata());
    if (cptpclockdefaultdsqualityaccuracy.is_set || is_set(cptpclockdefaultdsqualityaccuracy.yfilter)) leaf_name_data.push_back(cptpclockdefaultdsqualityaccuracy.get_name_leafdata());
    if (cptpclockdefaultdsqualityoffset.is_set || is_set(cptpclockdefaultdsqualityoffset.yfilter)) leaf_name_data.push_back(cptpclockdefaultdsqualityoffset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockDefaultDSTable::CPtpClockDefaultDSEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockDefaultDSTable::CPtpClockDefaultDSEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPTPMIB::CPtpClockDefaultDSTable::CPtpClockDefaultDSEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cPtpClockDefaultDSDomainIndex")
    {
        cptpclockdefaultdsdomainindex = value;
        cptpclockdefaultdsdomainindex.value_namespace = name_space;
        cptpclockdefaultdsdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockDefaultDSClockTypeIndex")
    {
        cptpclockdefaultdsclocktypeindex = value;
        cptpclockdefaultdsclocktypeindex.value_namespace = name_space;
        cptpclockdefaultdsclocktypeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockDefaultDSInstanceIndex")
    {
        cptpclockdefaultdsinstanceindex = value;
        cptpclockdefaultdsinstanceindex.value_namespace = name_space;
        cptpclockdefaultdsinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockDefaultDSTwoStepFlag")
    {
        cptpclockdefaultdstwostepflag = value;
        cptpclockdefaultdstwostepflag.value_namespace = name_space;
        cptpclockdefaultdstwostepflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockDefaultDSClockIdentity")
    {
        cptpclockdefaultdsclockidentity = value;
        cptpclockdefaultdsclockidentity.value_namespace = name_space;
        cptpclockdefaultdsclockidentity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockDefaultDSPriority1")
    {
        cptpclockdefaultdspriority1 = value;
        cptpclockdefaultdspriority1.value_namespace = name_space;
        cptpclockdefaultdspriority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockDefaultDSPriority2")
    {
        cptpclockdefaultdspriority2 = value;
        cptpclockdefaultdspriority2.value_namespace = name_space;
        cptpclockdefaultdspriority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockDefaultDSSlaveOnly")
    {
        cptpclockdefaultdsslaveonly = value;
        cptpclockdefaultdsslaveonly.value_namespace = name_space;
        cptpclockdefaultdsslaveonly.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockDefaultDSQualityClass")
    {
        cptpclockdefaultdsqualityclass = value;
        cptpclockdefaultdsqualityclass.value_namespace = name_space;
        cptpclockdefaultdsqualityclass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockDefaultDSQualityAccuracy")
    {
        cptpclockdefaultdsqualityaccuracy = value;
        cptpclockdefaultdsqualityaccuracy.value_namespace = name_space;
        cptpclockdefaultdsqualityaccuracy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockDefaultDSQualityOffset")
    {
        cptpclockdefaultdsqualityoffset = value;
        cptpclockdefaultdsqualityoffset.value_namespace = name_space;
        cptpclockdefaultdsqualityoffset.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPTPMIB::CPtpClockDefaultDSTable::CPtpClockDefaultDSEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cPtpClockDefaultDSDomainIndex")
    {
        cptpclockdefaultdsdomainindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockDefaultDSClockTypeIndex")
    {
        cptpclockdefaultdsclocktypeindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockDefaultDSInstanceIndex")
    {
        cptpclockdefaultdsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockDefaultDSTwoStepFlag")
    {
        cptpclockdefaultdstwostepflag.yfilter = yfilter;
    }
    if(value_path == "cPtpClockDefaultDSClockIdentity")
    {
        cptpclockdefaultdsclockidentity.yfilter = yfilter;
    }
    if(value_path == "cPtpClockDefaultDSPriority1")
    {
        cptpclockdefaultdspriority1.yfilter = yfilter;
    }
    if(value_path == "cPtpClockDefaultDSPriority2")
    {
        cptpclockdefaultdspriority2.yfilter = yfilter;
    }
    if(value_path == "cPtpClockDefaultDSSlaveOnly")
    {
        cptpclockdefaultdsslaveonly.yfilter = yfilter;
    }
    if(value_path == "cPtpClockDefaultDSQualityClass")
    {
        cptpclockdefaultdsqualityclass.yfilter = yfilter;
    }
    if(value_path == "cPtpClockDefaultDSQualityAccuracy")
    {
        cptpclockdefaultdsqualityaccuracy.yfilter = yfilter;
    }
    if(value_path == "cPtpClockDefaultDSQualityOffset")
    {
        cptpclockdefaultdsqualityoffset.yfilter = yfilter;
    }
}

bool CISCOPTPMIB::CPtpClockDefaultDSTable::CPtpClockDefaultDSEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockDefaultDSDomainIndex" || name == "cPtpClockDefaultDSClockTypeIndex" || name == "cPtpClockDefaultDSInstanceIndex" || name == "cPtpClockDefaultDSTwoStepFlag" || name == "cPtpClockDefaultDSClockIdentity" || name == "cPtpClockDefaultDSPriority1" || name == "cPtpClockDefaultDSPriority2" || name == "cPtpClockDefaultDSSlaveOnly" || name == "cPtpClockDefaultDSQualityClass" || name == "cPtpClockDefaultDSQualityAccuracy" || name == "cPtpClockDefaultDSQualityOffset")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockRunningTable::CPtpClockRunningTable()
    :
    cptpclockrunningentry(this, {"cptpclockrunningdomainindex", "cptpclockrunningclocktypeindex", "cptpclockrunninginstanceindex"})
{

    yang_name = "cPtpClockRunningTable"; yang_parent_name = "CISCO-PTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockRunningTable::~CPtpClockRunningTable()
{
}

bool CISCOPTPMIB::CPtpClockRunningTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cptpclockrunningentry.len(); index++)
    {
        if(cptpclockrunningentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPTPMIB::CPtpClockRunningTable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockrunningentry.len(); index++)
    {
        if(cptpclockrunningentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPTPMIB::CPtpClockRunningTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockRunningTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockRunningTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockRunningTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockRunningTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockRunningEntry")
    {
        auto c = std::make_shared<CISCOPTPMIB::CPtpClockRunningTable::CPtpClockRunningEntry>();
        c->parent = this;
        cptpclockrunningentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockRunningTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cptpclockrunningentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPTPMIB::CPtpClockRunningTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPTPMIB::CPtpClockRunningTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPTPMIB::CPtpClockRunningTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockRunningEntry")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockRunningTable::CPtpClockRunningEntry::CPtpClockRunningEntry()
    :
    cptpclockrunningdomainindex{YType::uint32, "cPtpClockRunningDomainIndex"},
    cptpclockrunningclocktypeindex{YType::enumeration, "cPtpClockRunningClockTypeIndex"},
    cptpclockrunninginstanceindex{YType::uint32, "cPtpClockRunningInstanceIndex"},
    cptpclockrunningstate{YType::enumeration, "cPtpClockRunningState"},
    cptpclockrunningpacketssent{YType::uint64, "cPtpClockRunningPacketsSent"},
    cptpclockrunningpacketsreceived{YType::uint64, "cPtpClockRunningPacketsReceived"}
{

    yang_name = "cPtpClockRunningEntry"; yang_parent_name = "cPtpClockRunningTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockRunningTable::CPtpClockRunningEntry::~CPtpClockRunningEntry()
{
}

bool CISCOPTPMIB::CPtpClockRunningTable::CPtpClockRunningEntry::has_data() const
{
    if (is_presence_container) return true;
    return cptpclockrunningdomainindex.is_set
	|| cptpclockrunningclocktypeindex.is_set
	|| cptpclockrunninginstanceindex.is_set
	|| cptpclockrunningstate.is_set
	|| cptpclockrunningpacketssent.is_set
	|| cptpclockrunningpacketsreceived.is_set;
}

bool CISCOPTPMIB::CPtpClockRunningTable::CPtpClockRunningEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cptpclockrunningdomainindex.yfilter)
	|| ydk::is_set(cptpclockrunningclocktypeindex.yfilter)
	|| ydk::is_set(cptpclockrunninginstanceindex.yfilter)
	|| ydk::is_set(cptpclockrunningstate.yfilter)
	|| ydk::is_set(cptpclockrunningpacketssent.yfilter)
	|| ydk::is_set(cptpclockrunningpacketsreceived.yfilter);
}

std::string CISCOPTPMIB::CPtpClockRunningTable::CPtpClockRunningEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockRunningTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockRunningTable::CPtpClockRunningEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockRunningEntry";
    ADD_KEY_TOKEN(cptpclockrunningdomainindex, "cPtpClockRunningDomainIndex");
    ADD_KEY_TOKEN(cptpclockrunningclocktypeindex, "cPtpClockRunningClockTypeIndex");
    ADD_KEY_TOKEN(cptpclockrunninginstanceindex, "cPtpClockRunningInstanceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockRunningTable::CPtpClockRunningEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockrunningdomainindex.is_set || is_set(cptpclockrunningdomainindex.yfilter)) leaf_name_data.push_back(cptpclockrunningdomainindex.get_name_leafdata());
    if (cptpclockrunningclocktypeindex.is_set || is_set(cptpclockrunningclocktypeindex.yfilter)) leaf_name_data.push_back(cptpclockrunningclocktypeindex.get_name_leafdata());
    if (cptpclockrunninginstanceindex.is_set || is_set(cptpclockrunninginstanceindex.yfilter)) leaf_name_data.push_back(cptpclockrunninginstanceindex.get_name_leafdata());
    if (cptpclockrunningstate.is_set || is_set(cptpclockrunningstate.yfilter)) leaf_name_data.push_back(cptpclockrunningstate.get_name_leafdata());
    if (cptpclockrunningpacketssent.is_set || is_set(cptpclockrunningpacketssent.yfilter)) leaf_name_data.push_back(cptpclockrunningpacketssent.get_name_leafdata());
    if (cptpclockrunningpacketsreceived.is_set || is_set(cptpclockrunningpacketsreceived.yfilter)) leaf_name_data.push_back(cptpclockrunningpacketsreceived.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockRunningTable::CPtpClockRunningEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockRunningTable::CPtpClockRunningEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPTPMIB::CPtpClockRunningTable::CPtpClockRunningEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cPtpClockRunningDomainIndex")
    {
        cptpclockrunningdomainindex = value;
        cptpclockrunningdomainindex.value_namespace = name_space;
        cptpclockrunningdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockRunningClockTypeIndex")
    {
        cptpclockrunningclocktypeindex = value;
        cptpclockrunningclocktypeindex.value_namespace = name_space;
        cptpclockrunningclocktypeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockRunningInstanceIndex")
    {
        cptpclockrunninginstanceindex = value;
        cptpclockrunninginstanceindex.value_namespace = name_space;
        cptpclockrunninginstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockRunningState")
    {
        cptpclockrunningstate = value;
        cptpclockrunningstate.value_namespace = name_space;
        cptpclockrunningstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockRunningPacketsSent")
    {
        cptpclockrunningpacketssent = value;
        cptpclockrunningpacketssent.value_namespace = name_space;
        cptpclockrunningpacketssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockRunningPacketsReceived")
    {
        cptpclockrunningpacketsreceived = value;
        cptpclockrunningpacketsreceived.value_namespace = name_space;
        cptpclockrunningpacketsreceived.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPTPMIB::CPtpClockRunningTable::CPtpClockRunningEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cPtpClockRunningDomainIndex")
    {
        cptpclockrunningdomainindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockRunningClockTypeIndex")
    {
        cptpclockrunningclocktypeindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockRunningInstanceIndex")
    {
        cptpclockrunninginstanceindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockRunningState")
    {
        cptpclockrunningstate.yfilter = yfilter;
    }
    if(value_path == "cPtpClockRunningPacketsSent")
    {
        cptpclockrunningpacketssent.yfilter = yfilter;
    }
    if(value_path == "cPtpClockRunningPacketsReceived")
    {
        cptpclockrunningpacketsreceived.yfilter = yfilter;
    }
}

bool CISCOPTPMIB::CPtpClockRunningTable::CPtpClockRunningEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockRunningDomainIndex" || name == "cPtpClockRunningClockTypeIndex" || name == "cPtpClockRunningInstanceIndex" || name == "cPtpClockRunningState" || name == "cPtpClockRunningPacketsSent" || name == "cPtpClockRunningPacketsReceived")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockTimePropertiesDSTable::CPtpClockTimePropertiesDSTable()
    :
    cptpclocktimepropertiesdsentry(this, {"cptpclocktimepropertiesdsdomainindex", "cptpclocktimepropertiesdsclocktypeindex", "cptpclocktimepropertiesdsinstanceindex"})
{

    yang_name = "cPtpClockTimePropertiesDSTable"; yang_parent_name = "CISCO-PTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockTimePropertiesDSTable::~CPtpClockTimePropertiesDSTable()
{
}

bool CISCOPTPMIB::CPtpClockTimePropertiesDSTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cptpclocktimepropertiesdsentry.len(); index++)
    {
        if(cptpclocktimepropertiesdsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPTPMIB::CPtpClockTimePropertiesDSTable::has_operation() const
{
    for (std::size_t index=0; index<cptpclocktimepropertiesdsentry.len(); index++)
    {
        if(cptpclocktimepropertiesdsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPTPMIB::CPtpClockTimePropertiesDSTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockTimePropertiesDSTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockTimePropertiesDSTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockTimePropertiesDSTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockTimePropertiesDSTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockTimePropertiesDSEntry")
    {
        auto c = std::make_shared<CISCOPTPMIB::CPtpClockTimePropertiesDSTable::CPtpClockTimePropertiesDSEntry>();
        c->parent = this;
        cptpclocktimepropertiesdsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockTimePropertiesDSTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cptpclocktimepropertiesdsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPTPMIB::CPtpClockTimePropertiesDSTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPTPMIB::CPtpClockTimePropertiesDSTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPTPMIB::CPtpClockTimePropertiesDSTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockTimePropertiesDSEntry")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockTimePropertiesDSTable::CPtpClockTimePropertiesDSEntry::CPtpClockTimePropertiesDSEntry()
    :
    cptpclocktimepropertiesdsdomainindex{YType::uint32, "cPtpClockTimePropertiesDSDomainIndex"},
    cptpclocktimepropertiesdsclocktypeindex{YType::enumeration, "cPtpClockTimePropertiesDSClockTypeIndex"},
    cptpclocktimepropertiesdsinstanceindex{YType::uint32, "cPtpClockTimePropertiesDSInstanceIndex"},
    cptpclocktimepropertiesdscurrentutcoffsetvalid{YType::boolean, "cPtpClockTimePropertiesDSCurrentUTCOffsetValid"},
    cptpclocktimepropertiesdscurrentutcoffset{YType::int32, "cPtpClockTimePropertiesDSCurrentUTCOffset"},
    cptpclocktimepropertiesdsleap59{YType::boolean, "cPtpClockTimePropertiesDSLeap59"},
    cptpclocktimepropertiesdsleap61{YType::boolean, "cPtpClockTimePropertiesDSLeap61"},
    cptpclocktimepropertiesdstimetraceable{YType::boolean, "cPtpClockTimePropertiesDSTimeTraceable"},
    cptpclocktimepropertiesdsfreqtraceable{YType::boolean, "cPtpClockTimePropertiesDSFreqTraceable"},
    cptpclocktimepropertiesdsptptimescale{YType::boolean, "cPtpClockTimePropertiesDSPTPTimescale"},
    cptpclocktimepropertiesdssource{YType::enumeration, "cPtpClockTimePropertiesDSSource"}
{

    yang_name = "cPtpClockTimePropertiesDSEntry"; yang_parent_name = "cPtpClockTimePropertiesDSTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockTimePropertiesDSTable::CPtpClockTimePropertiesDSEntry::~CPtpClockTimePropertiesDSEntry()
{
}

bool CISCOPTPMIB::CPtpClockTimePropertiesDSTable::CPtpClockTimePropertiesDSEntry::has_data() const
{
    if (is_presence_container) return true;
    return cptpclocktimepropertiesdsdomainindex.is_set
	|| cptpclocktimepropertiesdsclocktypeindex.is_set
	|| cptpclocktimepropertiesdsinstanceindex.is_set
	|| cptpclocktimepropertiesdscurrentutcoffsetvalid.is_set
	|| cptpclocktimepropertiesdscurrentutcoffset.is_set
	|| cptpclocktimepropertiesdsleap59.is_set
	|| cptpclocktimepropertiesdsleap61.is_set
	|| cptpclocktimepropertiesdstimetraceable.is_set
	|| cptpclocktimepropertiesdsfreqtraceable.is_set
	|| cptpclocktimepropertiesdsptptimescale.is_set
	|| cptpclocktimepropertiesdssource.is_set;
}

bool CISCOPTPMIB::CPtpClockTimePropertiesDSTable::CPtpClockTimePropertiesDSEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cptpclocktimepropertiesdsdomainindex.yfilter)
	|| ydk::is_set(cptpclocktimepropertiesdsclocktypeindex.yfilter)
	|| ydk::is_set(cptpclocktimepropertiesdsinstanceindex.yfilter)
	|| ydk::is_set(cptpclocktimepropertiesdscurrentutcoffsetvalid.yfilter)
	|| ydk::is_set(cptpclocktimepropertiesdscurrentutcoffset.yfilter)
	|| ydk::is_set(cptpclocktimepropertiesdsleap59.yfilter)
	|| ydk::is_set(cptpclocktimepropertiesdsleap61.yfilter)
	|| ydk::is_set(cptpclocktimepropertiesdstimetraceable.yfilter)
	|| ydk::is_set(cptpclocktimepropertiesdsfreqtraceable.yfilter)
	|| ydk::is_set(cptpclocktimepropertiesdsptptimescale.yfilter)
	|| ydk::is_set(cptpclocktimepropertiesdssource.yfilter);
}

std::string CISCOPTPMIB::CPtpClockTimePropertiesDSTable::CPtpClockTimePropertiesDSEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockTimePropertiesDSTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockTimePropertiesDSTable::CPtpClockTimePropertiesDSEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockTimePropertiesDSEntry";
    ADD_KEY_TOKEN(cptpclocktimepropertiesdsdomainindex, "cPtpClockTimePropertiesDSDomainIndex");
    ADD_KEY_TOKEN(cptpclocktimepropertiesdsclocktypeindex, "cPtpClockTimePropertiesDSClockTypeIndex");
    ADD_KEY_TOKEN(cptpclocktimepropertiesdsinstanceindex, "cPtpClockTimePropertiesDSInstanceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockTimePropertiesDSTable::CPtpClockTimePropertiesDSEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclocktimepropertiesdsdomainindex.is_set || is_set(cptpclocktimepropertiesdsdomainindex.yfilter)) leaf_name_data.push_back(cptpclocktimepropertiesdsdomainindex.get_name_leafdata());
    if (cptpclocktimepropertiesdsclocktypeindex.is_set || is_set(cptpclocktimepropertiesdsclocktypeindex.yfilter)) leaf_name_data.push_back(cptpclocktimepropertiesdsclocktypeindex.get_name_leafdata());
    if (cptpclocktimepropertiesdsinstanceindex.is_set || is_set(cptpclocktimepropertiesdsinstanceindex.yfilter)) leaf_name_data.push_back(cptpclocktimepropertiesdsinstanceindex.get_name_leafdata());
    if (cptpclocktimepropertiesdscurrentutcoffsetvalid.is_set || is_set(cptpclocktimepropertiesdscurrentutcoffsetvalid.yfilter)) leaf_name_data.push_back(cptpclocktimepropertiesdscurrentutcoffsetvalid.get_name_leafdata());
    if (cptpclocktimepropertiesdscurrentutcoffset.is_set || is_set(cptpclocktimepropertiesdscurrentutcoffset.yfilter)) leaf_name_data.push_back(cptpclocktimepropertiesdscurrentutcoffset.get_name_leafdata());
    if (cptpclocktimepropertiesdsleap59.is_set || is_set(cptpclocktimepropertiesdsleap59.yfilter)) leaf_name_data.push_back(cptpclocktimepropertiesdsleap59.get_name_leafdata());
    if (cptpclocktimepropertiesdsleap61.is_set || is_set(cptpclocktimepropertiesdsleap61.yfilter)) leaf_name_data.push_back(cptpclocktimepropertiesdsleap61.get_name_leafdata());
    if (cptpclocktimepropertiesdstimetraceable.is_set || is_set(cptpclocktimepropertiesdstimetraceable.yfilter)) leaf_name_data.push_back(cptpclocktimepropertiesdstimetraceable.get_name_leafdata());
    if (cptpclocktimepropertiesdsfreqtraceable.is_set || is_set(cptpclocktimepropertiesdsfreqtraceable.yfilter)) leaf_name_data.push_back(cptpclocktimepropertiesdsfreqtraceable.get_name_leafdata());
    if (cptpclocktimepropertiesdsptptimescale.is_set || is_set(cptpclocktimepropertiesdsptptimescale.yfilter)) leaf_name_data.push_back(cptpclocktimepropertiesdsptptimescale.get_name_leafdata());
    if (cptpclocktimepropertiesdssource.is_set || is_set(cptpclocktimepropertiesdssource.yfilter)) leaf_name_data.push_back(cptpclocktimepropertiesdssource.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockTimePropertiesDSTable::CPtpClockTimePropertiesDSEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockTimePropertiesDSTable::CPtpClockTimePropertiesDSEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPTPMIB::CPtpClockTimePropertiesDSTable::CPtpClockTimePropertiesDSEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cPtpClockTimePropertiesDSDomainIndex")
    {
        cptpclocktimepropertiesdsdomainindex = value;
        cptpclocktimepropertiesdsdomainindex.value_namespace = name_space;
        cptpclocktimepropertiesdsdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTimePropertiesDSClockTypeIndex")
    {
        cptpclocktimepropertiesdsclocktypeindex = value;
        cptpclocktimepropertiesdsclocktypeindex.value_namespace = name_space;
        cptpclocktimepropertiesdsclocktypeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTimePropertiesDSInstanceIndex")
    {
        cptpclocktimepropertiesdsinstanceindex = value;
        cptpclocktimepropertiesdsinstanceindex.value_namespace = name_space;
        cptpclocktimepropertiesdsinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTimePropertiesDSCurrentUTCOffsetValid")
    {
        cptpclocktimepropertiesdscurrentutcoffsetvalid = value;
        cptpclocktimepropertiesdscurrentutcoffsetvalid.value_namespace = name_space;
        cptpclocktimepropertiesdscurrentutcoffsetvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTimePropertiesDSCurrentUTCOffset")
    {
        cptpclocktimepropertiesdscurrentutcoffset = value;
        cptpclocktimepropertiesdscurrentutcoffset.value_namespace = name_space;
        cptpclocktimepropertiesdscurrentutcoffset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTimePropertiesDSLeap59")
    {
        cptpclocktimepropertiesdsleap59 = value;
        cptpclocktimepropertiesdsleap59.value_namespace = name_space;
        cptpclocktimepropertiesdsleap59.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTimePropertiesDSLeap61")
    {
        cptpclocktimepropertiesdsleap61 = value;
        cptpclocktimepropertiesdsleap61.value_namespace = name_space;
        cptpclocktimepropertiesdsleap61.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTimePropertiesDSTimeTraceable")
    {
        cptpclocktimepropertiesdstimetraceable = value;
        cptpclocktimepropertiesdstimetraceable.value_namespace = name_space;
        cptpclocktimepropertiesdstimetraceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTimePropertiesDSFreqTraceable")
    {
        cptpclocktimepropertiesdsfreqtraceable = value;
        cptpclocktimepropertiesdsfreqtraceable.value_namespace = name_space;
        cptpclocktimepropertiesdsfreqtraceable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTimePropertiesDSPTPTimescale")
    {
        cptpclocktimepropertiesdsptptimescale = value;
        cptpclocktimepropertiesdsptptimescale.value_namespace = name_space;
        cptpclocktimepropertiesdsptptimescale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTimePropertiesDSSource")
    {
        cptpclocktimepropertiesdssource = value;
        cptpclocktimepropertiesdssource.value_namespace = name_space;
        cptpclocktimepropertiesdssource.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPTPMIB::CPtpClockTimePropertiesDSTable::CPtpClockTimePropertiesDSEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cPtpClockTimePropertiesDSDomainIndex")
    {
        cptpclocktimepropertiesdsdomainindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTimePropertiesDSClockTypeIndex")
    {
        cptpclocktimepropertiesdsclocktypeindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTimePropertiesDSInstanceIndex")
    {
        cptpclocktimepropertiesdsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTimePropertiesDSCurrentUTCOffsetValid")
    {
        cptpclocktimepropertiesdscurrentutcoffsetvalid.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTimePropertiesDSCurrentUTCOffset")
    {
        cptpclocktimepropertiesdscurrentutcoffset.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTimePropertiesDSLeap59")
    {
        cptpclocktimepropertiesdsleap59.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTimePropertiesDSLeap61")
    {
        cptpclocktimepropertiesdsleap61.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTimePropertiesDSTimeTraceable")
    {
        cptpclocktimepropertiesdstimetraceable.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTimePropertiesDSFreqTraceable")
    {
        cptpclocktimepropertiesdsfreqtraceable.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTimePropertiesDSPTPTimescale")
    {
        cptpclocktimepropertiesdsptptimescale.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTimePropertiesDSSource")
    {
        cptpclocktimepropertiesdssource.yfilter = yfilter;
    }
}

bool CISCOPTPMIB::CPtpClockTimePropertiesDSTable::CPtpClockTimePropertiesDSEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockTimePropertiesDSDomainIndex" || name == "cPtpClockTimePropertiesDSClockTypeIndex" || name == "cPtpClockTimePropertiesDSInstanceIndex" || name == "cPtpClockTimePropertiesDSCurrentUTCOffsetValid" || name == "cPtpClockTimePropertiesDSCurrentUTCOffset" || name == "cPtpClockTimePropertiesDSLeap59" || name == "cPtpClockTimePropertiesDSLeap61" || name == "cPtpClockTimePropertiesDSTimeTraceable" || name == "cPtpClockTimePropertiesDSFreqTraceable" || name == "cPtpClockTimePropertiesDSPTPTimescale" || name == "cPtpClockTimePropertiesDSSource")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockTransDefaultDSTable::CPtpClockTransDefaultDSTable()
    :
    cptpclocktransdefaultdsentry(this, {"cptpclocktransdefaultdsdomainindex", "cptpclocktransdefaultdsinstanceindex"})
{

    yang_name = "cPtpClockTransDefaultDSTable"; yang_parent_name = "CISCO-PTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockTransDefaultDSTable::~CPtpClockTransDefaultDSTable()
{
}

bool CISCOPTPMIB::CPtpClockTransDefaultDSTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cptpclocktransdefaultdsentry.len(); index++)
    {
        if(cptpclocktransdefaultdsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPTPMIB::CPtpClockTransDefaultDSTable::has_operation() const
{
    for (std::size_t index=0; index<cptpclocktransdefaultdsentry.len(); index++)
    {
        if(cptpclocktransdefaultdsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPTPMIB::CPtpClockTransDefaultDSTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockTransDefaultDSTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockTransDefaultDSTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockTransDefaultDSTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockTransDefaultDSTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockTransDefaultDSEntry")
    {
        auto c = std::make_shared<CISCOPTPMIB::CPtpClockTransDefaultDSTable::CPtpClockTransDefaultDSEntry>();
        c->parent = this;
        cptpclocktransdefaultdsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockTransDefaultDSTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cptpclocktransdefaultdsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPTPMIB::CPtpClockTransDefaultDSTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPTPMIB::CPtpClockTransDefaultDSTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPTPMIB::CPtpClockTransDefaultDSTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockTransDefaultDSEntry")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockTransDefaultDSTable::CPtpClockTransDefaultDSEntry::CPtpClockTransDefaultDSEntry()
    :
    cptpclocktransdefaultdsdomainindex{YType::uint32, "cPtpClockTransDefaultDSDomainIndex"},
    cptpclocktransdefaultdsinstanceindex{YType::uint32, "cPtpClockTransDefaultDSInstanceIndex"},
    cptpclocktransdefaultdsclockidentity{YType::str, "cPtpClockTransDefaultDSClockIdentity"},
    cptpclocktransdefaultdsnumofports{YType::uint32, "cPtpClockTransDefaultDSNumOfPorts"},
    cptpclocktransdefaultdsdelay{YType::enumeration, "cPtpClockTransDefaultDSDelay"},
    cptpclocktransdefaultdsprimarydomain{YType::int32, "cPtpClockTransDefaultDSPrimaryDomain"}
{

    yang_name = "cPtpClockTransDefaultDSEntry"; yang_parent_name = "cPtpClockTransDefaultDSTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockTransDefaultDSTable::CPtpClockTransDefaultDSEntry::~CPtpClockTransDefaultDSEntry()
{
}

bool CISCOPTPMIB::CPtpClockTransDefaultDSTable::CPtpClockTransDefaultDSEntry::has_data() const
{
    if (is_presence_container) return true;
    return cptpclocktransdefaultdsdomainindex.is_set
	|| cptpclocktransdefaultdsinstanceindex.is_set
	|| cptpclocktransdefaultdsclockidentity.is_set
	|| cptpclocktransdefaultdsnumofports.is_set
	|| cptpclocktransdefaultdsdelay.is_set
	|| cptpclocktransdefaultdsprimarydomain.is_set;
}

bool CISCOPTPMIB::CPtpClockTransDefaultDSTable::CPtpClockTransDefaultDSEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cptpclocktransdefaultdsdomainindex.yfilter)
	|| ydk::is_set(cptpclocktransdefaultdsinstanceindex.yfilter)
	|| ydk::is_set(cptpclocktransdefaultdsclockidentity.yfilter)
	|| ydk::is_set(cptpclocktransdefaultdsnumofports.yfilter)
	|| ydk::is_set(cptpclocktransdefaultdsdelay.yfilter)
	|| ydk::is_set(cptpclocktransdefaultdsprimarydomain.yfilter);
}

std::string CISCOPTPMIB::CPtpClockTransDefaultDSTable::CPtpClockTransDefaultDSEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockTransDefaultDSTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockTransDefaultDSTable::CPtpClockTransDefaultDSEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockTransDefaultDSEntry";
    ADD_KEY_TOKEN(cptpclocktransdefaultdsdomainindex, "cPtpClockTransDefaultDSDomainIndex");
    ADD_KEY_TOKEN(cptpclocktransdefaultdsinstanceindex, "cPtpClockTransDefaultDSInstanceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockTransDefaultDSTable::CPtpClockTransDefaultDSEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclocktransdefaultdsdomainindex.is_set || is_set(cptpclocktransdefaultdsdomainindex.yfilter)) leaf_name_data.push_back(cptpclocktransdefaultdsdomainindex.get_name_leafdata());
    if (cptpclocktransdefaultdsinstanceindex.is_set || is_set(cptpclocktransdefaultdsinstanceindex.yfilter)) leaf_name_data.push_back(cptpclocktransdefaultdsinstanceindex.get_name_leafdata());
    if (cptpclocktransdefaultdsclockidentity.is_set || is_set(cptpclocktransdefaultdsclockidentity.yfilter)) leaf_name_data.push_back(cptpclocktransdefaultdsclockidentity.get_name_leafdata());
    if (cptpclocktransdefaultdsnumofports.is_set || is_set(cptpclocktransdefaultdsnumofports.yfilter)) leaf_name_data.push_back(cptpclocktransdefaultdsnumofports.get_name_leafdata());
    if (cptpclocktransdefaultdsdelay.is_set || is_set(cptpclocktransdefaultdsdelay.yfilter)) leaf_name_data.push_back(cptpclocktransdefaultdsdelay.get_name_leafdata());
    if (cptpclocktransdefaultdsprimarydomain.is_set || is_set(cptpclocktransdefaultdsprimarydomain.yfilter)) leaf_name_data.push_back(cptpclocktransdefaultdsprimarydomain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockTransDefaultDSTable::CPtpClockTransDefaultDSEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockTransDefaultDSTable::CPtpClockTransDefaultDSEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPTPMIB::CPtpClockTransDefaultDSTable::CPtpClockTransDefaultDSEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cPtpClockTransDefaultDSDomainIndex")
    {
        cptpclocktransdefaultdsdomainindex = value;
        cptpclocktransdefaultdsdomainindex.value_namespace = name_space;
        cptpclocktransdefaultdsdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTransDefaultDSInstanceIndex")
    {
        cptpclocktransdefaultdsinstanceindex = value;
        cptpclocktransdefaultdsinstanceindex.value_namespace = name_space;
        cptpclocktransdefaultdsinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTransDefaultDSClockIdentity")
    {
        cptpclocktransdefaultdsclockidentity = value;
        cptpclocktransdefaultdsclockidentity.value_namespace = name_space;
        cptpclocktransdefaultdsclockidentity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTransDefaultDSNumOfPorts")
    {
        cptpclocktransdefaultdsnumofports = value;
        cptpclocktransdefaultdsnumofports.value_namespace = name_space;
        cptpclocktransdefaultdsnumofports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTransDefaultDSDelay")
    {
        cptpclocktransdefaultdsdelay = value;
        cptpclocktransdefaultdsdelay.value_namespace = name_space;
        cptpclocktransdefaultdsdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockTransDefaultDSPrimaryDomain")
    {
        cptpclocktransdefaultdsprimarydomain = value;
        cptpclocktransdefaultdsprimarydomain.value_namespace = name_space;
        cptpclocktransdefaultdsprimarydomain.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPTPMIB::CPtpClockTransDefaultDSTable::CPtpClockTransDefaultDSEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cPtpClockTransDefaultDSDomainIndex")
    {
        cptpclocktransdefaultdsdomainindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTransDefaultDSInstanceIndex")
    {
        cptpclocktransdefaultdsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTransDefaultDSClockIdentity")
    {
        cptpclocktransdefaultdsclockidentity.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTransDefaultDSNumOfPorts")
    {
        cptpclocktransdefaultdsnumofports.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTransDefaultDSDelay")
    {
        cptpclocktransdefaultdsdelay.yfilter = yfilter;
    }
    if(value_path == "cPtpClockTransDefaultDSPrimaryDomain")
    {
        cptpclocktransdefaultdsprimarydomain.yfilter = yfilter;
    }
}

bool CISCOPTPMIB::CPtpClockTransDefaultDSTable::CPtpClockTransDefaultDSEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockTransDefaultDSDomainIndex" || name == "cPtpClockTransDefaultDSInstanceIndex" || name == "cPtpClockTransDefaultDSClockIdentity" || name == "cPtpClockTransDefaultDSNumOfPorts" || name == "cPtpClockTransDefaultDSDelay" || name == "cPtpClockTransDefaultDSPrimaryDomain")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockPortTable::CPtpClockPortTable()
    :
    cptpclockportentry(this, {"cptpclockportdomainindex", "cptpclockportclocktypeindex", "cptpclockportclockinstanceindex", "cptpclockporttableportnumberindex"})
{

    yang_name = "cPtpClockPortTable"; yang_parent_name = "CISCO-PTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockPortTable::~CPtpClockPortTable()
{
}

bool CISCOPTPMIB::CPtpClockPortTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cptpclockportentry.len(); index++)
    {
        if(cptpclockportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPTPMIB::CPtpClockPortTable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockportentry.len(); index++)
    {
        if(cptpclockportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPTPMIB::CPtpClockPortTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockPortTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockPortTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockPortTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockPortEntry")
    {
        auto c = std::make_shared<CISCOPTPMIB::CPtpClockPortTable::CPtpClockPortEntry>();
        c->parent = this;
        cptpclockportentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockPortTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cptpclockportentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPTPMIB::CPtpClockPortTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPTPMIB::CPtpClockPortTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPTPMIB::CPtpClockPortTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockPortEntry")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockPortTable::CPtpClockPortEntry::CPtpClockPortEntry()
    :
    cptpclockportdomainindex{YType::uint32, "cPtpClockPortDomainIndex"},
    cptpclockportclocktypeindex{YType::enumeration, "cPtpClockPortClockTypeIndex"},
    cptpclockportclockinstanceindex{YType::uint32, "cPtpClockPortClockInstanceIndex"},
    cptpclockporttableportnumberindex{YType::uint32, "cPtpClockPortTablePortNumberIndex"},
    cptpclockportname{YType::str, "cPtpClockPortName"},
    cptpclockportrole{YType::enumeration, "cPtpClockPortRole"},
    cptpclockportsynconestep{YType::boolean, "cPtpClockPortSyncOneStep"},
    cptpclockportcurrentpeeraddresstype{YType::enumeration, "cPtpClockPortCurrentPeerAddressType"},
    cptpclockportcurrentpeeraddress{YType::str, "cPtpClockPortCurrentPeerAddress"},
    cptpclockportnumofassociatedports{YType::uint32, "cPtpClockPortNumOfAssociatedPorts"}
{

    yang_name = "cPtpClockPortEntry"; yang_parent_name = "cPtpClockPortTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockPortTable::CPtpClockPortEntry::~CPtpClockPortEntry()
{
}

bool CISCOPTPMIB::CPtpClockPortTable::CPtpClockPortEntry::has_data() const
{
    if (is_presence_container) return true;
    return cptpclockportdomainindex.is_set
	|| cptpclockportclocktypeindex.is_set
	|| cptpclockportclockinstanceindex.is_set
	|| cptpclockporttableportnumberindex.is_set
	|| cptpclockportname.is_set
	|| cptpclockportrole.is_set
	|| cptpclockportsynconestep.is_set
	|| cptpclockportcurrentpeeraddresstype.is_set
	|| cptpclockportcurrentpeeraddress.is_set
	|| cptpclockportnumofassociatedports.is_set;
}

bool CISCOPTPMIB::CPtpClockPortTable::CPtpClockPortEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cptpclockportdomainindex.yfilter)
	|| ydk::is_set(cptpclockportclocktypeindex.yfilter)
	|| ydk::is_set(cptpclockportclockinstanceindex.yfilter)
	|| ydk::is_set(cptpclockporttableportnumberindex.yfilter)
	|| ydk::is_set(cptpclockportname.yfilter)
	|| ydk::is_set(cptpclockportrole.yfilter)
	|| ydk::is_set(cptpclockportsynconestep.yfilter)
	|| ydk::is_set(cptpclockportcurrentpeeraddresstype.yfilter)
	|| ydk::is_set(cptpclockportcurrentpeeraddress.yfilter)
	|| ydk::is_set(cptpclockportnumofassociatedports.yfilter);
}

std::string CISCOPTPMIB::CPtpClockPortTable::CPtpClockPortEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockPortTable::CPtpClockPortEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortEntry";
    ADD_KEY_TOKEN(cptpclockportdomainindex, "cPtpClockPortDomainIndex");
    ADD_KEY_TOKEN(cptpclockportclocktypeindex, "cPtpClockPortClockTypeIndex");
    ADD_KEY_TOKEN(cptpclockportclockinstanceindex, "cPtpClockPortClockInstanceIndex");
    ADD_KEY_TOKEN(cptpclockporttableportnumberindex, "cPtpClockPortTablePortNumberIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockPortTable::CPtpClockPortEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockportdomainindex.is_set || is_set(cptpclockportdomainindex.yfilter)) leaf_name_data.push_back(cptpclockportdomainindex.get_name_leafdata());
    if (cptpclockportclocktypeindex.is_set || is_set(cptpclockportclocktypeindex.yfilter)) leaf_name_data.push_back(cptpclockportclocktypeindex.get_name_leafdata());
    if (cptpclockportclockinstanceindex.is_set || is_set(cptpclockportclockinstanceindex.yfilter)) leaf_name_data.push_back(cptpclockportclockinstanceindex.get_name_leafdata());
    if (cptpclockporttableportnumberindex.is_set || is_set(cptpclockporttableportnumberindex.yfilter)) leaf_name_data.push_back(cptpclockporttableportnumberindex.get_name_leafdata());
    if (cptpclockportname.is_set || is_set(cptpclockportname.yfilter)) leaf_name_data.push_back(cptpclockportname.get_name_leafdata());
    if (cptpclockportrole.is_set || is_set(cptpclockportrole.yfilter)) leaf_name_data.push_back(cptpclockportrole.get_name_leafdata());
    if (cptpclockportsynconestep.is_set || is_set(cptpclockportsynconestep.yfilter)) leaf_name_data.push_back(cptpclockportsynconestep.get_name_leafdata());
    if (cptpclockportcurrentpeeraddresstype.is_set || is_set(cptpclockportcurrentpeeraddresstype.yfilter)) leaf_name_data.push_back(cptpclockportcurrentpeeraddresstype.get_name_leafdata());
    if (cptpclockportcurrentpeeraddress.is_set || is_set(cptpclockportcurrentpeeraddress.yfilter)) leaf_name_data.push_back(cptpclockportcurrentpeeraddress.get_name_leafdata());
    if (cptpclockportnumofassociatedports.is_set || is_set(cptpclockportnumofassociatedports.yfilter)) leaf_name_data.push_back(cptpclockportnumofassociatedports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockPortTable::CPtpClockPortEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockPortTable::CPtpClockPortEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPTPMIB::CPtpClockPortTable::CPtpClockPortEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cPtpClockPortDomainIndex")
    {
        cptpclockportdomainindex = value;
        cptpclockportdomainindex.value_namespace = name_space;
        cptpclockportdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortClockTypeIndex")
    {
        cptpclockportclocktypeindex = value;
        cptpclockportclocktypeindex.value_namespace = name_space;
        cptpclockportclocktypeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortClockInstanceIndex")
    {
        cptpclockportclockinstanceindex = value;
        cptpclockportclockinstanceindex.value_namespace = name_space;
        cptpclockportclockinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortTablePortNumberIndex")
    {
        cptpclockporttableportnumberindex = value;
        cptpclockporttableportnumberindex.value_namespace = name_space;
        cptpclockporttableportnumberindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortName")
    {
        cptpclockportname = value;
        cptpclockportname.value_namespace = name_space;
        cptpclockportname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortRole")
    {
        cptpclockportrole = value;
        cptpclockportrole.value_namespace = name_space;
        cptpclockportrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortSyncOneStep")
    {
        cptpclockportsynconestep = value;
        cptpclockportsynconestep.value_namespace = name_space;
        cptpclockportsynconestep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortCurrentPeerAddressType")
    {
        cptpclockportcurrentpeeraddresstype = value;
        cptpclockportcurrentpeeraddresstype.value_namespace = name_space;
        cptpclockportcurrentpeeraddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortCurrentPeerAddress")
    {
        cptpclockportcurrentpeeraddress = value;
        cptpclockportcurrentpeeraddress.value_namespace = name_space;
        cptpclockportcurrentpeeraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortNumOfAssociatedPorts")
    {
        cptpclockportnumofassociatedports = value;
        cptpclockportnumofassociatedports.value_namespace = name_space;
        cptpclockportnumofassociatedports.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPTPMIB::CPtpClockPortTable::CPtpClockPortEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cPtpClockPortDomainIndex")
    {
        cptpclockportdomainindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortClockTypeIndex")
    {
        cptpclockportclocktypeindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortClockInstanceIndex")
    {
        cptpclockportclockinstanceindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortTablePortNumberIndex")
    {
        cptpclockporttableportnumberindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortName")
    {
        cptpclockportname.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortRole")
    {
        cptpclockportrole.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortSyncOneStep")
    {
        cptpclockportsynconestep.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortCurrentPeerAddressType")
    {
        cptpclockportcurrentpeeraddresstype.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortCurrentPeerAddress")
    {
        cptpclockportcurrentpeeraddress.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortNumOfAssociatedPorts")
    {
        cptpclockportnumofassociatedports.yfilter = yfilter;
    }
}

bool CISCOPTPMIB::CPtpClockPortTable::CPtpClockPortEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockPortDomainIndex" || name == "cPtpClockPortClockTypeIndex" || name == "cPtpClockPortClockInstanceIndex" || name == "cPtpClockPortTablePortNumberIndex" || name == "cPtpClockPortName" || name == "cPtpClockPortRole" || name == "cPtpClockPortSyncOneStep" || name == "cPtpClockPortCurrentPeerAddressType" || name == "cPtpClockPortCurrentPeerAddress" || name == "cPtpClockPortNumOfAssociatedPorts")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockPortDSTable::CPtpClockPortDSTable()
    :
    cptpclockportdsentry(this, {"cptpclockportdsdomainindex", "cptpclockportdsclocktypeindex", "cptpclockportdsclockinstanceindex", "cptpclockportdsportnumberindex"})
{

    yang_name = "cPtpClockPortDSTable"; yang_parent_name = "CISCO-PTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockPortDSTable::~CPtpClockPortDSTable()
{
}

bool CISCOPTPMIB::CPtpClockPortDSTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cptpclockportdsentry.len(); index++)
    {
        if(cptpclockportdsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPTPMIB::CPtpClockPortDSTable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockportdsentry.len(); index++)
    {
        if(cptpclockportdsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPTPMIB::CPtpClockPortDSTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockPortDSTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortDSTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockPortDSTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockPortDSTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockPortDSEntry")
    {
        auto c = std::make_shared<CISCOPTPMIB::CPtpClockPortDSTable::CPtpClockPortDSEntry>();
        c->parent = this;
        cptpclockportdsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockPortDSTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cptpclockportdsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPTPMIB::CPtpClockPortDSTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPTPMIB::CPtpClockPortDSTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPTPMIB::CPtpClockPortDSTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockPortDSEntry")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockPortDSTable::CPtpClockPortDSEntry::CPtpClockPortDSEntry()
    :
    cptpclockportdsdomainindex{YType::uint32, "cPtpClockPortDSDomainIndex"},
    cptpclockportdsclocktypeindex{YType::enumeration, "cPtpClockPortDSClockTypeIndex"},
    cptpclockportdsclockinstanceindex{YType::uint32, "cPtpClockPortDSClockInstanceIndex"},
    cptpclockportdsportnumberindex{YType::uint32, "cPtpClockPortDSPortNumberIndex"},
    cptpclockportdsname{YType::str, "cPtpClockPortDSName"},
    cptpclockportdsportidentity{YType::str, "cPtpClockPortDSPortIdentity"},
    cptpclockportdsannouncementinterval{YType::int32, "cPtpClockPortDSAnnouncementInterval"},
    cptpclockportdsannouncercttimeout{YType::int32, "cPtpClockPortDSAnnounceRctTimeout"},
    cptpclockportdssyncinterval{YType::int32, "cPtpClockPortDSSyncInterval"},
    cptpclockportdsmindelayreqinterval{YType::int32, "cPtpClockPortDSMinDelayReqInterval"},
    cptpclockportdspeerdelayreqinterval{YType::int32, "cPtpClockPortDSPeerDelayReqInterval"},
    cptpclockportdsdelaymech{YType::enumeration, "cPtpClockPortDSDelayMech"},
    cptpclockportdspeermeanpathdelay{YType::str, "cPtpClockPortDSPeerMeanPathDelay"},
    cptpclockportdsgrantduration{YType::uint32, "cPtpClockPortDSGrantDuration"},
    cptpclockportdsptpversion{YType::int32, "cPtpClockPortDSPTPVersion"}
{

    yang_name = "cPtpClockPortDSEntry"; yang_parent_name = "cPtpClockPortDSTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockPortDSTable::CPtpClockPortDSEntry::~CPtpClockPortDSEntry()
{
}

bool CISCOPTPMIB::CPtpClockPortDSTable::CPtpClockPortDSEntry::has_data() const
{
    if (is_presence_container) return true;
    return cptpclockportdsdomainindex.is_set
	|| cptpclockportdsclocktypeindex.is_set
	|| cptpclockportdsclockinstanceindex.is_set
	|| cptpclockportdsportnumberindex.is_set
	|| cptpclockportdsname.is_set
	|| cptpclockportdsportidentity.is_set
	|| cptpclockportdsannouncementinterval.is_set
	|| cptpclockportdsannouncercttimeout.is_set
	|| cptpclockportdssyncinterval.is_set
	|| cptpclockportdsmindelayreqinterval.is_set
	|| cptpclockportdspeerdelayreqinterval.is_set
	|| cptpclockportdsdelaymech.is_set
	|| cptpclockportdspeermeanpathdelay.is_set
	|| cptpclockportdsgrantduration.is_set
	|| cptpclockportdsptpversion.is_set;
}

bool CISCOPTPMIB::CPtpClockPortDSTable::CPtpClockPortDSEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cptpclockportdsdomainindex.yfilter)
	|| ydk::is_set(cptpclockportdsclocktypeindex.yfilter)
	|| ydk::is_set(cptpclockportdsclockinstanceindex.yfilter)
	|| ydk::is_set(cptpclockportdsportnumberindex.yfilter)
	|| ydk::is_set(cptpclockportdsname.yfilter)
	|| ydk::is_set(cptpclockportdsportidentity.yfilter)
	|| ydk::is_set(cptpclockportdsannouncementinterval.yfilter)
	|| ydk::is_set(cptpclockportdsannouncercttimeout.yfilter)
	|| ydk::is_set(cptpclockportdssyncinterval.yfilter)
	|| ydk::is_set(cptpclockportdsmindelayreqinterval.yfilter)
	|| ydk::is_set(cptpclockportdspeerdelayreqinterval.yfilter)
	|| ydk::is_set(cptpclockportdsdelaymech.yfilter)
	|| ydk::is_set(cptpclockportdspeermeanpathdelay.yfilter)
	|| ydk::is_set(cptpclockportdsgrantduration.yfilter)
	|| ydk::is_set(cptpclockportdsptpversion.yfilter);
}

std::string CISCOPTPMIB::CPtpClockPortDSTable::CPtpClockPortDSEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockPortDSTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockPortDSTable::CPtpClockPortDSEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortDSEntry";
    ADD_KEY_TOKEN(cptpclockportdsdomainindex, "cPtpClockPortDSDomainIndex");
    ADD_KEY_TOKEN(cptpclockportdsclocktypeindex, "cPtpClockPortDSClockTypeIndex");
    ADD_KEY_TOKEN(cptpclockportdsclockinstanceindex, "cPtpClockPortDSClockInstanceIndex");
    ADD_KEY_TOKEN(cptpclockportdsportnumberindex, "cPtpClockPortDSPortNumberIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockPortDSTable::CPtpClockPortDSEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockportdsdomainindex.is_set || is_set(cptpclockportdsdomainindex.yfilter)) leaf_name_data.push_back(cptpclockportdsdomainindex.get_name_leafdata());
    if (cptpclockportdsclocktypeindex.is_set || is_set(cptpclockportdsclocktypeindex.yfilter)) leaf_name_data.push_back(cptpclockportdsclocktypeindex.get_name_leafdata());
    if (cptpclockportdsclockinstanceindex.is_set || is_set(cptpclockportdsclockinstanceindex.yfilter)) leaf_name_data.push_back(cptpclockportdsclockinstanceindex.get_name_leafdata());
    if (cptpclockportdsportnumberindex.is_set || is_set(cptpclockportdsportnumberindex.yfilter)) leaf_name_data.push_back(cptpclockportdsportnumberindex.get_name_leafdata());
    if (cptpclockportdsname.is_set || is_set(cptpclockportdsname.yfilter)) leaf_name_data.push_back(cptpclockportdsname.get_name_leafdata());
    if (cptpclockportdsportidentity.is_set || is_set(cptpclockportdsportidentity.yfilter)) leaf_name_data.push_back(cptpclockportdsportidentity.get_name_leafdata());
    if (cptpclockportdsannouncementinterval.is_set || is_set(cptpclockportdsannouncementinterval.yfilter)) leaf_name_data.push_back(cptpclockportdsannouncementinterval.get_name_leafdata());
    if (cptpclockportdsannouncercttimeout.is_set || is_set(cptpclockportdsannouncercttimeout.yfilter)) leaf_name_data.push_back(cptpclockportdsannouncercttimeout.get_name_leafdata());
    if (cptpclockportdssyncinterval.is_set || is_set(cptpclockportdssyncinterval.yfilter)) leaf_name_data.push_back(cptpclockportdssyncinterval.get_name_leafdata());
    if (cptpclockportdsmindelayreqinterval.is_set || is_set(cptpclockportdsmindelayreqinterval.yfilter)) leaf_name_data.push_back(cptpclockportdsmindelayreqinterval.get_name_leafdata());
    if (cptpclockportdspeerdelayreqinterval.is_set || is_set(cptpclockportdspeerdelayreqinterval.yfilter)) leaf_name_data.push_back(cptpclockportdspeerdelayreqinterval.get_name_leafdata());
    if (cptpclockportdsdelaymech.is_set || is_set(cptpclockportdsdelaymech.yfilter)) leaf_name_data.push_back(cptpclockportdsdelaymech.get_name_leafdata());
    if (cptpclockportdspeermeanpathdelay.is_set || is_set(cptpclockportdspeermeanpathdelay.yfilter)) leaf_name_data.push_back(cptpclockportdspeermeanpathdelay.get_name_leafdata());
    if (cptpclockportdsgrantduration.is_set || is_set(cptpclockportdsgrantduration.yfilter)) leaf_name_data.push_back(cptpclockportdsgrantduration.get_name_leafdata());
    if (cptpclockportdsptpversion.is_set || is_set(cptpclockportdsptpversion.yfilter)) leaf_name_data.push_back(cptpclockportdsptpversion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockPortDSTable::CPtpClockPortDSEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockPortDSTable::CPtpClockPortDSEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPTPMIB::CPtpClockPortDSTable::CPtpClockPortDSEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cPtpClockPortDSDomainIndex")
    {
        cptpclockportdsdomainindex = value;
        cptpclockportdsdomainindex.value_namespace = name_space;
        cptpclockportdsdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortDSClockTypeIndex")
    {
        cptpclockportdsclocktypeindex = value;
        cptpclockportdsclocktypeindex.value_namespace = name_space;
        cptpclockportdsclocktypeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortDSClockInstanceIndex")
    {
        cptpclockportdsclockinstanceindex = value;
        cptpclockportdsclockinstanceindex.value_namespace = name_space;
        cptpclockportdsclockinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortDSPortNumberIndex")
    {
        cptpclockportdsportnumberindex = value;
        cptpclockportdsportnumberindex.value_namespace = name_space;
        cptpclockportdsportnumberindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortDSName")
    {
        cptpclockportdsname = value;
        cptpclockportdsname.value_namespace = name_space;
        cptpclockportdsname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortDSPortIdentity")
    {
        cptpclockportdsportidentity = value;
        cptpclockportdsportidentity.value_namespace = name_space;
        cptpclockportdsportidentity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortDSAnnouncementInterval")
    {
        cptpclockportdsannouncementinterval = value;
        cptpclockportdsannouncementinterval.value_namespace = name_space;
        cptpclockportdsannouncementinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortDSAnnounceRctTimeout")
    {
        cptpclockportdsannouncercttimeout = value;
        cptpclockportdsannouncercttimeout.value_namespace = name_space;
        cptpclockportdsannouncercttimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortDSSyncInterval")
    {
        cptpclockportdssyncinterval = value;
        cptpclockportdssyncinterval.value_namespace = name_space;
        cptpclockportdssyncinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortDSMinDelayReqInterval")
    {
        cptpclockportdsmindelayreqinterval = value;
        cptpclockportdsmindelayreqinterval.value_namespace = name_space;
        cptpclockportdsmindelayreqinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortDSPeerDelayReqInterval")
    {
        cptpclockportdspeerdelayreqinterval = value;
        cptpclockportdspeerdelayreqinterval.value_namespace = name_space;
        cptpclockportdspeerdelayreqinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortDSDelayMech")
    {
        cptpclockportdsdelaymech = value;
        cptpclockportdsdelaymech.value_namespace = name_space;
        cptpclockportdsdelaymech.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortDSPeerMeanPathDelay")
    {
        cptpclockportdspeermeanpathdelay = value;
        cptpclockportdspeermeanpathdelay.value_namespace = name_space;
        cptpclockportdspeermeanpathdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortDSGrantDuration")
    {
        cptpclockportdsgrantduration = value;
        cptpclockportdsgrantduration.value_namespace = name_space;
        cptpclockportdsgrantduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortDSPTPVersion")
    {
        cptpclockportdsptpversion = value;
        cptpclockportdsptpversion.value_namespace = name_space;
        cptpclockportdsptpversion.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPTPMIB::CPtpClockPortDSTable::CPtpClockPortDSEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cPtpClockPortDSDomainIndex")
    {
        cptpclockportdsdomainindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortDSClockTypeIndex")
    {
        cptpclockportdsclocktypeindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortDSClockInstanceIndex")
    {
        cptpclockportdsclockinstanceindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortDSPortNumberIndex")
    {
        cptpclockportdsportnumberindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortDSName")
    {
        cptpclockportdsname.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortDSPortIdentity")
    {
        cptpclockportdsportidentity.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortDSAnnouncementInterval")
    {
        cptpclockportdsannouncementinterval.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortDSAnnounceRctTimeout")
    {
        cptpclockportdsannouncercttimeout.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortDSSyncInterval")
    {
        cptpclockportdssyncinterval.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortDSMinDelayReqInterval")
    {
        cptpclockportdsmindelayreqinterval.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortDSPeerDelayReqInterval")
    {
        cptpclockportdspeerdelayreqinterval.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortDSDelayMech")
    {
        cptpclockportdsdelaymech.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortDSPeerMeanPathDelay")
    {
        cptpclockportdspeermeanpathdelay.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortDSGrantDuration")
    {
        cptpclockportdsgrantduration.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortDSPTPVersion")
    {
        cptpclockportdsptpversion.yfilter = yfilter;
    }
}

bool CISCOPTPMIB::CPtpClockPortDSTable::CPtpClockPortDSEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockPortDSDomainIndex" || name == "cPtpClockPortDSClockTypeIndex" || name == "cPtpClockPortDSClockInstanceIndex" || name == "cPtpClockPortDSPortNumberIndex" || name == "cPtpClockPortDSName" || name == "cPtpClockPortDSPortIdentity" || name == "cPtpClockPortDSAnnouncementInterval" || name == "cPtpClockPortDSAnnounceRctTimeout" || name == "cPtpClockPortDSSyncInterval" || name == "cPtpClockPortDSMinDelayReqInterval" || name == "cPtpClockPortDSPeerDelayReqInterval" || name == "cPtpClockPortDSDelayMech" || name == "cPtpClockPortDSPeerMeanPathDelay" || name == "cPtpClockPortDSGrantDuration" || name == "cPtpClockPortDSPTPVersion")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockPortRunningTable::CPtpClockPortRunningTable()
    :
    cptpclockportrunningentry(this, {"cptpclockportrunningdomainindex", "cptpclockportrunningclocktypeindex", "cptpclockportrunningclockinstanceindex", "cptpclockportrunningportnumberindex"})
{

    yang_name = "cPtpClockPortRunningTable"; yang_parent_name = "CISCO-PTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockPortRunningTable::~CPtpClockPortRunningTable()
{
}

bool CISCOPTPMIB::CPtpClockPortRunningTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cptpclockportrunningentry.len(); index++)
    {
        if(cptpclockportrunningentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPTPMIB::CPtpClockPortRunningTable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockportrunningentry.len(); index++)
    {
        if(cptpclockportrunningentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPTPMIB::CPtpClockPortRunningTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockPortRunningTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortRunningTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockPortRunningTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockPortRunningTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockPortRunningEntry")
    {
        auto c = std::make_shared<CISCOPTPMIB::CPtpClockPortRunningTable::CPtpClockPortRunningEntry>();
        c->parent = this;
        cptpclockportrunningentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockPortRunningTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cptpclockportrunningentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPTPMIB::CPtpClockPortRunningTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPTPMIB::CPtpClockPortRunningTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPTPMIB::CPtpClockPortRunningTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockPortRunningEntry")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockPortRunningTable::CPtpClockPortRunningEntry::CPtpClockPortRunningEntry()
    :
    cptpclockportrunningdomainindex{YType::uint32, "cPtpClockPortRunningDomainIndex"},
    cptpclockportrunningclocktypeindex{YType::enumeration, "cPtpClockPortRunningClockTypeIndex"},
    cptpclockportrunningclockinstanceindex{YType::uint32, "cPtpClockPortRunningClockInstanceIndex"},
    cptpclockportrunningportnumberindex{YType::uint32, "cPtpClockPortRunningPortNumberIndex"},
    cptpclockportrunningname{YType::str, "cPtpClockPortRunningName"},
    cptpclockportrunningstate{YType::enumeration, "cPtpClockPortRunningState"},
    cptpclockportrunningrole{YType::enumeration, "cPtpClockPortRunningRole"},
    cptpclockportrunninginterfaceindex{YType::int32, "cPtpClockPortRunningInterfaceIndex"},
    cptpclockportrunningipversion{YType::int32, "cPtpClockPortRunningIPversion"},
    cptpclockportrunningencapsulationtype{YType::int32, "cPtpClockPortRunningEncapsulationType"},
    cptpclockportrunningtxmode{YType::enumeration, "cPtpClockPortRunningTxMode"},
    cptpclockportrunningrxmode{YType::enumeration, "cPtpClockPortRunningRxMode"},
    cptpclockportrunningpacketsreceived{YType::uint64, "cPtpClockPortRunningPacketsReceived"},
    cptpclockportrunningpacketssent{YType::uint64, "cPtpClockPortRunningPacketsSent"}
{

    yang_name = "cPtpClockPortRunningEntry"; yang_parent_name = "cPtpClockPortRunningTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockPortRunningTable::CPtpClockPortRunningEntry::~CPtpClockPortRunningEntry()
{
}

bool CISCOPTPMIB::CPtpClockPortRunningTable::CPtpClockPortRunningEntry::has_data() const
{
    if (is_presence_container) return true;
    return cptpclockportrunningdomainindex.is_set
	|| cptpclockportrunningclocktypeindex.is_set
	|| cptpclockportrunningclockinstanceindex.is_set
	|| cptpclockportrunningportnumberindex.is_set
	|| cptpclockportrunningname.is_set
	|| cptpclockportrunningstate.is_set
	|| cptpclockportrunningrole.is_set
	|| cptpclockportrunninginterfaceindex.is_set
	|| cptpclockportrunningipversion.is_set
	|| cptpclockportrunningencapsulationtype.is_set
	|| cptpclockportrunningtxmode.is_set
	|| cptpclockportrunningrxmode.is_set
	|| cptpclockportrunningpacketsreceived.is_set
	|| cptpclockportrunningpacketssent.is_set;
}

bool CISCOPTPMIB::CPtpClockPortRunningTable::CPtpClockPortRunningEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cptpclockportrunningdomainindex.yfilter)
	|| ydk::is_set(cptpclockportrunningclocktypeindex.yfilter)
	|| ydk::is_set(cptpclockportrunningclockinstanceindex.yfilter)
	|| ydk::is_set(cptpclockportrunningportnumberindex.yfilter)
	|| ydk::is_set(cptpclockportrunningname.yfilter)
	|| ydk::is_set(cptpclockportrunningstate.yfilter)
	|| ydk::is_set(cptpclockportrunningrole.yfilter)
	|| ydk::is_set(cptpclockportrunninginterfaceindex.yfilter)
	|| ydk::is_set(cptpclockportrunningipversion.yfilter)
	|| ydk::is_set(cptpclockportrunningencapsulationtype.yfilter)
	|| ydk::is_set(cptpclockportrunningtxmode.yfilter)
	|| ydk::is_set(cptpclockportrunningrxmode.yfilter)
	|| ydk::is_set(cptpclockportrunningpacketsreceived.yfilter)
	|| ydk::is_set(cptpclockportrunningpacketssent.yfilter);
}

std::string CISCOPTPMIB::CPtpClockPortRunningTable::CPtpClockPortRunningEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockPortRunningTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockPortRunningTable::CPtpClockPortRunningEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortRunningEntry";
    ADD_KEY_TOKEN(cptpclockportrunningdomainindex, "cPtpClockPortRunningDomainIndex");
    ADD_KEY_TOKEN(cptpclockportrunningclocktypeindex, "cPtpClockPortRunningClockTypeIndex");
    ADD_KEY_TOKEN(cptpclockportrunningclockinstanceindex, "cPtpClockPortRunningClockInstanceIndex");
    ADD_KEY_TOKEN(cptpclockportrunningportnumberindex, "cPtpClockPortRunningPortNumberIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockPortRunningTable::CPtpClockPortRunningEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockportrunningdomainindex.is_set || is_set(cptpclockportrunningdomainindex.yfilter)) leaf_name_data.push_back(cptpclockportrunningdomainindex.get_name_leafdata());
    if (cptpclockportrunningclocktypeindex.is_set || is_set(cptpclockportrunningclocktypeindex.yfilter)) leaf_name_data.push_back(cptpclockportrunningclocktypeindex.get_name_leafdata());
    if (cptpclockportrunningclockinstanceindex.is_set || is_set(cptpclockportrunningclockinstanceindex.yfilter)) leaf_name_data.push_back(cptpclockportrunningclockinstanceindex.get_name_leafdata());
    if (cptpclockportrunningportnumberindex.is_set || is_set(cptpclockportrunningportnumberindex.yfilter)) leaf_name_data.push_back(cptpclockportrunningportnumberindex.get_name_leafdata());
    if (cptpclockportrunningname.is_set || is_set(cptpclockportrunningname.yfilter)) leaf_name_data.push_back(cptpclockportrunningname.get_name_leafdata());
    if (cptpclockportrunningstate.is_set || is_set(cptpclockportrunningstate.yfilter)) leaf_name_data.push_back(cptpclockportrunningstate.get_name_leafdata());
    if (cptpclockportrunningrole.is_set || is_set(cptpclockportrunningrole.yfilter)) leaf_name_data.push_back(cptpclockportrunningrole.get_name_leafdata());
    if (cptpclockportrunninginterfaceindex.is_set || is_set(cptpclockportrunninginterfaceindex.yfilter)) leaf_name_data.push_back(cptpclockportrunninginterfaceindex.get_name_leafdata());
    if (cptpclockportrunningipversion.is_set || is_set(cptpclockportrunningipversion.yfilter)) leaf_name_data.push_back(cptpclockportrunningipversion.get_name_leafdata());
    if (cptpclockportrunningencapsulationtype.is_set || is_set(cptpclockportrunningencapsulationtype.yfilter)) leaf_name_data.push_back(cptpclockportrunningencapsulationtype.get_name_leafdata());
    if (cptpclockportrunningtxmode.is_set || is_set(cptpclockportrunningtxmode.yfilter)) leaf_name_data.push_back(cptpclockportrunningtxmode.get_name_leafdata());
    if (cptpclockportrunningrxmode.is_set || is_set(cptpclockportrunningrxmode.yfilter)) leaf_name_data.push_back(cptpclockportrunningrxmode.get_name_leafdata());
    if (cptpclockportrunningpacketsreceived.is_set || is_set(cptpclockportrunningpacketsreceived.yfilter)) leaf_name_data.push_back(cptpclockportrunningpacketsreceived.get_name_leafdata());
    if (cptpclockportrunningpacketssent.is_set || is_set(cptpclockportrunningpacketssent.yfilter)) leaf_name_data.push_back(cptpclockportrunningpacketssent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockPortRunningTable::CPtpClockPortRunningEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockPortRunningTable::CPtpClockPortRunningEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPTPMIB::CPtpClockPortRunningTable::CPtpClockPortRunningEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cPtpClockPortRunningDomainIndex")
    {
        cptpclockportrunningdomainindex = value;
        cptpclockportrunningdomainindex.value_namespace = name_space;
        cptpclockportrunningdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortRunningClockTypeIndex")
    {
        cptpclockportrunningclocktypeindex = value;
        cptpclockportrunningclocktypeindex.value_namespace = name_space;
        cptpclockportrunningclocktypeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortRunningClockInstanceIndex")
    {
        cptpclockportrunningclockinstanceindex = value;
        cptpclockportrunningclockinstanceindex.value_namespace = name_space;
        cptpclockportrunningclockinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortRunningPortNumberIndex")
    {
        cptpclockportrunningportnumberindex = value;
        cptpclockportrunningportnumberindex.value_namespace = name_space;
        cptpclockportrunningportnumberindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortRunningName")
    {
        cptpclockportrunningname = value;
        cptpclockportrunningname.value_namespace = name_space;
        cptpclockportrunningname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortRunningState")
    {
        cptpclockportrunningstate = value;
        cptpclockportrunningstate.value_namespace = name_space;
        cptpclockportrunningstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortRunningRole")
    {
        cptpclockportrunningrole = value;
        cptpclockportrunningrole.value_namespace = name_space;
        cptpclockportrunningrole.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortRunningInterfaceIndex")
    {
        cptpclockportrunninginterfaceindex = value;
        cptpclockportrunninginterfaceindex.value_namespace = name_space;
        cptpclockportrunninginterfaceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortRunningIPversion")
    {
        cptpclockportrunningipversion = value;
        cptpclockportrunningipversion.value_namespace = name_space;
        cptpclockportrunningipversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortRunningEncapsulationType")
    {
        cptpclockportrunningencapsulationtype = value;
        cptpclockportrunningencapsulationtype.value_namespace = name_space;
        cptpclockportrunningencapsulationtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortRunningTxMode")
    {
        cptpclockportrunningtxmode = value;
        cptpclockportrunningtxmode.value_namespace = name_space;
        cptpclockportrunningtxmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortRunningRxMode")
    {
        cptpclockportrunningrxmode = value;
        cptpclockportrunningrxmode.value_namespace = name_space;
        cptpclockportrunningrxmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortRunningPacketsReceived")
    {
        cptpclockportrunningpacketsreceived = value;
        cptpclockportrunningpacketsreceived.value_namespace = name_space;
        cptpclockportrunningpacketsreceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortRunningPacketsSent")
    {
        cptpclockportrunningpacketssent = value;
        cptpclockportrunningpacketssent.value_namespace = name_space;
        cptpclockportrunningpacketssent.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPTPMIB::CPtpClockPortRunningTable::CPtpClockPortRunningEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cPtpClockPortRunningDomainIndex")
    {
        cptpclockportrunningdomainindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortRunningClockTypeIndex")
    {
        cptpclockportrunningclocktypeindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortRunningClockInstanceIndex")
    {
        cptpclockportrunningclockinstanceindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortRunningPortNumberIndex")
    {
        cptpclockportrunningportnumberindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortRunningName")
    {
        cptpclockportrunningname.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortRunningState")
    {
        cptpclockportrunningstate.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortRunningRole")
    {
        cptpclockportrunningrole.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortRunningInterfaceIndex")
    {
        cptpclockportrunninginterfaceindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortRunningIPversion")
    {
        cptpclockportrunningipversion.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortRunningEncapsulationType")
    {
        cptpclockportrunningencapsulationtype.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortRunningTxMode")
    {
        cptpclockportrunningtxmode.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortRunningRxMode")
    {
        cptpclockportrunningrxmode.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortRunningPacketsReceived")
    {
        cptpclockportrunningpacketsreceived.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortRunningPacketsSent")
    {
        cptpclockportrunningpacketssent.yfilter = yfilter;
    }
}

bool CISCOPTPMIB::CPtpClockPortRunningTable::CPtpClockPortRunningEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockPortRunningDomainIndex" || name == "cPtpClockPortRunningClockTypeIndex" || name == "cPtpClockPortRunningClockInstanceIndex" || name == "cPtpClockPortRunningPortNumberIndex" || name == "cPtpClockPortRunningName" || name == "cPtpClockPortRunningState" || name == "cPtpClockPortRunningRole" || name == "cPtpClockPortRunningInterfaceIndex" || name == "cPtpClockPortRunningIPversion" || name == "cPtpClockPortRunningEncapsulationType" || name == "cPtpClockPortRunningTxMode" || name == "cPtpClockPortRunningRxMode" || name == "cPtpClockPortRunningPacketsReceived" || name == "cPtpClockPortRunningPacketsSent")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockPortTransDSTable::CPtpClockPortTransDSTable()
    :
    cptpclockporttransdsentry(this, {"cptpclockporttransdsdomainindex", "cptpclockporttransdsinstanceindex", "cptpclockporttransdsportnumberindex"})
{

    yang_name = "cPtpClockPortTransDSTable"; yang_parent_name = "CISCO-PTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockPortTransDSTable::~CPtpClockPortTransDSTable()
{
}

bool CISCOPTPMIB::CPtpClockPortTransDSTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cptpclockporttransdsentry.len(); index++)
    {
        if(cptpclockporttransdsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPTPMIB::CPtpClockPortTransDSTable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockporttransdsentry.len(); index++)
    {
        if(cptpclockporttransdsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPTPMIB::CPtpClockPortTransDSTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockPortTransDSTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortTransDSTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockPortTransDSTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockPortTransDSTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockPortTransDSEntry")
    {
        auto c = std::make_shared<CISCOPTPMIB::CPtpClockPortTransDSTable::CPtpClockPortTransDSEntry>();
        c->parent = this;
        cptpclockporttransdsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockPortTransDSTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cptpclockporttransdsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPTPMIB::CPtpClockPortTransDSTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPTPMIB::CPtpClockPortTransDSTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPTPMIB::CPtpClockPortTransDSTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockPortTransDSEntry")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockPortTransDSTable::CPtpClockPortTransDSEntry::CPtpClockPortTransDSEntry()
    :
    cptpclockporttransdsdomainindex{YType::uint32, "cPtpClockPortTransDSDomainIndex"},
    cptpclockporttransdsinstanceindex{YType::uint32, "cPtpClockPortTransDSInstanceIndex"},
    cptpclockporttransdsportnumberindex{YType::uint32, "cPtpClockPortTransDSPortNumberIndex"},
    cptpclockporttransdsportidentity{YType::str, "cPtpClockPortTransDSPortIdentity"},
    cptpclockporttransdslogminpdelayreqint{YType::int32, "cPtpClockPortTransDSlogMinPdelayReqInt"},
    cptpclockporttransdsfaultyflag{YType::boolean, "cPtpClockPortTransDSFaultyFlag"},
    cptpclockporttransdspeermeanpathdelay{YType::str, "cPtpClockPortTransDSPeerMeanPathDelay"}
{

    yang_name = "cPtpClockPortTransDSEntry"; yang_parent_name = "cPtpClockPortTransDSTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockPortTransDSTable::CPtpClockPortTransDSEntry::~CPtpClockPortTransDSEntry()
{
}

bool CISCOPTPMIB::CPtpClockPortTransDSTable::CPtpClockPortTransDSEntry::has_data() const
{
    if (is_presence_container) return true;
    return cptpclockporttransdsdomainindex.is_set
	|| cptpclockporttransdsinstanceindex.is_set
	|| cptpclockporttransdsportnumberindex.is_set
	|| cptpclockporttransdsportidentity.is_set
	|| cptpclockporttransdslogminpdelayreqint.is_set
	|| cptpclockporttransdsfaultyflag.is_set
	|| cptpclockporttransdspeermeanpathdelay.is_set;
}

bool CISCOPTPMIB::CPtpClockPortTransDSTable::CPtpClockPortTransDSEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cptpclockporttransdsdomainindex.yfilter)
	|| ydk::is_set(cptpclockporttransdsinstanceindex.yfilter)
	|| ydk::is_set(cptpclockporttransdsportnumberindex.yfilter)
	|| ydk::is_set(cptpclockporttransdsportidentity.yfilter)
	|| ydk::is_set(cptpclockporttransdslogminpdelayreqint.yfilter)
	|| ydk::is_set(cptpclockporttransdsfaultyflag.yfilter)
	|| ydk::is_set(cptpclockporttransdspeermeanpathdelay.yfilter);
}

std::string CISCOPTPMIB::CPtpClockPortTransDSTable::CPtpClockPortTransDSEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockPortTransDSTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockPortTransDSTable::CPtpClockPortTransDSEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortTransDSEntry";
    ADD_KEY_TOKEN(cptpclockporttransdsdomainindex, "cPtpClockPortTransDSDomainIndex");
    ADD_KEY_TOKEN(cptpclockporttransdsinstanceindex, "cPtpClockPortTransDSInstanceIndex");
    ADD_KEY_TOKEN(cptpclockporttransdsportnumberindex, "cPtpClockPortTransDSPortNumberIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockPortTransDSTable::CPtpClockPortTransDSEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockporttransdsdomainindex.is_set || is_set(cptpclockporttransdsdomainindex.yfilter)) leaf_name_data.push_back(cptpclockporttransdsdomainindex.get_name_leafdata());
    if (cptpclockporttransdsinstanceindex.is_set || is_set(cptpclockporttransdsinstanceindex.yfilter)) leaf_name_data.push_back(cptpclockporttransdsinstanceindex.get_name_leafdata());
    if (cptpclockporttransdsportnumberindex.is_set || is_set(cptpclockporttransdsportnumberindex.yfilter)) leaf_name_data.push_back(cptpclockporttransdsportnumberindex.get_name_leafdata());
    if (cptpclockporttransdsportidentity.is_set || is_set(cptpclockporttransdsportidentity.yfilter)) leaf_name_data.push_back(cptpclockporttransdsportidentity.get_name_leafdata());
    if (cptpclockporttransdslogminpdelayreqint.is_set || is_set(cptpclockporttransdslogminpdelayreqint.yfilter)) leaf_name_data.push_back(cptpclockporttransdslogminpdelayreqint.get_name_leafdata());
    if (cptpclockporttransdsfaultyflag.is_set || is_set(cptpclockporttransdsfaultyflag.yfilter)) leaf_name_data.push_back(cptpclockporttransdsfaultyflag.get_name_leafdata());
    if (cptpclockporttransdspeermeanpathdelay.is_set || is_set(cptpclockporttransdspeermeanpathdelay.yfilter)) leaf_name_data.push_back(cptpclockporttransdspeermeanpathdelay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockPortTransDSTable::CPtpClockPortTransDSEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockPortTransDSTable::CPtpClockPortTransDSEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPTPMIB::CPtpClockPortTransDSTable::CPtpClockPortTransDSEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cPtpClockPortTransDSDomainIndex")
    {
        cptpclockporttransdsdomainindex = value;
        cptpclockporttransdsdomainindex.value_namespace = name_space;
        cptpclockporttransdsdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortTransDSInstanceIndex")
    {
        cptpclockporttransdsinstanceindex = value;
        cptpclockporttransdsinstanceindex.value_namespace = name_space;
        cptpclockporttransdsinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortTransDSPortNumberIndex")
    {
        cptpclockporttransdsportnumberindex = value;
        cptpclockporttransdsportnumberindex.value_namespace = name_space;
        cptpclockporttransdsportnumberindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortTransDSPortIdentity")
    {
        cptpclockporttransdsportidentity = value;
        cptpclockporttransdsportidentity.value_namespace = name_space;
        cptpclockporttransdsportidentity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortTransDSlogMinPdelayReqInt")
    {
        cptpclockporttransdslogminpdelayreqint = value;
        cptpclockporttransdslogminpdelayreqint.value_namespace = name_space;
        cptpclockporttransdslogminpdelayreqint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortTransDSFaultyFlag")
    {
        cptpclockporttransdsfaultyflag = value;
        cptpclockporttransdsfaultyflag.value_namespace = name_space;
        cptpclockporttransdsfaultyflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortTransDSPeerMeanPathDelay")
    {
        cptpclockporttransdspeermeanpathdelay = value;
        cptpclockporttransdspeermeanpathdelay.value_namespace = name_space;
        cptpclockporttransdspeermeanpathdelay.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPTPMIB::CPtpClockPortTransDSTable::CPtpClockPortTransDSEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cPtpClockPortTransDSDomainIndex")
    {
        cptpclockporttransdsdomainindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortTransDSInstanceIndex")
    {
        cptpclockporttransdsinstanceindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortTransDSPortNumberIndex")
    {
        cptpclockporttransdsportnumberindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortTransDSPortIdentity")
    {
        cptpclockporttransdsportidentity.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortTransDSlogMinPdelayReqInt")
    {
        cptpclockporttransdslogminpdelayreqint.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortTransDSFaultyFlag")
    {
        cptpclockporttransdsfaultyflag.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortTransDSPeerMeanPathDelay")
    {
        cptpclockporttransdspeermeanpathdelay.yfilter = yfilter;
    }
}

bool CISCOPTPMIB::CPtpClockPortTransDSTable::CPtpClockPortTransDSEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockPortTransDSDomainIndex" || name == "cPtpClockPortTransDSInstanceIndex" || name == "cPtpClockPortTransDSPortNumberIndex" || name == "cPtpClockPortTransDSPortIdentity" || name == "cPtpClockPortTransDSlogMinPdelayReqInt" || name == "cPtpClockPortTransDSFaultyFlag" || name == "cPtpClockPortTransDSPeerMeanPathDelay")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockPortAssociateTable::CPtpClockPortAssociateTable()
    :
    cptpclockportassociateentry(this, {"cptpclockportcurrentdomainindex", "cptpclockportcurrentclocktypeindex", "cptpclockportcurrentclockinstanceindex", "cptpclockportcurrentportnumberindex", "cptpclockportassociateportindex"})
{

    yang_name = "cPtpClockPortAssociateTable"; yang_parent_name = "CISCO-PTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockPortAssociateTable::~CPtpClockPortAssociateTable()
{
}

bool CISCOPTPMIB::CPtpClockPortAssociateTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cptpclockportassociateentry.len(); index++)
    {
        if(cptpclockportassociateentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOPTPMIB::CPtpClockPortAssociateTable::has_operation() const
{
    for (std::size_t index=0; index<cptpclockportassociateentry.len(); index++)
    {
        if(cptpclockportassociateentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOPTPMIB::CPtpClockPortAssociateTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockPortAssociateTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortAssociateTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockPortAssociateTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockPortAssociateTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cPtpClockPortAssociateEntry")
    {
        auto c = std::make_shared<CISCOPTPMIB::CPtpClockPortAssociateTable::CPtpClockPortAssociateEntry>();
        c->parent = this;
        cptpclockportassociateentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockPortAssociateTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cptpclockportassociateentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOPTPMIB::CPtpClockPortAssociateTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOPTPMIB::CPtpClockPortAssociateTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOPTPMIB::CPtpClockPortAssociateTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockPortAssociateEntry")
        return true;
    return false;
}

CISCOPTPMIB::CPtpClockPortAssociateTable::CPtpClockPortAssociateEntry::CPtpClockPortAssociateEntry()
    :
    cptpclockportcurrentdomainindex{YType::uint32, "cPtpClockPortCurrentDomainIndex"},
    cptpclockportcurrentclocktypeindex{YType::enumeration, "cPtpClockPortCurrentClockTypeIndex"},
    cptpclockportcurrentclockinstanceindex{YType::uint32, "cPtpClockPortCurrentClockInstanceIndex"},
    cptpclockportcurrentportnumberindex{YType::uint32, "cPtpClockPortCurrentPortNumberIndex"},
    cptpclockportassociateportindex{YType::uint32, "cPtpClockPortAssociatePortIndex"},
    cptpclockportassociateaddresstype{YType::enumeration, "cPtpClockPortAssociateAddressType"},
    cptpclockportassociateaddress{YType::str, "cPtpClockPortAssociateAddress"},
    cptpclockportassociatepacketssent{YType::uint64, "cPtpClockPortAssociatePacketsSent"},
    cptpclockportassociatepacketsreceived{YType::uint64, "cPtpClockPortAssociatePacketsReceived"},
    cptpclockportassociateinerrors{YType::uint64, "cPtpClockPortAssociateInErrors"},
    cptpclockportassociateouterrors{YType::uint64, "cPtpClockPortAssociateOutErrors"}
{

    yang_name = "cPtpClockPortAssociateEntry"; yang_parent_name = "cPtpClockPortAssociateTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOPTPMIB::CPtpClockPortAssociateTable::CPtpClockPortAssociateEntry::~CPtpClockPortAssociateEntry()
{
}

bool CISCOPTPMIB::CPtpClockPortAssociateTable::CPtpClockPortAssociateEntry::has_data() const
{
    if (is_presence_container) return true;
    return cptpclockportcurrentdomainindex.is_set
	|| cptpclockportcurrentclocktypeindex.is_set
	|| cptpclockportcurrentclockinstanceindex.is_set
	|| cptpclockportcurrentportnumberindex.is_set
	|| cptpclockportassociateportindex.is_set
	|| cptpclockportassociateaddresstype.is_set
	|| cptpclockportassociateaddress.is_set
	|| cptpclockportassociatepacketssent.is_set
	|| cptpclockportassociatepacketsreceived.is_set
	|| cptpclockportassociateinerrors.is_set
	|| cptpclockportassociateouterrors.is_set;
}

bool CISCOPTPMIB::CPtpClockPortAssociateTable::CPtpClockPortAssociateEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cptpclockportcurrentdomainindex.yfilter)
	|| ydk::is_set(cptpclockportcurrentclocktypeindex.yfilter)
	|| ydk::is_set(cptpclockportcurrentclockinstanceindex.yfilter)
	|| ydk::is_set(cptpclockportcurrentportnumberindex.yfilter)
	|| ydk::is_set(cptpclockportassociateportindex.yfilter)
	|| ydk::is_set(cptpclockportassociateaddresstype.yfilter)
	|| ydk::is_set(cptpclockportassociateaddress.yfilter)
	|| ydk::is_set(cptpclockportassociatepacketssent.yfilter)
	|| ydk::is_set(cptpclockportassociatepacketsreceived.yfilter)
	|| ydk::is_set(cptpclockportassociateinerrors.yfilter)
	|| ydk::is_set(cptpclockportassociateouterrors.yfilter);
}

std::string CISCOPTPMIB::CPtpClockPortAssociateTable::CPtpClockPortAssociateEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-PTP-MIB:CISCO-PTP-MIB/cPtpClockPortAssociateTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOPTPMIB::CPtpClockPortAssociateTable::CPtpClockPortAssociateEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cPtpClockPortAssociateEntry";
    ADD_KEY_TOKEN(cptpclockportcurrentdomainindex, "cPtpClockPortCurrentDomainIndex");
    ADD_KEY_TOKEN(cptpclockportcurrentclocktypeindex, "cPtpClockPortCurrentClockTypeIndex");
    ADD_KEY_TOKEN(cptpclockportcurrentclockinstanceindex, "cPtpClockPortCurrentClockInstanceIndex");
    ADD_KEY_TOKEN(cptpclockportcurrentportnumberindex, "cPtpClockPortCurrentPortNumberIndex");
    ADD_KEY_TOKEN(cptpclockportassociateportindex, "cPtpClockPortAssociatePortIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOPTPMIB::CPtpClockPortAssociateTable::CPtpClockPortAssociateEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cptpclockportcurrentdomainindex.is_set || is_set(cptpclockportcurrentdomainindex.yfilter)) leaf_name_data.push_back(cptpclockportcurrentdomainindex.get_name_leafdata());
    if (cptpclockportcurrentclocktypeindex.is_set || is_set(cptpclockportcurrentclocktypeindex.yfilter)) leaf_name_data.push_back(cptpclockportcurrentclocktypeindex.get_name_leafdata());
    if (cptpclockportcurrentclockinstanceindex.is_set || is_set(cptpclockportcurrentclockinstanceindex.yfilter)) leaf_name_data.push_back(cptpclockportcurrentclockinstanceindex.get_name_leafdata());
    if (cptpclockportcurrentportnumberindex.is_set || is_set(cptpclockportcurrentportnumberindex.yfilter)) leaf_name_data.push_back(cptpclockportcurrentportnumberindex.get_name_leafdata());
    if (cptpclockportassociateportindex.is_set || is_set(cptpclockportassociateportindex.yfilter)) leaf_name_data.push_back(cptpclockportassociateportindex.get_name_leafdata());
    if (cptpclockportassociateaddresstype.is_set || is_set(cptpclockportassociateaddresstype.yfilter)) leaf_name_data.push_back(cptpclockportassociateaddresstype.get_name_leafdata());
    if (cptpclockportassociateaddress.is_set || is_set(cptpclockportassociateaddress.yfilter)) leaf_name_data.push_back(cptpclockportassociateaddress.get_name_leafdata());
    if (cptpclockportassociatepacketssent.is_set || is_set(cptpclockportassociatepacketssent.yfilter)) leaf_name_data.push_back(cptpclockportassociatepacketssent.get_name_leafdata());
    if (cptpclockportassociatepacketsreceived.is_set || is_set(cptpclockportassociatepacketsreceived.yfilter)) leaf_name_data.push_back(cptpclockportassociatepacketsreceived.get_name_leafdata());
    if (cptpclockportassociateinerrors.is_set || is_set(cptpclockportassociateinerrors.yfilter)) leaf_name_data.push_back(cptpclockportassociateinerrors.get_name_leafdata());
    if (cptpclockportassociateouterrors.is_set || is_set(cptpclockportassociateouterrors.yfilter)) leaf_name_data.push_back(cptpclockportassociateouterrors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOPTPMIB::CPtpClockPortAssociateTable::CPtpClockPortAssociateEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOPTPMIB::CPtpClockPortAssociateTable::CPtpClockPortAssociateEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOPTPMIB::CPtpClockPortAssociateTable::CPtpClockPortAssociateEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cPtpClockPortCurrentDomainIndex")
    {
        cptpclockportcurrentdomainindex = value;
        cptpclockportcurrentdomainindex.value_namespace = name_space;
        cptpclockportcurrentdomainindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortCurrentClockTypeIndex")
    {
        cptpclockportcurrentclocktypeindex = value;
        cptpclockportcurrentclocktypeindex.value_namespace = name_space;
        cptpclockportcurrentclocktypeindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortCurrentClockInstanceIndex")
    {
        cptpclockportcurrentclockinstanceindex = value;
        cptpclockportcurrentclockinstanceindex.value_namespace = name_space;
        cptpclockportcurrentclockinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortCurrentPortNumberIndex")
    {
        cptpclockportcurrentportnumberindex = value;
        cptpclockportcurrentportnumberindex.value_namespace = name_space;
        cptpclockportcurrentportnumberindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortAssociatePortIndex")
    {
        cptpclockportassociateportindex = value;
        cptpclockportassociateportindex.value_namespace = name_space;
        cptpclockportassociateportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortAssociateAddressType")
    {
        cptpclockportassociateaddresstype = value;
        cptpclockportassociateaddresstype.value_namespace = name_space;
        cptpclockportassociateaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortAssociateAddress")
    {
        cptpclockportassociateaddress = value;
        cptpclockportassociateaddress.value_namespace = name_space;
        cptpclockportassociateaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortAssociatePacketsSent")
    {
        cptpclockportassociatepacketssent = value;
        cptpclockportassociatepacketssent.value_namespace = name_space;
        cptpclockportassociatepacketssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortAssociatePacketsReceived")
    {
        cptpclockportassociatepacketsreceived = value;
        cptpclockportassociatepacketsreceived.value_namespace = name_space;
        cptpclockportassociatepacketsreceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortAssociateInErrors")
    {
        cptpclockportassociateinerrors = value;
        cptpclockportassociateinerrors.value_namespace = name_space;
        cptpclockportassociateinerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cPtpClockPortAssociateOutErrors")
    {
        cptpclockportassociateouterrors = value;
        cptpclockportassociateouterrors.value_namespace = name_space;
        cptpclockportassociateouterrors.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOPTPMIB::CPtpClockPortAssociateTable::CPtpClockPortAssociateEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cPtpClockPortCurrentDomainIndex")
    {
        cptpclockportcurrentdomainindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortCurrentClockTypeIndex")
    {
        cptpclockportcurrentclocktypeindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortCurrentClockInstanceIndex")
    {
        cptpclockportcurrentclockinstanceindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortCurrentPortNumberIndex")
    {
        cptpclockportcurrentportnumberindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortAssociatePortIndex")
    {
        cptpclockportassociateportindex.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortAssociateAddressType")
    {
        cptpclockportassociateaddresstype.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortAssociateAddress")
    {
        cptpclockportassociateaddress.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortAssociatePacketsSent")
    {
        cptpclockportassociatepacketssent.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortAssociatePacketsReceived")
    {
        cptpclockportassociatepacketsreceived.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortAssociateInErrors")
    {
        cptpclockportassociateinerrors.yfilter = yfilter;
    }
    if(value_path == "cPtpClockPortAssociateOutErrors")
    {
        cptpclockportassociateouterrors.yfilter = yfilter;
    }
}

bool CISCOPTPMIB::CPtpClockPortAssociateTable::CPtpClockPortAssociateEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cPtpClockPortCurrentDomainIndex" || name == "cPtpClockPortCurrentClockTypeIndex" || name == "cPtpClockPortCurrentClockInstanceIndex" || name == "cPtpClockPortCurrentPortNumberIndex" || name == "cPtpClockPortAssociatePortIndex" || name == "cPtpClockPortAssociateAddressType" || name == "cPtpClockPortAssociateAddress" || name == "cPtpClockPortAssociatePacketsSent" || name == "cPtpClockPortAssociatePacketsReceived" || name == "cPtpClockPortAssociateInErrors" || name == "cPtpClockPortAssociateOutErrors")
        return true;
    return false;
}

const Enum::YLeaf ClockMechanismType::e2e {1, "e2e"};
const Enum::YLeaf ClockMechanismType::p2p {2, "p2p"};
const Enum::YLeaf ClockMechanismType::disabled {254, "disabled"};

const Enum::YLeaf ClockPortState::initializing {1, "initializing"};
const Enum::YLeaf ClockPortState::faulty {2, "faulty"};
const Enum::YLeaf ClockPortState::disabled {3, "disabled"};
const Enum::YLeaf ClockPortState::listening {4, "listening"};
const Enum::YLeaf ClockPortState::preMaster {5, "preMaster"};
const Enum::YLeaf ClockPortState::master {6, "master"};
const Enum::YLeaf ClockPortState::passive {7, "passive"};
const Enum::YLeaf ClockPortState::uncalibrated {8, "uncalibrated"};
const Enum::YLeaf ClockPortState::slave {9, "slave"};

const Enum::YLeaf ClockTimeSourceType::atomicClock {16, "atomicClock"};
const Enum::YLeaf ClockTimeSourceType::gps {32, "gps"};
const Enum::YLeaf ClockTimeSourceType::terrestrialRadio {48, "terrestrialRadio"};
const Enum::YLeaf ClockTimeSourceType::ptp {64, "ptp"};
const Enum::YLeaf ClockTimeSourceType::ntp {80, "ntp"};
const Enum::YLeaf ClockTimeSourceType::handSet {96, "handSet"};
const Enum::YLeaf ClockTimeSourceType::other {144, "other"};
const Enum::YLeaf ClockTimeSourceType::internalOsillator {160, "internalOsillator"};

const Enum::YLeaf ClockProfileType::default_ {1, "default"};
const Enum::YLeaf ClockProfileType::telecom {2, "telecom"};
const Enum::YLeaf ClockProfileType::vendorspecific {3, "vendorspecific"};

const Enum::YLeaf ClockRoleType::master {1, "master"};
const Enum::YLeaf ClockRoleType::slave {2, "slave"};

const Enum::YLeaf ClockType::ordinaryClock {1, "ordinaryClock"};
const Enum::YLeaf ClockType::boundaryClock {2, "boundaryClock"};
const Enum::YLeaf ClockType::transparentClock {3, "transparentClock"};
const Enum::YLeaf ClockType::boundaryNode {4, "boundaryNode"};

const Enum::YLeaf ClockTxModeType::unicast {1, "unicast"};
const Enum::YLeaf ClockTxModeType::multicast {2, "multicast"};
const Enum::YLeaf ClockTxModeType::multicastmix {3, "multicastmix"};

const Enum::YLeaf ClockQualityAccuracyType::reserved00 {1, "reserved00"};
const Enum::YLeaf ClockQualityAccuracyType::nanoSecond25 {32, "nanoSecond25"};
const Enum::YLeaf ClockQualityAccuracyType::nanoSecond100 {33, "nanoSecond100"};
const Enum::YLeaf ClockQualityAccuracyType::nanoSecond250 {34, "nanoSecond250"};
const Enum::YLeaf ClockQualityAccuracyType::microSec1 {35, "microSec1"};
const Enum::YLeaf ClockQualityAccuracyType::microSec2dot5 {36, "microSec2dot5"};
const Enum::YLeaf ClockQualityAccuracyType::microSec10 {37, "microSec10"};
const Enum::YLeaf ClockQualityAccuracyType::microSec25 {38, "microSec25"};
const Enum::YLeaf ClockQualityAccuracyType::microSec100 {39, "microSec100"};
const Enum::YLeaf ClockQualityAccuracyType::microSec250 {40, "microSec250"};
const Enum::YLeaf ClockQualityAccuracyType::milliSec1 {41, "milliSec1"};
const Enum::YLeaf ClockQualityAccuracyType::milliSec2dot5 {42, "milliSec2dot5"};
const Enum::YLeaf ClockQualityAccuracyType::milliSec10 {43, "milliSec10"};
const Enum::YLeaf ClockQualityAccuracyType::milliSec25 {44, "milliSec25"};
const Enum::YLeaf ClockQualityAccuracyType::milliSec100 {45, "milliSec100"};
const Enum::YLeaf ClockQualityAccuracyType::milliSec250 {46, "milliSec250"};
const Enum::YLeaf ClockQualityAccuracyType::second1 {47, "second1"};
const Enum::YLeaf ClockQualityAccuracyType::second10 {48, "second10"};
const Enum::YLeaf ClockQualityAccuracyType::secondGreater10 {49, "secondGreater10"};
const Enum::YLeaf ClockQualityAccuracyType::unknown {254, "unknown"};
const Enum::YLeaf ClockQualityAccuracyType::reserved255 {255, "reserved255"};

const Enum::YLeaf ClockStateType::freerun {1, "freerun"};
const Enum::YLeaf ClockStateType::holdover {2, "holdover"};
const Enum::YLeaf ClockStateType::acquiring {3, "acquiring"};
const Enum::YLeaf ClockStateType::frequencyLocked {4, "frequencyLocked"};
const Enum::YLeaf ClockStateType::phaseAligned {5, "phaseAligned"};


}
}

