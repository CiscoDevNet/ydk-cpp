
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SYSLOG_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_SYSLOG_MIB {

CISCOSYSLOGMIB::CISCOSYSLOGMIB()
    :
    clogbasic(std::make_shared<CISCOSYSLOGMIB::ClogBasic>())
    , cloghistory(std::make_shared<CISCOSYSLOGMIB::ClogHistory>())
    , clogserver(std::make_shared<CISCOSYSLOGMIB::ClogServer>())
    , cloghistorytable(std::make_shared<CISCOSYSLOGMIB::ClogHistoryTable>())
    , clogserverconfigtable(std::make_shared<CISCOSYSLOGMIB::ClogServerConfigTable>())
{
    clogbasic->parent = this;
    cloghistory->parent = this;
    clogserver->parent = this;
    cloghistorytable->parent = this;
    clogserverconfigtable->parent = this;

    yang_name = "CISCO-SYSLOG-MIB"; yang_parent_name = "CISCO-SYSLOG-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOSYSLOGMIB::~CISCOSYSLOGMIB()
{
}

bool CISCOSYSLOGMIB::has_data() const
{
    if (is_presence_container) return true;
    return (clogbasic !=  nullptr && clogbasic->has_data())
	|| (cloghistory !=  nullptr && cloghistory->has_data())
	|| (clogserver !=  nullptr && clogserver->has_data())
	|| (cloghistorytable !=  nullptr && cloghistorytable->has_data())
	|| (clogserverconfigtable !=  nullptr && clogserverconfigtable->has_data());
}

bool CISCOSYSLOGMIB::has_operation() const
{
    return is_set(yfilter)
	|| (clogbasic !=  nullptr && clogbasic->has_operation())
	|| (cloghistory !=  nullptr && cloghistory->has_operation())
	|| (clogserver !=  nullptr && clogserver->has_operation())
	|| (cloghistorytable !=  nullptr && cloghistorytable->has_operation())
	|| (clogserverconfigtable !=  nullptr && clogserverconfigtable->has_operation());
}

std::string CISCOSYSLOGMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SYSLOG-MIB:CISCO-SYSLOG-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSYSLOGMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSYSLOGMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clogBasic")
    {
        if(clogbasic == nullptr)
        {
            clogbasic = std::make_shared<CISCOSYSLOGMIB::ClogBasic>();
        }
        return clogbasic;
    }

    if(child_yang_name == "clogHistory")
    {
        if(cloghistory == nullptr)
        {
            cloghistory = std::make_shared<CISCOSYSLOGMIB::ClogHistory>();
        }
        return cloghistory;
    }

    if(child_yang_name == "clogServer")
    {
        if(clogserver == nullptr)
        {
            clogserver = std::make_shared<CISCOSYSLOGMIB::ClogServer>();
        }
        return clogserver;
    }

    if(child_yang_name == "clogHistoryTable")
    {
        if(cloghistorytable == nullptr)
        {
            cloghistorytable = std::make_shared<CISCOSYSLOGMIB::ClogHistoryTable>();
        }
        return cloghistorytable;
    }

    if(child_yang_name == "clogServerConfigTable")
    {
        if(clogserverconfigtable == nullptr)
        {
            clogserverconfigtable = std::make_shared<CISCOSYSLOGMIB::ClogServerConfigTable>();
        }
        return clogserverconfigtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSYSLOGMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clogbasic != nullptr)
    {
        _children["clogBasic"] = clogbasic;
    }

    if(cloghistory != nullptr)
    {
        _children["clogHistory"] = cloghistory;
    }

    if(clogserver != nullptr)
    {
        _children["clogServer"] = clogserver;
    }

    if(cloghistorytable != nullptr)
    {
        _children["clogHistoryTable"] = cloghistorytable;
    }

    if(clogserverconfigtable != nullptr)
    {
        _children["clogServerConfigTable"] = clogserverconfigtable;
    }

    return _children;
}

void CISCOSYSLOGMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSYSLOGMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOSYSLOGMIB::clone_ptr() const
{
    return std::make_shared<CISCOSYSLOGMIB>();
}

std::string CISCOSYSLOGMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOSYSLOGMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOSYSLOGMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOSYSLOGMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOSYSLOGMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clogBasic" || name == "clogHistory" || name == "clogServer" || name == "clogHistoryTable" || name == "clogServerConfigTable")
        return true;
    return false;
}

CISCOSYSLOGMIB::ClogBasic::ClogBasic()
    :
    clognotificationssent{YType::uint32, "clogNotificationsSent"},
    clognotificationsenabled{YType::boolean, "clogNotificationsEnabled"},
    clogmaxseverity{YType::enumeration, "clogMaxSeverity"},
    clogmsgignores{YType::uint32, "clogMsgIgnores"},
    clogmsgdrops{YType::uint32, "clogMsgDrops"},
    clogoriginidtype{YType::enumeration, "clogOriginIDType"},
    clogoriginid{YType::str, "clogOriginID"}
{

    yang_name = "clogBasic"; yang_parent_name = "CISCO-SYSLOG-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSYSLOGMIB::ClogBasic::~ClogBasic()
{
}

bool CISCOSYSLOGMIB::ClogBasic::has_data() const
{
    if (is_presence_container) return true;
    return clognotificationssent.is_set
	|| clognotificationsenabled.is_set
	|| clogmaxseverity.is_set
	|| clogmsgignores.is_set
	|| clogmsgdrops.is_set
	|| clogoriginidtype.is_set
	|| clogoriginid.is_set;
}

bool CISCOSYSLOGMIB::ClogBasic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clognotificationssent.yfilter)
	|| ydk::is_set(clognotificationsenabled.yfilter)
	|| ydk::is_set(clogmaxseverity.yfilter)
	|| ydk::is_set(clogmsgignores.yfilter)
	|| ydk::is_set(clogmsgdrops.yfilter)
	|| ydk::is_set(clogoriginidtype.yfilter)
	|| ydk::is_set(clogoriginid.yfilter);
}

std::string CISCOSYSLOGMIB::ClogBasic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SYSLOG-MIB:CISCO-SYSLOG-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSYSLOGMIB::ClogBasic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clogBasic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSYSLOGMIB::ClogBasic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clognotificationssent.is_set || is_set(clognotificationssent.yfilter)) leaf_name_data.push_back(clognotificationssent.get_name_leafdata());
    if (clognotificationsenabled.is_set || is_set(clognotificationsenabled.yfilter)) leaf_name_data.push_back(clognotificationsenabled.get_name_leafdata());
    if (clogmaxseverity.is_set || is_set(clogmaxseverity.yfilter)) leaf_name_data.push_back(clogmaxseverity.get_name_leafdata());
    if (clogmsgignores.is_set || is_set(clogmsgignores.yfilter)) leaf_name_data.push_back(clogmsgignores.get_name_leafdata());
    if (clogmsgdrops.is_set || is_set(clogmsgdrops.yfilter)) leaf_name_data.push_back(clogmsgdrops.get_name_leafdata());
    if (clogoriginidtype.is_set || is_set(clogoriginidtype.yfilter)) leaf_name_data.push_back(clogoriginidtype.get_name_leafdata());
    if (clogoriginid.is_set || is_set(clogoriginid.yfilter)) leaf_name_data.push_back(clogoriginid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSYSLOGMIB::ClogBasic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSYSLOGMIB::ClogBasic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSYSLOGMIB::ClogBasic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clogNotificationsSent")
    {
        clognotificationssent = value;
        clognotificationssent.value_namespace = name_space;
        clognotificationssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogNotificationsEnabled")
    {
        clognotificationsenabled = value;
        clognotificationsenabled.value_namespace = name_space;
        clognotificationsenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogMaxSeverity")
    {
        clogmaxseverity = value;
        clogmaxseverity.value_namespace = name_space;
        clogmaxseverity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogMsgIgnores")
    {
        clogmsgignores = value;
        clogmsgignores.value_namespace = name_space;
        clogmsgignores.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogMsgDrops")
    {
        clogmsgdrops = value;
        clogmsgdrops.value_namespace = name_space;
        clogmsgdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogOriginIDType")
    {
        clogoriginidtype = value;
        clogoriginidtype.value_namespace = name_space;
        clogoriginidtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogOriginID")
    {
        clogoriginid = value;
        clogoriginid.value_namespace = name_space;
        clogoriginid.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSYSLOGMIB::ClogBasic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clogNotificationsSent")
    {
        clognotificationssent.yfilter = yfilter;
    }
    if(value_path == "clogNotificationsEnabled")
    {
        clognotificationsenabled.yfilter = yfilter;
    }
    if(value_path == "clogMaxSeverity")
    {
        clogmaxseverity.yfilter = yfilter;
    }
    if(value_path == "clogMsgIgnores")
    {
        clogmsgignores.yfilter = yfilter;
    }
    if(value_path == "clogMsgDrops")
    {
        clogmsgdrops.yfilter = yfilter;
    }
    if(value_path == "clogOriginIDType")
    {
        clogoriginidtype.yfilter = yfilter;
    }
    if(value_path == "clogOriginID")
    {
        clogoriginid.yfilter = yfilter;
    }
}

bool CISCOSYSLOGMIB::ClogBasic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clogNotificationsSent" || name == "clogNotificationsEnabled" || name == "clogMaxSeverity" || name == "clogMsgIgnores" || name == "clogMsgDrops" || name == "clogOriginIDType" || name == "clogOriginID")
        return true;
    return false;
}

CISCOSYSLOGMIB::ClogHistory::ClogHistory()
    :
    cloghisttablemaxlength{YType::int32, "clogHistTableMaxLength"},
    cloghistmsgsflushed{YType::uint32, "clogHistMsgsFlushed"}
{

    yang_name = "clogHistory"; yang_parent_name = "CISCO-SYSLOG-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSYSLOGMIB::ClogHistory::~ClogHistory()
{
}

bool CISCOSYSLOGMIB::ClogHistory::has_data() const
{
    if (is_presence_container) return true;
    return cloghisttablemaxlength.is_set
	|| cloghistmsgsflushed.is_set;
}

bool CISCOSYSLOGMIB::ClogHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cloghisttablemaxlength.yfilter)
	|| ydk::is_set(cloghistmsgsflushed.yfilter);
}

std::string CISCOSYSLOGMIB::ClogHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SYSLOG-MIB:CISCO-SYSLOG-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSYSLOGMIB::ClogHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clogHistory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSYSLOGMIB::ClogHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cloghisttablemaxlength.is_set || is_set(cloghisttablemaxlength.yfilter)) leaf_name_data.push_back(cloghisttablemaxlength.get_name_leafdata());
    if (cloghistmsgsflushed.is_set || is_set(cloghistmsgsflushed.yfilter)) leaf_name_data.push_back(cloghistmsgsflushed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSYSLOGMIB::ClogHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSYSLOGMIB::ClogHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSYSLOGMIB::ClogHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clogHistTableMaxLength")
    {
        cloghisttablemaxlength = value;
        cloghisttablemaxlength.value_namespace = name_space;
        cloghisttablemaxlength.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogHistMsgsFlushed")
    {
        cloghistmsgsflushed = value;
        cloghistmsgsflushed.value_namespace = name_space;
        cloghistmsgsflushed.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSYSLOGMIB::ClogHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clogHistTableMaxLength")
    {
        cloghisttablemaxlength.yfilter = yfilter;
    }
    if(value_path == "clogHistMsgsFlushed")
    {
        cloghistmsgsflushed.yfilter = yfilter;
    }
}

bool CISCOSYSLOGMIB::ClogHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clogHistTableMaxLength" || name == "clogHistMsgsFlushed")
        return true;
    return false;
}

CISCOSYSLOGMIB::ClogServer::ClogServer()
    :
    clogmaxservers{YType::uint32, "clogMaxServers"}
{

    yang_name = "clogServer"; yang_parent_name = "CISCO-SYSLOG-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSYSLOGMIB::ClogServer::~ClogServer()
{
}

bool CISCOSYSLOGMIB::ClogServer::has_data() const
{
    if (is_presence_container) return true;
    return clogmaxservers.is_set;
}

bool CISCOSYSLOGMIB::ClogServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clogmaxservers.yfilter);
}

std::string CISCOSYSLOGMIB::ClogServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SYSLOG-MIB:CISCO-SYSLOG-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSYSLOGMIB::ClogServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clogServer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSYSLOGMIB::ClogServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clogmaxservers.is_set || is_set(clogmaxservers.yfilter)) leaf_name_data.push_back(clogmaxservers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSYSLOGMIB::ClogServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSYSLOGMIB::ClogServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSYSLOGMIB::ClogServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clogMaxServers")
    {
        clogmaxservers = value;
        clogmaxservers.value_namespace = name_space;
        clogmaxservers.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSYSLOGMIB::ClogServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clogMaxServers")
    {
        clogmaxservers.yfilter = yfilter;
    }
}

bool CISCOSYSLOGMIB::ClogServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clogMaxServers")
        return true;
    return false;
}

CISCOSYSLOGMIB::ClogHistoryTable::ClogHistoryTable()
    :
    cloghistoryentry(this, {"cloghistindex"})
{

    yang_name = "clogHistoryTable"; yang_parent_name = "CISCO-SYSLOG-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSYSLOGMIB::ClogHistoryTable::~ClogHistoryTable()
{
}

bool CISCOSYSLOGMIB::ClogHistoryTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cloghistoryentry.len(); index++)
    {
        if(cloghistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSYSLOGMIB::ClogHistoryTable::has_operation() const
{
    for (std::size_t index=0; index<cloghistoryentry.len(); index++)
    {
        if(cloghistoryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSYSLOGMIB::ClogHistoryTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SYSLOG-MIB:CISCO-SYSLOG-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSYSLOGMIB::ClogHistoryTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clogHistoryTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSYSLOGMIB::ClogHistoryTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSYSLOGMIB::ClogHistoryTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clogHistoryEntry")
    {
        auto ent_ = std::make_shared<CISCOSYSLOGMIB::ClogHistoryTable::ClogHistoryEntry>();
        ent_->parent = this;
        cloghistoryentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSYSLOGMIB::ClogHistoryTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cloghistoryentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSYSLOGMIB::ClogHistoryTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSYSLOGMIB::ClogHistoryTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSYSLOGMIB::ClogHistoryTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clogHistoryEntry")
        return true;
    return false;
}

CISCOSYSLOGMIB::ClogHistoryTable::ClogHistoryEntry::ClogHistoryEntry()
    :
    cloghistindex{YType::int32, "clogHistIndex"},
    cloghistfacility{YType::str, "clogHistFacility"},
    cloghistseverity{YType::enumeration, "clogHistSeverity"},
    cloghistmsgname{YType::str, "clogHistMsgName"},
    cloghistmsgtext{YType::str, "clogHistMsgText"},
    cloghisttimestamp{YType::uint32, "clogHistTimestamp"}
{

    yang_name = "clogHistoryEntry"; yang_parent_name = "clogHistoryTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSYSLOGMIB::ClogHistoryTable::ClogHistoryEntry::~ClogHistoryEntry()
{
}

bool CISCOSYSLOGMIB::ClogHistoryTable::ClogHistoryEntry::has_data() const
{
    if (is_presence_container) return true;
    return cloghistindex.is_set
	|| cloghistfacility.is_set
	|| cloghistseverity.is_set
	|| cloghistmsgname.is_set
	|| cloghistmsgtext.is_set
	|| cloghisttimestamp.is_set;
}

bool CISCOSYSLOGMIB::ClogHistoryTable::ClogHistoryEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cloghistindex.yfilter)
	|| ydk::is_set(cloghistfacility.yfilter)
	|| ydk::is_set(cloghistseverity.yfilter)
	|| ydk::is_set(cloghistmsgname.yfilter)
	|| ydk::is_set(cloghistmsgtext.yfilter)
	|| ydk::is_set(cloghisttimestamp.yfilter);
}

std::string CISCOSYSLOGMIB::ClogHistoryTable::ClogHistoryEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SYSLOG-MIB:CISCO-SYSLOG-MIB/clogHistoryTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSYSLOGMIB::ClogHistoryTable::ClogHistoryEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clogHistoryEntry";
    ADD_KEY_TOKEN(cloghistindex, "clogHistIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSYSLOGMIB::ClogHistoryTable::ClogHistoryEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cloghistindex.is_set || is_set(cloghistindex.yfilter)) leaf_name_data.push_back(cloghistindex.get_name_leafdata());
    if (cloghistfacility.is_set || is_set(cloghistfacility.yfilter)) leaf_name_data.push_back(cloghistfacility.get_name_leafdata());
    if (cloghistseverity.is_set || is_set(cloghistseverity.yfilter)) leaf_name_data.push_back(cloghistseverity.get_name_leafdata());
    if (cloghistmsgname.is_set || is_set(cloghistmsgname.yfilter)) leaf_name_data.push_back(cloghistmsgname.get_name_leafdata());
    if (cloghistmsgtext.is_set || is_set(cloghistmsgtext.yfilter)) leaf_name_data.push_back(cloghistmsgtext.get_name_leafdata());
    if (cloghisttimestamp.is_set || is_set(cloghisttimestamp.yfilter)) leaf_name_data.push_back(cloghisttimestamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSYSLOGMIB::ClogHistoryTable::ClogHistoryEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSYSLOGMIB::ClogHistoryTable::ClogHistoryEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSYSLOGMIB::ClogHistoryTable::ClogHistoryEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clogHistIndex")
    {
        cloghistindex = value;
        cloghistindex.value_namespace = name_space;
        cloghistindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogHistFacility")
    {
        cloghistfacility = value;
        cloghistfacility.value_namespace = name_space;
        cloghistfacility.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogHistSeverity")
    {
        cloghistseverity = value;
        cloghistseverity.value_namespace = name_space;
        cloghistseverity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogHistMsgName")
    {
        cloghistmsgname = value;
        cloghistmsgname.value_namespace = name_space;
        cloghistmsgname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogHistMsgText")
    {
        cloghistmsgtext = value;
        cloghistmsgtext.value_namespace = name_space;
        cloghistmsgtext.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogHistTimestamp")
    {
        cloghisttimestamp = value;
        cloghisttimestamp.value_namespace = name_space;
        cloghisttimestamp.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSYSLOGMIB::ClogHistoryTable::ClogHistoryEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clogHistIndex")
    {
        cloghistindex.yfilter = yfilter;
    }
    if(value_path == "clogHistFacility")
    {
        cloghistfacility.yfilter = yfilter;
    }
    if(value_path == "clogHistSeverity")
    {
        cloghistseverity.yfilter = yfilter;
    }
    if(value_path == "clogHistMsgName")
    {
        cloghistmsgname.yfilter = yfilter;
    }
    if(value_path == "clogHistMsgText")
    {
        cloghistmsgtext.yfilter = yfilter;
    }
    if(value_path == "clogHistTimestamp")
    {
        cloghisttimestamp.yfilter = yfilter;
    }
}

bool CISCOSYSLOGMIB::ClogHistoryTable::ClogHistoryEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clogHistIndex" || name == "clogHistFacility" || name == "clogHistSeverity" || name == "clogHistMsgName" || name == "clogHistMsgText" || name == "clogHistTimestamp")
        return true;
    return false;
}

CISCOSYSLOGMIB::ClogServerConfigTable::ClogServerConfigTable()
    :
    clogserverconfigentry(this, {"clogserveraddrtype", "clogserveraddr"})
{

    yang_name = "clogServerConfigTable"; yang_parent_name = "CISCO-SYSLOG-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSYSLOGMIB::ClogServerConfigTable::~ClogServerConfigTable()
{
}

bool CISCOSYSLOGMIB::ClogServerConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<clogserverconfigentry.len(); index++)
    {
        if(clogserverconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSYSLOGMIB::ClogServerConfigTable::has_operation() const
{
    for (std::size_t index=0; index<clogserverconfigentry.len(); index++)
    {
        if(clogserverconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSYSLOGMIB::ClogServerConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SYSLOG-MIB:CISCO-SYSLOG-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSYSLOGMIB::ClogServerConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clogServerConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSYSLOGMIB::ClogServerConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSYSLOGMIB::ClogServerConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clogServerConfigEntry")
    {
        auto ent_ = std::make_shared<CISCOSYSLOGMIB::ClogServerConfigTable::ClogServerConfigEntry>();
        ent_->parent = this;
        clogserverconfigentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSYSLOGMIB::ClogServerConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : clogserverconfigentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSYSLOGMIB::ClogServerConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSYSLOGMIB::ClogServerConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSYSLOGMIB::ClogServerConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clogServerConfigEntry")
        return true;
    return false;
}

CISCOSYSLOGMIB::ClogServerConfigTable::ClogServerConfigEntry::ClogServerConfigEntry()
    :
    clogserveraddrtype{YType::enumeration, "clogServerAddrType"},
    clogserveraddr{YType::str, "clogServerAddr"},
    clogserverstatus{YType::enumeration, "clogServerStatus"}
{

    yang_name = "clogServerConfigEntry"; yang_parent_name = "clogServerConfigTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSYSLOGMIB::ClogServerConfigTable::ClogServerConfigEntry::~ClogServerConfigEntry()
{
}

bool CISCOSYSLOGMIB::ClogServerConfigTable::ClogServerConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return clogserveraddrtype.is_set
	|| clogserveraddr.is_set
	|| clogserverstatus.is_set;
}

bool CISCOSYSLOGMIB::ClogServerConfigTable::ClogServerConfigEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clogserveraddrtype.yfilter)
	|| ydk::is_set(clogserveraddr.yfilter)
	|| ydk::is_set(clogserverstatus.yfilter);
}

std::string CISCOSYSLOGMIB::ClogServerConfigTable::ClogServerConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SYSLOG-MIB:CISCO-SYSLOG-MIB/clogServerConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSYSLOGMIB::ClogServerConfigTable::ClogServerConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clogServerConfigEntry";
    ADD_KEY_TOKEN(clogserveraddrtype, "clogServerAddrType");
    ADD_KEY_TOKEN(clogserveraddr, "clogServerAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSYSLOGMIB::ClogServerConfigTable::ClogServerConfigEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clogserveraddrtype.is_set || is_set(clogserveraddrtype.yfilter)) leaf_name_data.push_back(clogserveraddrtype.get_name_leafdata());
    if (clogserveraddr.is_set || is_set(clogserveraddr.yfilter)) leaf_name_data.push_back(clogserveraddr.get_name_leafdata());
    if (clogserverstatus.is_set || is_set(clogserverstatus.yfilter)) leaf_name_data.push_back(clogserverstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSYSLOGMIB::ClogServerConfigTable::ClogServerConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSYSLOGMIB::ClogServerConfigTable::ClogServerConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSYSLOGMIB::ClogServerConfigTable::ClogServerConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clogServerAddrType")
    {
        clogserveraddrtype = value;
        clogserveraddrtype.value_namespace = name_space;
        clogserveraddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogServerAddr")
    {
        clogserveraddr = value;
        clogserveraddr.value_namespace = name_space;
        clogserveraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogServerStatus")
    {
        clogserverstatus = value;
        clogserverstatus.value_namespace = name_space;
        clogserverstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSYSLOGMIB::ClogServerConfigTable::ClogServerConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clogServerAddrType")
    {
        clogserveraddrtype.yfilter = yfilter;
    }
    if(value_path == "clogServerAddr")
    {
        clogserveraddr.yfilter = yfilter;
    }
    if(value_path == "clogServerStatus")
    {
        clogserverstatus.yfilter = yfilter;
    }
}

bool CISCOSYSLOGMIB::ClogServerConfigTable::ClogServerConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clogServerAddrType" || name == "clogServerAddr" || name == "clogServerStatus")
        return true;
    return false;
}

const Enum::YLeaf SyslogSeverity::emergency {1, "emergency"};
const Enum::YLeaf SyslogSeverity::alert {2, "alert"};
const Enum::YLeaf SyslogSeverity::critical {3, "critical"};
const Enum::YLeaf SyslogSeverity::error {4, "error"};
const Enum::YLeaf SyslogSeverity::warning {5, "warning"};
const Enum::YLeaf SyslogSeverity::notice {6, "notice"};
const Enum::YLeaf SyslogSeverity::info {7, "info"};
const Enum::YLeaf SyslogSeverity::debug {8, "debug"};

const Enum::YLeaf CISCOSYSLOGMIB::ClogBasic::ClogOriginIDType::none {1, "none"};
const Enum::YLeaf CISCOSYSLOGMIB::ClogBasic::ClogOriginIDType::other {2, "other"};
const Enum::YLeaf CISCOSYSLOGMIB::ClogBasic::ClogOriginIDType::hostName {3, "hostName"};
const Enum::YLeaf CISCOSYSLOGMIB::ClogBasic::ClogOriginIDType::ipv4Address {4, "ipv4Address"};
const Enum::YLeaf CISCOSYSLOGMIB::ClogBasic::ClogOriginIDType::contextName {5, "contextName"};
const Enum::YLeaf CISCOSYSLOGMIB::ClogBasic::ClogOriginIDType::userDefined {6, "userDefined"};


}
}

