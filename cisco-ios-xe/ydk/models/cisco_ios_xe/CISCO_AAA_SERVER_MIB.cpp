
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_AAA_SERVER_MIB.hpp"

namespace ydk {
namespace CISCO_AAA_SERVER_MIB {

CiscoAaaServerMib::CiscoAaaServerMib()
    :
    casconfig_(std::make_shared<CiscoAaaServerMib::Casconfig>())
	,casconfigtable_(std::make_shared<CiscoAaaServerMib::Casconfigtable>())
{
    casconfig_->parent = this;

    casconfigtable_->parent = this;

    yang_name = "CISCO-AAA-SERVER-MIB"; yang_parent_name = "CISCO-AAA-SERVER-MIB";
}

CiscoAaaServerMib::~CiscoAaaServerMib()
{
}

bool CiscoAaaServerMib::has_data() const
{
    return (casconfig_ !=  nullptr && casconfig_->has_data())
	|| (casconfigtable_ !=  nullptr && casconfigtable_->has_data());
}

bool CiscoAaaServerMib::has_operation() const
{
    return is_set(operation)
	|| (casconfig_ !=  nullptr && casconfig_->has_operation())
	|| (casconfigtable_ !=  nullptr && casconfigtable_->has_operation());
}

std::string CiscoAaaServerMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-AAA-SERVER-MIB:CISCO-AAA-SERVER-MIB";

    return path_buffer.str();

}

const EntityPath CiscoAaaServerMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoAaaServerMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "casConfig")
    {
        if(casconfig_ == nullptr)
        {
            casconfig_ = std::make_shared<CiscoAaaServerMib::Casconfig>();
        }
        return casconfig_;
    }

    if(child_yang_name == "casConfigTable")
    {
        if(casconfigtable_ == nullptr)
        {
            casconfigtable_ = std::make_shared<CiscoAaaServerMib::Casconfigtable>();
        }
        return casconfigtable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAaaServerMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(casconfig_ != nullptr)
    {
        children["casConfig"] = casconfig_;
    }

    if(casconfigtable_ != nullptr)
    {
        children["casConfigTable"] = casconfigtable_;
    }

    return children;
}

void CiscoAaaServerMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoAaaServerMib::clone_ptr() const
{
    return std::make_shared<CiscoAaaServerMib>();
}

std::string CiscoAaaServerMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoAaaServerMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoAaaServerMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoAaaServerMib::Casconfig::Casconfig()
    :
    casserverstatechangeenable{YType::boolean, "casServerStateChangeEnable"}
{
    yang_name = "casConfig"; yang_parent_name = "CISCO-AAA-SERVER-MIB";
}

CiscoAaaServerMib::Casconfig::~Casconfig()
{
}

bool CiscoAaaServerMib::Casconfig::has_data() const
{
    return casserverstatechangeenable.is_set;
}

bool CiscoAaaServerMib::Casconfig::has_operation() const
{
    return is_set(operation)
	|| is_set(casserverstatechangeenable.operation);
}

std::string CiscoAaaServerMib::Casconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casConfig";

    return path_buffer.str();

}

const EntityPath CiscoAaaServerMib::Casconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-AAA-SERVER-MIB:CISCO-AAA-SERVER-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (casserverstatechangeenable.is_set || is_set(casserverstatechangeenable.operation)) leaf_name_data.push_back(casserverstatechangeenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAaaServerMib::Casconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAaaServerMib::Casconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAaaServerMib::Casconfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "casServerStateChangeEnable")
    {
        casserverstatechangeenable = value;
    }
}

CiscoAaaServerMib::Casconfigtable::Casconfigtable()
{
    yang_name = "casConfigTable"; yang_parent_name = "CISCO-AAA-SERVER-MIB";
}

CiscoAaaServerMib::Casconfigtable::~Casconfigtable()
{
}

bool CiscoAaaServerMib::Casconfigtable::has_data() const
{
    for (std::size_t index=0; index<casconfigentry_.size(); index++)
    {
        if(casconfigentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoAaaServerMib::Casconfigtable::has_operation() const
{
    for (std::size_t index=0; index<casconfigentry_.size(); index++)
    {
        if(casconfigentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoAaaServerMib::Casconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casConfigTable";

    return path_buffer.str();

}

const EntityPath CiscoAaaServerMib::Casconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-AAA-SERVER-MIB:CISCO-AAA-SERVER-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAaaServerMib::Casconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "casConfigEntry")
    {
        for(auto const & c : casconfigentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoAaaServerMib::Casconfigtable::Casconfigentry>();
        c->parent = this;
        casconfigentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAaaServerMib::Casconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : casconfigentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoAaaServerMib::Casconfigtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoAaaServerMib::Casconfigtable::Casconfigentry::Casconfigentry()
    :
    casprotocol{YType::enumeration, "casProtocol"},
    casindex{YType::uint32, "casIndex"},
    casacctincorrectresponses{YType::uint32, "casAcctIncorrectResponses"},
    casacctport{YType::int32, "casAcctPort"},
    casacctrequests{YType::uint32, "casAcctRequests"},
    casacctrequesttimeouts{YType::uint32, "casAcctRequestTimeouts"},
    casacctresponsetime{YType::int32, "casAcctResponseTime"},
    casacctservererrorresponses{YType::uint32, "casAcctServerErrorResponses"},
    casaccttransactionfailures{YType::uint32, "casAcctTransactionFailures"},
    casaccttransactionsuccesses{YType::uint32, "casAcctTransactionSuccesses"},
    casacctunexpectedresponses{YType::uint32, "casAcctUnexpectedResponses"},
    casaddress{YType::str, "casAddress"},
    casauthenincorrectresponses{YType::uint32, "casAuthenIncorrectResponses"},
    casauthenport{YType::int32, "casAuthenPort"},
    casauthenrequests{YType::uint32, "casAuthenRequests"},
    casauthenrequesttimeouts{YType::uint32, "casAuthenRequestTimeouts"},
    casauthenresponsetime{YType::int32, "casAuthenResponseTime"},
    casauthenservererrorresponses{YType::uint32, "casAuthenServerErrorResponses"},
    casauthentransactionfailures{YType::uint32, "casAuthenTransactionFailures"},
    casauthentransactionsuccesses{YType::uint32, "casAuthenTransactionSuccesses"},
    casauthenunexpectedresponses{YType::uint32, "casAuthenUnexpectedResponses"},
    casauthorincorrectresponses{YType::uint32, "casAuthorIncorrectResponses"},
    casauthorrequests{YType::uint32, "casAuthorRequests"},
    casauthorrequesttimeouts{YType::uint32, "casAuthorRequestTimeouts"},
    casauthorresponsetime{YType::int32, "casAuthorResponseTime"},
    casauthorservererrorresponses{YType::uint32, "casAuthorServerErrorResponses"},
    casauthortransactionfailures{YType::uint32, "casAuthorTransactionFailures"},
    casauthortransactionsuccesses{YType::uint32, "casAuthorTransactionSuccesses"},
    casauthorunexpectedresponses{YType::uint32, "casAuthorUnexpectedResponses"},
    casconfigrowstatus{YType::enumeration, "casConfigRowStatus"},
    cascurrentstateduration{YType::int32, "casCurrentStateDuration"},
    casdeadcount{YType::uint32, "casDeadCount"},
    caskey{YType::str, "casKey"},
    caspreviousstateduration{YType::int32, "casPreviousStateDuration"},
    caspriority{YType::uint32, "casPriority"},
    casstate{YType::enumeration, "casState"},
    castotaldeadtime{YType::int32, "casTotalDeadTime"}
{
    yang_name = "casConfigEntry"; yang_parent_name = "casConfigTable";
}

CiscoAaaServerMib::Casconfigtable::Casconfigentry::~Casconfigentry()
{
}

bool CiscoAaaServerMib::Casconfigtable::Casconfigentry::has_data() const
{
    return casprotocol.is_set
	|| casindex.is_set
	|| casacctincorrectresponses.is_set
	|| casacctport.is_set
	|| casacctrequests.is_set
	|| casacctrequesttimeouts.is_set
	|| casacctresponsetime.is_set
	|| casacctservererrorresponses.is_set
	|| casaccttransactionfailures.is_set
	|| casaccttransactionsuccesses.is_set
	|| casacctunexpectedresponses.is_set
	|| casaddress.is_set
	|| casauthenincorrectresponses.is_set
	|| casauthenport.is_set
	|| casauthenrequests.is_set
	|| casauthenrequesttimeouts.is_set
	|| casauthenresponsetime.is_set
	|| casauthenservererrorresponses.is_set
	|| casauthentransactionfailures.is_set
	|| casauthentransactionsuccesses.is_set
	|| casauthenunexpectedresponses.is_set
	|| casauthorincorrectresponses.is_set
	|| casauthorrequests.is_set
	|| casauthorrequesttimeouts.is_set
	|| casauthorresponsetime.is_set
	|| casauthorservererrorresponses.is_set
	|| casauthortransactionfailures.is_set
	|| casauthortransactionsuccesses.is_set
	|| casauthorunexpectedresponses.is_set
	|| casconfigrowstatus.is_set
	|| cascurrentstateduration.is_set
	|| casdeadcount.is_set
	|| caskey.is_set
	|| caspreviousstateduration.is_set
	|| caspriority.is_set
	|| casstate.is_set
	|| castotaldeadtime.is_set;
}

bool CiscoAaaServerMib::Casconfigtable::Casconfigentry::has_operation() const
{
    return is_set(operation)
	|| is_set(casprotocol.operation)
	|| is_set(casindex.operation)
	|| is_set(casacctincorrectresponses.operation)
	|| is_set(casacctport.operation)
	|| is_set(casacctrequests.operation)
	|| is_set(casacctrequesttimeouts.operation)
	|| is_set(casacctresponsetime.operation)
	|| is_set(casacctservererrorresponses.operation)
	|| is_set(casaccttransactionfailures.operation)
	|| is_set(casaccttransactionsuccesses.operation)
	|| is_set(casacctunexpectedresponses.operation)
	|| is_set(casaddress.operation)
	|| is_set(casauthenincorrectresponses.operation)
	|| is_set(casauthenport.operation)
	|| is_set(casauthenrequests.operation)
	|| is_set(casauthenrequesttimeouts.operation)
	|| is_set(casauthenresponsetime.operation)
	|| is_set(casauthenservererrorresponses.operation)
	|| is_set(casauthentransactionfailures.operation)
	|| is_set(casauthentransactionsuccesses.operation)
	|| is_set(casauthenunexpectedresponses.operation)
	|| is_set(casauthorincorrectresponses.operation)
	|| is_set(casauthorrequests.operation)
	|| is_set(casauthorrequesttimeouts.operation)
	|| is_set(casauthorresponsetime.operation)
	|| is_set(casauthorservererrorresponses.operation)
	|| is_set(casauthortransactionfailures.operation)
	|| is_set(casauthortransactionsuccesses.operation)
	|| is_set(casauthorunexpectedresponses.operation)
	|| is_set(casconfigrowstatus.operation)
	|| is_set(cascurrentstateduration.operation)
	|| is_set(casdeadcount.operation)
	|| is_set(caskey.operation)
	|| is_set(caspreviousstateduration.operation)
	|| is_set(caspriority.operation)
	|| is_set(casstate.operation)
	|| is_set(castotaldeadtime.operation);
}

std::string CiscoAaaServerMib::Casconfigtable::Casconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "casConfigEntry" <<"[casProtocol='" <<casprotocol <<"']" <<"[casIndex='" <<casindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoAaaServerMib::Casconfigtable::Casconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-AAA-SERVER-MIB:CISCO-AAA-SERVER-MIB/casConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (casprotocol.is_set || is_set(casprotocol.operation)) leaf_name_data.push_back(casprotocol.get_name_leafdata());
    if (casindex.is_set || is_set(casindex.operation)) leaf_name_data.push_back(casindex.get_name_leafdata());
    if (casacctincorrectresponses.is_set || is_set(casacctincorrectresponses.operation)) leaf_name_data.push_back(casacctincorrectresponses.get_name_leafdata());
    if (casacctport.is_set || is_set(casacctport.operation)) leaf_name_data.push_back(casacctport.get_name_leafdata());
    if (casacctrequests.is_set || is_set(casacctrequests.operation)) leaf_name_data.push_back(casacctrequests.get_name_leafdata());
    if (casacctrequesttimeouts.is_set || is_set(casacctrequesttimeouts.operation)) leaf_name_data.push_back(casacctrequesttimeouts.get_name_leafdata());
    if (casacctresponsetime.is_set || is_set(casacctresponsetime.operation)) leaf_name_data.push_back(casacctresponsetime.get_name_leafdata());
    if (casacctservererrorresponses.is_set || is_set(casacctservererrorresponses.operation)) leaf_name_data.push_back(casacctservererrorresponses.get_name_leafdata());
    if (casaccttransactionfailures.is_set || is_set(casaccttransactionfailures.operation)) leaf_name_data.push_back(casaccttransactionfailures.get_name_leafdata());
    if (casaccttransactionsuccesses.is_set || is_set(casaccttransactionsuccesses.operation)) leaf_name_data.push_back(casaccttransactionsuccesses.get_name_leafdata());
    if (casacctunexpectedresponses.is_set || is_set(casacctunexpectedresponses.operation)) leaf_name_data.push_back(casacctunexpectedresponses.get_name_leafdata());
    if (casaddress.is_set || is_set(casaddress.operation)) leaf_name_data.push_back(casaddress.get_name_leafdata());
    if (casauthenincorrectresponses.is_set || is_set(casauthenincorrectresponses.operation)) leaf_name_data.push_back(casauthenincorrectresponses.get_name_leafdata());
    if (casauthenport.is_set || is_set(casauthenport.operation)) leaf_name_data.push_back(casauthenport.get_name_leafdata());
    if (casauthenrequests.is_set || is_set(casauthenrequests.operation)) leaf_name_data.push_back(casauthenrequests.get_name_leafdata());
    if (casauthenrequesttimeouts.is_set || is_set(casauthenrequesttimeouts.operation)) leaf_name_data.push_back(casauthenrequesttimeouts.get_name_leafdata());
    if (casauthenresponsetime.is_set || is_set(casauthenresponsetime.operation)) leaf_name_data.push_back(casauthenresponsetime.get_name_leafdata());
    if (casauthenservererrorresponses.is_set || is_set(casauthenservererrorresponses.operation)) leaf_name_data.push_back(casauthenservererrorresponses.get_name_leafdata());
    if (casauthentransactionfailures.is_set || is_set(casauthentransactionfailures.operation)) leaf_name_data.push_back(casauthentransactionfailures.get_name_leafdata());
    if (casauthentransactionsuccesses.is_set || is_set(casauthentransactionsuccesses.operation)) leaf_name_data.push_back(casauthentransactionsuccesses.get_name_leafdata());
    if (casauthenunexpectedresponses.is_set || is_set(casauthenunexpectedresponses.operation)) leaf_name_data.push_back(casauthenunexpectedresponses.get_name_leafdata());
    if (casauthorincorrectresponses.is_set || is_set(casauthorincorrectresponses.operation)) leaf_name_data.push_back(casauthorincorrectresponses.get_name_leafdata());
    if (casauthorrequests.is_set || is_set(casauthorrequests.operation)) leaf_name_data.push_back(casauthorrequests.get_name_leafdata());
    if (casauthorrequesttimeouts.is_set || is_set(casauthorrequesttimeouts.operation)) leaf_name_data.push_back(casauthorrequesttimeouts.get_name_leafdata());
    if (casauthorresponsetime.is_set || is_set(casauthorresponsetime.operation)) leaf_name_data.push_back(casauthorresponsetime.get_name_leafdata());
    if (casauthorservererrorresponses.is_set || is_set(casauthorservererrorresponses.operation)) leaf_name_data.push_back(casauthorservererrorresponses.get_name_leafdata());
    if (casauthortransactionfailures.is_set || is_set(casauthortransactionfailures.operation)) leaf_name_data.push_back(casauthortransactionfailures.get_name_leafdata());
    if (casauthortransactionsuccesses.is_set || is_set(casauthortransactionsuccesses.operation)) leaf_name_data.push_back(casauthortransactionsuccesses.get_name_leafdata());
    if (casauthorunexpectedresponses.is_set || is_set(casauthorunexpectedresponses.operation)) leaf_name_data.push_back(casauthorunexpectedresponses.get_name_leafdata());
    if (casconfigrowstatus.is_set || is_set(casconfigrowstatus.operation)) leaf_name_data.push_back(casconfigrowstatus.get_name_leafdata());
    if (cascurrentstateduration.is_set || is_set(cascurrentstateduration.operation)) leaf_name_data.push_back(cascurrentstateduration.get_name_leafdata());
    if (casdeadcount.is_set || is_set(casdeadcount.operation)) leaf_name_data.push_back(casdeadcount.get_name_leafdata());
    if (caskey.is_set || is_set(caskey.operation)) leaf_name_data.push_back(caskey.get_name_leafdata());
    if (caspreviousstateduration.is_set || is_set(caspreviousstateduration.operation)) leaf_name_data.push_back(caspreviousstateduration.get_name_leafdata());
    if (caspriority.is_set || is_set(caspriority.operation)) leaf_name_data.push_back(caspriority.get_name_leafdata());
    if (casstate.is_set || is_set(casstate.operation)) leaf_name_data.push_back(casstate.get_name_leafdata());
    if (castotaldeadtime.is_set || is_set(castotaldeadtime.operation)) leaf_name_data.push_back(castotaldeadtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoAaaServerMib::Casconfigtable::Casconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoAaaServerMib::Casconfigtable::Casconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoAaaServerMib::Casconfigtable::Casconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "casProtocol")
    {
        casprotocol = value;
    }
    if(value_path == "casIndex")
    {
        casindex = value;
    }
    if(value_path == "casAcctIncorrectResponses")
    {
        casacctincorrectresponses = value;
    }
    if(value_path == "casAcctPort")
    {
        casacctport = value;
    }
    if(value_path == "casAcctRequests")
    {
        casacctrequests = value;
    }
    if(value_path == "casAcctRequestTimeouts")
    {
        casacctrequesttimeouts = value;
    }
    if(value_path == "casAcctResponseTime")
    {
        casacctresponsetime = value;
    }
    if(value_path == "casAcctServerErrorResponses")
    {
        casacctservererrorresponses = value;
    }
    if(value_path == "casAcctTransactionFailures")
    {
        casaccttransactionfailures = value;
    }
    if(value_path == "casAcctTransactionSuccesses")
    {
        casaccttransactionsuccesses = value;
    }
    if(value_path == "casAcctUnexpectedResponses")
    {
        casacctunexpectedresponses = value;
    }
    if(value_path == "casAddress")
    {
        casaddress = value;
    }
    if(value_path == "casAuthenIncorrectResponses")
    {
        casauthenincorrectresponses = value;
    }
    if(value_path == "casAuthenPort")
    {
        casauthenport = value;
    }
    if(value_path == "casAuthenRequests")
    {
        casauthenrequests = value;
    }
    if(value_path == "casAuthenRequestTimeouts")
    {
        casauthenrequesttimeouts = value;
    }
    if(value_path == "casAuthenResponseTime")
    {
        casauthenresponsetime = value;
    }
    if(value_path == "casAuthenServerErrorResponses")
    {
        casauthenservererrorresponses = value;
    }
    if(value_path == "casAuthenTransactionFailures")
    {
        casauthentransactionfailures = value;
    }
    if(value_path == "casAuthenTransactionSuccesses")
    {
        casauthentransactionsuccesses = value;
    }
    if(value_path == "casAuthenUnexpectedResponses")
    {
        casauthenunexpectedresponses = value;
    }
    if(value_path == "casAuthorIncorrectResponses")
    {
        casauthorincorrectresponses = value;
    }
    if(value_path == "casAuthorRequests")
    {
        casauthorrequests = value;
    }
    if(value_path == "casAuthorRequestTimeouts")
    {
        casauthorrequesttimeouts = value;
    }
    if(value_path == "casAuthorResponseTime")
    {
        casauthorresponsetime = value;
    }
    if(value_path == "casAuthorServerErrorResponses")
    {
        casauthorservererrorresponses = value;
    }
    if(value_path == "casAuthorTransactionFailures")
    {
        casauthortransactionfailures = value;
    }
    if(value_path == "casAuthorTransactionSuccesses")
    {
        casauthortransactionsuccesses = value;
    }
    if(value_path == "casAuthorUnexpectedResponses")
    {
        casauthorunexpectedresponses = value;
    }
    if(value_path == "casConfigRowStatus")
    {
        casconfigrowstatus = value;
    }
    if(value_path == "casCurrentStateDuration")
    {
        cascurrentstateduration = value;
    }
    if(value_path == "casDeadCount")
    {
        casdeadcount = value;
    }
    if(value_path == "casKey")
    {
        caskey = value;
    }
    if(value_path == "casPreviousStateDuration")
    {
        caspreviousstateduration = value;
    }
    if(value_path == "casPriority")
    {
        caspriority = value;
    }
    if(value_path == "casState")
    {
        casstate = value;
    }
    if(value_path == "casTotalDeadTime")
    {
        castotaldeadtime = value;
    }
}

const Enum::YLeaf CiscoaaaprotocolEnum::tacacsplus {1, "tacacsplus"};
const Enum::YLeaf CiscoaaaprotocolEnum::radius {2, "radius"};
const Enum::YLeaf CiscoaaaprotocolEnum::ldap {3, "ldap"};
const Enum::YLeaf CiscoaaaprotocolEnum::kerberos {4, "kerberos"};
const Enum::YLeaf CiscoaaaprotocolEnum::ntlm {5, "ntlm"};
const Enum::YLeaf CiscoaaaprotocolEnum::sdi {6, "sdi"};
const Enum::YLeaf CiscoaaaprotocolEnum::other {7, "other"};

const Enum::YLeaf CiscoAaaServerMib::Casconfigtable::Casconfigentry::CasstateEnum::up {1, "up"};
const Enum::YLeaf CiscoAaaServerMib::Casconfigtable::Casconfigentry::CasstateEnum::dead {2, "dead"};


}
}

