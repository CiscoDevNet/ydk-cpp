
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMP_USER_BASED_SM_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace SNMP_USER_BASED_SM_MIB {

SNMPUSERBASEDSMMIB::SNMPUSERBASEDSMMIB()
    :
    usmstats(std::make_shared<SNMPUSERBASEDSMMIB::UsmStats>())
    , usmusertable(std::make_shared<SNMPUSERBASEDSMMIB::UsmUserTable>())
{
    usmstats->parent = this;
    usmusertable->parent = this;

    yang_name = "SNMP-USER-BASED-SM-MIB"; yang_parent_name = "SNMP-USER-BASED-SM-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

SNMPUSERBASEDSMMIB::~SNMPUSERBASEDSMMIB()
{
}

bool SNMPUSERBASEDSMMIB::has_data() const
{
    if (is_presence_container) return true;
    return (usmstats !=  nullptr && usmstats->has_data())
	|| (usmusertable !=  nullptr && usmusertable->has_data());
}

bool SNMPUSERBASEDSMMIB::has_operation() const
{
    return is_set(yfilter)
	|| (usmstats !=  nullptr && usmstats->has_operation())
	|| (usmusertable !=  nullptr && usmusertable->has_operation());
}

std::string SNMPUSERBASEDSMMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-USER-BASED-SM-MIB:SNMP-USER-BASED-SM-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPUSERBASEDSMMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPUSERBASEDSMMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usmStats")
    {
        if(usmstats == nullptr)
        {
            usmstats = std::make_shared<SNMPUSERBASEDSMMIB::UsmStats>();
        }
        return usmstats;
    }

    if(child_yang_name == "usmUserTable")
    {
        if(usmusertable == nullptr)
        {
            usmusertable = std::make_shared<SNMPUSERBASEDSMMIB::UsmUserTable>();
        }
        return usmusertable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPUSERBASEDSMMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(usmstats != nullptr)
    {
        _children["usmStats"] = usmstats;
    }

    if(usmusertable != nullptr)
    {
        _children["usmUserTable"] = usmusertable;
    }

    return _children;
}

void SNMPUSERBASEDSMMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPUSERBASEDSMMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SNMPUSERBASEDSMMIB::clone_ptr() const
{
    return std::make_shared<SNMPUSERBASEDSMMIB>();
}

std::string SNMPUSERBASEDSMMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SNMPUSERBASEDSMMIB::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SNMPUSERBASEDSMMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SNMPUSERBASEDSMMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SNMPUSERBASEDSMMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usmStats" || name == "usmUserTable")
        return true;
    return false;
}

SNMPUSERBASEDSMMIB::UsmStats::UsmStats()
    :
    usmstatsunsupportedseclevels{YType::uint32, "usmStatsUnsupportedSecLevels"},
    usmstatsnotintimewindows{YType::uint32, "usmStatsNotInTimeWindows"},
    usmstatsunknownusernames{YType::uint32, "usmStatsUnknownUserNames"},
    usmstatsunknownengineids{YType::uint32, "usmStatsUnknownEngineIDs"},
    usmstatswrongdigests{YType::uint32, "usmStatsWrongDigests"},
    usmstatsdecryptionerrors{YType::uint32, "usmStatsDecryptionErrors"}
{

    yang_name = "usmStats"; yang_parent_name = "SNMP-USER-BASED-SM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPUSERBASEDSMMIB::UsmStats::~UsmStats()
{
}

bool SNMPUSERBASEDSMMIB::UsmStats::has_data() const
{
    if (is_presence_container) return true;
    return usmstatsunsupportedseclevels.is_set
	|| usmstatsnotintimewindows.is_set
	|| usmstatsunknownusernames.is_set
	|| usmstatsunknownengineids.is_set
	|| usmstatswrongdigests.is_set
	|| usmstatsdecryptionerrors.is_set;
}

bool SNMPUSERBASEDSMMIB::UsmStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(usmstatsunsupportedseclevels.yfilter)
	|| ydk::is_set(usmstatsnotintimewindows.yfilter)
	|| ydk::is_set(usmstatsunknownusernames.yfilter)
	|| ydk::is_set(usmstatsunknownengineids.yfilter)
	|| ydk::is_set(usmstatswrongdigests.yfilter)
	|| ydk::is_set(usmstatsdecryptionerrors.yfilter);
}

std::string SNMPUSERBASEDSMMIB::UsmStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-USER-BASED-SM-MIB:SNMP-USER-BASED-SM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPUSERBASEDSMMIB::UsmStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usmStats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPUSERBASEDSMMIB::UsmStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (usmstatsunsupportedseclevels.is_set || is_set(usmstatsunsupportedseclevels.yfilter)) leaf_name_data.push_back(usmstatsunsupportedseclevels.get_name_leafdata());
    if (usmstatsnotintimewindows.is_set || is_set(usmstatsnotintimewindows.yfilter)) leaf_name_data.push_back(usmstatsnotintimewindows.get_name_leafdata());
    if (usmstatsunknownusernames.is_set || is_set(usmstatsunknownusernames.yfilter)) leaf_name_data.push_back(usmstatsunknownusernames.get_name_leafdata());
    if (usmstatsunknownengineids.is_set || is_set(usmstatsunknownengineids.yfilter)) leaf_name_data.push_back(usmstatsunknownengineids.get_name_leafdata());
    if (usmstatswrongdigests.is_set || is_set(usmstatswrongdigests.yfilter)) leaf_name_data.push_back(usmstatswrongdigests.get_name_leafdata());
    if (usmstatsdecryptionerrors.is_set || is_set(usmstatsdecryptionerrors.yfilter)) leaf_name_data.push_back(usmstatsdecryptionerrors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPUSERBASEDSMMIB::UsmStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPUSERBASEDSMMIB::UsmStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SNMPUSERBASEDSMMIB::UsmStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "usmStatsUnsupportedSecLevels")
    {
        usmstatsunsupportedseclevels = value;
        usmstatsunsupportedseclevels.value_namespace = name_space;
        usmstatsunsupportedseclevels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmStatsNotInTimeWindows")
    {
        usmstatsnotintimewindows = value;
        usmstatsnotintimewindows.value_namespace = name_space;
        usmstatsnotintimewindows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmStatsUnknownUserNames")
    {
        usmstatsunknownusernames = value;
        usmstatsunknownusernames.value_namespace = name_space;
        usmstatsunknownusernames.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmStatsUnknownEngineIDs")
    {
        usmstatsunknownengineids = value;
        usmstatsunknownengineids.value_namespace = name_space;
        usmstatsunknownengineids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmStatsWrongDigests")
    {
        usmstatswrongdigests = value;
        usmstatswrongdigests.value_namespace = name_space;
        usmstatswrongdigests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmStatsDecryptionErrors")
    {
        usmstatsdecryptionerrors = value;
        usmstatsdecryptionerrors.value_namespace = name_space;
        usmstatsdecryptionerrors.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPUSERBASEDSMMIB::UsmStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "usmStatsUnsupportedSecLevels")
    {
        usmstatsunsupportedseclevels.yfilter = yfilter;
    }
    if(value_path == "usmStatsNotInTimeWindows")
    {
        usmstatsnotintimewindows.yfilter = yfilter;
    }
    if(value_path == "usmStatsUnknownUserNames")
    {
        usmstatsunknownusernames.yfilter = yfilter;
    }
    if(value_path == "usmStatsUnknownEngineIDs")
    {
        usmstatsunknownengineids.yfilter = yfilter;
    }
    if(value_path == "usmStatsWrongDigests")
    {
        usmstatswrongdigests.yfilter = yfilter;
    }
    if(value_path == "usmStatsDecryptionErrors")
    {
        usmstatsdecryptionerrors.yfilter = yfilter;
    }
}

bool SNMPUSERBASEDSMMIB::UsmStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usmStatsUnsupportedSecLevels" || name == "usmStatsNotInTimeWindows" || name == "usmStatsUnknownUserNames" || name == "usmStatsUnknownEngineIDs" || name == "usmStatsWrongDigests" || name == "usmStatsDecryptionErrors")
        return true;
    return false;
}

SNMPUSERBASEDSMMIB::UsmUserTable::UsmUserTable()
    :
    usmuserentry(this, {"usmuserengineid", "usmusername"})
{

    yang_name = "usmUserTable"; yang_parent_name = "SNMP-USER-BASED-SM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPUSERBASEDSMMIB::UsmUserTable::~UsmUserTable()
{
}

bool SNMPUSERBASEDSMMIB::UsmUserTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<usmuserentry.len(); index++)
    {
        if(usmuserentry[index]->has_data())
            return true;
    }
    return false;
}

bool SNMPUSERBASEDSMMIB::UsmUserTable::has_operation() const
{
    for (std::size_t index=0; index<usmuserentry.len(); index++)
    {
        if(usmuserentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SNMPUSERBASEDSMMIB::UsmUserTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-USER-BASED-SM-MIB:SNMP-USER-BASED-SM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPUSERBASEDSMMIB::UsmUserTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usmUserTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPUSERBASEDSMMIB::UsmUserTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPUSERBASEDSMMIB::UsmUserTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usmUserEntry")
    {
        auto ent_ = std::make_shared<SNMPUSERBASEDSMMIB::UsmUserTable::UsmUserEntry>();
        ent_->parent = this;
        usmuserentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPUSERBASEDSMMIB::UsmUserTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : usmuserentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SNMPUSERBASEDSMMIB::UsmUserTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SNMPUSERBASEDSMMIB::UsmUserTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SNMPUSERBASEDSMMIB::UsmUserTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usmUserEntry")
        return true;
    return false;
}

SNMPUSERBASEDSMMIB::UsmUserTable::UsmUserEntry::UsmUserEntry()
    :
    usmuserengineid{YType::str, "usmUserEngineID"},
    usmusername{YType::str, "usmUserName"},
    usmusersecurityname{YType::str, "usmUserSecurityName"},
    usmuserclonefrom{YType::str, "usmUserCloneFrom"},
    usmuserauthprotocol{YType::str, "usmUserAuthProtocol"},
    usmuserauthkeychange{YType::str, "usmUserAuthKeyChange"},
    usmuserownauthkeychange{YType::str, "usmUserOwnAuthKeyChange"},
    usmuserprivprotocol{YType::str, "usmUserPrivProtocol"},
    usmuserprivkeychange{YType::str, "usmUserPrivKeyChange"},
    usmuserownprivkeychange{YType::str, "usmUserOwnPrivKeyChange"},
    usmuserpublic{YType::str, "usmUserPublic"},
    usmuserstoragetype{YType::enumeration, "usmUserStorageType"},
    usmuserauthkey{YType::str, "usmUserAuthKey"},
    usmuserprivkey{YType::str, "usmUserPrivKey"}
{

    yang_name = "usmUserEntry"; yang_parent_name = "usmUserTable"; is_top_level_class = false; has_list_ancestor = false; 
}

SNMPUSERBASEDSMMIB::UsmUserTable::UsmUserEntry::~UsmUserEntry()
{
}

bool SNMPUSERBASEDSMMIB::UsmUserTable::UsmUserEntry::has_data() const
{
    if (is_presence_container) return true;
    return usmuserengineid.is_set
	|| usmusername.is_set
	|| usmusersecurityname.is_set
	|| usmuserclonefrom.is_set
	|| usmuserauthprotocol.is_set
	|| usmuserauthkeychange.is_set
	|| usmuserownauthkeychange.is_set
	|| usmuserprivprotocol.is_set
	|| usmuserprivkeychange.is_set
	|| usmuserownprivkeychange.is_set
	|| usmuserpublic.is_set
	|| usmuserstoragetype.is_set
	|| usmuserauthkey.is_set
	|| usmuserprivkey.is_set;
}

bool SNMPUSERBASEDSMMIB::UsmUserTable::UsmUserEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(usmuserengineid.yfilter)
	|| ydk::is_set(usmusername.yfilter)
	|| ydk::is_set(usmusersecurityname.yfilter)
	|| ydk::is_set(usmuserclonefrom.yfilter)
	|| ydk::is_set(usmuserauthprotocol.yfilter)
	|| ydk::is_set(usmuserauthkeychange.yfilter)
	|| ydk::is_set(usmuserownauthkeychange.yfilter)
	|| ydk::is_set(usmuserprivprotocol.yfilter)
	|| ydk::is_set(usmuserprivkeychange.yfilter)
	|| ydk::is_set(usmuserownprivkeychange.yfilter)
	|| ydk::is_set(usmuserpublic.yfilter)
	|| ydk::is_set(usmuserstoragetype.yfilter)
	|| ydk::is_set(usmuserauthkey.yfilter)
	|| ydk::is_set(usmuserprivkey.yfilter);
}

std::string SNMPUSERBASEDSMMIB::UsmUserTable::UsmUserEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "SNMP-USER-BASED-SM-MIB:SNMP-USER-BASED-SM-MIB/usmUserTable/" << get_segment_path();
    return path_buffer.str();
}

std::string SNMPUSERBASEDSMMIB::UsmUserTable::UsmUserEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usmUserEntry";
    ADD_KEY_TOKEN(usmuserengineid, "usmUserEngineID");
    ADD_KEY_TOKEN(usmusername, "usmUserName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SNMPUSERBASEDSMMIB::UsmUserTable::UsmUserEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (usmuserengineid.is_set || is_set(usmuserengineid.yfilter)) leaf_name_data.push_back(usmuserengineid.get_name_leafdata());
    if (usmusername.is_set || is_set(usmusername.yfilter)) leaf_name_data.push_back(usmusername.get_name_leafdata());
    if (usmusersecurityname.is_set || is_set(usmusersecurityname.yfilter)) leaf_name_data.push_back(usmusersecurityname.get_name_leafdata());
    if (usmuserclonefrom.is_set || is_set(usmuserclonefrom.yfilter)) leaf_name_data.push_back(usmuserclonefrom.get_name_leafdata());
    if (usmuserauthprotocol.is_set || is_set(usmuserauthprotocol.yfilter)) leaf_name_data.push_back(usmuserauthprotocol.get_name_leafdata());
    if (usmuserauthkeychange.is_set || is_set(usmuserauthkeychange.yfilter)) leaf_name_data.push_back(usmuserauthkeychange.get_name_leafdata());
    if (usmuserownauthkeychange.is_set || is_set(usmuserownauthkeychange.yfilter)) leaf_name_data.push_back(usmuserownauthkeychange.get_name_leafdata());
    if (usmuserprivprotocol.is_set || is_set(usmuserprivprotocol.yfilter)) leaf_name_data.push_back(usmuserprivprotocol.get_name_leafdata());
    if (usmuserprivkeychange.is_set || is_set(usmuserprivkeychange.yfilter)) leaf_name_data.push_back(usmuserprivkeychange.get_name_leafdata());
    if (usmuserownprivkeychange.is_set || is_set(usmuserownprivkeychange.yfilter)) leaf_name_data.push_back(usmuserownprivkeychange.get_name_leafdata());
    if (usmuserpublic.is_set || is_set(usmuserpublic.yfilter)) leaf_name_data.push_back(usmuserpublic.get_name_leafdata());
    if (usmuserstoragetype.is_set || is_set(usmuserstoragetype.yfilter)) leaf_name_data.push_back(usmuserstoragetype.get_name_leafdata());
    if (usmuserauthkey.is_set || is_set(usmuserauthkey.yfilter)) leaf_name_data.push_back(usmuserauthkey.get_name_leafdata());
    if (usmuserprivkey.is_set || is_set(usmuserprivkey.yfilter)) leaf_name_data.push_back(usmuserprivkey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SNMPUSERBASEDSMMIB::UsmUserTable::UsmUserEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SNMPUSERBASEDSMMIB::UsmUserTable::UsmUserEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SNMPUSERBASEDSMMIB::UsmUserTable::UsmUserEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "usmUserEngineID")
    {
        usmuserengineid = value;
        usmuserengineid.value_namespace = name_space;
        usmuserengineid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmUserName")
    {
        usmusername = value;
        usmusername.value_namespace = name_space;
        usmusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmUserSecurityName")
    {
        usmusersecurityname = value;
        usmusersecurityname.value_namespace = name_space;
        usmusersecurityname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmUserCloneFrom")
    {
        usmuserclonefrom = value;
        usmuserclonefrom.value_namespace = name_space;
        usmuserclonefrom.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmUserAuthProtocol")
    {
        usmuserauthprotocol = value;
        usmuserauthprotocol.value_namespace = name_space;
        usmuserauthprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmUserAuthKeyChange")
    {
        usmuserauthkeychange = value;
        usmuserauthkeychange.value_namespace = name_space;
        usmuserauthkeychange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmUserOwnAuthKeyChange")
    {
        usmuserownauthkeychange = value;
        usmuserownauthkeychange.value_namespace = name_space;
        usmuserownauthkeychange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmUserPrivProtocol")
    {
        usmuserprivprotocol = value;
        usmuserprivprotocol.value_namespace = name_space;
        usmuserprivprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmUserPrivKeyChange")
    {
        usmuserprivkeychange = value;
        usmuserprivkeychange.value_namespace = name_space;
        usmuserprivkeychange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmUserOwnPrivKeyChange")
    {
        usmuserownprivkeychange = value;
        usmuserownprivkeychange.value_namespace = name_space;
        usmuserownprivkeychange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmUserPublic")
    {
        usmuserpublic = value;
        usmuserpublic.value_namespace = name_space;
        usmuserpublic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmUserStorageType")
    {
        usmuserstoragetype = value;
        usmuserstoragetype.value_namespace = name_space;
        usmuserstoragetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmUserAuthKey")
    {
        usmuserauthkey = value;
        usmuserauthkey.value_namespace = name_space;
        usmuserauthkey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usmUserPrivKey")
    {
        usmuserprivkey = value;
        usmuserprivkey.value_namespace = name_space;
        usmuserprivkey.value_namespace_prefix = name_space_prefix;
    }
}

void SNMPUSERBASEDSMMIB::UsmUserTable::UsmUserEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "usmUserEngineID")
    {
        usmuserengineid.yfilter = yfilter;
    }
    if(value_path == "usmUserName")
    {
        usmusername.yfilter = yfilter;
    }
    if(value_path == "usmUserSecurityName")
    {
        usmusersecurityname.yfilter = yfilter;
    }
    if(value_path == "usmUserCloneFrom")
    {
        usmuserclonefrom.yfilter = yfilter;
    }
    if(value_path == "usmUserAuthProtocol")
    {
        usmuserauthprotocol.yfilter = yfilter;
    }
    if(value_path == "usmUserAuthKeyChange")
    {
        usmuserauthkeychange.yfilter = yfilter;
    }
    if(value_path == "usmUserOwnAuthKeyChange")
    {
        usmuserownauthkeychange.yfilter = yfilter;
    }
    if(value_path == "usmUserPrivProtocol")
    {
        usmuserprivprotocol.yfilter = yfilter;
    }
    if(value_path == "usmUserPrivKeyChange")
    {
        usmuserprivkeychange.yfilter = yfilter;
    }
    if(value_path == "usmUserOwnPrivKeyChange")
    {
        usmuserownprivkeychange.yfilter = yfilter;
    }
    if(value_path == "usmUserPublic")
    {
        usmuserpublic.yfilter = yfilter;
    }
    if(value_path == "usmUserStorageType")
    {
        usmuserstoragetype.yfilter = yfilter;
    }
    if(value_path == "usmUserAuthKey")
    {
        usmuserauthkey.yfilter = yfilter;
    }
    if(value_path == "usmUserPrivKey")
    {
        usmuserprivkey.yfilter = yfilter;
    }
}

bool SNMPUSERBASEDSMMIB::UsmUserTable::UsmUserEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usmUserEngineID" || name == "usmUserName" || name == "usmUserSecurityName" || name == "usmUserCloneFrom" || name == "usmUserAuthProtocol" || name == "usmUserAuthKeyChange" || name == "usmUserOwnAuthKeyChange" || name == "usmUserPrivProtocol" || name == "usmUserPrivKeyChange" || name == "usmUserOwnPrivKeyChange" || name == "usmUserPublic" || name == "usmUserStorageType" || name == "usmUserAuthKey" || name == "usmUserPrivKey")
        return true;
    return false;
}


}
}

