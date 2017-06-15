
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CONFIG_COPY_MIB.hpp"

namespace ydk {
namespace CISCO_CONFIG_COPY_MIB {

CiscoConfigCopyMib::CiscoConfigCopyMib()
    :
    cccopyerrortable_(std::make_shared<CiscoConfigCopyMib::Cccopyerrortable>())
	,cccopytable_(std::make_shared<CiscoConfigCopyMib::Cccopytable>())
{
    cccopyerrortable_->parent = this;

    cccopytable_->parent = this;

    yang_name = "CISCO-CONFIG-COPY-MIB"; yang_parent_name = "CISCO-CONFIG-COPY-MIB";
}

CiscoConfigCopyMib::~CiscoConfigCopyMib()
{
}

bool CiscoConfigCopyMib::has_data() const
{
    return (cccopyerrortable_ !=  nullptr && cccopyerrortable_->has_data())
	|| (cccopytable_ !=  nullptr && cccopytable_->has_data());
}

bool CiscoConfigCopyMib::has_operation() const
{
    return is_set(operation)
	|| (cccopyerrortable_ !=  nullptr && cccopyerrortable_->has_operation())
	|| (cccopytable_ !=  nullptr && cccopytable_->has_operation());
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
        if(cccopyerrortable_ == nullptr)
        {
            cccopyerrortable_ = std::make_shared<CiscoConfigCopyMib::Cccopyerrortable>();
        }
        return cccopyerrortable_;
    }

    if(child_yang_name == "ccCopyTable")
    {
        if(cccopytable_ == nullptr)
        {
            cccopytable_ = std::make_shared<CiscoConfigCopyMib::Cccopytable>();
        }
        return cccopytable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoConfigCopyMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cccopyerrortable_ != nullptr)
    {
        children["ccCopyErrorTable"] = cccopyerrortable_;
    }

    if(cccopytable_ != nullptr)
    {
        children["ccCopyTable"] = cccopytable_;
    }

    return children;
}

void CiscoConfigCopyMib::set_value(const std::string & value_path, std::string value)
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

CiscoConfigCopyMib::Cccopytable::Cccopytable()
{
    yang_name = "ccCopyTable"; yang_parent_name = "CISCO-CONFIG-COPY-MIB";
}

CiscoConfigCopyMib::Cccopytable::~Cccopytable()
{
}

bool CiscoConfigCopyMib::Cccopytable::has_data() const
{
    for (std::size_t index=0; index<cccopyentry_.size(); index++)
    {
        if(cccopyentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoConfigCopyMib::Cccopytable::has_operation() const
{
    for (std::size_t index=0; index<cccopyentry_.size(); index++)
    {
        if(cccopyentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cccopyentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoConfigCopyMib::Cccopytable::Cccopyentry>();
        c->parent = this;
        cccopyentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoConfigCopyMib::Cccopytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cccopyentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoConfigCopyMib::Cccopytable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(cccopyindex.operation)
	|| is_set(cccopydestfiletype.operation)
	|| is_set(cccopyentryrowstatus.operation)
	|| is_set(cccopyfailcause.operation)
	|| is_set(cccopyfilename.operation)
	|| is_set(cccopynotificationoncompletion.operation)
	|| is_set(cccopyprotocol.operation)
	|| is_set(cccopyserveraddress.operation)
	|| is_set(cccopyserveraddressrev1.operation)
	|| is_set(cccopyserveraddresstype.operation)
	|| is_set(cccopysourcefiletype.operation)
	|| is_set(cccopystate.operation)
	|| is_set(cccopytimecompleted.operation)
	|| is_set(cccopytimestarted.operation)
	|| is_set(cccopyusername.operation)
	|| is_set(cccopyuserpassword.operation);
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

    if (cccopyindex.is_set || is_set(cccopyindex.operation)) leaf_name_data.push_back(cccopyindex.get_name_leafdata());
    if (cccopydestfiletype.is_set || is_set(cccopydestfiletype.operation)) leaf_name_data.push_back(cccopydestfiletype.get_name_leafdata());
    if (cccopyentryrowstatus.is_set || is_set(cccopyentryrowstatus.operation)) leaf_name_data.push_back(cccopyentryrowstatus.get_name_leafdata());
    if (cccopyfailcause.is_set || is_set(cccopyfailcause.operation)) leaf_name_data.push_back(cccopyfailcause.get_name_leafdata());
    if (cccopyfilename.is_set || is_set(cccopyfilename.operation)) leaf_name_data.push_back(cccopyfilename.get_name_leafdata());
    if (cccopynotificationoncompletion.is_set || is_set(cccopynotificationoncompletion.operation)) leaf_name_data.push_back(cccopynotificationoncompletion.get_name_leafdata());
    if (cccopyprotocol.is_set || is_set(cccopyprotocol.operation)) leaf_name_data.push_back(cccopyprotocol.get_name_leafdata());
    if (cccopyserveraddress.is_set || is_set(cccopyserveraddress.operation)) leaf_name_data.push_back(cccopyserveraddress.get_name_leafdata());
    if (cccopyserveraddressrev1.is_set || is_set(cccopyserveraddressrev1.operation)) leaf_name_data.push_back(cccopyserveraddressrev1.get_name_leafdata());
    if (cccopyserveraddresstype.is_set || is_set(cccopyserveraddresstype.operation)) leaf_name_data.push_back(cccopyserveraddresstype.get_name_leafdata());
    if (cccopysourcefiletype.is_set || is_set(cccopysourcefiletype.operation)) leaf_name_data.push_back(cccopysourcefiletype.get_name_leafdata());
    if (cccopystate.is_set || is_set(cccopystate.operation)) leaf_name_data.push_back(cccopystate.get_name_leafdata());
    if (cccopytimecompleted.is_set || is_set(cccopytimecompleted.operation)) leaf_name_data.push_back(cccopytimecompleted.get_name_leafdata());
    if (cccopytimestarted.is_set || is_set(cccopytimestarted.operation)) leaf_name_data.push_back(cccopytimestarted.get_name_leafdata());
    if (cccopyusername.is_set || is_set(cccopyusername.operation)) leaf_name_data.push_back(cccopyusername.get_name_leafdata());
    if (cccopyuserpassword.is_set || is_set(cccopyuserpassword.operation)) leaf_name_data.push_back(cccopyuserpassword.get_name_leafdata());


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

void CiscoConfigCopyMib::Cccopytable::Cccopyentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ccCopyIndex")
    {
        cccopyindex = value;
    }
    if(value_path == "ccCopyDestFileType")
    {
        cccopydestfiletype = value;
    }
    if(value_path == "ccCopyEntryRowStatus")
    {
        cccopyentryrowstatus = value;
    }
    if(value_path == "ccCopyFailCause")
    {
        cccopyfailcause = value;
    }
    if(value_path == "ccCopyFileName")
    {
        cccopyfilename = value;
    }
    if(value_path == "ccCopyNotificationOnCompletion")
    {
        cccopynotificationoncompletion = value;
    }
    if(value_path == "ccCopyProtocol")
    {
        cccopyprotocol = value;
    }
    if(value_path == "ccCopyServerAddress")
    {
        cccopyserveraddress = value;
    }
    if(value_path == "ccCopyServerAddressRev1")
    {
        cccopyserveraddressrev1 = value;
    }
    if(value_path == "ccCopyServerAddressType")
    {
        cccopyserveraddresstype = value;
    }
    if(value_path == "ccCopySourceFileType")
    {
        cccopysourcefiletype = value;
    }
    if(value_path == "ccCopyState")
    {
        cccopystate = value;
    }
    if(value_path == "ccCopyTimeCompleted")
    {
        cccopytimecompleted = value;
    }
    if(value_path == "ccCopyTimeStarted")
    {
        cccopytimestarted = value;
    }
    if(value_path == "ccCopyUserName")
    {
        cccopyusername = value;
    }
    if(value_path == "ccCopyUserPassword")
    {
        cccopyuserpassword = value;
    }
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
    for (std::size_t index=0; index<cccopyerrorentry_.size(); index++)
    {
        if(cccopyerrorentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoConfigCopyMib::Cccopyerrortable::has_operation() const
{
    for (std::size_t index=0; index<cccopyerrorentry_.size(); index++)
    {
        if(cccopyerrorentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : cccopyerrorentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry>();
        c->parent = this;
        cccopyerrorentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoConfigCopyMib::Cccopyerrortable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cccopyerrorentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoConfigCopyMib::Cccopyerrortable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(cccopyindex.operation)
	|| is_set(cccopyerrorindex.operation)
	|| is_set(cccopyerrordescription.operation)
	|| is_set(cccopyerrordeviceipaddress.operation)
	|| is_set(cccopyerrordeviceipaddresstype.operation)
	|| is_set(cccopyerrordevicewwn.operation);
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

    if (cccopyindex.is_set || is_set(cccopyindex.operation)) leaf_name_data.push_back(cccopyindex.get_name_leafdata());
    if (cccopyerrorindex.is_set || is_set(cccopyerrorindex.operation)) leaf_name_data.push_back(cccopyerrorindex.get_name_leafdata());
    if (cccopyerrordescription.is_set || is_set(cccopyerrordescription.operation)) leaf_name_data.push_back(cccopyerrordescription.get_name_leafdata());
    if (cccopyerrordeviceipaddress.is_set || is_set(cccopyerrordeviceipaddress.operation)) leaf_name_data.push_back(cccopyerrordeviceipaddress.get_name_leafdata());
    if (cccopyerrordeviceipaddresstype.is_set || is_set(cccopyerrordeviceipaddresstype.operation)) leaf_name_data.push_back(cccopyerrordeviceipaddresstype.get_name_leafdata());
    if (cccopyerrordevicewwn.is_set || is_set(cccopyerrordevicewwn.operation)) leaf_name_data.push_back(cccopyerrordevicewwn.get_name_leafdata());


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

void CiscoConfigCopyMib::Cccopyerrortable::Cccopyerrorentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ccCopyIndex")
    {
        cccopyindex = value;
    }
    if(value_path == "ccCopyErrorIndex")
    {
        cccopyerrorindex = value;
    }
    if(value_path == "ccCopyErrorDescription")
    {
        cccopyerrordescription = value;
    }
    if(value_path == "ccCopyErrorDeviceIpAddress")
    {
        cccopyerrordeviceipaddress = value;
    }
    if(value_path == "ccCopyErrorDeviceIpAddressType")
    {
        cccopyerrordeviceipaddresstype = value;
    }
    if(value_path == "ccCopyErrorDeviceWWN")
    {
        cccopyerrordevicewwn = value;
    }
}

const Enum::YLeaf ConfigcopyfailcauseEnum::unknown {1, "unknown"};
const Enum::YLeaf ConfigcopyfailcauseEnum::badFileName {2, "badFileName"};
const Enum::YLeaf ConfigcopyfailcauseEnum::timeout {3, "timeout"};
const Enum::YLeaf ConfigcopyfailcauseEnum::noMem {4, "noMem"};
const Enum::YLeaf ConfigcopyfailcauseEnum::noConfig {5, "noConfig"};
const Enum::YLeaf ConfigcopyfailcauseEnum::unsupportedProtocol {6, "unsupportedProtocol"};
const Enum::YLeaf ConfigcopyfailcauseEnum::someConfigApplyFailed {7, "someConfigApplyFailed"};
const Enum::YLeaf ConfigcopyfailcauseEnum::systemNotReady {8, "systemNotReady"};
const Enum::YLeaf ConfigcopyfailcauseEnum::requestAborted {9, "requestAborted"};

const Enum::YLeaf ConfigcopystateEnum::waiting {1, "waiting"};
const Enum::YLeaf ConfigcopystateEnum::running {2, "running"};
const Enum::YLeaf ConfigcopystateEnum::successful {3, "successful"};
const Enum::YLeaf ConfigcopystateEnum::failed {4, "failed"};

const Enum::YLeaf ConfigfiletypeEnum::networkFile {1, "networkFile"};
const Enum::YLeaf ConfigfiletypeEnum::iosFile {2, "iosFile"};
const Enum::YLeaf ConfigfiletypeEnum::startupConfig {3, "startupConfig"};
const Enum::YLeaf ConfigfiletypeEnum::runningConfig {4, "runningConfig"};
const Enum::YLeaf ConfigfiletypeEnum::terminal {5, "terminal"};
const Enum::YLeaf ConfigfiletypeEnum::fabricStartupConfig {6, "fabricStartupConfig"};

const Enum::YLeaf ConfigcopyprotocolEnum::tftp {1, "tftp"};
const Enum::YLeaf ConfigcopyprotocolEnum::ftp {2, "ftp"};
const Enum::YLeaf ConfigcopyprotocolEnum::rcp {3, "rcp"};
const Enum::YLeaf ConfigcopyprotocolEnum::scp {4, "scp"};
const Enum::YLeaf ConfigcopyprotocolEnum::sftp {5, "sftp"};


}
}

