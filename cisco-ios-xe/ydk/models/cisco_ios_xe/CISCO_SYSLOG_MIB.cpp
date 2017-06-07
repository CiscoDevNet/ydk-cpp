
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SYSLOG_MIB.hpp"

namespace ydk {
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
    return is_set(operation)
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

void CiscoSyslogMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(clogmaxseverity.operation)
	|| is_set(clogmsgdrops.operation)
	|| is_set(clogmsgignores.operation)
	|| is_set(clognotificationsenabled.operation)
	|| is_set(clognotificationssent.operation)
	|| is_set(clogoriginid.operation)
	|| is_set(clogoriginidtype.operation);
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

    if (clogmaxseverity.is_set || is_set(clogmaxseverity.operation)) leaf_name_data.push_back(clogmaxseverity.get_name_leafdata());
    if (clogmsgdrops.is_set || is_set(clogmsgdrops.operation)) leaf_name_data.push_back(clogmsgdrops.get_name_leafdata());
    if (clogmsgignores.is_set || is_set(clogmsgignores.operation)) leaf_name_data.push_back(clogmsgignores.get_name_leafdata());
    if (clognotificationsenabled.is_set || is_set(clognotificationsenabled.operation)) leaf_name_data.push_back(clognotificationsenabled.get_name_leafdata());
    if (clognotificationssent.is_set || is_set(clognotificationssent.operation)) leaf_name_data.push_back(clognotificationssent.get_name_leafdata());
    if (clogoriginid.is_set || is_set(clogoriginid.operation)) leaf_name_data.push_back(clogoriginid.get_name_leafdata());
    if (clogoriginidtype.is_set || is_set(clogoriginidtype.operation)) leaf_name_data.push_back(clogoriginidtype.get_name_leafdata());


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

void CiscoSyslogMib::Clogbasic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clogMaxSeverity")
    {
        clogmaxseverity = value;
    }
    if(value_path == "clogMsgDrops")
    {
        clogmsgdrops = value;
    }
    if(value_path == "clogMsgIgnores")
    {
        clogmsgignores = value;
    }
    if(value_path == "clogNotificationsEnabled")
    {
        clognotificationsenabled = value;
    }
    if(value_path == "clogNotificationsSent")
    {
        clognotificationssent = value;
    }
    if(value_path == "clogOriginID")
    {
        clogoriginid = value;
    }
    if(value_path == "clogOriginIDType")
    {
        clogoriginidtype = value;
    }
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
    return is_set(operation)
	|| is_set(cloghistmsgsflushed.operation)
	|| is_set(cloghisttablemaxlength.operation);
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

    if (cloghistmsgsflushed.is_set || is_set(cloghistmsgsflushed.operation)) leaf_name_data.push_back(cloghistmsgsflushed.get_name_leafdata());
    if (cloghisttablemaxlength.is_set || is_set(cloghisttablemaxlength.operation)) leaf_name_data.push_back(cloghisttablemaxlength.get_name_leafdata());


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

void CiscoSyslogMib::Cloghistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clogHistMsgsFlushed")
    {
        cloghistmsgsflushed = value;
    }
    if(value_path == "clogHistTableMaxLength")
    {
        cloghisttablemaxlength = value;
    }
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
    return is_set(operation)
	|| is_set(clogmaxservers.operation);
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

    if (clogmaxservers.is_set || is_set(clogmaxservers.operation)) leaf_name_data.push_back(clogmaxservers.get_name_leafdata());


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

void CiscoSyslogMib::Clogserver::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clogMaxServers")
    {
        clogmaxservers = value;
    }
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
    return is_set(operation);
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

void CiscoSyslogMib::Cloghistorytable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(cloghistindex.operation)
	|| is_set(cloghistfacility.operation)
	|| is_set(cloghistmsgname.operation)
	|| is_set(cloghistmsgtext.operation)
	|| is_set(cloghistseverity.operation)
	|| is_set(cloghisttimestamp.operation);
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

    if (cloghistindex.is_set || is_set(cloghistindex.operation)) leaf_name_data.push_back(cloghistindex.get_name_leafdata());
    if (cloghistfacility.is_set || is_set(cloghistfacility.operation)) leaf_name_data.push_back(cloghistfacility.get_name_leafdata());
    if (cloghistmsgname.is_set || is_set(cloghistmsgname.operation)) leaf_name_data.push_back(cloghistmsgname.get_name_leafdata());
    if (cloghistmsgtext.is_set || is_set(cloghistmsgtext.operation)) leaf_name_data.push_back(cloghistmsgtext.get_name_leafdata());
    if (cloghistseverity.is_set || is_set(cloghistseverity.operation)) leaf_name_data.push_back(cloghistseverity.get_name_leafdata());
    if (cloghisttimestamp.is_set || is_set(cloghisttimestamp.operation)) leaf_name_data.push_back(cloghisttimestamp.get_name_leafdata());


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

void CiscoSyslogMib::Cloghistorytable::Cloghistoryentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clogHistIndex")
    {
        cloghistindex = value;
    }
    if(value_path == "clogHistFacility")
    {
        cloghistfacility = value;
    }
    if(value_path == "clogHistMsgName")
    {
        cloghistmsgname = value;
    }
    if(value_path == "clogHistMsgText")
    {
        cloghistmsgtext = value;
    }
    if(value_path == "clogHistSeverity")
    {
        cloghistseverity = value;
    }
    if(value_path == "clogHistTimestamp")
    {
        cloghisttimestamp = value;
    }
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
    return is_set(operation);
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

void CiscoSyslogMib::Clogserverconfigtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(clogserveraddrtype.operation)
	|| is_set(clogserveraddr.operation)
	|| is_set(clogserverstatus.operation);
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

    if (clogserveraddrtype.is_set || is_set(clogserveraddrtype.operation)) leaf_name_data.push_back(clogserveraddrtype.get_name_leafdata());
    if (clogserveraddr.is_set || is_set(clogserveraddr.operation)) leaf_name_data.push_back(clogserveraddr.get_name_leafdata());
    if (clogserverstatus.is_set || is_set(clogserverstatus.operation)) leaf_name_data.push_back(clogserverstatus.get_name_leafdata());


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

void CiscoSyslogMib::Clogserverconfigtable::Clogserverconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clogServerAddrType")
    {
        clogserveraddrtype = value;
    }
    if(value_path == "clogServerAddr")
    {
        clogserveraddr = value;
    }
    if(value_path == "clogServerStatus")
    {
        clogserverstatus = value;
    }
}

const Enum::YLeaf SyslogseverityEnum::emergency {1, "emergency"};
const Enum::YLeaf SyslogseverityEnum::alert {2, "alert"};
const Enum::YLeaf SyslogseverityEnum::critical {3, "critical"};
const Enum::YLeaf SyslogseverityEnum::error {4, "error"};
const Enum::YLeaf SyslogseverityEnum::warning {5, "warning"};
const Enum::YLeaf SyslogseverityEnum::notice {6, "notice"};
const Enum::YLeaf SyslogseverityEnum::info {7, "info"};
const Enum::YLeaf SyslogseverityEnum::debug {8, "debug"};

const Enum::YLeaf CiscoSyslogMib::Clogbasic::ClogoriginidtypeEnum::none {1, "none"};
const Enum::YLeaf CiscoSyslogMib::Clogbasic::ClogoriginidtypeEnum::other {2, "other"};
const Enum::YLeaf CiscoSyslogMib::Clogbasic::ClogoriginidtypeEnum::hostName {3, "hostName"};
const Enum::YLeaf CiscoSyslogMib::Clogbasic::ClogoriginidtypeEnum::ipv4Address {4, "ipv4Address"};
const Enum::YLeaf CiscoSyslogMib::Clogbasic::ClogoriginidtypeEnum::contextName {5, "contextName"};
const Enum::YLeaf CiscoSyslogMib::Clogbasic::ClogoriginidtypeEnum::userDefined {6, "userDefined"};


}
}

