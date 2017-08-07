
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SYSLOG_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_SYSLOG_MIB {

CiscoSyslogMib::CiscoSyslogMib()
    :
    clogbasic(std::make_shared<CiscoSyslogMib::Clogbasic>())
	,cloghistory(std::make_shared<CiscoSyslogMib::Cloghistory>())
	,cloghistorytable(std::make_shared<CiscoSyslogMib::Cloghistorytable>())
	,clogserver(std::make_shared<CiscoSyslogMib::Clogserver>())
	,clogserverconfigtable(std::make_shared<CiscoSyslogMib::Clogserverconfigtable>())
{
    clogbasic->parent = this;

    cloghistory->parent = this;

    cloghistorytable->parent = this;

    clogserver->parent = this;

    clogserverconfigtable->parent = this;

    yang_name = "CISCO-SYSLOG-MIB"; yang_parent_name = "CISCO-SYSLOG-MIB";
}

CiscoSyslogMib::~CiscoSyslogMib()
{
}

bool CiscoSyslogMib::has_data() const
{
    return (clogbasic !=  nullptr && clogbasic->has_data())
	|| (cloghistory !=  nullptr && cloghistory->has_data())
	|| (cloghistorytable !=  nullptr && cloghistorytable->has_data())
	|| (clogserver !=  nullptr && clogserver->has_data())
	|| (clogserverconfigtable !=  nullptr && clogserverconfigtable->has_data());
}

bool CiscoSyslogMib::has_operation() const
{
    return is_set(yfilter)
	|| (clogbasic !=  nullptr && clogbasic->has_operation())
	|| (cloghistory !=  nullptr && cloghistory->has_operation())
	|| (cloghistorytable !=  nullptr && cloghistorytable->has_operation())
	|| (clogserver !=  nullptr && clogserver->has_operation())
	|| (clogserverconfigtable !=  nullptr && clogserverconfigtable->has_operation());
}

std::string CiscoSyslogMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SYSLOG-MIB:CISCO-SYSLOG-MIB";

    return path_buffer.str();

}

const EntityPath CiscoSyslogMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoSyslogMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clogBasic")
    {
        if(clogbasic == nullptr)
        {
            clogbasic = std::make_shared<CiscoSyslogMib::Clogbasic>();
        }
        return clogbasic;
    }

    if(child_yang_name == "clogHistory")
    {
        if(cloghistory == nullptr)
        {
            cloghistory = std::make_shared<CiscoSyslogMib::Cloghistory>();
        }
        return cloghistory;
    }

    if(child_yang_name == "clogHistoryTable")
    {
        if(cloghistorytable == nullptr)
        {
            cloghistorytable = std::make_shared<CiscoSyslogMib::Cloghistorytable>();
        }
        return cloghistorytable;
    }

    if(child_yang_name == "clogServer")
    {
        if(clogserver == nullptr)
        {
            clogserver = std::make_shared<CiscoSyslogMib::Clogserver>();
        }
        return clogserver;
    }

    if(child_yang_name == "clogServerConfigTable")
    {
        if(clogserverconfigtable == nullptr)
        {
            clogserverconfigtable = std::make_shared<CiscoSyslogMib::Clogserverconfigtable>();
        }
        return clogserverconfigtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSyslogMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clogbasic != nullptr)
    {
        children["clogBasic"] = clogbasic;
    }

    if(cloghistory != nullptr)
    {
        children["clogHistory"] = cloghistory;
    }

    if(cloghistorytable != nullptr)
    {
        children["clogHistoryTable"] = cloghistorytable;
    }

    if(clogserver != nullptr)
    {
        children["clogServer"] = clogserver;
    }

    if(clogserverconfigtable != nullptr)
    {
        children["clogServerConfigTable"] = clogserverconfigtable;
    }

    return children;
}

void CiscoSyslogMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSyslogMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoSyslogMib::clone_ptr() const
{
    return std::make_shared<CiscoSyslogMib>();
}

std::string CiscoSyslogMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoSyslogMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoSyslogMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoSyslogMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoSyslogMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clogBasic" || name == "clogHistory" || name == "clogHistoryTable" || name == "clogServer" || name == "clogServerConfigTable")
        return true;
    return false;
}

CiscoSyslogMib::Clogbasic::Clogbasic()
    :
    clogmaxseverity{YType::enumeration, "clogMaxSeverity"},
    clogmsgdrops{YType::uint32, "clogMsgDrops"},
    clogmsgignores{YType::uint32, "clogMsgIgnores"},
    clognotificationsenabled{YType::boolean, "clogNotificationsEnabled"},
    clognotificationssent{YType::uint32, "clogNotificationsSent"},
    clogoriginid{YType::str, "clogOriginID"},
    clogoriginidtype{YType::enumeration, "clogOriginIDType"}
{
    yang_name = "clogBasic"; yang_parent_name = "CISCO-SYSLOG-MIB";
}

CiscoSyslogMib::Clogbasic::~Clogbasic()
{
}

bool CiscoSyslogMib::Clogbasic::has_data() const
{
    return clogmaxseverity.is_set
	|| clogmsgdrops.is_set
	|| clogmsgignores.is_set
	|| clognotificationsenabled.is_set
	|| clognotificationssent.is_set
	|| clogoriginid.is_set
	|| clogoriginidtype.is_set;
}

bool CiscoSyslogMib::Clogbasic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clogmaxseverity.yfilter)
	|| ydk::is_set(clogmsgdrops.yfilter)
	|| ydk::is_set(clogmsgignores.yfilter)
	|| ydk::is_set(clognotificationsenabled.yfilter)
	|| ydk::is_set(clognotificationssent.yfilter)
	|| ydk::is_set(clogoriginid.yfilter)
	|| ydk::is_set(clogoriginidtype.yfilter);
}

std::string CiscoSyslogMib::Clogbasic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clogBasic";

    return path_buffer.str();

}

const EntityPath CiscoSyslogMib::Clogbasic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SYSLOG-MIB:CISCO-SYSLOG-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clogmaxseverity.is_set || is_set(clogmaxseverity.yfilter)) leaf_name_data.push_back(clogmaxseverity.get_name_leafdata());
    if (clogmsgdrops.is_set || is_set(clogmsgdrops.yfilter)) leaf_name_data.push_back(clogmsgdrops.get_name_leafdata());
    if (clogmsgignores.is_set || is_set(clogmsgignores.yfilter)) leaf_name_data.push_back(clogmsgignores.get_name_leafdata());
    if (clognotificationsenabled.is_set || is_set(clognotificationsenabled.yfilter)) leaf_name_data.push_back(clognotificationsenabled.get_name_leafdata());
    if (clognotificationssent.is_set || is_set(clognotificationssent.yfilter)) leaf_name_data.push_back(clognotificationssent.get_name_leafdata());
    if (clogoriginid.is_set || is_set(clogoriginid.yfilter)) leaf_name_data.push_back(clogoriginid.get_name_leafdata());
    if (clogoriginidtype.is_set || is_set(clogoriginidtype.yfilter)) leaf_name_data.push_back(clogoriginidtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSyslogMib::Clogbasic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSyslogMib::Clogbasic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSyslogMib::Clogbasic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clogMaxSeverity")
    {
        clogmaxseverity = value;
        clogmaxseverity.value_namespace = name_space;
        clogmaxseverity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogMsgDrops")
    {
        clogmsgdrops = value;
        clogmsgdrops.value_namespace = name_space;
        clogmsgdrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogMsgIgnores")
    {
        clogmsgignores = value;
        clogmsgignores.value_namespace = name_space;
        clogmsgignores.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogNotificationsEnabled")
    {
        clognotificationsenabled = value;
        clognotificationsenabled.value_namespace = name_space;
        clognotificationsenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogNotificationsSent")
    {
        clognotificationssent = value;
        clognotificationssent.value_namespace = name_space;
        clognotificationssent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogOriginID")
    {
        clogoriginid = value;
        clogoriginid.value_namespace = name_space;
        clogoriginid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogOriginIDType")
    {
        clogoriginidtype = value;
        clogoriginidtype.value_namespace = name_space;
        clogoriginidtype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSyslogMib::Clogbasic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clogMaxSeverity")
    {
        clogmaxseverity.yfilter = yfilter;
    }
    if(value_path == "clogMsgDrops")
    {
        clogmsgdrops.yfilter = yfilter;
    }
    if(value_path == "clogMsgIgnores")
    {
        clogmsgignores.yfilter = yfilter;
    }
    if(value_path == "clogNotificationsEnabled")
    {
        clognotificationsenabled.yfilter = yfilter;
    }
    if(value_path == "clogNotificationsSent")
    {
        clognotificationssent.yfilter = yfilter;
    }
    if(value_path == "clogOriginID")
    {
        clogoriginid.yfilter = yfilter;
    }
    if(value_path == "clogOriginIDType")
    {
        clogoriginidtype.yfilter = yfilter;
    }
}

bool CiscoSyslogMib::Clogbasic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clogMaxSeverity" || name == "clogMsgDrops" || name == "clogMsgIgnores" || name == "clogNotificationsEnabled" || name == "clogNotificationsSent" || name == "clogOriginID" || name == "clogOriginIDType")
        return true;
    return false;
}

CiscoSyslogMib::Cloghistory::Cloghistory()
    :
    cloghistmsgsflushed{YType::uint32, "clogHistMsgsFlushed"},
    cloghisttablemaxlength{YType::int32, "clogHistTableMaxLength"}
{
    yang_name = "clogHistory"; yang_parent_name = "CISCO-SYSLOG-MIB";
}

CiscoSyslogMib::Cloghistory::~Cloghistory()
{
}

bool CiscoSyslogMib::Cloghistory::has_data() const
{
    return cloghistmsgsflushed.is_set
	|| cloghisttablemaxlength.is_set;
}

bool CiscoSyslogMib::Cloghistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cloghistmsgsflushed.yfilter)
	|| ydk::is_set(cloghisttablemaxlength.yfilter);
}

std::string CiscoSyslogMib::Cloghistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clogHistory";

    return path_buffer.str();

}

const EntityPath CiscoSyslogMib::Cloghistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SYSLOG-MIB:CISCO-SYSLOG-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cloghistmsgsflushed.is_set || is_set(cloghistmsgsflushed.yfilter)) leaf_name_data.push_back(cloghistmsgsflushed.get_name_leafdata());
    if (cloghisttablemaxlength.is_set || is_set(cloghisttablemaxlength.yfilter)) leaf_name_data.push_back(cloghisttablemaxlength.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSyslogMib::Cloghistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSyslogMib::Cloghistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSyslogMib::Cloghistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clogHistMsgsFlushed")
    {
        cloghistmsgsflushed = value;
        cloghistmsgsflushed.value_namespace = name_space;
        cloghistmsgsflushed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogHistTableMaxLength")
    {
        cloghisttablemaxlength = value;
        cloghisttablemaxlength.value_namespace = name_space;
        cloghisttablemaxlength.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSyslogMib::Cloghistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clogHistMsgsFlushed")
    {
        cloghistmsgsflushed.yfilter = yfilter;
    }
    if(value_path == "clogHistTableMaxLength")
    {
        cloghisttablemaxlength.yfilter = yfilter;
    }
}

bool CiscoSyslogMib::Cloghistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clogHistMsgsFlushed" || name == "clogHistTableMaxLength")
        return true;
    return false;
}

CiscoSyslogMib::Clogserver::Clogserver()
    :
    clogmaxservers{YType::uint32, "clogMaxServers"}
{
    yang_name = "clogServer"; yang_parent_name = "CISCO-SYSLOG-MIB";
}

CiscoSyslogMib::Clogserver::~Clogserver()
{
}

bool CiscoSyslogMib::Clogserver::has_data() const
{
    return clogmaxservers.is_set;
}

bool CiscoSyslogMib::Clogserver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clogmaxservers.yfilter);
}

std::string CiscoSyslogMib::Clogserver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clogServer";

    return path_buffer.str();

}

const EntityPath CiscoSyslogMib::Clogserver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SYSLOG-MIB:CISCO-SYSLOG-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clogmaxservers.is_set || is_set(clogmaxservers.yfilter)) leaf_name_data.push_back(clogmaxservers.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSyslogMib::Clogserver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSyslogMib::Clogserver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSyslogMib::Clogserver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clogMaxServers")
    {
        clogmaxservers = value;
        clogmaxservers.value_namespace = name_space;
        clogmaxservers.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSyslogMib::Clogserver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clogMaxServers")
    {
        clogmaxservers.yfilter = yfilter;
    }
}

bool CiscoSyslogMib::Clogserver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clogMaxServers")
        return true;
    return false;
}

CiscoSyslogMib::Cloghistorytable::Cloghistorytable()
{
    yang_name = "clogHistoryTable"; yang_parent_name = "CISCO-SYSLOG-MIB";
}

CiscoSyslogMib::Cloghistorytable::~Cloghistorytable()
{
}

bool CiscoSyslogMib::Cloghistorytable::has_data() const
{
    for (std::size_t index=0; index<cloghistoryentry.size(); index++)
    {
        if(cloghistoryentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSyslogMib::Cloghistorytable::has_operation() const
{
    for (std::size_t index=0; index<cloghistoryentry.size(); index++)
    {
        if(cloghistoryentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSyslogMib::Cloghistorytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clogHistoryTable";

    return path_buffer.str();

}

const EntityPath CiscoSyslogMib::Cloghistorytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SYSLOG-MIB:CISCO-SYSLOG-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSyslogMib::Cloghistorytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clogHistoryEntry")
    {
        for(auto const & c : cloghistoryentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSyslogMib::Cloghistorytable::Cloghistoryentry>();
        c->parent = this;
        cloghistoryentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSyslogMib::Cloghistorytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cloghistoryentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSyslogMib::Cloghistorytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSyslogMib::Cloghistorytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSyslogMib::Cloghistorytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clogHistoryEntry")
        return true;
    return false;
}

CiscoSyslogMib::Cloghistorytable::Cloghistoryentry::Cloghistoryentry()
    :
    cloghistindex{YType::int32, "clogHistIndex"},
    cloghistfacility{YType::str, "clogHistFacility"},
    cloghistmsgname{YType::str, "clogHistMsgName"},
    cloghistmsgtext{YType::str, "clogHistMsgText"},
    cloghistseverity{YType::enumeration, "clogHistSeverity"},
    cloghisttimestamp{YType::uint32, "clogHistTimestamp"}
{
    yang_name = "clogHistoryEntry"; yang_parent_name = "clogHistoryTable";
}

CiscoSyslogMib::Cloghistorytable::Cloghistoryentry::~Cloghistoryentry()
{
}

bool CiscoSyslogMib::Cloghistorytable::Cloghistoryentry::has_data() const
{
    return cloghistindex.is_set
	|| cloghistfacility.is_set
	|| cloghistmsgname.is_set
	|| cloghistmsgtext.is_set
	|| cloghistseverity.is_set
	|| cloghisttimestamp.is_set;
}

bool CiscoSyslogMib::Cloghistorytable::Cloghistoryentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cloghistindex.yfilter)
	|| ydk::is_set(cloghistfacility.yfilter)
	|| ydk::is_set(cloghistmsgname.yfilter)
	|| ydk::is_set(cloghistmsgtext.yfilter)
	|| ydk::is_set(cloghistseverity.yfilter)
	|| ydk::is_set(cloghisttimestamp.yfilter);
}

std::string CiscoSyslogMib::Cloghistorytable::Cloghistoryentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clogHistoryEntry" <<"[clogHistIndex='" <<cloghistindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSyslogMib::Cloghistorytable::Cloghistoryentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SYSLOG-MIB:CISCO-SYSLOG-MIB/clogHistoryTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cloghistindex.is_set || is_set(cloghistindex.yfilter)) leaf_name_data.push_back(cloghistindex.get_name_leafdata());
    if (cloghistfacility.is_set || is_set(cloghistfacility.yfilter)) leaf_name_data.push_back(cloghistfacility.get_name_leafdata());
    if (cloghistmsgname.is_set || is_set(cloghistmsgname.yfilter)) leaf_name_data.push_back(cloghistmsgname.get_name_leafdata());
    if (cloghistmsgtext.is_set || is_set(cloghistmsgtext.yfilter)) leaf_name_data.push_back(cloghistmsgtext.get_name_leafdata());
    if (cloghistseverity.is_set || is_set(cloghistseverity.yfilter)) leaf_name_data.push_back(cloghistseverity.get_name_leafdata());
    if (cloghisttimestamp.is_set || is_set(cloghisttimestamp.yfilter)) leaf_name_data.push_back(cloghisttimestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSyslogMib::Cloghistorytable::Cloghistoryentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSyslogMib::Cloghistorytable::Cloghistoryentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSyslogMib::Cloghistorytable::Cloghistoryentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "clogHistSeverity")
    {
        cloghistseverity = value;
        cloghistseverity.value_namespace = name_space;
        cloghistseverity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clogHistTimestamp")
    {
        cloghisttimestamp = value;
        cloghisttimestamp.value_namespace = name_space;
        cloghisttimestamp.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoSyslogMib::Cloghistorytable::Cloghistoryentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clogHistIndex")
    {
        cloghistindex.yfilter = yfilter;
    }
    if(value_path == "clogHistFacility")
    {
        cloghistfacility.yfilter = yfilter;
    }
    if(value_path == "clogHistMsgName")
    {
        cloghistmsgname.yfilter = yfilter;
    }
    if(value_path == "clogHistMsgText")
    {
        cloghistmsgtext.yfilter = yfilter;
    }
    if(value_path == "clogHistSeverity")
    {
        cloghistseverity.yfilter = yfilter;
    }
    if(value_path == "clogHistTimestamp")
    {
        cloghisttimestamp.yfilter = yfilter;
    }
}

bool CiscoSyslogMib::Cloghistorytable::Cloghistoryentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clogHistIndex" || name == "clogHistFacility" || name == "clogHistMsgName" || name == "clogHistMsgText" || name == "clogHistSeverity" || name == "clogHistTimestamp")
        return true;
    return false;
}

CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigtable()
{
    yang_name = "clogServerConfigTable"; yang_parent_name = "CISCO-SYSLOG-MIB";
}

CiscoSyslogMib::Clogserverconfigtable::~Clogserverconfigtable()
{
}

bool CiscoSyslogMib::Clogserverconfigtable::has_data() const
{
    for (std::size_t index=0; index<clogserverconfigentry.size(); index++)
    {
        if(clogserverconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSyslogMib::Clogserverconfigtable::has_operation() const
{
    for (std::size_t index=0; index<clogserverconfigentry.size(); index++)
    {
        if(clogserverconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoSyslogMib::Clogserverconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clogServerConfigTable";

    return path_buffer.str();

}

const EntityPath CiscoSyslogMib::Clogserverconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SYSLOG-MIB:CISCO-SYSLOG-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSyslogMib::Clogserverconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clogServerConfigEntry")
    {
        for(auto const & c : clogserverconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry>();
        c->parent = this;
        clogserverconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSyslogMib::Clogserverconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clogserverconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSyslogMib::Clogserverconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoSyslogMib::Clogserverconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoSyslogMib::Clogserverconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clogServerConfigEntry")
        return true;
    return false;
}

CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry::Clogserverconfigentry()
    :
    clogserveraddrtype{YType::enumeration, "clogServerAddrType"},
    clogserveraddr{YType::str, "clogServerAddr"},
    clogserverstatus{YType::enumeration, "clogServerStatus"}
{
    yang_name = "clogServerConfigEntry"; yang_parent_name = "clogServerConfigTable";
}

CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry::~Clogserverconfigentry()
{
}

bool CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry::has_data() const
{
    return clogserveraddrtype.is_set
	|| clogserveraddr.is_set
	|| clogserverstatus.is_set;
}

bool CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clogserveraddrtype.yfilter)
	|| ydk::is_set(clogserveraddr.yfilter)
	|| ydk::is_set(clogserverstatus.yfilter);
}

std::string CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clogServerConfigEntry" <<"[clogServerAddrType='" <<clogserveraddrtype <<"']" <<"[clogServerAddr='" <<clogserveraddr <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SYSLOG-MIB:CISCO-SYSLOG-MIB/clogServerConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clogserveraddrtype.is_set || is_set(clogserveraddrtype.yfilter)) leaf_name_data.push_back(clogserveraddrtype.get_name_leafdata());
    if (clogserveraddr.is_set || is_set(clogserveraddr.yfilter)) leaf_name_data.push_back(clogserveraddr.get_name_leafdata());
    if (clogserverstatus.is_set || is_set(clogserverstatus.yfilter)) leaf_name_data.push_back(clogserverstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clogServerAddrType" || name == "clogServerAddr" || name == "clogServerStatus")
        return true;
    return false;
}

const Enum::YLeaf Syslogseverity::emergency {1, "emergency"};
const Enum::YLeaf Syslogseverity::alert {2, "alert"};
const Enum::YLeaf Syslogseverity::critical {3, "critical"};
const Enum::YLeaf Syslogseverity::error {4, "error"};
const Enum::YLeaf Syslogseverity::warning {5, "warning"};
const Enum::YLeaf Syslogseverity::notice {6, "notice"};
const Enum::YLeaf Syslogseverity::info {7, "info"};
const Enum::YLeaf Syslogseverity::debug {8, "debug"};

const Enum::YLeaf CiscoSyslogMib::Clogbasic::Clogoriginidtype::none {1, "none"};
const Enum::YLeaf CiscoSyslogMib::Clogbasic::Clogoriginidtype::other {2, "other"};
const Enum::YLeaf CiscoSyslogMib::Clogbasic::Clogoriginidtype::hostName {3, "hostName"};
const Enum::YLeaf CiscoSyslogMib::Clogbasic::Clogoriginidtype::ipv4Address {4, "ipv4Address"};
const Enum::YLeaf CiscoSyslogMib::Clogbasic::Clogoriginidtype::contextName {5, "contextName"};
const Enum::YLeaf CiscoSyslogMib::Clogbasic::Clogoriginidtype::userDefined {6, "userDefined"};


}
}

