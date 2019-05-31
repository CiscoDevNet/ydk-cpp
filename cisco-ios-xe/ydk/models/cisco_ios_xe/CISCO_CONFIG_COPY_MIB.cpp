
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CONFIG_COPY_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CONFIG_COPY_MIB {

CISCOCONFIGCOPYMIB::CISCOCONFIGCOPYMIB()
    :
    cccopytable(std::make_shared<CISCOCONFIGCOPYMIB::CcCopyTable>())
    , cccopyerrortable(std::make_shared<CISCOCONFIGCOPYMIB::CcCopyErrorTable>())
{
    cccopytable->parent = this;
    cccopyerrortable->parent = this;

    yang_name = "CISCO-CONFIG-COPY-MIB"; yang_parent_name = "CISCO-CONFIG-COPY-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOCONFIGCOPYMIB::~CISCOCONFIGCOPYMIB()
{
}

bool CISCOCONFIGCOPYMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cccopytable !=  nullptr && cccopytable->has_data())
	|| (cccopyerrortable !=  nullptr && cccopyerrortable->has_data());
}

bool CISCOCONFIGCOPYMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cccopytable !=  nullptr && cccopytable->has_operation())
	|| (cccopyerrortable !=  nullptr && cccopyerrortable->has_operation());
}

std::string CISCOCONFIGCOPYMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONFIG-COPY-MIB:CISCO-CONFIG-COPY-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONFIGCOPYMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCONFIGCOPYMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccCopyTable")
    {
        if(cccopytable == nullptr)
        {
            cccopytable = std::make_shared<CISCOCONFIGCOPYMIB::CcCopyTable>();
        }
        return cccopytable;
    }

    if(child_yang_name == "ccCopyErrorTable")
    {
        if(cccopyerrortable == nullptr)
        {
            cccopyerrortable = std::make_shared<CISCOCONFIGCOPYMIB::CcCopyErrorTable>();
        }
        return cccopyerrortable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCONFIGCOPYMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cccopytable != nullptr)
    {
        _children["ccCopyTable"] = cccopytable;
    }

    if(cccopyerrortable != nullptr)
    {
        _children["ccCopyErrorTable"] = cccopyerrortable;
    }

    return _children;
}

void CISCOCONFIGCOPYMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCONFIGCOPYMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOCONFIGCOPYMIB::clone_ptr() const
{
    return std::make_shared<CISCOCONFIGCOPYMIB>();
}

std::string CISCOCONFIGCOPYMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOCONFIGCOPYMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOCONFIGCOPYMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOCONFIGCOPYMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOCONFIGCOPYMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccCopyTable" || name == "ccCopyErrorTable")
        return true;
    return false;
}

CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyTable()
    :
    cccopyentry(this, {"cccopyindex"})
{

    yang_name = "ccCopyTable"; yang_parent_name = "CISCO-CONFIG-COPY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONFIGCOPYMIB::CcCopyTable::~CcCopyTable()
{
}

bool CISCOCONFIGCOPYMIB::CcCopyTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cccopyentry.len(); index++)
    {
        if(cccopyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCONFIGCOPYMIB::CcCopyTable::has_operation() const
{
    for (std::size_t index=0; index<cccopyentry.len(); index++)
    {
        if(cccopyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCONFIGCOPYMIB::CcCopyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONFIG-COPY-MIB:CISCO-CONFIG-COPY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONFIGCOPYMIB::CcCopyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccCopyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONFIGCOPYMIB::CcCopyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCONFIGCOPYMIB::CcCopyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccCopyEntry")
    {
        auto ent_ = std::make_shared<CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyEntry>();
        ent_->parent = this;
        cccopyentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCONFIGCOPYMIB::CcCopyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cccopyentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOCONFIGCOPYMIB::CcCopyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCONFIGCOPYMIB::CcCopyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCONFIGCOPYMIB::CcCopyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccCopyEntry")
        return true;
    return false;
}

CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyEntry::CcCopyEntry()
    :
    cccopyindex{YType::uint32, "ccCopyIndex"},
    cccopyprotocol{YType::enumeration, "ccCopyProtocol"},
    cccopysourcefiletype{YType::enumeration, "ccCopySourceFileType"},
    cccopydestfiletype{YType::enumeration, "ccCopyDestFileType"},
    cccopyserveraddress{YType::str, "ccCopyServerAddress"},
    cccopyfilename{YType::str, "ccCopyFileName"},
    cccopyusername{YType::str, "ccCopyUserName"},
    cccopyuserpassword{YType::str, "ccCopyUserPassword"},
    cccopynotificationoncompletion{YType::boolean, "ccCopyNotificationOnCompletion"},
    cccopystate{YType::enumeration, "ccCopyState"},
    cccopytimestarted{YType::uint32, "ccCopyTimeStarted"},
    cccopytimecompleted{YType::uint32, "ccCopyTimeCompleted"},
    cccopyfailcause{YType::enumeration, "ccCopyFailCause"},
    cccopyentryrowstatus{YType::enumeration, "ccCopyEntryRowStatus"},
    cccopyserveraddresstype{YType::enumeration, "ccCopyServerAddressType"},
    cccopyserveraddressrev1{YType::str, "ccCopyServerAddressRev1"}
{

    yang_name = "ccCopyEntry"; yang_parent_name = "ccCopyTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyEntry::~CcCopyEntry()
{
}

bool CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyEntry::has_data() const
{
    if (is_presence_container) return true;
    return cccopyindex.is_set
	|| cccopyprotocol.is_set
	|| cccopysourcefiletype.is_set
	|| cccopydestfiletype.is_set
	|| cccopyserveraddress.is_set
	|| cccopyfilename.is_set
	|| cccopyusername.is_set
	|| cccopyuserpassword.is_set
	|| cccopynotificationoncompletion.is_set
	|| cccopystate.is_set
	|| cccopytimestarted.is_set
	|| cccopytimecompleted.is_set
	|| cccopyfailcause.is_set
	|| cccopyentryrowstatus.is_set
	|| cccopyserveraddresstype.is_set
	|| cccopyserveraddressrev1.is_set;
}

bool CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cccopyindex.yfilter)
	|| ydk::is_set(cccopyprotocol.yfilter)
	|| ydk::is_set(cccopysourcefiletype.yfilter)
	|| ydk::is_set(cccopydestfiletype.yfilter)
	|| ydk::is_set(cccopyserveraddress.yfilter)
	|| ydk::is_set(cccopyfilename.yfilter)
	|| ydk::is_set(cccopyusername.yfilter)
	|| ydk::is_set(cccopyuserpassword.yfilter)
	|| ydk::is_set(cccopynotificationoncompletion.yfilter)
	|| ydk::is_set(cccopystate.yfilter)
	|| ydk::is_set(cccopytimestarted.yfilter)
	|| ydk::is_set(cccopytimecompleted.yfilter)
	|| ydk::is_set(cccopyfailcause.yfilter)
	|| ydk::is_set(cccopyentryrowstatus.yfilter)
	|| ydk::is_set(cccopyserveraddresstype.yfilter)
	|| ydk::is_set(cccopyserveraddressrev1.yfilter);
}

std::string CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONFIG-COPY-MIB:CISCO-CONFIG-COPY-MIB/ccCopyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccCopyEntry";
    ADD_KEY_TOKEN(cccopyindex, "ccCopyIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cccopyindex.is_set || is_set(cccopyindex.yfilter)) leaf_name_data.push_back(cccopyindex.get_name_leafdata());
    if (cccopyprotocol.is_set || is_set(cccopyprotocol.yfilter)) leaf_name_data.push_back(cccopyprotocol.get_name_leafdata());
    if (cccopysourcefiletype.is_set || is_set(cccopysourcefiletype.yfilter)) leaf_name_data.push_back(cccopysourcefiletype.get_name_leafdata());
    if (cccopydestfiletype.is_set || is_set(cccopydestfiletype.yfilter)) leaf_name_data.push_back(cccopydestfiletype.get_name_leafdata());
    if (cccopyserveraddress.is_set || is_set(cccopyserveraddress.yfilter)) leaf_name_data.push_back(cccopyserveraddress.get_name_leafdata());
    if (cccopyfilename.is_set || is_set(cccopyfilename.yfilter)) leaf_name_data.push_back(cccopyfilename.get_name_leafdata());
    if (cccopyusername.is_set || is_set(cccopyusername.yfilter)) leaf_name_data.push_back(cccopyusername.get_name_leafdata());
    if (cccopyuserpassword.is_set || is_set(cccopyuserpassword.yfilter)) leaf_name_data.push_back(cccopyuserpassword.get_name_leafdata());
    if (cccopynotificationoncompletion.is_set || is_set(cccopynotificationoncompletion.yfilter)) leaf_name_data.push_back(cccopynotificationoncompletion.get_name_leafdata());
    if (cccopystate.is_set || is_set(cccopystate.yfilter)) leaf_name_data.push_back(cccopystate.get_name_leafdata());
    if (cccopytimestarted.is_set || is_set(cccopytimestarted.yfilter)) leaf_name_data.push_back(cccopytimestarted.get_name_leafdata());
    if (cccopytimecompleted.is_set || is_set(cccopytimecompleted.yfilter)) leaf_name_data.push_back(cccopytimecompleted.get_name_leafdata());
    if (cccopyfailcause.is_set || is_set(cccopyfailcause.yfilter)) leaf_name_data.push_back(cccopyfailcause.get_name_leafdata());
    if (cccopyentryrowstatus.is_set || is_set(cccopyentryrowstatus.yfilter)) leaf_name_data.push_back(cccopyentryrowstatus.get_name_leafdata());
    if (cccopyserveraddresstype.is_set || is_set(cccopyserveraddresstype.yfilter)) leaf_name_data.push_back(cccopyserveraddresstype.get_name_leafdata());
    if (cccopyserveraddressrev1.is_set || is_set(cccopyserveraddressrev1.yfilter)) leaf_name_data.push_back(cccopyserveraddressrev1.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccCopyIndex")
    {
        cccopyindex = value;
        cccopyindex.value_namespace = name_space;
        cccopyindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyProtocol")
    {
        cccopyprotocol = value;
        cccopyprotocol.value_namespace = name_space;
        cccopyprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopySourceFileType")
    {
        cccopysourcefiletype = value;
        cccopysourcefiletype.value_namespace = name_space;
        cccopysourcefiletype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyDestFileType")
    {
        cccopydestfiletype = value;
        cccopydestfiletype.value_namespace = name_space;
        cccopydestfiletype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyServerAddress")
    {
        cccopyserveraddress = value;
        cccopyserveraddress.value_namespace = name_space;
        cccopyserveraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyFileName")
    {
        cccopyfilename = value;
        cccopyfilename.value_namespace = name_space;
        cccopyfilename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyUserName")
    {
        cccopyusername = value;
        cccopyusername.value_namespace = name_space;
        cccopyusername.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyUserPassword")
    {
        cccopyuserpassword = value;
        cccopyuserpassword.value_namespace = name_space;
        cccopyuserpassword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyNotificationOnCompletion")
    {
        cccopynotificationoncompletion = value;
        cccopynotificationoncompletion.value_namespace = name_space;
        cccopynotificationoncompletion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyState")
    {
        cccopystate = value;
        cccopystate.value_namespace = name_space;
        cccopystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyTimeStarted")
    {
        cccopytimestarted = value;
        cccopytimestarted.value_namespace = name_space;
        cccopytimestarted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyTimeCompleted")
    {
        cccopytimecompleted = value;
        cccopytimecompleted.value_namespace = name_space;
        cccopytimecompleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyFailCause")
    {
        cccopyfailcause = value;
        cccopyfailcause.value_namespace = name_space;
        cccopyfailcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyEntryRowStatus")
    {
        cccopyentryrowstatus = value;
        cccopyentryrowstatus.value_namespace = name_space;
        cccopyentryrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyServerAddressType")
    {
        cccopyserveraddresstype = value;
        cccopyserveraddresstype.value_namespace = name_space;
        cccopyserveraddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyServerAddressRev1")
    {
        cccopyserveraddressrev1 = value;
        cccopyserveraddressrev1.value_namespace = name_space;
        cccopyserveraddressrev1.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccCopyIndex")
    {
        cccopyindex.yfilter = yfilter;
    }
    if(value_path == "ccCopyProtocol")
    {
        cccopyprotocol.yfilter = yfilter;
    }
    if(value_path == "ccCopySourceFileType")
    {
        cccopysourcefiletype.yfilter = yfilter;
    }
    if(value_path == "ccCopyDestFileType")
    {
        cccopydestfiletype.yfilter = yfilter;
    }
    if(value_path == "ccCopyServerAddress")
    {
        cccopyserveraddress.yfilter = yfilter;
    }
    if(value_path == "ccCopyFileName")
    {
        cccopyfilename.yfilter = yfilter;
    }
    if(value_path == "ccCopyUserName")
    {
        cccopyusername.yfilter = yfilter;
    }
    if(value_path == "ccCopyUserPassword")
    {
        cccopyuserpassword.yfilter = yfilter;
    }
    if(value_path == "ccCopyNotificationOnCompletion")
    {
        cccopynotificationoncompletion.yfilter = yfilter;
    }
    if(value_path == "ccCopyState")
    {
        cccopystate.yfilter = yfilter;
    }
    if(value_path == "ccCopyTimeStarted")
    {
        cccopytimestarted.yfilter = yfilter;
    }
    if(value_path == "ccCopyTimeCompleted")
    {
        cccopytimecompleted.yfilter = yfilter;
    }
    if(value_path == "ccCopyFailCause")
    {
        cccopyfailcause.yfilter = yfilter;
    }
    if(value_path == "ccCopyEntryRowStatus")
    {
        cccopyentryrowstatus.yfilter = yfilter;
    }
    if(value_path == "ccCopyServerAddressType")
    {
        cccopyserveraddresstype.yfilter = yfilter;
    }
    if(value_path == "ccCopyServerAddressRev1")
    {
        cccopyserveraddressrev1.yfilter = yfilter;
    }
}

bool CISCOCONFIGCOPYMIB::CcCopyTable::CcCopyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccCopyIndex" || name == "ccCopyProtocol" || name == "ccCopySourceFileType" || name == "ccCopyDestFileType" || name == "ccCopyServerAddress" || name == "ccCopyFileName" || name == "ccCopyUserName" || name == "ccCopyUserPassword" || name == "ccCopyNotificationOnCompletion" || name == "ccCopyState" || name == "ccCopyTimeStarted" || name == "ccCopyTimeCompleted" || name == "ccCopyFailCause" || name == "ccCopyEntryRowStatus" || name == "ccCopyServerAddressType" || name == "ccCopyServerAddressRev1")
        return true;
    return false;
}

CISCOCONFIGCOPYMIB::CcCopyErrorTable::CcCopyErrorTable()
    :
    cccopyerrorentry(this, {"cccopyindex", "cccopyerrorindex"})
{

    yang_name = "ccCopyErrorTable"; yang_parent_name = "CISCO-CONFIG-COPY-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONFIGCOPYMIB::CcCopyErrorTable::~CcCopyErrorTable()
{
}

bool CISCOCONFIGCOPYMIB::CcCopyErrorTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cccopyerrorentry.len(); index++)
    {
        if(cccopyerrorentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOCONFIGCOPYMIB::CcCopyErrorTable::has_operation() const
{
    for (std::size_t index=0; index<cccopyerrorentry.len(); index++)
    {
        if(cccopyerrorentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOCONFIGCOPYMIB::CcCopyErrorTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONFIG-COPY-MIB:CISCO-CONFIG-COPY-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONFIGCOPYMIB::CcCopyErrorTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccCopyErrorTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONFIGCOPYMIB::CcCopyErrorTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCONFIGCOPYMIB::CcCopyErrorTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccCopyErrorEntry")
    {
        auto ent_ = std::make_shared<CISCOCONFIGCOPYMIB::CcCopyErrorTable::CcCopyErrorEntry>();
        ent_->parent = this;
        cccopyerrorentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCONFIGCOPYMIB::CcCopyErrorTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cccopyerrorentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOCONFIGCOPYMIB::CcCopyErrorTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOCONFIGCOPYMIB::CcCopyErrorTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOCONFIGCOPYMIB::CcCopyErrorTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccCopyErrorEntry")
        return true;
    return false;
}

CISCOCONFIGCOPYMIB::CcCopyErrorTable::CcCopyErrorEntry::CcCopyErrorEntry()
    :
    cccopyindex{YType::str, "ccCopyIndex"},
    cccopyerrorindex{YType::uint32, "ccCopyErrorIndex"},
    cccopyerrordeviceipaddresstype{YType::enumeration, "ccCopyErrorDeviceIpAddressType"},
    cccopyerrordeviceipaddress{YType::str, "ccCopyErrorDeviceIpAddress"},
    cccopyerrordevicewwn{YType::str, "ccCopyErrorDeviceWWN"},
    cccopyerrordescription{YType::str, "ccCopyErrorDescription"}
{

    yang_name = "ccCopyErrorEntry"; yang_parent_name = "ccCopyErrorTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOCONFIGCOPYMIB::CcCopyErrorTable::CcCopyErrorEntry::~CcCopyErrorEntry()
{
}

bool CISCOCONFIGCOPYMIB::CcCopyErrorTable::CcCopyErrorEntry::has_data() const
{
    if (is_presence_container) return true;
    return cccopyindex.is_set
	|| cccopyerrorindex.is_set
	|| cccopyerrordeviceipaddresstype.is_set
	|| cccopyerrordeviceipaddress.is_set
	|| cccopyerrordevicewwn.is_set
	|| cccopyerrordescription.is_set;
}

bool CISCOCONFIGCOPYMIB::CcCopyErrorTable::CcCopyErrorEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cccopyindex.yfilter)
	|| ydk::is_set(cccopyerrorindex.yfilter)
	|| ydk::is_set(cccopyerrordeviceipaddresstype.yfilter)
	|| ydk::is_set(cccopyerrordeviceipaddress.yfilter)
	|| ydk::is_set(cccopyerrordevicewwn.yfilter)
	|| ydk::is_set(cccopyerrordescription.yfilter);
}

std::string CISCOCONFIGCOPYMIB::CcCopyErrorTable::CcCopyErrorEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONFIG-COPY-MIB:CISCO-CONFIG-COPY-MIB/ccCopyErrorTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOCONFIGCOPYMIB::CcCopyErrorTable::CcCopyErrorEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccCopyErrorEntry";
    ADD_KEY_TOKEN(cccopyindex, "ccCopyIndex");
    ADD_KEY_TOKEN(cccopyerrorindex, "ccCopyErrorIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOCONFIGCOPYMIB::CcCopyErrorTable::CcCopyErrorEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cccopyindex.is_set || is_set(cccopyindex.yfilter)) leaf_name_data.push_back(cccopyindex.get_name_leafdata());
    if (cccopyerrorindex.is_set || is_set(cccopyerrorindex.yfilter)) leaf_name_data.push_back(cccopyerrorindex.get_name_leafdata());
    if (cccopyerrordeviceipaddresstype.is_set || is_set(cccopyerrordeviceipaddresstype.yfilter)) leaf_name_data.push_back(cccopyerrordeviceipaddresstype.get_name_leafdata());
    if (cccopyerrordeviceipaddress.is_set || is_set(cccopyerrordeviceipaddress.yfilter)) leaf_name_data.push_back(cccopyerrordeviceipaddress.get_name_leafdata());
    if (cccopyerrordevicewwn.is_set || is_set(cccopyerrordevicewwn.yfilter)) leaf_name_data.push_back(cccopyerrordevicewwn.get_name_leafdata());
    if (cccopyerrordescription.is_set || is_set(cccopyerrordescription.yfilter)) leaf_name_data.push_back(cccopyerrordescription.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOCONFIGCOPYMIB::CcCopyErrorTable::CcCopyErrorEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOCONFIGCOPYMIB::CcCopyErrorTable::CcCopyErrorEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOCONFIGCOPYMIB::CcCopyErrorTable::CcCopyErrorEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccCopyIndex")
    {
        cccopyindex = value;
        cccopyindex.value_namespace = name_space;
        cccopyindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyErrorIndex")
    {
        cccopyerrorindex = value;
        cccopyerrorindex.value_namespace = name_space;
        cccopyerrorindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyErrorDeviceIpAddressType")
    {
        cccopyerrordeviceipaddresstype = value;
        cccopyerrordeviceipaddresstype.value_namespace = name_space;
        cccopyerrordeviceipaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyErrorDeviceIpAddress")
    {
        cccopyerrordeviceipaddress = value;
        cccopyerrordeviceipaddress.value_namespace = name_space;
        cccopyerrordeviceipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyErrorDeviceWWN")
    {
        cccopyerrordevicewwn = value;
        cccopyerrordevicewwn.value_namespace = name_space;
        cccopyerrordevicewwn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyErrorDescription")
    {
        cccopyerrordescription = value;
        cccopyerrordescription.value_namespace = name_space;
        cccopyerrordescription.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOCONFIGCOPYMIB::CcCopyErrorTable::CcCopyErrorEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccCopyIndex")
    {
        cccopyindex.yfilter = yfilter;
    }
    if(value_path == "ccCopyErrorIndex")
    {
        cccopyerrorindex.yfilter = yfilter;
    }
    if(value_path == "ccCopyErrorDeviceIpAddressType")
    {
        cccopyerrordeviceipaddresstype.yfilter = yfilter;
    }
    if(value_path == "ccCopyErrorDeviceIpAddress")
    {
        cccopyerrordeviceipaddress.yfilter = yfilter;
    }
    if(value_path == "ccCopyErrorDeviceWWN")
    {
        cccopyerrordevicewwn.yfilter = yfilter;
    }
    if(value_path == "ccCopyErrorDescription")
    {
        cccopyerrordescription.yfilter = yfilter;
    }
}

bool CISCOCONFIGCOPYMIB::CcCopyErrorTable::CcCopyErrorEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccCopyIndex" || name == "ccCopyErrorIndex" || name == "ccCopyErrorDeviceIpAddressType" || name == "ccCopyErrorDeviceIpAddress" || name == "ccCopyErrorDeviceWWN" || name == "ccCopyErrorDescription")
        return true;
    return false;
}

const Enum::YLeaf ConfigCopyProtocol::tftp {1, "tftp"};
const Enum::YLeaf ConfigCopyProtocol::ftp {2, "ftp"};
const Enum::YLeaf ConfigCopyProtocol::rcp {3, "rcp"};
const Enum::YLeaf ConfigCopyProtocol::scp {4, "scp"};
const Enum::YLeaf ConfigCopyProtocol::sftp {5, "sftp"};

const Enum::YLeaf ConfigCopyState::waiting {1, "waiting"};
const Enum::YLeaf ConfigCopyState::running {2, "running"};
const Enum::YLeaf ConfigCopyState::successful {3, "successful"};
const Enum::YLeaf ConfigCopyState::failed {4, "failed"};

const Enum::YLeaf ConfigCopyFailCause::unknown {1, "unknown"};
const Enum::YLeaf ConfigCopyFailCause::badFileName {2, "badFileName"};
const Enum::YLeaf ConfigCopyFailCause::timeout {3, "timeout"};
const Enum::YLeaf ConfigCopyFailCause::noMem {4, "noMem"};
const Enum::YLeaf ConfigCopyFailCause::noConfig {5, "noConfig"};
const Enum::YLeaf ConfigCopyFailCause::unsupportedProtocol {6, "unsupportedProtocol"};
const Enum::YLeaf ConfigCopyFailCause::someConfigApplyFailed {7, "someConfigApplyFailed"};
const Enum::YLeaf ConfigCopyFailCause::systemNotReady {8, "systemNotReady"};
const Enum::YLeaf ConfigCopyFailCause::requestAborted {9, "requestAborted"};

const Enum::YLeaf ConfigFileType::networkFile {1, "networkFile"};
const Enum::YLeaf ConfigFileType::iosFile {2, "iosFile"};
const Enum::YLeaf ConfigFileType::startupConfig {3, "startupConfig"};
const Enum::YLeaf ConfigFileType::runningConfig {4, "runningConfig"};
const Enum::YLeaf ConfigFileType::terminal {5, "terminal"};
const Enum::YLeaf ConfigFileType::fabricStartupConfig {6, "fabricStartupConfig"};


}
}

