
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_DOT3_OAM_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
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
    return is_set(yfilter)
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

void CiscoDot3OamMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoDot3OamMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> CiscoDot3OamMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoDot3OamMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdot3OamEventConfigTable" || name == "cdot3OamEventLogTable" || name == "cdot3OamLoopbackTable" || name == "cdot3OamPeerTable" || name == "cdot3OamStatsTable" || name == "cdot3OamTable")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoDot3OamMib::Cdot3Oamtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoDot3OamMib::Cdot3Oamtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoDot3OamMib::Cdot3Oamtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdot3OamEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdot3oamadminstate.yfilter)
	|| ydk::is_set(cdot3oamconfigrevision.yfilter)
	|| ydk::is_set(cdot3oamfunctionssupported.yfilter)
	|| ydk::is_set(cdot3oammaxoampdusize.yfilter)
	|| ydk::is_set(cdot3oammode.yfilter)
	|| ydk::is_set(cdot3oamoperstatus.yfilter);
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

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oamadminstate.is_set || is_set(cdot3oamadminstate.yfilter)) leaf_name_data.push_back(cdot3oamadminstate.get_name_leafdata());
    if (cdot3oamconfigrevision.is_set || is_set(cdot3oamconfigrevision.yfilter)) leaf_name_data.push_back(cdot3oamconfigrevision.get_name_leafdata());
    if (cdot3oamfunctionssupported.is_set || is_set(cdot3oamfunctionssupported.yfilter)) leaf_name_data.push_back(cdot3oamfunctionssupported.get_name_leafdata());
    if (cdot3oammaxoampdusize.is_set || is_set(cdot3oammaxoampdusize.yfilter)) leaf_name_data.push_back(cdot3oammaxoampdusize.get_name_leafdata());
    if (cdot3oammode.is_set || is_set(cdot3oammode.yfilter)) leaf_name_data.push_back(cdot3oammode.get_name_leafdata());
    if (cdot3oamoperstatus.is_set || is_set(cdot3oamoperstatus.yfilter)) leaf_name_data.push_back(cdot3oamoperstatus.get_name_leafdata());


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

void CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamAdminState")
    {
        cdot3oamadminstate = value;
        cdot3oamadminstate.value_namespace = name_space;
        cdot3oamadminstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamConfigRevision")
    {
        cdot3oamconfigrevision = value;
        cdot3oamconfigrevision.value_namespace = name_space;
        cdot3oamconfigrevision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamFunctionsSupported")
    {
        cdot3oamfunctionssupported[value] = true;
    }
    if(value_path == "cdot3OamMaxOamPduSize")
    {
        cdot3oammaxoampdusize = value;
        cdot3oammaxoampdusize.value_namespace = name_space;
        cdot3oammaxoampdusize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamMode")
    {
        cdot3oammode = value;
        cdot3oammode.value_namespace = name_space;
        cdot3oammode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamOperStatus")
    {
        cdot3oamoperstatus = value;
        cdot3oamoperstatus.value_namespace = name_space;
        cdot3oamoperstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdot3OamAdminState")
    {
        cdot3oamadminstate.yfilter = yfilter;
    }
    if(value_path == "cdot3OamConfigRevision")
    {
        cdot3oamconfigrevision.yfilter = yfilter;
    }
    if(value_path == "cdot3OamFunctionsSupported")
    {
        cdot3oamfunctionssupported.yfilter = yfilter;
    }
    if(value_path == "cdot3OamMaxOamPduSize")
    {
        cdot3oammaxoampdusize.yfilter = yfilter;
    }
    if(value_path == "cdot3OamMode")
    {
        cdot3oammode.yfilter = yfilter;
    }
    if(value_path == "cdot3OamOperStatus")
    {
        cdot3oamoperstatus.yfilter = yfilter;
    }
}

bool CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdot3OamAdminState" || name == "cdot3OamConfigRevision" || name == "cdot3OamFunctionsSupported" || name == "cdot3OamMaxOamPduSize" || name == "cdot3OamMode" || name == "cdot3OamOperStatus")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoDot3OamMib::Cdot3Oampeertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoDot3OamMib::Cdot3Oampeertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoDot3OamMib::Cdot3Oampeertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdot3OamPeerEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdot3oampeerconfigrevision.yfilter)
	|| ydk::is_set(cdot3oampeerfunctionssupported.yfilter)
	|| ydk::is_set(cdot3oampeermacaddress.yfilter)
	|| ydk::is_set(cdot3oampeermaxoampdusize.yfilter)
	|| ydk::is_set(cdot3oampeermode.yfilter)
	|| ydk::is_set(cdot3oampeervendorinfo.yfilter)
	|| ydk::is_set(cdot3oampeervendoroui.yfilter);
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

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oampeerconfigrevision.is_set || is_set(cdot3oampeerconfigrevision.yfilter)) leaf_name_data.push_back(cdot3oampeerconfigrevision.get_name_leafdata());
    if (cdot3oampeerfunctionssupported.is_set || is_set(cdot3oampeerfunctionssupported.yfilter)) leaf_name_data.push_back(cdot3oampeerfunctionssupported.get_name_leafdata());
    if (cdot3oampeermacaddress.is_set || is_set(cdot3oampeermacaddress.yfilter)) leaf_name_data.push_back(cdot3oampeermacaddress.get_name_leafdata());
    if (cdot3oampeermaxoampdusize.is_set || is_set(cdot3oampeermaxoampdusize.yfilter)) leaf_name_data.push_back(cdot3oampeermaxoampdusize.get_name_leafdata());
    if (cdot3oampeermode.is_set || is_set(cdot3oampeermode.yfilter)) leaf_name_data.push_back(cdot3oampeermode.get_name_leafdata());
    if (cdot3oampeervendorinfo.is_set || is_set(cdot3oampeervendorinfo.yfilter)) leaf_name_data.push_back(cdot3oampeervendorinfo.get_name_leafdata());
    if (cdot3oampeervendoroui.is_set || is_set(cdot3oampeervendoroui.yfilter)) leaf_name_data.push_back(cdot3oampeervendoroui.get_name_leafdata());


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

void CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamPeerConfigRevision")
    {
        cdot3oampeerconfigrevision = value;
        cdot3oampeerconfigrevision.value_namespace = name_space;
        cdot3oampeerconfigrevision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamPeerFunctionsSupported")
    {
        cdot3oampeerfunctionssupported[value] = true;
    }
    if(value_path == "cdot3OamPeerMacAddress")
    {
        cdot3oampeermacaddress = value;
        cdot3oampeermacaddress.value_namespace = name_space;
        cdot3oampeermacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamPeerMaxOamPduSize")
    {
        cdot3oampeermaxoampdusize = value;
        cdot3oampeermaxoampdusize.value_namespace = name_space;
        cdot3oampeermaxoampdusize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamPeerMode")
    {
        cdot3oampeermode = value;
        cdot3oampeermode.value_namespace = name_space;
        cdot3oampeermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamPeerVendorInfo")
    {
        cdot3oampeervendorinfo = value;
        cdot3oampeervendorinfo.value_namespace = name_space;
        cdot3oampeervendorinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamPeerVendorOui")
    {
        cdot3oampeervendoroui = value;
        cdot3oampeervendoroui.value_namespace = name_space;
        cdot3oampeervendoroui.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdot3OamPeerConfigRevision")
    {
        cdot3oampeerconfigrevision.yfilter = yfilter;
    }
    if(value_path == "cdot3OamPeerFunctionsSupported")
    {
        cdot3oampeerfunctionssupported.yfilter = yfilter;
    }
    if(value_path == "cdot3OamPeerMacAddress")
    {
        cdot3oampeermacaddress.yfilter = yfilter;
    }
    if(value_path == "cdot3OamPeerMaxOamPduSize")
    {
        cdot3oampeermaxoampdusize.yfilter = yfilter;
    }
    if(value_path == "cdot3OamPeerMode")
    {
        cdot3oampeermode.yfilter = yfilter;
    }
    if(value_path == "cdot3OamPeerVendorInfo")
    {
        cdot3oampeervendorinfo.yfilter = yfilter;
    }
    if(value_path == "cdot3OamPeerVendorOui")
    {
        cdot3oampeervendoroui.yfilter = yfilter;
    }
}

bool CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdot3OamPeerConfigRevision" || name == "cdot3OamPeerFunctionsSupported" || name == "cdot3OamPeerMacAddress" || name == "cdot3OamPeerMaxOamPduSize" || name == "cdot3OamPeerMode" || name == "cdot3OamPeerVendorInfo" || name == "cdot3OamPeerVendorOui")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoDot3OamMib::Cdot3Oamloopbacktable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoDot3OamMib::Cdot3Oamloopbacktable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoDot3OamMib::Cdot3Oamloopbacktable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdot3OamLoopbackEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdot3oamloopbackignorerx.yfilter)
	|| ydk::is_set(cdot3oamloopbackstatus.yfilter);
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

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oamloopbackignorerx.is_set || is_set(cdot3oamloopbackignorerx.yfilter)) leaf_name_data.push_back(cdot3oamloopbackignorerx.get_name_leafdata());
    if (cdot3oamloopbackstatus.is_set || is_set(cdot3oamloopbackstatus.yfilter)) leaf_name_data.push_back(cdot3oamloopbackstatus.get_name_leafdata());


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

void CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamLoopbackIgnoreRx")
    {
        cdot3oamloopbackignorerx = value;
        cdot3oamloopbackignorerx.value_namespace = name_space;
        cdot3oamloopbackignorerx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamLoopbackStatus")
    {
        cdot3oamloopbackstatus = value;
        cdot3oamloopbackstatus.value_namespace = name_space;
        cdot3oamloopbackstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdot3OamLoopbackIgnoreRx")
    {
        cdot3oamloopbackignorerx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamLoopbackStatus")
    {
        cdot3oamloopbackstatus.yfilter = yfilter;
    }
}

bool CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdot3OamLoopbackIgnoreRx" || name == "cdot3OamLoopbackStatus")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoDot3OamMib::Cdot3Oamstatstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoDot3OamMib::Cdot3Oamstatstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoDot3OamMib::Cdot3Oamstatstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdot3OamStatsEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdot3oamduplicateeventnotificationrx.yfilter)
	|| ydk::is_set(cdot3oamduplicateeventnotificationtx.yfilter)
	|| ydk::is_set(cdot3oamframeslostduetooam.yfilter)
	|| ydk::is_set(cdot3oaminformationrx.yfilter)
	|| ydk::is_set(cdot3oaminformationtx.yfilter)
	|| ydk::is_set(cdot3oamloopbackcontrolrx.yfilter)
	|| ydk::is_set(cdot3oamloopbackcontroltx.yfilter)
	|| ydk::is_set(cdot3oamorgspecificrx.yfilter)
	|| ydk::is_set(cdot3oamorgspecifictx.yfilter)
	|| ydk::is_set(cdot3oamuniqueeventnotificationrx.yfilter)
	|| ydk::is_set(cdot3oamuniqueeventnotificationtx.yfilter)
	|| ydk::is_set(cdot3oamunsupportedcodesrx.yfilter)
	|| ydk::is_set(cdot3oamunsupportedcodestx.yfilter)
	|| ydk::is_set(cdot3oamvariablerequestrx.yfilter)
	|| ydk::is_set(cdot3oamvariablerequesttx.yfilter)
	|| ydk::is_set(cdot3oamvariableresponserx.yfilter)
	|| ydk::is_set(cdot3oamvariableresponsetx.yfilter);
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

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oamduplicateeventnotificationrx.is_set || is_set(cdot3oamduplicateeventnotificationrx.yfilter)) leaf_name_data.push_back(cdot3oamduplicateeventnotificationrx.get_name_leafdata());
    if (cdot3oamduplicateeventnotificationtx.is_set || is_set(cdot3oamduplicateeventnotificationtx.yfilter)) leaf_name_data.push_back(cdot3oamduplicateeventnotificationtx.get_name_leafdata());
    if (cdot3oamframeslostduetooam.is_set || is_set(cdot3oamframeslostduetooam.yfilter)) leaf_name_data.push_back(cdot3oamframeslostduetooam.get_name_leafdata());
    if (cdot3oaminformationrx.is_set || is_set(cdot3oaminformationrx.yfilter)) leaf_name_data.push_back(cdot3oaminformationrx.get_name_leafdata());
    if (cdot3oaminformationtx.is_set || is_set(cdot3oaminformationtx.yfilter)) leaf_name_data.push_back(cdot3oaminformationtx.get_name_leafdata());
    if (cdot3oamloopbackcontrolrx.is_set || is_set(cdot3oamloopbackcontrolrx.yfilter)) leaf_name_data.push_back(cdot3oamloopbackcontrolrx.get_name_leafdata());
    if (cdot3oamloopbackcontroltx.is_set || is_set(cdot3oamloopbackcontroltx.yfilter)) leaf_name_data.push_back(cdot3oamloopbackcontroltx.get_name_leafdata());
    if (cdot3oamorgspecificrx.is_set || is_set(cdot3oamorgspecificrx.yfilter)) leaf_name_data.push_back(cdot3oamorgspecificrx.get_name_leafdata());
    if (cdot3oamorgspecifictx.is_set || is_set(cdot3oamorgspecifictx.yfilter)) leaf_name_data.push_back(cdot3oamorgspecifictx.get_name_leafdata());
    if (cdot3oamuniqueeventnotificationrx.is_set || is_set(cdot3oamuniqueeventnotificationrx.yfilter)) leaf_name_data.push_back(cdot3oamuniqueeventnotificationrx.get_name_leafdata());
    if (cdot3oamuniqueeventnotificationtx.is_set || is_set(cdot3oamuniqueeventnotificationtx.yfilter)) leaf_name_data.push_back(cdot3oamuniqueeventnotificationtx.get_name_leafdata());
    if (cdot3oamunsupportedcodesrx.is_set || is_set(cdot3oamunsupportedcodesrx.yfilter)) leaf_name_data.push_back(cdot3oamunsupportedcodesrx.get_name_leafdata());
    if (cdot3oamunsupportedcodestx.is_set || is_set(cdot3oamunsupportedcodestx.yfilter)) leaf_name_data.push_back(cdot3oamunsupportedcodestx.get_name_leafdata());
    if (cdot3oamvariablerequestrx.is_set || is_set(cdot3oamvariablerequestrx.yfilter)) leaf_name_data.push_back(cdot3oamvariablerequestrx.get_name_leafdata());
    if (cdot3oamvariablerequesttx.is_set || is_set(cdot3oamvariablerequesttx.yfilter)) leaf_name_data.push_back(cdot3oamvariablerequesttx.get_name_leafdata());
    if (cdot3oamvariableresponserx.is_set || is_set(cdot3oamvariableresponserx.yfilter)) leaf_name_data.push_back(cdot3oamvariableresponserx.get_name_leafdata());
    if (cdot3oamvariableresponsetx.is_set || is_set(cdot3oamvariableresponsetx.yfilter)) leaf_name_data.push_back(cdot3oamvariableresponsetx.get_name_leafdata());


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

void CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatsentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamDuplicateEventNotificationRx")
    {
        cdot3oamduplicateeventnotificationrx = value;
        cdot3oamduplicateeventnotificationrx.value_namespace = name_space;
        cdot3oamduplicateeventnotificationrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamDuplicateEventNotificationTx")
    {
        cdot3oamduplicateeventnotificationtx = value;
        cdot3oamduplicateeventnotificationtx.value_namespace = name_space;
        cdot3oamduplicateeventnotificationtx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamFramesLostDueToOam")
    {
        cdot3oamframeslostduetooam = value;
        cdot3oamframeslostduetooam.value_namespace = name_space;
        cdot3oamframeslostduetooam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamInformationRx")
    {
        cdot3oaminformationrx = value;
        cdot3oaminformationrx.value_namespace = name_space;
        cdot3oaminformationrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamInformationTx")
    {
        cdot3oaminformationtx = value;
        cdot3oaminformationtx.value_namespace = name_space;
        cdot3oaminformationtx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamLoopbackControlRx")
    {
        cdot3oamloopbackcontrolrx = value;
        cdot3oamloopbackcontrolrx.value_namespace = name_space;
        cdot3oamloopbackcontrolrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamLoopbackControlTx")
    {
        cdot3oamloopbackcontroltx = value;
        cdot3oamloopbackcontroltx.value_namespace = name_space;
        cdot3oamloopbackcontroltx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamOrgSpecificRx")
    {
        cdot3oamorgspecificrx = value;
        cdot3oamorgspecificrx.value_namespace = name_space;
        cdot3oamorgspecificrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamOrgSpecificTx")
    {
        cdot3oamorgspecifictx = value;
        cdot3oamorgspecifictx.value_namespace = name_space;
        cdot3oamorgspecifictx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamUniqueEventNotificationRx")
    {
        cdot3oamuniqueeventnotificationrx = value;
        cdot3oamuniqueeventnotificationrx.value_namespace = name_space;
        cdot3oamuniqueeventnotificationrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamUniqueEventNotificationTx")
    {
        cdot3oamuniqueeventnotificationtx = value;
        cdot3oamuniqueeventnotificationtx.value_namespace = name_space;
        cdot3oamuniqueeventnotificationtx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamUnsupportedCodesRx")
    {
        cdot3oamunsupportedcodesrx = value;
        cdot3oamunsupportedcodesrx.value_namespace = name_space;
        cdot3oamunsupportedcodesrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamUnsupportedCodesTx")
    {
        cdot3oamunsupportedcodestx = value;
        cdot3oamunsupportedcodestx.value_namespace = name_space;
        cdot3oamunsupportedcodestx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamVariableRequestRx")
    {
        cdot3oamvariablerequestrx = value;
        cdot3oamvariablerequestrx.value_namespace = name_space;
        cdot3oamvariablerequestrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamVariableRequestTx")
    {
        cdot3oamvariablerequesttx = value;
        cdot3oamvariablerequesttx.value_namespace = name_space;
        cdot3oamvariablerequesttx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamVariableResponseRx")
    {
        cdot3oamvariableresponserx = value;
        cdot3oamvariableresponserx.value_namespace = name_space;
        cdot3oamvariableresponserx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamVariableResponseTx")
    {
        cdot3oamvariableresponsetx = value;
        cdot3oamvariableresponsetx.value_namespace = name_space;
        cdot3oamvariableresponsetx.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatsentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdot3OamDuplicateEventNotificationRx")
    {
        cdot3oamduplicateeventnotificationrx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamDuplicateEventNotificationTx")
    {
        cdot3oamduplicateeventnotificationtx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamFramesLostDueToOam")
    {
        cdot3oamframeslostduetooam.yfilter = yfilter;
    }
    if(value_path == "cdot3OamInformationRx")
    {
        cdot3oaminformationrx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamInformationTx")
    {
        cdot3oaminformationtx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamLoopbackControlRx")
    {
        cdot3oamloopbackcontrolrx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamLoopbackControlTx")
    {
        cdot3oamloopbackcontroltx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamOrgSpecificRx")
    {
        cdot3oamorgspecificrx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamOrgSpecificTx")
    {
        cdot3oamorgspecifictx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamUniqueEventNotificationRx")
    {
        cdot3oamuniqueeventnotificationrx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamUniqueEventNotificationTx")
    {
        cdot3oamuniqueeventnotificationtx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamUnsupportedCodesRx")
    {
        cdot3oamunsupportedcodesrx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamUnsupportedCodesTx")
    {
        cdot3oamunsupportedcodestx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamVariableRequestRx")
    {
        cdot3oamvariablerequestrx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamVariableRequestTx")
    {
        cdot3oamvariablerequesttx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamVariableResponseRx")
    {
        cdot3oamvariableresponserx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamVariableResponseTx")
    {
        cdot3oamvariableresponsetx.yfilter = yfilter;
    }
}

bool CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatsentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdot3OamDuplicateEventNotificationRx" || name == "cdot3OamDuplicateEventNotificationTx" || name == "cdot3OamFramesLostDueToOam" || name == "cdot3OamInformationRx" || name == "cdot3OamInformationTx" || name == "cdot3OamLoopbackControlRx" || name == "cdot3OamLoopbackControlTx" || name == "cdot3OamOrgSpecificRx" || name == "cdot3OamOrgSpecificTx" || name == "cdot3OamUniqueEventNotificationRx" || name == "cdot3OamUniqueEventNotificationTx" || name == "cdot3OamUnsupportedCodesRx" || name == "cdot3OamUnsupportedCodesTx" || name == "cdot3OamVariableRequestRx" || name == "cdot3OamVariableRequestTx" || name == "cdot3OamVariableResponseRx" || name == "cdot3OamVariableResponseTx")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoDot3OamMib::Cdot3Oameventconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoDot3OamMib::Cdot3Oameventconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoDot3OamMib::Cdot3Oameventconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdot3OamEventConfigEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdot3oamcriticaleventenable.yfilter)
	|| ydk::is_set(cdot3oamdyinggaspenable.yfilter)
	|| ydk::is_set(cdot3oamerrframeevnotifenable.yfilter)
	|| ydk::is_set(cdot3oamerrframeperiodevnotifenable.yfilter)
	|| ydk::is_set(cdot3oamerrframeperiodthreshold.yfilter)
	|| ydk::is_set(cdot3oamerrframeperiodwindow.yfilter)
	|| ydk::is_set(cdot3oamerrframesecsevnotifenable.yfilter)
	|| ydk::is_set(cdot3oamerrframesecssummarythreshold.yfilter)
	|| ydk::is_set(cdot3oamerrframesecssummarywindow.yfilter)
	|| ydk::is_set(cdot3oamerrframethreshold.yfilter)
	|| ydk::is_set(cdot3oamerrframewindow.yfilter)
	|| ydk::is_set(cdot3oamerrsymperiodevnotifenable.yfilter)
	|| ydk::is_set(cdot3oamerrsymperiodthresholdhi.yfilter)
	|| ydk::is_set(cdot3oamerrsymperiodthresholdlo.yfilter)
	|| ydk::is_set(cdot3oamerrsymperiodwindowhi.yfilter)
	|| ydk::is_set(cdot3oamerrsymperiodwindowlo.yfilter);
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

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oamcriticaleventenable.is_set || is_set(cdot3oamcriticaleventenable.yfilter)) leaf_name_data.push_back(cdot3oamcriticaleventenable.get_name_leafdata());
    if (cdot3oamdyinggaspenable.is_set || is_set(cdot3oamdyinggaspenable.yfilter)) leaf_name_data.push_back(cdot3oamdyinggaspenable.get_name_leafdata());
    if (cdot3oamerrframeevnotifenable.is_set || is_set(cdot3oamerrframeevnotifenable.yfilter)) leaf_name_data.push_back(cdot3oamerrframeevnotifenable.get_name_leafdata());
    if (cdot3oamerrframeperiodevnotifenable.is_set || is_set(cdot3oamerrframeperiodevnotifenable.yfilter)) leaf_name_data.push_back(cdot3oamerrframeperiodevnotifenable.get_name_leafdata());
    if (cdot3oamerrframeperiodthreshold.is_set || is_set(cdot3oamerrframeperiodthreshold.yfilter)) leaf_name_data.push_back(cdot3oamerrframeperiodthreshold.get_name_leafdata());
    if (cdot3oamerrframeperiodwindow.is_set || is_set(cdot3oamerrframeperiodwindow.yfilter)) leaf_name_data.push_back(cdot3oamerrframeperiodwindow.get_name_leafdata());
    if (cdot3oamerrframesecsevnotifenable.is_set || is_set(cdot3oamerrframesecsevnotifenable.yfilter)) leaf_name_data.push_back(cdot3oamerrframesecsevnotifenable.get_name_leafdata());
    if (cdot3oamerrframesecssummarythreshold.is_set || is_set(cdot3oamerrframesecssummarythreshold.yfilter)) leaf_name_data.push_back(cdot3oamerrframesecssummarythreshold.get_name_leafdata());
    if (cdot3oamerrframesecssummarywindow.is_set || is_set(cdot3oamerrframesecssummarywindow.yfilter)) leaf_name_data.push_back(cdot3oamerrframesecssummarywindow.get_name_leafdata());
    if (cdot3oamerrframethreshold.is_set || is_set(cdot3oamerrframethreshold.yfilter)) leaf_name_data.push_back(cdot3oamerrframethreshold.get_name_leafdata());
    if (cdot3oamerrframewindow.is_set || is_set(cdot3oamerrframewindow.yfilter)) leaf_name_data.push_back(cdot3oamerrframewindow.get_name_leafdata());
    if (cdot3oamerrsymperiodevnotifenable.is_set || is_set(cdot3oamerrsymperiodevnotifenable.yfilter)) leaf_name_data.push_back(cdot3oamerrsymperiodevnotifenable.get_name_leafdata());
    if (cdot3oamerrsymperiodthresholdhi.is_set || is_set(cdot3oamerrsymperiodthresholdhi.yfilter)) leaf_name_data.push_back(cdot3oamerrsymperiodthresholdhi.get_name_leafdata());
    if (cdot3oamerrsymperiodthresholdlo.is_set || is_set(cdot3oamerrsymperiodthresholdlo.yfilter)) leaf_name_data.push_back(cdot3oamerrsymperiodthresholdlo.get_name_leafdata());
    if (cdot3oamerrsymperiodwindowhi.is_set || is_set(cdot3oamerrsymperiodwindowhi.yfilter)) leaf_name_data.push_back(cdot3oamerrsymperiodwindowhi.get_name_leafdata());
    if (cdot3oamerrsymperiodwindowlo.is_set || is_set(cdot3oamerrsymperiodwindowlo.yfilter)) leaf_name_data.push_back(cdot3oamerrsymperiodwindowlo.get_name_leafdata());


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

void CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamCriticalEventEnable")
    {
        cdot3oamcriticaleventenable = value;
        cdot3oamcriticaleventenable.value_namespace = name_space;
        cdot3oamcriticaleventenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamDyingGaspEnable")
    {
        cdot3oamdyinggaspenable = value;
        cdot3oamdyinggaspenable.value_namespace = name_space;
        cdot3oamdyinggaspenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFrameEvNotifEnable")
    {
        cdot3oamerrframeevnotifenable = value;
        cdot3oamerrframeevnotifenable.value_namespace = name_space;
        cdot3oamerrframeevnotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFramePeriodEvNotifEnable")
    {
        cdot3oamerrframeperiodevnotifenable = value;
        cdot3oamerrframeperiodevnotifenable.value_namespace = name_space;
        cdot3oamerrframeperiodevnotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFramePeriodThreshold")
    {
        cdot3oamerrframeperiodthreshold = value;
        cdot3oamerrframeperiodthreshold.value_namespace = name_space;
        cdot3oamerrframeperiodthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFramePeriodWindow")
    {
        cdot3oamerrframeperiodwindow = value;
        cdot3oamerrframeperiodwindow.value_namespace = name_space;
        cdot3oamerrframeperiodwindow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFrameSecsEvNotifEnable")
    {
        cdot3oamerrframesecsevnotifenable = value;
        cdot3oamerrframesecsevnotifenable.value_namespace = name_space;
        cdot3oamerrframesecsevnotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFrameSecsSummaryThreshold")
    {
        cdot3oamerrframesecssummarythreshold = value;
        cdot3oamerrframesecssummarythreshold.value_namespace = name_space;
        cdot3oamerrframesecssummarythreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFrameSecsSummaryWindow")
    {
        cdot3oamerrframesecssummarywindow = value;
        cdot3oamerrframesecssummarywindow.value_namespace = name_space;
        cdot3oamerrframesecssummarywindow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFrameThreshold")
    {
        cdot3oamerrframethreshold = value;
        cdot3oamerrframethreshold.value_namespace = name_space;
        cdot3oamerrframethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFrameWindow")
    {
        cdot3oamerrframewindow = value;
        cdot3oamerrframewindow.value_namespace = name_space;
        cdot3oamerrframewindow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrSymPeriodEvNotifEnable")
    {
        cdot3oamerrsymperiodevnotifenable = value;
        cdot3oamerrsymperiodevnotifenable.value_namespace = name_space;
        cdot3oamerrsymperiodevnotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrSymPeriodThresholdHi")
    {
        cdot3oamerrsymperiodthresholdhi = value;
        cdot3oamerrsymperiodthresholdhi.value_namespace = name_space;
        cdot3oamerrsymperiodthresholdhi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrSymPeriodThresholdLo")
    {
        cdot3oamerrsymperiodthresholdlo = value;
        cdot3oamerrsymperiodthresholdlo.value_namespace = name_space;
        cdot3oamerrsymperiodthresholdlo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrSymPeriodWindowHi")
    {
        cdot3oamerrsymperiodwindowhi = value;
        cdot3oamerrsymperiodwindowhi.value_namespace = name_space;
        cdot3oamerrsymperiodwindowhi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrSymPeriodWindowLo")
    {
        cdot3oamerrsymperiodwindowlo = value;
        cdot3oamerrsymperiodwindowlo.value_namespace = name_space;
        cdot3oamerrsymperiodwindowlo.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdot3OamCriticalEventEnable")
    {
        cdot3oamcriticaleventenable.yfilter = yfilter;
    }
    if(value_path == "cdot3OamDyingGaspEnable")
    {
        cdot3oamdyinggaspenable.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFrameEvNotifEnable")
    {
        cdot3oamerrframeevnotifenable.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFramePeriodEvNotifEnable")
    {
        cdot3oamerrframeperiodevnotifenable.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFramePeriodThreshold")
    {
        cdot3oamerrframeperiodthreshold.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFramePeriodWindow")
    {
        cdot3oamerrframeperiodwindow.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFrameSecsEvNotifEnable")
    {
        cdot3oamerrframesecsevnotifenable.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFrameSecsSummaryThreshold")
    {
        cdot3oamerrframesecssummarythreshold.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFrameSecsSummaryWindow")
    {
        cdot3oamerrframesecssummarywindow.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFrameThreshold")
    {
        cdot3oamerrframethreshold.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFrameWindow")
    {
        cdot3oamerrframewindow.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrSymPeriodEvNotifEnable")
    {
        cdot3oamerrsymperiodevnotifenable.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrSymPeriodThresholdHi")
    {
        cdot3oamerrsymperiodthresholdhi.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrSymPeriodThresholdLo")
    {
        cdot3oamerrsymperiodthresholdlo.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrSymPeriodWindowHi")
    {
        cdot3oamerrsymperiodwindowhi.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrSymPeriodWindowLo")
    {
        cdot3oamerrsymperiodwindowlo.yfilter = yfilter;
    }
}

bool CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdot3OamCriticalEventEnable" || name == "cdot3OamDyingGaspEnable" || name == "cdot3OamErrFrameEvNotifEnable" || name == "cdot3OamErrFramePeriodEvNotifEnable" || name == "cdot3OamErrFramePeriodThreshold" || name == "cdot3OamErrFramePeriodWindow" || name == "cdot3OamErrFrameSecsEvNotifEnable" || name == "cdot3OamErrFrameSecsSummaryThreshold" || name == "cdot3OamErrFrameSecsSummaryWindow" || name == "cdot3OamErrFrameThreshold" || name == "cdot3OamErrFrameWindow" || name == "cdot3OamErrSymPeriodEvNotifEnable" || name == "cdot3OamErrSymPeriodThresholdHi" || name == "cdot3OamErrSymPeriodThresholdLo" || name == "cdot3OamErrSymPeriodWindowHi" || name == "cdot3OamErrSymPeriodWindowLo")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoDot3OamMib::Cdot3Oameventlogtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoDot3OamMib::Cdot3Oameventlogtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoDot3OamMib::Cdot3Oameventlogtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdot3OamEventLogEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdot3oameventlogindex.yfilter)
	|| ydk::is_set(cdot3oameventlogeventtotal.yfilter)
	|| ydk::is_set(cdot3oameventloglocation.yfilter)
	|| ydk::is_set(cdot3oameventlogoui.yfilter)
	|| ydk::is_set(cdot3oameventlogrunningtotal.yfilter)
	|| ydk::is_set(cdot3oameventlogthresholdhi.yfilter)
	|| ydk::is_set(cdot3oameventlogthresholdlo.yfilter)
	|| ydk::is_set(cdot3oameventlogtimestamp.yfilter)
	|| ydk::is_set(cdot3oameventlogtype.yfilter)
	|| ydk::is_set(cdot3oameventlogvalue.yfilter)
	|| ydk::is_set(cdot3oameventlogwindowhi.yfilter)
	|| ydk::is_set(cdot3oameventlogwindowlo.yfilter);
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

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oameventlogindex.is_set || is_set(cdot3oameventlogindex.yfilter)) leaf_name_data.push_back(cdot3oameventlogindex.get_name_leafdata());
    if (cdot3oameventlogeventtotal.is_set || is_set(cdot3oameventlogeventtotal.yfilter)) leaf_name_data.push_back(cdot3oameventlogeventtotal.get_name_leafdata());
    if (cdot3oameventloglocation.is_set || is_set(cdot3oameventloglocation.yfilter)) leaf_name_data.push_back(cdot3oameventloglocation.get_name_leafdata());
    if (cdot3oameventlogoui.is_set || is_set(cdot3oameventlogoui.yfilter)) leaf_name_data.push_back(cdot3oameventlogoui.get_name_leafdata());
    if (cdot3oameventlogrunningtotal.is_set || is_set(cdot3oameventlogrunningtotal.yfilter)) leaf_name_data.push_back(cdot3oameventlogrunningtotal.get_name_leafdata());
    if (cdot3oameventlogthresholdhi.is_set || is_set(cdot3oameventlogthresholdhi.yfilter)) leaf_name_data.push_back(cdot3oameventlogthresholdhi.get_name_leafdata());
    if (cdot3oameventlogthresholdlo.is_set || is_set(cdot3oameventlogthresholdlo.yfilter)) leaf_name_data.push_back(cdot3oameventlogthresholdlo.get_name_leafdata());
    if (cdot3oameventlogtimestamp.is_set || is_set(cdot3oameventlogtimestamp.yfilter)) leaf_name_data.push_back(cdot3oameventlogtimestamp.get_name_leafdata());
    if (cdot3oameventlogtype.is_set || is_set(cdot3oameventlogtype.yfilter)) leaf_name_data.push_back(cdot3oameventlogtype.get_name_leafdata());
    if (cdot3oameventlogvalue.is_set || is_set(cdot3oameventlogvalue.yfilter)) leaf_name_data.push_back(cdot3oameventlogvalue.get_name_leafdata());
    if (cdot3oameventlogwindowhi.is_set || is_set(cdot3oameventlogwindowhi.yfilter)) leaf_name_data.push_back(cdot3oameventlogwindowhi.get_name_leafdata());
    if (cdot3oameventlogwindowlo.is_set || is_set(cdot3oameventlogwindowlo.yfilter)) leaf_name_data.push_back(cdot3oameventlogwindowlo.get_name_leafdata());


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

void CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamEventLogIndex")
    {
        cdot3oameventlogindex = value;
        cdot3oameventlogindex.value_namespace = name_space;
        cdot3oameventlogindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamEventLogEventTotal")
    {
        cdot3oameventlogeventtotal = value;
        cdot3oameventlogeventtotal.value_namespace = name_space;
        cdot3oameventlogeventtotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamEventLogLocation")
    {
        cdot3oameventloglocation = value;
        cdot3oameventloglocation.value_namespace = name_space;
        cdot3oameventloglocation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamEventLogOui")
    {
        cdot3oameventlogoui = value;
        cdot3oameventlogoui.value_namespace = name_space;
        cdot3oameventlogoui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamEventLogRunningTotal")
    {
        cdot3oameventlogrunningtotal = value;
        cdot3oameventlogrunningtotal.value_namespace = name_space;
        cdot3oameventlogrunningtotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamEventLogThresholdHi")
    {
        cdot3oameventlogthresholdhi = value;
        cdot3oameventlogthresholdhi.value_namespace = name_space;
        cdot3oameventlogthresholdhi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamEventLogThresholdLo")
    {
        cdot3oameventlogthresholdlo = value;
        cdot3oameventlogthresholdlo.value_namespace = name_space;
        cdot3oameventlogthresholdlo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamEventLogTimestamp")
    {
        cdot3oameventlogtimestamp = value;
        cdot3oameventlogtimestamp.value_namespace = name_space;
        cdot3oameventlogtimestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamEventLogType")
    {
        cdot3oameventlogtype = value;
        cdot3oameventlogtype.value_namespace = name_space;
        cdot3oameventlogtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamEventLogValue")
    {
        cdot3oameventlogvalue = value;
        cdot3oameventlogvalue.value_namespace = name_space;
        cdot3oameventlogvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamEventLogWindowHi")
    {
        cdot3oameventlogwindowhi = value;
        cdot3oameventlogwindowhi.value_namespace = name_space;
        cdot3oameventlogwindowhi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamEventLogWindowLo")
    {
        cdot3oameventlogwindowlo = value;
        cdot3oameventlogwindowlo.value_namespace = name_space;
        cdot3oameventlogwindowlo.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogIndex")
    {
        cdot3oameventlogindex.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogEventTotal")
    {
        cdot3oameventlogeventtotal.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogLocation")
    {
        cdot3oameventloglocation.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogOui")
    {
        cdot3oameventlogoui.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogRunningTotal")
    {
        cdot3oameventlogrunningtotal.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogThresholdHi")
    {
        cdot3oameventlogthresholdhi.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogThresholdLo")
    {
        cdot3oameventlogthresholdlo.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogTimestamp")
    {
        cdot3oameventlogtimestamp.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogType")
    {
        cdot3oameventlogtype.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogValue")
    {
        cdot3oameventlogvalue.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogWindowHi")
    {
        cdot3oameventlogwindowhi.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogWindowLo")
    {
        cdot3oameventlogwindowlo.yfilter = yfilter;
    }
}

bool CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdot3OamEventLogIndex" || name == "cdot3OamEventLogEventTotal" || name == "cdot3OamEventLogLocation" || name == "cdot3OamEventLogOui" || name == "cdot3OamEventLogRunningTotal" || name == "cdot3OamEventLogThresholdHi" || name == "cdot3OamEventLogThresholdLo" || name == "cdot3OamEventLogTimestamp" || name == "cdot3OamEventLogType" || name == "cdot3OamEventLogValue" || name == "cdot3OamEventLogWindowHi" || name == "cdot3OamEventLogWindowLo")
        return true;
    return false;
}

const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oamadminstate::disabled {1, "disabled"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oamadminstate::enabled {2, "enabled"};

const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oamoperstatus::disabled {1, "disabled"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oamoperstatus::linkFault {2, "linkFault"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oamoperstatus::passiveWait {3, "passiveWait"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oamoperstatus::activeSendLocal {4, "activeSendLocal"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oamoperstatus::sendLocalAndRemote {5, "sendLocalAndRemote"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oamoperstatus::sendLocalAndRemoteOk {6, "sendLocalAndRemoteOk"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oamoperstatus::oamPeeringLocallyRejected {7, "oamPeeringLocallyRejected"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oamoperstatus::oamPeeringRemotelyRejected {8, "oamPeeringRemotelyRejected"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oamoperstatus::operational {9, "operational"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oamoperstatus::nonOperHalfDuplex {10, "nonOperHalfDuplex"};

const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oammode::active {1, "active"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3Oammode::passive {2, "passive"};

const Enum::YLeaf CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::Cdot3Oampeermode::active {1, "active"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::Cdot3Oampeermode::passive {2, "passive"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::Cdot3Oampeermode::unknown {3, "unknown"};

const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3Oamloopbackstatus::noLoopback {1, "noLoopback"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3Oamloopbackstatus::initiatingLoopback {2, "initiatingLoopback"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3Oamloopbackstatus::remoteLoopback {3, "remoteLoopback"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3Oamloopbackstatus::terminatingLoopback {4, "terminatingLoopback"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3Oamloopbackstatus::localLoopback {5, "localLoopback"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3Oamloopbackstatus::unknown {6, "unknown"};

const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3Oamloopbackignorerx::ignore {1, "ignore"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3Oamloopbackignorerx::process {2, "process"};

const Enum::YLeaf CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry::Cdot3Oameventloglocation::local {1, "local"};
const Enum::YLeaf CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry::Cdot3Oameventloglocation::remote {2, "remote"};


}
}

