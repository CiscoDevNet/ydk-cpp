
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "BGP4_MIB.hpp"

namespace ydk {
namespace BGP4_MIB {

Bgp4Mib::Bgp4Mib()
    :
    bgp4pathattrtable_(std::make_shared<Bgp4Mib::Bgp4Pathattrtable>())
	,bgp_(std::make_shared<Bgp4Mib::Bgp>())
	,bgppeertable_(std::make_shared<Bgp4Mib::Bgppeertable>())
	,bgprcvdpathattrtable_(std::make_shared<Bgp4Mib::Bgprcvdpathattrtable>())
{
    bgp4pathattrtable_->parent = this;

    bgp_->parent = this;

    bgppeertable_->parent = this;

    bgprcvdpathattrtable_->parent = this;

    yang_name = "BGP4-MIB"; yang_parent_name = "BGP4-MIB";
}

Bgp4Mib::~Bgp4Mib()
{
}

bool Bgp4Mib::has_data() const
{
    return (bgp4pathattrtable_ !=  nullptr && bgp4pathattrtable_->has_data())
	|| (bgp_ !=  nullptr && bgp_->has_data())
	|| (bgppeertable_ !=  nullptr && bgppeertable_->has_data())
	|| (bgprcvdpathattrtable_ !=  nullptr && bgprcvdpathattrtable_->has_data());
}

bool Bgp4Mib::has_operation() const
{
    return is_set(operation)
	|| (bgp4pathattrtable_ !=  nullptr && bgp4pathattrtable_->has_operation())
	|| (bgp_ !=  nullptr && bgp_->has_operation())
	|| (bgppeertable_ !=  nullptr && bgppeertable_->has_operation())
	|| (bgprcvdpathattrtable_ !=  nullptr && bgprcvdpathattrtable_->has_operation());
}

std::string Bgp4Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BGP4-MIB:BGP4-MIB";

    return path_buffer.str();

}

const EntityPath Bgp4Mib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp4Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp4PathAttrTable")
    {
        if(bgp4pathattrtable_ == nullptr)
        {
            bgp4pathattrtable_ = std::make_shared<Bgp4Mib::Bgp4Pathattrtable>();
        }
        return bgp4pathattrtable_;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp_ == nullptr)
        {
            bgp_ = std::make_shared<Bgp4Mib::Bgp>();
        }
        return bgp_;
    }

    if(child_yang_name == "bgpPeerTable")
    {
        if(bgppeertable_ == nullptr)
        {
            bgppeertable_ = std::make_shared<Bgp4Mib::Bgppeertable>();
        }
        return bgppeertable_;
    }

    if(child_yang_name == "bgpRcvdPathAttrTable")
    {
        if(bgprcvdpathattrtable_ == nullptr)
        {
            bgprcvdpathattrtable_ = std::make_shared<Bgp4Mib::Bgprcvdpathattrtable>();
        }
        return bgprcvdpathattrtable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp4Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp4pathattrtable_ != nullptr)
    {
        children["bgp4PathAttrTable"] = bgp4pathattrtable_;
    }

    if(bgp_ != nullptr)
    {
        children["bgp"] = bgp_;
    }

    if(bgppeertable_ != nullptr)
    {
        children["bgpPeerTable"] = bgppeertable_;
    }

    if(bgprcvdpathattrtable_ != nullptr)
    {
        children["bgpRcvdPathAttrTable"] = bgprcvdpathattrtable_;
    }

    return children;
}

void Bgp4Mib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Bgp4Mib::clone_ptr() const
{
    return std::make_shared<Bgp4Mib>();
}

std::string Bgp4Mib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Bgp4Mib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Bgp4Mib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

Bgp4Mib::Bgp::Bgp()
    :
    bgpidentifier{YType::str, "bgpIdentifier"},
    bgplocalas{YType::int32, "bgpLocalAs"},
    bgpversion{YType::str, "bgpVersion"}
{
    yang_name = "bgp"; yang_parent_name = "BGP4-MIB";
}

Bgp4Mib::Bgp::~Bgp()
{
}

bool Bgp4Mib::Bgp::has_data() const
{
    return bgpidentifier.is_set
	|| bgplocalas.is_set
	|| bgpversion.is_set;
}

bool Bgp4Mib::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(bgpidentifier.operation)
	|| is_set(bgplocalas.operation)
	|| is_set(bgpversion.operation);
}

std::string Bgp4Mib::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Bgp4Mib::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BGP4-MIB:BGP4-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgpidentifier.is_set || is_set(bgpidentifier.operation)) leaf_name_data.push_back(bgpidentifier.get_name_leafdata());
    if (bgplocalas.is_set || is_set(bgplocalas.operation)) leaf_name_data.push_back(bgplocalas.get_name_leafdata());
    if (bgpversion.is_set || is_set(bgpversion.operation)) leaf_name_data.push_back(bgpversion.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp4Mib::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp4Mib::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp4Mib::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgpIdentifier")
    {
        bgpidentifier = value;
    }
    if(value_path == "bgpLocalAs")
    {
        bgplocalas = value;
    }
    if(value_path == "bgpVersion")
    {
        bgpversion = value;
    }
}

Bgp4Mib::Bgppeertable::Bgppeertable()
{
    yang_name = "bgpPeerTable"; yang_parent_name = "BGP4-MIB";
}

Bgp4Mib::Bgppeertable::~Bgppeertable()
{
}

bool Bgp4Mib::Bgppeertable::has_data() const
{
    for (std::size_t index=0; index<bgppeerentry_.size(); index++)
    {
        if(bgppeerentry_[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp4Mib::Bgppeertable::has_operation() const
{
    for (std::size_t index=0; index<bgppeerentry_.size(); index++)
    {
        if(bgppeerentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp4Mib::Bgppeertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgpPeerTable";

    return path_buffer.str();

}

const EntityPath Bgp4Mib::Bgppeertable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BGP4-MIB:BGP4-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp4Mib::Bgppeertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgpPeerEntry")
    {
        for(auto const & c : bgppeerentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp4Mib::Bgppeertable::Bgppeerentry>();
        c->parent = this;
        bgppeerentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp4Mib::Bgppeertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgppeerentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp4Mib::Bgppeertable::set_value(const std::string & value_path, std::string value)
{
}

Bgp4Mib::Bgppeertable::Bgppeerentry::Bgppeerentry()
    :
    bgppeerremoteaddr{YType::str, "bgpPeerRemoteAddr"},
    bgppeeradminstatus{YType::enumeration, "bgpPeerAdminStatus"},
    bgppeerconnectretryinterval{YType::int32, "bgpPeerConnectRetryInterval"},
    bgppeerfsmestablishedtime{YType::uint32, "bgpPeerFsmEstablishedTime"},
    bgppeerfsmestablishedtransitions{YType::uint32, "bgpPeerFsmEstablishedTransitions"},
    bgppeerholdtime{YType::int32, "bgpPeerHoldTime"},
    bgppeerholdtimeconfigured{YType::int32, "bgpPeerHoldTimeConfigured"},
    bgppeeridentifier{YType::str, "bgpPeerIdentifier"},
    bgppeerintotalmessages{YType::uint32, "bgpPeerInTotalMessages"},
    bgppeerinupdateelapsedtime{YType::uint32, "bgpPeerInUpdateElapsedTime"},
    bgppeerinupdates{YType::uint32, "bgpPeerInUpdates"},
    bgppeerkeepalive{YType::int32, "bgpPeerKeepAlive"},
    bgppeerkeepaliveconfigured{YType::int32, "bgpPeerKeepAliveConfigured"},
    bgppeerlasterror{YType::str, "bgpPeerLastError"},
    bgppeerlocaladdr{YType::str, "bgpPeerLocalAddr"},
    bgppeerlocalport{YType::int32, "bgpPeerLocalPort"},
    bgppeerminasoriginationinterval{YType::int32, "bgpPeerMinASOriginationInterval"},
    bgppeerminrouteadvertisementinterval{YType::int32, "bgpPeerMinRouteAdvertisementInterval"},
    bgppeernegotiatedversion{YType::int32, "bgpPeerNegotiatedVersion"},
    bgppeerouttotalmessages{YType::uint32, "bgpPeerOutTotalMessages"},
    bgppeeroutupdates{YType::uint32, "bgpPeerOutUpdates"},
    bgppeerremoteas{YType::int32, "bgpPeerRemoteAs"},
    bgppeerremoteport{YType::int32, "bgpPeerRemotePort"},
    bgppeerstate{YType::enumeration, "bgpPeerState"},
    cbgppeerlasterrortxt{YType::str, "CISCO-BGP4-MIB:cbgpPeerLastErrorTxt"},
    cbgppeerprefixaccepted{YType::uint32, "CISCO-BGP4-MIB:cbgpPeerPrefixAccepted"},
    cbgppeerprefixadvertised{YType::uint32, "CISCO-BGP4-MIB:cbgpPeerPrefixAdvertised"},
    cbgppeerprefixdenied{YType::uint32, "CISCO-BGP4-MIB:cbgpPeerPrefixDenied"},
    cbgppeerprefixlimit{YType::uint32, "CISCO-BGP4-MIB:cbgpPeerPrefixLimit"},
    cbgppeerprefixsuppressed{YType::uint32, "CISCO-BGP4-MIB:cbgpPeerPrefixSuppressed"},
    cbgppeerprefixwithdrawn{YType::uint32, "CISCO-BGP4-MIB:cbgpPeerPrefixWithdrawn"},
    cbgppeerprevstate{YType::enumeration, "CISCO-BGP4-MIB:cbgpPeerPrevState"}
{
    yang_name = "bgpPeerEntry"; yang_parent_name = "bgpPeerTable";
}

Bgp4Mib::Bgppeertable::Bgppeerentry::~Bgppeerentry()
{
}

bool Bgp4Mib::Bgppeertable::Bgppeerentry::has_data() const
{
    return bgppeerremoteaddr.is_set
	|| bgppeeradminstatus.is_set
	|| bgppeerconnectretryinterval.is_set
	|| bgppeerfsmestablishedtime.is_set
	|| bgppeerfsmestablishedtransitions.is_set
	|| bgppeerholdtime.is_set
	|| bgppeerholdtimeconfigured.is_set
	|| bgppeeridentifier.is_set
	|| bgppeerintotalmessages.is_set
	|| bgppeerinupdateelapsedtime.is_set
	|| bgppeerinupdates.is_set
	|| bgppeerkeepalive.is_set
	|| bgppeerkeepaliveconfigured.is_set
	|| bgppeerlasterror.is_set
	|| bgppeerlocaladdr.is_set
	|| bgppeerlocalport.is_set
	|| bgppeerminasoriginationinterval.is_set
	|| bgppeerminrouteadvertisementinterval.is_set
	|| bgppeernegotiatedversion.is_set
	|| bgppeerouttotalmessages.is_set
	|| bgppeeroutupdates.is_set
	|| bgppeerremoteas.is_set
	|| bgppeerremoteport.is_set
	|| bgppeerstate.is_set
	|| cbgppeerlasterrortxt.is_set
	|| cbgppeerprefixaccepted.is_set
	|| cbgppeerprefixadvertised.is_set
	|| cbgppeerprefixdenied.is_set
	|| cbgppeerprefixlimit.is_set
	|| cbgppeerprefixsuppressed.is_set
	|| cbgppeerprefixwithdrawn.is_set
	|| cbgppeerprevstate.is_set;
}

bool Bgp4Mib::Bgppeertable::Bgppeerentry::has_operation() const
{
    return is_set(operation)
	|| is_set(bgppeerremoteaddr.operation)
	|| is_set(bgppeeradminstatus.operation)
	|| is_set(bgppeerconnectretryinterval.operation)
	|| is_set(bgppeerfsmestablishedtime.operation)
	|| is_set(bgppeerfsmestablishedtransitions.operation)
	|| is_set(bgppeerholdtime.operation)
	|| is_set(bgppeerholdtimeconfigured.operation)
	|| is_set(bgppeeridentifier.operation)
	|| is_set(bgppeerintotalmessages.operation)
	|| is_set(bgppeerinupdateelapsedtime.operation)
	|| is_set(bgppeerinupdates.operation)
	|| is_set(bgppeerkeepalive.operation)
	|| is_set(bgppeerkeepaliveconfigured.operation)
	|| is_set(bgppeerlasterror.operation)
	|| is_set(bgppeerlocaladdr.operation)
	|| is_set(bgppeerlocalport.operation)
	|| is_set(bgppeerminasoriginationinterval.operation)
	|| is_set(bgppeerminrouteadvertisementinterval.operation)
	|| is_set(bgppeernegotiatedversion.operation)
	|| is_set(bgppeerouttotalmessages.operation)
	|| is_set(bgppeeroutupdates.operation)
	|| is_set(bgppeerremoteas.operation)
	|| is_set(bgppeerremoteport.operation)
	|| is_set(bgppeerstate.operation)
	|| is_set(cbgppeerlasterrortxt.operation)
	|| is_set(cbgppeerprefixaccepted.operation)
	|| is_set(cbgppeerprefixadvertised.operation)
	|| is_set(cbgppeerprefixdenied.operation)
	|| is_set(cbgppeerprefixlimit.operation)
	|| is_set(cbgppeerprefixsuppressed.operation)
	|| is_set(cbgppeerprefixwithdrawn.operation)
	|| is_set(cbgppeerprevstate.operation);
}

std::string Bgp4Mib::Bgppeertable::Bgppeerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgpPeerEntry" <<"[bgpPeerRemoteAddr='" <<bgppeerremoteaddr <<"']";

    return path_buffer.str();

}

const EntityPath Bgp4Mib::Bgppeertable::Bgppeerentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BGP4-MIB:BGP4-MIB/bgpPeerTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgppeerremoteaddr.is_set || is_set(bgppeerremoteaddr.operation)) leaf_name_data.push_back(bgppeerremoteaddr.get_name_leafdata());
    if (bgppeeradminstatus.is_set || is_set(bgppeeradminstatus.operation)) leaf_name_data.push_back(bgppeeradminstatus.get_name_leafdata());
    if (bgppeerconnectretryinterval.is_set || is_set(bgppeerconnectretryinterval.operation)) leaf_name_data.push_back(bgppeerconnectretryinterval.get_name_leafdata());
    if (bgppeerfsmestablishedtime.is_set || is_set(bgppeerfsmestablishedtime.operation)) leaf_name_data.push_back(bgppeerfsmestablishedtime.get_name_leafdata());
    if (bgppeerfsmestablishedtransitions.is_set || is_set(bgppeerfsmestablishedtransitions.operation)) leaf_name_data.push_back(bgppeerfsmestablishedtransitions.get_name_leafdata());
    if (bgppeerholdtime.is_set || is_set(bgppeerholdtime.operation)) leaf_name_data.push_back(bgppeerholdtime.get_name_leafdata());
    if (bgppeerholdtimeconfigured.is_set || is_set(bgppeerholdtimeconfigured.operation)) leaf_name_data.push_back(bgppeerholdtimeconfigured.get_name_leafdata());
    if (bgppeeridentifier.is_set || is_set(bgppeeridentifier.operation)) leaf_name_data.push_back(bgppeeridentifier.get_name_leafdata());
    if (bgppeerintotalmessages.is_set || is_set(bgppeerintotalmessages.operation)) leaf_name_data.push_back(bgppeerintotalmessages.get_name_leafdata());
    if (bgppeerinupdateelapsedtime.is_set || is_set(bgppeerinupdateelapsedtime.operation)) leaf_name_data.push_back(bgppeerinupdateelapsedtime.get_name_leafdata());
    if (bgppeerinupdates.is_set || is_set(bgppeerinupdates.operation)) leaf_name_data.push_back(bgppeerinupdates.get_name_leafdata());
    if (bgppeerkeepalive.is_set || is_set(bgppeerkeepalive.operation)) leaf_name_data.push_back(bgppeerkeepalive.get_name_leafdata());
    if (bgppeerkeepaliveconfigured.is_set || is_set(bgppeerkeepaliveconfigured.operation)) leaf_name_data.push_back(bgppeerkeepaliveconfigured.get_name_leafdata());
    if (bgppeerlasterror.is_set || is_set(bgppeerlasterror.operation)) leaf_name_data.push_back(bgppeerlasterror.get_name_leafdata());
    if (bgppeerlocaladdr.is_set || is_set(bgppeerlocaladdr.operation)) leaf_name_data.push_back(bgppeerlocaladdr.get_name_leafdata());
    if (bgppeerlocalport.is_set || is_set(bgppeerlocalport.operation)) leaf_name_data.push_back(bgppeerlocalport.get_name_leafdata());
    if (bgppeerminasoriginationinterval.is_set || is_set(bgppeerminasoriginationinterval.operation)) leaf_name_data.push_back(bgppeerminasoriginationinterval.get_name_leafdata());
    if (bgppeerminrouteadvertisementinterval.is_set || is_set(bgppeerminrouteadvertisementinterval.operation)) leaf_name_data.push_back(bgppeerminrouteadvertisementinterval.get_name_leafdata());
    if (bgppeernegotiatedversion.is_set || is_set(bgppeernegotiatedversion.operation)) leaf_name_data.push_back(bgppeernegotiatedversion.get_name_leafdata());
    if (bgppeerouttotalmessages.is_set || is_set(bgppeerouttotalmessages.operation)) leaf_name_data.push_back(bgppeerouttotalmessages.get_name_leafdata());
    if (bgppeeroutupdates.is_set || is_set(bgppeeroutupdates.operation)) leaf_name_data.push_back(bgppeeroutupdates.get_name_leafdata());
    if (bgppeerremoteas.is_set || is_set(bgppeerremoteas.operation)) leaf_name_data.push_back(bgppeerremoteas.get_name_leafdata());
    if (bgppeerremoteport.is_set || is_set(bgppeerremoteport.operation)) leaf_name_data.push_back(bgppeerremoteport.get_name_leafdata());
    if (bgppeerstate.is_set || is_set(bgppeerstate.operation)) leaf_name_data.push_back(bgppeerstate.get_name_leafdata());
    if (cbgppeerlasterrortxt.is_set || is_set(cbgppeerlasterrortxt.operation)) leaf_name_data.push_back(cbgppeerlasterrortxt.get_name_leafdata());
    if (cbgppeerprefixaccepted.is_set || is_set(cbgppeerprefixaccepted.operation)) leaf_name_data.push_back(cbgppeerprefixaccepted.get_name_leafdata());
    if (cbgppeerprefixadvertised.is_set || is_set(cbgppeerprefixadvertised.operation)) leaf_name_data.push_back(cbgppeerprefixadvertised.get_name_leafdata());
    if (cbgppeerprefixdenied.is_set || is_set(cbgppeerprefixdenied.operation)) leaf_name_data.push_back(cbgppeerprefixdenied.get_name_leafdata());
    if (cbgppeerprefixlimit.is_set || is_set(cbgppeerprefixlimit.operation)) leaf_name_data.push_back(cbgppeerprefixlimit.get_name_leafdata());
    if (cbgppeerprefixsuppressed.is_set || is_set(cbgppeerprefixsuppressed.operation)) leaf_name_data.push_back(cbgppeerprefixsuppressed.get_name_leafdata());
    if (cbgppeerprefixwithdrawn.is_set || is_set(cbgppeerprefixwithdrawn.operation)) leaf_name_data.push_back(cbgppeerprefixwithdrawn.get_name_leafdata());
    if (cbgppeerprevstate.is_set || is_set(cbgppeerprevstate.operation)) leaf_name_data.push_back(cbgppeerprevstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp4Mib::Bgppeertable::Bgppeerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp4Mib::Bgppeertable::Bgppeerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp4Mib::Bgppeertable::Bgppeerentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr = value;
    }
    if(value_path == "bgpPeerAdminStatus")
    {
        bgppeeradminstatus = value;
    }
    if(value_path == "bgpPeerConnectRetryInterval")
    {
        bgppeerconnectretryinterval = value;
    }
    if(value_path == "bgpPeerFsmEstablishedTime")
    {
        bgppeerfsmestablishedtime = value;
    }
    if(value_path == "bgpPeerFsmEstablishedTransitions")
    {
        bgppeerfsmestablishedtransitions = value;
    }
    if(value_path == "bgpPeerHoldTime")
    {
        bgppeerholdtime = value;
    }
    if(value_path == "bgpPeerHoldTimeConfigured")
    {
        bgppeerholdtimeconfigured = value;
    }
    if(value_path == "bgpPeerIdentifier")
    {
        bgppeeridentifier = value;
    }
    if(value_path == "bgpPeerInTotalMessages")
    {
        bgppeerintotalmessages = value;
    }
    if(value_path == "bgpPeerInUpdateElapsedTime")
    {
        bgppeerinupdateelapsedtime = value;
    }
    if(value_path == "bgpPeerInUpdates")
    {
        bgppeerinupdates = value;
    }
    if(value_path == "bgpPeerKeepAlive")
    {
        bgppeerkeepalive = value;
    }
    if(value_path == "bgpPeerKeepAliveConfigured")
    {
        bgppeerkeepaliveconfigured = value;
    }
    if(value_path == "bgpPeerLastError")
    {
        bgppeerlasterror = value;
    }
    if(value_path == "bgpPeerLocalAddr")
    {
        bgppeerlocaladdr = value;
    }
    if(value_path == "bgpPeerLocalPort")
    {
        bgppeerlocalport = value;
    }
    if(value_path == "bgpPeerMinASOriginationInterval")
    {
        bgppeerminasoriginationinterval = value;
    }
    if(value_path == "bgpPeerMinRouteAdvertisementInterval")
    {
        bgppeerminrouteadvertisementinterval = value;
    }
    if(value_path == "bgpPeerNegotiatedVersion")
    {
        bgppeernegotiatedversion = value;
    }
    if(value_path == "bgpPeerOutTotalMessages")
    {
        bgppeerouttotalmessages = value;
    }
    if(value_path == "bgpPeerOutUpdates")
    {
        bgppeeroutupdates = value;
    }
    if(value_path == "bgpPeerRemoteAs")
    {
        bgppeerremoteas = value;
    }
    if(value_path == "bgpPeerRemotePort")
    {
        bgppeerremoteport = value;
    }
    if(value_path == "bgpPeerState")
    {
        bgppeerstate = value;
    }
    if(value_path == "cbgpPeerLastErrorTxt")
    {
        cbgppeerlasterrortxt = value;
    }
    if(value_path == "cbgpPeerPrefixAccepted")
    {
        cbgppeerprefixaccepted = value;
    }
    if(value_path == "cbgpPeerPrefixAdvertised")
    {
        cbgppeerprefixadvertised = value;
    }
    if(value_path == "cbgpPeerPrefixDenied")
    {
        cbgppeerprefixdenied = value;
    }
    if(value_path == "cbgpPeerPrefixLimit")
    {
        cbgppeerprefixlimit = value;
    }
    if(value_path == "cbgpPeerPrefixSuppressed")
    {
        cbgppeerprefixsuppressed = value;
    }
    if(value_path == "cbgpPeerPrefixWithdrawn")
    {
        cbgppeerprefixwithdrawn = value;
    }
    if(value_path == "cbgpPeerPrevState")
    {
        cbgppeerprevstate = value;
    }
}

Bgp4Mib::Bgprcvdpathattrtable::Bgprcvdpathattrtable()
{
    yang_name = "bgpRcvdPathAttrTable"; yang_parent_name = "BGP4-MIB";
}

Bgp4Mib::Bgprcvdpathattrtable::~Bgprcvdpathattrtable()
{
}

bool Bgp4Mib::Bgprcvdpathattrtable::has_data() const
{
    for (std::size_t index=0; index<bgppathattrentry_.size(); index++)
    {
        if(bgppathattrentry_[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp4Mib::Bgprcvdpathattrtable::has_operation() const
{
    for (std::size_t index=0; index<bgppathattrentry_.size(); index++)
    {
        if(bgppathattrentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp4Mib::Bgprcvdpathattrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgpRcvdPathAttrTable";

    return path_buffer.str();

}

const EntityPath Bgp4Mib::Bgprcvdpathattrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BGP4-MIB:BGP4-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp4Mib::Bgprcvdpathattrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgpPathAttrEntry")
    {
        for(auto const & c : bgppathattrentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry>();
        c->parent = this;
        bgppathattrentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp4Mib::Bgprcvdpathattrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgppathattrentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp4Mib::Bgprcvdpathattrtable::set_value(const std::string & value_path, std::string value)
{
}

Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry::Bgppathattrentry()
    :
    bgppathattrdestnetwork{YType::str, "bgpPathAttrDestNetwork"},
    bgppathattrpeer{YType::str, "bgpPathAttrPeer"},
    bgppathattraspath{YType::str, "bgpPathAttrASPath"},
    bgppathattrinterasmetric{YType::int32, "bgpPathAttrInterASMetric"},
    bgppathattrnexthop{YType::str, "bgpPathAttrNextHop"},
    bgppathattrorigin{YType::enumeration, "bgpPathAttrOrigin"}
{
    yang_name = "bgpPathAttrEntry"; yang_parent_name = "bgpRcvdPathAttrTable";
}

Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry::~Bgppathattrentry()
{
}

bool Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry::has_data() const
{
    return bgppathattrdestnetwork.is_set
	|| bgppathattrpeer.is_set
	|| bgppathattraspath.is_set
	|| bgppathattrinterasmetric.is_set
	|| bgppathattrnexthop.is_set
	|| bgppathattrorigin.is_set;
}

bool Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(bgppathattrdestnetwork.operation)
	|| is_set(bgppathattrpeer.operation)
	|| is_set(bgppathattraspath.operation)
	|| is_set(bgppathattrinterasmetric.operation)
	|| is_set(bgppathattrnexthop.operation)
	|| is_set(bgppathattrorigin.operation);
}

std::string Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgpPathAttrEntry" <<"[bgpPathAttrDestNetwork='" <<bgppathattrdestnetwork <<"']" <<"[bgpPathAttrPeer='" <<bgppathattrpeer <<"']";

    return path_buffer.str();

}

const EntityPath Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BGP4-MIB:BGP4-MIB/bgpRcvdPathAttrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgppathattrdestnetwork.is_set || is_set(bgppathattrdestnetwork.operation)) leaf_name_data.push_back(bgppathattrdestnetwork.get_name_leafdata());
    if (bgppathattrpeer.is_set || is_set(bgppathattrpeer.operation)) leaf_name_data.push_back(bgppathattrpeer.get_name_leafdata());
    if (bgppathattraspath.is_set || is_set(bgppathattraspath.operation)) leaf_name_data.push_back(bgppathattraspath.get_name_leafdata());
    if (bgppathattrinterasmetric.is_set || is_set(bgppathattrinterasmetric.operation)) leaf_name_data.push_back(bgppathattrinterasmetric.get_name_leafdata());
    if (bgppathattrnexthop.is_set || is_set(bgppathattrnexthop.operation)) leaf_name_data.push_back(bgppathattrnexthop.get_name_leafdata());
    if (bgppathattrorigin.is_set || is_set(bgppathattrorigin.operation)) leaf_name_data.push_back(bgppathattrorigin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgpPathAttrDestNetwork")
    {
        bgppathattrdestnetwork = value;
    }
    if(value_path == "bgpPathAttrPeer")
    {
        bgppathattrpeer = value;
    }
    if(value_path == "bgpPathAttrASPath")
    {
        bgppathattraspath = value;
    }
    if(value_path == "bgpPathAttrInterASMetric")
    {
        bgppathattrinterasmetric = value;
    }
    if(value_path == "bgpPathAttrNextHop")
    {
        bgppathattrnexthop = value;
    }
    if(value_path == "bgpPathAttrOrigin")
    {
        bgppathattrorigin = value;
    }
}

Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrtable()
{
    yang_name = "bgp4PathAttrTable"; yang_parent_name = "BGP4-MIB";
}

Bgp4Mib::Bgp4Pathattrtable::~Bgp4Pathattrtable()
{
}

bool Bgp4Mib::Bgp4Pathattrtable::has_data() const
{
    for (std::size_t index=0; index<bgp4pathattrentry_.size(); index++)
    {
        if(bgp4pathattrentry_[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp4Mib::Bgp4Pathattrtable::has_operation() const
{
    for (std::size_t index=0; index<bgp4pathattrentry_.size(); index++)
    {
        if(bgp4pathattrentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp4Mib::Bgp4Pathattrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp4PathAttrTable";

    return path_buffer.str();

}

const EntityPath Bgp4Mib::Bgp4Pathattrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BGP4-MIB:BGP4-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp4Mib::Bgp4Pathattrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp4PathAttrEntry")
    {
        for(auto const & c : bgp4pathattrentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry>();
        c->parent = this;
        bgp4pathattrentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp4Mib::Bgp4Pathattrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp4pathattrentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp4Mib::Bgp4Pathattrtable::set_value(const std::string & value_path, std::string value)
{
}

Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4Pathattrentry()
    :
    bgp4pathattripaddrprefix{YType::str, "bgp4PathAttrIpAddrPrefix"},
    bgp4pathattripaddrprefixlen{YType::int32, "bgp4PathAttrIpAddrPrefixLen"},
    bgp4pathattrpeer{YType::str, "bgp4PathAttrPeer"},
    bgp4pathattraggregatoraddr{YType::str, "bgp4PathAttrAggregatorAddr"},
    bgp4pathattraggregatoras{YType::int32, "bgp4PathAttrAggregatorAS"},
    bgp4pathattraspathsegment{YType::str, "bgp4PathAttrASPathSegment"},
    bgp4pathattratomicaggregate{YType::enumeration, "bgp4PathAttrAtomicAggregate"},
    bgp4pathattrbest{YType::enumeration, "bgp4PathAttrBest"},
    bgp4pathattrcalclocalpref{YType::int32, "bgp4PathAttrCalcLocalPref"},
    bgp4pathattrlocalpref{YType::int32, "bgp4PathAttrLocalPref"},
    bgp4pathattrmultiexitdisc{YType::int32, "bgp4PathAttrMultiExitDisc"},
    bgp4pathattrnexthop{YType::str, "bgp4PathAttrNextHop"},
    bgp4pathattrorigin{YType::enumeration, "bgp4PathAttrOrigin"},
    bgp4pathattrunknown{YType::str, "bgp4PathAttrUnknown"}
{
    yang_name = "bgp4PathAttrEntry"; yang_parent_name = "bgp4PathAttrTable";
}

Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::~Bgp4Pathattrentry()
{
}

bool Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::has_data() const
{
    return bgp4pathattripaddrprefix.is_set
	|| bgp4pathattripaddrprefixlen.is_set
	|| bgp4pathattrpeer.is_set
	|| bgp4pathattraggregatoraddr.is_set
	|| bgp4pathattraggregatoras.is_set
	|| bgp4pathattraspathsegment.is_set
	|| bgp4pathattratomicaggregate.is_set
	|| bgp4pathattrbest.is_set
	|| bgp4pathattrcalclocalpref.is_set
	|| bgp4pathattrlocalpref.is_set
	|| bgp4pathattrmultiexitdisc.is_set
	|| bgp4pathattrnexthop.is_set
	|| bgp4pathattrorigin.is_set
	|| bgp4pathattrunknown.is_set;
}

bool Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp4pathattripaddrprefix.operation)
	|| is_set(bgp4pathattripaddrprefixlen.operation)
	|| is_set(bgp4pathattrpeer.operation)
	|| is_set(bgp4pathattraggregatoraddr.operation)
	|| is_set(bgp4pathattraggregatoras.operation)
	|| is_set(bgp4pathattraspathsegment.operation)
	|| is_set(bgp4pathattratomicaggregate.operation)
	|| is_set(bgp4pathattrbest.operation)
	|| is_set(bgp4pathattrcalclocalpref.operation)
	|| is_set(bgp4pathattrlocalpref.operation)
	|| is_set(bgp4pathattrmultiexitdisc.operation)
	|| is_set(bgp4pathattrnexthop.operation)
	|| is_set(bgp4pathattrorigin.operation)
	|| is_set(bgp4pathattrunknown.operation);
}

std::string Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp4PathAttrEntry" <<"[bgp4PathAttrIpAddrPrefix='" <<bgp4pathattripaddrprefix <<"']" <<"[bgp4PathAttrIpAddrPrefixLen='" <<bgp4pathattripaddrprefixlen <<"']" <<"[bgp4PathAttrPeer='" <<bgp4pathattrpeer <<"']";

    return path_buffer.str();

}

const EntityPath Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "BGP4-MIB:BGP4-MIB/bgp4PathAttrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp4pathattripaddrprefix.is_set || is_set(bgp4pathattripaddrprefix.operation)) leaf_name_data.push_back(bgp4pathattripaddrprefix.get_name_leafdata());
    if (bgp4pathattripaddrprefixlen.is_set || is_set(bgp4pathattripaddrprefixlen.operation)) leaf_name_data.push_back(bgp4pathattripaddrprefixlen.get_name_leafdata());
    if (bgp4pathattrpeer.is_set || is_set(bgp4pathattrpeer.operation)) leaf_name_data.push_back(bgp4pathattrpeer.get_name_leafdata());
    if (bgp4pathattraggregatoraddr.is_set || is_set(bgp4pathattraggregatoraddr.operation)) leaf_name_data.push_back(bgp4pathattraggregatoraddr.get_name_leafdata());
    if (bgp4pathattraggregatoras.is_set || is_set(bgp4pathattraggregatoras.operation)) leaf_name_data.push_back(bgp4pathattraggregatoras.get_name_leafdata());
    if (bgp4pathattraspathsegment.is_set || is_set(bgp4pathattraspathsegment.operation)) leaf_name_data.push_back(bgp4pathattraspathsegment.get_name_leafdata());
    if (bgp4pathattratomicaggregate.is_set || is_set(bgp4pathattratomicaggregate.operation)) leaf_name_data.push_back(bgp4pathattratomicaggregate.get_name_leafdata());
    if (bgp4pathattrbest.is_set || is_set(bgp4pathattrbest.operation)) leaf_name_data.push_back(bgp4pathattrbest.get_name_leafdata());
    if (bgp4pathattrcalclocalpref.is_set || is_set(bgp4pathattrcalclocalpref.operation)) leaf_name_data.push_back(bgp4pathattrcalclocalpref.get_name_leafdata());
    if (bgp4pathattrlocalpref.is_set || is_set(bgp4pathattrlocalpref.operation)) leaf_name_data.push_back(bgp4pathattrlocalpref.get_name_leafdata());
    if (bgp4pathattrmultiexitdisc.is_set || is_set(bgp4pathattrmultiexitdisc.operation)) leaf_name_data.push_back(bgp4pathattrmultiexitdisc.get_name_leafdata());
    if (bgp4pathattrnexthop.is_set || is_set(bgp4pathattrnexthop.operation)) leaf_name_data.push_back(bgp4pathattrnexthop.get_name_leafdata());
    if (bgp4pathattrorigin.is_set || is_set(bgp4pathattrorigin.operation)) leaf_name_data.push_back(bgp4pathattrorigin.get_name_leafdata());
    if (bgp4pathattrunknown.is_set || is_set(bgp4pathattrunknown.operation)) leaf_name_data.push_back(bgp4pathattrunknown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp4PathAttrIpAddrPrefix")
    {
        bgp4pathattripaddrprefix = value;
    }
    if(value_path == "bgp4PathAttrIpAddrPrefixLen")
    {
        bgp4pathattripaddrprefixlen = value;
    }
    if(value_path == "bgp4PathAttrPeer")
    {
        bgp4pathattrpeer = value;
    }
    if(value_path == "bgp4PathAttrAggregatorAddr")
    {
        bgp4pathattraggregatoraddr = value;
    }
    if(value_path == "bgp4PathAttrAggregatorAS")
    {
        bgp4pathattraggregatoras = value;
    }
    if(value_path == "bgp4PathAttrASPathSegment")
    {
        bgp4pathattraspathsegment = value;
    }
    if(value_path == "bgp4PathAttrAtomicAggregate")
    {
        bgp4pathattratomicaggregate = value;
    }
    if(value_path == "bgp4PathAttrBest")
    {
        bgp4pathattrbest = value;
    }
    if(value_path == "bgp4PathAttrCalcLocalPref")
    {
        bgp4pathattrcalclocalpref = value;
    }
    if(value_path == "bgp4PathAttrLocalPref")
    {
        bgp4pathattrlocalpref = value;
    }
    if(value_path == "bgp4PathAttrMultiExitDisc")
    {
        bgp4pathattrmultiexitdisc = value;
    }
    if(value_path == "bgp4PathAttrNextHop")
    {
        bgp4pathattrnexthop = value;
    }
    if(value_path == "bgp4PathAttrOrigin")
    {
        bgp4pathattrorigin = value;
    }
    if(value_path == "bgp4PathAttrUnknown")
    {
        bgp4pathattrunknown = value;
    }
}

const Enum::YLeaf Bgp4Mib::Bgppeertable::Bgppeerentry::BgppeerstateEnum::idle {1, "idle"};
const Enum::YLeaf Bgp4Mib::Bgppeertable::Bgppeerentry::BgppeerstateEnum::connect {2, "connect"};
const Enum::YLeaf Bgp4Mib::Bgppeertable::Bgppeerentry::BgppeerstateEnum::active {3, "active"};
const Enum::YLeaf Bgp4Mib::Bgppeertable::Bgppeerentry::BgppeerstateEnum::opensent {4, "opensent"};
const Enum::YLeaf Bgp4Mib::Bgppeertable::Bgppeerentry::BgppeerstateEnum::openconfirm {5, "openconfirm"};
const Enum::YLeaf Bgp4Mib::Bgppeertable::Bgppeerentry::BgppeerstateEnum::established {6, "established"};

const Enum::YLeaf Bgp4Mib::Bgppeertable::Bgppeerentry::BgppeeradminstatusEnum::stop {1, "stop"};
const Enum::YLeaf Bgp4Mib::Bgppeertable::Bgppeerentry::BgppeeradminstatusEnum::start {2, "start"};

const Enum::YLeaf Bgp4Mib::Bgppeertable::Bgppeerentry::CbgppeerprevstateEnum::none {0, "none"};
const Enum::YLeaf Bgp4Mib::Bgppeertable::Bgppeerentry::CbgppeerprevstateEnum::idle {1, "idle"};
const Enum::YLeaf Bgp4Mib::Bgppeertable::Bgppeerentry::CbgppeerprevstateEnum::connect {2, "connect"};
const Enum::YLeaf Bgp4Mib::Bgppeertable::Bgppeerentry::CbgppeerprevstateEnum::active {3, "active"};
const Enum::YLeaf Bgp4Mib::Bgppeertable::Bgppeerentry::CbgppeerprevstateEnum::opensent {4, "opensent"};
const Enum::YLeaf Bgp4Mib::Bgppeertable::Bgppeerentry::CbgppeerprevstateEnum::openconfirm {5, "openconfirm"};
const Enum::YLeaf Bgp4Mib::Bgppeertable::Bgppeerentry::CbgppeerprevstateEnum::established {6, "established"};

const Enum::YLeaf Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry::BgppathattroriginEnum::igp {1, "igp"};
const Enum::YLeaf Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry::BgppathattroriginEnum::egp {2, "egp"};
const Enum::YLeaf Bgp4Mib::Bgprcvdpathattrtable::Bgppathattrentry::BgppathattroriginEnum::incomplete {3, "incomplete"};

const Enum::YLeaf Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4PathattroriginEnum::igp {1, "igp"};
const Enum::YLeaf Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4PathattroriginEnum::egp {2, "egp"};
const Enum::YLeaf Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4PathattroriginEnum::incomplete {3, "incomplete"};

const Enum::YLeaf Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4PathattratomicaggregateEnum::lessSpecificRrouteNotSelected {1, "lessSpecificRrouteNotSelected"};
const Enum::YLeaf Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4PathattratomicaggregateEnum::lessSpecificRouteSelected {2, "lessSpecificRouteSelected"};

const Enum::YLeaf Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4PathattrbestEnum::false_ {1, "false"};
const Enum::YLeaf Bgp4Mib::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4PathattrbestEnum::true_ {2, "true"};


}
}

