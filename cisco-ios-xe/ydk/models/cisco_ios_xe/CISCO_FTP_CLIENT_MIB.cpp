
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_FTP_CLIENT_MIB.hpp"

namespace ydk {
namespace CISCO_FTP_CLIENT_MIB {

CiscoFtpClientMib::CiscoFtpClientMib()
    :
    cfcrequest(std::make_shared<CiscoFtpClientMib::Cfcrequest>())
	,cfcrequesttable(std::make_shared<CiscoFtpClientMib::Cfcrequesttable>())
{
    cfcrequest->parent = this;

    cfcrequesttable->parent = this;

    yang_name = "CISCO-FTP-CLIENT-MIB"; yang_parent_name = "CISCO-FTP-CLIENT-MIB";
}

CiscoFtpClientMib::~CiscoFtpClientMib()
{
}

bool CiscoFtpClientMib::has_data() const
{
    return (cfcrequest !=  nullptr && cfcrequest->has_data())
	|| (cfcrequesttable !=  nullptr && cfcrequesttable->has_data());
}

bool CiscoFtpClientMib::has_operation() const
{
    return is_set(operation)
	|| (cfcrequest !=  nullptr && cfcrequest->has_operation())
	|| (cfcrequesttable !=  nullptr && cfcrequesttable->has_operation());
}

std::string CiscoFtpClientMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-FTP-CLIENT-MIB:CISCO-FTP-CLIENT-MIB";

    return path_buffer.str();

}

const EntityPath CiscoFtpClientMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoFtpClientMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfcRequest")
    {
        if(cfcrequest == nullptr)
        {
            cfcrequest = std::make_shared<CiscoFtpClientMib::Cfcrequest>();
        }
        return cfcrequest;
    }

    if(child_yang_name == "cfcRequestTable")
    {
        if(cfcrequesttable == nullptr)
        {
            cfcrequesttable = std::make_shared<CiscoFtpClientMib::Cfcrequesttable>();
        }
        return cfcrequesttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFtpClientMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cfcrequest != nullptr)
    {
        children["cfcRequest"] = cfcrequest;
    }

    if(cfcrequesttable != nullptr)
    {
        children["cfcRequestTable"] = cfcrequesttable;
    }

    return children;
}

void CiscoFtpClientMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoFtpClientMib::clone_ptr() const
{
    return std::make_shared<CiscoFtpClientMib>();
}

std::string CiscoFtpClientMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoFtpClientMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoFtpClientMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoFtpClientMib::Cfcrequest::Cfcrequest()
    :
    cfcrequestmaximum{YType::uint32, "cfcRequestMaximum"},
    cfcrequests{YType::uint32, "cfcRequests"},
    cfcrequestsbumped{YType::uint32, "cfcRequestsBumped"},
    cfcrequestshigh{YType::uint32, "cfcRequestsHigh"}
{
    yang_name = "cfcRequest"; yang_parent_name = "CISCO-FTP-CLIENT-MIB";
}

CiscoFtpClientMib::Cfcrequest::~Cfcrequest()
{
}

bool CiscoFtpClientMib::Cfcrequest::has_data() const
{
    return cfcrequestmaximum.is_set
	|| cfcrequests.is_set
	|| cfcrequestsbumped.is_set
	|| cfcrequestshigh.is_set;
}

bool CiscoFtpClientMib::Cfcrequest::has_operation() const
{
    return is_set(operation)
	|| is_set(cfcrequestmaximum.operation)
	|| is_set(cfcrequests.operation)
	|| is_set(cfcrequestsbumped.operation)
	|| is_set(cfcrequestshigh.operation);
}

std::string CiscoFtpClientMib::Cfcrequest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfcRequest";

    return path_buffer.str();

}

const EntityPath CiscoFtpClientMib::Cfcrequest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FTP-CLIENT-MIB:CISCO-FTP-CLIENT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cfcrequestmaximum.is_set || is_set(cfcrequestmaximum.operation)) leaf_name_data.push_back(cfcrequestmaximum.get_name_leafdata());
    if (cfcrequests.is_set || is_set(cfcrequests.operation)) leaf_name_data.push_back(cfcrequests.get_name_leafdata());
    if (cfcrequestsbumped.is_set || is_set(cfcrequestsbumped.operation)) leaf_name_data.push_back(cfcrequestsbumped.get_name_leafdata());
    if (cfcrequestshigh.is_set || is_set(cfcrequestshigh.operation)) leaf_name_data.push_back(cfcrequestshigh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFtpClientMib::Cfcrequest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFtpClientMib::Cfcrequest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoFtpClientMib::Cfcrequest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cfcRequestMaximum")
    {
        cfcrequestmaximum = value;
    }
    if(value_path == "cfcRequests")
    {
        cfcrequests = value;
    }
    if(value_path == "cfcRequestsBumped")
    {
        cfcrequestsbumped = value;
    }
    if(value_path == "cfcRequestsHigh")
    {
        cfcrequestshigh = value;
    }
}

CiscoFtpClientMib::Cfcrequesttable::Cfcrequesttable()
{
    yang_name = "cfcRequestTable"; yang_parent_name = "CISCO-FTP-CLIENT-MIB";
}

CiscoFtpClientMib::Cfcrequesttable::~Cfcrequesttable()
{
}

bool CiscoFtpClientMib::Cfcrequesttable::has_data() const
{
    for (std::size_t index=0; index<cfcrequestentry.size(); index++)
    {
        if(cfcrequestentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoFtpClientMib::Cfcrequesttable::has_operation() const
{
    for (std::size_t index=0; index<cfcrequestentry.size(); index++)
    {
        if(cfcrequestentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoFtpClientMib::Cfcrequesttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfcRequestTable";

    return path_buffer.str();

}

const EntityPath CiscoFtpClientMib::Cfcrequesttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FTP-CLIENT-MIB:CISCO-FTP-CLIENT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFtpClientMib::Cfcrequesttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfcRequestEntry")
    {
        for(auto const & c : cfcrequestentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry>();
        c->parent = this;
        cfcrequestentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFtpClientMib::Cfcrequesttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cfcrequestentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoFtpClientMib::Cfcrequesttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::Cfcrequestentry()
    :
    cfcrequestindex{YType::uint32, "cfcRequestIndex"},
    cfcrequestcompletiontime{YType::uint32, "cfcRequestCompletionTime"},
    cfcrequestentrystatus{YType::enumeration, "cfcRequestEntryStatus"},
    cfcrequestlocalfile{YType::str, "cfcRequestLocalFile"},
    cfcrequestoperation{YType::enumeration, "cfcRequestOperation"},
    cfcrequestoperationstate{YType::enumeration, "cfcRequestOperationState"},
    cfcrequestpassword{YType::str, "cfcRequestPassword"},
    cfcrequestremotefile{YType::str, "cfcRequestRemoteFile"},
    cfcrequestresult{YType::enumeration, "cfcRequestResult"},
    cfcrequestserver{YType::str, "cfcRequestServer"},
    cfcrequeststop{YType::enumeration, "cfcRequestStop"},
    cfcrequestuser{YType::str, "cfcRequestUser"}
{
    yang_name = "cfcRequestEntry"; yang_parent_name = "cfcRequestTable";
}

CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::~Cfcrequestentry()
{
}

bool CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::has_data() const
{
    return cfcrequestindex.is_set
	|| cfcrequestcompletiontime.is_set
	|| cfcrequestentrystatus.is_set
	|| cfcrequestlocalfile.is_set
	|| cfcrequestoperation.is_set
	|| cfcrequestoperationstate.is_set
	|| cfcrequestpassword.is_set
	|| cfcrequestremotefile.is_set
	|| cfcrequestresult.is_set
	|| cfcrequestserver.is_set
	|| cfcrequeststop.is_set
	|| cfcrequestuser.is_set;
}

bool CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cfcrequestindex.operation)
	|| is_set(cfcrequestcompletiontime.operation)
	|| is_set(cfcrequestentrystatus.operation)
	|| is_set(cfcrequestlocalfile.operation)
	|| is_set(cfcrequestoperation.operation)
	|| is_set(cfcrequestoperationstate.operation)
	|| is_set(cfcrequestpassword.operation)
	|| is_set(cfcrequestremotefile.operation)
	|| is_set(cfcrequestresult.operation)
	|| is_set(cfcrequestserver.operation)
	|| is_set(cfcrequeststop.operation)
	|| is_set(cfcrequestuser.operation);
}

std::string CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfcRequestEntry" <<"[cfcRequestIndex='" <<cfcrequestindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-FTP-CLIENT-MIB:CISCO-FTP-CLIENT-MIB/cfcRequestTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cfcrequestindex.is_set || is_set(cfcrequestindex.operation)) leaf_name_data.push_back(cfcrequestindex.get_name_leafdata());
    if (cfcrequestcompletiontime.is_set || is_set(cfcrequestcompletiontime.operation)) leaf_name_data.push_back(cfcrequestcompletiontime.get_name_leafdata());
    if (cfcrequestentrystatus.is_set || is_set(cfcrequestentrystatus.operation)) leaf_name_data.push_back(cfcrequestentrystatus.get_name_leafdata());
    if (cfcrequestlocalfile.is_set || is_set(cfcrequestlocalfile.operation)) leaf_name_data.push_back(cfcrequestlocalfile.get_name_leafdata());
    if (cfcrequestoperation.is_set || is_set(cfcrequestoperation.operation)) leaf_name_data.push_back(cfcrequestoperation.get_name_leafdata());
    if (cfcrequestoperationstate.is_set || is_set(cfcrequestoperationstate.operation)) leaf_name_data.push_back(cfcrequestoperationstate.get_name_leafdata());
    if (cfcrequestpassword.is_set || is_set(cfcrequestpassword.operation)) leaf_name_data.push_back(cfcrequestpassword.get_name_leafdata());
    if (cfcrequestremotefile.is_set || is_set(cfcrequestremotefile.operation)) leaf_name_data.push_back(cfcrequestremotefile.get_name_leafdata());
    if (cfcrequestresult.is_set || is_set(cfcrequestresult.operation)) leaf_name_data.push_back(cfcrequestresult.get_name_leafdata());
    if (cfcrequestserver.is_set || is_set(cfcrequestserver.operation)) leaf_name_data.push_back(cfcrequestserver.get_name_leafdata());
    if (cfcrequeststop.is_set || is_set(cfcrequeststop.operation)) leaf_name_data.push_back(cfcrequeststop.get_name_leafdata());
    if (cfcrequestuser.is_set || is_set(cfcrequestuser.operation)) leaf_name_data.push_back(cfcrequestuser.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cfcRequestIndex")
    {
        cfcrequestindex = value;
    }
    if(value_path == "cfcRequestCompletionTime")
    {
        cfcrequestcompletiontime = value;
    }
    if(value_path == "cfcRequestEntryStatus")
    {
        cfcrequestentrystatus = value;
    }
    if(value_path == "cfcRequestLocalFile")
    {
        cfcrequestlocalfile = value;
    }
    if(value_path == "cfcRequestOperation")
    {
        cfcrequestoperation = value;
    }
    if(value_path == "cfcRequestOperationState")
    {
        cfcrequestoperationstate = value;
    }
    if(value_path == "cfcRequestPassword")
    {
        cfcrequestpassword = value;
    }
    if(value_path == "cfcRequestRemoteFile")
    {
        cfcrequestremotefile = value;
    }
    if(value_path == "cfcRequestResult")
    {
        cfcrequestresult = value;
    }
    if(value_path == "cfcRequestServer")
    {
        cfcrequestserver = value;
    }
    if(value_path == "cfcRequestStop")
    {
        cfcrequeststop = value;
    }
    if(value_path == "cfcRequestUser")
    {
        cfcrequestuser = value;
    }
}

const Enum::YLeaf CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestoperationEnum::putBinary {1, "putBinary"};
const Enum::YLeaf CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestoperationEnum::putASCII {2, "putASCII"};

const Enum::YLeaf CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestresultEnum::pending {1, "pending"};
const Enum::YLeaf CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestresultEnum::success {2, "success"};
const Enum::YLeaf CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestresultEnum::aborted {3, "aborted"};
const Enum::YLeaf CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestresultEnum::fileOpenFailLocal {4, "fileOpenFailLocal"};
const Enum::YLeaf CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestresultEnum::fileOpenFailRemote {5, "fileOpenFailRemote"};
const Enum::YLeaf CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestresultEnum::badDomainName {6, "badDomainName"};
const Enum::YLeaf CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestresultEnum::unreachableIpAddress {7, "unreachableIpAddress"};
const Enum::YLeaf CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestresultEnum::linkFailed {8, "linkFailed"};
const Enum::YLeaf CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestresultEnum::fileReadFailed {9, "fileReadFailed"};
const Enum::YLeaf CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestresultEnum::fileWriteFailed {10, "fileWriteFailed"};

const Enum::YLeaf CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequeststopEnum::ready {1, "ready"};
const Enum::YLeaf CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequeststopEnum::stop {2, "stop"};

const Enum::YLeaf CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestoperationstateEnum::running {1, "running"};
const Enum::YLeaf CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestoperationstateEnum::stopping {2, "stopping"};
const Enum::YLeaf CiscoFtpClientMib::Cfcrequesttable::Cfcrequestentry::CfcrequestoperationstateEnum::stopped {3, "stopped"};


}
}

