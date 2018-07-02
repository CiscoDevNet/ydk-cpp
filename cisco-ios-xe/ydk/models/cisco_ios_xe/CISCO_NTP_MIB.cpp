
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_NTP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_NTP_MIB {

CISCONTPMIB::CISCONTPMIB()
    :
    cntpsystem(std::make_shared<CISCONTPMIB::CntpSystem>())
    , cntppeersvartable(std::make_shared<CISCONTPMIB::CntpPeersVarTable>())
    , cntpfilterregistertable(std::make_shared<CISCONTPMIB::CntpFilterRegisterTable>())
{
    cntpsystem->parent = this;
    cntppeersvartable->parent = this;
    cntpfilterregistertable->parent = this;

    yang_name = "CISCO-NTP-MIB"; yang_parent_name = "CISCO-NTP-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCONTPMIB::~CISCONTPMIB()
{
}

bool CISCONTPMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cntpsystem !=  nullptr && cntpsystem->has_data())
	|| (cntppeersvartable !=  nullptr && cntppeersvartable->has_data())
	|| (cntpfilterregistertable !=  nullptr && cntpfilterregistertable->has_data());
}

bool CISCONTPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cntpsystem !=  nullptr && cntpsystem->has_operation())
	|| (cntppeersvartable !=  nullptr && cntppeersvartable->has_operation())
	|| (cntpfilterregistertable !=  nullptr && cntpfilterregistertable->has_operation());
}

std::string CISCONTPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NTP-MIB:CISCO-NTP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONTPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONTPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cntpSystem")
    {
        if(cntpsystem == nullptr)
        {
            cntpsystem = std::make_shared<CISCONTPMIB::CntpSystem>();
        }
        return cntpsystem;
    }

    if(child_yang_name == "cntpPeersVarTable")
    {
        if(cntppeersvartable == nullptr)
        {
            cntppeersvartable = std::make_shared<CISCONTPMIB::CntpPeersVarTable>();
        }
        return cntppeersvartable;
    }

    if(child_yang_name == "cntpFilterRegisterTable")
    {
        if(cntpfilterregistertable == nullptr)
        {
            cntpfilterregistertable = std::make_shared<CISCONTPMIB::CntpFilterRegisterTable>();
        }
        return cntpfilterregistertable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONTPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cntpsystem != nullptr)
    {
        children["cntpSystem"] = cntpsystem;
    }

    if(cntppeersvartable != nullptr)
    {
        children["cntpPeersVarTable"] = cntppeersvartable;
    }

    if(cntpfilterregistertable != nullptr)
    {
        children["cntpFilterRegisterTable"] = cntpfilterregistertable;
    }

    return children;
}

void CISCONTPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCONTPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCONTPMIB::clone_ptr() const
{
    return std::make_shared<CISCONTPMIB>();
}

std::string CISCONTPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCONTPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCONTPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCONTPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCONTPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntpSystem" || name == "cntpPeersVarTable" || name == "cntpFilterRegisterTable")
        return true;
    return false;
}

CISCONTPMIB::CntpSystem::CntpSystem()
    :
    cntpsysleap{YType::enumeration, "cntpSysLeap"},
    cntpsysstratum{YType::int32, "cntpSysStratum"},
    cntpsysprecision{YType::int32, "cntpSysPrecision"},
    cntpsysrootdelay{YType::str, "cntpSysRootDelay"},
    cntpsysrootdispersion{YType::str, "cntpSysRootDispersion"},
    cntpsysrefid{YType::str, "cntpSysRefId"},
    cntpsysreftime{YType::str, "cntpSysRefTime"},
    cntpsyspoll{YType::int32, "cntpSysPoll"},
    cntpsyspeer{YType::int32, "cntpSysPeer"},
    cntpsysclock{YType::str, "cntpSysClock"},
    cntpsyssrvstatus{YType::enumeration, "cntpSysSrvStatus"}
{

    yang_name = "cntpSystem"; yang_parent_name = "CISCO-NTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCONTPMIB::CntpSystem::~CntpSystem()
{
}

bool CISCONTPMIB::CntpSystem::has_data() const
{
    if (is_presence_container) return true;
    return cntpsysleap.is_set
	|| cntpsysstratum.is_set
	|| cntpsysprecision.is_set
	|| cntpsysrootdelay.is_set
	|| cntpsysrootdispersion.is_set
	|| cntpsysrefid.is_set
	|| cntpsysreftime.is_set
	|| cntpsyspoll.is_set
	|| cntpsyspeer.is_set
	|| cntpsysclock.is_set
	|| cntpsyssrvstatus.is_set;
}

bool CISCONTPMIB::CntpSystem::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cntpsysleap.yfilter)
	|| ydk::is_set(cntpsysstratum.yfilter)
	|| ydk::is_set(cntpsysprecision.yfilter)
	|| ydk::is_set(cntpsysrootdelay.yfilter)
	|| ydk::is_set(cntpsysrootdispersion.yfilter)
	|| ydk::is_set(cntpsysrefid.yfilter)
	|| ydk::is_set(cntpsysreftime.yfilter)
	|| ydk::is_set(cntpsyspoll.yfilter)
	|| ydk::is_set(cntpsyspeer.yfilter)
	|| ydk::is_set(cntpsysclock.yfilter)
	|| ydk::is_set(cntpsyssrvstatus.yfilter);
}

std::string CISCONTPMIB::CntpSystem::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NTP-MIB:CISCO-NTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONTPMIB::CntpSystem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntpSystem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONTPMIB::CntpSystem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cntpsysleap.is_set || is_set(cntpsysleap.yfilter)) leaf_name_data.push_back(cntpsysleap.get_name_leafdata());
    if (cntpsysstratum.is_set || is_set(cntpsysstratum.yfilter)) leaf_name_data.push_back(cntpsysstratum.get_name_leafdata());
    if (cntpsysprecision.is_set || is_set(cntpsysprecision.yfilter)) leaf_name_data.push_back(cntpsysprecision.get_name_leafdata());
    if (cntpsysrootdelay.is_set || is_set(cntpsysrootdelay.yfilter)) leaf_name_data.push_back(cntpsysrootdelay.get_name_leafdata());
    if (cntpsysrootdispersion.is_set || is_set(cntpsysrootdispersion.yfilter)) leaf_name_data.push_back(cntpsysrootdispersion.get_name_leafdata());
    if (cntpsysrefid.is_set || is_set(cntpsysrefid.yfilter)) leaf_name_data.push_back(cntpsysrefid.get_name_leafdata());
    if (cntpsysreftime.is_set || is_set(cntpsysreftime.yfilter)) leaf_name_data.push_back(cntpsysreftime.get_name_leafdata());
    if (cntpsyspoll.is_set || is_set(cntpsyspoll.yfilter)) leaf_name_data.push_back(cntpsyspoll.get_name_leafdata());
    if (cntpsyspeer.is_set || is_set(cntpsyspeer.yfilter)) leaf_name_data.push_back(cntpsyspeer.get_name_leafdata());
    if (cntpsysclock.is_set || is_set(cntpsysclock.yfilter)) leaf_name_data.push_back(cntpsysclock.get_name_leafdata());
    if (cntpsyssrvstatus.is_set || is_set(cntpsyssrvstatus.yfilter)) leaf_name_data.push_back(cntpsyssrvstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONTPMIB::CntpSystem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONTPMIB::CntpSystem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCONTPMIB::CntpSystem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cntpSysLeap")
    {
        cntpsysleap = value;
        cntpsysleap.value_namespace = name_space;
        cntpsysleap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpSysStratum")
    {
        cntpsysstratum = value;
        cntpsysstratum.value_namespace = name_space;
        cntpsysstratum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpSysPrecision")
    {
        cntpsysprecision = value;
        cntpsysprecision.value_namespace = name_space;
        cntpsysprecision.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cntpSysPoll")
    {
        cntpsyspoll = value;
        cntpsyspoll.value_namespace = name_space;
        cntpsyspoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpSysPeer")
    {
        cntpsyspeer = value;
        cntpsyspeer.value_namespace = name_space;
        cntpsyspeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpSysClock")
    {
        cntpsysclock = value;
        cntpsysclock.value_namespace = name_space;
        cntpsysclock.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpSysSrvStatus")
    {
        cntpsyssrvstatus = value;
        cntpsyssrvstatus.value_namespace = name_space;
        cntpsyssrvstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCONTPMIB::CntpSystem::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cntpSysLeap")
    {
        cntpsysleap.yfilter = yfilter;
    }
    if(value_path == "cntpSysStratum")
    {
        cntpsysstratum.yfilter = yfilter;
    }
    if(value_path == "cntpSysPrecision")
    {
        cntpsysprecision.yfilter = yfilter;
    }
    if(value_path == "cntpSysRootDelay")
    {
        cntpsysrootdelay.yfilter = yfilter;
    }
    if(value_path == "cntpSysRootDispersion")
    {
        cntpsysrootdispersion.yfilter = yfilter;
    }
    if(value_path == "cntpSysRefId")
    {
        cntpsysrefid.yfilter = yfilter;
    }
    if(value_path == "cntpSysRefTime")
    {
        cntpsysreftime.yfilter = yfilter;
    }
    if(value_path == "cntpSysPoll")
    {
        cntpsyspoll.yfilter = yfilter;
    }
    if(value_path == "cntpSysPeer")
    {
        cntpsyspeer.yfilter = yfilter;
    }
    if(value_path == "cntpSysClock")
    {
        cntpsysclock.yfilter = yfilter;
    }
    if(value_path == "cntpSysSrvStatus")
    {
        cntpsyssrvstatus.yfilter = yfilter;
    }
}

bool CISCONTPMIB::CntpSystem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntpSysLeap" || name == "cntpSysStratum" || name == "cntpSysPrecision" || name == "cntpSysRootDelay" || name == "cntpSysRootDispersion" || name == "cntpSysRefId" || name == "cntpSysRefTime" || name == "cntpSysPoll" || name == "cntpSysPeer" || name == "cntpSysClock" || name == "cntpSysSrvStatus")
        return true;
    return false;
}

CISCONTPMIB::CntpPeersVarTable::CntpPeersVarTable()
    :
    cntppeersvarentry(this, {"cntppeersassocid"})
{

    yang_name = "cntpPeersVarTable"; yang_parent_name = "CISCO-NTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCONTPMIB::CntpPeersVarTable::~CntpPeersVarTable()
{
}

bool CISCONTPMIB::CntpPeersVarTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cntppeersvarentry.len(); index++)
    {
        if(cntppeersvarentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCONTPMIB::CntpPeersVarTable::has_operation() const
{
    for (std::size_t index=0; index<cntppeersvarentry.len(); index++)
    {
        if(cntppeersvarentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCONTPMIB::CntpPeersVarTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NTP-MIB:CISCO-NTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONTPMIB::CntpPeersVarTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntpPeersVarTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONTPMIB::CntpPeersVarTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONTPMIB::CntpPeersVarTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cntpPeersVarEntry")
    {
        auto c = std::make_shared<CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry>();
        c->parent = this;
        cntppeersvarentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONTPMIB::CntpPeersVarTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cntppeersvarentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCONTPMIB::CntpPeersVarTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCONTPMIB::CntpPeersVarTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCONTPMIB::CntpPeersVarTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntpPeersVarEntry")
        return true;
    return false;
}

CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::CntpPeersVarEntry()
    :
    cntppeersassocid{YType::int32, "cntpPeersAssocId"},
    cntppeersconfigured{YType::boolean, "cntpPeersConfigured"},
    cntppeerspeeraddress{YType::str, "cntpPeersPeerAddress"},
    cntppeerspeerport{YType::int32, "cntpPeersPeerPort"},
    cntppeershostaddress{YType::str, "cntpPeersHostAddress"},
    cntppeershostport{YType::int32, "cntpPeersHostPort"},
    cntppeersleap{YType::enumeration, "cntpPeersLeap"},
    cntppeersmode{YType::enumeration, "cntpPeersMode"},
    cntppeersstratum{YType::int32, "cntpPeersStratum"},
    cntppeerspeerpoll{YType::int32, "cntpPeersPeerPoll"},
    cntppeershostpoll{YType::int32, "cntpPeersHostPoll"},
    cntppeersprecision{YType::int32, "cntpPeersPrecision"},
    cntppeersrootdelay{YType::str, "cntpPeersRootDelay"},
    cntppeersrootdispersion{YType::str, "cntpPeersRootDispersion"},
    cntppeersrefid{YType::str, "cntpPeersRefId"},
    cntppeersreftime{YType::str, "cntpPeersRefTime"},
    cntppeersorgtime{YType::str, "cntpPeersOrgTime"},
    cntppeersreceivetime{YType::str, "cntpPeersReceiveTime"},
    cntppeerstransmittime{YType::str, "cntpPeersTransmitTime"},
    cntppeersupdatetime{YType::int32, "cntpPeersUpdateTime"},
    cntppeersreach{YType::int32, "cntpPeersReach"},
    cntppeerstimer{YType::int32, "cntpPeersTimer"},
    cntppeersoffset{YType::str, "cntpPeersOffset"},
    cntppeersdelay{YType::str, "cntpPeersDelay"},
    cntppeersdispersion{YType::str, "cntpPeersDispersion"},
    cntppeersfiltervalidentries{YType::uint32, "cntpPeersFilterValidEntries"},
    cntppeersentrystatus{YType::enumeration, "cntpPeersEntryStatus"},
    cntppeersupdatetimerev1{YType::uint32, "cntpPeersUpdateTimeRev1"},
    cntppeersprefpeer{YType::boolean, "cntpPeersPrefPeer"},
    cntppeerspeertype{YType::enumeration, "cntpPeersPeerType"},
    cntppeerspeername{YType::str, "cntpPeersPeerName"}
{

    yang_name = "cntpPeersVarEntry"; yang_parent_name = "cntpPeersVarTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::~CntpPeersVarEntry()
{
}

bool CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::has_data() const
{
    if (is_presence_container) return true;
    return cntppeersassocid.is_set
	|| cntppeersconfigured.is_set
	|| cntppeerspeeraddress.is_set
	|| cntppeerspeerport.is_set
	|| cntppeershostaddress.is_set
	|| cntppeershostport.is_set
	|| cntppeersleap.is_set
	|| cntppeersmode.is_set
	|| cntppeersstratum.is_set
	|| cntppeerspeerpoll.is_set
	|| cntppeershostpoll.is_set
	|| cntppeersprecision.is_set
	|| cntppeersrootdelay.is_set
	|| cntppeersrootdispersion.is_set
	|| cntppeersrefid.is_set
	|| cntppeersreftime.is_set
	|| cntppeersorgtime.is_set
	|| cntppeersreceivetime.is_set
	|| cntppeerstransmittime.is_set
	|| cntppeersupdatetime.is_set
	|| cntppeersreach.is_set
	|| cntppeerstimer.is_set
	|| cntppeersoffset.is_set
	|| cntppeersdelay.is_set
	|| cntppeersdispersion.is_set
	|| cntppeersfiltervalidentries.is_set
	|| cntppeersentrystatus.is_set
	|| cntppeersupdatetimerev1.is_set
	|| cntppeersprefpeer.is_set
	|| cntppeerspeertype.is_set
	|| cntppeerspeername.is_set;
}

bool CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cntppeersassocid.yfilter)
	|| ydk::is_set(cntppeersconfigured.yfilter)
	|| ydk::is_set(cntppeerspeeraddress.yfilter)
	|| ydk::is_set(cntppeerspeerport.yfilter)
	|| ydk::is_set(cntppeershostaddress.yfilter)
	|| ydk::is_set(cntppeershostport.yfilter)
	|| ydk::is_set(cntppeersleap.yfilter)
	|| ydk::is_set(cntppeersmode.yfilter)
	|| ydk::is_set(cntppeersstratum.yfilter)
	|| ydk::is_set(cntppeerspeerpoll.yfilter)
	|| ydk::is_set(cntppeershostpoll.yfilter)
	|| ydk::is_set(cntppeersprecision.yfilter)
	|| ydk::is_set(cntppeersrootdelay.yfilter)
	|| ydk::is_set(cntppeersrootdispersion.yfilter)
	|| ydk::is_set(cntppeersrefid.yfilter)
	|| ydk::is_set(cntppeersreftime.yfilter)
	|| ydk::is_set(cntppeersorgtime.yfilter)
	|| ydk::is_set(cntppeersreceivetime.yfilter)
	|| ydk::is_set(cntppeerstransmittime.yfilter)
	|| ydk::is_set(cntppeersupdatetime.yfilter)
	|| ydk::is_set(cntppeersreach.yfilter)
	|| ydk::is_set(cntppeerstimer.yfilter)
	|| ydk::is_set(cntppeersoffset.yfilter)
	|| ydk::is_set(cntppeersdelay.yfilter)
	|| ydk::is_set(cntppeersdispersion.yfilter)
	|| ydk::is_set(cntppeersfiltervalidentries.yfilter)
	|| ydk::is_set(cntppeersentrystatus.yfilter)
	|| ydk::is_set(cntppeersupdatetimerev1.yfilter)
	|| ydk::is_set(cntppeersprefpeer.yfilter)
	|| ydk::is_set(cntppeerspeertype.yfilter)
	|| ydk::is_set(cntppeerspeername.yfilter);
}

std::string CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NTP-MIB:CISCO-NTP-MIB/cntpPeersVarTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntpPeersVarEntry";
    ADD_KEY_TOKEN(cntppeersassocid, "cntpPeersAssocId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cntppeersassocid.is_set || is_set(cntppeersassocid.yfilter)) leaf_name_data.push_back(cntppeersassocid.get_name_leafdata());
    if (cntppeersconfigured.is_set || is_set(cntppeersconfigured.yfilter)) leaf_name_data.push_back(cntppeersconfigured.get_name_leafdata());
    if (cntppeerspeeraddress.is_set || is_set(cntppeerspeeraddress.yfilter)) leaf_name_data.push_back(cntppeerspeeraddress.get_name_leafdata());
    if (cntppeerspeerport.is_set || is_set(cntppeerspeerport.yfilter)) leaf_name_data.push_back(cntppeerspeerport.get_name_leafdata());
    if (cntppeershostaddress.is_set || is_set(cntppeershostaddress.yfilter)) leaf_name_data.push_back(cntppeershostaddress.get_name_leafdata());
    if (cntppeershostport.is_set || is_set(cntppeershostport.yfilter)) leaf_name_data.push_back(cntppeershostport.get_name_leafdata());
    if (cntppeersleap.is_set || is_set(cntppeersleap.yfilter)) leaf_name_data.push_back(cntppeersleap.get_name_leafdata());
    if (cntppeersmode.is_set || is_set(cntppeersmode.yfilter)) leaf_name_data.push_back(cntppeersmode.get_name_leafdata());
    if (cntppeersstratum.is_set || is_set(cntppeersstratum.yfilter)) leaf_name_data.push_back(cntppeersstratum.get_name_leafdata());
    if (cntppeerspeerpoll.is_set || is_set(cntppeerspeerpoll.yfilter)) leaf_name_data.push_back(cntppeerspeerpoll.get_name_leafdata());
    if (cntppeershostpoll.is_set || is_set(cntppeershostpoll.yfilter)) leaf_name_data.push_back(cntppeershostpoll.get_name_leafdata());
    if (cntppeersprecision.is_set || is_set(cntppeersprecision.yfilter)) leaf_name_data.push_back(cntppeersprecision.get_name_leafdata());
    if (cntppeersrootdelay.is_set || is_set(cntppeersrootdelay.yfilter)) leaf_name_data.push_back(cntppeersrootdelay.get_name_leafdata());
    if (cntppeersrootdispersion.is_set || is_set(cntppeersrootdispersion.yfilter)) leaf_name_data.push_back(cntppeersrootdispersion.get_name_leafdata());
    if (cntppeersrefid.is_set || is_set(cntppeersrefid.yfilter)) leaf_name_data.push_back(cntppeersrefid.get_name_leafdata());
    if (cntppeersreftime.is_set || is_set(cntppeersreftime.yfilter)) leaf_name_data.push_back(cntppeersreftime.get_name_leafdata());
    if (cntppeersorgtime.is_set || is_set(cntppeersorgtime.yfilter)) leaf_name_data.push_back(cntppeersorgtime.get_name_leafdata());
    if (cntppeersreceivetime.is_set || is_set(cntppeersreceivetime.yfilter)) leaf_name_data.push_back(cntppeersreceivetime.get_name_leafdata());
    if (cntppeerstransmittime.is_set || is_set(cntppeerstransmittime.yfilter)) leaf_name_data.push_back(cntppeerstransmittime.get_name_leafdata());
    if (cntppeersupdatetime.is_set || is_set(cntppeersupdatetime.yfilter)) leaf_name_data.push_back(cntppeersupdatetime.get_name_leafdata());
    if (cntppeersreach.is_set || is_set(cntppeersreach.yfilter)) leaf_name_data.push_back(cntppeersreach.get_name_leafdata());
    if (cntppeerstimer.is_set || is_set(cntppeerstimer.yfilter)) leaf_name_data.push_back(cntppeerstimer.get_name_leafdata());
    if (cntppeersoffset.is_set || is_set(cntppeersoffset.yfilter)) leaf_name_data.push_back(cntppeersoffset.get_name_leafdata());
    if (cntppeersdelay.is_set || is_set(cntppeersdelay.yfilter)) leaf_name_data.push_back(cntppeersdelay.get_name_leafdata());
    if (cntppeersdispersion.is_set || is_set(cntppeersdispersion.yfilter)) leaf_name_data.push_back(cntppeersdispersion.get_name_leafdata());
    if (cntppeersfiltervalidentries.is_set || is_set(cntppeersfiltervalidentries.yfilter)) leaf_name_data.push_back(cntppeersfiltervalidentries.get_name_leafdata());
    if (cntppeersentrystatus.is_set || is_set(cntppeersentrystatus.yfilter)) leaf_name_data.push_back(cntppeersentrystatus.get_name_leafdata());
    if (cntppeersupdatetimerev1.is_set || is_set(cntppeersupdatetimerev1.yfilter)) leaf_name_data.push_back(cntppeersupdatetimerev1.get_name_leafdata());
    if (cntppeersprefpeer.is_set || is_set(cntppeersprefpeer.yfilter)) leaf_name_data.push_back(cntppeersprefpeer.get_name_leafdata());
    if (cntppeerspeertype.is_set || is_set(cntppeerspeertype.yfilter)) leaf_name_data.push_back(cntppeerspeertype.get_name_leafdata());
    if (cntppeerspeername.is_set || is_set(cntppeerspeername.yfilter)) leaf_name_data.push_back(cntppeerspeername.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cntpPeersPeerAddress")
    {
        cntppeerspeeraddress = value;
        cntppeerspeeraddress.value_namespace = name_space;
        cntppeerspeeraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersPeerPort")
    {
        cntppeerspeerport = value;
        cntppeerspeerport.value_namespace = name_space;
        cntppeerspeerport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersHostAddress")
    {
        cntppeershostaddress = value;
        cntppeershostaddress.value_namespace = name_space;
        cntppeershostaddress.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cntpPeersStratum")
    {
        cntppeersstratum = value;
        cntppeersstratum.value_namespace = name_space;
        cntppeersstratum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersPeerPoll")
    {
        cntppeerspeerpoll = value;
        cntppeerspeerpoll.value_namespace = name_space;
        cntppeerspeerpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersHostPoll")
    {
        cntppeershostpoll = value;
        cntppeershostpoll.value_namespace = name_space;
        cntppeershostpoll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersPrecision")
    {
        cntppeersprecision = value;
        cntppeersprecision.value_namespace = name_space;
        cntppeersprecision.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cntpPeersOrgTime")
    {
        cntppeersorgtime = value;
        cntppeersorgtime.value_namespace = name_space;
        cntppeersorgtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersReceiveTime")
    {
        cntppeersreceivetime = value;
        cntppeersreceivetime.value_namespace = name_space;
        cntppeersreceivetime.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cntpPeersReach")
    {
        cntppeersreach = value;
        cntppeersreach.value_namespace = name_space;
        cntppeersreach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersTimer")
    {
        cntppeerstimer = value;
        cntppeerstimer.value_namespace = name_space;
        cntppeerstimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersOffset")
    {
        cntppeersoffset = value;
        cntppeersoffset.value_namespace = name_space;
        cntppeersoffset.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cntpPeersFilterValidEntries")
    {
        cntppeersfiltervalidentries = value;
        cntppeersfiltervalidentries.value_namespace = name_space;
        cntppeersfiltervalidentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersEntryStatus")
    {
        cntppeersentrystatus = value;
        cntppeersentrystatus.value_namespace = name_space;
        cntppeersentrystatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersUpdateTimeRev1")
    {
        cntppeersupdatetimerev1 = value;
        cntppeersupdatetimerev1.value_namespace = name_space;
        cntppeersupdatetimerev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersPrefPeer")
    {
        cntppeersprefpeer = value;
        cntppeersprefpeer.value_namespace = name_space;
        cntppeersprefpeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersPeerType")
    {
        cntppeerspeertype = value;
        cntppeerspeertype.value_namespace = name_space;
        cntppeerspeertype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cntpPeersPeerName")
    {
        cntppeerspeername = value;
        cntppeerspeername.value_namespace = name_space;
        cntppeerspeername.value_namespace_prefix = name_space_prefix;
    }
}

void CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cntpPeersAssocId")
    {
        cntppeersassocid.yfilter = yfilter;
    }
    if(value_path == "cntpPeersConfigured")
    {
        cntppeersconfigured.yfilter = yfilter;
    }
    if(value_path == "cntpPeersPeerAddress")
    {
        cntppeerspeeraddress.yfilter = yfilter;
    }
    if(value_path == "cntpPeersPeerPort")
    {
        cntppeerspeerport.yfilter = yfilter;
    }
    if(value_path == "cntpPeersHostAddress")
    {
        cntppeershostaddress.yfilter = yfilter;
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
    if(value_path == "cntpPeersStratum")
    {
        cntppeersstratum.yfilter = yfilter;
    }
    if(value_path == "cntpPeersPeerPoll")
    {
        cntppeerspeerpoll.yfilter = yfilter;
    }
    if(value_path == "cntpPeersHostPoll")
    {
        cntppeershostpoll.yfilter = yfilter;
    }
    if(value_path == "cntpPeersPrecision")
    {
        cntppeersprecision.yfilter = yfilter;
    }
    if(value_path == "cntpPeersRootDelay")
    {
        cntppeersrootdelay.yfilter = yfilter;
    }
    if(value_path == "cntpPeersRootDispersion")
    {
        cntppeersrootdispersion.yfilter = yfilter;
    }
    if(value_path == "cntpPeersRefId")
    {
        cntppeersrefid.yfilter = yfilter;
    }
    if(value_path == "cntpPeersRefTime")
    {
        cntppeersreftime.yfilter = yfilter;
    }
    if(value_path == "cntpPeersOrgTime")
    {
        cntppeersorgtime.yfilter = yfilter;
    }
    if(value_path == "cntpPeersReceiveTime")
    {
        cntppeersreceivetime.yfilter = yfilter;
    }
    if(value_path == "cntpPeersTransmitTime")
    {
        cntppeerstransmittime.yfilter = yfilter;
    }
    if(value_path == "cntpPeersUpdateTime")
    {
        cntppeersupdatetime.yfilter = yfilter;
    }
    if(value_path == "cntpPeersReach")
    {
        cntppeersreach.yfilter = yfilter;
    }
    if(value_path == "cntpPeersTimer")
    {
        cntppeerstimer.yfilter = yfilter;
    }
    if(value_path == "cntpPeersOffset")
    {
        cntppeersoffset.yfilter = yfilter;
    }
    if(value_path == "cntpPeersDelay")
    {
        cntppeersdelay.yfilter = yfilter;
    }
    if(value_path == "cntpPeersDispersion")
    {
        cntppeersdispersion.yfilter = yfilter;
    }
    if(value_path == "cntpPeersFilterValidEntries")
    {
        cntppeersfiltervalidentries.yfilter = yfilter;
    }
    if(value_path == "cntpPeersEntryStatus")
    {
        cntppeersentrystatus.yfilter = yfilter;
    }
    if(value_path == "cntpPeersUpdateTimeRev1")
    {
        cntppeersupdatetimerev1.yfilter = yfilter;
    }
    if(value_path == "cntpPeersPrefPeer")
    {
        cntppeersprefpeer.yfilter = yfilter;
    }
    if(value_path == "cntpPeersPeerType")
    {
        cntppeerspeertype.yfilter = yfilter;
    }
    if(value_path == "cntpPeersPeerName")
    {
        cntppeerspeername.yfilter = yfilter;
    }
}

bool CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntpPeersAssocId" || name == "cntpPeersConfigured" || name == "cntpPeersPeerAddress" || name == "cntpPeersPeerPort" || name == "cntpPeersHostAddress" || name == "cntpPeersHostPort" || name == "cntpPeersLeap" || name == "cntpPeersMode" || name == "cntpPeersStratum" || name == "cntpPeersPeerPoll" || name == "cntpPeersHostPoll" || name == "cntpPeersPrecision" || name == "cntpPeersRootDelay" || name == "cntpPeersRootDispersion" || name == "cntpPeersRefId" || name == "cntpPeersRefTime" || name == "cntpPeersOrgTime" || name == "cntpPeersReceiveTime" || name == "cntpPeersTransmitTime" || name == "cntpPeersUpdateTime" || name == "cntpPeersReach" || name == "cntpPeersTimer" || name == "cntpPeersOffset" || name == "cntpPeersDelay" || name == "cntpPeersDispersion" || name == "cntpPeersFilterValidEntries" || name == "cntpPeersEntryStatus" || name == "cntpPeersUpdateTimeRev1" || name == "cntpPeersPrefPeer" || name == "cntpPeersPeerType" || name == "cntpPeersPeerName")
        return true;
    return false;
}

CISCONTPMIB::CntpFilterRegisterTable::CntpFilterRegisterTable()
    :
    cntpfilterregisterentry(this, {"cntppeersassocid", "cntpfilterindex"})
{

    yang_name = "cntpFilterRegisterTable"; yang_parent_name = "CISCO-NTP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCONTPMIB::CntpFilterRegisterTable::~CntpFilterRegisterTable()
{
}

bool CISCONTPMIB::CntpFilterRegisterTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cntpfilterregisterentry.len(); index++)
    {
        if(cntpfilterregisterentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCONTPMIB::CntpFilterRegisterTable::has_operation() const
{
    for (std::size_t index=0; index<cntpfilterregisterentry.len(); index++)
    {
        if(cntpfilterregisterentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCONTPMIB::CntpFilterRegisterTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NTP-MIB:CISCO-NTP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONTPMIB::CntpFilterRegisterTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntpFilterRegisterTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONTPMIB::CntpFilterRegisterTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONTPMIB::CntpFilterRegisterTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cntpFilterRegisterEntry")
    {
        auto c = std::make_shared<CISCONTPMIB::CntpFilterRegisterTable::CntpFilterRegisterEntry>();
        c->parent = this;
        cntpfilterregisterentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONTPMIB::CntpFilterRegisterTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cntpfilterregisterentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCONTPMIB::CntpFilterRegisterTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCONTPMIB::CntpFilterRegisterTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCONTPMIB::CntpFilterRegisterTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntpFilterRegisterEntry")
        return true;
    return false;
}

CISCONTPMIB::CntpFilterRegisterTable::CntpFilterRegisterEntry::CntpFilterRegisterEntry()
    :
    cntppeersassocid{YType::str, "cntpPeersAssocId"},
    cntpfilterindex{YType::int32, "cntpFilterIndex"},
    cntpfilterpeersoffset{YType::str, "cntpFilterPeersOffset"},
    cntpfilterpeersdelay{YType::str, "cntpFilterPeersDelay"},
    cntpfilterpeersdispersion{YType::str, "cntpFilterPeersDispersion"}
{

    yang_name = "cntpFilterRegisterEntry"; yang_parent_name = "cntpFilterRegisterTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCONTPMIB::CntpFilterRegisterTable::CntpFilterRegisterEntry::~CntpFilterRegisterEntry()
{
}

bool CISCONTPMIB::CntpFilterRegisterTable::CntpFilterRegisterEntry::has_data() const
{
    if (is_presence_container) return true;
    return cntppeersassocid.is_set
	|| cntpfilterindex.is_set
	|| cntpfilterpeersoffset.is_set
	|| cntpfilterpeersdelay.is_set
	|| cntpfilterpeersdispersion.is_set;
}

bool CISCONTPMIB::CntpFilterRegisterTable::CntpFilterRegisterEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cntppeersassocid.yfilter)
	|| ydk::is_set(cntpfilterindex.yfilter)
	|| ydk::is_set(cntpfilterpeersoffset.yfilter)
	|| ydk::is_set(cntpfilterpeersdelay.yfilter)
	|| ydk::is_set(cntpfilterpeersdispersion.yfilter);
}

std::string CISCONTPMIB::CntpFilterRegisterTable::CntpFilterRegisterEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NTP-MIB:CISCO-NTP-MIB/cntpFilterRegisterTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCONTPMIB::CntpFilterRegisterTable::CntpFilterRegisterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cntpFilterRegisterEntry";
    ADD_KEY_TOKEN(cntppeersassocid, "cntpPeersAssocId");
    ADD_KEY_TOKEN(cntpfilterindex, "cntpFilterIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCONTPMIB::CntpFilterRegisterTable::CntpFilterRegisterEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cntppeersassocid.is_set || is_set(cntppeersassocid.yfilter)) leaf_name_data.push_back(cntppeersassocid.get_name_leafdata());
    if (cntpfilterindex.is_set || is_set(cntpfilterindex.yfilter)) leaf_name_data.push_back(cntpfilterindex.get_name_leafdata());
    if (cntpfilterpeersoffset.is_set || is_set(cntpfilterpeersoffset.yfilter)) leaf_name_data.push_back(cntpfilterpeersoffset.get_name_leafdata());
    if (cntpfilterpeersdelay.is_set || is_set(cntpfilterpeersdelay.yfilter)) leaf_name_data.push_back(cntpfilterpeersdelay.get_name_leafdata());
    if (cntpfilterpeersdispersion.is_set || is_set(cntpfilterpeersdispersion.yfilter)) leaf_name_data.push_back(cntpfilterpeersdispersion.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCONTPMIB::CntpFilterRegisterTable::CntpFilterRegisterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCONTPMIB::CntpFilterRegisterTable::CntpFilterRegisterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCONTPMIB::CntpFilterRegisterTable::CntpFilterRegisterEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cntpFilterPeersOffset")
    {
        cntpfilterpeersoffset = value;
        cntpfilterpeersoffset.value_namespace = name_space;
        cntpfilterpeersoffset.value_namespace_prefix = name_space_prefix;
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
}

void CISCONTPMIB::CntpFilterRegisterTable::CntpFilterRegisterEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cntpPeersAssocId")
    {
        cntppeersassocid.yfilter = yfilter;
    }
    if(value_path == "cntpFilterIndex")
    {
        cntpfilterindex.yfilter = yfilter;
    }
    if(value_path == "cntpFilterPeersOffset")
    {
        cntpfilterpeersoffset.yfilter = yfilter;
    }
    if(value_path == "cntpFilterPeersDelay")
    {
        cntpfilterpeersdelay.yfilter = yfilter;
    }
    if(value_path == "cntpFilterPeersDispersion")
    {
        cntpfilterpeersdispersion.yfilter = yfilter;
    }
}

bool CISCONTPMIB::CntpFilterRegisterTable::CntpFilterRegisterEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cntpPeersAssocId" || name == "cntpFilterIndex" || name == "cntpFilterPeersOffset" || name == "cntpFilterPeersDelay" || name == "cntpFilterPeersDispersion")
        return true;
    return false;
}

const Enum::YLeaf NTPLeapIndicator::noWarning {0, "noWarning"};
const Enum::YLeaf NTPLeapIndicator::addSecond {1, "addSecond"};
const Enum::YLeaf NTPLeapIndicator::subtractSecond {2, "subtractSecond"};
const Enum::YLeaf NTPLeapIndicator::alarm {3, "alarm"};

const Enum::YLeaf CISCONTPMIB::CntpSystem::CntpSysSrvStatus::unknown {1, "unknown"};
const Enum::YLeaf CISCONTPMIB::CntpSystem::CntpSysSrvStatus::notRunning {2, "notRunning"};
const Enum::YLeaf CISCONTPMIB::CntpSystem::CntpSysSrvStatus::notSynchronized {3, "notSynchronized"};
const Enum::YLeaf CISCONTPMIB::CntpSystem::CntpSysSrvStatus::syncToLocal {4, "syncToLocal"};
const Enum::YLeaf CISCONTPMIB::CntpSystem::CntpSysSrvStatus::syncToRefclock {5, "syncToRefclock"};
const Enum::YLeaf CISCONTPMIB::CntpSystem::CntpSysSrvStatus::syncToRemoteServer {6, "syncToRemoteServer"};

const Enum::YLeaf CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::CntpPeersMode::unspecified {0, "unspecified"};
const Enum::YLeaf CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::CntpPeersMode::symmetricActive {1, "symmetricActive"};
const Enum::YLeaf CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::CntpPeersMode::symmetricPassive {2, "symmetricPassive"};
const Enum::YLeaf CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::CntpPeersMode::client {3, "client"};
const Enum::YLeaf CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::CntpPeersMode::server {4, "server"};
const Enum::YLeaf CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::CntpPeersMode::broadcast {5, "broadcast"};
const Enum::YLeaf CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::CntpPeersMode::reservedControl {6, "reservedControl"};
const Enum::YLeaf CISCONTPMIB::CntpPeersVarTable::CntpPeersVarEntry::CntpPeersMode::reservedPrivate {7, "reservedPrivate"};


}
}

