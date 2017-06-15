
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DRAFT_MSDP_MIB.hpp"

namespace ydk {
namespace DRAFT_MSDP_MIB {

DraftMsdpMib::DraftMsdpMib()
    :
    msdp_(std::make_shared<DraftMsdpMib::Msdp>())
	,msdppeertable_(std::make_shared<DraftMsdpMib::Msdppeertable>())
	,msdprequeststable_(std::make_shared<DraftMsdpMib::Msdprequeststable>())
	,msdpsacachetable_(std::make_shared<DraftMsdpMib::Msdpsacachetable>())
{
    msdp_->parent = this;

    msdppeertable_->parent = this;

    msdprequeststable_->parent = this;

    msdpsacachetable_->parent = this;

    yang_name = "DRAFT-MSDP-MIB"; yang_parent_name = "DRAFT-MSDP-MIB";
}

DraftMsdpMib::~DraftMsdpMib()
{
}

bool DraftMsdpMib::has_data() const
{
    return (msdp_ !=  nullptr && msdp_->has_data())
	|| (msdppeertable_ !=  nullptr && msdppeertable_->has_data())
	|| (msdprequeststable_ !=  nullptr && msdprequeststable_->has_data())
	|| (msdpsacachetable_ !=  nullptr && msdpsacachetable_->has_data());
}

bool DraftMsdpMib::has_operation() const
{
    return is_set(operation)
	|| (msdp_ !=  nullptr && msdp_->has_operation())
	|| (msdppeertable_ !=  nullptr && msdppeertable_->has_operation())
	|| (msdprequeststable_ !=  nullptr && msdprequeststable_->has_operation())
	|| (msdpsacachetable_ !=  nullptr && msdpsacachetable_->has_operation());
}

std::string DraftMsdpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DRAFT-MSDP-MIB:DRAFT-MSDP-MIB";

    return path_buffer.str();

}

const EntityPath DraftMsdpMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> DraftMsdpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msdp")
    {
        if(msdp_ == nullptr)
        {
            msdp_ = std::make_shared<DraftMsdpMib::Msdp>();
        }
        return msdp_;
    }

    if(child_yang_name == "msdpPeerTable")
    {
        if(msdppeertable_ == nullptr)
        {
            msdppeertable_ = std::make_shared<DraftMsdpMib::Msdppeertable>();
        }
        return msdppeertable_;
    }

    if(child_yang_name == "msdpRequestsTable")
    {
        if(msdprequeststable_ == nullptr)
        {
            msdprequeststable_ = std::make_shared<DraftMsdpMib::Msdprequeststable>();
        }
        return msdprequeststable_;
    }

    if(child_yang_name == "msdpSACacheTable")
    {
        if(msdpsacachetable_ == nullptr)
        {
            msdpsacachetable_ = std::make_shared<DraftMsdpMib::Msdpsacachetable>();
        }
        return msdpsacachetable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DraftMsdpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(msdp_ != nullptr)
    {
        children["msdp"] = msdp_;
    }

    if(msdppeertable_ != nullptr)
    {
        children["msdpPeerTable"] = msdppeertable_;
    }

    if(msdprequeststable_ != nullptr)
    {
        children["msdpRequestsTable"] = msdprequeststable_;
    }

    if(msdpsacachetable_ != nullptr)
    {
        children["msdpSACacheTable"] = msdpsacachetable_;
    }

    return children;
}

void DraftMsdpMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> DraftMsdpMib::clone_ptr() const
{
    return std::make_shared<DraftMsdpMib>();
}

std::string DraftMsdpMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DraftMsdpMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DraftMsdpMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

DraftMsdpMib::Msdp::Msdp()
    :
    msdpcachelifetime{YType::uint32, "msdpCacheLifetime"},
    msdpenabled{YType::boolean, "msdpEnabled"},
    msdpnumsacacheentries{YType::uint32, "msdpNumSACacheEntries"},
    msdpsaholddownperiod{YType::int32, "msdpSAHoldDownPeriod"}
{
    yang_name = "msdp"; yang_parent_name = "DRAFT-MSDP-MIB";
}

DraftMsdpMib::Msdp::~Msdp()
{
}

bool DraftMsdpMib::Msdp::has_data() const
{
    return msdpcachelifetime.is_set
	|| msdpenabled.is_set
	|| msdpnumsacacheentries.is_set
	|| msdpsaholddownperiod.is_set;
}

bool DraftMsdpMib::Msdp::has_operation() const
{
    return is_set(operation)
	|| is_set(msdpcachelifetime.operation)
	|| is_set(msdpenabled.operation)
	|| is_set(msdpnumsacacheentries.operation)
	|| is_set(msdpsaholddownperiod.operation);
}

std::string DraftMsdpMib::Msdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdp";

    return path_buffer.str();

}

const EntityPath DraftMsdpMib::Msdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DRAFT-MSDP-MIB:DRAFT-MSDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msdpcachelifetime.is_set || is_set(msdpcachelifetime.operation)) leaf_name_data.push_back(msdpcachelifetime.get_name_leafdata());
    if (msdpenabled.is_set || is_set(msdpenabled.operation)) leaf_name_data.push_back(msdpenabled.get_name_leafdata());
    if (msdpnumsacacheentries.is_set || is_set(msdpnumsacacheentries.operation)) leaf_name_data.push_back(msdpnumsacacheentries.get_name_leafdata());
    if (msdpsaholddownperiod.is_set || is_set(msdpsaholddownperiod.operation)) leaf_name_data.push_back(msdpsaholddownperiod.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DraftMsdpMib::Msdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DraftMsdpMib::Msdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DraftMsdpMib::Msdp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msdpCacheLifetime")
    {
        msdpcachelifetime = value;
    }
    if(value_path == "msdpEnabled")
    {
        msdpenabled = value;
    }
    if(value_path == "msdpNumSACacheEntries")
    {
        msdpnumsacacheentries = value;
    }
    if(value_path == "msdpSAHoldDownPeriod")
    {
        msdpsaholddownperiod = value;
    }
}

DraftMsdpMib::Msdprequeststable::Msdprequeststable()
{
    yang_name = "msdpRequestsTable"; yang_parent_name = "DRAFT-MSDP-MIB";
}

DraftMsdpMib::Msdprequeststable::~Msdprequeststable()
{
}

bool DraftMsdpMib::Msdprequeststable::has_data() const
{
    for (std::size_t index=0; index<msdprequestsentry_.size(); index++)
    {
        if(msdprequestsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DraftMsdpMib::Msdprequeststable::has_operation() const
{
    for (std::size_t index=0; index<msdprequestsentry_.size(); index++)
    {
        if(msdprequestsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DraftMsdpMib::Msdprequeststable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdpRequestsTable";

    return path_buffer.str();

}

const EntityPath DraftMsdpMib::Msdprequeststable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DRAFT-MSDP-MIB:DRAFT-MSDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DraftMsdpMib::Msdprequeststable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msdpRequestsEntry")
    {
        for(auto const & c : msdprequestsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DraftMsdpMib::Msdprequeststable::Msdprequestsentry>();
        c->parent = this;
        msdprequestsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DraftMsdpMib::Msdprequeststable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : msdprequestsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DraftMsdpMib::Msdprequeststable::set_value(const std::string & value_path, std::string value)
{
}

DraftMsdpMib::Msdprequeststable::Msdprequestsentry::Msdprequestsentry()
    :
    msdprequestsgroupaddress{YType::str, "msdpRequestsGroupAddress"},
    msdprequestsgroupmask{YType::str, "msdpRequestsGroupMask"},
    msdprequestspeer{YType::str, "msdpRequestsPeer"},
    msdprequestsstatus{YType::enumeration, "msdpRequestsStatus"}
{
    yang_name = "msdpRequestsEntry"; yang_parent_name = "msdpRequestsTable";
}

DraftMsdpMib::Msdprequeststable::Msdprequestsentry::~Msdprequestsentry()
{
}

bool DraftMsdpMib::Msdprequeststable::Msdprequestsentry::has_data() const
{
    return msdprequestsgroupaddress.is_set
	|| msdprequestsgroupmask.is_set
	|| msdprequestspeer.is_set
	|| msdprequestsstatus.is_set;
}

bool DraftMsdpMib::Msdprequeststable::Msdprequestsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(msdprequestsgroupaddress.operation)
	|| is_set(msdprequestsgroupmask.operation)
	|| is_set(msdprequestspeer.operation)
	|| is_set(msdprequestsstatus.operation);
}

std::string DraftMsdpMib::Msdprequeststable::Msdprequestsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdpRequestsEntry" <<"[msdpRequestsGroupAddress='" <<msdprequestsgroupaddress <<"']" <<"[msdpRequestsGroupMask='" <<msdprequestsgroupmask <<"']";

    return path_buffer.str();

}

const EntityPath DraftMsdpMib::Msdprequeststable::Msdprequestsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DRAFT-MSDP-MIB:DRAFT-MSDP-MIB/msdpRequestsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msdprequestsgroupaddress.is_set || is_set(msdprequestsgroupaddress.operation)) leaf_name_data.push_back(msdprequestsgroupaddress.get_name_leafdata());
    if (msdprequestsgroupmask.is_set || is_set(msdprequestsgroupmask.operation)) leaf_name_data.push_back(msdprequestsgroupmask.get_name_leafdata());
    if (msdprequestspeer.is_set || is_set(msdprequestspeer.operation)) leaf_name_data.push_back(msdprequestspeer.get_name_leafdata());
    if (msdprequestsstatus.is_set || is_set(msdprequestsstatus.operation)) leaf_name_data.push_back(msdprequestsstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DraftMsdpMib::Msdprequeststable::Msdprequestsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DraftMsdpMib::Msdprequeststable::Msdprequestsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DraftMsdpMib::Msdprequeststable::Msdprequestsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msdpRequestsGroupAddress")
    {
        msdprequestsgroupaddress = value;
    }
    if(value_path == "msdpRequestsGroupMask")
    {
        msdprequestsgroupmask = value;
    }
    if(value_path == "msdpRequestsPeer")
    {
        msdprequestspeer = value;
    }
    if(value_path == "msdpRequestsStatus")
    {
        msdprequestsstatus = value;
    }
}

DraftMsdpMib::Msdppeertable::Msdppeertable()
{
    yang_name = "msdpPeerTable"; yang_parent_name = "DRAFT-MSDP-MIB";
}

DraftMsdpMib::Msdppeertable::~Msdppeertable()
{
}

bool DraftMsdpMib::Msdppeertable::has_data() const
{
    for (std::size_t index=0; index<msdppeerentry_.size(); index++)
    {
        if(msdppeerentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DraftMsdpMib::Msdppeertable::has_operation() const
{
    for (std::size_t index=0; index<msdppeerentry_.size(); index++)
    {
        if(msdppeerentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DraftMsdpMib::Msdppeertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdpPeerTable";

    return path_buffer.str();

}

const EntityPath DraftMsdpMib::Msdppeertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DRAFT-MSDP-MIB:DRAFT-MSDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DraftMsdpMib::Msdppeertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msdpPeerEntry")
    {
        for(auto const & c : msdppeerentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DraftMsdpMib::Msdppeertable::Msdppeerentry>();
        c->parent = this;
        msdppeerentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DraftMsdpMib::Msdppeertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : msdppeerentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DraftMsdpMib::Msdppeertable::set_value(const std::string & value_path, std::string value)
{
}

DraftMsdpMib::Msdppeertable::Msdppeerentry::Msdppeerentry()
    :
    msdppeerremoteaddress{YType::str, "msdpPeerRemoteAddress"},
    msdppeerconnectionattempts{YType::uint32, "msdpPeerConnectionAttempts"},
    msdppeerconnectretryinterval{YType::int32, "msdpPeerConnectRetryInterval"},
    msdppeerdatattl{YType::int32, "msdpPeerDataTtl"},
    msdppeerencapsulationstate{YType::enumeration, "msdpPeerEncapsulationState"},
    msdppeerencapsulationtype{YType::enumeration, "msdpPeerEncapsulationType"},
    msdppeerfsmestablishedtime{YType::uint32, "msdpPeerFsmEstablishedTime"},
    msdppeerfsmestablishedtransitions{YType::uint32, "msdpPeerFsmEstablishedTransitions"},
    msdppeerholdtimeconfigured{YType::int32, "msdpPeerHoldTimeConfigured"},
    msdppeerincontrolmessages{YType::uint32, "msdpPeerInControlMessages"},
    msdppeerindatapackets{YType::uint32, "msdpPeerInDataPackets"},
    msdppeerinmessageelapsedtime{YType::uint32, "msdpPeerInMessageElapsedTime"},
    msdppeerinnotifications{YType::uint32, "msdpPeerInNotifications"},
    msdppeerinsarequests{YType::uint32, "msdpPeerInSARequests"},
    msdppeerinsaresponses{YType::uint32, "msdpPeerInSAResponses"},
    msdppeerinsas{YType::uint32, "msdpPeerInSAs"},
    msdppeerkeepaliveconfigured{YType::int32, "msdpPeerKeepAliveConfigured"},
    msdppeerlasterror{YType::str, "msdpPeerLastError"},
    msdppeerlocaladdress{YType::str, "msdpPeerLocalAddress"},
    msdppeerlocalport{YType::int32, "msdpPeerLocalPort"},
    msdppeeroutcontrolmessages{YType::uint32, "msdpPeerOutControlMessages"},
    msdppeeroutdatapackets{YType::uint32, "msdpPeerOutDataPackets"},
    msdppeeroutnotifications{YType::uint32, "msdpPeerOutNotifications"},
    msdppeeroutsarequests{YType::uint32, "msdpPeerOutSARequests"},
    msdppeeroutsaresponses{YType::uint32, "msdpPeerOutSAResponses"},
    msdppeeroutsas{YType::uint32, "msdpPeerOutSAs"},
    msdppeerprocessrequestsfrom{YType::boolean, "msdpPeerProcessRequestsFrom"},
    msdppeerremoteport{YType::int32, "msdpPeerRemotePort"},
    msdppeerrpffailures{YType::uint32, "msdpPeerRPFFailures"},
    msdppeersaadvperiod{YType::int32, "msdpPeerSAAdvPeriod"},
    msdppeerstate{YType::enumeration, "msdpPeerState"},
    msdppeerstatus{YType::enumeration, "msdpPeerStatus"}
{
    yang_name = "msdpPeerEntry"; yang_parent_name = "msdpPeerTable";
}

DraftMsdpMib::Msdppeertable::Msdppeerentry::~Msdppeerentry()
{
}

bool DraftMsdpMib::Msdppeertable::Msdppeerentry::has_data() const
{
    return msdppeerremoteaddress.is_set
	|| msdppeerconnectionattempts.is_set
	|| msdppeerconnectretryinterval.is_set
	|| msdppeerdatattl.is_set
	|| msdppeerencapsulationstate.is_set
	|| msdppeerencapsulationtype.is_set
	|| msdppeerfsmestablishedtime.is_set
	|| msdppeerfsmestablishedtransitions.is_set
	|| msdppeerholdtimeconfigured.is_set
	|| msdppeerincontrolmessages.is_set
	|| msdppeerindatapackets.is_set
	|| msdppeerinmessageelapsedtime.is_set
	|| msdppeerinnotifications.is_set
	|| msdppeerinsarequests.is_set
	|| msdppeerinsaresponses.is_set
	|| msdppeerinsas.is_set
	|| msdppeerkeepaliveconfigured.is_set
	|| msdppeerlasterror.is_set
	|| msdppeerlocaladdress.is_set
	|| msdppeerlocalport.is_set
	|| msdppeeroutcontrolmessages.is_set
	|| msdppeeroutdatapackets.is_set
	|| msdppeeroutnotifications.is_set
	|| msdppeeroutsarequests.is_set
	|| msdppeeroutsaresponses.is_set
	|| msdppeeroutsas.is_set
	|| msdppeerprocessrequestsfrom.is_set
	|| msdppeerremoteport.is_set
	|| msdppeerrpffailures.is_set
	|| msdppeersaadvperiod.is_set
	|| msdppeerstate.is_set
	|| msdppeerstatus.is_set;
}

bool DraftMsdpMib::Msdppeertable::Msdppeerentry::has_operation() const
{
    return is_set(operation)
	|| is_set(msdppeerremoteaddress.operation)
	|| is_set(msdppeerconnectionattempts.operation)
	|| is_set(msdppeerconnectretryinterval.operation)
	|| is_set(msdppeerdatattl.operation)
	|| is_set(msdppeerencapsulationstate.operation)
	|| is_set(msdppeerencapsulationtype.operation)
	|| is_set(msdppeerfsmestablishedtime.operation)
	|| is_set(msdppeerfsmestablishedtransitions.operation)
	|| is_set(msdppeerholdtimeconfigured.operation)
	|| is_set(msdppeerincontrolmessages.operation)
	|| is_set(msdppeerindatapackets.operation)
	|| is_set(msdppeerinmessageelapsedtime.operation)
	|| is_set(msdppeerinnotifications.operation)
	|| is_set(msdppeerinsarequests.operation)
	|| is_set(msdppeerinsaresponses.operation)
	|| is_set(msdppeerinsas.operation)
	|| is_set(msdppeerkeepaliveconfigured.operation)
	|| is_set(msdppeerlasterror.operation)
	|| is_set(msdppeerlocaladdress.operation)
	|| is_set(msdppeerlocalport.operation)
	|| is_set(msdppeeroutcontrolmessages.operation)
	|| is_set(msdppeeroutdatapackets.operation)
	|| is_set(msdppeeroutnotifications.operation)
	|| is_set(msdppeeroutsarequests.operation)
	|| is_set(msdppeeroutsaresponses.operation)
	|| is_set(msdppeeroutsas.operation)
	|| is_set(msdppeerprocessrequestsfrom.operation)
	|| is_set(msdppeerremoteport.operation)
	|| is_set(msdppeerrpffailures.operation)
	|| is_set(msdppeersaadvperiod.operation)
	|| is_set(msdppeerstate.operation)
	|| is_set(msdppeerstatus.operation);
}

std::string DraftMsdpMib::Msdppeertable::Msdppeerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdpPeerEntry" <<"[msdpPeerRemoteAddress='" <<msdppeerremoteaddress <<"']";

    return path_buffer.str();

}

const EntityPath DraftMsdpMib::Msdppeertable::Msdppeerentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DRAFT-MSDP-MIB:DRAFT-MSDP-MIB/msdpPeerTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msdppeerremoteaddress.is_set || is_set(msdppeerremoteaddress.operation)) leaf_name_data.push_back(msdppeerremoteaddress.get_name_leafdata());
    if (msdppeerconnectionattempts.is_set || is_set(msdppeerconnectionattempts.operation)) leaf_name_data.push_back(msdppeerconnectionattempts.get_name_leafdata());
    if (msdppeerconnectretryinterval.is_set || is_set(msdppeerconnectretryinterval.operation)) leaf_name_data.push_back(msdppeerconnectretryinterval.get_name_leafdata());
    if (msdppeerdatattl.is_set || is_set(msdppeerdatattl.operation)) leaf_name_data.push_back(msdppeerdatattl.get_name_leafdata());
    if (msdppeerencapsulationstate.is_set || is_set(msdppeerencapsulationstate.operation)) leaf_name_data.push_back(msdppeerencapsulationstate.get_name_leafdata());
    if (msdppeerencapsulationtype.is_set || is_set(msdppeerencapsulationtype.operation)) leaf_name_data.push_back(msdppeerencapsulationtype.get_name_leafdata());
    if (msdppeerfsmestablishedtime.is_set || is_set(msdppeerfsmestablishedtime.operation)) leaf_name_data.push_back(msdppeerfsmestablishedtime.get_name_leafdata());
    if (msdppeerfsmestablishedtransitions.is_set || is_set(msdppeerfsmestablishedtransitions.operation)) leaf_name_data.push_back(msdppeerfsmestablishedtransitions.get_name_leafdata());
    if (msdppeerholdtimeconfigured.is_set || is_set(msdppeerholdtimeconfigured.operation)) leaf_name_data.push_back(msdppeerholdtimeconfigured.get_name_leafdata());
    if (msdppeerincontrolmessages.is_set || is_set(msdppeerincontrolmessages.operation)) leaf_name_data.push_back(msdppeerincontrolmessages.get_name_leafdata());
    if (msdppeerindatapackets.is_set || is_set(msdppeerindatapackets.operation)) leaf_name_data.push_back(msdppeerindatapackets.get_name_leafdata());
    if (msdppeerinmessageelapsedtime.is_set || is_set(msdppeerinmessageelapsedtime.operation)) leaf_name_data.push_back(msdppeerinmessageelapsedtime.get_name_leafdata());
    if (msdppeerinnotifications.is_set || is_set(msdppeerinnotifications.operation)) leaf_name_data.push_back(msdppeerinnotifications.get_name_leafdata());
    if (msdppeerinsarequests.is_set || is_set(msdppeerinsarequests.operation)) leaf_name_data.push_back(msdppeerinsarequests.get_name_leafdata());
    if (msdppeerinsaresponses.is_set || is_set(msdppeerinsaresponses.operation)) leaf_name_data.push_back(msdppeerinsaresponses.get_name_leafdata());
    if (msdppeerinsas.is_set || is_set(msdppeerinsas.operation)) leaf_name_data.push_back(msdppeerinsas.get_name_leafdata());
    if (msdppeerkeepaliveconfigured.is_set || is_set(msdppeerkeepaliveconfigured.operation)) leaf_name_data.push_back(msdppeerkeepaliveconfigured.get_name_leafdata());
    if (msdppeerlasterror.is_set || is_set(msdppeerlasterror.operation)) leaf_name_data.push_back(msdppeerlasterror.get_name_leafdata());
    if (msdppeerlocaladdress.is_set || is_set(msdppeerlocaladdress.operation)) leaf_name_data.push_back(msdppeerlocaladdress.get_name_leafdata());
    if (msdppeerlocalport.is_set || is_set(msdppeerlocalport.operation)) leaf_name_data.push_back(msdppeerlocalport.get_name_leafdata());
    if (msdppeeroutcontrolmessages.is_set || is_set(msdppeeroutcontrolmessages.operation)) leaf_name_data.push_back(msdppeeroutcontrolmessages.get_name_leafdata());
    if (msdppeeroutdatapackets.is_set || is_set(msdppeeroutdatapackets.operation)) leaf_name_data.push_back(msdppeeroutdatapackets.get_name_leafdata());
    if (msdppeeroutnotifications.is_set || is_set(msdppeeroutnotifications.operation)) leaf_name_data.push_back(msdppeeroutnotifications.get_name_leafdata());
    if (msdppeeroutsarequests.is_set || is_set(msdppeeroutsarequests.operation)) leaf_name_data.push_back(msdppeeroutsarequests.get_name_leafdata());
    if (msdppeeroutsaresponses.is_set || is_set(msdppeeroutsaresponses.operation)) leaf_name_data.push_back(msdppeeroutsaresponses.get_name_leafdata());
    if (msdppeeroutsas.is_set || is_set(msdppeeroutsas.operation)) leaf_name_data.push_back(msdppeeroutsas.get_name_leafdata());
    if (msdppeerprocessrequestsfrom.is_set || is_set(msdppeerprocessrequestsfrom.operation)) leaf_name_data.push_back(msdppeerprocessrequestsfrom.get_name_leafdata());
    if (msdppeerremoteport.is_set || is_set(msdppeerremoteport.operation)) leaf_name_data.push_back(msdppeerremoteport.get_name_leafdata());
    if (msdppeerrpffailures.is_set || is_set(msdppeerrpffailures.operation)) leaf_name_data.push_back(msdppeerrpffailures.get_name_leafdata());
    if (msdppeersaadvperiod.is_set || is_set(msdppeersaadvperiod.operation)) leaf_name_data.push_back(msdppeersaadvperiod.get_name_leafdata());
    if (msdppeerstate.is_set || is_set(msdppeerstate.operation)) leaf_name_data.push_back(msdppeerstate.get_name_leafdata());
    if (msdppeerstatus.is_set || is_set(msdppeerstatus.operation)) leaf_name_data.push_back(msdppeerstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DraftMsdpMib::Msdppeertable::Msdppeerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DraftMsdpMib::Msdppeertable::Msdppeerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DraftMsdpMib::Msdppeertable::Msdppeerentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msdpPeerRemoteAddress")
    {
        msdppeerremoteaddress = value;
    }
    if(value_path == "msdpPeerConnectionAttempts")
    {
        msdppeerconnectionattempts = value;
    }
    if(value_path == "msdpPeerConnectRetryInterval")
    {
        msdppeerconnectretryinterval = value;
    }
    if(value_path == "msdpPeerDataTtl")
    {
        msdppeerdatattl = value;
    }
    if(value_path == "msdpPeerEncapsulationState")
    {
        msdppeerencapsulationstate = value;
    }
    if(value_path == "msdpPeerEncapsulationType")
    {
        msdppeerencapsulationtype = value;
    }
    if(value_path == "msdpPeerFsmEstablishedTime")
    {
        msdppeerfsmestablishedtime = value;
    }
    if(value_path == "msdpPeerFsmEstablishedTransitions")
    {
        msdppeerfsmestablishedtransitions = value;
    }
    if(value_path == "msdpPeerHoldTimeConfigured")
    {
        msdppeerholdtimeconfigured = value;
    }
    if(value_path == "msdpPeerInControlMessages")
    {
        msdppeerincontrolmessages = value;
    }
    if(value_path == "msdpPeerInDataPackets")
    {
        msdppeerindatapackets = value;
    }
    if(value_path == "msdpPeerInMessageElapsedTime")
    {
        msdppeerinmessageelapsedtime = value;
    }
    if(value_path == "msdpPeerInNotifications")
    {
        msdppeerinnotifications = value;
    }
    if(value_path == "msdpPeerInSARequests")
    {
        msdppeerinsarequests = value;
    }
    if(value_path == "msdpPeerInSAResponses")
    {
        msdppeerinsaresponses = value;
    }
    if(value_path == "msdpPeerInSAs")
    {
        msdppeerinsas = value;
    }
    if(value_path == "msdpPeerKeepAliveConfigured")
    {
        msdppeerkeepaliveconfigured = value;
    }
    if(value_path == "msdpPeerLastError")
    {
        msdppeerlasterror = value;
    }
    if(value_path == "msdpPeerLocalAddress")
    {
        msdppeerlocaladdress = value;
    }
    if(value_path == "msdpPeerLocalPort")
    {
        msdppeerlocalport = value;
    }
    if(value_path == "msdpPeerOutControlMessages")
    {
        msdppeeroutcontrolmessages = value;
    }
    if(value_path == "msdpPeerOutDataPackets")
    {
        msdppeeroutdatapackets = value;
    }
    if(value_path == "msdpPeerOutNotifications")
    {
        msdppeeroutnotifications = value;
    }
    if(value_path == "msdpPeerOutSARequests")
    {
        msdppeeroutsarequests = value;
    }
    if(value_path == "msdpPeerOutSAResponses")
    {
        msdppeeroutsaresponses = value;
    }
    if(value_path == "msdpPeerOutSAs")
    {
        msdppeeroutsas = value;
    }
    if(value_path == "msdpPeerProcessRequestsFrom")
    {
        msdppeerprocessrequestsfrom = value;
    }
    if(value_path == "msdpPeerRemotePort")
    {
        msdppeerremoteport = value;
    }
    if(value_path == "msdpPeerRPFFailures")
    {
        msdppeerrpffailures = value;
    }
    if(value_path == "msdpPeerSAAdvPeriod")
    {
        msdppeersaadvperiod = value;
    }
    if(value_path == "msdpPeerState")
    {
        msdppeerstate = value;
    }
    if(value_path == "msdpPeerStatus")
    {
        msdppeerstatus = value;
    }
}

DraftMsdpMib::Msdpsacachetable::Msdpsacachetable()
{
    yang_name = "msdpSACacheTable"; yang_parent_name = "DRAFT-MSDP-MIB";
}

DraftMsdpMib::Msdpsacachetable::~Msdpsacachetable()
{
}

bool DraftMsdpMib::Msdpsacachetable::has_data() const
{
    for (std::size_t index=0; index<msdpsacacheentry_.size(); index++)
    {
        if(msdpsacacheentry_[index]->has_data())
            return true;
    }
    return false;
}

bool DraftMsdpMib::Msdpsacachetable::has_operation() const
{
    for (std::size_t index=0; index<msdpsacacheentry_.size(); index++)
    {
        if(msdpsacacheentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string DraftMsdpMib::Msdpsacachetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdpSACacheTable";

    return path_buffer.str();

}

const EntityPath DraftMsdpMib::Msdpsacachetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DRAFT-MSDP-MIB:DRAFT-MSDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DraftMsdpMib::Msdpsacachetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msdpSACacheEntry")
    {
        for(auto const & c : msdpsacacheentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<DraftMsdpMib::Msdpsacachetable::Msdpsacacheentry>();
        c->parent = this;
        msdpsacacheentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DraftMsdpMib::Msdpsacachetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : msdpsacacheentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void DraftMsdpMib::Msdpsacachetable::set_value(const std::string & value_path, std::string value)
{
}

DraftMsdpMib::Msdpsacachetable::Msdpsacacheentry::Msdpsacacheentry()
    :
    msdpsacachegroupaddr{YType::str, "msdpSACacheGroupAddr"},
    msdpsacachesourceaddr{YType::str, "msdpSACacheSourceAddr"},
    msdpsacacheoriginrp{YType::str, "msdpSACacheOriginRP"},
    msdpsacacheexpirytime{YType::uint32, "msdpSACacheExpiryTime"},
    msdpsacacheindatapackets{YType::uint32, "msdpSACacheInDataPackets"},
    msdpsacacheinsas{YType::uint32, "msdpSACacheInSAs"},
    msdpsacachepeerlearnedfrom{YType::str, "msdpSACachePeerLearnedFrom"},
    msdpsacacherpfpeer{YType::str, "msdpSACacheRPFPeer"},
    msdpsacachestatus{YType::enumeration, "msdpSACacheStatus"},
    msdpsacacheuptime{YType::uint32, "msdpSACacheUpTime"}
{
    yang_name = "msdpSACacheEntry"; yang_parent_name = "msdpSACacheTable";
}

DraftMsdpMib::Msdpsacachetable::Msdpsacacheentry::~Msdpsacacheentry()
{
}

bool DraftMsdpMib::Msdpsacachetable::Msdpsacacheentry::has_data() const
{
    return msdpsacachegroupaddr.is_set
	|| msdpsacachesourceaddr.is_set
	|| msdpsacacheoriginrp.is_set
	|| msdpsacacheexpirytime.is_set
	|| msdpsacacheindatapackets.is_set
	|| msdpsacacheinsas.is_set
	|| msdpsacachepeerlearnedfrom.is_set
	|| msdpsacacherpfpeer.is_set
	|| msdpsacachestatus.is_set
	|| msdpsacacheuptime.is_set;
}

bool DraftMsdpMib::Msdpsacachetable::Msdpsacacheentry::has_operation() const
{
    return is_set(operation)
	|| is_set(msdpsacachegroupaddr.operation)
	|| is_set(msdpsacachesourceaddr.operation)
	|| is_set(msdpsacacheoriginrp.operation)
	|| is_set(msdpsacacheexpirytime.operation)
	|| is_set(msdpsacacheindatapackets.operation)
	|| is_set(msdpsacacheinsas.operation)
	|| is_set(msdpsacachepeerlearnedfrom.operation)
	|| is_set(msdpsacacherpfpeer.operation)
	|| is_set(msdpsacachestatus.operation)
	|| is_set(msdpsacacheuptime.operation);
}

std::string DraftMsdpMib::Msdpsacachetable::Msdpsacacheentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msdpSACacheEntry" <<"[msdpSACacheGroupAddr='" <<msdpsacachegroupaddr <<"']" <<"[msdpSACacheSourceAddr='" <<msdpsacachesourceaddr <<"']" <<"[msdpSACacheOriginRP='" <<msdpsacacheoriginrp <<"']";

    return path_buffer.str();

}

const EntityPath DraftMsdpMib::Msdpsacachetable::Msdpsacacheentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "DRAFT-MSDP-MIB:DRAFT-MSDP-MIB/msdpSACacheTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msdpsacachegroupaddr.is_set || is_set(msdpsacachegroupaddr.operation)) leaf_name_data.push_back(msdpsacachegroupaddr.get_name_leafdata());
    if (msdpsacachesourceaddr.is_set || is_set(msdpsacachesourceaddr.operation)) leaf_name_data.push_back(msdpsacachesourceaddr.get_name_leafdata());
    if (msdpsacacheoriginrp.is_set || is_set(msdpsacacheoriginrp.operation)) leaf_name_data.push_back(msdpsacacheoriginrp.get_name_leafdata());
    if (msdpsacacheexpirytime.is_set || is_set(msdpsacacheexpirytime.operation)) leaf_name_data.push_back(msdpsacacheexpirytime.get_name_leafdata());
    if (msdpsacacheindatapackets.is_set || is_set(msdpsacacheindatapackets.operation)) leaf_name_data.push_back(msdpsacacheindatapackets.get_name_leafdata());
    if (msdpsacacheinsas.is_set || is_set(msdpsacacheinsas.operation)) leaf_name_data.push_back(msdpsacacheinsas.get_name_leafdata());
    if (msdpsacachepeerlearnedfrom.is_set || is_set(msdpsacachepeerlearnedfrom.operation)) leaf_name_data.push_back(msdpsacachepeerlearnedfrom.get_name_leafdata());
    if (msdpsacacherpfpeer.is_set || is_set(msdpsacacherpfpeer.operation)) leaf_name_data.push_back(msdpsacacherpfpeer.get_name_leafdata());
    if (msdpsacachestatus.is_set || is_set(msdpsacachestatus.operation)) leaf_name_data.push_back(msdpsacachestatus.get_name_leafdata());
    if (msdpsacacheuptime.is_set || is_set(msdpsacacheuptime.operation)) leaf_name_data.push_back(msdpsacacheuptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> DraftMsdpMib::Msdpsacachetable::Msdpsacacheentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DraftMsdpMib::Msdpsacachetable::Msdpsacacheentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void DraftMsdpMib::Msdpsacachetable::Msdpsacacheentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msdpSACacheGroupAddr")
    {
        msdpsacachegroupaddr = value;
    }
    if(value_path == "msdpSACacheSourceAddr")
    {
        msdpsacachesourceaddr = value;
    }
    if(value_path == "msdpSACacheOriginRP")
    {
        msdpsacacheoriginrp = value;
    }
    if(value_path == "msdpSACacheExpiryTime")
    {
        msdpsacacheexpirytime = value;
    }
    if(value_path == "msdpSACacheInDataPackets")
    {
        msdpsacacheindatapackets = value;
    }
    if(value_path == "msdpSACacheInSAs")
    {
        msdpsacacheinsas = value;
    }
    if(value_path == "msdpSACachePeerLearnedFrom")
    {
        msdpsacachepeerlearnedfrom = value;
    }
    if(value_path == "msdpSACacheRPFPeer")
    {
        msdpsacacherpfpeer = value;
    }
    if(value_path == "msdpSACacheStatus")
    {
        msdpsacachestatus = value;
    }
    if(value_path == "msdpSACacheUpTime")
    {
        msdpsacacheuptime = value;
    }
}

const Enum::YLeaf DraftMsdpMib::Msdppeertable::Msdppeerentry::MsdppeerstateEnum::inactive {1, "inactive"};
const Enum::YLeaf DraftMsdpMib::Msdppeertable::Msdppeerentry::MsdppeerstateEnum::listen {2, "listen"};
const Enum::YLeaf DraftMsdpMib::Msdppeertable::Msdppeerentry::MsdppeerstateEnum::connecting {3, "connecting"};
const Enum::YLeaf DraftMsdpMib::Msdppeertable::Msdppeerentry::MsdppeerstateEnum::established {4, "established"};
const Enum::YLeaf DraftMsdpMib::Msdppeertable::Msdppeerentry::MsdppeerstateEnum::disabled {5, "disabled"};

const Enum::YLeaf DraftMsdpMib::Msdppeertable::Msdppeerentry::MsdppeerencapsulationstateEnum::default_ {1, "default"};
const Enum::YLeaf DraftMsdpMib::Msdppeertable::Msdppeerentry::MsdppeerencapsulationstateEnum::received {2, "received"};
const Enum::YLeaf DraftMsdpMib::Msdppeertable::Msdppeerentry::MsdppeerencapsulationstateEnum::advertising {3, "advertising"};
const Enum::YLeaf DraftMsdpMib::Msdppeertable::Msdppeerentry::MsdppeerencapsulationstateEnum::sent {4, "sent"};
const Enum::YLeaf DraftMsdpMib::Msdppeertable::Msdppeerentry::MsdppeerencapsulationstateEnum::agreed {5, "agreed"};
const Enum::YLeaf DraftMsdpMib::Msdppeertable::Msdppeerentry::MsdppeerencapsulationstateEnum::failed {6, "failed"};

const Enum::YLeaf DraftMsdpMib::Msdppeertable::Msdppeerentry::MsdppeerencapsulationtypeEnum::tcp {1, "tcp"};
const Enum::YLeaf DraftMsdpMib::Msdppeertable::Msdppeerentry::MsdppeerencapsulationtypeEnum::udp {2, "udp"};
const Enum::YLeaf DraftMsdpMib::Msdppeertable::Msdppeerentry::MsdppeerencapsulationtypeEnum::gre {3, "gre"};


}
}

