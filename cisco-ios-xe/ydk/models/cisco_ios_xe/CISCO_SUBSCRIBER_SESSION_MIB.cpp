
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SUBSCRIBER_SESSION_MIB.hpp"

namespace ydk {
namespace CISCO_SUBSCRIBER_SESSION_MIB {

CiscoSubscriberSessionMib::CiscoSubscriberSessionMib()
    :
    csubaggstatsinttable_(std::make_shared<CiscoSubscriberSessionMib::Csubaggstatsinttable>())
	,csubaggstatstable_(std::make_shared<CiscoSubscriberSessionMib::Csubaggstatstable>())
	,csubaggstatsthreshtable_(std::make_shared<CiscoSubscriberSessionMib::Csubaggstatsthreshtable>())
	,csubaggthresh_(std::make_shared<CiscoSubscriberSessionMib::Csubaggthresh>())
	,csubjob_(std::make_shared<CiscoSubscriberSessionMib::Csubjob>())
	,csubjobmatchparamstable_(std::make_shared<CiscoSubscriberSessionMib::Csubjobmatchparamstable>())
	,csubjobqueryparamstable_(std::make_shared<CiscoSubscriberSessionMib::Csubjobqueryparamstable>())
	,csubjobqueuetable_(std::make_shared<CiscoSubscriberSessionMib::Csubjobqueuetable>())
	,csubjobreporttable_(std::make_shared<CiscoSubscriberSessionMib::Csubjobreporttable>())
	,csubjobtable_(std::make_shared<CiscoSubscriberSessionMib::Csubjobtable>())
	,csubsessionbytypetable_(std::make_shared<CiscoSubscriberSessionMib::Csubsessionbytypetable>())
	,csubsessiontable_(std::make_shared<CiscoSubscriberSessionMib::Csubsessiontable>())
{
    csubaggstatsinttable_->parent = this;

    csubaggstatstable_->parent = this;

    csubaggstatsthreshtable_->parent = this;

    csubaggthresh_->parent = this;

    csubjob_->parent = this;

    csubjobmatchparamstable_->parent = this;

    csubjobqueryparamstable_->parent = this;

    csubjobqueuetable_->parent = this;

    csubjobreporttable_->parent = this;

    csubjobtable_->parent = this;

    csubsessionbytypetable_->parent = this;

    csubsessiontable_->parent = this;

    yang_name = "CISCO-SUBSCRIBER-SESSION-MIB"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::~CiscoSubscriberSessionMib()
{
}

bool CiscoSubscriberSessionMib::has_data() const
{
    return (csubaggstatsinttable_ !=  nullptr && csubaggstatsinttable_->has_data())
	|| (csubaggstatstable_ !=  nullptr && csubaggstatstable_->has_data())
	|| (csubaggstatsthreshtable_ !=  nullptr && csubaggstatsthreshtable_->has_data())
	|| (csubaggthresh_ !=  nullptr && csubaggthresh_->has_data())
	|| (csubjob_ !=  nullptr && csubjob_->has_data())
	|| (csubjobmatchparamstable_ !=  nullptr && csubjobmatchparamstable_->has_data())
	|| (csubjobqueryparamstable_ !=  nullptr && csubjobqueryparamstable_->has_data())
	|| (csubjobqueuetable_ !=  nullptr && csubjobqueuetable_->has_data())
	|| (csubjobreporttable_ !=  nullptr && csubjobreporttable_->has_data())
	|| (csubjobtable_ !=  nullptr && csubjobtable_->has_data())
	|| (csubsessionbytypetable_ !=  nullptr && csubsessionbytypetable_->has_data())
	|| (csubsessiontable_ !=  nullptr && csubsessiontable_->has_data());
}

bool CiscoSubscriberSessionMib::has_operation() const
{
    return is_set(operation)
	|| (csubaggstatsinttable_ !=  nullptr && csubaggstatsinttable_->has_operation())
	|| (csubaggstatstable_ !=  nullptr && csubaggstatstable_->has_operation())
	|| (csubaggstatsthreshtable_ !=  nullptr && csubaggstatsthreshtable_->has_operation())
	|| (csubaggthresh_ !=  nullptr && csubaggthresh_->has_operation())
	|| (csubjob_ !=  nullptr && csubjob_->has_operation())
	|| (csubjobmatchparamstable_ !=  nullptr && csubjobmatchparamstable_->has_operation())
	|| (csubjobqueryparamstable_ !=  nullptr && csubjobqueryparamstable_->has_operation())
	|| (csubjobqueuetable_ !=  nullptr && csubjobqueuetable_->has_operation())
	|| (csubjobreporttable_ !=  nullptr && csubjobreporttable_->has_operation())
	|| (csubjobtable_ !=  nullptr && csubjobtable_->has_operation())
	|| (csubsessionbytypetable_ !=  nullptr && csubsessionbytypetable_->has_operation())
	|| (csubsessiontable_ !=  nullptr && csubsessiontable_->has_operation());
}

std::string CiscoSubscriberSessionMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoSubscriberSessionMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubAggStatsIntTable")
    {
        if(csubaggstatsinttable_ == nullptr)
        {
            csubaggstatsinttable_ = std::make_shared<CiscoSubscriberSessionMib::Csubaggstatsinttable>();
        }
        return csubaggstatsinttable_;
    }

    if(child_yang_name == "csubAggStatsTable")
    {
        if(csubaggstatstable_ == nullptr)
        {
            csubaggstatstable_ = std::make_shared<CiscoSubscriberSessionMib::Csubaggstatstable>();
        }
        return csubaggstatstable_;
    }

    if(child_yang_name == "csubAggStatsThreshTable")
    {
        if(csubaggstatsthreshtable_ == nullptr)
        {
            csubaggstatsthreshtable_ = std::make_shared<CiscoSubscriberSessionMib::Csubaggstatsthreshtable>();
        }
        return csubaggstatsthreshtable_;
    }

    if(child_yang_name == "csubAggThresh")
    {
        if(csubaggthresh_ == nullptr)
        {
            csubaggthresh_ = std::make_shared<CiscoSubscriberSessionMib::Csubaggthresh>();
        }
        return csubaggthresh_;
    }

    if(child_yang_name == "csubJob")
    {
        if(csubjob_ == nullptr)
        {
            csubjob_ = std::make_shared<CiscoSubscriberSessionMib::Csubjob>();
        }
        return csubjob_;
    }

    if(child_yang_name == "csubJobMatchParamsTable")
    {
        if(csubjobmatchparamstable_ == nullptr)
        {
            csubjobmatchparamstable_ = std::make_shared<CiscoSubscriberSessionMib::Csubjobmatchparamstable>();
        }
        return csubjobmatchparamstable_;
    }

    if(child_yang_name == "csubJobQueryParamsTable")
    {
        if(csubjobqueryparamstable_ == nullptr)
        {
            csubjobqueryparamstable_ = std::make_shared<CiscoSubscriberSessionMib::Csubjobqueryparamstable>();
        }
        return csubjobqueryparamstable_;
    }

    if(child_yang_name == "csubJobQueueTable")
    {
        if(csubjobqueuetable_ == nullptr)
        {
            csubjobqueuetable_ = std::make_shared<CiscoSubscriberSessionMib::Csubjobqueuetable>();
        }
        return csubjobqueuetable_;
    }

    if(child_yang_name == "csubJobReportTable")
    {
        if(csubjobreporttable_ == nullptr)
        {
            csubjobreporttable_ = std::make_shared<CiscoSubscriberSessionMib::Csubjobreporttable>();
        }
        return csubjobreporttable_;
    }

    if(child_yang_name == "csubJobTable")
    {
        if(csubjobtable_ == nullptr)
        {
            csubjobtable_ = std::make_shared<CiscoSubscriberSessionMib::Csubjobtable>();
        }
        return csubjobtable_;
    }

    if(child_yang_name == "csubSessionByTypeTable")
    {
        if(csubsessionbytypetable_ == nullptr)
        {
            csubsessionbytypetable_ = std::make_shared<CiscoSubscriberSessionMib::Csubsessionbytypetable>();
        }
        return csubsessionbytypetable_;
    }

    if(child_yang_name == "csubSessionTable")
    {
        if(csubsessiontable_ == nullptr)
        {
            csubsessiontable_ = std::make_shared<CiscoSubscriberSessionMib::Csubsessiontable>();
        }
        return csubsessiontable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(csubaggstatsinttable_ != nullptr)
    {
        children["csubAggStatsIntTable"] = csubaggstatsinttable_;
    }

    if(csubaggstatstable_ != nullptr)
    {
        children["csubAggStatsTable"] = csubaggstatstable_;
    }

    if(csubaggstatsthreshtable_ != nullptr)
    {
        children["csubAggStatsThreshTable"] = csubaggstatsthreshtable_;
    }

    if(csubaggthresh_ != nullptr)
    {
        children["csubAggThresh"] = csubaggthresh_;
    }

    if(csubjob_ != nullptr)
    {
        children["csubJob"] = csubjob_;
    }

    if(csubjobmatchparamstable_ != nullptr)
    {
        children["csubJobMatchParamsTable"] = csubjobmatchparamstable_;
    }

    if(csubjobqueryparamstable_ != nullptr)
    {
        children["csubJobQueryParamsTable"] = csubjobqueryparamstable_;
    }

    if(csubjobqueuetable_ != nullptr)
    {
        children["csubJobQueueTable"] = csubjobqueuetable_;
    }

    if(csubjobreporttable_ != nullptr)
    {
        children["csubJobReportTable"] = csubjobreporttable_;
    }

    if(csubjobtable_ != nullptr)
    {
        children["csubJobTable"] = csubjobtable_;
    }

    if(csubsessionbytypetable_ != nullptr)
    {
        children["csubSessionByTypeTable"] = csubsessionbytypetable_;
    }

    if(csubsessiontable_ != nullptr)
    {
        children["csubSessionTable"] = csubsessiontable_;
    }

    return children;
}

void CiscoSubscriberSessionMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::clone_ptr() const
{
    return std::make_shared<CiscoSubscriberSessionMib>();
}

std::string CiscoSubscriberSessionMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoSubscriberSessionMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoSubscriberSessionMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoSubscriberSessionMib::Csubjob::Csubjob()
    :
    csubjobcount{YType::uint32, "csubJobCount"},
    csubjobfinishednotifyenable{YType::boolean, "csubJobFinishedNotifyEnable"},
    csubjobidnext{YType::uint32, "csubJobIdNext"},
    csubjobindexedattributes{YType::bits, "csubJobIndexedAttributes"},
    csubjobmaxlife{YType::uint32, "csubJobMaxLife"},
    csubjobmaxnumber{YType::uint32, "csubJobMaxNumber"}
{
    yang_name = "csubJob"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubjob::~Csubjob()
{
}

bool CiscoSubscriberSessionMib::Csubjob::has_data() const
{
    return csubjobcount.is_set
	|| csubjobfinishednotifyenable.is_set
	|| csubjobidnext.is_set
	|| csubjobindexedattributes.is_set
	|| csubjobmaxlife.is_set
	|| csubjobmaxnumber.is_set;
}

bool CiscoSubscriberSessionMib::Csubjob::has_operation() const
{
    return is_set(operation)
	|| is_set(csubjobcount.operation)
	|| is_set(csubjobfinishednotifyenable.operation)
	|| is_set(csubjobidnext.operation)
	|| is_set(csubjobindexedattributes.operation)
	|| is_set(csubjobmaxlife.operation)
	|| is_set(csubjobmaxnumber.operation);
}

std::string CiscoSubscriberSessionMib::Csubjob::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJob";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjob::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobcount.is_set || is_set(csubjobcount.operation)) leaf_name_data.push_back(csubjobcount.get_name_leafdata());
    if (csubjobfinishednotifyenable.is_set || is_set(csubjobfinishednotifyenable.operation)) leaf_name_data.push_back(csubjobfinishednotifyenable.get_name_leafdata());
    if (csubjobidnext.is_set || is_set(csubjobidnext.operation)) leaf_name_data.push_back(csubjobidnext.get_name_leafdata());
    if (csubjobindexedattributes.is_set || is_set(csubjobindexedattributes.operation)) leaf_name_data.push_back(csubjobindexedattributes.get_name_leafdata());
    if (csubjobmaxlife.is_set || is_set(csubjobmaxlife.operation)) leaf_name_data.push_back(csubjobmaxlife.get_name_leafdata());
    if (csubjobmaxnumber.is_set || is_set(csubjobmaxnumber.operation)) leaf_name_data.push_back(csubjobmaxnumber.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjob::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjob::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubjob::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csubJobCount")
    {
        csubjobcount = value;
    }
    if(value_path == "csubJobFinishedNotifyEnable")
    {
        csubjobfinishednotifyenable = value;
    }
    if(value_path == "csubJobIdNext")
    {
        csubjobidnext = value;
    }
    if(value_path == "csubJobIndexedAttributes")
    {
        csubjobindexedattributes[value] = true;
    }
    if(value_path == "csubJobMaxLife")
    {
        csubjobmaxlife = value;
    }
    if(value_path == "csubJobMaxNumber")
    {
        csubjobmaxnumber = value;
    }
}

CiscoSubscriberSessionMib::Csubaggthresh::Csubaggthresh()
    :
    csubaggstatsthreshnotifenable{YType::boolean, "csubAggStatsThreshNotifEnable"}
{
    yang_name = "csubAggThresh"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubaggthresh::~Csubaggthresh()
{
}

bool CiscoSubscriberSessionMib::Csubaggthresh::has_data() const
{
    return csubaggstatsthreshnotifenable.is_set;
}

bool CiscoSubscriberSessionMib::Csubaggthresh::has_operation() const
{
    return is_set(operation)
	|| is_set(csubaggstatsthreshnotifenable.operation);
}

std::string CiscoSubscriberSessionMib::Csubaggthresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggThresh";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubaggthresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubaggstatsthreshnotifenable.is_set || is_set(csubaggstatsthreshnotifenable.operation)) leaf_name_data.push_back(csubaggstatsthreshnotifenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubaggthresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubaggthresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubaggthresh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csubAggStatsThreshNotifEnable")
    {
        csubaggstatsthreshnotifenable = value;
    }
}

CiscoSubscriberSessionMib::Csubsessiontable::Csubsessiontable()
{
    yang_name = "csubSessionTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubsessiontable::~Csubsessiontable()
{
}

bool CiscoSubscriberSessionMib::Csubsessiontable::has_data() const
{
    for (std::size_t index=0; index<csubsessionentry_.size(); index++)
    {
        if(csubsessionentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubsessiontable::has_operation() const
{
    for (std::size_t index=0; index<csubsessionentry_.size(); index++)
    {
        if(csubsessionentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSubscriberSessionMib::Csubsessiontable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubSessionTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubsessiontable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubsessiontable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubSessionEntry")
    {
        for(auto const & c : csubsessionentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry>();
        c->parent = this;
        csubsessionentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubsessiontable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubsessionentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubsessiontable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::Csubsessionentry()
    :
    ifindex{YType::str, "ifIndex"},
    csubsessionacctsessionid{YType::uint32, "csubSessionAcctSessionId"},
    csubsessionauthenticated{YType::boolean, "csubSessionAuthenticated"},
    csubsessionavailableidentities{YType::bits, "csubSessionAvailableIdentities"},
    csubsessioncircuitid{YType::str, "csubSessionCircuitId"},
    csubsessioncreationtime{YType::str, "csubSessionCreationTime"},
    csubsessionderivedcfg{YType::str, "csubSessionDerivedCfg"},
    csubsessiondhcpclass{YType::str, "csubSessionDhcpClass"},
    csubsessiondnis{YType::str, "csubSessionDnis"},
    csubsessiondomain{YType::str, "csubSessionDomain"},
    csubsessiondomainipaddr{YType::str, "csubSessionDomainIpAddr"},
    csubsessiondomainipaddrtype{YType::enumeration, "csubSessionDomainIpAddrType"},
    csubsessiondomainipmask{YType::str, "csubSessionDomainIpMask"},
    csubsessiondomainvrf{YType::str, "csubSessionDomainVrf"},
    csubsessionipaddrassignment{YType::enumeration, "csubSessionIpAddrAssignment"},
    csubsessionlastchanged{YType::str, "csubSessionLastChanged"},
    csubsessionlocationidentifier{YType::str, "csubSessionLocationIdentifier"},
    csubsessionmacaddress{YType::str, "csubSessionMacAddress"},
    csubsessionmedia{YType::enumeration, "csubSessionMedia"},
    csubsessionmlpnegotiated{YType::boolean, "csubSessionMlpNegotiated"},
    csubsessionnasport{YType::str, "csubSessionNasPort"},
    csubsessionnativeipaddr{YType::str, "csubSessionNativeIpAddr"},
    csubsessionnativeipaddr2{YType::str, "csubSessionNativeIpAddr2"},
    csubsessionnativeipaddrtype{YType::enumeration, "csubSessionNativeIpAddrType"},
    csubsessionnativeipaddrtype2{YType::enumeration, "csubSessionNativeIpAddrType2"},
    csubsessionnativeipmask{YType::str, "csubSessionNativeIpMask"},
    csubsessionnativeipmask2{YType::str, "csubSessionNativeIpMask2"},
    csubsessionnativevrf{YType::str, "csubSessionNativeVrf"},
    csubsessionpbhk{YType::str, "csubSessionPbhk"},
    csubsessionprotocol{YType::enumeration, "csubSessionProtocol"},
    csubsessionredundancymode{YType::enumeration, "csubSessionRedundancyMode"},
    csubsessionremoteid{YType::str, "csubSessionRemoteId"},
    csubsessionserviceidentifier{YType::str, "csubSessionServiceIdentifier"},
    csubsessionstate{YType::enumeration, "csubSessionState"},
    csubsessionsubscriberlabel{YType::uint32, "csubSessionSubscriberLabel"},
    csubsessiontunnelname{YType::str, "csubSessionTunnelName"},
    csubsessiontype{YType::enumeration, "csubSessionType"},
    csubsessionusername{YType::str, "csubSessionUsername"}
{
    yang_name = "csubSessionEntry"; yang_parent_name = "csubSessionTable";
}

CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::~Csubsessionentry()
{
}

bool CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::has_data() const
{
    return ifindex.is_set
	|| csubsessionacctsessionid.is_set
	|| csubsessionauthenticated.is_set
	|| csubsessionavailableidentities.is_set
	|| csubsessioncircuitid.is_set
	|| csubsessioncreationtime.is_set
	|| csubsessionderivedcfg.is_set
	|| csubsessiondhcpclass.is_set
	|| csubsessiondnis.is_set
	|| csubsessiondomain.is_set
	|| csubsessiondomainipaddr.is_set
	|| csubsessiondomainipaddrtype.is_set
	|| csubsessiondomainipmask.is_set
	|| csubsessiondomainvrf.is_set
	|| csubsessionipaddrassignment.is_set
	|| csubsessionlastchanged.is_set
	|| csubsessionlocationidentifier.is_set
	|| csubsessionmacaddress.is_set
	|| csubsessionmedia.is_set
	|| csubsessionmlpnegotiated.is_set
	|| csubsessionnasport.is_set
	|| csubsessionnativeipaddr.is_set
	|| csubsessionnativeipaddr2.is_set
	|| csubsessionnativeipaddrtype.is_set
	|| csubsessionnativeipaddrtype2.is_set
	|| csubsessionnativeipmask.is_set
	|| csubsessionnativeipmask2.is_set
	|| csubsessionnativevrf.is_set
	|| csubsessionpbhk.is_set
	|| csubsessionprotocol.is_set
	|| csubsessionredundancymode.is_set
	|| csubsessionremoteid.is_set
	|| csubsessionserviceidentifier.is_set
	|| csubsessionstate.is_set
	|| csubsessionsubscriberlabel.is_set
	|| csubsessiontunnelname.is_set
	|| csubsessiontype.is_set
	|| csubsessionusername.is_set;
}

bool CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(csubsessionacctsessionid.operation)
	|| is_set(csubsessionauthenticated.operation)
	|| is_set(csubsessionavailableidentities.operation)
	|| is_set(csubsessioncircuitid.operation)
	|| is_set(csubsessioncreationtime.operation)
	|| is_set(csubsessionderivedcfg.operation)
	|| is_set(csubsessiondhcpclass.operation)
	|| is_set(csubsessiondnis.operation)
	|| is_set(csubsessiondomain.operation)
	|| is_set(csubsessiondomainipaddr.operation)
	|| is_set(csubsessiondomainipaddrtype.operation)
	|| is_set(csubsessiondomainipmask.operation)
	|| is_set(csubsessiondomainvrf.operation)
	|| is_set(csubsessionipaddrassignment.operation)
	|| is_set(csubsessionlastchanged.operation)
	|| is_set(csubsessionlocationidentifier.operation)
	|| is_set(csubsessionmacaddress.operation)
	|| is_set(csubsessionmedia.operation)
	|| is_set(csubsessionmlpnegotiated.operation)
	|| is_set(csubsessionnasport.operation)
	|| is_set(csubsessionnativeipaddr.operation)
	|| is_set(csubsessionnativeipaddr2.operation)
	|| is_set(csubsessionnativeipaddrtype.operation)
	|| is_set(csubsessionnativeipaddrtype2.operation)
	|| is_set(csubsessionnativeipmask.operation)
	|| is_set(csubsessionnativeipmask2.operation)
	|| is_set(csubsessionnativevrf.operation)
	|| is_set(csubsessionpbhk.operation)
	|| is_set(csubsessionprotocol.operation)
	|| is_set(csubsessionredundancymode.operation)
	|| is_set(csubsessionremoteid.operation)
	|| is_set(csubsessionserviceidentifier.operation)
	|| is_set(csubsessionstate.operation)
	|| is_set(csubsessionsubscriberlabel.operation)
	|| is_set(csubsessiontunnelname.operation)
	|| is_set(csubsessiontype.operation)
	|| is_set(csubsessionusername.operation);
}

std::string CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubSessionEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubSessionTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (csubsessionacctsessionid.is_set || is_set(csubsessionacctsessionid.operation)) leaf_name_data.push_back(csubsessionacctsessionid.get_name_leafdata());
    if (csubsessionauthenticated.is_set || is_set(csubsessionauthenticated.operation)) leaf_name_data.push_back(csubsessionauthenticated.get_name_leafdata());
    if (csubsessionavailableidentities.is_set || is_set(csubsessionavailableidentities.operation)) leaf_name_data.push_back(csubsessionavailableidentities.get_name_leafdata());
    if (csubsessioncircuitid.is_set || is_set(csubsessioncircuitid.operation)) leaf_name_data.push_back(csubsessioncircuitid.get_name_leafdata());
    if (csubsessioncreationtime.is_set || is_set(csubsessioncreationtime.operation)) leaf_name_data.push_back(csubsessioncreationtime.get_name_leafdata());
    if (csubsessionderivedcfg.is_set || is_set(csubsessionderivedcfg.operation)) leaf_name_data.push_back(csubsessionderivedcfg.get_name_leafdata());
    if (csubsessiondhcpclass.is_set || is_set(csubsessiondhcpclass.operation)) leaf_name_data.push_back(csubsessiondhcpclass.get_name_leafdata());
    if (csubsessiondnis.is_set || is_set(csubsessiondnis.operation)) leaf_name_data.push_back(csubsessiondnis.get_name_leafdata());
    if (csubsessiondomain.is_set || is_set(csubsessiondomain.operation)) leaf_name_data.push_back(csubsessiondomain.get_name_leafdata());
    if (csubsessiondomainipaddr.is_set || is_set(csubsessiondomainipaddr.operation)) leaf_name_data.push_back(csubsessiondomainipaddr.get_name_leafdata());
    if (csubsessiondomainipaddrtype.is_set || is_set(csubsessiondomainipaddrtype.operation)) leaf_name_data.push_back(csubsessiondomainipaddrtype.get_name_leafdata());
    if (csubsessiondomainipmask.is_set || is_set(csubsessiondomainipmask.operation)) leaf_name_data.push_back(csubsessiondomainipmask.get_name_leafdata());
    if (csubsessiondomainvrf.is_set || is_set(csubsessiondomainvrf.operation)) leaf_name_data.push_back(csubsessiondomainvrf.get_name_leafdata());
    if (csubsessionipaddrassignment.is_set || is_set(csubsessionipaddrassignment.operation)) leaf_name_data.push_back(csubsessionipaddrassignment.get_name_leafdata());
    if (csubsessionlastchanged.is_set || is_set(csubsessionlastchanged.operation)) leaf_name_data.push_back(csubsessionlastchanged.get_name_leafdata());
    if (csubsessionlocationidentifier.is_set || is_set(csubsessionlocationidentifier.operation)) leaf_name_data.push_back(csubsessionlocationidentifier.get_name_leafdata());
    if (csubsessionmacaddress.is_set || is_set(csubsessionmacaddress.operation)) leaf_name_data.push_back(csubsessionmacaddress.get_name_leafdata());
    if (csubsessionmedia.is_set || is_set(csubsessionmedia.operation)) leaf_name_data.push_back(csubsessionmedia.get_name_leafdata());
    if (csubsessionmlpnegotiated.is_set || is_set(csubsessionmlpnegotiated.operation)) leaf_name_data.push_back(csubsessionmlpnegotiated.get_name_leafdata());
    if (csubsessionnasport.is_set || is_set(csubsessionnasport.operation)) leaf_name_data.push_back(csubsessionnasport.get_name_leafdata());
    if (csubsessionnativeipaddr.is_set || is_set(csubsessionnativeipaddr.operation)) leaf_name_data.push_back(csubsessionnativeipaddr.get_name_leafdata());
    if (csubsessionnativeipaddr2.is_set || is_set(csubsessionnativeipaddr2.operation)) leaf_name_data.push_back(csubsessionnativeipaddr2.get_name_leafdata());
    if (csubsessionnativeipaddrtype.is_set || is_set(csubsessionnativeipaddrtype.operation)) leaf_name_data.push_back(csubsessionnativeipaddrtype.get_name_leafdata());
    if (csubsessionnativeipaddrtype2.is_set || is_set(csubsessionnativeipaddrtype2.operation)) leaf_name_data.push_back(csubsessionnativeipaddrtype2.get_name_leafdata());
    if (csubsessionnativeipmask.is_set || is_set(csubsessionnativeipmask.operation)) leaf_name_data.push_back(csubsessionnativeipmask.get_name_leafdata());
    if (csubsessionnativeipmask2.is_set || is_set(csubsessionnativeipmask2.operation)) leaf_name_data.push_back(csubsessionnativeipmask2.get_name_leafdata());
    if (csubsessionnativevrf.is_set || is_set(csubsessionnativevrf.operation)) leaf_name_data.push_back(csubsessionnativevrf.get_name_leafdata());
    if (csubsessionpbhk.is_set || is_set(csubsessionpbhk.operation)) leaf_name_data.push_back(csubsessionpbhk.get_name_leafdata());
    if (csubsessionprotocol.is_set || is_set(csubsessionprotocol.operation)) leaf_name_data.push_back(csubsessionprotocol.get_name_leafdata());
    if (csubsessionredundancymode.is_set || is_set(csubsessionredundancymode.operation)) leaf_name_data.push_back(csubsessionredundancymode.get_name_leafdata());
    if (csubsessionremoteid.is_set || is_set(csubsessionremoteid.operation)) leaf_name_data.push_back(csubsessionremoteid.get_name_leafdata());
    if (csubsessionserviceidentifier.is_set || is_set(csubsessionserviceidentifier.operation)) leaf_name_data.push_back(csubsessionserviceidentifier.get_name_leafdata());
    if (csubsessionstate.is_set || is_set(csubsessionstate.operation)) leaf_name_data.push_back(csubsessionstate.get_name_leafdata());
    if (csubsessionsubscriberlabel.is_set || is_set(csubsessionsubscriberlabel.operation)) leaf_name_data.push_back(csubsessionsubscriberlabel.get_name_leafdata());
    if (csubsessiontunnelname.is_set || is_set(csubsessiontunnelname.operation)) leaf_name_data.push_back(csubsessiontunnelname.get_name_leafdata());
    if (csubsessiontype.is_set || is_set(csubsessiontype.operation)) leaf_name_data.push_back(csubsessiontype.get_name_leafdata());
    if (csubsessionusername.is_set || is_set(csubsessionusername.operation)) leaf_name_data.push_back(csubsessionusername.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "csubSessionAcctSessionId")
    {
        csubsessionacctsessionid = value;
    }
    if(value_path == "csubSessionAuthenticated")
    {
        csubsessionauthenticated = value;
    }
    if(value_path == "csubSessionAvailableIdentities")
    {
        csubsessionavailableidentities[value] = true;
    }
    if(value_path == "csubSessionCircuitId")
    {
        csubsessioncircuitid = value;
    }
    if(value_path == "csubSessionCreationTime")
    {
        csubsessioncreationtime = value;
    }
    if(value_path == "csubSessionDerivedCfg")
    {
        csubsessionderivedcfg = value;
    }
    if(value_path == "csubSessionDhcpClass")
    {
        csubsessiondhcpclass = value;
    }
    if(value_path == "csubSessionDnis")
    {
        csubsessiondnis = value;
    }
    if(value_path == "csubSessionDomain")
    {
        csubsessiondomain = value;
    }
    if(value_path == "csubSessionDomainIpAddr")
    {
        csubsessiondomainipaddr = value;
    }
    if(value_path == "csubSessionDomainIpAddrType")
    {
        csubsessiondomainipaddrtype = value;
    }
    if(value_path == "csubSessionDomainIpMask")
    {
        csubsessiondomainipmask = value;
    }
    if(value_path == "csubSessionDomainVrf")
    {
        csubsessiondomainvrf = value;
    }
    if(value_path == "csubSessionIpAddrAssignment")
    {
        csubsessionipaddrassignment = value;
    }
    if(value_path == "csubSessionLastChanged")
    {
        csubsessionlastchanged = value;
    }
    if(value_path == "csubSessionLocationIdentifier")
    {
        csubsessionlocationidentifier = value;
    }
    if(value_path == "csubSessionMacAddress")
    {
        csubsessionmacaddress = value;
    }
    if(value_path == "csubSessionMedia")
    {
        csubsessionmedia = value;
    }
    if(value_path == "csubSessionMlpNegotiated")
    {
        csubsessionmlpnegotiated = value;
    }
    if(value_path == "csubSessionNasPort")
    {
        csubsessionnasport = value;
    }
    if(value_path == "csubSessionNativeIpAddr")
    {
        csubsessionnativeipaddr = value;
    }
    if(value_path == "csubSessionNativeIpAddr2")
    {
        csubsessionnativeipaddr2 = value;
    }
    if(value_path == "csubSessionNativeIpAddrType")
    {
        csubsessionnativeipaddrtype = value;
    }
    if(value_path == "csubSessionNativeIpAddrType2")
    {
        csubsessionnativeipaddrtype2 = value;
    }
    if(value_path == "csubSessionNativeIpMask")
    {
        csubsessionnativeipmask = value;
    }
    if(value_path == "csubSessionNativeIpMask2")
    {
        csubsessionnativeipmask2 = value;
    }
    if(value_path == "csubSessionNativeVrf")
    {
        csubsessionnativevrf = value;
    }
    if(value_path == "csubSessionPbhk")
    {
        csubsessionpbhk = value;
    }
    if(value_path == "csubSessionProtocol")
    {
        csubsessionprotocol = value;
    }
    if(value_path == "csubSessionRedundancyMode")
    {
        csubsessionredundancymode = value;
    }
    if(value_path == "csubSessionRemoteId")
    {
        csubsessionremoteid = value;
    }
    if(value_path == "csubSessionServiceIdentifier")
    {
        csubsessionserviceidentifier = value;
    }
    if(value_path == "csubSessionState")
    {
        csubsessionstate = value;
    }
    if(value_path == "csubSessionSubscriberLabel")
    {
        csubsessionsubscriberlabel = value;
    }
    if(value_path == "csubSessionTunnelName")
    {
        csubsessiontunnelname = value;
    }
    if(value_path == "csubSessionType")
    {
        csubsessiontype = value;
    }
    if(value_path == "csubSessionUsername")
    {
        csubsessionusername = value;
    }
}

CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypetable()
{
    yang_name = "csubSessionByTypeTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubsessionbytypetable::~Csubsessionbytypetable()
{
}

bool CiscoSubscriberSessionMib::Csubsessionbytypetable::has_data() const
{
    for (std::size_t index=0; index<csubsessionbytypeentry_.size(); index++)
    {
        if(csubsessionbytypeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubsessionbytypetable::has_operation() const
{
    for (std::size_t index=0; index<csubsessionbytypeentry_.size(); index++)
    {
        if(csubsessionbytypeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSubscriberSessionMib::Csubsessionbytypetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubSessionByTypeTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubsessionbytypetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubsessionbytypetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubSessionByTypeEntry")
    {
        for(auto const & c : csubsessionbytypeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry>();
        c->parent = this;
        csubsessionbytypeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubsessionbytypetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubsessionbytypeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubsessionbytypetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::Csubsessionbytypeentry()
    :
    csubsessionbytype{YType::enumeration, "csubSessionByType"},
    csubsessionifindex{YType::int32, "csubSessionIfIndex"}
{
    yang_name = "csubSessionByTypeEntry"; yang_parent_name = "csubSessionByTypeTable";
}

CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::~Csubsessionbytypeentry()
{
}

bool CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::has_data() const
{
    return csubsessionbytype.is_set
	|| csubsessionifindex.is_set;
}

bool CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csubsessionbytype.operation)
	|| is_set(csubsessionifindex.operation);
}

std::string CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubSessionByTypeEntry" <<"[csubSessionByType='" <<csubsessionbytype <<"']" <<"[csubSessionIfIndex='" <<csubsessionifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubSessionByTypeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubsessionbytype.is_set || is_set(csubsessionbytype.operation)) leaf_name_data.push_back(csubsessionbytype.get_name_leafdata());
    if (csubsessionifindex.is_set || is_set(csubsessionifindex.operation)) leaf_name_data.push_back(csubsessionifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubsessionbytypetable::Csubsessionbytypeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csubSessionByType")
    {
        csubsessionbytype = value;
    }
    if(value_path == "csubSessionIfIndex")
    {
        csubsessionifindex = value;
    }
}

CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatstable()
{
    yang_name = "csubAggStatsTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubaggstatstable::~Csubaggstatstable()
{
}

bool CiscoSubscriberSessionMib::Csubaggstatstable::has_data() const
{
    for (std::size_t index=0; index<csubaggstatsentry_.size(); index++)
    {
        if(csubaggstatsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubaggstatstable::has_operation() const
{
    for (std::size_t index=0; index<csubaggstatsentry_.size(); index++)
    {
        if(csubaggstatsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSubscriberSessionMib::Csubaggstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubaggstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubaggstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubAggStatsEntry")
    {
        for(auto const & c : csubaggstatsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry>();
        c->parent = this;
        csubaggstatsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubaggstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubaggstatsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubaggstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::Csubaggstatsentry()
    :
    csubaggstatspointtype{YType::enumeration, "csubAggStatsPointType"},
    csubaggstatspoint{YType::uint32, "csubAggStatsPoint"},
    csubaggstatssessiontype{YType::enumeration, "csubAggStatsSessionType"},
    csubaggstatsauthsessions{YType::uint32, "csubAggStatsAuthSessions"},
    csubaggstatsavgsessionrph{YType::uint32, "csubAggStatsAvgSessionRPH"},
    csubaggstatsavgsessionrpm{YType::uint32, "csubAggStatsAvgSessionRPM"},
    csubaggstatsavgsessionuptime{YType::uint32, "csubAggStatsAvgSessionUptime"},
    csubaggstatscurrauthsessions{YType::uint32, "csubAggStatsCurrAuthSessions"},
    csubaggstatscurrcreatedsessions{YType::uint32, "csubAggStatsCurrCreatedSessions"},
    csubaggstatscurrdiscsessions{YType::uint32, "csubAggStatsCurrDiscSessions"},
    csubaggstatscurrfailedsessions{YType::uint32, "csubAggStatsCurrFailedSessions"},
    csubaggstatscurrflowsup{YType::uint32, "csubAggStatsCurrFlowsUp"},
    csubaggstatscurrinvalidintervals{YType::uint32, "csubAggStatsCurrInvalidIntervals"},
    csubaggstatscurrtimeelapsed{YType::uint32, "csubAggStatsCurrTimeElapsed"},
    csubaggstatscurrupsessions{YType::uint32, "csubAggStatsCurrUpSessions"},
    csubaggstatscurrvalidintervals{YType::uint32, "csubAggStatsCurrValidIntervals"},
    csubaggstatsdayauthsessions{YType::uint32, "csubAggStatsDayAuthSessions"},
    csubaggstatsdaycreatedsessions{YType::uint32, "csubAggStatsDayCreatedSessions"},
    csubaggstatsdaydiscsessions{YType::uint32, "csubAggStatsDayDiscSessions"},
    csubaggstatsdayfailedsessions{YType::uint32, "csubAggStatsDayFailedSessions"},
    csubaggstatsdayupsessions{YType::uint32, "csubAggStatsDayUpSessions"},
    csubaggstatsdiscontinuitytime{YType::str, "csubAggStatsDiscontinuityTime"},
    csubaggstatshighupsessions{YType::uint32, "csubAggStatsHighUpSessions"},
    csubaggstatslightweightsessions{YType::uint32, "csubAggStatsLightWeightSessions"},
    csubaggstatspendingsessions{YType::uint32, "csubAggStatsPendingSessions"},
    csubaggstatsredsessions{YType::uint32, "csubAggStatsRedSessions"},
    csubaggstatsthrottleengagements{YType::uint64, "csubAggStatsThrottleEngagements"},
    csubaggstatstotalauthsessions{YType::uint64, "csubAggStatsTotalAuthSessions"},
    csubaggstatstotalcreatedsessions{YType::uint64, "csubAggStatsTotalCreatedSessions"},
    csubaggstatstotaldiscsessions{YType::uint64, "csubAggStatsTotalDiscSessions"},
    csubaggstatstotalfailedsessions{YType::uint64, "csubAggStatsTotalFailedSessions"},
    csubaggstatstotalflowsup{YType::uint64, "csubAggStatsTotalFlowsUp"},
    csubaggstatstotallightweightsessions{YType::uint64, "csubAggStatsTotalLightWeightSessions"},
    csubaggstatstotalupsessions{YType::uint64, "csubAggStatsTotalUpSessions"},
    csubaggstatsunauthsessions{YType::uint32, "csubAggStatsUnAuthSessions"},
    csubaggstatsupsessions{YType::uint32, "csubAggStatsUpSessions"}
{
    yang_name = "csubAggStatsEntry"; yang_parent_name = "csubAggStatsTable";
}

CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::~Csubaggstatsentry()
{
}

bool CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::has_data() const
{
    return csubaggstatspointtype.is_set
	|| csubaggstatspoint.is_set
	|| csubaggstatssessiontype.is_set
	|| csubaggstatsauthsessions.is_set
	|| csubaggstatsavgsessionrph.is_set
	|| csubaggstatsavgsessionrpm.is_set
	|| csubaggstatsavgsessionuptime.is_set
	|| csubaggstatscurrauthsessions.is_set
	|| csubaggstatscurrcreatedsessions.is_set
	|| csubaggstatscurrdiscsessions.is_set
	|| csubaggstatscurrfailedsessions.is_set
	|| csubaggstatscurrflowsup.is_set
	|| csubaggstatscurrinvalidintervals.is_set
	|| csubaggstatscurrtimeelapsed.is_set
	|| csubaggstatscurrupsessions.is_set
	|| csubaggstatscurrvalidintervals.is_set
	|| csubaggstatsdayauthsessions.is_set
	|| csubaggstatsdaycreatedsessions.is_set
	|| csubaggstatsdaydiscsessions.is_set
	|| csubaggstatsdayfailedsessions.is_set
	|| csubaggstatsdayupsessions.is_set
	|| csubaggstatsdiscontinuitytime.is_set
	|| csubaggstatshighupsessions.is_set
	|| csubaggstatslightweightsessions.is_set
	|| csubaggstatspendingsessions.is_set
	|| csubaggstatsredsessions.is_set
	|| csubaggstatsthrottleengagements.is_set
	|| csubaggstatstotalauthsessions.is_set
	|| csubaggstatstotalcreatedsessions.is_set
	|| csubaggstatstotaldiscsessions.is_set
	|| csubaggstatstotalfailedsessions.is_set
	|| csubaggstatstotalflowsup.is_set
	|| csubaggstatstotallightweightsessions.is_set
	|| csubaggstatstotalupsessions.is_set
	|| csubaggstatsunauthsessions.is_set
	|| csubaggstatsupsessions.is_set;
}

bool CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csubaggstatspointtype.operation)
	|| is_set(csubaggstatspoint.operation)
	|| is_set(csubaggstatssessiontype.operation)
	|| is_set(csubaggstatsauthsessions.operation)
	|| is_set(csubaggstatsavgsessionrph.operation)
	|| is_set(csubaggstatsavgsessionrpm.operation)
	|| is_set(csubaggstatsavgsessionuptime.operation)
	|| is_set(csubaggstatscurrauthsessions.operation)
	|| is_set(csubaggstatscurrcreatedsessions.operation)
	|| is_set(csubaggstatscurrdiscsessions.operation)
	|| is_set(csubaggstatscurrfailedsessions.operation)
	|| is_set(csubaggstatscurrflowsup.operation)
	|| is_set(csubaggstatscurrinvalidintervals.operation)
	|| is_set(csubaggstatscurrtimeelapsed.operation)
	|| is_set(csubaggstatscurrupsessions.operation)
	|| is_set(csubaggstatscurrvalidintervals.operation)
	|| is_set(csubaggstatsdayauthsessions.operation)
	|| is_set(csubaggstatsdaycreatedsessions.operation)
	|| is_set(csubaggstatsdaydiscsessions.operation)
	|| is_set(csubaggstatsdayfailedsessions.operation)
	|| is_set(csubaggstatsdayupsessions.operation)
	|| is_set(csubaggstatsdiscontinuitytime.operation)
	|| is_set(csubaggstatshighupsessions.operation)
	|| is_set(csubaggstatslightweightsessions.operation)
	|| is_set(csubaggstatspendingsessions.operation)
	|| is_set(csubaggstatsredsessions.operation)
	|| is_set(csubaggstatsthrottleengagements.operation)
	|| is_set(csubaggstatstotalauthsessions.operation)
	|| is_set(csubaggstatstotalcreatedsessions.operation)
	|| is_set(csubaggstatstotaldiscsessions.operation)
	|| is_set(csubaggstatstotalfailedsessions.operation)
	|| is_set(csubaggstatstotalflowsup.operation)
	|| is_set(csubaggstatstotallightweightsessions.operation)
	|| is_set(csubaggstatstotalupsessions.operation)
	|| is_set(csubaggstatsunauthsessions.operation)
	|| is_set(csubaggstatsupsessions.operation);
}

std::string CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsEntry" <<"[csubAggStatsPointType='" <<csubaggstatspointtype <<"']" <<"[csubAggStatsPoint='" <<csubaggstatspoint <<"']" <<"[csubAggStatsSessionType='" <<csubaggstatssessiontype <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubAggStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubaggstatspointtype.is_set || is_set(csubaggstatspointtype.operation)) leaf_name_data.push_back(csubaggstatspointtype.get_name_leafdata());
    if (csubaggstatspoint.is_set || is_set(csubaggstatspoint.operation)) leaf_name_data.push_back(csubaggstatspoint.get_name_leafdata());
    if (csubaggstatssessiontype.is_set || is_set(csubaggstatssessiontype.operation)) leaf_name_data.push_back(csubaggstatssessiontype.get_name_leafdata());
    if (csubaggstatsauthsessions.is_set || is_set(csubaggstatsauthsessions.operation)) leaf_name_data.push_back(csubaggstatsauthsessions.get_name_leafdata());
    if (csubaggstatsavgsessionrph.is_set || is_set(csubaggstatsavgsessionrph.operation)) leaf_name_data.push_back(csubaggstatsavgsessionrph.get_name_leafdata());
    if (csubaggstatsavgsessionrpm.is_set || is_set(csubaggstatsavgsessionrpm.operation)) leaf_name_data.push_back(csubaggstatsavgsessionrpm.get_name_leafdata());
    if (csubaggstatsavgsessionuptime.is_set || is_set(csubaggstatsavgsessionuptime.operation)) leaf_name_data.push_back(csubaggstatsavgsessionuptime.get_name_leafdata());
    if (csubaggstatscurrauthsessions.is_set || is_set(csubaggstatscurrauthsessions.operation)) leaf_name_data.push_back(csubaggstatscurrauthsessions.get_name_leafdata());
    if (csubaggstatscurrcreatedsessions.is_set || is_set(csubaggstatscurrcreatedsessions.operation)) leaf_name_data.push_back(csubaggstatscurrcreatedsessions.get_name_leafdata());
    if (csubaggstatscurrdiscsessions.is_set || is_set(csubaggstatscurrdiscsessions.operation)) leaf_name_data.push_back(csubaggstatscurrdiscsessions.get_name_leafdata());
    if (csubaggstatscurrfailedsessions.is_set || is_set(csubaggstatscurrfailedsessions.operation)) leaf_name_data.push_back(csubaggstatscurrfailedsessions.get_name_leafdata());
    if (csubaggstatscurrflowsup.is_set || is_set(csubaggstatscurrflowsup.operation)) leaf_name_data.push_back(csubaggstatscurrflowsup.get_name_leafdata());
    if (csubaggstatscurrinvalidintervals.is_set || is_set(csubaggstatscurrinvalidintervals.operation)) leaf_name_data.push_back(csubaggstatscurrinvalidintervals.get_name_leafdata());
    if (csubaggstatscurrtimeelapsed.is_set || is_set(csubaggstatscurrtimeelapsed.operation)) leaf_name_data.push_back(csubaggstatscurrtimeelapsed.get_name_leafdata());
    if (csubaggstatscurrupsessions.is_set || is_set(csubaggstatscurrupsessions.operation)) leaf_name_data.push_back(csubaggstatscurrupsessions.get_name_leafdata());
    if (csubaggstatscurrvalidintervals.is_set || is_set(csubaggstatscurrvalidintervals.operation)) leaf_name_data.push_back(csubaggstatscurrvalidintervals.get_name_leafdata());
    if (csubaggstatsdayauthsessions.is_set || is_set(csubaggstatsdayauthsessions.operation)) leaf_name_data.push_back(csubaggstatsdayauthsessions.get_name_leafdata());
    if (csubaggstatsdaycreatedsessions.is_set || is_set(csubaggstatsdaycreatedsessions.operation)) leaf_name_data.push_back(csubaggstatsdaycreatedsessions.get_name_leafdata());
    if (csubaggstatsdaydiscsessions.is_set || is_set(csubaggstatsdaydiscsessions.operation)) leaf_name_data.push_back(csubaggstatsdaydiscsessions.get_name_leafdata());
    if (csubaggstatsdayfailedsessions.is_set || is_set(csubaggstatsdayfailedsessions.operation)) leaf_name_data.push_back(csubaggstatsdayfailedsessions.get_name_leafdata());
    if (csubaggstatsdayupsessions.is_set || is_set(csubaggstatsdayupsessions.operation)) leaf_name_data.push_back(csubaggstatsdayupsessions.get_name_leafdata());
    if (csubaggstatsdiscontinuitytime.is_set || is_set(csubaggstatsdiscontinuitytime.operation)) leaf_name_data.push_back(csubaggstatsdiscontinuitytime.get_name_leafdata());
    if (csubaggstatshighupsessions.is_set || is_set(csubaggstatshighupsessions.operation)) leaf_name_data.push_back(csubaggstatshighupsessions.get_name_leafdata());
    if (csubaggstatslightweightsessions.is_set || is_set(csubaggstatslightweightsessions.operation)) leaf_name_data.push_back(csubaggstatslightweightsessions.get_name_leafdata());
    if (csubaggstatspendingsessions.is_set || is_set(csubaggstatspendingsessions.operation)) leaf_name_data.push_back(csubaggstatspendingsessions.get_name_leafdata());
    if (csubaggstatsredsessions.is_set || is_set(csubaggstatsredsessions.operation)) leaf_name_data.push_back(csubaggstatsredsessions.get_name_leafdata());
    if (csubaggstatsthrottleengagements.is_set || is_set(csubaggstatsthrottleengagements.operation)) leaf_name_data.push_back(csubaggstatsthrottleengagements.get_name_leafdata());
    if (csubaggstatstotalauthsessions.is_set || is_set(csubaggstatstotalauthsessions.operation)) leaf_name_data.push_back(csubaggstatstotalauthsessions.get_name_leafdata());
    if (csubaggstatstotalcreatedsessions.is_set || is_set(csubaggstatstotalcreatedsessions.operation)) leaf_name_data.push_back(csubaggstatstotalcreatedsessions.get_name_leafdata());
    if (csubaggstatstotaldiscsessions.is_set || is_set(csubaggstatstotaldiscsessions.operation)) leaf_name_data.push_back(csubaggstatstotaldiscsessions.get_name_leafdata());
    if (csubaggstatstotalfailedsessions.is_set || is_set(csubaggstatstotalfailedsessions.operation)) leaf_name_data.push_back(csubaggstatstotalfailedsessions.get_name_leafdata());
    if (csubaggstatstotalflowsup.is_set || is_set(csubaggstatstotalflowsup.operation)) leaf_name_data.push_back(csubaggstatstotalflowsup.get_name_leafdata());
    if (csubaggstatstotallightweightsessions.is_set || is_set(csubaggstatstotallightweightsessions.operation)) leaf_name_data.push_back(csubaggstatstotallightweightsessions.get_name_leafdata());
    if (csubaggstatstotalupsessions.is_set || is_set(csubaggstatstotalupsessions.operation)) leaf_name_data.push_back(csubaggstatstotalupsessions.get_name_leafdata());
    if (csubaggstatsunauthsessions.is_set || is_set(csubaggstatsunauthsessions.operation)) leaf_name_data.push_back(csubaggstatsunauthsessions.get_name_leafdata());
    if (csubaggstatsupsessions.is_set || is_set(csubaggstatsupsessions.operation)) leaf_name_data.push_back(csubaggstatsupsessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csubAggStatsPointType")
    {
        csubaggstatspointtype = value;
    }
    if(value_path == "csubAggStatsPoint")
    {
        csubaggstatspoint = value;
    }
    if(value_path == "csubAggStatsSessionType")
    {
        csubaggstatssessiontype = value;
    }
    if(value_path == "csubAggStatsAuthSessions")
    {
        csubaggstatsauthsessions = value;
    }
    if(value_path == "csubAggStatsAvgSessionRPH")
    {
        csubaggstatsavgsessionrph = value;
    }
    if(value_path == "csubAggStatsAvgSessionRPM")
    {
        csubaggstatsavgsessionrpm = value;
    }
    if(value_path == "csubAggStatsAvgSessionUptime")
    {
        csubaggstatsavgsessionuptime = value;
    }
    if(value_path == "csubAggStatsCurrAuthSessions")
    {
        csubaggstatscurrauthsessions = value;
    }
    if(value_path == "csubAggStatsCurrCreatedSessions")
    {
        csubaggstatscurrcreatedsessions = value;
    }
    if(value_path == "csubAggStatsCurrDiscSessions")
    {
        csubaggstatscurrdiscsessions = value;
    }
    if(value_path == "csubAggStatsCurrFailedSessions")
    {
        csubaggstatscurrfailedsessions = value;
    }
    if(value_path == "csubAggStatsCurrFlowsUp")
    {
        csubaggstatscurrflowsup = value;
    }
    if(value_path == "csubAggStatsCurrInvalidIntervals")
    {
        csubaggstatscurrinvalidintervals = value;
    }
    if(value_path == "csubAggStatsCurrTimeElapsed")
    {
        csubaggstatscurrtimeelapsed = value;
    }
    if(value_path == "csubAggStatsCurrUpSessions")
    {
        csubaggstatscurrupsessions = value;
    }
    if(value_path == "csubAggStatsCurrValidIntervals")
    {
        csubaggstatscurrvalidintervals = value;
    }
    if(value_path == "csubAggStatsDayAuthSessions")
    {
        csubaggstatsdayauthsessions = value;
    }
    if(value_path == "csubAggStatsDayCreatedSessions")
    {
        csubaggstatsdaycreatedsessions = value;
    }
    if(value_path == "csubAggStatsDayDiscSessions")
    {
        csubaggstatsdaydiscsessions = value;
    }
    if(value_path == "csubAggStatsDayFailedSessions")
    {
        csubaggstatsdayfailedsessions = value;
    }
    if(value_path == "csubAggStatsDayUpSessions")
    {
        csubaggstatsdayupsessions = value;
    }
    if(value_path == "csubAggStatsDiscontinuityTime")
    {
        csubaggstatsdiscontinuitytime = value;
    }
    if(value_path == "csubAggStatsHighUpSessions")
    {
        csubaggstatshighupsessions = value;
    }
    if(value_path == "csubAggStatsLightWeightSessions")
    {
        csubaggstatslightweightsessions = value;
    }
    if(value_path == "csubAggStatsPendingSessions")
    {
        csubaggstatspendingsessions = value;
    }
    if(value_path == "csubAggStatsRedSessions")
    {
        csubaggstatsredsessions = value;
    }
    if(value_path == "csubAggStatsThrottleEngagements")
    {
        csubaggstatsthrottleengagements = value;
    }
    if(value_path == "csubAggStatsTotalAuthSessions")
    {
        csubaggstatstotalauthsessions = value;
    }
    if(value_path == "csubAggStatsTotalCreatedSessions")
    {
        csubaggstatstotalcreatedsessions = value;
    }
    if(value_path == "csubAggStatsTotalDiscSessions")
    {
        csubaggstatstotaldiscsessions = value;
    }
    if(value_path == "csubAggStatsTotalFailedSessions")
    {
        csubaggstatstotalfailedsessions = value;
    }
    if(value_path == "csubAggStatsTotalFlowsUp")
    {
        csubaggstatstotalflowsup = value;
    }
    if(value_path == "csubAggStatsTotalLightWeightSessions")
    {
        csubaggstatstotallightweightsessions = value;
    }
    if(value_path == "csubAggStatsTotalUpSessions")
    {
        csubaggstatstotalupsessions = value;
    }
    if(value_path == "csubAggStatsUnAuthSessions")
    {
        csubaggstatsunauthsessions = value;
    }
    if(value_path == "csubAggStatsUpSessions")
    {
        csubaggstatsupsessions = value;
    }
}

CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsinttable()
{
    yang_name = "csubAggStatsIntTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubaggstatsinttable::~Csubaggstatsinttable()
{
}

bool CiscoSubscriberSessionMib::Csubaggstatsinttable::has_data() const
{
    for (std::size_t index=0; index<csubaggstatsintentry_.size(); index++)
    {
        if(csubaggstatsintentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubaggstatsinttable::has_operation() const
{
    for (std::size_t index=0; index<csubaggstatsintentry_.size(); index++)
    {
        if(csubaggstatsintentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSubscriberSessionMib::Csubaggstatsinttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsIntTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubaggstatsinttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubaggstatsinttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubAggStatsIntEntry")
    {
        for(auto const & c : csubaggstatsintentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry>();
        c->parent = this;
        csubaggstatsintentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubaggstatsinttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubaggstatsintentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubaggstatsinttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::Csubaggstatsintentry()
    :
    csubaggstatspointtype{YType::enumeration, "csubAggStatsPointType"},
    csubaggstatspoint{YType::str, "csubAggStatsPoint"},
    csubaggstatssessiontype{YType::enumeration, "csubAggStatsSessionType"},
    csubaggstatsintnumber{YType::uint32, "csubAggStatsIntNumber"},
    csubaggstatsintauthsessions{YType::uint32, "csubAggStatsIntAuthSessions"},
    csubaggstatsintcreatedsessions{YType::uint32, "csubAggStatsIntCreatedSessions"},
    csubaggstatsintdiscsessions{YType::uint32, "csubAggStatsIntDiscSessions"},
    csubaggstatsintfailedsessions{YType::uint32, "csubAggStatsIntFailedSessions"},
    csubaggstatsintupsessions{YType::uint32, "csubAggStatsIntUpSessions"},
    csubaggstatsintvalid{YType::boolean, "csubAggStatsIntValid"}
{
    yang_name = "csubAggStatsIntEntry"; yang_parent_name = "csubAggStatsIntTable";
}

CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::~Csubaggstatsintentry()
{
}

bool CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::has_data() const
{
    return csubaggstatspointtype.is_set
	|| csubaggstatspoint.is_set
	|| csubaggstatssessiontype.is_set
	|| csubaggstatsintnumber.is_set
	|| csubaggstatsintauthsessions.is_set
	|| csubaggstatsintcreatedsessions.is_set
	|| csubaggstatsintdiscsessions.is_set
	|| csubaggstatsintfailedsessions.is_set
	|| csubaggstatsintupsessions.is_set
	|| csubaggstatsintvalid.is_set;
}

bool CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csubaggstatspointtype.operation)
	|| is_set(csubaggstatspoint.operation)
	|| is_set(csubaggstatssessiontype.operation)
	|| is_set(csubaggstatsintnumber.operation)
	|| is_set(csubaggstatsintauthsessions.operation)
	|| is_set(csubaggstatsintcreatedsessions.operation)
	|| is_set(csubaggstatsintdiscsessions.operation)
	|| is_set(csubaggstatsintfailedsessions.operation)
	|| is_set(csubaggstatsintupsessions.operation)
	|| is_set(csubaggstatsintvalid.operation);
}

std::string CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsIntEntry" <<"[csubAggStatsPointType='" <<csubaggstatspointtype <<"']" <<"[csubAggStatsPoint='" <<csubaggstatspoint <<"']" <<"[csubAggStatsSessionType='" <<csubaggstatssessiontype <<"']" <<"[csubAggStatsIntNumber='" <<csubaggstatsintnumber <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubAggStatsIntTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubaggstatspointtype.is_set || is_set(csubaggstatspointtype.operation)) leaf_name_data.push_back(csubaggstatspointtype.get_name_leafdata());
    if (csubaggstatspoint.is_set || is_set(csubaggstatspoint.operation)) leaf_name_data.push_back(csubaggstatspoint.get_name_leafdata());
    if (csubaggstatssessiontype.is_set || is_set(csubaggstatssessiontype.operation)) leaf_name_data.push_back(csubaggstatssessiontype.get_name_leafdata());
    if (csubaggstatsintnumber.is_set || is_set(csubaggstatsintnumber.operation)) leaf_name_data.push_back(csubaggstatsintnumber.get_name_leafdata());
    if (csubaggstatsintauthsessions.is_set || is_set(csubaggstatsintauthsessions.operation)) leaf_name_data.push_back(csubaggstatsintauthsessions.get_name_leafdata());
    if (csubaggstatsintcreatedsessions.is_set || is_set(csubaggstatsintcreatedsessions.operation)) leaf_name_data.push_back(csubaggstatsintcreatedsessions.get_name_leafdata());
    if (csubaggstatsintdiscsessions.is_set || is_set(csubaggstatsintdiscsessions.operation)) leaf_name_data.push_back(csubaggstatsintdiscsessions.get_name_leafdata());
    if (csubaggstatsintfailedsessions.is_set || is_set(csubaggstatsintfailedsessions.operation)) leaf_name_data.push_back(csubaggstatsintfailedsessions.get_name_leafdata());
    if (csubaggstatsintupsessions.is_set || is_set(csubaggstatsintupsessions.operation)) leaf_name_data.push_back(csubaggstatsintupsessions.get_name_leafdata());
    if (csubaggstatsintvalid.is_set || is_set(csubaggstatsintvalid.operation)) leaf_name_data.push_back(csubaggstatsintvalid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubaggstatsinttable::Csubaggstatsintentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csubAggStatsPointType")
    {
        csubaggstatspointtype = value;
    }
    if(value_path == "csubAggStatsPoint")
    {
        csubaggstatspoint = value;
    }
    if(value_path == "csubAggStatsSessionType")
    {
        csubaggstatssessiontype = value;
    }
    if(value_path == "csubAggStatsIntNumber")
    {
        csubaggstatsintnumber = value;
    }
    if(value_path == "csubAggStatsIntAuthSessions")
    {
        csubaggstatsintauthsessions = value;
    }
    if(value_path == "csubAggStatsIntCreatedSessions")
    {
        csubaggstatsintcreatedsessions = value;
    }
    if(value_path == "csubAggStatsIntDiscSessions")
    {
        csubaggstatsintdiscsessions = value;
    }
    if(value_path == "csubAggStatsIntFailedSessions")
    {
        csubaggstatsintfailedsessions = value;
    }
    if(value_path == "csubAggStatsIntUpSessions")
    {
        csubaggstatsintupsessions = value;
    }
    if(value_path == "csubAggStatsIntValid")
    {
        csubaggstatsintvalid = value;
    }
}

CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshtable()
{
    yang_name = "csubAggStatsThreshTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubaggstatsthreshtable::~Csubaggstatsthreshtable()
{
}

bool CiscoSubscriberSessionMib::Csubaggstatsthreshtable::has_data() const
{
    for (std::size_t index=0; index<csubaggstatsthreshentry_.size(); index++)
    {
        if(csubaggstatsthreshentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubaggstatsthreshtable::has_operation() const
{
    for (std::size_t index=0; index<csubaggstatsthreshentry_.size(); index++)
    {
        if(csubaggstatsthreshentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSubscriberSessionMib::Csubaggstatsthreshtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsThreshTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubaggstatsthreshtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubaggstatsthreshtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubAggStatsThreshEntry")
    {
        for(auto const & c : csubaggstatsthreshentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry>();
        c->parent = this;
        csubaggstatsthreshentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubaggstatsthreshtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubaggstatsthreshentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubaggstatsthreshtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::Csubaggstatsthreshentry()
    :
    csubsessionrisingthresh{YType::uint32, "csubSessionRisingThresh"},
    csubsessiondeltapercentfallingthresh{YType::uint32, "csubSessionDeltaPercentFallingThresh"},
    csubsessionfallingthresh{YType::uint32, "csubSessionFallingThresh"},
    csubsessionthreshevalinterval{YType::uint32, "csubSessionThreshEvalInterval"}
{
    yang_name = "csubAggStatsThreshEntry"; yang_parent_name = "csubAggStatsThreshTable";
}

CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::~Csubaggstatsthreshentry()
{
}

bool CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::has_data() const
{
    return csubsessionrisingthresh.is_set
	|| csubsessiondeltapercentfallingthresh.is_set
	|| csubsessionfallingthresh.is_set
	|| csubsessionthreshevalinterval.is_set;
}

bool CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csubsessionrisingthresh.operation)
	|| is_set(csubsessiondeltapercentfallingthresh.operation)
	|| is_set(csubsessionfallingthresh.operation)
	|| is_set(csubsessionthreshevalinterval.operation);
}

std::string CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubAggStatsThreshEntry" <<"[csubSessionRisingThresh='" <<csubsessionrisingthresh <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubAggStatsThreshTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubsessionrisingthresh.is_set || is_set(csubsessionrisingthresh.operation)) leaf_name_data.push_back(csubsessionrisingthresh.get_name_leafdata());
    if (csubsessiondeltapercentfallingthresh.is_set || is_set(csubsessiondeltapercentfallingthresh.operation)) leaf_name_data.push_back(csubsessiondeltapercentfallingthresh.get_name_leafdata());
    if (csubsessionfallingthresh.is_set || is_set(csubsessionfallingthresh.operation)) leaf_name_data.push_back(csubsessionfallingthresh.get_name_leafdata());
    if (csubsessionthreshevalinterval.is_set || is_set(csubsessionthreshevalinterval.operation)) leaf_name_data.push_back(csubsessionthreshevalinterval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubaggstatsthreshtable::Csubaggstatsthreshentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csubSessionRisingThresh")
    {
        csubsessionrisingthresh = value;
    }
    if(value_path == "csubSessionDeltaPercentFallingThresh")
    {
        csubsessiondeltapercentfallingthresh = value;
    }
    if(value_path == "csubSessionFallingThresh")
    {
        csubsessionfallingthresh = value;
    }
    if(value_path == "csubSessionThreshEvalInterval")
    {
        csubsessionthreshevalinterval = value;
    }
}

CiscoSubscriberSessionMib::Csubjobtable::Csubjobtable()
{
    yang_name = "csubJobTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubjobtable::~Csubjobtable()
{
}

bool CiscoSubscriberSessionMib::Csubjobtable::has_data() const
{
    for (std::size_t index=0; index<csubjobentry_.size(); index++)
    {
        if(csubjobentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubjobtable::has_operation() const
{
    for (std::size_t index=0; index<csubjobentry_.size(); index++)
    {
        if(csubjobentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSubscriberSessionMib::Csubjobtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubJobEntry")
    {
        for(auto const & c : csubjobentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry>();
        c->parent = this;
        csubjobentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubjobentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubjobtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::Csubjobentry()
    :
    csubjobid{YType::uint32, "csubJobId"},
    csubjobcontrol{YType::enumeration, "csubJobControl"},
    csubjobfinishedreason{YType::enumeration, "csubJobFinishedReason"},
    csubjobfinishedtime{YType::uint32, "csubJobFinishedTime"},
    csubjobstartedtime{YType::uint32, "csubJobStartedTime"},
    csubjobstate{YType::enumeration, "csubJobState"},
    csubjobstatus{YType::enumeration, "csubJobStatus"},
    csubjobstorage{YType::enumeration, "csubJobStorage"},
    csubjobtype{YType::enumeration, "csubJobType"}
{
    yang_name = "csubJobEntry"; yang_parent_name = "csubJobTable";
}

CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::~Csubjobentry()
{
}

bool CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::has_data() const
{
    return csubjobid.is_set
	|| csubjobcontrol.is_set
	|| csubjobfinishedreason.is_set
	|| csubjobfinishedtime.is_set
	|| csubjobstartedtime.is_set
	|| csubjobstate.is_set
	|| csubjobstatus.is_set
	|| csubjobstorage.is_set
	|| csubjobtype.is_set;
}

bool CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csubjobid.operation)
	|| is_set(csubjobcontrol.operation)
	|| is_set(csubjobfinishedreason.operation)
	|| is_set(csubjobfinishedtime.operation)
	|| is_set(csubjobstartedtime.operation)
	|| is_set(csubjobstate.operation)
	|| is_set(csubjobstatus.operation)
	|| is_set(csubjobstorage.operation)
	|| is_set(csubjobtype.operation);
}

std::string CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobEntry" <<"[csubJobId='" <<csubjobid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubJobTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobid.is_set || is_set(csubjobid.operation)) leaf_name_data.push_back(csubjobid.get_name_leafdata());
    if (csubjobcontrol.is_set || is_set(csubjobcontrol.operation)) leaf_name_data.push_back(csubjobcontrol.get_name_leafdata());
    if (csubjobfinishedreason.is_set || is_set(csubjobfinishedreason.operation)) leaf_name_data.push_back(csubjobfinishedreason.get_name_leafdata());
    if (csubjobfinishedtime.is_set || is_set(csubjobfinishedtime.operation)) leaf_name_data.push_back(csubjobfinishedtime.get_name_leafdata());
    if (csubjobstartedtime.is_set || is_set(csubjobstartedtime.operation)) leaf_name_data.push_back(csubjobstartedtime.get_name_leafdata());
    if (csubjobstate.is_set || is_set(csubjobstate.operation)) leaf_name_data.push_back(csubjobstate.get_name_leafdata());
    if (csubjobstatus.is_set || is_set(csubjobstatus.operation)) leaf_name_data.push_back(csubjobstatus.get_name_leafdata());
    if (csubjobstorage.is_set || is_set(csubjobstorage.operation)) leaf_name_data.push_back(csubjobstorage.get_name_leafdata());
    if (csubjobtype.is_set || is_set(csubjobtype.operation)) leaf_name_data.push_back(csubjobtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csubJobId")
    {
        csubjobid = value;
    }
    if(value_path == "csubJobControl")
    {
        csubjobcontrol = value;
    }
    if(value_path == "csubJobFinishedReason")
    {
        csubjobfinishedreason = value;
    }
    if(value_path == "csubJobFinishedTime")
    {
        csubjobfinishedtime = value;
    }
    if(value_path == "csubJobStartedTime")
    {
        csubjobstartedtime = value;
    }
    if(value_path == "csubJobState")
    {
        csubjobstate = value;
    }
    if(value_path == "csubJobStatus")
    {
        csubjobstatus = value;
    }
    if(value_path == "csubJobStorage")
    {
        csubjobstorage = value;
    }
    if(value_path == "csubJobType")
    {
        csubjobtype = value;
    }
}

CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamstable()
{
    yang_name = "csubJobMatchParamsTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubjobmatchparamstable::~Csubjobmatchparamstable()
{
}

bool CiscoSubscriberSessionMib::Csubjobmatchparamstable::has_data() const
{
    for (std::size_t index=0; index<csubjobmatchparamsentry_.size(); index++)
    {
        if(csubjobmatchparamsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubjobmatchparamstable::has_operation() const
{
    for (std::size_t index=0; index<csubjobmatchparamsentry_.size(); index++)
    {
        if(csubjobmatchparamsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSubscriberSessionMib::Csubjobmatchparamstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobMatchParamsTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobmatchparamstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobmatchparamstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubJobMatchParamsEntry")
    {
        for(auto const & c : csubjobmatchparamsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry>();
        c->parent = this;
        csubjobmatchparamsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobmatchparamstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubjobmatchparamsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubjobmatchparamstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::Csubjobmatchparamsentry()
    :
    csubjobid{YType::str, "csubJobId"},
    csubjobmatchacctsessionid{YType::uint32, "csubJobMatchAcctSessionId"},
    csubjobmatchauthenticated{YType::boolean, "csubJobMatchAuthenticated"},
    csubjobmatchcircuitid{YType::str, "csubJobMatchCircuitId"},
    csubjobmatchdanglingduration{YType::uint32, "csubJobMatchDanglingDuration"},
    csubjobmatchdhcpclass{YType::str, "csubJobMatchDhcpClass"},
    csubjobmatchdnis{YType::str, "csubJobMatchDnis"},
    csubjobmatchdomain{YType::str, "csubJobMatchDomain"},
    csubjobmatchdomainipaddr{YType::str, "csubJobMatchDomainIpAddr"},
    csubjobmatchdomainipaddrtype{YType::enumeration, "csubJobMatchDomainIpAddrType"},
    csubjobmatchdomainipmask{YType::str, "csubJobMatchDomainIpMask"},
    csubjobmatchdomainvrf{YType::str, "csubJobMatchDomainVrf"},
    csubjobmatchidentities{YType::bits, "csubJobMatchIdentities"},
    csubjobmatchmacaddress{YType::str, "csubJobMatchMacAddress"},
    csubjobmatchmedia{YType::enumeration, "csubJobMatchMedia"},
    csubjobmatchmlpnegotiated{YType::boolean, "csubJobMatchMlpNegotiated"},
    csubjobmatchnasport{YType::str, "csubJobMatchNasPort"},
    csubjobmatchnativeipaddr{YType::str, "csubJobMatchNativeIpAddr"},
    csubjobmatchnativeipaddrtype{YType::enumeration, "csubJobMatchNativeIpAddrType"},
    csubjobmatchnativeipmask{YType::str, "csubJobMatchNativeIpMask"},
    csubjobmatchnativevrf{YType::str, "csubJobMatchNativeVrf"},
    csubjobmatchotherparams{YType::bits, "csubJobMatchOtherParams"},
    csubjobmatchpbhk{YType::str, "csubJobMatchPbhk"},
    csubjobmatchprotocol{YType::enumeration, "csubJobMatchProtocol"},
    csubjobmatchredundancymode{YType::enumeration, "csubJobMatchRedundancyMode"},
    csubjobmatchremoteid{YType::str, "csubJobMatchRemoteId"},
    csubjobmatchservicename{YType::str, "csubJobMatchServiceName"},
    csubjobmatchstate{YType::enumeration, "csubJobMatchState"},
    csubjobmatchsubscriberlabel{YType::uint32, "csubJobMatchSubscriberLabel"},
    csubjobmatchtunnelname{YType::str, "csubJobMatchTunnelName"},
    csubjobmatchusername{YType::str, "csubJobMatchUsername"}
{
    yang_name = "csubJobMatchParamsEntry"; yang_parent_name = "csubJobMatchParamsTable";
}

CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::~Csubjobmatchparamsentry()
{
}

bool CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::has_data() const
{
    return csubjobid.is_set
	|| csubjobmatchacctsessionid.is_set
	|| csubjobmatchauthenticated.is_set
	|| csubjobmatchcircuitid.is_set
	|| csubjobmatchdanglingduration.is_set
	|| csubjobmatchdhcpclass.is_set
	|| csubjobmatchdnis.is_set
	|| csubjobmatchdomain.is_set
	|| csubjobmatchdomainipaddr.is_set
	|| csubjobmatchdomainipaddrtype.is_set
	|| csubjobmatchdomainipmask.is_set
	|| csubjobmatchdomainvrf.is_set
	|| csubjobmatchidentities.is_set
	|| csubjobmatchmacaddress.is_set
	|| csubjobmatchmedia.is_set
	|| csubjobmatchmlpnegotiated.is_set
	|| csubjobmatchnasport.is_set
	|| csubjobmatchnativeipaddr.is_set
	|| csubjobmatchnativeipaddrtype.is_set
	|| csubjobmatchnativeipmask.is_set
	|| csubjobmatchnativevrf.is_set
	|| csubjobmatchotherparams.is_set
	|| csubjobmatchpbhk.is_set
	|| csubjobmatchprotocol.is_set
	|| csubjobmatchredundancymode.is_set
	|| csubjobmatchremoteid.is_set
	|| csubjobmatchservicename.is_set
	|| csubjobmatchstate.is_set
	|| csubjobmatchsubscriberlabel.is_set
	|| csubjobmatchtunnelname.is_set
	|| csubjobmatchusername.is_set;
}

bool CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csubjobid.operation)
	|| is_set(csubjobmatchacctsessionid.operation)
	|| is_set(csubjobmatchauthenticated.operation)
	|| is_set(csubjobmatchcircuitid.operation)
	|| is_set(csubjobmatchdanglingduration.operation)
	|| is_set(csubjobmatchdhcpclass.operation)
	|| is_set(csubjobmatchdnis.operation)
	|| is_set(csubjobmatchdomain.operation)
	|| is_set(csubjobmatchdomainipaddr.operation)
	|| is_set(csubjobmatchdomainipaddrtype.operation)
	|| is_set(csubjobmatchdomainipmask.operation)
	|| is_set(csubjobmatchdomainvrf.operation)
	|| is_set(csubjobmatchidentities.operation)
	|| is_set(csubjobmatchmacaddress.operation)
	|| is_set(csubjobmatchmedia.operation)
	|| is_set(csubjobmatchmlpnegotiated.operation)
	|| is_set(csubjobmatchnasport.operation)
	|| is_set(csubjobmatchnativeipaddr.operation)
	|| is_set(csubjobmatchnativeipaddrtype.operation)
	|| is_set(csubjobmatchnativeipmask.operation)
	|| is_set(csubjobmatchnativevrf.operation)
	|| is_set(csubjobmatchotherparams.operation)
	|| is_set(csubjobmatchpbhk.operation)
	|| is_set(csubjobmatchprotocol.operation)
	|| is_set(csubjobmatchredundancymode.operation)
	|| is_set(csubjobmatchremoteid.operation)
	|| is_set(csubjobmatchservicename.operation)
	|| is_set(csubjobmatchstate.operation)
	|| is_set(csubjobmatchsubscriberlabel.operation)
	|| is_set(csubjobmatchtunnelname.operation)
	|| is_set(csubjobmatchusername.operation);
}

std::string CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobMatchParamsEntry" <<"[csubJobId='" <<csubjobid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubJobMatchParamsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobid.is_set || is_set(csubjobid.operation)) leaf_name_data.push_back(csubjobid.get_name_leafdata());
    if (csubjobmatchacctsessionid.is_set || is_set(csubjobmatchacctsessionid.operation)) leaf_name_data.push_back(csubjobmatchacctsessionid.get_name_leafdata());
    if (csubjobmatchauthenticated.is_set || is_set(csubjobmatchauthenticated.operation)) leaf_name_data.push_back(csubjobmatchauthenticated.get_name_leafdata());
    if (csubjobmatchcircuitid.is_set || is_set(csubjobmatchcircuitid.operation)) leaf_name_data.push_back(csubjobmatchcircuitid.get_name_leafdata());
    if (csubjobmatchdanglingduration.is_set || is_set(csubjobmatchdanglingduration.operation)) leaf_name_data.push_back(csubjobmatchdanglingduration.get_name_leafdata());
    if (csubjobmatchdhcpclass.is_set || is_set(csubjobmatchdhcpclass.operation)) leaf_name_data.push_back(csubjobmatchdhcpclass.get_name_leafdata());
    if (csubjobmatchdnis.is_set || is_set(csubjobmatchdnis.operation)) leaf_name_data.push_back(csubjobmatchdnis.get_name_leafdata());
    if (csubjobmatchdomain.is_set || is_set(csubjobmatchdomain.operation)) leaf_name_data.push_back(csubjobmatchdomain.get_name_leafdata());
    if (csubjobmatchdomainipaddr.is_set || is_set(csubjobmatchdomainipaddr.operation)) leaf_name_data.push_back(csubjobmatchdomainipaddr.get_name_leafdata());
    if (csubjobmatchdomainipaddrtype.is_set || is_set(csubjobmatchdomainipaddrtype.operation)) leaf_name_data.push_back(csubjobmatchdomainipaddrtype.get_name_leafdata());
    if (csubjobmatchdomainipmask.is_set || is_set(csubjobmatchdomainipmask.operation)) leaf_name_data.push_back(csubjobmatchdomainipmask.get_name_leafdata());
    if (csubjobmatchdomainvrf.is_set || is_set(csubjobmatchdomainvrf.operation)) leaf_name_data.push_back(csubjobmatchdomainvrf.get_name_leafdata());
    if (csubjobmatchidentities.is_set || is_set(csubjobmatchidentities.operation)) leaf_name_data.push_back(csubjobmatchidentities.get_name_leafdata());
    if (csubjobmatchmacaddress.is_set || is_set(csubjobmatchmacaddress.operation)) leaf_name_data.push_back(csubjobmatchmacaddress.get_name_leafdata());
    if (csubjobmatchmedia.is_set || is_set(csubjobmatchmedia.operation)) leaf_name_data.push_back(csubjobmatchmedia.get_name_leafdata());
    if (csubjobmatchmlpnegotiated.is_set || is_set(csubjobmatchmlpnegotiated.operation)) leaf_name_data.push_back(csubjobmatchmlpnegotiated.get_name_leafdata());
    if (csubjobmatchnasport.is_set || is_set(csubjobmatchnasport.operation)) leaf_name_data.push_back(csubjobmatchnasport.get_name_leafdata());
    if (csubjobmatchnativeipaddr.is_set || is_set(csubjobmatchnativeipaddr.operation)) leaf_name_data.push_back(csubjobmatchnativeipaddr.get_name_leafdata());
    if (csubjobmatchnativeipaddrtype.is_set || is_set(csubjobmatchnativeipaddrtype.operation)) leaf_name_data.push_back(csubjobmatchnativeipaddrtype.get_name_leafdata());
    if (csubjobmatchnativeipmask.is_set || is_set(csubjobmatchnativeipmask.operation)) leaf_name_data.push_back(csubjobmatchnativeipmask.get_name_leafdata());
    if (csubjobmatchnativevrf.is_set || is_set(csubjobmatchnativevrf.operation)) leaf_name_data.push_back(csubjobmatchnativevrf.get_name_leafdata());
    if (csubjobmatchotherparams.is_set || is_set(csubjobmatchotherparams.operation)) leaf_name_data.push_back(csubjobmatchotherparams.get_name_leafdata());
    if (csubjobmatchpbhk.is_set || is_set(csubjobmatchpbhk.operation)) leaf_name_data.push_back(csubjobmatchpbhk.get_name_leafdata());
    if (csubjobmatchprotocol.is_set || is_set(csubjobmatchprotocol.operation)) leaf_name_data.push_back(csubjobmatchprotocol.get_name_leafdata());
    if (csubjobmatchredundancymode.is_set || is_set(csubjobmatchredundancymode.operation)) leaf_name_data.push_back(csubjobmatchredundancymode.get_name_leafdata());
    if (csubjobmatchremoteid.is_set || is_set(csubjobmatchremoteid.operation)) leaf_name_data.push_back(csubjobmatchremoteid.get_name_leafdata());
    if (csubjobmatchservicename.is_set || is_set(csubjobmatchservicename.operation)) leaf_name_data.push_back(csubjobmatchservicename.get_name_leafdata());
    if (csubjobmatchstate.is_set || is_set(csubjobmatchstate.operation)) leaf_name_data.push_back(csubjobmatchstate.get_name_leafdata());
    if (csubjobmatchsubscriberlabel.is_set || is_set(csubjobmatchsubscriberlabel.operation)) leaf_name_data.push_back(csubjobmatchsubscriberlabel.get_name_leafdata());
    if (csubjobmatchtunnelname.is_set || is_set(csubjobmatchtunnelname.operation)) leaf_name_data.push_back(csubjobmatchtunnelname.get_name_leafdata());
    if (csubjobmatchusername.is_set || is_set(csubjobmatchusername.operation)) leaf_name_data.push_back(csubjobmatchusername.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubjobmatchparamstable::Csubjobmatchparamsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csubJobId")
    {
        csubjobid = value;
    }
    if(value_path == "csubJobMatchAcctSessionId")
    {
        csubjobmatchacctsessionid = value;
    }
    if(value_path == "csubJobMatchAuthenticated")
    {
        csubjobmatchauthenticated = value;
    }
    if(value_path == "csubJobMatchCircuitId")
    {
        csubjobmatchcircuitid = value;
    }
    if(value_path == "csubJobMatchDanglingDuration")
    {
        csubjobmatchdanglingduration = value;
    }
    if(value_path == "csubJobMatchDhcpClass")
    {
        csubjobmatchdhcpclass = value;
    }
    if(value_path == "csubJobMatchDnis")
    {
        csubjobmatchdnis = value;
    }
    if(value_path == "csubJobMatchDomain")
    {
        csubjobmatchdomain = value;
    }
    if(value_path == "csubJobMatchDomainIpAddr")
    {
        csubjobmatchdomainipaddr = value;
    }
    if(value_path == "csubJobMatchDomainIpAddrType")
    {
        csubjobmatchdomainipaddrtype = value;
    }
    if(value_path == "csubJobMatchDomainIpMask")
    {
        csubjobmatchdomainipmask = value;
    }
    if(value_path == "csubJobMatchDomainVrf")
    {
        csubjobmatchdomainvrf = value;
    }
    if(value_path == "csubJobMatchIdentities")
    {
        csubjobmatchidentities[value] = true;
    }
    if(value_path == "csubJobMatchMacAddress")
    {
        csubjobmatchmacaddress = value;
    }
    if(value_path == "csubJobMatchMedia")
    {
        csubjobmatchmedia = value;
    }
    if(value_path == "csubJobMatchMlpNegotiated")
    {
        csubjobmatchmlpnegotiated = value;
    }
    if(value_path == "csubJobMatchNasPort")
    {
        csubjobmatchnasport = value;
    }
    if(value_path == "csubJobMatchNativeIpAddr")
    {
        csubjobmatchnativeipaddr = value;
    }
    if(value_path == "csubJobMatchNativeIpAddrType")
    {
        csubjobmatchnativeipaddrtype = value;
    }
    if(value_path == "csubJobMatchNativeIpMask")
    {
        csubjobmatchnativeipmask = value;
    }
    if(value_path == "csubJobMatchNativeVrf")
    {
        csubjobmatchnativevrf = value;
    }
    if(value_path == "csubJobMatchOtherParams")
    {
        csubjobmatchotherparams[value] = true;
    }
    if(value_path == "csubJobMatchPbhk")
    {
        csubjobmatchpbhk = value;
    }
    if(value_path == "csubJobMatchProtocol")
    {
        csubjobmatchprotocol = value;
    }
    if(value_path == "csubJobMatchRedundancyMode")
    {
        csubjobmatchredundancymode = value;
    }
    if(value_path == "csubJobMatchRemoteId")
    {
        csubjobmatchremoteid = value;
    }
    if(value_path == "csubJobMatchServiceName")
    {
        csubjobmatchservicename = value;
    }
    if(value_path == "csubJobMatchState")
    {
        csubjobmatchstate = value;
    }
    if(value_path == "csubJobMatchSubscriberLabel")
    {
        csubjobmatchsubscriberlabel = value;
    }
    if(value_path == "csubJobMatchTunnelName")
    {
        csubjobmatchtunnelname = value;
    }
    if(value_path == "csubJobMatchUsername")
    {
        csubjobmatchusername = value;
    }
}

CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamstable()
{
    yang_name = "csubJobQueryParamsTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubjobqueryparamstable::~Csubjobqueryparamstable()
{
}

bool CiscoSubscriberSessionMib::Csubjobqueryparamstable::has_data() const
{
    for (std::size_t index=0; index<csubjobqueryparamsentry_.size(); index++)
    {
        if(csubjobqueryparamsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubjobqueryparamstable::has_operation() const
{
    for (std::size_t index=0; index<csubjobqueryparamsentry_.size(); index++)
    {
        if(csubjobqueryparamsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSubscriberSessionMib::Csubjobqueryparamstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobQueryParamsTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobqueryparamstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobqueryparamstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubJobQueryParamsEntry")
    {
        for(auto const & c : csubjobqueryparamsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry>();
        c->parent = this;
        csubjobqueryparamsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobqueryparamstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubjobqueryparamsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubjobqueryparamstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::Csubjobqueryparamsentry()
    :
    csubjobid{YType::str, "csubJobId"},
    csubjobqueryresultingreportsize{YType::uint32, "csubJobQueryResultingReportSize"},
    csubjobquerysortkey1{YType::enumeration, "csubJobQuerySortKey1"},
    csubjobquerysortkey2{YType::enumeration, "csubJobQuerySortKey2"},
    csubjobquerysortkey3{YType::enumeration, "csubJobQuerySortKey3"}
{
    yang_name = "csubJobQueryParamsEntry"; yang_parent_name = "csubJobQueryParamsTable";
}

CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::~Csubjobqueryparamsentry()
{
}

bool CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::has_data() const
{
    return csubjobid.is_set
	|| csubjobqueryresultingreportsize.is_set
	|| csubjobquerysortkey1.is_set
	|| csubjobquerysortkey2.is_set
	|| csubjobquerysortkey3.is_set;
}

bool CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csubjobid.operation)
	|| is_set(csubjobqueryresultingreportsize.operation)
	|| is_set(csubjobquerysortkey1.operation)
	|| is_set(csubjobquerysortkey2.operation)
	|| is_set(csubjobquerysortkey3.operation);
}

std::string CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobQueryParamsEntry" <<"[csubJobId='" <<csubjobid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubJobQueryParamsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobid.is_set || is_set(csubjobid.operation)) leaf_name_data.push_back(csubjobid.get_name_leafdata());
    if (csubjobqueryresultingreportsize.is_set || is_set(csubjobqueryresultingreportsize.operation)) leaf_name_data.push_back(csubjobqueryresultingreportsize.get_name_leafdata());
    if (csubjobquerysortkey1.is_set || is_set(csubjobquerysortkey1.operation)) leaf_name_data.push_back(csubjobquerysortkey1.get_name_leafdata());
    if (csubjobquerysortkey2.is_set || is_set(csubjobquerysortkey2.operation)) leaf_name_data.push_back(csubjobquerysortkey2.get_name_leafdata());
    if (csubjobquerysortkey3.is_set || is_set(csubjobquerysortkey3.operation)) leaf_name_data.push_back(csubjobquerysortkey3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubjobqueryparamstable::Csubjobqueryparamsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csubJobId")
    {
        csubjobid = value;
    }
    if(value_path == "csubJobQueryResultingReportSize")
    {
        csubjobqueryresultingreportsize = value;
    }
    if(value_path == "csubJobQuerySortKey1")
    {
        csubjobquerysortkey1 = value;
    }
    if(value_path == "csubJobQuerySortKey2")
    {
        csubjobquerysortkey2 = value;
    }
    if(value_path == "csubJobQuerySortKey3")
    {
        csubjobquerysortkey3 = value;
    }
}

CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueuetable()
{
    yang_name = "csubJobQueueTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubjobqueuetable::~Csubjobqueuetable()
{
}

bool CiscoSubscriberSessionMib::Csubjobqueuetable::has_data() const
{
    for (std::size_t index=0; index<csubjobqueueentry_.size(); index++)
    {
        if(csubjobqueueentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubjobqueuetable::has_operation() const
{
    for (std::size_t index=0; index<csubjobqueueentry_.size(); index++)
    {
        if(csubjobqueueentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSubscriberSessionMib::Csubjobqueuetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobQueueTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobqueuetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobqueuetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubJobQueueEntry")
    {
        for(auto const & c : csubjobqueueentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry>();
        c->parent = this;
        csubjobqueueentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobqueuetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubjobqueueentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubjobqueuetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::Csubjobqueueentry()
    :
    csubjobqueuenumber{YType::uint32, "csubJobQueueNumber"},
    csubjobqueuejobid{YType::uint32, "csubJobQueueJobId"}
{
    yang_name = "csubJobQueueEntry"; yang_parent_name = "csubJobQueueTable";
}

CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::~Csubjobqueueentry()
{
}

bool CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::has_data() const
{
    return csubjobqueuenumber.is_set
	|| csubjobqueuejobid.is_set;
}

bool CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csubjobqueuenumber.operation)
	|| is_set(csubjobqueuejobid.operation);
}

std::string CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobQueueEntry" <<"[csubJobQueueNumber='" <<csubjobqueuenumber <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubJobQueueTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobqueuenumber.is_set || is_set(csubjobqueuenumber.operation)) leaf_name_data.push_back(csubjobqueuenumber.get_name_leafdata());
    if (csubjobqueuejobid.is_set || is_set(csubjobqueuejobid.operation)) leaf_name_data.push_back(csubjobqueuejobid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubjobqueuetable::Csubjobqueueentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csubJobQueueNumber")
    {
        csubjobqueuenumber = value;
    }
    if(value_path == "csubJobQueueJobId")
    {
        csubjobqueuejobid = value;
    }
}

CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreporttable()
{
    yang_name = "csubJobReportTable"; yang_parent_name = "CISCO-SUBSCRIBER-SESSION-MIB";
}

CiscoSubscriberSessionMib::Csubjobreporttable::~Csubjobreporttable()
{
}

bool CiscoSubscriberSessionMib::Csubjobreporttable::has_data() const
{
    for (std::size_t index=0; index<csubjobreportentry_.size(); index++)
    {
        if(csubjobreportentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoSubscriberSessionMib::Csubjobreporttable::has_operation() const
{
    for (std::size_t index=0; index<csubjobreportentry_.size(); index++)
    {
        if(csubjobreportentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoSubscriberSessionMib::Csubjobreporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobReportTable";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobreporttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobreporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csubJobReportEntry")
    {
        for(auto const & c : csubjobreportentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry>();
        c->parent = this;
        csubjobreportentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobreporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csubjobreportentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoSubscriberSessionMib::Csubjobreporttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::Csubjobreportentry()
    :
    csubjobid{YType::str, "csubJobId"},
    csubjobreportid{YType::uint32, "csubJobReportId"},
    csubjobreportsession{YType::int32, "csubJobReportSession"}
{
    yang_name = "csubJobReportEntry"; yang_parent_name = "csubJobReportTable";
}

CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::~Csubjobreportentry()
{
}

bool CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::has_data() const
{
    return csubjobid.is_set
	|| csubjobreportid.is_set
	|| csubjobreportsession.is_set;
}

bool CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::has_operation() const
{
    return is_set(operation)
	|| is_set(csubjobid.operation)
	|| is_set(csubjobreportid.operation)
	|| is_set(csubjobreportsession.operation);
}

std::string CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csubJobReportEntry" <<"[csubJobId='" <<csubjobid <<"']" <<"[csubJobReportId='" <<csubjobreportid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-SUBSCRIBER-SESSION-MIB:CISCO-SUBSCRIBER-SESSION-MIB/csubJobReportTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csubjobid.is_set || is_set(csubjobid.operation)) leaf_name_data.push_back(csubjobid.get_name_leafdata());
    if (csubjobreportid.is_set || is_set(csubjobreportid.operation)) leaf_name_data.push_back(csubjobreportid.get_name_leafdata());
    if (csubjobreportsession.is_set || is_set(csubjobreportsession.operation)) leaf_name_data.push_back(csubjobreportsession.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoSubscriberSessionMib::Csubjobreporttable::Csubjobreportentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "csubJobId")
    {
        csubjobid = value;
    }
    if(value_path == "csubJobReportId")
    {
        csubjobreportid = value;
    }
    if(value_path == "csubJobReportSession")
    {
        csubjobreportsession = value;
    }
}

const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::CsubsessionipaddrassignmentEnum::none {1, "none"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::CsubsessionipaddrassignmentEnum::other {2, "other"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::CsubsessionipaddrassignmentEnum::static_ {3, "static"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::CsubsessionipaddrassignmentEnum::localPool {4, "localPool"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::CsubsessionipaddrassignmentEnum::dhcpv4 {5, "dhcpv4"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::CsubsessionipaddrassignmentEnum::dhcpv6 {6, "dhcpv6"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::CsubsessionipaddrassignmentEnum::userProfileIpAddr {7, "userProfileIpAddr"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::CsubsessionipaddrassignmentEnum::userProfileIpSubnet {8, "userProfileIpSubnet"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubsessiontable::Csubsessionentry::CsubsessionipaddrassignmentEnum::userProfileNamedPool {9, "userProfileNamedPool"};

const Enum::YLeaf CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::CsubaggstatspointtypeEnum::physical {1, "physical"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubaggstatstable::Csubaggstatsentry::CsubaggstatspointtypeEnum::interface {2, "interface"};

const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobtypeEnum::noop {1, "noop"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobtypeEnum::query {2, "query"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobtypeEnum::clear {3, "clear"};

const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobcontrolEnum::noop {1, "noop"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobcontrolEnum::start {2, "start"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobcontrolEnum::abort {3, "abort"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobcontrolEnum::release {4, "release"};

const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobstateEnum::idle {1, "idle"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobstateEnum::pending {2, "pending"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobstateEnum::inProgress {3, "inProgress"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobstateEnum::finished {4, "finished"};

const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobfinishedreasonEnum::invalid {1, "invalid"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobfinishedreasonEnum::other {2, "other"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobfinishedreasonEnum::normal {3, "normal"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobfinishedreasonEnum::aborted {4, "aborted"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobfinishedreasonEnum::insufficientResources {5, "insufficientResources"};
const Enum::YLeaf CiscoSubscriberSessionMib::Csubjobtable::Csubjobentry::CsubjobfinishedreasonEnum::error {6, "error"};


}
}

