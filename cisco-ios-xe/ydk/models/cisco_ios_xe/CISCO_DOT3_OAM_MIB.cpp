
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_DOT3_OAM_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_DOT3_OAM_MIB {

CISCODOT3OAMMIB::CISCODOT3OAMMIB()
    :
    cdot3oamtable(std::make_shared<CISCODOT3OAMMIB::Cdot3OamTable>())
    , cdot3oampeertable(std::make_shared<CISCODOT3OAMMIB::Cdot3OamPeerTable>())
    , cdot3oamloopbacktable(std::make_shared<CISCODOT3OAMMIB::Cdot3OamLoopbackTable>())
    , cdot3oamstatstable(std::make_shared<CISCODOT3OAMMIB::Cdot3OamStatsTable>())
    , cdot3oameventconfigtable(std::make_shared<CISCODOT3OAMMIB::Cdot3OamEventConfigTable>())
    , cdot3oameventlogtable(std::make_shared<CISCODOT3OAMMIB::Cdot3OamEventLogTable>())
{
    cdot3oamtable->parent = this;
    cdot3oampeertable->parent = this;
    cdot3oamloopbacktable->parent = this;
    cdot3oamstatstable->parent = this;
    cdot3oameventconfigtable->parent = this;
    cdot3oameventlogtable->parent = this;

    yang_name = "CISCO-DOT3-OAM-MIB"; yang_parent_name = "CISCO-DOT3-OAM-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCODOT3OAMMIB::~CISCODOT3OAMMIB()
{
}

bool CISCODOT3OAMMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cdot3oamtable !=  nullptr && cdot3oamtable->has_data())
	|| (cdot3oampeertable !=  nullptr && cdot3oampeertable->has_data())
	|| (cdot3oamloopbacktable !=  nullptr && cdot3oamloopbacktable->has_data())
	|| (cdot3oamstatstable !=  nullptr && cdot3oamstatstable->has_data())
	|| (cdot3oameventconfigtable !=  nullptr && cdot3oameventconfigtable->has_data())
	|| (cdot3oameventlogtable !=  nullptr && cdot3oameventlogtable->has_data());
}

bool CISCODOT3OAMMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cdot3oamtable !=  nullptr && cdot3oamtable->has_operation())
	|| (cdot3oampeertable !=  nullptr && cdot3oampeertable->has_operation())
	|| (cdot3oamloopbacktable !=  nullptr && cdot3oamloopbacktable->has_operation())
	|| (cdot3oamstatstable !=  nullptr && cdot3oamstatstable->has_operation())
	|| (cdot3oameventconfigtable !=  nullptr && cdot3oameventconfigtable->has_operation())
	|| (cdot3oameventlogtable !=  nullptr && cdot3oameventlogtable->has_operation());
}

std::string CISCODOT3OAMMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOT3OAMMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODOT3OAMMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdot3OamTable")
    {
        if(cdot3oamtable == nullptr)
        {
            cdot3oamtable = std::make_shared<CISCODOT3OAMMIB::Cdot3OamTable>();
        }
        return cdot3oamtable;
    }

    if(child_yang_name == "cdot3OamPeerTable")
    {
        if(cdot3oampeertable == nullptr)
        {
            cdot3oampeertable = std::make_shared<CISCODOT3OAMMIB::Cdot3OamPeerTable>();
        }
        return cdot3oampeertable;
    }

    if(child_yang_name == "cdot3OamLoopbackTable")
    {
        if(cdot3oamloopbacktable == nullptr)
        {
            cdot3oamloopbacktable = std::make_shared<CISCODOT3OAMMIB::Cdot3OamLoopbackTable>();
        }
        return cdot3oamloopbacktable;
    }

    if(child_yang_name == "cdot3OamStatsTable")
    {
        if(cdot3oamstatstable == nullptr)
        {
            cdot3oamstatstable = std::make_shared<CISCODOT3OAMMIB::Cdot3OamStatsTable>();
        }
        return cdot3oamstatstable;
    }

    if(child_yang_name == "cdot3OamEventConfigTable")
    {
        if(cdot3oameventconfigtable == nullptr)
        {
            cdot3oameventconfigtable = std::make_shared<CISCODOT3OAMMIB::Cdot3OamEventConfigTable>();
        }
        return cdot3oameventconfigtable;
    }

    if(child_yang_name == "cdot3OamEventLogTable")
    {
        if(cdot3oameventlogtable == nullptr)
        {
            cdot3oameventlogtable = std::make_shared<CISCODOT3OAMMIB::Cdot3OamEventLogTable>();
        }
        return cdot3oameventlogtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODOT3OAMMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cdot3oamtable != nullptr)
    {
        _children["cdot3OamTable"] = cdot3oamtable;
    }

    if(cdot3oampeertable != nullptr)
    {
        _children["cdot3OamPeerTable"] = cdot3oampeertable;
    }

    if(cdot3oamloopbacktable != nullptr)
    {
        _children["cdot3OamLoopbackTable"] = cdot3oamloopbacktable;
    }

    if(cdot3oamstatstable != nullptr)
    {
        _children["cdot3OamStatsTable"] = cdot3oamstatstable;
    }

    if(cdot3oameventconfigtable != nullptr)
    {
        _children["cdot3OamEventConfigTable"] = cdot3oameventconfigtable;
    }

    if(cdot3oameventlogtable != nullptr)
    {
        _children["cdot3OamEventLogTable"] = cdot3oameventlogtable;
    }

    return _children;
}

void CISCODOT3OAMMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOT3OAMMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCODOT3OAMMIB::clone_ptr() const
{
    return std::make_shared<CISCODOT3OAMMIB>();
}

std::string CISCODOT3OAMMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCODOT3OAMMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCODOT3OAMMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCODOT3OAMMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCODOT3OAMMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdot3OamTable" || name == "cdot3OamPeerTable" || name == "cdot3OamLoopbackTable" || name == "cdot3OamStatsTable" || name == "cdot3OamEventConfigTable" || name == "cdot3OamEventLogTable")
        return true;
    return false;
}

CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamTable()
    :
    cdot3oamentry(this, {"ifindex"})
{

    yang_name = "cdot3OamTable"; yang_parent_name = "CISCO-DOT3-OAM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOT3OAMMIB::Cdot3OamTable::~Cdot3OamTable()
{
}

bool CISCODOT3OAMMIB::Cdot3OamTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdot3oamentry.len(); index++)
    {
        if(cdot3oamentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOT3OAMMIB::Cdot3OamTable::has_operation() const
{
    for (std::size_t index=0; index<cdot3oamentry.len(); index++)
    {
        if(cdot3oamentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOT3OAMMIB::Cdot3OamTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOT3OAMMIB::Cdot3OamTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOT3OAMMIB::Cdot3OamTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODOT3OAMMIB::Cdot3OamTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdot3OamEntry")
    {
        auto ent_ = std::make_shared<CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry>();
        ent_->parent = this;
        cdot3oamentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODOT3OAMMIB::Cdot3OamTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cdot3oamentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCODOT3OAMMIB::Cdot3OamTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOT3OAMMIB::Cdot3OamTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOT3OAMMIB::Cdot3OamTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdot3OamEntry")
        return true;
    return false;
}

CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdot3oamadminstate{YType::enumeration, "cdot3OamAdminState"},
    cdot3oamoperstatus{YType::enumeration, "cdot3OamOperStatus"},
    cdot3oammode{YType::enumeration, "cdot3OamMode"},
    cdot3oammaxoampdusize{YType::uint32, "cdot3OamMaxOamPduSize"},
    cdot3oamconfigrevision{YType::uint32, "cdot3OamConfigRevision"},
    cdot3oamfunctionssupported{YType::bits, "cdot3OamFunctionsSupported"}
{

    yang_name = "cdot3OamEntry"; yang_parent_name = "cdot3OamTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::~Cdot3OamEntry()
{
}

bool CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdot3oamadminstate.is_set
	|| cdot3oamoperstatus.is_set
	|| cdot3oammode.is_set
	|| cdot3oammaxoampdusize.is_set
	|| cdot3oamconfigrevision.is_set
	|| cdot3oamfunctionssupported.is_set;
}

bool CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdot3oamadminstate.yfilter)
	|| ydk::is_set(cdot3oamoperstatus.yfilter)
	|| ydk::is_set(cdot3oammode.yfilter)
	|| ydk::is_set(cdot3oammaxoampdusize.yfilter)
	|| ydk::is_set(cdot3oamconfigrevision.yfilter)
	|| ydk::is_set(cdot3oamfunctionssupported.yfilter);
}

std::string CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/cdot3OamTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oamadminstate.is_set || is_set(cdot3oamadminstate.yfilter)) leaf_name_data.push_back(cdot3oamadminstate.get_name_leafdata());
    if (cdot3oamoperstatus.is_set || is_set(cdot3oamoperstatus.yfilter)) leaf_name_data.push_back(cdot3oamoperstatus.get_name_leafdata());
    if (cdot3oammode.is_set || is_set(cdot3oammode.yfilter)) leaf_name_data.push_back(cdot3oammode.get_name_leafdata());
    if (cdot3oammaxoampdusize.is_set || is_set(cdot3oammaxoampdusize.yfilter)) leaf_name_data.push_back(cdot3oammaxoampdusize.get_name_leafdata());
    if (cdot3oamconfigrevision.is_set || is_set(cdot3oamconfigrevision.yfilter)) leaf_name_data.push_back(cdot3oamconfigrevision.get_name_leafdata());
    if (cdot3oamfunctionssupported.is_set || is_set(cdot3oamfunctionssupported.yfilter)) leaf_name_data.push_back(cdot3oamfunctionssupported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cdot3OamOperStatus")
    {
        cdot3oamoperstatus = value;
        cdot3oamoperstatus.value_namespace = name_space;
        cdot3oamoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamMode")
    {
        cdot3oammode = value;
        cdot3oammode.value_namespace = name_space;
        cdot3oammode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamMaxOamPduSize")
    {
        cdot3oammaxoampdusize = value;
        cdot3oammaxoampdusize.value_namespace = name_space;
        cdot3oammaxoampdusize.value_namespace_prefix = name_space_prefix;
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
}

void CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdot3OamAdminState")
    {
        cdot3oamadminstate.yfilter = yfilter;
    }
    if(value_path == "cdot3OamOperStatus")
    {
        cdot3oamoperstatus.yfilter = yfilter;
    }
    if(value_path == "cdot3OamMode")
    {
        cdot3oammode.yfilter = yfilter;
    }
    if(value_path == "cdot3OamMaxOamPduSize")
    {
        cdot3oammaxoampdusize.yfilter = yfilter;
    }
    if(value_path == "cdot3OamConfigRevision")
    {
        cdot3oamconfigrevision.yfilter = yfilter;
    }
    if(value_path == "cdot3OamFunctionsSupported")
    {
        cdot3oamfunctionssupported.yfilter = yfilter;
    }
}

bool CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdot3OamAdminState" || name == "cdot3OamOperStatus" || name == "cdot3OamMode" || name == "cdot3OamMaxOamPduSize" || name == "cdot3OamConfigRevision" || name == "cdot3OamFunctionsSupported")
        return true;
    return false;
}

CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerTable()
    :
    cdot3oampeerentry(this, {"ifindex"})
{

    yang_name = "cdot3OamPeerTable"; yang_parent_name = "CISCO-DOT3-OAM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOT3OAMMIB::Cdot3OamPeerTable::~Cdot3OamPeerTable()
{
}

bool CISCODOT3OAMMIB::Cdot3OamPeerTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdot3oampeerentry.len(); index++)
    {
        if(cdot3oampeerentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOT3OAMMIB::Cdot3OamPeerTable::has_operation() const
{
    for (std::size_t index=0; index<cdot3oampeerentry.len(); index++)
    {
        if(cdot3oampeerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOT3OAMMIB::Cdot3OamPeerTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOT3OAMMIB::Cdot3OamPeerTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamPeerTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOT3OAMMIB::Cdot3OamPeerTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODOT3OAMMIB::Cdot3OamPeerTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdot3OamPeerEntry")
    {
        auto ent_ = std::make_shared<CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry>();
        ent_->parent = this;
        cdot3oampeerentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODOT3OAMMIB::Cdot3OamPeerTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cdot3oampeerentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCODOT3OAMMIB::Cdot3OamPeerTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOT3OAMMIB::Cdot3OamPeerTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOT3OAMMIB::Cdot3OamPeerTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdot3OamPeerEntry")
        return true;
    return false;
}

CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry::Cdot3OamPeerEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdot3oampeermacaddress{YType::str, "cdot3OamPeerMacAddress"},
    cdot3oampeervendoroui{YType::str, "cdot3OamPeerVendorOui"},
    cdot3oampeervendorinfo{YType::uint32, "cdot3OamPeerVendorInfo"},
    cdot3oampeermode{YType::enumeration, "cdot3OamPeerMode"},
    cdot3oampeermaxoampdusize{YType::uint32, "cdot3OamPeerMaxOamPduSize"},
    cdot3oampeerconfigrevision{YType::uint32, "cdot3OamPeerConfigRevision"},
    cdot3oampeerfunctionssupported{YType::bits, "cdot3OamPeerFunctionsSupported"}
{

    yang_name = "cdot3OamPeerEntry"; yang_parent_name = "cdot3OamPeerTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry::~Cdot3OamPeerEntry()
{
}

bool CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdot3oampeermacaddress.is_set
	|| cdot3oampeervendoroui.is_set
	|| cdot3oampeervendorinfo.is_set
	|| cdot3oampeermode.is_set
	|| cdot3oampeermaxoampdusize.is_set
	|| cdot3oampeerconfigrevision.is_set
	|| cdot3oampeerfunctionssupported.is_set;
}

bool CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdot3oampeermacaddress.yfilter)
	|| ydk::is_set(cdot3oampeervendoroui.yfilter)
	|| ydk::is_set(cdot3oampeervendorinfo.yfilter)
	|| ydk::is_set(cdot3oampeermode.yfilter)
	|| ydk::is_set(cdot3oampeermaxoampdusize.yfilter)
	|| ydk::is_set(cdot3oampeerconfigrevision.yfilter)
	|| ydk::is_set(cdot3oampeerfunctionssupported.yfilter);
}

std::string CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/cdot3OamPeerTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamPeerEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oampeermacaddress.is_set || is_set(cdot3oampeermacaddress.yfilter)) leaf_name_data.push_back(cdot3oampeermacaddress.get_name_leafdata());
    if (cdot3oampeervendoroui.is_set || is_set(cdot3oampeervendoroui.yfilter)) leaf_name_data.push_back(cdot3oampeervendoroui.get_name_leafdata());
    if (cdot3oampeervendorinfo.is_set || is_set(cdot3oampeervendorinfo.yfilter)) leaf_name_data.push_back(cdot3oampeervendorinfo.get_name_leafdata());
    if (cdot3oampeermode.is_set || is_set(cdot3oampeermode.yfilter)) leaf_name_data.push_back(cdot3oampeermode.get_name_leafdata());
    if (cdot3oampeermaxoampdusize.is_set || is_set(cdot3oampeermaxoampdusize.yfilter)) leaf_name_data.push_back(cdot3oampeermaxoampdusize.get_name_leafdata());
    if (cdot3oampeerconfigrevision.is_set || is_set(cdot3oampeerconfigrevision.yfilter)) leaf_name_data.push_back(cdot3oampeerconfigrevision.get_name_leafdata());
    if (cdot3oampeerfunctionssupported.is_set || is_set(cdot3oampeerfunctionssupported.yfilter)) leaf_name_data.push_back(cdot3oampeerfunctionssupported.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamPeerMacAddress")
    {
        cdot3oampeermacaddress = value;
        cdot3oampeermacaddress.value_namespace = name_space;
        cdot3oampeermacaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamPeerVendorOui")
    {
        cdot3oampeervendoroui = value;
        cdot3oampeervendoroui.value_namespace = name_space;
        cdot3oampeervendoroui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamPeerVendorInfo")
    {
        cdot3oampeervendorinfo = value;
        cdot3oampeervendorinfo.value_namespace = name_space;
        cdot3oampeervendorinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamPeerMode")
    {
        cdot3oampeermode = value;
        cdot3oampeermode.value_namespace = name_space;
        cdot3oampeermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamPeerMaxOamPduSize")
    {
        cdot3oampeermaxoampdusize = value;
        cdot3oampeermaxoampdusize.value_namespace = name_space;
        cdot3oampeermaxoampdusize.value_namespace_prefix = name_space_prefix;
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
}

void CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdot3OamPeerMacAddress")
    {
        cdot3oampeermacaddress.yfilter = yfilter;
    }
    if(value_path == "cdot3OamPeerVendorOui")
    {
        cdot3oampeervendoroui.yfilter = yfilter;
    }
    if(value_path == "cdot3OamPeerVendorInfo")
    {
        cdot3oampeervendorinfo.yfilter = yfilter;
    }
    if(value_path == "cdot3OamPeerMode")
    {
        cdot3oampeermode.yfilter = yfilter;
    }
    if(value_path == "cdot3OamPeerMaxOamPduSize")
    {
        cdot3oampeermaxoampdusize.yfilter = yfilter;
    }
    if(value_path == "cdot3OamPeerConfigRevision")
    {
        cdot3oampeerconfigrevision.yfilter = yfilter;
    }
    if(value_path == "cdot3OamPeerFunctionsSupported")
    {
        cdot3oampeerfunctionssupported.yfilter = yfilter;
    }
}

bool CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdot3OamPeerMacAddress" || name == "cdot3OamPeerVendorOui" || name == "cdot3OamPeerVendorInfo" || name == "cdot3OamPeerMode" || name == "cdot3OamPeerMaxOamPduSize" || name == "cdot3OamPeerConfigRevision" || name == "cdot3OamPeerFunctionsSupported")
        return true;
    return false;
}

CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackTable()
    :
    cdot3oamloopbackentry(this, {"ifindex"})
{

    yang_name = "cdot3OamLoopbackTable"; yang_parent_name = "CISCO-DOT3-OAM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOT3OAMMIB::Cdot3OamLoopbackTable::~Cdot3OamLoopbackTable()
{
}

bool CISCODOT3OAMMIB::Cdot3OamLoopbackTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdot3oamloopbackentry.len(); index++)
    {
        if(cdot3oamloopbackentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOT3OAMMIB::Cdot3OamLoopbackTable::has_operation() const
{
    for (std::size_t index=0; index<cdot3oamloopbackentry.len(); index++)
    {
        if(cdot3oamloopbackentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOT3OAMMIB::Cdot3OamLoopbackTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOT3OAMMIB::Cdot3OamLoopbackTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamLoopbackTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOT3OAMMIB::Cdot3OamLoopbackTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODOT3OAMMIB::Cdot3OamLoopbackTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdot3OamLoopbackEntry")
    {
        auto ent_ = std::make_shared<CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry>();
        ent_->parent = this;
        cdot3oamloopbackentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODOT3OAMMIB::Cdot3OamLoopbackTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cdot3oamloopbackentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCODOT3OAMMIB::Cdot3OamLoopbackTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOT3OAMMIB::Cdot3OamLoopbackTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOT3OAMMIB::Cdot3OamLoopbackTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdot3OamLoopbackEntry")
        return true;
    return false;
}

CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::Cdot3OamLoopbackEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdot3oamloopbackstatus{YType::enumeration, "cdot3OamLoopbackStatus"},
    cdot3oamloopbackignorerx{YType::enumeration, "cdot3OamLoopbackIgnoreRx"}
{

    yang_name = "cdot3OamLoopbackEntry"; yang_parent_name = "cdot3OamLoopbackTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::~Cdot3OamLoopbackEntry()
{
}

bool CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdot3oamloopbackstatus.is_set
	|| cdot3oamloopbackignorerx.is_set;
}

bool CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdot3oamloopbackstatus.yfilter)
	|| ydk::is_set(cdot3oamloopbackignorerx.yfilter);
}

std::string CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/cdot3OamLoopbackTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamLoopbackEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oamloopbackstatus.is_set || is_set(cdot3oamloopbackstatus.yfilter)) leaf_name_data.push_back(cdot3oamloopbackstatus.get_name_leafdata());
    if (cdot3oamloopbackignorerx.is_set || is_set(cdot3oamloopbackignorerx.yfilter)) leaf_name_data.push_back(cdot3oamloopbackignorerx.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamLoopbackStatus")
    {
        cdot3oamloopbackstatus = value;
        cdot3oamloopbackstatus.value_namespace = name_space;
        cdot3oamloopbackstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamLoopbackIgnoreRx")
    {
        cdot3oamloopbackignorerx = value;
        cdot3oamloopbackignorerx.value_namespace = name_space;
        cdot3oamloopbackignorerx.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdot3OamLoopbackStatus")
    {
        cdot3oamloopbackstatus.yfilter = yfilter;
    }
    if(value_path == "cdot3OamLoopbackIgnoreRx")
    {
        cdot3oamloopbackignorerx.yfilter = yfilter;
    }
}

bool CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdot3OamLoopbackStatus" || name == "cdot3OamLoopbackIgnoreRx")
        return true;
    return false;
}

CISCODOT3OAMMIB::Cdot3OamStatsTable::Cdot3OamStatsTable()
    :
    cdot3oamstatsentry(this, {"ifindex"})
{

    yang_name = "cdot3OamStatsTable"; yang_parent_name = "CISCO-DOT3-OAM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOT3OAMMIB::Cdot3OamStatsTable::~Cdot3OamStatsTable()
{
}

bool CISCODOT3OAMMIB::Cdot3OamStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdot3oamstatsentry.len(); index++)
    {
        if(cdot3oamstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOT3OAMMIB::Cdot3OamStatsTable::has_operation() const
{
    for (std::size_t index=0; index<cdot3oamstatsentry.len(); index++)
    {
        if(cdot3oamstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOT3OAMMIB::Cdot3OamStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOT3OAMMIB::Cdot3OamStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOT3OAMMIB::Cdot3OamStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODOT3OAMMIB::Cdot3OamStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdot3OamStatsEntry")
    {
        auto ent_ = std::make_shared<CISCODOT3OAMMIB::Cdot3OamStatsTable::Cdot3OamStatsEntry>();
        ent_->parent = this;
        cdot3oamstatsentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODOT3OAMMIB::Cdot3OamStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cdot3oamstatsentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCODOT3OAMMIB::Cdot3OamStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOT3OAMMIB::Cdot3OamStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOT3OAMMIB::Cdot3OamStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdot3OamStatsEntry")
        return true;
    return false;
}

CISCODOT3OAMMIB::Cdot3OamStatsTable::Cdot3OamStatsEntry::Cdot3OamStatsEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdot3oaminformationtx{YType::uint32, "cdot3OamInformationTx"},
    cdot3oaminformationrx{YType::uint32, "cdot3OamInformationRx"},
    cdot3oamuniqueeventnotificationtx{YType::uint32, "cdot3OamUniqueEventNotificationTx"},
    cdot3oamuniqueeventnotificationrx{YType::uint32, "cdot3OamUniqueEventNotificationRx"},
    cdot3oamduplicateeventnotificationtx{YType::uint32, "cdot3OamDuplicateEventNotificationTx"},
    cdot3oamduplicateeventnotificationrx{YType::uint32, "cdot3OamDuplicateEventNotificationRx"},
    cdot3oamloopbackcontroltx{YType::uint32, "cdot3OamLoopbackControlTx"},
    cdot3oamloopbackcontrolrx{YType::uint32, "cdot3OamLoopbackControlRx"},
    cdot3oamvariablerequesttx{YType::uint32, "cdot3OamVariableRequestTx"},
    cdot3oamvariablerequestrx{YType::uint32, "cdot3OamVariableRequestRx"},
    cdot3oamvariableresponsetx{YType::uint32, "cdot3OamVariableResponseTx"},
    cdot3oamvariableresponserx{YType::uint32, "cdot3OamVariableResponseRx"},
    cdot3oamorgspecifictx{YType::uint32, "cdot3OamOrgSpecificTx"},
    cdot3oamorgspecificrx{YType::uint32, "cdot3OamOrgSpecificRx"},
    cdot3oamunsupportedcodestx{YType::uint32, "cdot3OamUnsupportedCodesTx"},
    cdot3oamunsupportedcodesrx{YType::uint32, "cdot3OamUnsupportedCodesRx"},
    cdot3oamframeslostduetooam{YType::uint32, "cdot3OamFramesLostDueToOam"}
{

    yang_name = "cdot3OamStatsEntry"; yang_parent_name = "cdot3OamStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOT3OAMMIB::Cdot3OamStatsTable::Cdot3OamStatsEntry::~Cdot3OamStatsEntry()
{
}

bool CISCODOT3OAMMIB::Cdot3OamStatsTable::Cdot3OamStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdot3oaminformationtx.is_set
	|| cdot3oaminformationrx.is_set
	|| cdot3oamuniqueeventnotificationtx.is_set
	|| cdot3oamuniqueeventnotificationrx.is_set
	|| cdot3oamduplicateeventnotificationtx.is_set
	|| cdot3oamduplicateeventnotificationrx.is_set
	|| cdot3oamloopbackcontroltx.is_set
	|| cdot3oamloopbackcontrolrx.is_set
	|| cdot3oamvariablerequesttx.is_set
	|| cdot3oamvariablerequestrx.is_set
	|| cdot3oamvariableresponsetx.is_set
	|| cdot3oamvariableresponserx.is_set
	|| cdot3oamorgspecifictx.is_set
	|| cdot3oamorgspecificrx.is_set
	|| cdot3oamunsupportedcodestx.is_set
	|| cdot3oamunsupportedcodesrx.is_set
	|| cdot3oamframeslostduetooam.is_set;
}

bool CISCODOT3OAMMIB::Cdot3OamStatsTable::Cdot3OamStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdot3oaminformationtx.yfilter)
	|| ydk::is_set(cdot3oaminformationrx.yfilter)
	|| ydk::is_set(cdot3oamuniqueeventnotificationtx.yfilter)
	|| ydk::is_set(cdot3oamuniqueeventnotificationrx.yfilter)
	|| ydk::is_set(cdot3oamduplicateeventnotificationtx.yfilter)
	|| ydk::is_set(cdot3oamduplicateeventnotificationrx.yfilter)
	|| ydk::is_set(cdot3oamloopbackcontroltx.yfilter)
	|| ydk::is_set(cdot3oamloopbackcontrolrx.yfilter)
	|| ydk::is_set(cdot3oamvariablerequesttx.yfilter)
	|| ydk::is_set(cdot3oamvariablerequestrx.yfilter)
	|| ydk::is_set(cdot3oamvariableresponsetx.yfilter)
	|| ydk::is_set(cdot3oamvariableresponserx.yfilter)
	|| ydk::is_set(cdot3oamorgspecifictx.yfilter)
	|| ydk::is_set(cdot3oamorgspecificrx.yfilter)
	|| ydk::is_set(cdot3oamunsupportedcodestx.yfilter)
	|| ydk::is_set(cdot3oamunsupportedcodesrx.yfilter)
	|| ydk::is_set(cdot3oamframeslostduetooam.yfilter);
}

std::string CISCODOT3OAMMIB::Cdot3OamStatsTable::Cdot3OamStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/cdot3OamStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOT3OAMMIB::Cdot3OamStatsTable::Cdot3OamStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamStatsEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOT3OAMMIB::Cdot3OamStatsTable::Cdot3OamStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oaminformationtx.is_set || is_set(cdot3oaminformationtx.yfilter)) leaf_name_data.push_back(cdot3oaminformationtx.get_name_leafdata());
    if (cdot3oaminformationrx.is_set || is_set(cdot3oaminformationrx.yfilter)) leaf_name_data.push_back(cdot3oaminformationrx.get_name_leafdata());
    if (cdot3oamuniqueeventnotificationtx.is_set || is_set(cdot3oamuniqueeventnotificationtx.yfilter)) leaf_name_data.push_back(cdot3oamuniqueeventnotificationtx.get_name_leafdata());
    if (cdot3oamuniqueeventnotificationrx.is_set || is_set(cdot3oamuniqueeventnotificationrx.yfilter)) leaf_name_data.push_back(cdot3oamuniqueeventnotificationrx.get_name_leafdata());
    if (cdot3oamduplicateeventnotificationtx.is_set || is_set(cdot3oamduplicateeventnotificationtx.yfilter)) leaf_name_data.push_back(cdot3oamduplicateeventnotificationtx.get_name_leafdata());
    if (cdot3oamduplicateeventnotificationrx.is_set || is_set(cdot3oamduplicateeventnotificationrx.yfilter)) leaf_name_data.push_back(cdot3oamduplicateeventnotificationrx.get_name_leafdata());
    if (cdot3oamloopbackcontroltx.is_set || is_set(cdot3oamloopbackcontroltx.yfilter)) leaf_name_data.push_back(cdot3oamloopbackcontroltx.get_name_leafdata());
    if (cdot3oamloopbackcontrolrx.is_set || is_set(cdot3oamloopbackcontrolrx.yfilter)) leaf_name_data.push_back(cdot3oamloopbackcontrolrx.get_name_leafdata());
    if (cdot3oamvariablerequesttx.is_set || is_set(cdot3oamvariablerequesttx.yfilter)) leaf_name_data.push_back(cdot3oamvariablerequesttx.get_name_leafdata());
    if (cdot3oamvariablerequestrx.is_set || is_set(cdot3oamvariablerequestrx.yfilter)) leaf_name_data.push_back(cdot3oamvariablerequestrx.get_name_leafdata());
    if (cdot3oamvariableresponsetx.is_set || is_set(cdot3oamvariableresponsetx.yfilter)) leaf_name_data.push_back(cdot3oamvariableresponsetx.get_name_leafdata());
    if (cdot3oamvariableresponserx.is_set || is_set(cdot3oamvariableresponserx.yfilter)) leaf_name_data.push_back(cdot3oamvariableresponserx.get_name_leafdata());
    if (cdot3oamorgspecifictx.is_set || is_set(cdot3oamorgspecifictx.yfilter)) leaf_name_data.push_back(cdot3oamorgspecifictx.get_name_leafdata());
    if (cdot3oamorgspecificrx.is_set || is_set(cdot3oamorgspecificrx.yfilter)) leaf_name_data.push_back(cdot3oamorgspecificrx.get_name_leafdata());
    if (cdot3oamunsupportedcodestx.is_set || is_set(cdot3oamunsupportedcodestx.yfilter)) leaf_name_data.push_back(cdot3oamunsupportedcodestx.get_name_leafdata());
    if (cdot3oamunsupportedcodesrx.is_set || is_set(cdot3oamunsupportedcodesrx.yfilter)) leaf_name_data.push_back(cdot3oamunsupportedcodesrx.get_name_leafdata());
    if (cdot3oamframeslostduetooam.is_set || is_set(cdot3oamframeslostduetooam.yfilter)) leaf_name_data.push_back(cdot3oamframeslostduetooam.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODOT3OAMMIB::Cdot3OamStatsTable::Cdot3OamStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODOT3OAMMIB::Cdot3OamStatsTable::Cdot3OamStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCODOT3OAMMIB::Cdot3OamStatsTable::Cdot3OamStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamInformationTx")
    {
        cdot3oaminformationtx = value;
        cdot3oaminformationtx.value_namespace = name_space;
        cdot3oaminformationtx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamInformationRx")
    {
        cdot3oaminformationrx = value;
        cdot3oaminformationrx.value_namespace = name_space;
        cdot3oaminformationrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamUniqueEventNotificationTx")
    {
        cdot3oamuniqueeventnotificationtx = value;
        cdot3oamuniqueeventnotificationtx.value_namespace = name_space;
        cdot3oamuniqueeventnotificationtx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamUniqueEventNotificationRx")
    {
        cdot3oamuniqueeventnotificationrx = value;
        cdot3oamuniqueeventnotificationrx.value_namespace = name_space;
        cdot3oamuniqueeventnotificationrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamDuplicateEventNotificationTx")
    {
        cdot3oamduplicateeventnotificationtx = value;
        cdot3oamduplicateeventnotificationtx.value_namespace = name_space;
        cdot3oamduplicateeventnotificationtx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamDuplicateEventNotificationRx")
    {
        cdot3oamduplicateeventnotificationrx = value;
        cdot3oamduplicateeventnotificationrx.value_namespace = name_space;
        cdot3oamduplicateeventnotificationrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamLoopbackControlTx")
    {
        cdot3oamloopbackcontroltx = value;
        cdot3oamloopbackcontroltx.value_namespace = name_space;
        cdot3oamloopbackcontroltx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamLoopbackControlRx")
    {
        cdot3oamloopbackcontrolrx = value;
        cdot3oamloopbackcontrolrx.value_namespace = name_space;
        cdot3oamloopbackcontrolrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamVariableRequestTx")
    {
        cdot3oamvariablerequesttx = value;
        cdot3oamvariablerequesttx.value_namespace = name_space;
        cdot3oamvariablerequesttx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamVariableRequestRx")
    {
        cdot3oamvariablerequestrx = value;
        cdot3oamvariablerequestrx.value_namespace = name_space;
        cdot3oamvariablerequestrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamVariableResponseTx")
    {
        cdot3oamvariableresponsetx = value;
        cdot3oamvariableresponsetx.value_namespace = name_space;
        cdot3oamvariableresponsetx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamVariableResponseRx")
    {
        cdot3oamvariableresponserx = value;
        cdot3oamvariableresponserx.value_namespace = name_space;
        cdot3oamvariableresponserx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamOrgSpecificTx")
    {
        cdot3oamorgspecifictx = value;
        cdot3oamorgspecifictx.value_namespace = name_space;
        cdot3oamorgspecifictx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamOrgSpecificRx")
    {
        cdot3oamorgspecificrx = value;
        cdot3oamorgspecificrx.value_namespace = name_space;
        cdot3oamorgspecificrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamUnsupportedCodesTx")
    {
        cdot3oamunsupportedcodestx = value;
        cdot3oamunsupportedcodestx.value_namespace = name_space;
        cdot3oamunsupportedcodestx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamUnsupportedCodesRx")
    {
        cdot3oamunsupportedcodesrx = value;
        cdot3oamunsupportedcodesrx.value_namespace = name_space;
        cdot3oamunsupportedcodesrx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamFramesLostDueToOam")
    {
        cdot3oamframeslostduetooam = value;
        cdot3oamframeslostduetooam.value_namespace = name_space;
        cdot3oamframeslostduetooam.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOT3OAMMIB::Cdot3OamStatsTable::Cdot3OamStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdot3OamInformationTx")
    {
        cdot3oaminformationtx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamInformationRx")
    {
        cdot3oaminformationrx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamUniqueEventNotificationTx")
    {
        cdot3oamuniqueeventnotificationtx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamUniqueEventNotificationRx")
    {
        cdot3oamuniqueeventnotificationrx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamDuplicateEventNotificationTx")
    {
        cdot3oamduplicateeventnotificationtx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamDuplicateEventNotificationRx")
    {
        cdot3oamduplicateeventnotificationrx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamLoopbackControlTx")
    {
        cdot3oamloopbackcontroltx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamLoopbackControlRx")
    {
        cdot3oamloopbackcontrolrx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamVariableRequestTx")
    {
        cdot3oamvariablerequesttx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamVariableRequestRx")
    {
        cdot3oamvariablerequestrx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamVariableResponseTx")
    {
        cdot3oamvariableresponsetx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamVariableResponseRx")
    {
        cdot3oamvariableresponserx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamOrgSpecificTx")
    {
        cdot3oamorgspecifictx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamOrgSpecificRx")
    {
        cdot3oamorgspecificrx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamUnsupportedCodesTx")
    {
        cdot3oamunsupportedcodestx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamUnsupportedCodesRx")
    {
        cdot3oamunsupportedcodesrx.yfilter = yfilter;
    }
    if(value_path == "cdot3OamFramesLostDueToOam")
    {
        cdot3oamframeslostduetooam.yfilter = yfilter;
    }
}

bool CISCODOT3OAMMIB::Cdot3OamStatsTable::Cdot3OamStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdot3OamInformationTx" || name == "cdot3OamInformationRx" || name == "cdot3OamUniqueEventNotificationTx" || name == "cdot3OamUniqueEventNotificationRx" || name == "cdot3OamDuplicateEventNotificationTx" || name == "cdot3OamDuplicateEventNotificationRx" || name == "cdot3OamLoopbackControlTx" || name == "cdot3OamLoopbackControlRx" || name == "cdot3OamVariableRequestTx" || name == "cdot3OamVariableRequestRx" || name == "cdot3OamVariableResponseTx" || name == "cdot3OamVariableResponseRx" || name == "cdot3OamOrgSpecificTx" || name == "cdot3OamOrgSpecificRx" || name == "cdot3OamUnsupportedCodesTx" || name == "cdot3OamUnsupportedCodesRx" || name == "cdot3OamFramesLostDueToOam")
        return true;
    return false;
}

CISCODOT3OAMMIB::Cdot3OamEventConfigTable::Cdot3OamEventConfigTable()
    :
    cdot3oameventconfigentry(this, {"ifindex"})
{

    yang_name = "cdot3OamEventConfigTable"; yang_parent_name = "CISCO-DOT3-OAM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOT3OAMMIB::Cdot3OamEventConfigTable::~Cdot3OamEventConfigTable()
{
}

bool CISCODOT3OAMMIB::Cdot3OamEventConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdot3oameventconfigentry.len(); index++)
    {
        if(cdot3oameventconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOT3OAMMIB::Cdot3OamEventConfigTable::has_operation() const
{
    for (std::size_t index=0; index<cdot3oameventconfigentry.len(); index++)
    {
        if(cdot3oameventconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOT3OAMMIB::Cdot3OamEventConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOT3OAMMIB::Cdot3OamEventConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamEventConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOT3OAMMIB::Cdot3OamEventConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODOT3OAMMIB::Cdot3OamEventConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdot3OamEventConfigEntry")
    {
        auto ent_ = std::make_shared<CISCODOT3OAMMIB::Cdot3OamEventConfigTable::Cdot3OamEventConfigEntry>();
        ent_->parent = this;
        cdot3oameventconfigentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODOT3OAMMIB::Cdot3OamEventConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cdot3oameventconfigentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCODOT3OAMMIB::Cdot3OamEventConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOT3OAMMIB::Cdot3OamEventConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOT3OAMMIB::Cdot3OamEventConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdot3OamEventConfigEntry")
        return true;
    return false;
}

CISCODOT3OAMMIB::Cdot3OamEventConfigTable::Cdot3OamEventConfigEntry::Cdot3OamEventConfigEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdot3oamerrsymperiodwindowhi{YType::uint32, "cdot3OamErrSymPeriodWindowHi"},
    cdot3oamerrsymperiodwindowlo{YType::uint32, "cdot3OamErrSymPeriodWindowLo"},
    cdot3oamerrsymperiodthresholdhi{YType::uint32, "cdot3OamErrSymPeriodThresholdHi"},
    cdot3oamerrsymperiodthresholdlo{YType::uint32, "cdot3OamErrSymPeriodThresholdLo"},
    cdot3oamerrsymperiodevnotifenable{YType::boolean, "cdot3OamErrSymPeriodEvNotifEnable"},
    cdot3oamerrframeperiodwindow{YType::uint32, "cdot3OamErrFramePeriodWindow"},
    cdot3oamerrframeperiodthreshold{YType::uint32, "cdot3OamErrFramePeriodThreshold"},
    cdot3oamerrframeperiodevnotifenable{YType::boolean, "cdot3OamErrFramePeriodEvNotifEnable"},
    cdot3oamerrframewindow{YType::uint32, "cdot3OamErrFrameWindow"},
    cdot3oamerrframethreshold{YType::uint32, "cdot3OamErrFrameThreshold"},
    cdot3oamerrframeevnotifenable{YType::boolean, "cdot3OamErrFrameEvNotifEnable"},
    cdot3oamerrframesecssummarywindow{YType::int32, "cdot3OamErrFrameSecsSummaryWindow"},
    cdot3oamerrframesecssummarythreshold{YType::int32, "cdot3OamErrFrameSecsSummaryThreshold"},
    cdot3oamerrframesecsevnotifenable{YType::boolean, "cdot3OamErrFrameSecsEvNotifEnable"},
    cdot3oamdyinggaspenable{YType::boolean, "cdot3OamDyingGaspEnable"},
    cdot3oamcriticaleventenable{YType::boolean, "cdot3OamCriticalEventEnable"}
{

    yang_name = "cdot3OamEventConfigEntry"; yang_parent_name = "cdot3OamEventConfigTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOT3OAMMIB::Cdot3OamEventConfigTable::Cdot3OamEventConfigEntry::~Cdot3OamEventConfigEntry()
{
}

bool CISCODOT3OAMMIB::Cdot3OamEventConfigTable::Cdot3OamEventConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdot3oamerrsymperiodwindowhi.is_set
	|| cdot3oamerrsymperiodwindowlo.is_set
	|| cdot3oamerrsymperiodthresholdhi.is_set
	|| cdot3oamerrsymperiodthresholdlo.is_set
	|| cdot3oamerrsymperiodevnotifenable.is_set
	|| cdot3oamerrframeperiodwindow.is_set
	|| cdot3oamerrframeperiodthreshold.is_set
	|| cdot3oamerrframeperiodevnotifenable.is_set
	|| cdot3oamerrframewindow.is_set
	|| cdot3oamerrframethreshold.is_set
	|| cdot3oamerrframeevnotifenable.is_set
	|| cdot3oamerrframesecssummarywindow.is_set
	|| cdot3oamerrframesecssummarythreshold.is_set
	|| cdot3oamerrframesecsevnotifenable.is_set
	|| cdot3oamdyinggaspenable.is_set
	|| cdot3oamcriticaleventenable.is_set;
}

bool CISCODOT3OAMMIB::Cdot3OamEventConfigTable::Cdot3OamEventConfigEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdot3oamerrsymperiodwindowhi.yfilter)
	|| ydk::is_set(cdot3oamerrsymperiodwindowlo.yfilter)
	|| ydk::is_set(cdot3oamerrsymperiodthresholdhi.yfilter)
	|| ydk::is_set(cdot3oamerrsymperiodthresholdlo.yfilter)
	|| ydk::is_set(cdot3oamerrsymperiodevnotifenable.yfilter)
	|| ydk::is_set(cdot3oamerrframeperiodwindow.yfilter)
	|| ydk::is_set(cdot3oamerrframeperiodthreshold.yfilter)
	|| ydk::is_set(cdot3oamerrframeperiodevnotifenable.yfilter)
	|| ydk::is_set(cdot3oamerrframewindow.yfilter)
	|| ydk::is_set(cdot3oamerrframethreshold.yfilter)
	|| ydk::is_set(cdot3oamerrframeevnotifenable.yfilter)
	|| ydk::is_set(cdot3oamerrframesecssummarywindow.yfilter)
	|| ydk::is_set(cdot3oamerrframesecssummarythreshold.yfilter)
	|| ydk::is_set(cdot3oamerrframesecsevnotifenable.yfilter)
	|| ydk::is_set(cdot3oamdyinggaspenable.yfilter)
	|| ydk::is_set(cdot3oamcriticaleventenable.yfilter);
}

std::string CISCODOT3OAMMIB::Cdot3OamEventConfigTable::Cdot3OamEventConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/cdot3OamEventConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOT3OAMMIB::Cdot3OamEventConfigTable::Cdot3OamEventConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamEventConfigEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOT3OAMMIB::Cdot3OamEventConfigTable::Cdot3OamEventConfigEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oamerrsymperiodwindowhi.is_set || is_set(cdot3oamerrsymperiodwindowhi.yfilter)) leaf_name_data.push_back(cdot3oamerrsymperiodwindowhi.get_name_leafdata());
    if (cdot3oamerrsymperiodwindowlo.is_set || is_set(cdot3oamerrsymperiodwindowlo.yfilter)) leaf_name_data.push_back(cdot3oamerrsymperiodwindowlo.get_name_leafdata());
    if (cdot3oamerrsymperiodthresholdhi.is_set || is_set(cdot3oamerrsymperiodthresholdhi.yfilter)) leaf_name_data.push_back(cdot3oamerrsymperiodthresholdhi.get_name_leafdata());
    if (cdot3oamerrsymperiodthresholdlo.is_set || is_set(cdot3oamerrsymperiodthresholdlo.yfilter)) leaf_name_data.push_back(cdot3oamerrsymperiodthresholdlo.get_name_leafdata());
    if (cdot3oamerrsymperiodevnotifenable.is_set || is_set(cdot3oamerrsymperiodevnotifenable.yfilter)) leaf_name_data.push_back(cdot3oamerrsymperiodevnotifenable.get_name_leafdata());
    if (cdot3oamerrframeperiodwindow.is_set || is_set(cdot3oamerrframeperiodwindow.yfilter)) leaf_name_data.push_back(cdot3oamerrframeperiodwindow.get_name_leafdata());
    if (cdot3oamerrframeperiodthreshold.is_set || is_set(cdot3oamerrframeperiodthreshold.yfilter)) leaf_name_data.push_back(cdot3oamerrframeperiodthreshold.get_name_leafdata());
    if (cdot3oamerrframeperiodevnotifenable.is_set || is_set(cdot3oamerrframeperiodevnotifenable.yfilter)) leaf_name_data.push_back(cdot3oamerrframeperiodevnotifenable.get_name_leafdata());
    if (cdot3oamerrframewindow.is_set || is_set(cdot3oamerrframewindow.yfilter)) leaf_name_data.push_back(cdot3oamerrframewindow.get_name_leafdata());
    if (cdot3oamerrframethreshold.is_set || is_set(cdot3oamerrframethreshold.yfilter)) leaf_name_data.push_back(cdot3oamerrframethreshold.get_name_leafdata());
    if (cdot3oamerrframeevnotifenable.is_set || is_set(cdot3oamerrframeevnotifenable.yfilter)) leaf_name_data.push_back(cdot3oamerrframeevnotifenable.get_name_leafdata());
    if (cdot3oamerrframesecssummarywindow.is_set || is_set(cdot3oamerrframesecssummarywindow.yfilter)) leaf_name_data.push_back(cdot3oamerrframesecssummarywindow.get_name_leafdata());
    if (cdot3oamerrframesecssummarythreshold.is_set || is_set(cdot3oamerrframesecssummarythreshold.yfilter)) leaf_name_data.push_back(cdot3oamerrframesecssummarythreshold.get_name_leafdata());
    if (cdot3oamerrframesecsevnotifenable.is_set || is_set(cdot3oamerrframesecsevnotifenable.yfilter)) leaf_name_data.push_back(cdot3oamerrframesecsevnotifenable.get_name_leafdata());
    if (cdot3oamdyinggaspenable.is_set || is_set(cdot3oamdyinggaspenable.yfilter)) leaf_name_data.push_back(cdot3oamdyinggaspenable.get_name_leafdata());
    if (cdot3oamcriticaleventenable.is_set || is_set(cdot3oamcriticaleventenable.yfilter)) leaf_name_data.push_back(cdot3oamcriticaleventenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODOT3OAMMIB::Cdot3OamEventConfigTable::Cdot3OamEventConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODOT3OAMMIB::Cdot3OamEventConfigTable::Cdot3OamEventConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCODOT3OAMMIB::Cdot3OamEventConfigTable::Cdot3OamEventConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cdot3OamErrSymPeriodEvNotifEnable")
    {
        cdot3oamerrsymperiodevnotifenable = value;
        cdot3oamerrsymperiodevnotifenable.value_namespace = name_space;
        cdot3oamerrsymperiodevnotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFramePeriodWindow")
    {
        cdot3oamerrframeperiodwindow = value;
        cdot3oamerrframeperiodwindow.value_namespace = name_space;
        cdot3oamerrframeperiodwindow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFramePeriodThreshold")
    {
        cdot3oamerrframeperiodthreshold = value;
        cdot3oamerrframeperiodthreshold.value_namespace = name_space;
        cdot3oamerrframeperiodthreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFramePeriodEvNotifEnable")
    {
        cdot3oamerrframeperiodevnotifenable = value;
        cdot3oamerrframeperiodevnotifenable.value_namespace = name_space;
        cdot3oamerrframeperiodevnotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFrameWindow")
    {
        cdot3oamerrframewindow = value;
        cdot3oamerrframewindow.value_namespace = name_space;
        cdot3oamerrframewindow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFrameThreshold")
    {
        cdot3oamerrframethreshold = value;
        cdot3oamerrframethreshold.value_namespace = name_space;
        cdot3oamerrframethreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFrameEvNotifEnable")
    {
        cdot3oamerrframeevnotifenable = value;
        cdot3oamerrframeevnotifenable.value_namespace = name_space;
        cdot3oamerrframeevnotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFrameSecsSummaryWindow")
    {
        cdot3oamerrframesecssummarywindow = value;
        cdot3oamerrframesecssummarywindow.value_namespace = name_space;
        cdot3oamerrframesecssummarywindow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFrameSecsSummaryThreshold")
    {
        cdot3oamerrframesecssummarythreshold = value;
        cdot3oamerrframesecssummarythreshold.value_namespace = name_space;
        cdot3oamerrframesecssummarythreshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamErrFrameSecsEvNotifEnable")
    {
        cdot3oamerrframesecsevnotifenable = value;
        cdot3oamerrframesecsevnotifenable.value_namespace = name_space;
        cdot3oamerrframesecsevnotifenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamDyingGaspEnable")
    {
        cdot3oamdyinggaspenable = value;
        cdot3oamdyinggaspenable.value_namespace = name_space;
        cdot3oamdyinggaspenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamCriticalEventEnable")
    {
        cdot3oamcriticaleventenable = value;
        cdot3oamcriticaleventenable.value_namespace = name_space;
        cdot3oamcriticaleventenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOT3OAMMIB::Cdot3OamEventConfigTable::Cdot3OamEventConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrSymPeriodWindowHi")
    {
        cdot3oamerrsymperiodwindowhi.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrSymPeriodWindowLo")
    {
        cdot3oamerrsymperiodwindowlo.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrSymPeriodThresholdHi")
    {
        cdot3oamerrsymperiodthresholdhi.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrSymPeriodThresholdLo")
    {
        cdot3oamerrsymperiodthresholdlo.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrSymPeriodEvNotifEnable")
    {
        cdot3oamerrsymperiodevnotifenable.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFramePeriodWindow")
    {
        cdot3oamerrframeperiodwindow.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFramePeriodThreshold")
    {
        cdot3oamerrframeperiodthreshold.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFramePeriodEvNotifEnable")
    {
        cdot3oamerrframeperiodevnotifenable.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFrameWindow")
    {
        cdot3oamerrframewindow.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFrameThreshold")
    {
        cdot3oamerrframethreshold.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFrameEvNotifEnable")
    {
        cdot3oamerrframeevnotifenable.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFrameSecsSummaryWindow")
    {
        cdot3oamerrframesecssummarywindow.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFrameSecsSummaryThreshold")
    {
        cdot3oamerrframesecssummarythreshold.yfilter = yfilter;
    }
    if(value_path == "cdot3OamErrFrameSecsEvNotifEnable")
    {
        cdot3oamerrframesecsevnotifenable.yfilter = yfilter;
    }
    if(value_path == "cdot3OamDyingGaspEnable")
    {
        cdot3oamdyinggaspenable.yfilter = yfilter;
    }
    if(value_path == "cdot3OamCriticalEventEnable")
    {
        cdot3oamcriticaleventenable.yfilter = yfilter;
    }
}

bool CISCODOT3OAMMIB::Cdot3OamEventConfigTable::Cdot3OamEventConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdot3OamErrSymPeriodWindowHi" || name == "cdot3OamErrSymPeriodWindowLo" || name == "cdot3OamErrSymPeriodThresholdHi" || name == "cdot3OamErrSymPeriodThresholdLo" || name == "cdot3OamErrSymPeriodEvNotifEnable" || name == "cdot3OamErrFramePeriodWindow" || name == "cdot3OamErrFramePeriodThreshold" || name == "cdot3OamErrFramePeriodEvNotifEnable" || name == "cdot3OamErrFrameWindow" || name == "cdot3OamErrFrameThreshold" || name == "cdot3OamErrFrameEvNotifEnable" || name == "cdot3OamErrFrameSecsSummaryWindow" || name == "cdot3OamErrFrameSecsSummaryThreshold" || name == "cdot3OamErrFrameSecsEvNotifEnable" || name == "cdot3OamDyingGaspEnable" || name == "cdot3OamCriticalEventEnable")
        return true;
    return false;
}

CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogTable()
    :
    cdot3oameventlogentry(this, {"ifindex", "cdot3oameventlogindex"})
{

    yang_name = "cdot3OamEventLogTable"; yang_parent_name = "CISCO-DOT3-OAM-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOT3OAMMIB::Cdot3OamEventLogTable::~Cdot3OamEventLogTable()
{
}

bool CISCODOT3OAMMIB::Cdot3OamEventLogTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cdot3oameventlogentry.len(); index++)
    {
        if(cdot3oameventlogentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCODOT3OAMMIB::Cdot3OamEventLogTable::has_operation() const
{
    for (std::size_t index=0; index<cdot3oameventlogentry.len(); index++)
    {
        if(cdot3oameventlogentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCODOT3OAMMIB::Cdot3OamEventLogTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOT3OAMMIB::Cdot3OamEventLogTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamEventLogTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOT3OAMMIB::Cdot3OamEventLogTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODOT3OAMMIB::Cdot3OamEventLogTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cdot3OamEventLogEntry")
    {
        auto ent_ = std::make_shared<CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry>();
        ent_->parent = this;
        cdot3oameventlogentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODOT3OAMMIB::Cdot3OamEventLogTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cdot3oameventlogentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCODOT3OAMMIB::Cdot3OamEventLogTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCODOT3OAMMIB::Cdot3OamEventLogTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCODOT3OAMMIB::Cdot3OamEventLogTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdot3OamEventLogEntry")
        return true;
    return false;
}

CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry::Cdot3OamEventLogEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cdot3oameventlogindex{YType::uint32, "cdot3OamEventLogIndex"},
    cdot3oameventlogtimestamp{YType::uint32, "cdot3OamEventLogTimestamp"},
    cdot3oameventlogoui{YType::str, "cdot3OamEventLogOui"},
    cdot3oameventlogtype{YType::uint32, "cdot3OamEventLogType"},
    cdot3oameventloglocation{YType::enumeration, "cdot3OamEventLogLocation"},
    cdot3oameventlogwindowhi{YType::uint32, "cdot3OamEventLogWindowHi"},
    cdot3oameventlogwindowlo{YType::uint32, "cdot3OamEventLogWindowLo"},
    cdot3oameventlogthresholdhi{YType::uint32, "cdot3OamEventLogThresholdHi"},
    cdot3oameventlogthresholdlo{YType::uint32, "cdot3OamEventLogThresholdLo"},
    cdot3oameventlogvalue{YType::uint64, "cdot3OamEventLogValue"},
    cdot3oameventlogrunningtotal{YType::uint64, "cdot3OamEventLogRunningTotal"},
    cdot3oameventlogeventtotal{YType::uint32, "cdot3OamEventLogEventTotal"}
{

    yang_name = "cdot3OamEventLogEntry"; yang_parent_name = "cdot3OamEventLogTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry::~Cdot3OamEventLogEntry()
{
}

bool CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cdot3oameventlogindex.is_set
	|| cdot3oameventlogtimestamp.is_set
	|| cdot3oameventlogoui.is_set
	|| cdot3oameventlogtype.is_set
	|| cdot3oameventloglocation.is_set
	|| cdot3oameventlogwindowhi.is_set
	|| cdot3oameventlogwindowlo.is_set
	|| cdot3oameventlogthresholdhi.is_set
	|| cdot3oameventlogthresholdlo.is_set
	|| cdot3oameventlogvalue.is_set
	|| cdot3oameventlogrunningtotal.is_set
	|| cdot3oameventlogeventtotal.is_set;
}

bool CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cdot3oameventlogindex.yfilter)
	|| ydk::is_set(cdot3oameventlogtimestamp.yfilter)
	|| ydk::is_set(cdot3oameventlogoui.yfilter)
	|| ydk::is_set(cdot3oameventlogtype.yfilter)
	|| ydk::is_set(cdot3oameventloglocation.yfilter)
	|| ydk::is_set(cdot3oameventlogwindowhi.yfilter)
	|| ydk::is_set(cdot3oameventlogwindowlo.yfilter)
	|| ydk::is_set(cdot3oameventlogthresholdhi.yfilter)
	|| ydk::is_set(cdot3oameventlogthresholdlo.yfilter)
	|| ydk::is_set(cdot3oameventlogvalue.yfilter)
	|| ydk::is_set(cdot3oameventlogrunningtotal.yfilter)
	|| ydk::is_set(cdot3oameventlogeventtotal.yfilter);
}

std::string CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-DOT3-OAM-MIB:CISCO-DOT3-OAM-MIB/cdot3OamEventLogTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdot3OamEventLogEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(cdot3oameventlogindex, "cdot3OamEventLogIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cdot3oameventlogindex.is_set || is_set(cdot3oameventlogindex.yfilter)) leaf_name_data.push_back(cdot3oameventlogindex.get_name_leafdata());
    if (cdot3oameventlogtimestamp.is_set || is_set(cdot3oameventlogtimestamp.yfilter)) leaf_name_data.push_back(cdot3oameventlogtimestamp.get_name_leafdata());
    if (cdot3oameventlogoui.is_set || is_set(cdot3oameventlogoui.yfilter)) leaf_name_data.push_back(cdot3oameventlogoui.get_name_leafdata());
    if (cdot3oameventlogtype.is_set || is_set(cdot3oameventlogtype.yfilter)) leaf_name_data.push_back(cdot3oameventlogtype.get_name_leafdata());
    if (cdot3oameventloglocation.is_set || is_set(cdot3oameventloglocation.yfilter)) leaf_name_data.push_back(cdot3oameventloglocation.get_name_leafdata());
    if (cdot3oameventlogwindowhi.is_set || is_set(cdot3oameventlogwindowhi.yfilter)) leaf_name_data.push_back(cdot3oameventlogwindowhi.get_name_leafdata());
    if (cdot3oameventlogwindowlo.is_set || is_set(cdot3oameventlogwindowlo.yfilter)) leaf_name_data.push_back(cdot3oameventlogwindowlo.get_name_leafdata());
    if (cdot3oameventlogthresholdhi.is_set || is_set(cdot3oameventlogthresholdhi.yfilter)) leaf_name_data.push_back(cdot3oameventlogthresholdhi.get_name_leafdata());
    if (cdot3oameventlogthresholdlo.is_set || is_set(cdot3oameventlogthresholdlo.yfilter)) leaf_name_data.push_back(cdot3oameventlogthresholdlo.get_name_leafdata());
    if (cdot3oameventlogvalue.is_set || is_set(cdot3oameventlogvalue.yfilter)) leaf_name_data.push_back(cdot3oameventlogvalue.get_name_leafdata());
    if (cdot3oameventlogrunningtotal.is_set || is_set(cdot3oameventlogrunningtotal.yfilter)) leaf_name_data.push_back(cdot3oameventlogrunningtotal.get_name_leafdata());
    if (cdot3oameventlogeventtotal.is_set || is_set(cdot3oameventlogeventtotal.yfilter)) leaf_name_data.push_back(cdot3oameventlogeventtotal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cdot3OamEventLogTimestamp")
    {
        cdot3oameventlogtimestamp = value;
        cdot3oameventlogtimestamp.value_namespace = name_space;
        cdot3oameventlogtimestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamEventLogOui")
    {
        cdot3oameventlogoui = value;
        cdot3oameventlogoui.value_namespace = name_space;
        cdot3oameventlogoui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamEventLogType")
    {
        cdot3oameventlogtype = value;
        cdot3oameventlogtype.value_namespace = name_space;
        cdot3oameventlogtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamEventLogLocation")
    {
        cdot3oameventloglocation = value;
        cdot3oameventloglocation.value_namespace = name_space;
        cdot3oameventloglocation.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cdot3OamEventLogValue")
    {
        cdot3oameventlogvalue = value;
        cdot3oameventlogvalue.value_namespace = name_space;
        cdot3oameventlogvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamEventLogRunningTotal")
    {
        cdot3oameventlogrunningtotal = value;
        cdot3oameventlogrunningtotal.value_namespace = name_space;
        cdot3oameventlogrunningtotal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdot3OamEventLogEventTotal")
    {
        cdot3oameventlogeventtotal = value;
        cdot3oameventlogeventtotal.value_namespace = name_space;
        cdot3oameventlogeventtotal.value_namespace_prefix = name_space_prefix;
    }
}

void CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogIndex")
    {
        cdot3oameventlogindex.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogTimestamp")
    {
        cdot3oameventlogtimestamp.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogOui")
    {
        cdot3oameventlogoui.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogType")
    {
        cdot3oameventlogtype.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogLocation")
    {
        cdot3oameventloglocation.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogWindowHi")
    {
        cdot3oameventlogwindowhi.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogWindowLo")
    {
        cdot3oameventlogwindowlo.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogThresholdHi")
    {
        cdot3oameventlogthresholdhi.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogThresholdLo")
    {
        cdot3oameventlogthresholdlo.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogValue")
    {
        cdot3oameventlogvalue.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogRunningTotal")
    {
        cdot3oameventlogrunningtotal.yfilter = yfilter;
    }
    if(value_path == "cdot3OamEventLogEventTotal")
    {
        cdot3oameventlogeventtotal.yfilter = yfilter;
    }
}

bool CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cdot3OamEventLogIndex" || name == "cdot3OamEventLogTimestamp" || name == "cdot3OamEventLogOui" || name == "cdot3OamEventLogType" || name == "cdot3OamEventLogLocation" || name == "cdot3OamEventLogWindowHi" || name == "cdot3OamEventLogWindowLo" || name == "cdot3OamEventLogThresholdHi" || name == "cdot3OamEventLogThresholdLo" || name == "cdot3OamEventLogValue" || name == "cdot3OamEventLogRunningTotal" || name == "cdot3OamEventLogEventTotal")
        return true;
    return false;
}

const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamAdminState::disabled {1, "disabled"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamAdminState::enabled {2, "enabled"};

const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamOperStatus::disabled {1, "disabled"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamOperStatus::linkFault {2, "linkFault"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamOperStatus::passiveWait {3, "passiveWait"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamOperStatus::activeSendLocal {4, "activeSendLocal"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamOperStatus::sendLocalAndRemote {5, "sendLocalAndRemote"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamOperStatus::sendLocalAndRemoteOk {6, "sendLocalAndRemoteOk"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamOperStatus::oamPeeringLocallyRejected {7, "oamPeeringLocallyRejected"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamOperStatus::oamPeeringRemotelyRejected {8, "oamPeeringRemotelyRejected"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamOperStatus::operational {9, "operational"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamOperStatus::nonOperHalfDuplex {10, "nonOperHalfDuplex"};

const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamMode::active {1, "active"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamTable::Cdot3OamEntry::Cdot3OamMode::passive {2, "passive"};

const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry::Cdot3OamPeerMode::active {1, "active"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry::Cdot3OamPeerMode::passive {2, "passive"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamPeerTable::Cdot3OamPeerEntry::Cdot3OamPeerMode::unknown {3, "unknown"};

const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::Cdot3OamLoopbackStatus::noLoopback {1, "noLoopback"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::Cdot3OamLoopbackStatus::initiatingLoopback {2, "initiatingLoopback"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::Cdot3OamLoopbackStatus::remoteLoopback {3, "remoteLoopback"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::Cdot3OamLoopbackStatus::terminatingLoopback {4, "terminatingLoopback"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::Cdot3OamLoopbackStatus::localLoopback {5, "localLoopback"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::Cdot3OamLoopbackStatus::unknown {6, "unknown"};

const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::Cdot3OamLoopbackIgnoreRx::ignore {1, "ignore"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamLoopbackTable::Cdot3OamLoopbackEntry::Cdot3OamLoopbackIgnoreRx::process {2, "process"};

const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry::Cdot3OamEventLogLocation::local {1, "local"};
const Enum::YLeaf CISCODOT3OAMMIB::Cdot3OamEventLogTable::Cdot3OamEventLogEntry::Cdot3OamEventLogLocation::remote {2, "remote"};


}
}

