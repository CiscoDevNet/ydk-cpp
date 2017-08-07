
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CONFIG_COPY_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CONFIG_COPY_MIB {

CiscoConfigCopyMib::CiscoConfigCopyMib()
    :
    cccopyerrortable(std::make_shared<CiscoConfigCopyMib::Cccopyerrortable>())
	,cccopytable(std::make_shared<CiscoConfigCopyMib::Cccopytable>())
{
    cccopyerrortable->parent = this;

    cccopytable->parent = this;

    yang_name = "CISCO-CONFIG-COPY-MIB"; yang_parent_name = "CISCO-CONFIG-COPY-MIB";
}

CiscoConfigCopyMib::~CiscoConfigCopyMib()
{
}

bool CiscoConfigCopyMib::has_data() const
{
    return (cccopyerrortable !=  nullptr && cccopyerrortable->has_data())
	|| (cccopytable !=  nullptr && cccopytable->has_data());
}

bool CiscoConfigCopyMib::has_operation() const
{
    return is_set(yfilter)
	|| (cccopyerrortable !=  nullptr && cccopyerrortable->has_operation())
	|| (cccopytable !=  nullptr && cccopytable->has_operation());
}

std::string CiscoConfigCopyMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-CONFIG-COPY-MIB:CISCO-CONFIG-COPY-MIB";

    return path_buffer.str();

}

const EntityPath CiscoConfigCopyMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoConfigCopyMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccCopyErrorTable")
    {
        if(cccopyerrortable == nullptr)
        {
            cccopyerrortable = std::make_shared<CiscoConfigCopyMib::Cccopyerrortable>();
        }
        return cccopyerrortable;
    }

    if(child_yang_name == "ccCopyTable")
    {
        if(cccopytable == nullptr)
        {
            cccopytable = std::make_shared<CiscoConfigCopyMib::Cccopytable>();
        }
        return cccopytable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoConfigCopyMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cccopyerrortable != nullptr)
    {
        children["ccCopyErrorTable"] = cccopyerrortable;
    }

    if(cccopytable != nullptr)
    {
        children["ccCopyTable"] = cccopytable;
    }

    return children;
}

void CiscoConfigCopyMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoConfigCopyMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoConfigCopyMib::clone_ptr() const
{
    return std::make_shared<CiscoConfigCopyMib>();
}

std::string CiscoConfigCopyMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoConfigCopyMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoConfigCopyMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoConfigCopyMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoConfigCopyMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccCopyErrorTable" || name == "ccCopyTable")
        return true;
    return false;
}

CiscoConfigCopyMib::Cccopytable::Cccopytable()
{
    yang_name = "ccCopyTable"; yang_parent_name = "CISCO-CONFIG-COPY-MIB";
}

CiscoConfigCopyMib::Cccopytable::~Cccopytable()
{
}

bool CiscoConfigCopyMib::Cccopytable::has_data() const
{
    for (std::size_t index=0; index<cccopyentry.size(); index++)
    {
        if(cccopyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoConfigCopyMib::Cccopytable::has_operation() const
{
    for (std::size_t index=0; index<cccopyentry.size(); index++)
    {
        if(cccopyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoConfigCopyMib::Cccopytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccCopyTable";

    return path_buffer.str();

}

const EntityPath CiscoConfigCopyMib::Cccopytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONFIG-COPY-MIB:CISCO-CONFIG-COPY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoConfigCopyMib::Cccopytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccCopyEntry")
    {
        for(auto const & c : cccopyentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoConfigCopyMib::Cccopytable::Cccopyentry>();
        c->parent = this;
        cccopyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoConfigCopyMib::Cccopytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cccopyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoConfigCopyMib::Cccopytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoConfigCopyMib::Cccopytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoConfigCopyMib::Cccopytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccCopyEntry")
        return true;
    return false;
}

CiscoConfigCopyMib::Cccopytable::Cccopyentry::Cccopyentry()
    :
    cccopyindex{YType::uint32, "ccCopyIndex"},
    cccopydestfiletype{YType::enumeration, "ccCopyDestFileType"},
    cccopyentryrowstatus{YType::enumeration, "ccCopyEntryRowStatus"},
    cccopyfailcause{YType::enumeration, "ccCopyFailCause"},
    cccopyfilename{YType::str, "ccCopyFileName"},
    cccopynotificationoncompletion{YType::boolean, "ccCopyNotificationOnCompletion"},
    cccopyprotocol{YType::enumeration, "ccCopyProtocol"},
    cccopyserveraddress{YType::str, "ccCopyServerAddress"},
    cccopyserveraddressrev1{YType::str, "ccCopyServerAddressRev1"},
    cccopyserveraddresstype{YType::enumeration, "ccCopyServerAddressType"},
    cccopysourcefiletype{YType::enumeration, "ccCopySourceFileType"},
    cccopystate{YType::enumeration, "ccCopyState"},
    cccopytimecompleted{YType::uint32, "ccCopyTimeCompleted"},
    cccopytimestarted{YType::uint32, "ccCopyTimeStarted"},
    cccopyusername{YType::str, "ccCopyUserName"},
    cccopyuserpassword{YType::str, "ccCopyUserPassword"}
{
    yang_name = "ccCopyEntry"; yang_parent_name = "ccCopyTable";
}

CiscoConfigCopyMib::Cccopytable::Cccopyentry::~Cccopyentry()
{
}

bool CiscoConfigCopyMib::Cccopytable::Cccopyentry::has_data() const
{
    return cccopyindex.is_set
	|| cccopydestfiletype.is_set
	|| cccopyentryrowstatus.is_set
	|| cccopyfailcause.is_set
	|| cccopyfilename.is_set
	|| cccopynotificationoncompletion.is_set
	|| cccopyprotocol.is_set
	|| cccopyserveraddress.is_set
	|| cccopyserveraddressrev1.is_set
	|| cccopyserveraddresstype.is_set
	|| cccopysourcefiletype.is_set
	|| cccopystate.is_set
	|| cccopytimecompleted.is_set
	|| cccopytimestarted.is_set
	|| cccopyusername.is_set
	|| cccopyuserpassword.is_set;
}

bool CiscoConfigCopyMib::Cccopytable::Cccopyentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cccopyindex.yfilter)
	|| ydk::is_set(cccopydestfiletype.yfilter)
	|| ydk::is_set(cccopyentryrowstatus.yfilter)
	|| ydk::is_set(cccopyfailcause.yfilter)
	|| ydk::is_set(cccopyfilename.yfilter)
	|| ydk::is_set(cccopynotificationoncompletion.yfilter)
	|| ydk::is_set(cccopyprotocol.yfilter)
	|| ydk::is_set(cccopyserveraddress.yfilter)
	|| ydk::is_set(cccopyserveraddressrev1.yfilter)
	|| ydk::is_set(cccopyserveraddresstype.yfilter)
	|| ydk::is_set(cccopysourcefiletype.yfilter)
	|| ydk::is_set(cccopystate.yfilter)
	|| ydk::is_set(cccopytimecompleted.yfilter)
	|| ydk::is_set(cccopytimestarted.yfilter)
	|| ydk::is_set(cccopyusername.yfilter)
	|| ydk::is_set(cccopyuserpassword.yfilter);
}

std::string CiscoConfigCopyMib::Cccopytable::Cccopyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccCopyEntry" <<"[ccCopyIndex='" <<cccopyindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoConfigCopyMib::Cccopytable::Cccopyentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONFIG-COPY-MIB:CISCO-CONFIG-COPY-MIB/ccCopyTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cccopyindex.is_set || is_set(cccopyindex.yfilter)) leaf_name_data.push_back(cccopyindex.get_name_leafdata());
    if (cccopydestfiletype.is_set || is_set(cccopydestfiletype.yfilter)) leaf_name_data.push_back(cccopydestfiletype.get_name_leafdata());
    if (cccopyentryrowstatus.is_set || is_set(cccopyentryrowstatus.yfilter)) leaf_name_data.push_back(cccopyentryrowstatus.get_name_leafdata());
    if (cccopyfailcause.is_set || is_set(cccopyfailcause.yfilter)) leaf_name_data.push_back(cccopyfailcause.get_name_leafdata());
    if (cccopyfilename.is_set || is_set(cccopyfilename.yfilter)) leaf_name_data.push_back(cccopyfilename.get_name_leafdata());
    if (cccopynotificationoncompletion.is_set || is_set(cccopynotificationoncompletion.yfilter)) leaf_name_data.push_back(cccopynotificationoncompletion.get_name_leafdata());
    if (cccopyprotocol.is_set || is_set(cccopyprotocol.yfilter)) leaf_name_data.push_back(cccopyprotocol.get_name_leafdata());
    if (cccopyserveraddress.is_set || is_set(cccopyserveraddress.yfilter)) leaf_name_data.push_back(cccopyserveraddress.get_name_leafdata());
    if (cccopyserveraddressrev1.is_set || is_set(cccopyserveraddressrev1.yfilter)) leaf_name_data.push_back(cccopyserveraddressrev1.get_name_leafdata());
    if (cccopyserveraddresstype.is_set || is_set(cccopyserveraddresstype.yfilter)) leaf_name_data.push_back(cccopyserveraddresstype.get_name_leafdata());
    if (cccopysourcefiletype.is_set || is_set(cccopysourcefiletype.yfilter)) leaf_name_data.push_back(cccopysourcefiletype.get_name_leafdata());
    if (cccopystate.is_set || is_set(cccopystate.yfilter)) leaf_name_data.push_back(cccopystate.get_name_leafdata());
    if (cccopytimecompleted.is_set || is_set(cccopytimecompleted.yfilter)) leaf_name_data.push_back(cccopytimecompleted.get_name_leafdata());
    if (cccopytimestarted.is_set || is_set(cccopytimestarted.yfilter)) leaf_name_data.push_back(cccopytimestarted.get_name_leafdata());
    if (cccopyusername.is_set || is_set(cccopyusername.yfilter)) leaf_name_data.push_back(cccopyusername.get_name_leafdata());
    if (cccopyuserpassword.is_set || is_set(cccopyuserpassword.yfilter)) leaf_name_data.push_back(cccopyuserpassword.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoConfigCopyMib::Cccopytable::Cccopyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoConfigCopyMib::Cccopytable::Cccopyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoConfigCopyMib::Cccopytable::Cccopyentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ccCopyIndex")
    {
        cccopyindex = value;
        cccopyindex.value_namespace = name_space;
        cccopyindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyDestFileType")
    {
        cccopydestfiletype = value;
        cccopydestfiletype.value_namespace = name_space;
        cccopydestfiletype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyEntryRowStatus")
    {
        cccopyentryrowstatus = value;
        cccopyentryrowstatus.value_namespace = name_space;
        cccopyentryrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyFailCause")
    {
        cccopyfailcause = value;
        cccopyfailcause.value_namespace = name_space;
        cccopyfailcause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyFileName")
    {
        cccopyfilename = value;
        cccopyfilename.value_namespace = name_space;
        cccopyfilename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyNotificationOnCompletion")
    {
        cccopynotificationoncompletion = value;
        cccopynotificationoncompletion.value_namespace = name_space;
        cccopynotificationoncompletion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyProtocol")
    {
        cccopyprotocol = value;
        cccopyprotocol.value_namespace = name_space;
        cccopyprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyServerAddress")
    {
        cccopyserveraddress = value;
        cccopyserveraddress.value_namespace = name_space;
        cccopyserveraddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyServerAddressRev1")
    {
        cccopyserveraddressrev1 = value;
        cccopyserveraddressrev1.value_namespace = name_space;
        cccopyserveraddressrev1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyServerAddressType")
    {
        cccopyserveraddresstype = value;
        cccopyserveraddresstype.value_namespace = name_space;
        cccopyserveraddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopySourceFileType")
    {
        cccopysourcefiletype = value;
        cccopysourcefiletype.value_namespace = name_space;
        cccopysourcefiletype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyState")
    {
        cccopystate = value;
        cccopystate.value_namespace = name_space;
        cccopystate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyTimeCompleted")
    {
        cccopytimecompleted = value;
        cccopytimecompleted.value_namespace = name_space;
        cccopytimecompleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyTimeStarted")
    {
        cccopytimestarted = value;
        cccopytimestarted.value_namespace = name_space;
        cccopytimestarted.value_namespace_prefix = name_space_prefix;
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
}

void CiscoConfigCopyMib::Cccopytable::Cccopyentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccCopyIndex")
    {
        cccopyindex.yfilter = yfilter;
    }
    if(value_path == "ccCopyDestFileType")
    {
        cccopydestfiletype.yfilter = yfilter;
    }
    if(value_path == "ccCopyEntryRowStatus")
    {
        cccopyentryrowstatus.yfilter = yfilter;
    }
    if(value_path == "ccCopyFailCause")
    {
        cccopyfailcause.yfilter = yfilter;
    }
    if(value_path == "ccCopyFileName")
    {
        cccopyfilename.yfilter = yfilter;
    }
    if(value_path == "ccCopyNotificationOnCompletion")
    {
        cccopynotificationoncompletion.yfilter = yfilter;
    }
    if(value_path == "ccCopyProtocol")
    {
        cccopyprotocol.yfilter = yfilter;
    }
    if(value_path == "ccCopyServerAddress")
    {
        cccopyserveraddress.yfilter = yfilter;
    }
    if(value_path == "ccCopyServerAddressRev1")
    {
        cccopyserveraddressrev1.yfilter = yfilter;
    }
    if(value_path == "ccCopyServerAddressType")
    {
        cccopyserveraddresstype.yfilter = yfilter;
    }
    if(value_path == "ccCopySourceFileType")
    {
        cccopysourcefiletype.yfilter = yfilter;
    }
    if(value_path == "ccCopyState")
    {
        cccopystate.yfilter = yfilter;
    }
    if(value_path == "ccCopyTimeCompleted")
    {
        cccopytimecompleted.yfilter = yfilter;
    }
    if(value_path == "ccCopyTimeStarted")
    {
        cccopytimestarted.yfilter = yfilter;
    }
    if(value_path == "ccCopyUserName")
    {
        cccopyusername.yfilter = yfilter;
    }
    if(value_path == "ccCopyUserPassword")
    {
        cccopyuserpassword.yfilter = yfilter;
    }
}

bool CiscoConfigCopyMib::Cccopytable::Cccopyentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccCopyIndex" || name == "ccCopyDestFileType" || name == "ccCopyEntryRowStatus" || name == "ccCopyFailCause" || name == "ccCopyFileName" || name == "ccCopyNotificationOnCompletion" || name == "ccCopyProtocol" || name == "ccCopyServerAddress" || name == "ccCopyServerAddressRev1" || name == "ccCopyServerAddressType" || name == "ccCopySourceFileType" || name == "ccCopyState" || name == "ccCopyTimeCompleted" || name == "ccCopyTimeStarted" || name == "ccCopyUserName" || name == "ccCopyUserPassword")
        return true;
    return false;
}

CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrortable()
{
    yang_name = "ccCopyErrorTable"; yang_parent_name = "CISCO-CONFIG-COPY-MIB";
}

CiscoConfigCopyMib::Cccopyerrortable::~Cccopyerrortable()
{
}

bool CiscoConfigCopyMib::Cccopyerrortable::has_data() const
{
    for (std::size_t index=0; index<cccopyerrorentry.size(); index++)
    {
        if(cccopyerrorentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoConfigCopyMib::Cccopyerrortable::has_operation() const
{
    for (std::size_t index=0; index<cccopyerrorentry.size(); index++)
    {
        if(cccopyerrorentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoConfigCopyMib::Cccopyerrortable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccCopyErrorTable";

    return path_buffer.str();

}

const EntityPath CiscoConfigCopyMib::Cccopyerrortable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONFIG-COPY-MIB:CISCO-CONFIG-COPY-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoConfigCopyMib::Cccopyerrortable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ccCopyErrorEntry")
    {
        for(auto const & c : cccopyerrorentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry>();
        c->parent = this;
        cccopyerrorentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoConfigCopyMib::Cccopyerrortable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cccopyerrorentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoConfigCopyMib::Cccopyerrortable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoConfigCopyMib::Cccopyerrortable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoConfigCopyMib::Cccopyerrortable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccCopyErrorEntry")
        return true;
    return false;
}

CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry::Cccopyerrorentry()
    :
    cccopyindex{YType::str, "ccCopyIndex"},
    cccopyerrorindex{YType::uint32, "ccCopyErrorIndex"},
    cccopyerrordescription{YType::str, "ccCopyErrorDescription"},
    cccopyerrordeviceipaddress{YType::str, "ccCopyErrorDeviceIpAddress"},
    cccopyerrordeviceipaddresstype{YType::enumeration, "ccCopyErrorDeviceIpAddressType"},
    cccopyerrordevicewwn{YType::str, "ccCopyErrorDeviceWWN"}
{
    yang_name = "ccCopyErrorEntry"; yang_parent_name = "ccCopyErrorTable";
}

CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry::~Cccopyerrorentry()
{
}

bool CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry::has_data() const
{
    return cccopyindex.is_set
	|| cccopyerrorindex.is_set
	|| cccopyerrordescription.is_set
	|| cccopyerrordeviceipaddress.is_set
	|| cccopyerrordeviceipaddresstype.is_set
	|| cccopyerrordevicewwn.is_set;
}

bool CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cccopyindex.yfilter)
	|| ydk::is_set(cccopyerrorindex.yfilter)
	|| ydk::is_set(cccopyerrordescription.yfilter)
	|| ydk::is_set(cccopyerrordeviceipaddress.yfilter)
	|| ydk::is_set(cccopyerrordeviceipaddresstype.yfilter)
	|| ydk::is_set(cccopyerrordevicewwn.yfilter);
}

std::string CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ccCopyErrorEntry" <<"[ccCopyIndex='" <<cccopyindex <<"']" <<"[ccCopyErrorIndex='" <<cccopyerrorindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-CONFIG-COPY-MIB:CISCO-CONFIG-COPY-MIB/ccCopyErrorTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cccopyindex.is_set || is_set(cccopyindex.yfilter)) leaf_name_data.push_back(cccopyindex.get_name_leafdata());
    if (cccopyerrorindex.is_set || is_set(cccopyerrorindex.yfilter)) leaf_name_data.push_back(cccopyerrorindex.get_name_leafdata());
    if (cccopyerrordescription.is_set || is_set(cccopyerrordescription.yfilter)) leaf_name_data.push_back(cccopyerrordescription.get_name_leafdata());
    if (cccopyerrordeviceipaddress.is_set || is_set(cccopyerrordeviceipaddress.yfilter)) leaf_name_data.push_back(cccopyerrordeviceipaddress.get_name_leafdata());
    if (cccopyerrordeviceipaddresstype.is_set || is_set(cccopyerrordeviceipaddresstype.yfilter)) leaf_name_data.push_back(cccopyerrordeviceipaddresstype.get_name_leafdata());
    if (cccopyerrordevicewwn.is_set || is_set(cccopyerrordevicewwn.yfilter)) leaf_name_data.push_back(cccopyerrordevicewwn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ccCopyErrorDescription")
    {
        cccopyerrordescription = value;
        cccopyerrordescription.value_namespace = name_space;
        cccopyerrordescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyErrorDeviceIpAddress")
    {
        cccopyerrordeviceipaddress = value;
        cccopyerrordeviceipaddress.value_namespace = name_space;
        cccopyerrordeviceipaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyErrorDeviceIpAddressType")
    {
        cccopyerrordeviceipaddresstype = value;
        cccopyerrordeviceipaddresstype.value_namespace = name_space;
        cccopyerrordeviceipaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccCopyErrorDeviceWWN")
    {
        cccopyerrordevicewwn = value;
        cccopyerrordevicewwn.value_namespace = name_space;
        cccopyerrordevicewwn.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ccCopyIndex")
    {
        cccopyindex.yfilter = yfilter;
    }
    if(value_path == "ccCopyErrorIndex")
    {
        cccopyerrorindex.yfilter = yfilter;
    }
    if(value_path == "ccCopyErrorDescription")
    {
        cccopyerrordescription.yfilter = yfilter;
    }
    if(value_path == "ccCopyErrorDeviceIpAddress")
    {
        cccopyerrordeviceipaddress.yfilter = yfilter;
    }
    if(value_path == "ccCopyErrorDeviceIpAddressType")
    {
        cccopyerrordeviceipaddresstype.yfilter = yfilter;
    }
    if(value_path == "ccCopyErrorDeviceWWN")
    {
        cccopyerrordevicewwn.yfilter = yfilter;
    }
}

bool CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ccCopyIndex" || name == "ccCopyErrorIndex" || name == "ccCopyErrorDescription" || name == "ccCopyErrorDeviceIpAddress" || name == "ccCopyErrorDeviceIpAddressType" || name == "ccCopyErrorDeviceWWN")
        return true;
    return false;
}

const Enum::YLeaf Configcopyfailcause::unknown {1, "unknown"};
const Enum::YLeaf Configcopyfailcause::badFileName {2, "badFileName"};
const Enum::YLeaf Configcopyfailcause::timeout {3, "timeout"};
const Enum::YLeaf Configcopyfailcause::noMem {4, "noMem"};
const Enum::YLeaf Configcopyfailcause::noConfig {5, "noConfig"};
const Enum::YLeaf Configcopyfailcause::unsupportedProtocol {6, "unsupportedProtocol"};
const Enum::YLeaf Configcopyfailcause::someConfigApplyFailed {7, "someConfigApplyFailed"};
const Enum::YLeaf Configcopyfailcause::systemNotReady {8, "systemNotReady"};
const Enum::YLeaf Configcopyfailcause::requestAborted {9, "requestAborted"};

const Enum::YLeaf Configcopystate::waiting {1, "waiting"};
const Enum::YLeaf Configcopystate::running {2, "running"};
const Enum::YLeaf Configcopystate::successful {3, "successful"};
const Enum::YLeaf Configcopystate::failed {4, "failed"};

const Enum::YLeaf Configcopyprotocol::tftp {1, "tftp"};
const Enum::YLeaf Configcopyprotocol::ftp {2, "ftp"};
const Enum::YLeaf Configcopyprotocol::rcp {3, "rcp"};
const Enum::YLeaf Configcopyprotocol::scp {4, "scp"};
const Enum::YLeaf Configcopyprotocol::sftp {5, "sftp"};

const Enum::YLeaf Configfiletype::networkFile {1, "networkFile"};
const Enum::YLeaf Configfiletype::iosFile {2, "iosFile"};
const Enum::YLeaf Configfiletype::startupConfig {3, "startupConfig"};
const Enum::YLeaf Configfiletype::runningConfig {4, "runningConfig"};
const Enum::YLeaf Configfiletype::terminal {5, "terminal"};
const Enum::YLeaf Configfiletype::fabricStartupConfig {6, "fabricStartupConfig"};


}
}

