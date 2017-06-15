
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_RADIUS_EXT_MIB.hpp"

namespace ydk {
namespace CISCO_RADIUS_EXT_MIB {

CiscoRadiusExtMib::CiscoRadiusExtMib()
    :
    creclientaccounting_(std::make_shared<CiscoRadiusExtMib::Creclientaccounting>())
	,creclientauthentication_(std::make_shared<CiscoRadiusExtMib::Creclientauthentication>())
	,creclientglobal_(std::make_shared<CiscoRadiusExtMib::Creclientglobal>())
{
    creclientaccounting_->parent = this;

    creclientauthentication_->parent = this;

    creclientglobal_->parent = this;

    yang_name = "CISCO-RADIUS-EXT-MIB"; yang_parent_name = "CISCO-RADIUS-EXT-MIB";
}

CiscoRadiusExtMib::~CiscoRadiusExtMib()
{
}

bool CiscoRadiusExtMib::has_data() const
{
    return (creclientaccounting_ !=  nullptr && creclientaccounting_->has_data())
	|| (creclientauthentication_ !=  nullptr && creclientauthentication_->has_data())
	|| (creclientglobal_ !=  nullptr && creclientglobal_->has_data());
}

bool CiscoRadiusExtMib::has_operation() const
{
    return is_set(operation)
	|| (creclientaccounting_ !=  nullptr && creclientaccounting_->has_operation())
	|| (creclientauthentication_ !=  nullptr && creclientauthentication_->has_operation())
	|| (creclientglobal_ !=  nullptr && creclientglobal_->has_operation());
}

std::string CiscoRadiusExtMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-RADIUS-EXT-MIB:CISCO-RADIUS-EXT-MIB";

    return path_buffer.str();

}

const EntityPath CiscoRadiusExtMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoRadiusExtMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "creClientAccounting")
    {
        if(creclientaccounting_ == nullptr)
        {
            creclientaccounting_ = std::make_shared<CiscoRadiusExtMib::Creclientaccounting>();
        }
        return creclientaccounting_;
    }

    if(child_yang_name == "creClientAuthentication")
    {
        if(creclientauthentication_ == nullptr)
        {
            creclientauthentication_ = std::make_shared<CiscoRadiusExtMib::Creclientauthentication>();
        }
        return creclientauthentication_;
    }

    if(child_yang_name == "creClientGlobal")
    {
        if(creclientglobal_ == nullptr)
        {
            creclientglobal_ = std::make_shared<CiscoRadiusExtMib::Creclientglobal>();
        }
        return creclientglobal_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRadiusExtMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(creclientaccounting_ != nullptr)
    {
        children["creClientAccounting"] = creclientaccounting_;
    }

    if(creclientauthentication_ != nullptr)
    {
        children["creClientAuthentication"] = creclientauthentication_;
    }

    if(creclientglobal_ != nullptr)
    {
        children["creClientGlobal"] = creclientglobal_;
    }

    return children;
}

void CiscoRadiusExtMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoRadiusExtMib::clone_ptr() const
{
    return std::make_shared<CiscoRadiusExtMib>();
}

std::string CiscoRadiusExtMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoRadiusExtMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoRadiusExtMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoRadiusExtMib::Creclientglobal::Creclientglobal()
    :
    creclientlastusedsourceid{YType::uint32, "creClientLastUsedSourceId"},
    creclientlastusedsourceport{YType::uint16, "creClientLastUsedSourcePort"},
    creclientsourceportrangeend{YType::uint16, "creClientSourcePortRangeEnd"},
    creclientsourceportrangestart{YType::uint16, "creClientSourcePortRangeStart"},
    creclienttotalaccessrejects{YType::uint32, "creClientTotalAccessRejects"},
    creclienttotalaverageresponsedelay{YType::int32, "creClientTotalAverageResponseDelay"},
    creclienttotalmaxdoneqlength{YType::uint32, "creClientTotalMaxDoneQLength"},
    creclienttotalmaxinqlength{YType::uint32, "creClientTotalMaxInQLength"},
    creclienttotalmaxwaitqlength{YType::uint32, "creClientTotalMaxWaitQLength"}
{
    yang_name = "creClientGlobal"; yang_parent_name = "CISCO-RADIUS-EXT-MIB";
}

CiscoRadiusExtMib::Creclientglobal::~Creclientglobal()
{
}

bool CiscoRadiusExtMib::Creclientglobal::has_data() const
{
    return creclientlastusedsourceid.is_set
	|| creclientlastusedsourceport.is_set
	|| creclientsourceportrangeend.is_set
	|| creclientsourceportrangestart.is_set
	|| creclienttotalaccessrejects.is_set
	|| creclienttotalaverageresponsedelay.is_set
	|| creclienttotalmaxdoneqlength.is_set
	|| creclienttotalmaxinqlength.is_set
	|| creclienttotalmaxwaitqlength.is_set;
}

bool CiscoRadiusExtMib::Creclientglobal::has_operation() const
{
    return is_set(operation)
	|| is_set(creclientlastusedsourceid.operation)
	|| is_set(creclientlastusedsourceport.operation)
	|| is_set(creclientsourceportrangeend.operation)
	|| is_set(creclientsourceportrangestart.operation)
	|| is_set(creclienttotalaccessrejects.operation)
	|| is_set(creclienttotalaverageresponsedelay.operation)
	|| is_set(creclienttotalmaxdoneqlength.operation)
	|| is_set(creclienttotalmaxinqlength.operation)
	|| is_set(creclienttotalmaxwaitqlength.operation);
}

std::string CiscoRadiusExtMib::Creclientglobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creClientGlobal";

    return path_buffer.str();

}

const EntityPath CiscoRadiusExtMib::Creclientglobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-RADIUS-EXT-MIB:CISCO-RADIUS-EXT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (creclientlastusedsourceid.is_set || is_set(creclientlastusedsourceid.operation)) leaf_name_data.push_back(creclientlastusedsourceid.get_name_leafdata());
    if (creclientlastusedsourceport.is_set || is_set(creclientlastusedsourceport.operation)) leaf_name_data.push_back(creclientlastusedsourceport.get_name_leafdata());
    if (creclientsourceportrangeend.is_set || is_set(creclientsourceportrangeend.operation)) leaf_name_data.push_back(creclientsourceportrangeend.get_name_leafdata());
    if (creclientsourceportrangestart.is_set || is_set(creclientsourceportrangestart.operation)) leaf_name_data.push_back(creclientsourceportrangestart.get_name_leafdata());
    if (creclienttotalaccessrejects.is_set || is_set(creclienttotalaccessrejects.operation)) leaf_name_data.push_back(creclienttotalaccessrejects.get_name_leafdata());
    if (creclienttotalaverageresponsedelay.is_set || is_set(creclienttotalaverageresponsedelay.operation)) leaf_name_data.push_back(creclienttotalaverageresponsedelay.get_name_leafdata());
    if (creclienttotalmaxdoneqlength.is_set || is_set(creclienttotalmaxdoneqlength.operation)) leaf_name_data.push_back(creclienttotalmaxdoneqlength.get_name_leafdata());
    if (creclienttotalmaxinqlength.is_set || is_set(creclienttotalmaxinqlength.operation)) leaf_name_data.push_back(creclienttotalmaxinqlength.get_name_leafdata());
    if (creclienttotalmaxwaitqlength.is_set || is_set(creclienttotalmaxwaitqlength.operation)) leaf_name_data.push_back(creclienttotalmaxwaitqlength.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoRadiusExtMib::Creclientglobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRadiusExtMib::Creclientglobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoRadiusExtMib::Creclientglobal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "creClientLastUsedSourceId")
    {
        creclientlastusedsourceid = value;
    }
    if(value_path == "creClientLastUsedSourcePort")
    {
        creclientlastusedsourceport = value;
    }
    if(value_path == "creClientSourcePortRangeEnd")
    {
        creclientsourceportrangeend = value;
    }
    if(value_path == "creClientSourcePortRangeStart")
    {
        creclientsourceportrangestart = value;
    }
    if(value_path == "creClientTotalAccessRejects")
    {
        creclienttotalaccessrejects = value;
    }
    if(value_path == "creClientTotalAverageResponseDelay")
    {
        creclienttotalaverageresponsedelay = value;
    }
    if(value_path == "creClientTotalMaxDoneQLength")
    {
        creclienttotalmaxdoneqlength = value;
    }
    if(value_path == "creClientTotalMaxInQLength")
    {
        creclienttotalmaxinqlength = value;
    }
    if(value_path == "creClientTotalMaxWaitQLength")
    {
        creclienttotalmaxwaitqlength = value;
    }
}

CiscoRadiusExtMib::Creclientauthentication::Creclientauthentication()
    :
    creauthclientaverageresponsedelay{YType::int32, "creAuthClientAverageResponseDelay"},
    creauthclientbadauthenticators{YType::uint32, "creAuthClientBadAuthenticators"},
    creauthclientbufferallocfailures{YType::uint32, "creAuthClientBufferAllocFailures"},
    creauthclientdupids{YType::uint32, "creAuthClientDupIDs"},
    creauthclientlastusedsourceid{YType::uint32, "creAuthClientLastUsedSourceId"},
    creauthclientmalformedresponses{YType::uint32, "creAuthClientMalformedResponses"},
    creauthclientmaxbuffersize{YType::uint32, "creAuthClientMaxBufferSize"},
    creauthclientmaxresponsedelay{YType::int32, "creAuthClientMaxResponseDelay"},
    creauthclienttimeouts{YType::uint32, "creAuthClientTimeouts"},
    creauthclienttotalpacketswithoutresponses{YType::uint32, "creAuthClientTotalPacketsWithoutResponses"},
    creauthclienttotalpacketswithresponses{YType::uint32, "creAuthClientTotalPacketsWithResponses"},
    creauthclienttotalresponses{YType::uint32, "creAuthClientTotalResponses"},
    creauthclientunknownresponses{YType::uint32, "creAuthClientUnknownResponses"}
{
    yang_name = "creClientAuthentication"; yang_parent_name = "CISCO-RADIUS-EXT-MIB";
}

CiscoRadiusExtMib::Creclientauthentication::~Creclientauthentication()
{
}

bool CiscoRadiusExtMib::Creclientauthentication::has_data() const
{
    return creauthclientaverageresponsedelay.is_set
	|| creauthclientbadauthenticators.is_set
	|| creauthclientbufferallocfailures.is_set
	|| creauthclientdupids.is_set
	|| creauthclientlastusedsourceid.is_set
	|| creauthclientmalformedresponses.is_set
	|| creauthclientmaxbuffersize.is_set
	|| creauthclientmaxresponsedelay.is_set
	|| creauthclienttimeouts.is_set
	|| creauthclienttotalpacketswithoutresponses.is_set
	|| creauthclienttotalpacketswithresponses.is_set
	|| creauthclienttotalresponses.is_set
	|| creauthclientunknownresponses.is_set;
}

bool CiscoRadiusExtMib::Creclientauthentication::has_operation() const
{
    return is_set(operation)
	|| is_set(creauthclientaverageresponsedelay.operation)
	|| is_set(creauthclientbadauthenticators.operation)
	|| is_set(creauthclientbufferallocfailures.operation)
	|| is_set(creauthclientdupids.operation)
	|| is_set(creauthclientlastusedsourceid.operation)
	|| is_set(creauthclientmalformedresponses.operation)
	|| is_set(creauthclientmaxbuffersize.operation)
	|| is_set(creauthclientmaxresponsedelay.operation)
	|| is_set(creauthclienttimeouts.operation)
	|| is_set(creauthclienttotalpacketswithoutresponses.operation)
	|| is_set(creauthclienttotalpacketswithresponses.operation)
	|| is_set(creauthclienttotalresponses.operation)
	|| is_set(creauthclientunknownresponses.operation);
}

std::string CiscoRadiusExtMib::Creclientauthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creClientAuthentication";

    return path_buffer.str();

}

const EntityPath CiscoRadiusExtMib::Creclientauthentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-RADIUS-EXT-MIB:CISCO-RADIUS-EXT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (creauthclientaverageresponsedelay.is_set || is_set(creauthclientaverageresponsedelay.operation)) leaf_name_data.push_back(creauthclientaverageresponsedelay.get_name_leafdata());
    if (creauthclientbadauthenticators.is_set || is_set(creauthclientbadauthenticators.operation)) leaf_name_data.push_back(creauthclientbadauthenticators.get_name_leafdata());
    if (creauthclientbufferallocfailures.is_set || is_set(creauthclientbufferallocfailures.operation)) leaf_name_data.push_back(creauthclientbufferallocfailures.get_name_leafdata());
    if (creauthclientdupids.is_set || is_set(creauthclientdupids.operation)) leaf_name_data.push_back(creauthclientdupids.get_name_leafdata());
    if (creauthclientlastusedsourceid.is_set || is_set(creauthclientlastusedsourceid.operation)) leaf_name_data.push_back(creauthclientlastusedsourceid.get_name_leafdata());
    if (creauthclientmalformedresponses.is_set || is_set(creauthclientmalformedresponses.operation)) leaf_name_data.push_back(creauthclientmalformedresponses.get_name_leafdata());
    if (creauthclientmaxbuffersize.is_set || is_set(creauthclientmaxbuffersize.operation)) leaf_name_data.push_back(creauthclientmaxbuffersize.get_name_leafdata());
    if (creauthclientmaxresponsedelay.is_set || is_set(creauthclientmaxresponsedelay.operation)) leaf_name_data.push_back(creauthclientmaxresponsedelay.get_name_leafdata());
    if (creauthclienttimeouts.is_set || is_set(creauthclienttimeouts.operation)) leaf_name_data.push_back(creauthclienttimeouts.get_name_leafdata());
    if (creauthclienttotalpacketswithoutresponses.is_set || is_set(creauthclienttotalpacketswithoutresponses.operation)) leaf_name_data.push_back(creauthclienttotalpacketswithoutresponses.get_name_leafdata());
    if (creauthclienttotalpacketswithresponses.is_set || is_set(creauthclienttotalpacketswithresponses.operation)) leaf_name_data.push_back(creauthclienttotalpacketswithresponses.get_name_leafdata());
    if (creauthclienttotalresponses.is_set || is_set(creauthclienttotalresponses.operation)) leaf_name_data.push_back(creauthclienttotalresponses.get_name_leafdata());
    if (creauthclientunknownresponses.is_set || is_set(creauthclientunknownresponses.operation)) leaf_name_data.push_back(creauthclientunknownresponses.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoRadiusExtMib::Creclientauthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRadiusExtMib::Creclientauthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoRadiusExtMib::Creclientauthentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "creAuthClientAverageResponseDelay")
    {
        creauthclientaverageresponsedelay = value;
    }
    if(value_path == "creAuthClientBadAuthenticators")
    {
        creauthclientbadauthenticators = value;
    }
    if(value_path == "creAuthClientBufferAllocFailures")
    {
        creauthclientbufferallocfailures = value;
    }
    if(value_path == "creAuthClientDupIDs")
    {
        creauthclientdupids = value;
    }
    if(value_path == "creAuthClientLastUsedSourceId")
    {
        creauthclientlastusedsourceid = value;
    }
    if(value_path == "creAuthClientMalformedResponses")
    {
        creauthclientmalformedresponses = value;
    }
    if(value_path == "creAuthClientMaxBufferSize")
    {
        creauthclientmaxbuffersize = value;
    }
    if(value_path == "creAuthClientMaxResponseDelay")
    {
        creauthclientmaxresponsedelay = value;
    }
    if(value_path == "creAuthClientTimeouts")
    {
        creauthclienttimeouts = value;
    }
    if(value_path == "creAuthClientTotalPacketsWithoutResponses")
    {
        creauthclienttotalpacketswithoutresponses = value;
    }
    if(value_path == "creAuthClientTotalPacketsWithResponses")
    {
        creauthclienttotalpacketswithresponses = value;
    }
    if(value_path == "creAuthClientTotalResponses")
    {
        creauthclienttotalresponses = value;
    }
    if(value_path == "creAuthClientUnknownResponses")
    {
        creauthclientunknownresponses = value;
    }
}

CiscoRadiusExtMib::Creclientaccounting::Creclientaccounting()
    :
    creacctclientaverageresponsedelay{YType::int32, "creAcctClientAverageResponseDelay"},
    creacctclientbadauthenticators{YType::uint32, "creAcctClientBadAuthenticators"},
    creacctclientbufferallocfailures{YType::uint32, "creAcctClientBufferAllocFailures"},
    creacctclientdupids{YType::uint32, "creAcctClientDupIDs"},
    creacctclientlastusedsourceid{YType::uint32, "creAcctClientLastUsedSourceId"},
    creacctclientmalformedresponses{YType::uint32, "creAcctClientMalformedResponses"},
    creacctclientmaxbuffersize{YType::uint32, "creAcctClientMaxBufferSize"},
    creacctclientmaxresponsedelay{YType::int32, "creAcctClientMaxResponseDelay"},
    creacctclienttimeouts{YType::uint32, "creAcctClientTimeouts"},
    creacctclienttotalpacketswithoutresponses{YType::uint32, "creAcctClientTotalPacketsWithoutResponses"},
    creacctclienttotalpacketswithresponses{YType::uint32, "creAcctClientTotalPacketsWithResponses"},
    creacctclienttotalresponses{YType::uint32, "creAcctClientTotalResponses"},
    creacctclientunknownresponses{YType::uint32, "creAcctClientUnknownResponses"}
{
    yang_name = "creClientAccounting"; yang_parent_name = "CISCO-RADIUS-EXT-MIB";
}

CiscoRadiusExtMib::Creclientaccounting::~Creclientaccounting()
{
}

bool CiscoRadiusExtMib::Creclientaccounting::has_data() const
{
    return creacctclientaverageresponsedelay.is_set
	|| creacctclientbadauthenticators.is_set
	|| creacctclientbufferallocfailures.is_set
	|| creacctclientdupids.is_set
	|| creacctclientlastusedsourceid.is_set
	|| creacctclientmalformedresponses.is_set
	|| creacctclientmaxbuffersize.is_set
	|| creacctclientmaxresponsedelay.is_set
	|| creacctclienttimeouts.is_set
	|| creacctclienttotalpacketswithoutresponses.is_set
	|| creacctclienttotalpacketswithresponses.is_set
	|| creacctclienttotalresponses.is_set
	|| creacctclientunknownresponses.is_set;
}

bool CiscoRadiusExtMib::Creclientaccounting::has_operation() const
{
    return is_set(operation)
	|| is_set(creacctclientaverageresponsedelay.operation)
	|| is_set(creacctclientbadauthenticators.operation)
	|| is_set(creacctclientbufferallocfailures.operation)
	|| is_set(creacctclientdupids.operation)
	|| is_set(creacctclientlastusedsourceid.operation)
	|| is_set(creacctclientmalformedresponses.operation)
	|| is_set(creacctclientmaxbuffersize.operation)
	|| is_set(creacctclientmaxresponsedelay.operation)
	|| is_set(creacctclienttimeouts.operation)
	|| is_set(creacctclienttotalpacketswithoutresponses.operation)
	|| is_set(creacctclienttotalpacketswithresponses.operation)
	|| is_set(creacctclienttotalresponses.operation)
	|| is_set(creacctclientunknownresponses.operation);
}

std::string CiscoRadiusExtMib::Creclientaccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "creClientAccounting";

    return path_buffer.str();

}

const EntityPath CiscoRadiusExtMib::Creclientaccounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-RADIUS-EXT-MIB:CISCO-RADIUS-EXT-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (creacctclientaverageresponsedelay.is_set || is_set(creacctclientaverageresponsedelay.operation)) leaf_name_data.push_back(creacctclientaverageresponsedelay.get_name_leafdata());
    if (creacctclientbadauthenticators.is_set || is_set(creacctclientbadauthenticators.operation)) leaf_name_data.push_back(creacctclientbadauthenticators.get_name_leafdata());
    if (creacctclientbufferallocfailures.is_set || is_set(creacctclientbufferallocfailures.operation)) leaf_name_data.push_back(creacctclientbufferallocfailures.get_name_leafdata());
    if (creacctclientdupids.is_set || is_set(creacctclientdupids.operation)) leaf_name_data.push_back(creacctclientdupids.get_name_leafdata());
    if (creacctclientlastusedsourceid.is_set || is_set(creacctclientlastusedsourceid.operation)) leaf_name_data.push_back(creacctclientlastusedsourceid.get_name_leafdata());
    if (creacctclientmalformedresponses.is_set || is_set(creacctclientmalformedresponses.operation)) leaf_name_data.push_back(creacctclientmalformedresponses.get_name_leafdata());
    if (creacctclientmaxbuffersize.is_set || is_set(creacctclientmaxbuffersize.operation)) leaf_name_data.push_back(creacctclientmaxbuffersize.get_name_leafdata());
    if (creacctclientmaxresponsedelay.is_set || is_set(creacctclientmaxresponsedelay.operation)) leaf_name_data.push_back(creacctclientmaxresponsedelay.get_name_leafdata());
    if (creacctclienttimeouts.is_set || is_set(creacctclienttimeouts.operation)) leaf_name_data.push_back(creacctclienttimeouts.get_name_leafdata());
    if (creacctclienttotalpacketswithoutresponses.is_set || is_set(creacctclienttotalpacketswithoutresponses.operation)) leaf_name_data.push_back(creacctclienttotalpacketswithoutresponses.get_name_leafdata());
    if (creacctclienttotalpacketswithresponses.is_set || is_set(creacctclienttotalpacketswithresponses.operation)) leaf_name_data.push_back(creacctclienttotalpacketswithresponses.get_name_leafdata());
    if (creacctclienttotalresponses.is_set || is_set(creacctclienttotalresponses.operation)) leaf_name_data.push_back(creacctclienttotalresponses.get_name_leafdata());
    if (creacctclientunknownresponses.is_set || is_set(creacctclientunknownresponses.operation)) leaf_name_data.push_back(creacctclientunknownresponses.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoRadiusExtMib::Creclientaccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoRadiusExtMib::Creclientaccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoRadiusExtMib::Creclientaccounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "creAcctClientAverageResponseDelay")
    {
        creacctclientaverageresponsedelay = value;
    }
    if(value_path == "creAcctClientBadAuthenticators")
    {
        creacctclientbadauthenticators = value;
    }
    if(value_path == "creAcctClientBufferAllocFailures")
    {
        creacctclientbufferallocfailures = value;
    }
    if(value_path == "creAcctClientDupIDs")
    {
        creacctclientdupids = value;
    }
    if(value_path == "creAcctClientLastUsedSourceId")
    {
        creacctclientlastusedsourceid = value;
    }
    if(value_path == "creAcctClientMalformedResponses")
    {
        creacctclientmalformedresponses = value;
    }
    if(value_path == "creAcctClientMaxBufferSize")
    {
        creacctclientmaxbuffersize = value;
    }
    if(value_path == "creAcctClientMaxResponseDelay")
    {
        creacctclientmaxresponsedelay = value;
    }
    if(value_path == "creAcctClientTimeouts")
    {
        creacctclienttimeouts = value;
    }
    if(value_path == "creAcctClientTotalPacketsWithoutResponses")
    {
        creacctclienttotalpacketswithoutresponses = value;
    }
    if(value_path == "creAcctClientTotalPacketsWithResponses")
    {
        creacctclienttotalpacketswithresponses = value;
    }
    if(value_path == "creAcctClientTotalResponses")
    {
        creacctclienttotalresponses = value;
    }
    if(value_path == "creAcctClientUnknownResponses")
    {
        creacctclientunknownresponses = value;
    }
}


}
}

