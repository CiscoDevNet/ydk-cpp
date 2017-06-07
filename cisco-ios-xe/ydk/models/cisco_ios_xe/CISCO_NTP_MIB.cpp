
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_NTP_MIB.hpp"

namespace ydk {
namespace CISCO_NTP_MIB {

CiscoNtpMib::CiscoNtpMib()
    :
    cntpfilterregistertable(std::make_shared<CiscoNtpMib::Cntpfilterregistertable>())
	,cntppeersvartable(std::make_shared<CiscoNtpMib::Cntppeersvartable>())
	,cntpsystem(std::make_shared<CiscoNtpMib::Cntpsystem>())
{
    cntpfilterregistertable->parent = this;

    cntppeersvartable->parent = this;

    cntpsystem->parent = this;

    yang_name = "CISCO-NTP-MIB"; yang_parent_name = "CISCO-NTP-MIB";
}

CiscoNtpMib::~CiscoNtpMib()
{
}

bool CiscoNtpMib::has_data() const
{
    return (cntpfilterregistertable !=  nullptr && cntpfilterregistertable->has_data())
	|| (cntppeersvartable !=  nullptr && cntppeersvartable->has_data())
	|| (cntpsystem !=  nullptr && cntpsystem->has_data());
}

bool CiscoNtpMib::has_operation() const
{
    return is_set(operation)
	|| (cntpfilterregistertable !=  nullptr && cntpfilterregistertable->has_operation())
	|| (cntppeersvartable !=  nullptr && cntppeersvartable->has_operation())
	|| (cntpsystem !=  nullptr && cntpsystem->has_operation());
}

std::string CiscoNtpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NTP-MIB:CISCO-NTP-MIB";

    return path_buffer.str();

}

const EntityPath CiscoNtpMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoNtpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cntpFilterRegisterTable")
    {
        if(cntpfilterregistertable == nullptr)
        {
            cntpfilterregistertable = std::make_shared<CiscoNtpMib::Cntpfilterregistertable>();
        }
        return cntpfilterregistertable;
    }

    if(child_yang_name == "cntpPeersVarTable")
    {
        if(cntppeersvartable == nullptr)
        {
            cntppeersvartable = std::make_shared<CiscoNtpMib::Cntppeersvartable>();
        }
        return cntppeersvartable;
    }

    if(child_yang_name == "cntpSystem")
    {
        if(cntpsystem == nullptr)
        {
            cntpsystem = std::make_shared<CiscoNtpMib::Cntpsystem>();
        }
        return cntpsystem;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNtpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cntpfilterregistertable != nullptr)
    {
        children["cntpFilterRegisterTable"] = cntpfilterregistertable;
    }

    if(cntppeersvartable != nullptr)
    {
        children["cntpPeersVarTable"] = cntppeersvartable;
    }

    if(cntpsystem != nullptr)
    {
        children["cntpSystem"] = cntpsystem;
    }

    return children;
}

void CiscoNtpMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoNtpMib::clone_ptr() const
{
    return std::make_shared<CiscoNtpMib>();
}

std::string CiscoNtpMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoNtpMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoNtpMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoNtpMib::Cntpsystem::Cntpsystem()
    :
    cntpsysclock{YType::str, "cntpSysClock"},
    cntpsysleap{YType::enumeration, "cntpSysLeap"},
    cntpsyspeer{YType::int32, "cntpSysPeer"},
    cntpsyspoll{YType::int32, "cntpSysPoll"},
    cntpsysprecision{YType::int32, "cntpSysPrecision"},
    cntpsysrefid{YType::str, "cntpSysRefId"},
    cntpsysreftime{YType::str, "cntpSysRefTime"},
    cntpsysrootdelay{YType::str, "cntpSysRootDelay"},
    cntpsysrootdispersion{YType::str, "cntpSysRootDispersion"},
    cntpsyssrvstatus{YType::enumeration, "cntpSysSrvStatus"},
    cntpsysstratum{YType::int32, "cntpSysStratum"}
{
    yang_name = "cntpSystem"; yang_parent_name = "CISCO-NTP-MIB";
}

CiscoNtpMib::Cntpsystem::~Cntpsystem()
{
}

bool CiscoNtpMib::Cntpsystem::has_data() const
{
    return cntpsysclock.is_set
	|| cntpsysleap.is_set
	|| cntpsyspeer.is_set
	|| cntpsyspoll.is_set
	|| cntpsysprecision.is_set
	|| cntpsysrefid.is_set
	|| cntpsysreftime.is_set
	|| cntpsysrootdelay.is_set
	|| cntpsysrootdispersion.is_set
	|| cntpsyssrvstatus.is_set
	|| cntpsysstratum.is_set;
}

bool CiscoNtpMib::Cntpsystem::has_operation() const
{
    return is_set(operation)
	|| is_set(cntpsysclock.operation)
	|| is_set(cntpsysleap.operation)
	|| is_set(cntpsyspeer.operation)
	|| is_set(cntpsyspoll.operation)
	|| is_set(cntpsysprecision.operation)
	|| is_set(cntpsysrefid.operation)
	|| is_set(cntpsysreftime.operation)
	|| is_set(cntpsysrootdelay.operation)
	|| is_set(cntpsysrootdispersion.operation)
	|| is_set(cntpsyssrvstatus.operation)
	|| is_set(cntpsysstratum.operation);
}

std::string CiscoNtpMib::Cntpsystem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntpSystem";

    return path_buffer.str();

}

const EntityPath CiscoNtpMib::Cntpsystem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NTP-MIB:CISCO-NTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cntpsysclock.is_set || is_set(cntpsysclock.operation)) leaf_name_data.push_back(cntpsysclock.get_name_leafdata());
    if (cntpsysleap.is_set || is_set(cntpsysleap.operation)) leaf_name_data.push_back(cntpsysleap.get_name_leafdata());
    if (cntpsyspeer.is_set || is_set(cntpsyspeer.operation)) leaf_name_data.push_back(cntpsyspeer.get_name_leafdata());
    if (cntpsyspoll.is_set || is_set(cntpsyspoll.operation)) leaf_name_data.push_back(cntpsyspoll.get_name_leafdata());
    if (cntpsysprecision.is_set || is_set(cntpsysprecision.operation)) leaf_name_data.push_back(cntpsysprecision.get_name_leafdata());
    if (cntpsysrefid.is_set || is_set(cntpsysrefid.operation)) leaf_name_data.push_back(cntpsysrefid.get_name_leafdata());
    if (cntpsysreftime.is_set || is_set(cntpsysreftime.operation)) leaf_name_data.push_back(cntpsysreftime.get_name_leafdata());
    if (cntpsysrootdelay.is_set || is_set(cntpsysrootdelay.operation)) leaf_name_data.push_back(cntpsysrootdelay.get_name_leafdata());
    if (cntpsysrootdispersion.is_set || is_set(cntpsysrootdispersion.operation)) leaf_name_data.push_back(cntpsysrootdispersion.get_name_leafdata());
    if (cntpsyssrvstatus.is_set || is_set(cntpsyssrvstatus.operation)) leaf_name_data.push_back(cntpsyssrvstatus.get_name_leafdata());
    if (cntpsysstratum.is_set || is_set(cntpsysstratum.operation)) leaf_name_data.push_back(cntpsysstratum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNtpMib::Cntpsystem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNtpMib::Cntpsystem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoNtpMib::Cntpsystem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cntpSysClock")
    {
        cntpsysclock = value;
    }
    if(value_path == "cntpSysLeap")
    {
        cntpsysleap = value;
    }
    if(value_path == "cntpSysPeer")
    {
        cntpsyspeer = value;
    }
    if(value_path == "cntpSysPoll")
    {
        cntpsyspoll = value;
    }
    if(value_path == "cntpSysPrecision")
    {
        cntpsysprecision = value;
    }
    if(value_path == "cntpSysRefId")
    {
        cntpsysrefid = value;
    }
    if(value_path == "cntpSysRefTime")
    {
        cntpsysreftime = value;
    }
    if(value_path == "cntpSysRootDelay")
    {
        cntpsysrootdelay = value;
    }
    if(value_path == "cntpSysRootDispersion")
    {
        cntpsysrootdispersion = value;
    }
    if(value_path == "cntpSysSrvStatus")
    {
        cntpsyssrvstatus = value;
    }
    if(value_path == "cntpSysStratum")
    {
        cntpsysstratum = value;
    }
}

CiscoNtpMib::Cntppeersvartable::Cntppeersvartable()
{
    yang_name = "cntpPeersVarTable"; yang_parent_name = "CISCO-NTP-MIB";
}

CiscoNtpMib::Cntppeersvartable::~Cntppeersvartable()
{
}

bool CiscoNtpMib::Cntppeersvartable::has_data() const
{
    for (std::size_t index=0; index<cntppeersvarentry.size(); index++)
    {
        if(cntppeersvarentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoNtpMib::Cntppeersvartable::has_operation() const
{
    for (std::size_t index=0; index<cntppeersvarentry.size(); index++)
    {
        if(cntppeersvarentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoNtpMib::Cntppeersvartable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntpPeersVarTable";

    return path_buffer.str();

}

const EntityPath CiscoNtpMib::Cntppeersvartable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NTP-MIB:CISCO-NTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNtpMib::Cntppeersvartable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cntpPeersVarEntry")
    {
        for(auto const & c : cntppeersvarentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry>();
        c->parent = this;
        cntppeersvarentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNtpMib::Cntppeersvartable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cntppeersvarentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoNtpMib::Cntppeersvartable::set_value(const std::string & value_path, std::string value)
{
}

CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::Cntppeersvarentry()
    :
    cntppeersassocid{YType::int32, "cntpPeersAssocId"},
    cntppeersconfigured{YType::boolean, "cntpPeersConfigured"},
    cntppeersdelay{YType::str, "cntpPeersDelay"},
    cntppeersdispersion{YType::str, "cntpPeersDispersion"},
    cntppeersentrystatus{YType::enumeration, "cntpPeersEntryStatus"},
    cntppeersfiltervalidentries{YType::uint32, "cntpPeersFilterValidEntries"},
    cntppeershostaddress{YType::str, "cntpPeersHostAddress"},
    cntppeershostpoll{YType::int32, "cntpPeersHostPoll"},
    cntppeershostport{YType::int32, "cntpPeersHostPort"},
    cntppeersleap{YType::enumeration, "cntpPeersLeap"},
    cntppeersmode{YType::enumeration, "cntpPeersMode"},
    cntppeersoffset{YType::str, "cntpPeersOffset"},
    cntppeersorgtime{YType::str, "cntpPeersOrgTime"},
    cntppeerspeeraddress{YType::str, "cntpPeersPeerAddress"},
    cntppeerspeername{YType::str, "cntpPeersPeerName"},
    cntppeerspeerpoll{YType::int32, "cntpPeersPeerPoll"},
    cntppeerspeerport{YType::int32, "cntpPeersPeerPort"},
    cntppeerspeertype{YType::enumeration, "cntpPeersPeerType"},
    cntppeersprecision{YType::int32, "cntpPeersPrecision"},
    cntppeersprefpeer{YType::boolean, "cntpPeersPrefPeer"},
    cntppeersreach{YType::int32, "cntpPeersReach"},
    cntppeersreceivetime{YType::str, "cntpPeersReceiveTime"},
    cntppeersrefid{YType::str, "cntpPeersRefId"},
    cntppeersreftime{YType::str, "cntpPeersRefTime"},
    cntppeersrootdelay{YType::str, "cntpPeersRootDelay"},
    cntppeersrootdispersion{YType::str, "cntpPeersRootDispersion"},
    cntppeersstratum{YType::int32, "cntpPeersStratum"},
    cntppeerstimer{YType::int32, "cntpPeersTimer"},
    cntppeerstransmittime{YType::str, "cntpPeersTransmitTime"},
    cntppeersupdatetime{YType::int32, "cntpPeersUpdateTime"},
    cntppeersupdatetimerev1{YType::uint32, "cntpPeersUpdateTimeRev1"}
{
    yang_name = "cntpPeersVarEntry"; yang_parent_name = "cntpPeersVarTable";
}

CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::~Cntppeersvarentry()
{
}

bool CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::has_data() const
{
    return cntppeersassocid.is_set
	|| cntppeersconfigured.is_set
	|| cntppeersdelay.is_set
	|| cntppeersdispersion.is_set
	|| cntppeersentrystatus.is_set
	|| cntppeersfiltervalidentries.is_set
	|| cntppeershostaddress.is_set
	|| cntppeershostpoll.is_set
	|| cntppeershostport.is_set
	|| cntppeersleap.is_set
	|| cntppeersmode.is_set
	|| cntppeersoffset.is_set
	|| cntppeersorgtime.is_set
	|| cntppeerspeeraddress.is_set
	|| cntppeerspeername.is_set
	|| cntppeerspeerpoll.is_set
	|| cntppeerspeerport.is_set
	|| cntppeerspeertype.is_set
	|| cntppeersprecision.is_set
	|| cntppeersprefpeer.is_set
	|| cntppeersreach.is_set
	|| cntppeersreceivetime.is_set
	|| cntppeersrefid.is_set
	|| cntppeersreftime.is_set
	|| cntppeersrootdelay.is_set
	|| cntppeersrootdispersion.is_set
	|| cntppeersstratum.is_set
	|| cntppeerstimer.is_set
	|| cntppeerstransmittime.is_set
	|| cntppeersupdatetime.is_set
	|| cntppeersupdatetimerev1.is_set;
}

bool CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cntppeersassocid.operation)
	|| is_set(cntppeersconfigured.operation)
	|| is_set(cntppeersdelay.operation)
	|| is_set(cntppeersdispersion.operation)
	|| is_set(cntppeersentrystatus.operation)
	|| is_set(cntppeersfiltervalidentries.operation)
	|| is_set(cntppeershostaddress.operation)
	|| is_set(cntppeershostpoll.operation)
	|| is_set(cntppeershostport.operation)
	|| is_set(cntppeersleap.operation)
	|| is_set(cntppeersmode.operation)
	|| is_set(cntppeersoffset.operation)
	|| is_set(cntppeersorgtime.operation)
	|| is_set(cntppeerspeeraddress.operation)
	|| is_set(cntppeerspeername.operation)
	|| is_set(cntppeerspeerpoll.operation)
	|| is_set(cntppeerspeerport.operation)
	|| is_set(cntppeerspeertype.operation)
	|| is_set(cntppeersprecision.operation)
	|| is_set(cntppeersprefpeer.operation)
	|| is_set(cntppeersreach.operation)
	|| is_set(cntppeersreceivetime.operation)
	|| is_set(cntppeersrefid.operation)
	|| is_set(cntppeersreftime.operation)
	|| is_set(cntppeersrootdelay.operation)
	|| is_set(cntppeersrootdispersion.operation)
	|| is_set(cntppeersstratum.operation)
	|| is_set(cntppeerstimer.operation)
	|| is_set(cntppeerstransmittime.operation)
	|| is_set(cntppeersupdatetime.operation)
	|| is_set(cntppeersupdatetimerev1.operation);
}

std::string CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntpPeersVarEntry" <<"[cntpPeersAssocId='" <<cntppeersassocid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NTP-MIB:CISCO-NTP-MIB/cntpPeersVarTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cntppeersassocid.is_set || is_set(cntppeersassocid.operation)) leaf_name_data.push_back(cntppeersassocid.get_name_leafdata());
    if (cntppeersconfigured.is_set || is_set(cntppeersconfigured.operation)) leaf_name_data.push_back(cntppeersconfigured.get_name_leafdata());
    if (cntppeersdelay.is_set || is_set(cntppeersdelay.operation)) leaf_name_data.push_back(cntppeersdelay.get_name_leafdata());
    if (cntppeersdispersion.is_set || is_set(cntppeersdispersion.operation)) leaf_name_data.push_back(cntppeersdispersion.get_name_leafdata());
    if (cntppeersentrystatus.is_set || is_set(cntppeersentrystatus.operation)) leaf_name_data.push_back(cntppeersentrystatus.get_name_leafdata());
    if (cntppeersfiltervalidentries.is_set || is_set(cntppeersfiltervalidentries.operation)) leaf_name_data.push_back(cntppeersfiltervalidentries.get_name_leafdata());
    if (cntppeershostaddress.is_set || is_set(cntppeershostaddress.operation)) leaf_name_data.push_back(cntppeershostaddress.get_name_leafdata());
    if (cntppeershostpoll.is_set || is_set(cntppeershostpoll.operation)) leaf_name_data.push_back(cntppeershostpoll.get_name_leafdata());
    if (cntppeershostport.is_set || is_set(cntppeershostport.operation)) leaf_name_data.push_back(cntppeershostport.get_name_leafdata());
    if (cntppeersleap.is_set || is_set(cntppeersleap.operation)) leaf_name_data.push_back(cntppeersleap.get_name_leafdata());
    if (cntppeersmode.is_set || is_set(cntppeersmode.operation)) leaf_name_data.push_back(cntppeersmode.get_name_leafdata());
    if (cntppeersoffset.is_set || is_set(cntppeersoffset.operation)) leaf_name_data.push_back(cntppeersoffset.get_name_leafdata());
    if (cntppeersorgtime.is_set || is_set(cntppeersorgtime.operation)) leaf_name_data.push_back(cntppeersorgtime.get_name_leafdata());
    if (cntppeerspeeraddress.is_set || is_set(cntppeerspeeraddress.operation)) leaf_name_data.push_back(cntppeerspeeraddress.get_name_leafdata());
    if (cntppeerspeername.is_set || is_set(cntppeerspeername.operation)) leaf_name_data.push_back(cntppeerspeername.get_name_leafdata());
    if (cntppeerspeerpoll.is_set || is_set(cntppeerspeerpoll.operation)) leaf_name_data.push_back(cntppeerspeerpoll.get_name_leafdata());
    if (cntppeerspeerport.is_set || is_set(cntppeerspeerport.operation)) leaf_name_data.push_back(cntppeerspeerport.get_name_leafdata());
    if (cntppeerspeertype.is_set || is_set(cntppeerspeertype.operation)) leaf_name_data.push_back(cntppeerspeertype.get_name_leafdata());
    if (cntppeersprecision.is_set || is_set(cntppeersprecision.operation)) leaf_name_data.push_back(cntppeersprecision.get_name_leafdata());
    if (cntppeersprefpeer.is_set || is_set(cntppeersprefpeer.operation)) leaf_name_data.push_back(cntppeersprefpeer.get_name_leafdata());
    if (cntppeersreach.is_set || is_set(cntppeersreach.operation)) leaf_name_data.push_back(cntppeersreach.get_name_leafdata());
    if (cntppeersreceivetime.is_set || is_set(cntppeersreceivetime.operation)) leaf_name_data.push_back(cntppeersreceivetime.get_name_leafdata());
    if (cntppeersrefid.is_set || is_set(cntppeersrefid.operation)) leaf_name_data.push_back(cntppeersrefid.get_name_leafdata());
    if (cntppeersreftime.is_set || is_set(cntppeersreftime.operation)) leaf_name_data.push_back(cntppeersreftime.get_name_leafdata());
    if (cntppeersrootdelay.is_set || is_set(cntppeersrootdelay.operation)) leaf_name_data.push_back(cntppeersrootdelay.get_name_leafdata());
    if (cntppeersrootdispersion.is_set || is_set(cntppeersrootdispersion.operation)) leaf_name_data.push_back(cntppeersrootdispersion.get_name_leafdata());
    if (cntppeersstratum.is_set || is_set(cntppeersstratum.operation)) leaf_name_data.push_back(cntppeersstratum.get_name_leafdata());
    if (cntppeerstimer.is_set || is_set(cntppeerstimer.operation)) leaf_name_data.push_back(cntppeerstimer.get_name_leafdata());
    if (cntppeerstransmittime.is_set || is_set(cntppeerstransmittime.operation)) leaf_name_data.push_back(cntppeerstransmittime.get_name_leafdata());
    if (cntppeersupdatetime.is_set || is_set(cntppeersupdatetime.operation)) leaf_name_data.push_back(cntppeersupdatetime.get_name_leafdata());
    if (cntppeersupdatetimerev1.is_set || is_set(cntppeersupdatetimerev1.operation)) leaf_name_data.push_back(cntppeersupdatetimerev1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cntpPeersAssocId")
    {
        cntppeersassocid = value;
    }
    if(value_path == "cntpPeersConfigured")
    {
        cntppeersconfigured = value;
    }
    if(value_path == "cntpPeersDelay")
    {
        cntppeersdelay = value;
    }
    if(value_path == "cntpPeersDispersion")
    {
        cntppeersdispersion = value;
    }
    if(value_path == "cntpPeersEntryStatus")
    {
        cntppeersentrystatus = value;
    }
    if(value_path == "cntpPeersFilterValidEntries")
    {
        cntppeersfiltervalidentries = value;
    }
    if(value_path == "cntpPeersHostAddress")
    {
        cntppeershostaddress = value;
    }
    if(value_path == "cntpPeersHostPoll")
    {
        cntppeershostpoll = value;
    }
    if(value_path == "cntpPeersHostPort")
    {
        cntppeershostport = value;
    }
    if(value_path == "cntpPeersLeap")
    {
        cntppeersleap = value;
    }
    if(value_path == "cntpPeersMode")
    {
        cntppeersmode = value;
    }
    if(value_path == "cntpPeersOffset")
    {
        cntppeersoffset = value;
    }
    if(value_path == "cntpPeersOrgTime")
    {
        cntppeersorgtime = value;
    }
    if(value_path == "cntpPeersPeerAddress")
    {
        cntppeerspeeraddress = value;
    }
    if(value_path == "cntpPeersPeerName")
    {
        cntppeerspeername = value;
    }
    if(value_path == "cntpPeersPeerPoll")
    {
        cntppeerspeerpoll = value;
    }
    if(value_path == "cntpPeersPeerPort")
    {
        cntppeerspeerport = value;
    }
    if(value_path == "cntpPeersPeerType")
    {
        cntppeerspeertype = value;
    }
    if(value_path == "cntpPeersPrecision")
    {
        cntppeersprecision = value;
    }
    if(value_path == "cntpPeersPrefPeer")
    {
        cntppeersprefpeer = value;
    }
    if(value_path == "cntpPeersReach")
    {
        cntppeersreach = value;
    }
    if(value_path == "cntpPeersReceiveTime")
    {
        cntppeersreceivetime = value;
    }
    if(value_path == "cntpPeersRefId")
    {
        cntppeersrefid = value;
    }
    if(value_path == "cntpPeersRefTime")
    {
        cntppeersreftime = value;
    }
    if(value_path == "cntpPeersRootDelay")
    {
        cntppeersrootdelay = value;
    }
    if(value_path == "cntpPeersRootDispersion")
    {
        cntppeersrootdispersion = value;
    }
    if(value_path == "cntpPeersStratum")
    {
        cntppeersstratum = value;
    }
    if(value_path == "cntpPeersTimer")
    {
        cntppeerstimer = value;
    }
    if(value_path == "cntpPeersTransmitTime")
    {
        cntppeerstransmittime = value;
    }
    if(value_path == "cntpPeersUpdateTime")
    {
        cntppeersupdatetime = value;
    }
    if(value_path == "cntpPeersUpdateTimeRev1")
    {
        cntppeersupdatetimerev1 = value;
    }
}

CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregistertable()
{
    yang_name = "cntpFilterRegisterTable"; yang_parent_name = "CISCO-NTP-MIB";
}

CiscoNtpMib::Cntpfilterregistertable::~Cntpfilterregistertable()
{
}

bool CiscoNtpMib::Cntpfilterregistertable::has_data() const
{
    for (std::size_t index=0; index<cntpfilterregisterentry.size(); index++)
    {
        if(cntpfilterregisterentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoNtpMib::Cntpfilterregistertable::has_operation() const
{
    for (std::size_t index=0; index<cntpfilterregisterentry.size(); index++)
    {
        if(cntpfilterregisterentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoNtpMib::Cntpfilterregistertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntpFilterRegisterTable";

    return path_buffer.str();

}

const EntityPath CiscoNtpMib::Cntpfilterregistertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NTP-MIB:CISCO-NTP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNtpMib::Cntpfilterregistertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cntpFilterRegisterEntry")
    {
        for(auto const & c : cntpfilterregisterentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry>();
        c->parent = this;
        cntpfilterregisterentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNtpMib::Cntpfilterregistertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cntpfilterregisterentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoNtpMib::Cntpfilterregistertable::set_value(const std::string & value_path, std::string value)
{
}

CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry::Cntpfilterregisterentry()
    :
    cntppeersassocid{YType::str, "cntpPeersAssocId"},
    cntpfilterindex{YType::int32, "cntpFilterIndex"},
    cntpfilterpeersdelay{YType::str, "cntpFilterPeersDelay"},
    cntpfilterpeersdispersion{YType::str, "cntpFilterPeersDispersion"},
    cntpfilterpeersoffset{YType::str, "cntpFilterPeersOffset"}
{
    yang_name = "cntpFilterRegisterEntry"; yang_parent_name = "cntpFilterRegisterTable";
}

CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry::~Cntpfilterregisterentry()
{
}

bool CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry::has_data() const
{
    return cntppeersassocid.is_set
	|| cntpfilterindex.is_set
	|| cntpfilterpeersdelay.is_set
	|| cntpfilterpeersdispersion.is_set
	|| cntpfilterpeersoffset.is_set;
}

bool CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cntppeersassocid.operation)
	|| is_set(cntpfilterindex.operation)
	|| is_set(cntpfilterpeersdelay.operation)
	|| is_set(cntpfilterpeersdispersion.operation)
	|| is_set(cntpfilterpeersoffset.operation);
}

std::string CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntpFilterRegisterEntry" <<"[cntpPeersAssocId='" <<cntppeersassocid <<"']" <<"[cntpFilterIndex='" <<cntpfilterindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NTP-MIB:CISCO-NTP-MIB/cntpFilterRegisterTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cntppeersassocid.is_set || is_set(cntppeersassocid.operation)) leaf_name_data.push_back(cntppeersassocid.get_name_leafdata());
    if (cntpfilterindex.is_set || is_set(cntpfilterindex.operation)) leaf_name_data.push_back(cntpfilterindex.get_name_leafdata());
    if (cntpfilterpeersdelay.is_set || is_set(cntpfilterpeersdelay.operation)) leaf_name_data.push_back(cntpfilterpeersdelay.get_name_leafdata());
    if (cntpfilterpeersdispersion.is_set || is_set(cntpfilterpeersdispersion.operation)) leaf_name_data.push_back(cntpfilterpeersdispersion.get_name_leafdata());
    if (cntpfilterpeersoffset.is_set || is_set(cntpfilterpeersoffset.operation)) leaf_name_data.push_back(cntpfilterpeersoffset.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cntpPeersAssocId")
    {
        cntppeersassocid = value;
    }
    if(value_path == "cntpFilterIndex")
    {
        cntpfilterindex = value;
    }
    if(value_path == "cntpFilterPeersDelay")
    {
        cntpfilterpeersdelay = value;
    }
    if(value_path == "cntpFilterPeersDispersion")
    {
        cntpfilterpeersdispersion = value;
    }
    if(value_path == "cntpFilterPeersOffset")
    {
        cntpfilterpeersoffset = value;
    }
}

const Enum::YLeaf NtpleapindicatorEnum::noWarning {0, "noWarning"};
const Enum::YLeaf NtpleapindicatorEnum::addSecond {1, "addSecond"};
const Enum::YLeaf NtpleapindicatorEnum::subtractSecond {2, "subtractSecond"};
const Enum::YLeaf NtpleapindicatorEnum::alarm {3, "alarm"};

const Enum::YLeaf CiscoNtpMib::Cntpsystem::CntpsyssrvstatusEnum::unknown {1, "unknown"};
const Enum::YLeaf CiscoNtpMib::Cntpsystem::CntpsyssrvstatusEnum::notRunning {2, "notRunning"};
const Enum::YLeaf CiscoNtpMib::Cntpsystem::CntpsyssrvstatusEnum::notSynchronized {3, "notSynchronized"};
const Enum::YLeaf CiscoNtpMib::Cntpsystem::CntpsyssrvstatusEnum::syncToLocal {4, "syncToLocal"};
const Enum::YLeaf CiscoNtpMib::Cntpsystem::CntpsyssrvstatusEnum::syncToRefclock {5, "syncToRefclock"};
const Enum::YLeaf CiscoNtpMib::Cntpsystem::CntpsyssrvstatusEnum::syncToRemoteServer {6, "syncToRemoteServer"};

const Enum::YLeaf CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::CntppeersmodeEnum::unspecified {0, "unspecified"};
const Enum::YLeaf CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::CntppeersmodeEnum::symmetricActive {1, "symmetricActive"};
const Enum::YLeaf CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::CntppeersmodeEnum::symmetricPassive {2, "symmetricPassive"};
const Enum::YLeaf CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::CntppeersmodeEnum::client {3, "client"};
const Enum::YLeaf CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::CntppeersmodeEnum::server {4, "server"};
const Enum::YLeaf CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::CntppeersmodeEnum::broadcast {5, "broadcast"};
const Enum::YLeaf CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::CntppeersmodeEnum::reservedControl {6, "reservedControl"};
const Enum::YLeaf CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::CntppeersmodeEnum::reservedPrivate {7, "reservedPrivate"};


}
}

