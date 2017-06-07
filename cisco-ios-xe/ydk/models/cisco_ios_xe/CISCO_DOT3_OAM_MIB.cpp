
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_DOT3_OAM_MIB.hpp"

namespace ydk {
namespace CISCO_DOT3_OAM_MIB {

CiscoDot3OamMib::CiscoDot3OamMib()
    :
    cdot3oameventconfigtable(std::make_shared<CiscoDot3OamMib::Cdot3Oameventconfigtable>())
	,cdot3oameventlogtable(std::make_shared<CiscoDot3OamMib::Cdot3Oameventlogtable>())
	,cdot3oamloopbacktable(std::make_shared<CiscoDot3OamMib::Cdot3Oamloopbacktable>())
	,cdot3oampeertable(std::make_shared<CiscoDot3OamMib::Cdot3Oampeertable>())
	,cdot3oamstatstable(std::make_shared<CiscoDot3OamMib::Cdot3Oamstatstable>())
	,cdot3oamtable(std::make_shared<CiscoDot3OamMib::Cdot3Oamtable>())
{
    cdot3oameventconfigtable->parent = this;

    cdot3oameventlogtable->parent = this;

    cdot3oamloopbacktable->parent = this;

    cdot3oampeertable->parent = this;

    cdot3oamstatstable->parent = this;

    cdot3oamtable->parent = this;

    yang_name = "CISCO-DOT3-OAM-MIB"; yang_parent_name = "CISCO-DOT3-OAM-MIB";
}

CiscoDot3OamMib::~CiscoDot3OamMib()
{
}

bool CiscoDot3OamMib::has_data() const
{
    return (cdot3oameventconfigtable !=  nullptr && cdot3oameventconfigtable->has_data())
	|| (cdot3oameventlogtable !=  nullptr && cdot3oameventlogtable->has_data())
	|| (cdot3oamloopbacktable !=  nullptr && cdot3oamloopbacktable->has_data())
	|| (cdot3oampeertable !=  nullptr && cdot3oampeertable->has_data())
	|| (cdot3oamstatstable !=  nullptr && cdot3oamstatstable->has_data())
	|| (cdot3oamtable !=  nullptr && cdot3oamtable->has_data());
}

bool CiscoDot3OamMib::has_operation() const
{
    return is_set(operation)
	|| (cdot3oameventconfigtable !=  nullptr && cdot3oameventconfigtable->has_operation())
	|| (cdot3oameventlogtable !=  nullptr && cdot3oameventlogtable->has_operation())
	|| (cdot3oamloopbacktable !=  nullptr && cdot3oamloopbacktable->has_operation())
	|| (cdot3oampeertable !=  nullptr && cdot3oampeertable->has_operation())
	|| (cdot3oamstatstable !=  nullptr && cdot3oamstatstable->has_operation())
	|| (cdot3oamtable !=  nullptr && cdot3oamtable->has_operation());
}

std::string CiscoDot3OamMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB";

    return path_buffer.str();

}

const EntityPath CiscoDot3OamMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoDot3OamMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdot3OamEventConfigTable")
    {
        if(cdot3oameventconfigtable == nullptr)
        {
            cdot3oameventconfigtable = std::make_shared<CiscoDot3OamMib::Cdot3Oameventconfigtable>();
        }
        return cdot3oameventconfigtable;
    }

    if(child_yang_name == "cdot3OamEventLogTable")
    {
        if(cdot3oameventlogtable == nullptr)
        {
            cdot3oameventlogtable = std::make_shared<CiscoDot3OamMib::Cdot3Oameventlogtable>();
        }
        return cdot3oameventlogtable;
    }

    if(child_yang_name == "cdot3OamLoopbackTable")
    {
        if(cdot3oamloopbacktable == nullptr)
        {
            cdot3oamloopbacktable = std::make_shared<CiscoDot3OamMib::Cdot3Oamloopbacktable>();
        }
        return cdot3oamloopbacktable;
    }

    if(child_yang_name == "cdot3OamPeerTable")
    {
        if(cdot3oampeertable == nullptr)
        {
            cdot3oampeertable = std::make_shared<CiscoDot3OamMib::Cdot3Oampeertable>();
        }
        return cdot3oampeertable;
    }

    if(child_yang_name == "cdot3OamStatsTable")
    {
        if(cdot3oamstatstable == nullptr)
        {
            cdot3oamstatstable = std::make_shared<CiscoDot3OamMib::Cdot3Oamstatstable>();
        }
        return cdot3oamstatstable;
    }

    if(child_yang_name == "cdot3OamTable")
    {
        if(cdot3oamtable == nullptr)
        {
            cdot3oamtable = std::make_shared<CiscoDot3OamMib::Cdot3Oamtable>();
        }
        return cdot3oamtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDot3OamMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cdot3oameventconfigtable != nullptr)
    {
        children["cdot3OamEventConfigTable"] = cdot3oameventconfigtable;
    }

    if(cdot3oameventlogtable != nullptr)
    {
        children["cdot3OamEventLogTable"] = cdot3oameventlogtable;
    }

    if(cdot3oamloopbacktable != nullptr)
    {
        children["cdot3OamLoopbackTable"] = cdot3oamloopbacktable;
    }

    if(cdot3oampeertable != nullptr)
    {
        children["cdot3OamPeerTable"] = cdot3oampeertable;
    }

    if(cdot3oamstatstable != nullptr)
    {
        children["cdot3OamStatsTable"] = cdot3oamstatstable;
    }

    if(cdot3oamtable != nullptr)
    {
        children["cdot3OamTable"] = cdot3oamtable;
    }

    return children;
}

void CiscoDot3OamMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoDot3OamMib::clone_ptr() const
{
    return std::make_shared<CiscoDot3OamMib>();
}

std::string CiscoDot3OamMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoDot3OamMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoDot3OamMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamtable()
{
    yang_name = "cdot3OamTable"; yang_parent_name = "CISCO-DOT3-OAM-MIB";
}

CiscoDot3OamMib::Cdot3Oamtable::~Cdot3Oamtable()
{
}

bool CiscoDot3OamMib::Cdot3Oamtable::has_data() const
{
    for (std::size_t index=0; index<cdot3oamentry.size(); index++)
    {
        if(cdot3oamentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoDot3OamMib::Cdot3Oamtable::has_operation() const
{
    for (std::size_t index=0; index<cdot3oamentry.size(); index++)
    {
        if(cdot3oamentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoDot3OamMib::Cdot3Oamtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamTable";

    return path_buffer.str();

}

const EntityPath CiscoDot3OamMib::Cdot3Oamtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDot3OamMib::Cdot3Oamtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdot3OamEntry")
    {
        for(auto const & c : cdot3oamentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry>();
        c->parent = this;
        cdot3oamentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDot3OamMib::Cdot3Oamtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdot3oamentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoDot3OamMib::Cdot3Oamtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oamentry()
    :
    ifindex{YType::str, "ifIndex"},
    cdot3oamadminstate{YType::enumeration, "cdot3OamAdminState"},
    cdot3oamconfigrevision{YType::uint32, "cdot3OamConfigRevision"},
    cdot3oamfunctionssupported{YType::bits, "cdot3OamFunctionsSupported"},
    cdot3oammaxoampdusize{YType::uint32, "cdot3OamMaxOamPduSize"},
    cdot3oammode{YType::enumeration, "cdot3OamMode"},
    cdot3oamoperstatus{YType::enumeration, "cdot3OamOperStatus"}
{
    yang_name = "cdot3OamEntry"; yang_parent_name = "cdot3OamTable";
}

CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::~Cdot3Oamentry()
{
}

bool CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::has_data() const
{
    return ifindex.is_set
	|| cdot3oamadminstate.is_set
	|| cdot3oamconfigrevision.is_set
	|| cdot3oamfunctionssupported.is_set
	|| cdot3oammaxoampdusize.is_set
	|| cdot3oammode.is_set
	|| cdot3oamoperstatus.is_set;
}

bool CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cdot3oamadminstate.operation)
	|| is_set(cdot3oamconfigrevision.operation)
	|| is_set(cdot3oamfunctionssupported.operation)
	|| is_set(cdot3oammaxoampdusize.operation)
	|| is_set(cdot3oammode.operation)
	|| is_set(cdot3oamoperstatus.operation);
}

std::string CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/cdot3OamTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oamadminstate.is_set || is_set(cdot3oamadminstate.operation)) leaf_name_data.push_back(cdot3oamadminstate.get_name_leafdata());
    if (cdot3oamconfigrevision.is_set || is_set(cdot3oamconfigrevision.operation)) leaf_name_data.push_back(cdot3oamconfigrevision.get_name_leafdata());
    if (cdot3oamfunctionssupported.is_set || is_set(cdot3oamfunctionssupported.operation)) leaf_name_data.push_back(cdot3oamfunctionssupported.get_name_leafdata());
    if (cdot3oammaxoampdusize.is_set || is_set(cdot3oammaxoampdusize.operation)) leaf_name_data.push_back(cdot3oammaxoampdusize.get_name_leafdata());
    if (cdot3oammode.is_set || is_set(cdot3oammode.operation)) leaf_name_data.push_back(cdot3oammode.get_name_leafdata());
    if (cdot3oamoperstatus.is_set || is_set(cdot3oamoperstatus.operation)) leaf_name_data.push_back(cdot3oamoperstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cdot3OamAdminState")
    {
        cdot3oamadminstate = value;
    }
    if(value_path == "cdot3OamConfigRevision")
    {
        cdot3oamconfigrevision = value;
    }
    if(value_path == "cdot3OamFunctionsSupported")
    {
        cdot3oamfunctionssupported[value] = true;
    }
    if(value_path == "cdot3OamMaxOamPduSize")
    {
        cdot3oammaxoampdusize = value;
    }
    if(value_path == "cdot3OamMode")
    {
        cdot3oammode = value;
    }
    if(value_path == "cdot3OamOperStatus")
    {
        cdot3oamoperstatus = value;
    }
}

CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeertable()
{
    yang_name = "cdot3OamPeerTable"; yang_parent_name = "CISCO-DOT3-OAM-MIB";
}

CiscoDot3OamMib::Cdot3Oampeertable::~Cdot3Oampeertable()
{
}

bool CiscoDot3OamMib::Cdot3Oampeertable::has_data() const
{
    for (std::size_t index=0; index<cdot3oampeerentry.size(); index++)
    {
        if(cdot3oampeerentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoDot3OamMib::Cdot3Oampeertable::has_operation() const
{
    for (std::size_t index=0; index<cdot3oampeerentry.size(); index++)
    {
        if(cdot3oampeerentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoDot3OamMib::Cdot3Oampeertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamPeerTable";

    return path_buffer.str();

}

const EntityPath CiscoDot3OamMib::Cdot3Oampeertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDot3OamMib::Cdot3Oampeertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdot3OamPeerEntry")
    {
        for(auto const & c : cdot3oampeerentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry>();
        c->parent = this;
        cdot3oampeerentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDot3OamMib::Cdot3Oampeertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdot3oampeerentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoDot3OamMib::Cdot3Oampeertable::set_value(const std::string & value_path, std::string value)
{
}

CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::Cdot3Oampeerentry()
    :
    ifindex{YType::str, "ifIndex"},
    cdot3oampeerconfigrevision{YType::uint32, "cdot3OamPeerConfigRevision"},
    cdot3oampeerfunctionssupported{YType::bits, "cdot3OamPeerFunctionsSupported"},
    cdot3oampeermacaddress{YType::str, "cdot3OamPeerMacAddress"},
    cdot3oampeermaxoampdusize{YType::uint32, "cdot3OamPeerMaxOamPduSize"},
    cdot3oampeermode{YType::enumeration, "cdot3OamPeerMode"},
    cdot3oampeervendorinfo{YType::uint32, "cdot3OamPeerVendorInfo"},
    cdot3oampeervendoroui{YType::str, "cdot3OamPeerVendorOui"}
{
    yang_name = "cdot3OamPeerEntry"; yang_parent_name = "cdot3OamPeerTable";
}

CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::~Cdot3Oampeerentry()
{
}

bool CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::has_data() const
{
    return ifindex.is_set
	|| cdot3oampeerconfigrevision.is_set
	|| cdot3oampeerfunctionssupported.is_set
	|| cdot3oampeermacaddress.is_set
	|| cdot3oampeermaxoampdusize.is_set
	|| cdot3oampeermode.is_set
	|| cdot3oampeervendorinfo.is_set
	|| cdot3oampeervendoroui.is_set;
}

bool CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cdot3oampeerconfigrevision.operation)
	|| is_set(cdot3oampeerfunctionssupported.operation)
	|| is_set(cdot3oampeermacaddress.operation)
	|| is_set(cdot3oampeermaxoampdusize.operation)
	|| is_set(cdot3oampeermode.operation)
	|| is_set(cdot3oampeervendorinfo.operation)
	|| is_set(cdot3oampeervendoroui.operation);
}

std::string CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamPeerEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/cdot3OamPeerTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oampeerconfigrevision.is_set || is_set(cdot3oampeerconfigrevision.operation)) leaf_name_data.push_back(cdot3oampeerconfigrevision.get_name_leafdata());
    if (cdot3oampeerfunctionssupported.is_set || is_set(cdot3oampeerfunctionssupported.operation)) leaf_name_data.push_back(cdot3oampeerfunctionssupported.get_name_leafdata());
    if (cdot3oampeermacaddress.is_set || is_set(cdot3oampeermacaddress.operation)) leaf_name_data.push_back(cdot3oampeermacaddress.get_name_leafdata());
    if (cdot3oampeermaxoampdusize.is_set || is_set(cdot3oampeermaxoampdusize.operation)) leaf_name_data.push_back(cdot3oampeermaxoampdusize.get_name_leafdata());
    if (cdot3oampeermode.is_set || is_set(cdot3oampeermode.operation)) leaf_name_data.push_back(cdot3oampeermode.get_name_leafdata());
    if (cdot3oampeervendorinfo.is_set || is_set(cdot3oampeervendorinfo.operation)) leaf_name_data.push_back(cdot3oampeervendorinfo.get_name_leafdata());
    if (cdot3oampeervendoroui.is_set || is_set(cdot3oampeervendoroui.operation)) leaf_name_data.push_back(cdot3oampeervendoroui.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cdot3OamPeerConfigRevision")
    {
        cdot3oampeerconfigrevision = value;
    }
    if(value_path == "cdot3OamPeerFunctionsSupported")
    {
        cdot3oampeerfunctionssupported[value] = true;
    }
    if(value_path == "cdot3OamPeerMacAddress")
    {
        cdot3oampeermacaddress = value;
    }
    if(value_path == "cdot3OamPeerMaxOamPduSize")
    {
        cdot3oampeermaxoampdusize = value;
    }
    if(value_path == "cdot3OamPeerMode")
    {
        cdot3oampeermode = value;
    }
    if(value_path == "cdot3OamPeerVendorInfo")
    {
        cdot3oampeervendorinfo = value;
    }
    if(value_path == "cdot3OamPeerVendorOui")
    {
        cdot3oampeervendoroui = value;
    }
}

CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbacktable()
{
    yang_name = "cdot3OamLoopbackTable"; yang_parent_name = "CISCO-DOT3-OAM-MIB";
}

CiscoDot3OamMib::Cdot3Oamloopbacktable::~Cdot3Oamloopbacktable()
{
}

bool CiscoDot3OamMib::Cdot3Oamloopbacktable::has_data() const
{
    for (std::size_t index=0; index<cdot3oamloopbackentry.size(); index++)
    {
        if(cdot3oamloopbackentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoDot3OamMib::Cdot3Oamloopbacktable::has_operation() const
{
    for (std::size_t index=0; index<cdot3oamloopbackentry.size(); index++)
    {
        if(cdot3oamloopbackentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoDot3OamMib::Cdot3Oamloopbacktable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamLoopbackTable";

    return path_buffer.str();

}

const EntityPath CiscoDot3OamMib::Cdot3Oamloopbacktable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDot3OamMib::Cdot3Oamloopbacktable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdot3OamLoopbackEntry")
    {
        for(auto const & c : cdot3oamloopbackentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry>();
        c->parent = this;
        cdot3oamloopbackentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDot3OamMib::Cdot3Oamloopbacktable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdot3oamloopbackentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoDot3OamMib::Cdot3Oamloopbacktable::set_value(const std::string & value_path, std::string value)
{
}

CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3Oamloopbackentry()
    :
    ifindex{YType::str, "ifIndex"},
    cdot3oamloopbackignorerx{YType::enumeration, "cdot3OamLoopbackIgnoreRx"},
    cdot3oamloopbackstatus{YType::enumeration, "cdot3OamLoopbackStatus"}
{
    yang_name = "cdot3OamLoopbackEntry"; yang_parent_name = "cdot3OamLoopbackTable";
}

CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::~Cdot3Oamloopbackentry()
{
}

bool CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::has_data() const
{
    return ifindex.is_set
	|| cdot3oamloopbackignorerx.is_set
	|| cdot3oamloopbackstatus.is_set;
}

bool CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cdot3oamloopbackignorerx.operation)
	|| is_set(cdot3oamloopbackstatus.operation);
}

std::string CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamLoopbackEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/cdot3OamLoopbackTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oamloopbackignorerx.is_set || is_set(cdot3oamloopbackignorerx.operation)) leaf_name_data.push_back(cdot3oamloopbackignorerx.get_name_leafdata());
    if (cdot3oamloopbackstatus.is_set || is_set(cdot3oamloopbackstatus.operation)) leaf_name_data.push_back(cdot3oamloopbackstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cdot3OamLoopbackIgnoreRx")
    {
        cdot3oamloopbackignorerx = value;
    }
    if(value_path == "cdot3OamLoopbackStatus")
    {
        cdot3oamloopbackstatus = value;
    }
}

CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatstable()
{
    yang_name = "cdot3OamStatsTable"; yang_parent_name = "CISCO-DOT3-OAM-MIB";
}

CiscoDot3OamMib::Cdot3Oamstatstable::~Cdot3Oamstatstable()
{
}

bool CiscoDot3OamMib::Cdot3Oamstatstable::has_data() const
{
    for (std::size_t index=0; index<cdot3oamstatsentry.size(); index++)
    {
        if(cdot3oamstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoDot3OamMib::Cdot3Oamstatstable::has_operation() const
{
    for (std::size_t index=0; index<cdot3oamstatsentry.size(); index++)
    {
        if(cdot3oamstatsentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoDot3OamMib::Cdot3Oamstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoDot3OamMib::Cdot3Oamstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDot3OamMib::Cdot3Oamstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdot3OamStatsEntry")
    {
        for(auto const & c : cdot3oamstatsentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatsentry>();
        c->parent = this;
        cdot3oamstatsentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDot3OamMib::Cdot3Oamstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdot3oamstatsentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoDot3OamMib::Cdot3Oamstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatsentry::Cdot3Oamstatsentry()
    :
    ifindex{YType::str, "ifIndex"},
    cdot3oamduplicateeventnotificationrx{YType::uint32, "cdot3OamDuplicateEventNotificationRx"},
    cdot3oamduplicateeventnotificationtx{YType::uint32, "cdot3OamDuplicateEventNotificationTx"},
    cdot3oamframeslostduetooam{YType::uint32, "cdot3OamFramesLostDueToOam"},
    cdot3oaminformationrx{YType::uint32, "cdot3OamInformationRx"},
    cdot3oaminformationtx{YType::uint32, "cdot3OamInformationTx"},
    cdot3oamloopbackcontrolrx{YType::uint32, "cdot3OamLoopbackControlRx"},
    cdot3oamloopbackcontroltx{YType::uint32, "cdot3OamLoopbackControlTx"},
    cdot3oamorgspecificrx{YType::uint32, "cdot3OamOrgSpecificRx"},
    cdot3oamorgspecifictx{YType::uint32, "cdot3OamOrgSpecificTx"},
    cdot3oamuniqueeventnotificationrx{YType::uint32, "cdot3OamUniqueEventNotificationRx"},
    cdot3oamuniqueeventnotificationtx{YType::uint32, "cdot3OamUniqueEventNotificationTx"},
    cdot3oamunsupportedcodesrx{YType::uint32, "cdot3OamUnsupportedCodesRx"},
    cdot3oamunsupportedcodestx{YType::uint32, "cdot3OamUnsupportedCodesTx"},
    cdot3oamvariablerequestrx{YType::uint32, "cdot3OamVariableRequestRx"},
    cdot3oamvariablerequesttx{YType::uint32, "cdot3OamVariableRequestTx"},
    cdot3oamvariableresponserx{YType::uint32, "cdot3OamVariableResponseRx"},
    cdot3oamvariableresponsetx{YType::uint32, "cdot3OamVariableResponseTx"}
{
    yang_name = "cdot3OamStatsEntry"; yang_parent_name = "cdot3OamStatsTable";
}

CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatsentry::~Cdot3Oamstatsentry()
{
}

bool CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatsentry::has_data() const
{
    return ifindex.is_set
	|| cdot3oamduplicateeventnotificationrx.is_set
	|| cdot3oamduplicateeventnotificationtx.is_set
	|| cdot3oamframeslostduetooam.is_set
	|| cdot3oaminformationrx.is_set
	|| cdot3oaminformationtx.is_set
	|| cdot3oamloopbackcontrolrx.is_set
	|| cdot3oamloopbackcontroltx.is_set
	|| cdot3oamorgspecificrx.is_set
	|| cdot3oamorgspecifictx.is_set
	|| cdot3oamuniqueeventnotificationrx.is_set
	|| cdot3oamuniqueeventnotificationtx.is_set
	|| cdot3oamunsupportedcodesrx.is_set
	|| cdot3oamunsupportedcodestx.is_set
	|| cdot3oamvariablerequestrx.is_set
	|| cdot3oamvariablerequesttx.is_set
	|| cdot3oamvariableresponserx.is_set
	|| cdot3oamvariableresponsetx.is_set;
}

bool CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cdot3oamduplicateeventnotificationrx.operation)
	|| is_set(cdot3oamduplicateeventnotificationtx.operation)
	|| is_set(cdot3oamframeslostduetooam.operation)
	|| is_set(cdot3oaminformationrx.operation)
	|| is_set(cdot3oaminformationtx.operation)
	|| is_set(cdot3oamloopbackcontrolrx.operation)
	|| is_set(cdot3oamloopbackcontroltx.operation)
	|| is_set(cdot3oamorgspecificrx.operation)
	|| is_set(cdot3oamorgspecifictx.operation)
	|| is_set(cdot3oamuniqueeventnotificationrx.operation)
	|| is_set(cdot3oamuniqueeventnotificationtx.operation)
	|| is_set(cdot3oamunsupportedcodesrx.operation)
	|| is_set(cdot3oamunsupportedcodestx.operation)
	|| is_set(cdot3oamvariablerequestrx.operation)
	|| is_set(cdot3oamvariablerequesttx.operation)
	|| is_set(cdot3oamvariableresponserx.operation)
	|| is_set(cdot3oamvariableresponsetx.operation);
}

std::string CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamStatsEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/cdot3OamStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oamduplicateeventnotificationrx.is_set || is_set(cdot3oamduplicateeventnotificationrx.operation)) leaf_name_data.push_back(cdot3oamduplicateeventnotificationrx.get_name_leafdata());
    if (cdot3oamduplicateeventnotificationtx.is_set || is_set(cdot3oamduplicateeventnotificationtx.operation)) leaf_name_data.push_back(cdot3oamduplicateeventnotificationtx.get_name_leafdata());
    if (cdot3oamframeslostduetooam.is_set || is_set(cdot3oamframeslostduetooam.operation)) leaf_name_data.push_back(cdot3oamframeslostduetooam.get_name_leafdata());
    if (cdot3oaminformationrx.is_set || is_set(cdot3oaminformationrx.operation)) leaf_name_data.push_back(cdot3oaminformationrx.get_name_leafdata());
    if (cdot3oaminformationtx.is_set || is_set(cdot3oaminformationtx.operation)) leaf_name_data.push_back(cdot3oaminformationtx.get_name_leafdata());
    if (cdot3oamloopbackcontrolrx.is_set || is_set(cdot3oamloopbackcontrolrx.operation)) leaf_name_data.push_back(cdot3oamloopbackcontrolrx.get_name_leafdata());
    if (cdot3oamloopbackcontroltx.is_set || is_set(cdot3oamloopbackcontroltx.operation)) leaf_name_data.push_back(cdot3oamloopbackcontroltx.get_name_leafdata());
    if (cdot3oamorgspecificrx.is_set || is_set(cdot3oamorgspecificrx.operation)) leaf_name_data.push_back(cdot3oamorgspecificrx.get_name_leafdata());
    if (cdot3oamorgspecifictx.is_set || is_set(cdot3oamorgspecifictx.operation)) leaf_name_data.push_back(cdot3oamorgspecifictx.get_name_leafdata());
    if (cdot3oamuniqueeventnotificationrx.is_set || is_set(cdot3oamuniqueeventnotificationrx.operation)) leaf_name_data.push_back(cdot3oamuniqueeventnotificationrx.get_name_leafdata());
    if (cdot3oamuniqueeventnotificationtx.is_set || is_set(cdot3oamuniqueeventnotificationtx.operation)) leaf_name_data.push_back(cdot3oamuniqueeventnotificationtx.get_name_leafdata());
    if (cdot3oamunsupportedcodesrx.is_set || is_set(cdot3oamunsupportedcodesrx.operation)) leaf_name_data.push_back(cdot3oamunsupportedcodesrx.get_name_leafdata());
    if (cdot3oamunsupportedcodestx.is_set || is_set(cdot3oamunsupportedcodestx.operation)) leaf_name_data.push_back(cdot3oamunsupportedcodestx.get_name_leafdata());
    if (cdot3oamvariablerequestrx.is_set || is_set(cdot3oamvariablerequestrx.operation)) leaf_name_data.push_back(cdot3oamvariablerequestrx.get_name_leafdata());
    if (cdot3oamvariablerequesttx.is_set || is_set(cdot3oamvariablerequesttx.operation)) leaf_name_data.push_back(cdot3oamvariablerequesttx.get_name_leafdata());
    if (cdot3oamvariableresponserx.is_set || is_set(cdot3oamvariableresponserx.operation)) leaf_name_data.push_back(cdot3oamvariableresponserx.get_name_leafdata());
    if (cdot3oamvariableresponsetx.is_set || is_set(cdot3oamvariableresponsetx.operation)) leaf_name_data.push_back(cdot3oamvariableresponsetx.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cdot3OamDuplicateEventNotificationRx")
    {
        cdot3oamduplicateeventnotificationrx = value;
    }
    if(value_path == "cdot3OamDuplicateEventNotificationTx")
    {
        cdot3oamduplicateeventnotificationtx = value;
    }
    if(value_path == "cdot3OamFramesLostDueToOam")
    {
        cdot3oamframeslostduetooam = value;
    }
    if(value_path == "cdot3OamInformationRx")
    {
        cdot3oaminformationrx = value;
    }
    if(value_path == "cdot3OamInformationTx")
    {
        cdot3oaminformationtx = value;
    }
    if(value_path == "cdot3OamLoopbackControlRx")
    {
        cdot3oamloopbackcontrolrx = value;
    }
    if(value_path == "cdot3OamLoopbackControlTx")
    {
        cdot3oamloopbackcontroltx = value;
    }
    if(value_path == "cdot3OamOrgSpecificRx")
    {
        cdot3oamorgspecificrx = value;
    }
    if(value_path == "cdot3OamOrgSpecificTx")
    {
        cdot3oamorgspecifictx = value;
    }
    if(value_path == "cdot3OamUniqueEventNotificationRx")
    {
        cdot3oamuniqueeventnotificationrx = value;
    }
    if(value_path == "cdot3OamUniqueEventNotificationTx")
    {
        cdot3oamuniqueeventnotificationtx = value;
    }
    if(value_path == "cdot3OamUnsupportedCodesRx")
    {
        cdot3oamunsupportedcodesrx = value;
    }
    if(value_path == "cdot3OamUnsupportedCodesTx")
    {
        cdot3oamunsupportedcodestx = value;
    }
    if(value_path == "cdot3OamVariableRequestRx")
    {
        cdot3oamvariablerequestrx = value;
    }
    if(value_path == "cdot3OamVariableRequestTx")
    {
        cdot3oamvariablerequesttx = value;
    }
    if(value_path == "cdot3OamVariableResponseRx")
    {
        cdot3oamvariableresponserx = value;
    }
    if(value_path == "cdot3OamVariableResponseTx")
    {
        cdot3oamvariableresponsetx = value;
    }
}

CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigtable()
{
    yang_name = "cdot3OamEventConfigTable"; yang_parent_name = "CISCO-DOT3-OAM-MIB";
}

CiscoDot3OamMib::Cdot3Oameventconfigtable::~Cdot3Oameventconfigtable()
{
}

bool CiscoDot3OamMib::Cdot3Oameventconfigtable::has_data() const
{
    for (std::size_t index=0; index<cdot3oameventconfigentry.size(); index++)
    {
        if(cdot3oameventconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoDot3OamMib::Cdot3Oameventconfigtable::has_operation() const
{
    for (std::size_t index=0; index<cdot3oameventconfigentry.size(); index++)
    {
        if(cdot3oameventconfigentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoDot3OamMib::Cdot3Oameventconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamEventConfigTable";

    return path_buffer.str();

}

const EntityPath CiscoDot3OamMib::Cdot3Oameventconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDot3OamMib::Cdot3Oameventconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdot3OamEventConfigEntry")
    {
        for(auto const & c : cdot3oameventconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry>();
        c->parent = this;
        cdot3oameventconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDot3OamMib::Cdot3Oameventconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdot3oameventconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoDot3OamMib::Cdot3Oameventconfigtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry::Cdot3Oameventconfigentry()
    :
    ifindex{YType::str, "ifIndex"},
    cdot3oamcriticaleventenable{YType::boolean, "cdot3OamCriticalEventEnable"},
    cdot3oamdyinggaspenable{YType::boolean, "cdot3OamDyingGaspEnable"},
    cdot3oamerrframeevnotifenable{YType::boolean, "cdot3OamErrFrameEvNotifEnable"},
    cdot3oamerrframeperiodevnotifenable{YType::boolean, "cdot3OamErrFramePeriodEvNotifEnable"},
    cdot3oamerrframeperiodthreshold{YType::uint32, "cdot3OamErrFramePeriodThreshold"},
    cdot3oamerrframeperiodwindow{YType::uint32, "cdot3OamErrFramePeriodWindow"},
    cdot3oamerrframesecsevnotifenable{YType::boolean, "cdot3OamErrFrameSecsEvNotifEnable"},
    cdot3oamerrframesecssummarythreshold{YType::int32, "cdot3OamErrFrameSecsSummaryThreshold"},
    cdot3oamerrframesecssummarywindow{YType::int32, "cdot3OamErrFrameSecsSummaryWindow"},
    cdot3oamerrframethreshold{YType::uint32, "cdot3OamErrFrameThreshold"},
    cdot3oamerrframewindow{YType::uint32, "cdot3OamErrFrameWindow"},
    cdot3oamerrsymperiodevnotifenable{YType::boolean, "cdot3OamErrSymPeriodEvNotifEnable"},
    cdot3oamerrsymperiodthresholdhi{YType::uint32, "cdot3OamErrSymPeriodThresholdHi"},
    cdot3oamerrsymperiodthresholdlo{YType::uint32, "cdot3OamErrSymPeriodThresholdLo"},
    cdot3oamerrsymperiodwindowhi{YType::uint32, "cdot3OamErrSymPeriodWindowHi"},
    cdot3oamerrsymperiodwindowlo{YType::uint32, "cdot3OamErrSymPeriodWindowLo"}
{
    yang_name = "cdot3OamEventConfigEntry"; yang_parent_name = "cdot3OamEventConfigTable";
}

CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry::~Cdot3Oameventconfigentry()
{
}

bool CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry::has_data() const
{
    return ifindex.is_set
	|| cdot3oamcriticaleventenable.is_set
	|| cdot3oamdyinggaspenable.is_set
	|| cdot3oamerrframeevnotifenable.is_set
	|| cdot3oamerrframeperiodevnotifenable.is_set
	|| cdot3oamerrframeperiodthreshold.is_set
	|| cdot3oamerrframeperiodwindow.is_set
	|| cdot3oamerrframesecsevnotifenable.is_set
	|| cdot3oamerrframesecssummarythreshold.is_set
	|| cdot3oamerrframesecssummarywindow.is_set
	|| cdot3oamerrframethreshold.is_set
	|| cdot3oamerrframewindow.is_set
	|| cdot3oamerrsymperiodevnotifenable.is_set
	|| cdot3oamerrsymperiodthresholdhi.is_set
	|| cdot3oamerrsymperiodthresholdlo.is_set
	|| cdot3oamerrsymperiodwindowhi.is_set
	|| cdot3oamerrsymperiodwindowlo.is_set;
}

bool CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cdot3oamcriticaleventenable.operation)
	|| is_set(cdot3oamdyinggaspenable.operation)
	|| is_set(cdot3oamerrframeevnotifenable.operation)
	|| is_set(cdot3oamerrframeperiodevnotifenable.operation)
	|| is_set(cdot3oamerrframeperiodthreshold.operation)
	|| is_set(cdot3oamerrframeperiodwindow.operation)
	|| is_set(cdot3oamerrframesecsevnotifenable.operation)
	|| is_set(cdot3oamerrframesecssummarythreshold.operation)
	|| is_set(cdot3oamerrframesecssummarywindow.operation)
	|| is_set(cdot3oamerrframethreshold.operation)
	|| is_set(cdot3oamerrframewindow.operation)
	|| is_set(cdot3oamerrsymperiodevnotifenable.operation)
	|| is_set(cdot3oamerrsymperiodthresholdhi.operation)
	|| is_set(cdot3oamerrsymperiodthresholdlo.operation)
	|| is_set(cdot3oamerrsymperiodwindowhi.operation)
	|| is_set(cdot3oamerrsymperiodwindowlo.operation);
}

std::string CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamEventConfigEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/cdot3OamEventConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oamcriticaleventenable.is_set || is_set(cdot3oamcriticaleventenable.operation)) leaf_name_data.push_back(cdot3oamcriticaleventenable.get_name_leafdata());
    if (cdot3oamdyinggaspenable.is_set || is_set(cdot3oamdyinggaspenable.operation)) leaf_name_data.push_back(cdot3oamdyinggaspenable.get_name_leafdata());
    if (cdot3oamerrframeevnotifenable.is_set || is_set(cdot3oamerrframeevnotifenable.operation)) leaf_name_data.push_back(cdot3oamerrframeevnotifenable.get_name_leafdata());
    if (cdot3oamerrframeperiodevnotifenable.is_set || is_set(cdot3oamerrframeperiodevnotifenable.operation)) leaf_name_data.push_back(cdot3oamerrframeperiodevnotifenable.get_name_leafdata());
    if (cdot3oamerrframeperiodthreshold.is_set || is_set(cdot3oamerrframeperiodthreshold.operation)) leaf_name_data.push_back(cdot3oamerrframeperiodthreshold.get_name_leafdata());
    if (cdot3oamerrframeperiodwindow.is_set || is_set(cdot3oamerrframeperiodwindow.operation)) leaf_name_data.push_back(cdot3oamerrframeperiodwindow.get_name_leafdata());
    if (cdot3oamerrframesecsevnotifenable.is_set || is_set(cdot3oamerrframesecsevnotifenable.operation)) leaf_name_data.push_back(cdot3oamerrframesecsevnotifenable.get_name_leafdata());
    if (cdot3oamerrframesecssummarythreshold.is_set || is_set(cdot3oamerrframesecssummarythreshold.operation)) leaf_name_data.push_back(cdot3oamerrframesecssummarythreshold.get_name_leafdata());
    if (cdot3oamerrframesecssummarywindow.is_set || is_set(cdot3oamerrframesecssummarywindow.operation)) leaf_name_data.push_back(cdot3oamerrframesecssummarywindow.get_name_leafdata());
    if (cdot3oamerrframethreshold.is_set || is_set(cdot3oamerrframethreshold.operation)) leaf_name_data.push_back(cdot3oamerrframethreshold.get_name_leafdata());
    if (cdot3oamerrframewindow.is_set || is_set(cdot3oamerrframewindow.operation)) leaf_name_data.push_back(cdot3oamerrframewindow.get_name_leafdata());
    if (cdot3oamerrsymperiodevnotifenable.is_set || is_set(cdot3oamerrsymperiodevnotifenable.operation)) leaf_name_data.push_back(cdot3oamerrsymperiodevnotifenable.get_name_leafdata());
    if (cdot3oamerrsymperiodthresholdhi.is_set || is_set(cdot3oamerrsymperiodthresholdhi.operation)) leaf_name_data.push_back(cdot3oamerrsymperiodthresholdhi.get_name_leafdata());
    if (cdot3oamerrsymperiodthresholdlo.is_set || is_set(cdot3oamerrsymperiodthresholdlo.operation)) leaf_name_data.push_back(cdot3oamerrsymperiodthresholdlo.get_name_leafdata());
    if (cdot3oamerrsymperiodwindowhi.is_set || is_set(cdot3oamerrsymperiodwindowhi.operation)) leaf_name_data.push_back(cdot3oamerrsymperiodwindowhi.get_name_leafdata());
    if (cdot3oamerrsymperiodwindowlo.is_set || is_set(cdot3oamerrsymperiodwindowlo.operation)) leaf_name_data.push_back(cdot3oamerrsymperiodwindowlo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cdot3OamCriticalEventEnable")
    {
        cdot3oamcriticaleventenable = value;
    }
    if(value_path == "cdot3OamDyingGaspEnable")
    {
        cdot3oamdyinggaspenable = value;
    }
    if(value_path == "cdot3OamErrFrameEvNotifEnable")
    {
        cdot3oamerrframeevnotifenable = value;
    }
    if(value_path == "cdot3OamErrFramePeriodEvNotifEnable")
    {
        cdot3oamerrframeperiodevnotifenable = value;
    }
    if(value_path == "cdot3OamErrFramePeriodThreshold")
    {
        cdot3oamerrframeperiodthreshold = value;
    }
    if(value_path == "cdot3OamErrFramePeriodWindow")
    {
        cdot3oamerrframeperiodwindow = value;
    }
    if(value_path == "cdot3OamErrFrameSecsEvNotifEnable")
    {
        cdot3oamerrframesecsevnotifenable = value;
    }
    if(value_path == "cdot3OamErrFrameSecsSummaryThreshold")
    {
        cdot3oamerrframesecssummarythreshold = value;
    }
    if(value_path == "cdot3OamErrFrameSecsSummaryWindow")
    {
        cdot3oamerrframesecssummarywindow = value;
    }
    if(value_path == "cdot3OamErrFrameThreshold")
    {
        cdot3oamerrframethreshold = value;
    }
    if(value_path == "cdot3OamErrFrameWindow")
    {
        cdot3oamerrframewindow = value;
    }
    if(value_path == "cdot3OamErrSymPeriodEvNotifEnable")
    {
        cdot3oamerrsymperiodevnotifenable = value;
    }
    if(value_path == "cdot3OamErrSymPeriodThresholdHi")
    {
        cdot3oamerrsymperiodthresholdhi = value;
    }
    if(value_path == "cdot3OamErrSymPeriodThresholdLo")
    {
        cdot3oamerrsymperiodthresholdlo = value;
    }
    if(value_path == "cdot3OamErrSymPeriodWindowHi")
    {
        cdot3oamerrsymperiodwindowhi = value;
    }
    if(value_path == "cdot3OamErrSymPeriodWindowLo")
    {
        cdot3oamerrsymperiodwindowlo = value;
    }
}

CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogtable()
{
    yang_name = "cdot3OamEventLogTable"; yang_parent_name = "CISCO-DOT3-OAM-MIB";
}

CiscoDot3OamMib::Cdot3Oameventlogtable::~Cdot3Oameventlogtable()
{
}

bool CiscoDot3OamMib::Cdot3Oameventlogtable::has_data() const
{
    for (std::size_t index=0; index<cdot3oameventlogentry.size(); index++)
    {
        if(cdot3oameventlogentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoDot3OamMib::Cdot3Oameventlogtable::has_operation() const
{
    for (std::size_t index=0; index<cdot3oameventlogentry.size(); index++)
    {
        if(cdot3oameventlogentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoDot3OamMib::Cdot3Oameventlogtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamEventLogTable";

    return path_buffer.str();

}

const EntityPath CiscoDot3OamMib::Cdot3Oameventlogtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDot3OamMib::Cdot3Oameventlogtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdot3OamEventLogEntry")
    {
        for(auto const & c : cdot3oameventlogentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry>();
        c->parent = this;
        cdot3oameventlogentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDot3OamMib::Cdot3Oameventlogtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cdot3oameventlogentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoDot3OamMib::Cdot3Oameventlogtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry::Cdot3Oameventlogentry()
    :
    ifindex{YType::str, "ifIndex"},
    cdot3oameventlogindex{YType::uint32, "cdot3OamEventLogIndex"},
    cdot3oameventlogeventtotal{YType::uint32, "cdot3OamEventLogEventTotal"},
    cdot3oameventloglocation{YType::enumeration, "cdot3OamEventLogLocation"},
    cdot3oameventlogoui{YType::str, "cdot3OamEventLogOui"},
    cdot3oameventlogrunningtotal{YType::uint64, "cdot3OamEventLogRunningTotal"},
    cdot3oameventlogthresholdhi{YType::uint32, "cdot3OamEventLogThresholdHi"},
    cdot3oameventlogthresholdlo{YType::uint32, "cdot3OamEventLogThresholdLo"},
    cdot3oameventlogtimestamp{YType::uint32, "cdot3OamEventLogTimestamp"},
    cdot3oameventlogtype{YType::uint32, "cdot3OamEventLogType"},
    cdot3oameventlogvalue{YType::uint64, "cdot3OamEventLogValue"},
    cdot3oameventlogwindowhi{YType::uint32, "cdot3OamEventLogWindowHi"},
    cdot3oameventlogwindowlo{YType::uint32, "cdot3OamEventLogWindowLo"}
{
    yang_name = "cdot3OamEventLogEntry"; yang_parent_name = "cdot3OamEventLogTable";
}

CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry::~Cdot3Oameventlogentry()
{
}

bool CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry::has_data() const
{
    return ifindex.is_set
	|| cdot3oameventlogindex.is_set
	|| cdot3oameventlogeventtotal.is_set
	|| cdot3oameventloglocation.is_set
	|| cdot3oameventlogoui.is_set
	|| cdot3oameventlogrunningtotal.is_set
	|| cdot3oameventlogthresholdhi.is_set
	|| cdot3oameventlogthresholdlo.is_set
	|| cdot3oameventlogtimestamp.is_set
	|| cdot3oameventlogtype.is_set
	|| cdot3oameventlogvalue.is_set
	|| cdot3oameventlogwindowhi.is_set
	|| cdot3oameventlogwindowlo.is_set;
}

bool CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cdot3oameventlogindex.operation)
	|| is_set(cdot3oameventlogeventtotal.operation)
	|| is_set(cdot3oameventloglocation.operation)
	|| is_set(cdot3oameventlogoui.operation)
	|| is_set(cdot3oameventlogrunningtotal.operation)
	|| is_set(cdot3oameventlogthresholdhi.operation)
	|| is_set(cdot3oameventlogthresholdlo.operation)
	|| is_set(cdot3oameventlogtimestamp.operation)
	|| is_set(cdot3oameventlogtype.operation)
	|| is_set(cdot3oameventlogvalue.operation)
	|| is_set(cdot3oameventlogwindowhi.operation)
	|| is_set(cdot3oameventlogwindowlo.operation);
}

std::string CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamEventLogEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[cdot3OamEventLogIndex='" <<cdot3oameventlogindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/cdot3OamEventLogTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oameventlogindex.is_set || is_set(cdot3oameventlogindex.operation)) leaf_name_data.push_back(cdot3oameventlogindex.get_name_leafdata());
    if (cdot3oameventlogeventtotal.is_set || is_set(cdot3oameventlogeventtotal.operation)) leaf_name_data.push_back(cdot3oameventlogeventtotal.get_name_leafdata());
    if (cdot3oameventloglocation.is_set || is_set(cdot3oameventloglocation.operation)) leaf_name_data.push_back(cdot3oameventloglocation.get_name_leafdata());
    if (cdot3oameventlogoui.is_set || is_set(cdot3oameventlogoui.operation)) leaf_name_data.push_back(cdot3oameventlogoui.get_name_leafdata());
    if (cdot3oameventlogrunningtotal.is_set || is_set(cdot3oameventlogrunningtotal.operation)) leaf_name_data.push_back(cdot3oameventlogrunningtotal.get_name_leafdata());
    if (cdot3oameventlogthresholdhi.is_set || is_set(cdot3oameventlogthresholdhi.operation)) leaf_name_data.push_back(cdot3oameventlogthresholdhi.get_name_leafdata());
    if (cdot3oameventlogthresholdlo.is_set || is_set(cdot3oameventlogthresholdlo.operation)) leaf_name_data.push_back(cdot3oameventlogthresholdlo.get_name_leafdata());
    if (cdot3oameventlogtimestamp.is_set || is_set(cdot3oameventlogtimestamp.operation)) leaf_name_data.push_back(cdot3oameventlogtimestamp.get_name_leafdata());
    if (cdot3oameventlogtype.is_set || is_set(cdot3oameventlogtype.operation)) leaf_name_data.push_back(cdot3oameventlogtype.get_name_leafdata());
    if (cdot3oameventlogvalue.is_set || is_set(cdot3oameventlogvalue.operation)) leaf_name_data.push_back(cdot3oameventlogvalue.get_name_leafdata());
    if (cdot3oameventlogwindowhi.is_set || is_set(cdot3oameventlogwindowhi.operation)) leaf_name_data.push_back(cdot3oameventlogwindowhi.get_name_leafdata());
    if (cdot3oameventlogwindowlo.is_set || is_set(cdot3oameventlogwindowlo.operation)) leaf_name_data.push_back(cdot3oameventlogwindowlo.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cdot3OamEventLogIndex")
    {
        cdot3oameventlogindex = value;
    }
    if(value_path == "cdot3OamEventLogEventTotal")
    {
        cdot3oameventlogeventtotal = value;
    }
    if(value_path == "cdot3OamEventLogLocation")
    {
        cdot3oameventloglocation = value;
    }
    if(value_path == "cdot3OamEventLogOui")
    {
        cdot3oameventlogoui = value;
    }
    if(value_path == "cdot3OamEventLogRunningTotal")
    {
        cdot3oameventlogrunningtotal = value;
    }
    if(value_path == "cdot3OamEventLogThresholdHi")
    {
        cdot3oameventlogthresholdhi = value;
    }
    if(value_path == "cdot3OamEventLogThresholdLo")
    {
        cdot3oameventlogthresholdlo = value;
    }
    if(value_path == "cdot3OamEventLogTimestamp")
    {
        cdot3oameventlogtimestamp = value;
    }
    if(value_path == "cdot3OamEventLogType")
    {
        cdot3oameventlogtype = value;
    }
    if(value_path == "cdot3OamEventLogValue")
    {
        cdot3oameventlogvalue = value;
    }
    if(value_path == "cdot3OamEventLogWindowHi")
    {
        cdot3oameventlogwindowhi = value;
    }
    if(value_path == "cdot3OamEventLogWindowLo")
    {
        cdot3oameventlogwindowlo = value;
    }
}

const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3OamadminstateEnum::disabled {1, "disabled"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3OamadminstateEnum::enabled {2, "enabled"};

const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3OamoperstatusEnum::disabled {1, "disabled"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3OamoperstatusEnum::linkFault {2, "linkFault"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3OamoperstatusEnum::passiveWait {3, "passiveWait"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3OamoperstatusEnum::activeSendLocal {4, "activeSendLocal"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3OamoperstatusEnum::sendLocalAndRemote {5, "sendLocalAndRemote"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3OamoperstatusEnum::sendLocalAndRemoteOk {6, "sendLocalAndRemoteOk"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3OamoperstatusEnum::oamPeeringLocallyRejected {7, "oamPeeringLocallyRejected"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3OamoperstatusEnum::oamPeeringRemotelyRejected {8, "oamPeeringRemotelyRejected"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3OamoperstatusEnum::operational {9, "operational"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3OamoperstatusEnum::nonOperHalfDuplex {10, "nonOperHalfDuplex"};

const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3OammodeEnum::active {1, "active"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3OammodeEnum::passive {2, "passive"};

const Enum::YLeaf CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::Cdot3OampeermodeEnum::active {1, "active"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::Cdot3OampeermodeEnum::passive {2, "passive"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::Cdot3OampeermodeEnum::unknown {3, "unknown"};

const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3OamloopbackstatusEnum::noLoopback {1, "noLoopback"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3OamloopbackstatusEnum::initiatingLoopback {2, "initiatingLoopback"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3OamloopbackstatusEnum::remoteLoopback {3, "remoteLoopback"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3OamloopbackstatusEnum::terminatingLoopback {4, "terminatingLoopback"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3OamloopbackstatusEnum::localLoopback {5, "localLoopback"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3OamloopbackstatusEnum::unknown {6, "unknown"};

const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3OamloopbackignorerxEnum::ignore {1, "ignore"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3OamloopbackignorerxEnum::process {2, "process"};

const Enum::YLeaf CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry::Cdot3OameventloglocationEnum::local {1, "local"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry::Cdot3OameventloglocationEnum::remote {2, "remote"};


}
}

