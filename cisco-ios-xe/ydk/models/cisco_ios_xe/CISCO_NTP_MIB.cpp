
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_NTP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
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
    return is_set(yfilter)
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

void CiscoNtpMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoNtpMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> CiscoNtpMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoNtpMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntpFilterRegisterTable" || name == "cntpPeersVarTable" || name == "cntpSystem")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(cntpsysclock.yfilter)
	|| ydk::is_set(cntpsysleap.yfilter)
	|| ydk::is_set(cntpsyspeer.yfilter)
	|| ydk::is_set(cntpsyspoll.yfilter)
	|| ydk::is_set(cntpsysprecision.yfilter)
	|| ydk::is_set(cntpsysrefid.yfilter)
	|| ydk::is_set(cntpsysreftime.yfilter)
	|| ydk::is_set(cntpsysrootdelay.yfilter)
	|| ydk::is_set(cntpsysrootdispersion.yfilter)
	|| ydk::is_set(cntpsyssrvstatus.yfilter)
	|| ydk::is_set(cntpsysstratum.yfilter);
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

    if (cntpsysclock.is_set || is_set(cntpsysclock.yfilter)) leaf_name_data.push_back(cntpsysclock.get_name_leafdata());
    if (cntpsysleap.is_set || is_set(cntpsysleap.yfilter)) leaf_name_data.push_back(cntpsysleap.get_name_leafdata());
    if (cntpsyspeer.is_set || is_set(cntpsyspeer.yfilter)) leaf_name_data.push_back(cntpsyspeer.get_name_leafdata());
    if (cntpsyspoll.is_set || is_set(cntpsyspoll.yfilter)) leaf_name_data.push_back(cntpsyspoll.get_name_leafdata());
    if (cntpsysprecision.is_set || is_set(cntpsysprecision.yfilter)) leaf_name_data.push_back(cntpsysprecision.get_name_leafdata());
    if (cntpsysrefid.is_set || is_set(cntpsysrefid.yfilter)) leaf_name_data.push_back(cntpsysrefid.get_name_leafdata());
    if (cntpsysreftime.is_set || is_set(cntpsysreftime.yfilter)) leaf_name_data.push_back(cntpsysreftime.get_name_leafdata());
    if (cntpsysrootdelay.is_set || is_set(cntpsysrootdelay.yfilter)) leaf_name_data.push_back(cntpsysrootdelay.get_name_leafdata());
    if (cntpsysrootdispersion.is_set || is_set(cntpsysrootdispersion.yfilter)) leaf_name_data.push_back(cntpsysrootdispersion.get_name_leafdata());
    if (cntpsyssrvstatus.is_set || is_set(cntpsyssrvstatus.yfilter)) leaf_name_data.push_back(cntpsyssrvstatus.get_name_leafdata());
    if (cntpsysstratum.is_set || is_set(cntpsysstratum.yfilter)) leaf_name_data.push_back(cntpsysstratum.get_name_leafdata());


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

void CiscoNtpMib::Cntpsystem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cntpSysClock")
    {
        cntpsysclock = value;
        cntpsysclock.value_namespace = name_space;
        cntpsysclock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpSysLeap")
    {
        cntpsysleap = value;
        cntpsysleap.value_namespace = name_space;
        cntpsysleap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpSysPeer")
    {
        cntpsyspeer = value;
        cntpsyspeer.value_namespace = name_space;
        cntpsyspeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpSysPoll")
    {
        cntpsyspoll = value;
        cntpsyspoll.value_namespace = name_space;
        cntpsyspoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpSysPrecision")
    {
        cntpsysprecision = value;
        cntpsysprecision.value_namespace = name_space;
        cntpsysprecision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpSysRefId")
    {
        cntpsysrefid = value;
        cntpsysrefid.value_namespace = name_space;
        cntpsysrefid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpSysRefTime")
    {
        cntpsysreftime = value;
        cntpsysreftime.value_namespace = name_space;
        cntpsysreftime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpSysRootDelay")
    {
        cntpsysrootdelay = value;
        cntpsysrootdelay.value_namespace = name_space;
        cntpsysrootdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpSysRootDispersion")
    {
        cntpsysrootdispersion = value;
        cntpsysrootdispersion.value_namespace = name_space;
        cntpsysrootdispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpSysSrvStatus")
    {
        cntpsyssrvstatus = value;
        cntpsyssrvstatus.value_namespace = name_space;
        cntpsyssrvstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpSysStratum")
    {
        cntpsysstratum = value;
        cntpsysstratum.value_namespace = name_space;
        cntpsysstratum.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoNtpMib::Cntpsystem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cntpSysClock")
    {
        cntpsysclock.yfilter = yfilter;
    }
    if(value_path == "cntpSysLeap")
    {
        cntpsysleap.yfilter = yfilter;
    }
    if(value_path == "cntpSysPeer")
    {
        cntpsyspeer.yfilter = yfilter;
    }
    if(value_path == "cntpSysPoll")
    {
        cntpsyspoll.yfilter = yfilter;
    }
    if(value_path == "cntpSysPrecision")
    {
        cntpsysprecision.yfilter = yfilter;
    }
    if(value_path == "cntpSysRefId")
    {
        cntpsysrefid.yfilter = yfilter;
    }
    if(value_path == "cntpSysRefTime")
    {
        cntpsysreftime.yfilter = yfilter;
    }
    if(value_path == "cntpSysRootDelay")
    {
        cntpsysrootdelay.yfilter = yfilter;
    }
    if(value_path == "cntpSysRootDispersion")
    {
        cntpsysrootdispersion.yfilter = yfilter;
    }
    if(value_path == "cntpSysSrvStatus")
    {
        cntpsyssrvstatus.yfilter = yfilter;
    }
    if(value_path == "cntpSysStratum")
    {
        cntpsysstratum.yfilter = yfilter;
    }
}

bool CiscoNtpMib::Cntpsystem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntpSysClock" || name == "cntpSysLeap" || name == "cntpSysPeer" || name == "cntpSysPoll" || name == "cntpSysPrecision" || name == "cntpSysRefId" || name == "cntpSysRefTime" || name == "cntpSysRootDelay" || name == "cntpSysRootDispersion" || name == "cntpSysSrvStatus" || name == "cntpSysStratum")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoNtpMib::Cntppeersvartable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoNtpMib::Cntppeersvartable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoNtpMib::Cntppeersvartable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntpPeersVarEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(cntppeersassocid.yfilter)
	|| ydk::is_set(cntppeersconfigured.yfilter)
	|| ydk::is_set(cntppeersdelay.yfilter)
	|| ydk::is_set(cntppeersdispersion.yfilter)
	|| ydk::is_set(cntppeersentrystatus.yfilter)
	|| ydk::is_set(cntppeersfiltervalidentries.yfilter)
	|| ydk::is_set(cntppeershostaddress.yfilter)
	|| ydk::is_set(cntppeershostpoll.yfilter)
	|| ydk::is_set(cntppeershostport.yfilter)
	|| ydk::is_set(cntppeersleap.yfilter)
	|| ydk::is_set(cntppeersmode.yfilter)
	|| ydk::is_set(cntppeersoffset.yfilter)
	|| ydk::is_set(cntppeersorgtime.yfilter)
	|| ydk::is_set(cntppeerspeeraddress.yfilter)
	|| ydk::is_set(cntppeerspeername.yfilter)
	|| ydk::is_set(cntppeerspeerpoll.yfilter)
	|| ydk::is_set(cntppeerspeerport.yfilter)
	|| ydk::is_set(cntppeerspeertype.yfilter)
	|| ydk::is_set(cntppeersprecision.yfilter)
	|| ydk::is_set(cntppeersprefpeer.yfilter)
	|| ydk::is_set(cntppeersreach.yfilter)
	|| ydk::is_set(cntppeersreceivetime.yfilter)
	|| ydk::is_set(cntppeersrefid.yfilter)
	|| ydk::is_set(cntppeersreftime.yfilter)
	|| ydk::is_set(cntppeersrootdelay.yfilter)
	|| ydk::is_set(cntppeersrootdispersion.yfilter)
	|| ydk::is_set(cntppeersstratum.yfilter)
	|| ydk::is_set(cntppeerstimer.yfilter)
	|| ydk::is_set(cntppeerstransmittime.yfilter)
	|| ydk::is_set(cntppeersupdatetime.yfilter)
	|| ydk::is_set(cntppeersupdatetimerev1.yfilter);
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

    if (cntppeersassocid.is_set || is_set(cntppeersassocid.yfilter)) leaf_name_data.push_back(cntppeersassocid.get_name_leafdata());
    if (cntppeersconfigured.is_set || is_set(cntppeersconfigured.yfilter)) leaf_name_data.push_back(cntppeersconfigured.get_name_leafdata());
    if (cntppeersdelay.is_set || is_set(cntppeersdelay.yfilter)) leaf_name_data.push_back(cntppeersdelay.get_name_leafdata());
    if (cntppeersdispersion.is_set || is_set(cntppeersdispersion.yfilter)) leaf_name_data.push_back(cntppeersdispersion.get_name_leafdata());
    if (cntppeersentrystatus.is_set || is_set(cntppeersentrystatus.yfilter)) leaf_name_data.push_back(cntppeersentrystatus.get_name_leafdata());
    if (cntppeersfiltervalidentries.is_set || is_set(cntppeersfiltervalidentries.yfilter)) leaf_name_data.push_back(cntppeersfiltervalidentries.get_name_leafdata());
    if (cntppeershostaddress.is_set || is_set(cntppeershostaddress.yfilter)) leaf_name_data.push_back(cntppeershostaddress.get_name_leafdata());
    if (cntppeershostpoll.is_set || is_set(cntppeershostpoll.yfilter)) leaf_name_data.push_back(cntppeershostpoll.get_name_leafdata());
    if (cntppeershostport.is_set || is_set(cntppeershostport.yfilter)) leaf_name_data.push_back(cntppeershostport.get_name_leafdata());
    if (cntppeersleap.is_set || is_set(cntppeersleap.yfilter)) leaf_name_data.push_back(cntppeersleap.get_name_leafdata());
    if (cntppeersmode.is_set || is_set(cntppeersmode.yfilter)) leaf_name_data.push_back(cntppeersmode.get_name_leafdata());
    if (cntppeersoffset.is_set || is_set(cntppeersoffset.yfilter)) leaf_name_data.push_back(cntppeersoffset.get_name_leafdata());
    if (cntppeersorgtime.is_set || is_set(cntppeersorgtime.yfilter)) leaf_name_data.push_back(cntppeersorgtime.get_name_leafdata());
    if (cntppeerspeeraddress.is_set || is_set(cntppeerspeeraddress.yfilter)) leaf_name_data.push_back(cntppeerspeeraddress.get_name_leafdata());
    if (cntppeerspeername.is_set || is_set(cntppeerspeername.yfilter)) leaf_name_data.push_back(cntppeerspeername.get_name_leafdata());
    if (cntppeerspeerpoll.is_set || is_set(cntppeerspeerpoll.yfilter)) leaf_name_data.push_back(cntppeerspeerpoll.get_name_leafdata());
    if (cntppeerspeerport.is_set || is_set(cntppeerspeerport.yfilter)) leaf_name_data.push_back(cntppeerspeerport.get_name_leafdata());
    if (cntppeerspeertype.is_set || is_set(cntppeerspeertype.yfilter)) leaf_name_data.push_back(cntppeerspeertype.get_name_leafdata());
    if (cntppeersprecision.is_set || is_set(cntppeersprecision.yfilter)) leaf_name_data.push_back(cntppeersprecision.get_name_leafdata());
    if (cntppeersprefpeer.is_set || is_set(cntppeersprefpeer.yfilter)) leaf_name_data.push_back(cntppeersprefpeer.get_name_leafdata());
    if (cntppeersreach.is_set || is_set(cntppeersreach.yfilter)) leaf_name_data.push_back(cntppeersreach.get_name_leafdata());
    if (cntppeersreceivetime.is_set || is_set(cntppeersreceivetime.yfilter)) leaf_name_data.push_back(cntppeersreceivetime.get_name_leafdata());
    if (cntppeersrefid.is_set || is_set(cntppeersrefid.yfilter)) leaf_name_data.push_back(cntppeersrefid.get_name_leafdata());
    if (cntppeersreftime.is_set || is_set(cntppeersreftime.yfilter)) leaf_name_data.push_back(cntppeersreftime.get_name_leafdata());
    if (cntppeersrootdelay.is_set || is_set(cntppeersrootdelay.yfilter)) leaf_name_data.push_back(cntppeersrootdelay.get_name_leafdata());
    if (cntppeersrootdispersion.is_set || is_set(cntppeersrootdispersion.yfilter)) leaf_name_data.push_back(cntppeersrootdispersion.get_name_leafdata());
    if (cntppeersstratum.is_set || is_set(cntppeersstratum.yfilter)) leaf_name_data.push_back(cntppeersstratum.get_name_leafdata());
    if (cntppeerstimer.is_set || is_set(cntppeerstimer.yfilter)) leaf_name_data.push_back(cntppeerstimer.get_name_leafdata());
    if (cntppeerstransmittime.is_set || is_set(cntppeerstransmittime.yfilter)) leaf_name_data.push_back(cntppeerstransmittime.get_name_leafdata());
    if (cntppeersupdatetime.is_set || is_set(cntppeersupdatetime.yfilter)) leaf_name_data.push_back(cntppeersupdatetime.get_name_leafdata());
    if (cntppeersupdatetimerev1.is_set || is_set(cntppeersupdatetimerev1.yfilter)) leaf_name_data.push_back(cntppeersupdatetimerev1.get_name_leafdata());


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

void CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cntpPeersAssocId")
    {
        cntppeersassocid = value;
        cntppeersassocid.value_namespace = name_space;
        cntppeersassocid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersConfigured")
    {
        cntppeersconfigured = value;
        cntppeersconfigured.value_namespace = name_space;
        cntppeersconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersDelay")
    {
        cntppeersdelay = value;
        cntppeersdelay.value_namespace = name_space;
        cntppeersdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersDispersion")
    {
        cntppeersdispersion = value;
        cntppeersdispersion.value_namespace = name_space;
        cntppeersdispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersEntryStatus")
    {
        cntppeersentrystatus = value;
        cntppeersentrystatus.value_namespace = name_space;
        cntppeersentrystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersFilterValidEntries")
    {
        cntppeersfiltervalidentries = value;
        cntppeersfiltervalidentries.value_namespace = name_space;
        cntppeersfiltervalidentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersHostAddress")
    {
        cntppeershostaddress = value;
        cntppeershostaddress.value_namespace = name_space;
        cntppeershostaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersHostPoll")
    {
        cntppeershostpoll = value;
        cntppeershostpoll.value_namespace = name_space;
        cntppeershostpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersHostPort")
    {
        cntppeershostport = value;
        cntppeershostport.value_namespace = name_space;
        cntppeershostport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersLeap")
    {
        cntppeersleap = value;
        cntppeersleap.value_namespace = name_space;
        cntppeersleap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersMode")
    {
        cntppeersmode = value;
        cntppeersmode.value_namespace = name_space;
        cntppeersmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersOffset")
    {
        cntppeersoffset = value;
        cntppeersoffset.value_namespace = name_space;
        cntppeersoffset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersOrgTime")
    {
        cntppeersorgtime = value;
        cntppeersorgtime.value_namespace = name_space;
        cntppeersorgtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersPeerAddress")
    {
        cntppeerspeeraddress = value;
        cntppeerspeeraddress.value_namespace = name_space;
        cntppeerspeeraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersPeerName")
    {
        cntppeerspeername = value;
        cntppeerspeername.value_namespace = name_space;
        cntppeerspeername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersPeerPoll")
    {
        cntppeerspeerpoll = value;
        cntppeerspeerpoll.value_namespace = name_space;
        cntppeerspeerpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersPeerPort")
    {
        cntppeerspeerport = value;
        cntppeerspeerport.value_namespace = name_space;
        cntppeerspeerport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersPeerType")
    {
        cntppeerspeertype = value;
        cntppeerspeertype.value_namespace = name_space;
        cntppeerspeertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersPrecision")
    {
        cntppeersprecision = value;
        cntppeersprecision.value_namespace = name_space;
        cntppeersprecision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersPrefPeer")
    {
        cntppeersprefpeer = value;
        cntppeersprefpeer.value_namespace = name_space;
        cntppeersprefpeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersReach")
    {
        cntppeersreach = value;
        cntppeersreach.value_namespace = name_space;
        cntppeersreach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersReceiveTime")
    {
        cntppeersreceivetime = value;
        cntppeersreceivetime.value_namespace = name_space;
        cntppeersreceivetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersRefId")
    {
        cntppeersrefid = value;
        cntppeersrefid.value_namespace = name_space;
        cntppeersrefid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersRefTime")
    {
        cntppeersreftime = value;
        cntppeersreftime.value_namespace = name_space;
        cntppeersreftime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersRootDelay")
    {
        cntppeersrootdelay = value;
        cntppeersrootdelay.value_namespace = name_space;
        cntppeersrootdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersRootDispersion")
    {
        cntppeersrootdispersion = value;
        cntppeersrootdispersion.value_namespace = name_space;
        cntppeersrootdispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersStratum")
    {
        cntppeersstratum = value;
        cntppeersstratum.value_namespace = name_space;
        cntppeersstratum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersTimer")
    {
        cntppeerstimer = value;
        cntppeerstimer.value_namespace = name_space;
        cntppeerstimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersTransmitTime")
    {
        cntppeerstransmittime = value;
        cntppeerstransmittime.value_namespace = name_space;
        cntppeerstransmittime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersUpdateTime")
    {
        cntppeersupdatetime = value;
        cntppeersupdatetime.value_namespace = name_space;
        cntppeersupdatetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersUpdateTimeRev1")
    {
        cntppeersupdatetimerev1 = value;
        cntppeersupdatetimerev1.value_namespace = name_space;
        cntppeersupdatetimerev1.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cntpPeersAssocId")
    {
        cntppeersassocid.yfilter = yfilter;
    }
    if(value_path == "cntpPeersConfigured")
    {
        cntppeersconfigured.yfilter = yfilter;
    }
    if(value_path == "cntpPeersDelay")
    {
        cntppeersdelay.yfilter = yfilter;
    }
    if(value_path == "cntpPeersDispersion")
    {
        cntppeersdispersion.yfilter = yfilter;
    }
    if(value_path == "cntpPeersEntryStatus")
    {
        cntppeersentrystatus.yfilter = yfilter;
    }
    if(value_path == "cntpPeersFilterValidEntries")
    {
        cntppeersfiltervalidentries.yfilter = yfilter;
    }
    if(value_path == "cntpPeersHostAddress")
    {
        cntppeershostaddress.yfilter = yfilter;
    }
    if(value_path == "cntpPeersHostPoll")
    {
        cntppeershostpoll.yfilter = yfilter;
    }
    if(value_path == "cntpPeersHostPort")
    {
        cntppeershostport.yfilter = yfilter;
    }
    if(value_path == "cntpPeersLeap")
    {
        cntppeersleap.yfilter = yfilter;
    }
    if(value_path == "cntpPeersMode")
    {
        cntppeersmode.yfilter = yfilter;
    }
    if(value_path == "cntpPeersOffset")
    {
        cntppeersoffset.yfilter = yfilter;
    }
    if(value_path == "cntpPeersOrgTime")
    {
        cntppeersorgtime.yfilter = yfilter;
    }
    if(value_path == "cntpPeersPeerAddress")
    {
        cntppeerspeeraddress.yfilter = yfilter;
    }
    if(value_path == "cntpPeersPeerName")
    {
        cntppeerspeername.yfilter = yfilter;
    }
    if(value_path == "cntpPeersPeerPoll")
    {
        cntppeerspeerpoll.yfilter = yfilter;
    }
    if(value_path == "cntpPeersPeerPort")
    {
        cntppeerspeerport.yfilter = yfilter;
    }
    if(value_path == "cntpPeersPeerType")
    {
        cntppeerspeertype.yfilter = yfilter;
    }
    if(value_path == "cntpPeersPrecision")
    {
        cntppeersprecision.yfilter = yfilter;
    }
    if(value_path == "cntpPeersPrefPeer")
    {
        cntppeersprefpeer.yfilter = yfilter;
    }
    if(value_path == "cntpPeersReach")
    {
        cntppeersreach.yfilter = yfilter;
    }
    if(value_path == "cntpPeersReceiveTime")
    {
        cntppeersreceivetime.yfilter = yfilter;
    }
    if(value_path == "cntpPeersRefId")
    {
        cntppeersrefid.yfilter = yfilter;
    }
    if(value_path == "cntpPeersRefTime")
    {
        cntppeersreftime.yfilter = yfilter;
    }
    if(value_path == "cntpPeersRootDelay")
    {
        cntppeersrootdelay.yfilter = yfilter;
    }
    if(value_path == "cntpPeersRootDispersion")
    {
        cntppeersrootdispersion.yfilter = yfilter;
    }
    if(value_path == "cntpPeersStratum")
    {
        cntppeersstratum.yfilter = yfilter;
    }
    if(value_path == "cntpPeersTimer")
    {
        cntppeerstimer.yfilter = yfilter;
    }
    if(value_path == "cntpPeersTransmitTime")
    {
        cntppeerstransmittime.yfilter = yfilter;
    }
    if(value_path == "cntpPeersUpdateTime")
    {
        cntppeersupdatetime.yfilter = yfilter;
    }
    if(value_path == "cntpPeersUpdateTimeRev1")
    {
        cntppeersupdatetimerev1.yfilter = yfilter;
    }
}

bool CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntpPeersAssocId" || name == "cntpPeersConfigured" || name == "cntpPeersDelay" || name == "cntpPeersDispersion" || name == "cntpPeersEntryStatus" || name == "cntpPeersFilterValidEntries" || name == "cntpPeersHostAddress" || name == "cntpPeersHostPoll" || name == "cntpPeersHostPort" || name == "cntpPeersLeap" || name == "cntpPeersMode" || name == "cntpPeersOffset" || name == "cntpPeersOrgTime" || name == "cntpPeersPeerAddress" || name == "cntpPeersPeerName" || name == "cntpPeersPeerPoll" || name == "cntpPeersPeerPort" || name == "cntpPeersPeerType" || name == "cntpPeersPrecision" || name == "cntpPeersPrefPeer" || name == "cntpPeersReach" || name == "cntpPeersReceiveTime" || name == "cntpPeersRefId" || name == "cntpPeersRefTime" || name == "cntpPeersRootDelay" || name == "cntpPeersRootDispersion" || name == "cntpPeersStratum" || name == "cntpPeersTimer" || name == "cntpPeersTransmitTime" || name == "cntpPeersUpdateTime" || name == "cntpPeersUpdateTimeRev1")
        return true;
    return false;
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
    return is_set(yfilter);
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

void CiscoNtpMib::Cntpfilterregistertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoNtpMib::Cntpfilterregistertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoNtpMib::Cntpfilterregistertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntpFilterRegisterEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(cntppeersassocid.yfilter)
	|| ydk::is_set(cntpfilterindex.yfilter)
	|| ydk::is_set(cntpfilterpeersdelay.yfilter)
	|| ydk::is_set(cntpfilterpeersdispersion.yfilter)
	|| ydk::is_set(cntpfilterpeersoffset.yfilter);
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

    if (cntppeersassocid.is_set || is_set(cntppeersassocid.yfilter)) leaf_name_data.push_back(cntppeersassocid.get_name_leafdata());
    if (cntpfilterindex.is_set || is_set(cntpfilterindex.yfilter)) leaf_name_data.push_back(cntpfilterindex.get_name_leafdata());
    if (cntpfilterpeersdelay.is_set || is_set(cntpfilterpeersdelay.yfilter)) leaf_name_data.push_back(cntpfilterpeersdelay.get_name_leafdata());
    if (cntpfilterpeersdispersion.is_set || is_set(cntpfilterpeersdispersion.yfilter)) leaf_name_data.push_back(cntpfilterpeersdispersion.get_name_leafdata());
    if (cntpfilterpeersoffset.is_set || is_set(cntpfilterpeersoffset.yfilter)) leaf_name_data.push_back(cntpfilterpeersoffset.get_name_leafdata());


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

void CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cntpPeersAssocId")
    {
        cntppeersassocid = value;
        cntppeersassocid.value_namespace = name_space;
        cntppeersassocid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpFilterIndex")
    {
        cntpfilterindex = value;
        cntpfilterindex.value_namespace = name_space;
        cntpfilterindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpFilterPeersDelay")
    {
        cntpfilterpeersdelay = value;
        cntpfilterpeersdelay.value_namespace = name_space;
        cntpfilterpeersdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpFilterPeersDispersion")
    {
        cntpfilterpeersdispersion = value;
        cntpfilterpeersdispersion.value_namespace = name_space;
        cntpfilterpeersdispersion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpFilterPeersOffset")
    {
        cntpfilterpeersoffset = value;
        cntpfilterpeersoffset.value_namespace = name_space;
        cntpfilterpeersoffset.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cntpPeersAssocId")
    {
        cntppeersassocid.yfilter = yfilter;
    }
    if(value_path == "cntpFilterIndex")
    {
        cntpfilterindex.yfilter = yfilter;
    }
    if(value_path == "cntpFilterPeersDelay")
    {
        cntpfilterpeersdelay.yfilter = yfilter;
    }
    if(value_path == "cntpFilterPeersDispersion")
    {
        cntpfilterpeersdispersion.yfilter = yfilter;
    }
    if(value_path == "cntpFilterPeersOffset")
    {
        cntpfilterpeersoffset.yfilter = yfilter;
    }
}

bool CiscoNtpMib::Cntpfilterregistertable::Cntpfilterregisterentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntpPeersAssocId" || name == "cntpFilterIndex" || name == "cntpFilterPeersDelay" || name == "cntpFilterPeersDispersion" || name == "cntpFilterPeersOffset")
        return true;
    return false;
}

const Enum::YLeaf Ntpleapindicator::noWarning {0, "noWarning"};
const Enum::YLeaf Ntpleapindicator::addSecond {1, "addSecond"};
const Enum::YLeaf Ntpleapindicator::subtractSecond {2, "subtractSecond"};
const Enum::YLeaf Ntpleapindicator::alarm {3, "alarm"};

const Enum::YLeaf CiscoNtpMib::Cntpsystem::Cntpsyssrvstatus::unknown {1, "unknown"};
const Enum::YLeaf CiscoNtpMib::Cntpsystem::Cntpsyssrvstatus::notRunning {2, "notRunning"};
const Enum::YLeaf CiscoNtpMib::Cntpsystem::Cntpsyssrvstatus::notSynchronized {3, "notSynchronized"};
const Enum::YLeaf CiscoNtpMib::Cntpsystem::Cntpsyssrvstatus::syncToLocal {4, "syncToLocal"};
const Enum::YLeaf CiscoNtpMib::Cntpsystem::Cntpsyssrvstatus::syncToRefclock {5, "syncToRefclock"};
const Enum::YLeaf CiscoNtpMib::Cntpsystem::Cntpsyssrvstatus::syncToRemoteServer {6, "syncToRemoteServer"};

const Enum::YLeaf CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::Cntppeersmode::unspecified {0, "unspecified"};
const Enum::YLeaf CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::Cntppeersmode::symmetricActive {1, "symmetricActive"};
const Enum::YLeaf CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::Cntppeersmode::symmetricPassive {2, "symmetricPassive"};
const Enum::YLeaf CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::Cntppeersmode::client {3, "client"};
const Enum::YLeaf CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::Cntppeersmode::server {4, "server"};
const Enum::YLeaf CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::Cntppeersmode::broadcast {5, "broadcast"};
const Enum::YLeaf CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::Cntppeersmode::reservedControl {6, "reservedControl"};
const Enum::YLeaf CiscoNtpMib::Cntppeersvartable::Cntppeersvarentry::Cntppeersmode::reservedPrivate {7, "reservedPrivate"};


}
}

