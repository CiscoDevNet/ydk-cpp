
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "BGP4_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace BGP4_MIB {

BGP4MIB::BGP4MIB()
    :
    bgp(std::make_shared<BGP4MIB::Bgp>())
	,bgppeertable(std::make_shared<BGP4MIB::Bgppeertable>())
	,bgprcvdpathattrtable(std::make_shared<BGP4MIB::Bgprcvdpathattrtable>())
	,bgp4pathattrtable(std::make_shared<BGP4MIB::Bgp4Pathattrtable>())
{
    bgp->parent = this;
    bgppeertable->parent = this;
    bgprcvdpathattrtable->parent = this;
    bgp4pathattrtable->parent = this;

    yang_name = "BGP4-MIB"; yang_parent_name = "BGP4-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

BGP4MIB::~BGP4MIB()
{
}

bool BGP4MIB::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data())
	|| (bgppeertable !=  nullptr && bgppeertable->has_data())
	|| (bgprcvdpathattrtable !=  nullptr && bgprcvdpathattrtable->has_data())
	|| (bgp4pathattrtable !=  nullptr && bgp4pathattrtable->has_data());
}

bool BGP4MIB::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (bgppeertable !=  nullptr && bgppeertable->has_operation())
	|| (bgprcvdpathattrtable !=  nullptr && bgprcvdpathattrtable->has_operation())
	|| (bgp4pathattrtable !=  nullptr && bgp4pathattrtable->has_operation());
}

std::string BGP4MIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BGP4-MIB:BGP4-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BGP4MIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BGP4MIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<BGP4MIB::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "bgpPeerTable")
    {
        if(bgppeertable == nullptr)
        {
            bgppeertable = std::make_shared<BGP4MIB::Bgppeertable>();
        }
        return bgppeertable;
    }

    if(child_yang_name == "bgpRcvdPathAttrTable")
    {
        if(bgprcvdpathattrtable == nullptr)
        {
            bgprcvdpathattrtable = std::make_shared<BGP4MIB::Bgprcvdpathattrtable>();
        }
        return bgprcvdpathattrtable;
    }

    if(child_yang_name == "bgp4PathAttrTable")
    {
        if(bgp4pathattrtable == nullptr)
        {
            bgp4pathattrtable = std::make_shared<BGP4MIB::Bgp4Pathattrtable>();
        }
        return bgp4pathattrtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BGP4MIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(bgppeertable != nullptr)
    {
        children["bgpPeerTable"] = bgppeertable;
    }

    if(bgprcvdpathattrtable != nullptr)
    {
        children["bgpRcvdPathAttrTable"] = bgprcvdpathattrtable;
    }

    if(bgp4pathattrtable != nullptr)
    {
        children["bgp4PathAttrTable"] = bgp4pathattrtable;
    }

    return children;
}

void BGP4MIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BGP4MIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> BGP4MIB::clone_ptr() const
{
    return std::make_shared<BGP4MIB>();
}

std::string BGP4MIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string BGP4MIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function BGP4MIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BGP4MIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool BGP4MIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "bgpPeerTable" || name == "bgpRcvdPathAttrTable" || name == "bgp4PathAttrTable")
        return true;
    return false;
}

BGP4MIB::Bgp::Bgp()
    :
    bgpversion{YType::str, "bgpVersion"},
    bgplocalas{YType::int32, "bgpLocalAs"},
    bgpidentifier{YType::str, "bgpIdentifier"}
{

    yang_name = "bgp"; yang_parent_name = "BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

BGP4MIB::Bgp::~Bgp()
{
}

bool BGP4MIB::Bgp::has_data() const
{
    return bgpversion.is_set
	|| bgplocalas.is_set
	|| bgpidentifier.is_set;
}

bool BGP4MIB::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgpversion.yfilter)
	|| ydk::is_set(bgplocalas.yfilter)
	|| ydk::is_set(bgpidentifier.yfilter);
}

std::string BGP4MIB::Bgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BGP4-MIB:BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string BGP4MIB::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BGP4MIB::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgpversion.is_set || is_set(bgpversion.yfilter)) leaf_name_data.push_back(bgpversion.get_name_leafdata());
    if (bgplocalas.is_set || is_set(bgplocalas.yfilter)) leaf_name_data.push_back(bgplocalas.get_name_leafdata());
    if (bgpidentifier.is_set || is_set(bgpidentifier.yfilter)) leaf_name_data.push_back(bgpidentifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BGP4MIB::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BGP4MIB::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BGP4MIB::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgpVersion")
    {
        bgpversion = value;
        bgpversion.value_namespace = name_space;
        bgpversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpLocalAs")
    {
        bgplocalas = value;
        bgplocalas.value_namespace = name_space;
        bgplocalas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpIdentifier")
    {
        bgpidentifier = value;
        bgpidentifier.value_namespace = name_space;
        bgpidentifier.value_namespace_prefix = name_space_prefix;
    }
}

void BGP4MIB::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgpVersion")
    {
        bgpversion.yfilter = yfilter;
    }
    if(value_path == "bgpLocalAs")
    {
        bgplocalas.yfilter = yfilter;
    }
    if(value_path == "bgpIdentifier")
    {
        bgpidentifier.yfilter = yfilter;
    }
}

bool BGP4MIB::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgpVersion" || name == "bgpLocalAs" || name == "bgpIdentifier")
        return true;
    return false;
}

BGP4MIB::Bgppeertable::Bgppeertable()
{

    yang_name = "bgpPeerTable"; yang_parent_name = "BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

BGP4MIB::Bgppeertable::~Bgppeertable()
{
}

bool BGP4MIB::Bgppeertable::has_data() const
{
    for (std::size_t index=0; index<bgppeerentry.size(); index++)
    {
        if(bgppeerentry[index]->has_data())
            return true;
    }
    return false;
}

bool BGP4MIB::Bgppeertable::has_operation() const
{
    for (std::size_t index=0; index<bgppeerentry.size(); index++)
    {
        if(bgppeerentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BGP4MIB::Bgppeertable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BGP4-MIB:BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string BGP4MIB::Bgppeertable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgpPeerTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BGP4MIB::Bgppeertable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BGP4MIB::Bgppeertable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgpPeerEntry")
    {
        for(auto const & c : bgppeerentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BGP4MIB::Bgppeertable::Bgppeerentry>();
        c->parent = this;
        bgppeerentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BGP4MIB::Bgppeertable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgppeerentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BGP4MIB::Bgppeertable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BGP4MIB::Bgppeertable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BGP4MIB::Bgppeertable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgpPeerEntry")
        return true;
    return false;
}

BGP4MIB::Bgppeertable::Bgppeerentry::Bgppeerentry()
    :
    bgppeerremoteaddr{YType::str, "bgpPeerRemoteAddr"},
    bgppeeridentifier{YType::str, "bgpPeerIdentifier"},
    bgppeerstate{YType::enumeration, "bgpPeerState"},
    bgppeeradminstatus{YType::enumeration, "bgpPeerAdminStatus"},
    bgppeernegotiatedversion{YType::int32, "bgpPeerNegotiatedVersion"},
    bgppeerlocaladdr{YType::str, "bgpPeerLocalAddr"},
    bgppeerlocalport{YType::int32, "bgpPeerLocalPort"},
    bgppeerremoteport{YType::int32, "bgpPeerRemotePort"},
    bgppeerremoteas{YType::int32, "bgpPeerRemoteAs"},
    bgppeerinupdates{YType::uint32, "bgpPeerInUpdates"},
    bgppeeroutupdates{YType::uint32, "bgpPeerOutUpdates"},
    bgppeerintotalmessages{YType::uint32, "bgpPeerInTotalMessages"},
    bgppeerouttotalmessages{YType::uint32, "bgpPeerOutTotalMessages"},
    bgppeerlasterror{YType::str, "bgpPeerLastError"},
    bgppeerfsmestablishedtransitions{YType::uint32, "bgpPeerFsmEstablishedTransitions"},
    bgppeerfsmestablishedtime{YType::uint32, "bgpPeerFsmEstablishedTime"},
    bgppeerconnectretryinterval{YType::int32, "bgpPeerConnectRetryInterval"},
    bgppeerholdtime{YType::int32, "bgpPeerHoldTime"},
    bgppeerkeepalive{YType::int32, "bgpPeerKeepAlive"},
    bgppeerholdtimeconfigured{YType::int32, "bgpPeerHoldTimeConfigured"},
    bgppeerkeepaliveconfigured{YType::int32, "bgpPeerKeepAliveConfigured"},
    bgppeerminasoriginationinterval{YType::int32, "bgpPeerMinASOriginationInterval"},
    bgppeerminrouteadvertisementinterval{YType::int32, "bgpPeerMinRouteAdvertisementInterval"},
    bgppeerinupdateelapsedtime{YType::uint32, "bgpPeerInUpdateElapsedTime"},
    cbgppeerprefixaccepted{YType::uint32, "CISCO-BGP4-MIB:cbgpPeerPrefixAccepted"},
    cbgppeerprefixdenied{YType::uint32, "CISCO-BGP4-MIB:cbgpPeerPrefixDenied"},
    cbgppeerprefixlimit{YType::uint32, "CISCO-BGP4-MIB:cbgpPeerPrefixLimit"},
    cbgppeerprefixadvertised{YType::uint32, "CISCO-BGP4-MIB:cbgpPeerPrefixAdvertised"},
    cbgppeerprefixsuppressed{YType::uint32, "CISCO-BGP4-MIB:cbgpPeerPrefixSuppressed"},
    cbgppeerprefixwithdrawn{YType::uint32, "CISCO-BGP4-MIB:cbgpPeerPrefixWithdrawn"},
    cbgppeerlasterrortxt{YType::str, "CISCO-BGP4-MIB:cbgpPeerLastErrorTxt"},
    cbgppeerprevstate{YType::enumeration, "CISCO-BGP4-MIB:cbgpPeerPrevState"}
{

    yang_name = "bgpPeerEntry"; yang_parent_name = "bgpPeerTable"; is_top_level_class = false; has_list_ancestor = false;
}

BGP4MIB::Bgppeertable::Bgppeerentry::~Bgppeerentry()
{
}

bool BGP4MIB::Bgppeertable::Bgppeerentry::has_data() const
{
    return bgppeerremoteaddr.is_set
	|| bgppeeridentifier.is_set
	|| bgppeerstate.is_set
	|| bgppeeradminstatus.is_set
	|| bgppeernegotiatedversion.is_set
	|| bgppeerlocaladdr.is_set
	|| bgppeerlocalport.is_set
	|| bgppeerremoteport.is_set
	|| bgppeerremoteas.is_set
	|| bgppeerinupdates.is_set
	|| bgppeeroutupdates.is_set
	|| bgppeerintotalmessages.is_set
	|| bgppeerouttotalmessages.is_set
	|| bgppeerlasterror.is_set
	|| bgppeerfsmestablishedtransitions.is_set
	|| bgppeerfsmestablishedtime.is_set
	|| bgppeerconnectretryinterval.is_set
	|| bgppeerholdtime.is_set
	|| bgppeerkeepalive.is_set
	|| bgppeerholdtimeconfigured.is_set
	|| bgppeerkeepaliveconfigured.is_set
	|| bgppeerminasoriginationinterval.is_set
	|| bgppeerminrouteadvertisementinterval.is_set
	|| bgppeerinupdateelapsedtime.is_set
	|| cbgppeerprefixaccepted.is_set
	|| cbgppeerprefixdenied.is_set
	|| cbgppeerprefixlimit.is_set
	|| cbgppeerprefixadvertised.is_set
	|| cbgppeerprefixsuppressed.is_set
	|| cbgppeerprefixwithdrawn.is_set
	|| cbgppeerlasterrortxt.is_set
	|| cbgppeerprevstate.is_set;
}

bool BGP4MIB::Bgppeertable::Bgppeerentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgppeerremoteaddr.yfilter)
	|| ydk::is_set(bgppeeridentifier.yfilter)
	|| ydk::is_set(bgppeerstate.yfilter)
	|| ydk::is_set(bgppeeradminstatus.yfilter)
	|| ydk::is_set(bgppeernegotiatedversion.yfilter)
	|| ydk::is_set(bgppeerlocaladdr.yfilter)
	|| ydk::is_set(bgppeerlocalport.yfilter)
	|| ydk::is_set(bgppeerremoteport.yfilter)
	|| ydk::is_set(bgppeerremoteas.yfilter)
	|| ydk::is_set(bgppeerinupdates.yfilter)
	|| ydk::is_set(bgppeeroutupdates.yfilter)
	|| ydk::is_set(bgppeerintotalmessages.yfilter)
	|| ydk::is_set(bgppeerouttotalmessages.yfilter)
	|| ydk::is_set(bgppeerlasterror.yfilter)
	|| ydk::is_set(bgppeerfsmestablishedtransitions.yfilter)
	|| ydk::is_set(bgppeerfsmestablishedtime.yfilter)
	|| ydk::is_set(bgppeerconnectretryinterval.yfilter)
	|| ydk::is_set(bgppeerholdtime.yfilter)
	|| ydk::is_set(bgppeerkeepalive.yfilter)
	|| ydk::is_set(bgppeerholdtimeconfigured.yfilter)
	|| ydk::is_set(bgppeerkeepaliveconfigured.yfilter)
	|| ydk::is_set(bgppeerminasoriginationinterval.yfilter)
	|| ydk::is_set(bgppeerminrouteadvertisementinterval.yfilter)
	|| ydk::is_set(bgppeerinupdateelapsedtime.yfilter)
	|| ydk::is_set(cbgppeerprefixaccepted.yfilter)
	|| ydk::is_set(cbgppeerprefixdenied.yfilter)
	|| ydk::is_set(cbgppeerprefixlimit.yfilter)
	|| ydk::is_set(cbgppeerprefixadvertised.yfilter)
	|| ydk::is_set(cbgppeerprefixsuppressed.yfilter)
	|| ydk::is_set(cbgppeerprefixwithdrawn.yfilter)
	|| ydk::is_set(cbgppeerlasterrortxt.yfilter)
	|| ydk::is_set(cbgppeerprevstate.yfilter);
}

std::string BGP4MIB::Bgppeertable::Bgppeerentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BGP4-MIB:BGP4-MIB/bgpPeerTable/" << get_segment_path();
    return path_buffer.str();
}

std::string BGP4MIB::Bgppeertable::Bgppeerentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgpPeerEntry" <<"[bgpPeerRemoteAddr='" <<bgppeerremoteaddr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BGP4MIB::Bgppeertable::Bgppeerentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgppeerremoteaddr.is_set || is_set(bgppeerremoteaddr.yfilter)) leaf_name_data.push_back(bgppeerremoteaddr.get_name_leafdata());
    if (bgppeeridentifier.is_set || is_set(bgppeeridentifier.yfilter)) leaf_name_data.push_back(bgppeeridentifier.get_name_leafdata());
    if (bgppeerstate.is_set || is_set(bgppeerstate.yfilter)) leaf_name_data.push_back(bgppeerstate.get_name_leafdata());
    if (bgppeeradminstatus.is_set || is_set(bgppeeradminstatus.yfilter)) leaf_name_data.push_back(bgppeeradminstatus.get_name_leafdata());
    if (bgppeernegotiatedversion.is_set || is_set(bgppeernegotiatedversion.yfilter)) leaf_name_data.push_back(bgppeernegotiatedversion.get_name_leafdata());
    if (bgppeerlocaladdr.is_set || is_set(bgppeerlocaladdr.yfilter)) leaf_name_data.push_back(bgppeerlocaladdr.get_name_leafdata());
    if (bgppeerlocalport.is_set || is_set(bgppeerlocalport.yfilter)) leaf_name_data.push_back(bgppeerlocalport.get_name_leafdata());
    if (bgppeerremoteport.is_set || is_set(bgppeerremoteport.yfilter)) leaf_name_data.push_back(bgppeerremoteport.get_name_leafdata());
    if (bgppeerremoteas.is_set || is_set(bgppeerremoteas.yfilter)) leaf_name_data.push_back(bgppeerremoteas.get_name_leafdata());
    if (bgppeerinupdates.is_set || is_set(bgppeerinupdates.yfilter)) leaf_name_data.push_back(bgppeerinupdates.get_name_leafdata());
    if (bgppeeroutupdates.is_set || is_set(bgppeeroutupdates.yfilter)) leaf_name_data.push_back(bgppeeroutupdates.get_name_leafdata());
    if (bgppeerintotalmessages.is_set || is_set(bgppeerintotalmessages.yfilter)) leaf_name_data.push_back(bgppeerintotalmessages.get_name_leafdata());
    if (bgppeerouttotalmessages.is_set || is_set(bgppeerouttotalmessages.yfilter)) leaf_name_data.push_back(bgppeerouttotalmessages.get_name_leafdata());
    if (bgppeerlasterror.is_set || is_set(bgppeerlasterror.yfilter)) leaf_name_data.push_back(bgppeerlasterror.get_name_leafdata());
    if (bgppeerfsmestablishedtransitions.is_set || is_set(bgppeerfsmestablishedtransitions.yfilter)) leaf_name_data.push_back(bgppeerfsmestablishedtransitions.get_name_leafdata());
    if (bgppeerfsmestablishedtime.is_set || is_set(bgppeerfsmestablishedtime.yfilter)) leaf_name_data.push_back(bgppeerfsmestablishedtime.get_name_leafdata());
    if (bgppeerconnectretryinterval.is_set || is_set(bgppeerconnectretryinterval.yfilter)) leaf_name_data.push_back(bgppeerconnectretryinterval.get_name_leafdata());
    if (bgppeerholdtime.is_set || is_set(bgppeerholdtime.yfilter)) leaf_name_data.push_back(bgppeerholdtime.get_name_leafdata());
    if (bgppeerkeepalive.is_set || is_set(bgppeerkeepalive.yfilter)) leaf_name_data.push_back(bgppeerkeepalive.get_name_leafdata());
    if (bgppeerholdtimeconfigured.is_set || is_set(bgppeerholdtimeconfigured.yfilter)) leaf_name_data.push_back(bgppeerholdtimeconfigured.get_name_leafdata());
    if (bgppeerkeepaliveconfigured.is_set || is_set(bgppeerkeepaliveconfigured.yfilter)) leaf_name_data.push_back(bgppeerkeepaliveconfigured.get_name_leafdata());
    if (bgppeerminasoriginationinterval.is_set || is_set(bgppeerminasoriginationinterval.yfilter)) leaf_name_data.push_back(bgppeerminasoriginationinterval.get_name_leafdata());
    if (bgppeerminrouteadvertisementinterval.is_set || is_set(bgppeerminrouteadvertisementinterval.yfilter)) leaf_name_data.push_back(bgppeerminrouteadvertisementinterval.get_name_leafdata());
    if (bgppeerinupdateelapsedtime.is_set || is_set(bgppeerinupdateelapsedtime.yfilter)) leaf_name_data.push_back(bgppeerinupdateelapsedtime.get_name_leafdata());
    if (cbgppeerprefixaccepted.is_set || is_set(cbgppeerprefixaccepted.yfilter)) leaf_name_data.push_back(cbgppeerprefixaccepted.get_name_leafdata());
    if (cbgppeerprefixdenied.is_set || is_set(cbgppeerprefixdenied.yfilter)) leaf_name_data.push_back(cbgppeerprefixdenied.get_name_leafdata());
    if (cbgppeerprefixlimit.is_set || is_set(cbgppeerprefixlimit.yfilter)) leaf_name_data.push_back(cbgppeerprefixlimit.get_name_leafdata());
    if (cbgppeerprefixadvertised.is_set || is_set(cbgppeerprefixadvertised.yfilter)) leaf_name_data.push_back(cbgppeerprefixadvertised.get_name_leafdata());
    if (cbgppeerprefixsuppressed.is_set || is_set(cbgppeerprefixsuppressed.yfilter)) leaf_name_data.push_back(cbgppeerprefixsuppressed.get_name_leafdata());
    if (cbgppeerprefixwithdrawn.is_set || is_set(cbgppeerprefixwithdrawn.yfilter)) leaf_name_data.push_back(cbgppeerprefixwithdrawn.get_name_leafdata());
    if (cbgppeerlasterrortxt.is_set || is_set(cbgppeerlasterrortxt.yfilter)) leaf_name_data.push_back(cbgppeerlasterrortxt.get_name_leafdata());
    if (cbgppeerprevstate.is_set || is_set(cbgppeerprevstate.yfilter)) leaf_name_data.push_back(cbgppeerprevstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BGP4MIB::Bgppeertable::Bgppeerentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BGP4MIB::Bgppeertable::Bgppeerentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BGP4MIB::Bgppeertable::Bgppeerentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr = value;
        bgppeerremoteaddr.value_namespace = name_space;
        bgppeerremoteaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerIdentifier")
    {
        bgppeeridentifier = value;
        bgppeeridentifier.value_namespace = name_space;
        bgppeeridentifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerState")
    {
        bgppeerstate = value;
        bgppeerstate.value_namespace = name_space;
        bgppeerstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerAdminStatus")
    {
        bgppeeradminstatus = value;
        bgppeeradminstatus.value_namespace = name_space;
        bgppeeradminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerNegotiatedVersion")
    {
        bgppeernegotiatedversion = value;
        bgppeernegotiatedversion.value_namespace = name_space;
        bgppeernegotiatedversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerLocalAddr")
    {
        bgppeerlocaladdr = value;
        bgppeerlocaladdr.value_namespace = name_space;
        bgppeerlocaladdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerLocalPort")
    {
        bgppeerlocalport = value;
        bgppeerlocalport.value_namespace = name_space;
        bgppeerlocalport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerRemotePort")
    {
        bgppeerremoteport = value;
        bgppeerremoteport.value_namespace = name_space;
        bgppeerremoteport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerRemoteAs")
    {
        bgppeerremoteas = value;
        bgppeerremoteas.value_namespace = name_space;
        bgppeerremoteas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerInUpdates")
    {
        bgppeerinupdates = value;
        bgppeerinupdates.value_namespace = name_space;
        bgppeerinupdates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerOutUpdates")
    {
        bgppeeroutupdates = value;
        bgppeeroutupdates.value_namespace = name_space;
        bgppeeroutupdates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerInTotalMessages")
    {
        bgppeerintotalmessages = value;
        bgppeerintotalmessages.value_namespace = name_space;
        bgppeerintotalmessages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerOutTotalMessages")
    {
        bgppeerouttotalmessages = value;
        bgppeerouttotalmessages.value_namespace = name_space;
        bgppeerouttotalmessages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerLastError")
    {
        bgppeerlasterror = value;
        bgppeerlasterror.value_namespace = name_space;
        bgppeerlasterror.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerFsmEstablishedTransitions")
    {
        bgppeerfsmestablishedtransitions = value;
        bgppeerfsmestablishedtransitions.value_namespace = name_space;
        bgppeerfsmestablishedtransitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerFsmEstablishedTime")
    {
        bgppeerfsmestablishedtime = value;
        bgppeerfsmestablishedtime.value_namespace = name_space;
        bgppeerfsmestablishedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerConnectRetryInterval")
    {
        bgppeerconnectretryinterval = value;
        bgppeerconnectretryinterval.value_namespace = name_space;
        bgppeerconnectretryinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerHoldTime")
    {
        bgppeerholdtime = value;
        bgppeerholdtime.value_namespace = name_space;
        bgppeerholdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerKeepAlive")
    {
        bgppeerkeepalive = value;
        bgppeerkeepalive.value_namespace = name_space;
        bgppeerkeepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerHoldTimeConfigured")
    {
        bgppeerholdtimeconfigured = value;
        bgppeerholdtimeconfigured.value_namespace = name_space;
        bgppeerholdtimeconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerKeepAliveConfigured")
    {
        bgppeerkeepaliveconfigured = value;
        bgppeerkeepaliveconfigured.value_namespace = name_space;
        bgppeerkeepaliveconfigured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerMinASOriginationInterval")
    {
        bgppeerminasoriginationinterval = value;
        bgppeerminasoriginationinterval.value_namespace = name_space;
        bgppeerminasoriginationinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerMinRouteAdvertisementInterval")
    {
        bgppeerminrouteadvertisementinterval = value;
        bgppeerminrouteadvertisementinterval.value_namespace = name_space;
        bgppeerminrouteadvertisementinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPeerInUpdateElapsedTime")
    {
        bgppeerinupdateelapsedtime = value;
        bgppeerinupdateelapsedtime.value_namespace = name_space;
        bgppeerinupdateelapsedtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-BGP4-MIB:cbgpPeerPrefixAccepted")
    {
        cbgppeerprefixaccepted = value;
        cbgppeerprefixaccepted.value_namespace = name_space;
        cbgppeerprefixaccepted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-BGP4-MIB:cbgpPeerPrefixDenied")
    {
        cbgppeerprefixdenied = value;
        cbgppeerprefixdenied.value_namespace = name_space;
        cbgppeerprefixdenied.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-BGP4-MIB:cbgpPeerPrefixLimit")
    {
        cbgppeerprefixlimit = value;
        cbgppeerprefixlimit.value_namespace = name_space;
        cbgppeerprefixlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-BGP4-MIB:cbgpPeerPrefixAdvertised")
    {
        cbgppeerprefixadvertised = value;
        cbgppeerprefixadvertised.value_namespace = name_space;
        cbgppeerprefixadvertised.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-BGP4-MIB:cbgpPeerPrefixSuppressed")
    {
        cbgppeerprefixsuppressed = value;
        cbgppeerprefixsuppressed.value_namespace = name_space;
        cbgppeerprefixsuppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-BGP4-MIB:cbgpPeerPrefixWithdrawn")
    {
        cbgppeerprefixwithdrawn = value;
        cbgppeerprefixwithdrawn.value_namespace = name_space;
        cbgppeerprefixwithdrawn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-BGP4-MIB:cbgpPeerLastErrorTxt")
    {
        cbgppeerlasterrortxt = value;
        cbgppeerlasterrortxt.value_namespace = name_space;
        cbgppeerlasterrortxt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CISCO-BGP4-MIB:cbgpPeerPrevState")
    {
        cbgppeerprevstate = value;
        cbgppeerprevstate.value_namespace = name_space;
        cbgppeerprevstate.value_namespace_prefix = name_space_prefix;
    }
}

void BGP4MIB::Bgppeertable::Bgppeerentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr.yfilter = yfilter;
    }
    if(value_path == "bgpPeerIdentifier")
    {
        bgppeeridentifier.yfilter = yfilter;
    }
    if(value_path == "bgpPeerState")
    {
        bgppeerstate.yfilter = yfilter;
    }
    if(value_path == "bgpPeerAdminStatus")
    {
        bgppeeradminstatus.yfilter = yfilter;
    }
    if(value_path == "bgpPeerNegotiatedVersion")
    {
        bgppeernegotiatedversion.yfilter = yfilter;
    }
    if(value_path == "bgpPeerLocalAddr")
    {
        bgppeerlocaladdr.yfilter = yfilter;
    }
    if(value_path == "bgpPeerLocalPort")
    {
        bgppeerlocalport.yfilter = yfilter;
    }
    if(value_path == "bgpPeerRemotePort")
    {
        bgppeerremoteport.yfilter = yfilter;
    }
    if(value_path == "bgpPeerRemoteAs")
    {
        bgppeerremoteas.yfilter = yfilter;
    }
    if(value_path == "bgpPeerInUpdates")
    {
        bgppeerinupdates.yfilter = yfilter;
    }
    if(value_path == "bgpPeerOutUpdates")
    {
        bgppeeroutupdates.yfilter = yfilter;
    }
    if(value_path == "bgpPeerInTotalMessages")
    {
        bgppeerintotalmessages.yfilter = yfilter;
    }
    if(value_path == "bgpPeerOutTotalMessages")
    {
        bgppeerouttotalmessages.yfilter = yfilter;
    }
    if(value_path == "bgpPeerLastError")
    {
        bgppeerlasterror.yfilter = yfilter;
    }
    if(value_path == "bgpPeerFsmEstablishedTransitions")
    {
        bgppeerfsmestablishedtransitions.yfilter = yfilter;
    }
    if(value_path == "bgpPeerFsmEstablishedTime")
    {
        bgppeerfsmestablishedtime.yfilter = yfilter;
    }
    if(value_path == "bgpPeerConnectRetryInterval")
    {
        bgppeerconnectretryinterval.yfilter = yfilter;
    }
    if(value_path == "bgpPeerHoldTime")
    {
        bgppeerholdtime.yfilter = yfilter;
    }
    if(value_path == "bgpPeerKeepAlive")
    {
        bgppeerkeepalive.yfilter = yfilter;
    }
    if(value_path == "bgpPeerHoldTimeConfigured")
    {
        bgppeerholdtimeconfigured.yfilter = yfilter;
    }
    if(value_path == "bgpPeerKeepAliveConfigured")
    {
        bgppeerkeepaliveconfigured.yfilter = yfilter;
    }
    if(value_path == "bgpPeerMinASOriginationInterval")
    {
        bgppeerminasoriginationinterval.yfilter = yfilter;
    }
    if(value_path == "bgpPeerMinRouteAdvertisementInterval")
    {
        bgppeerminrouteadvertisementinterval.yfilter = yfilter;
    }
    if(value_path == "bgpPeerInUpdateElapsedTime")
    {
        bgppeerinupdateelapsedtime.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerPrefixAccepted")
    {
        cbgppeerprefixaccepted.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerPrefixDenied")
    {
        cbgppeerprefixdenied.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerPrefixLimit")
    {
        cbgppeerprefixlimit.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerPrefixAdvertised")
    {
        cbgppeerprefixadvertised.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerPrefixSuppressed")
    {
        cbgppeerprefixsuppressed.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerPrefixWithdrawn")
    {
        cbgppeerprefixwithdrawn.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerLastErrorTxt")
    {
        cbgppeerlasterrortxt.yfilter = yfilter;
    }
    if(value_path == "cbgpPeerPrevState")
    {
        cbgppeerprevstate.yfilter = yfilter;
    }
}

bool BGP4MIB::Bgppeertable::Bgppeerentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgpPeerRemoteAddr" || name == "bgpPeerIdentifier" || name == "bgpPeerState" || name == "bgpPeerAdminStatus" || name == "bgpPeerNegotiatedVersion" || name == "bgpPeerLocalAddr" || name == "bgpPeerLocalPort" || name == "bgpPeerRemotePort" || name == "bgpPeerRemoteAs" || name == "bgpPeerInUpdates" || name == "bgpPeerOutUpdates" || name == "bgpPeerInTotalMessages" || name == "bgpPeerOutTotalMessages" || name == "bgpPeerLastError" || name == "bgpPeerFsmEstablishedTransitions" || name == "bgpPeerFsmEstablishedTime" || name == "bgpPeerConnectRetryInterval" || name == "bgpPeerHoldTime" || name == "bgpPeerKeepAlive" || name == "bgpPeerHoldTimeConfigured" || name == "bgpPeerKeepAliveConfigured" || name == "bgpPeerMinASOriginationInterval" || name == "bgpPeerMinRouteAdvertisementInterval" || name == "bgpPeerInUpdateElapsedTime" || name == "cbgpPeerPrefixAccepted" || name == "cbgpPeerPrefixDenied" || name == "cbgpPeerPrefixLimit" || name == "cbgpPeerPrefixAdvertised" || name == "cbgpPeerPrefixSuppressed" || name == "cbgpPeerPrefixWithdrawn" || name == "cbgpPeerLastErrorTxt" || name == "cbgpPeerPrevState")
        return true;
    return false;
}

BGP4MIB::Bgprcvdpathattrtable::Bgprcvdpathattrtable()
{

    yang_name = "bgpRcvdPathAttrTable"; yang_parent_name = "BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

BGP4MIB::Bgprcvdpathattrtable::~Bgprcvdpathattrtable()
{
}

bool BGP4MIB::Bgprcvdpathattrtable::has_data() const
{
    for (std::size_t index=0; index<bgppathattrentry.size(); index++)
    {
        if(bgppathattrentry[index]->has_data())
            return true;
    }
    return false;
}

bool BGP4MIB::Bgprcvdpathattrtable::has_operation() const
{
    for (std::size_t index=0; index<bgppathattrentry.size(); index++)
    {
        if(bgppathattrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BGP4MIB::Bgprcvdpathattrtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BGP4-MIB:BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string BGP4MIB::Bgprcvdpathattrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgpRcvdPathAttrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BGP4MIB::Bgprcvdpathattrtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BGP4MIB::Bgprcvdpathattrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgpPathAttrEntry")
    {
        for(auto const & c : bgppathattrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry>();
        c->parent = this;
        bgppathattrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BGP4MIB::Bgprcvdpathattrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgppathattrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BGP4MIB::Bgprcvdpathattrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BGP4MIB::Bgprcvdpathattrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BGP4MIB::Bgprcvdpathattrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgpPathAttrEntry")
        return true;
    return false;
}

BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry::Bgppathattrentry()
    :
    bgppathattrdestnetwork{YType::str, "bgpPathAttrDestNetwork"},
    bgppathattrpeer{YType::str, "bgpPathAttrPeer"},
    bgppathattrorigin{YType::enumeration, "bgpPathAttrOrigin"},
    bgppathattraspath{YType::str, "bgpPathAttrASPath"},
    bgppathattrnexthop{YType::str, "bgpPathAttrNextHop"},
    bgppathattrinterasmetric{YType::int32, "bgpPathAttrInterASMetric"}
{

    yang_name = "bgpPathAttrEntry"; yang_parent_name = "bgpRcvdPathAttrTable"; is_top_level_class = false; has_list_ancestor = false;
}

BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry::~Bgppathattrentry()
{
}

bool BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry::has_data() const
{
    return bgppathattrdestnetwork.is_set
	|| bgppathattrpeer.is_set
	|| bgppathattrorigin.is_set
	|| bgppathattraspath.is_set
	|| bgppathattrnexthop.is_set
	|| bgppathattrinterasmetric.is_set;
}

bool BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgppathattrdestnetwork.yfilter)
	|| ydk::is_set(bgppathattrpeer.yfilter)
	|| ydk::is_set(bgppathattrorigin.yfilter)
	|| ydk::is_set(bgppathattraspath.yfilter)
	|| ydk::is_set(bgppathattrnexthop.yfilter)
	|| ydk::is_set(bgppathattrinterasmetric.yfilter);
}

std::string BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BGP4-MIB:BGP4-MIB/bgpRcvdPathAttrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgpPathAttrEntry" <<"[bgpPathAttrDestNetwork='" <<bgppathattrdestnetwork <<"']" <<"[bgpPathAttrPeer='" <<bgppathattrpeer <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgppathattrdestnetwork.is_set || is_set(bgppathattrdestnetwork.yfilter)) leaf_name_data.push_back(bgppathattrdestnetwork.get_name_leafdata());
    if (bgppathattrpeer.is_set || is_set(bgppathattrpeer.yfilter)) leaf_name_data.push_back(bgppathattrpeer.get_name_leafdata());
    if (bgppathattrorigin.is_set || is_set(bgppathattrorigin.yfilter)) leaf_name_data.push_back(bgppathattrorigin.get_name_leafdata());
    if (bgppathattraspath.is_set || is_set(bgppathattraspath.yfilter)) leaf_name_data.push_back(bgppathattraspath.get_name_leafdata());
    if (bgppathattrnexthop.is_set || is_set(bgppathattrnexthop.yfilter)) leaf_name_data.push_back(bgppathattrnexthop.get_name_leafdata());
    if (bgppathattrinterasmetric.is_set || is_set(bgppathattrinterasmetric.yfilter)) leaf_name_data.push_back(bgppathattrinterasmetric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgpPathAttrDestNetwork")
    {
        bgppathattrdestnetwork = value;
        bgppathattrdestnetwork.value_namespace = name_space;
        bgppathattrdestnetwork.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPathAttrPeer")
    {
        bgppathattrpeer = value;
        bgppathattrpeer.value_namespace = name_space;
        bgppathattrpeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPathAttrOrigin")
    {
        bgppathattrorigin = value;
        bgppathattrorigin.value_namespace = name_space;
        bgppathattrorigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPathAttrASPath")
    {
        bgppathattraspath = value;
        bgppathattraspath.value_namespace = name_space;
        bgppathattraspath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPathAttrNextHop")
    {
        bgppathattrnexthop = value;
        bgppathattrnexthop.value_namespace = name_space;
        bgppathattrnexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgpPathAttrInterASMetric")
    {
        bgppathattrinterasmetric = value;
        bgppathattrinterasmetric.value_namespace = name_space;
        bgppathattrinterasmetric.value_namespace_prefix = name_space_prefix;
    }
}

void BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgpPathAttrDestNetwork")
    {
        bgppathattrdestnetwork.yfilter = yfilter;
    }
    if(value_path == "bgpPathAttrPeer")
    {
        bgppathattrpeer.yfilter = yfilter;
    }
    if(value_path == "bgpPathAttrOrigin")
    {
        bgppathattrorigin.yfilter = yfilter;
    }
    if(value_path == "bgpPathAttrASPath")
    {
        bgppathattraspath.yfilter = yfilter;
    }
    if(value_path == "bgpPathAttrNextHop")
    {
        bgppathattrnexthop.yfilter = yfilter;
    }
    if(value_path == "bgpPathAttrInterASMetric")
    {
        bgppathattrinterasmetric.yfilter = yfilter;
    }
}

bool BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgpPathAttrDestNetwork" || name == "bgpPathAttrPeer" || name == "bgpPathAttrOrigin" || name == "bgpPathAttrASPath" || name == "bgpPathAttrNextHop" || name == "bgpPathAttrInterASMetric")
        return true;
    return false;
}

BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrtable()
{

    yang_name = "bgp4PathAttrTable"; yang_parent_name = "BGP4-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

BGP4MIB::Bgp4Pathattrtable::~Bgp4Pathattrtable()
{
}

bool BGP4MIB::Bgp4Pathattrtable::has_data() const
{
    for (std::size_t index=0; index<bgp4pathattrentry.size(); index++)
    {
        if(bgp4pathattrentry[index]->has_data())
            return true;
    }
    return false;
}

bool BGP4MIB::Bgp4Pathattrtable::has_operation() const
{
    for (std::size_t index=0; index<bgp4pathattrentry.size(); index++)
    {
        if(bgp4pathattrentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BGP4MIB::Bgp4Pathattrtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BGP4-MIB:BGP4-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string BGP4MIB::Bgp4Pathattrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp4PathAttrTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BGP4MIB::Bgp4Pathattrtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BGP4MIB::Bgp4Pathattrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp4PathAttrEntry")
    {
        for(auto const & c : bgp4pathattrentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry>();
        c->parent = this;
        bgp4pathattrentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BGP4MIB::Bgp4Pathattrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp4pathattrentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BGP4MIB::Bgp4Pathattrtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BGP4MIB::Bgp4Pathattrtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BGP4MIB::Bgp4Pathattrtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp4PathAttrEntry")
        return true;
    return false;
}

BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4Pathattrentry()
    :
    bgp4pathattripaddrprefix{YType::str, "bgp4PathAttrIpAddrPrefix"},
    bgp4pathattripaddrprefixlen{YType::int32, "bgp4PathAttrIpAddrPrefixLen"},
    bgp4pathattrpeer{YType::str, "bgp4PathAttrPeer"},
    bgp4pathattrorigin{YType::enumeration, "bgp4PathAttrOrigin"},
    bgp4pathattraspathsegment{YType::str, "bgp4PathAttrASPathSegment"},
    bgp4pathattrnexthop{YType::str, "bgp4PathAttrNextHop"},
    bgp4pathattrmultiexitdisc{YType::int32, "bgp4PathAttrMultiExitDisc"},
    bgp4pathattrlocalpref{YType::int32, "bgp4PathAttrLocalPref"},
    bgp4pathattratomicaggregate{YType::enumeration, "bgp4PathAttrAtomicAggregate"},
    bgp4pathattraggregatoras{YType::int32, "bgp4PathAttrAggregatorAS"},
    bgp4pathattraggregatoraddr{YType::str, "bgp4PathAttrAggregatorAddr"},
    bgp4pathattrcalclocalpref{YType::int32, "bgp4PathAttrCalcLocalPref"},
    bgp4pathattrbest{YType::enumeration, "bgp4PathAttrBest"},
    bgp4pathattrunknown{YType::str, "bgp4PathAttrUnknown"}
{

    yang_name = "bgp4PathAttrEntry"; yang_parent_name = "bgp4PathAttrTable"; is_top_level_class = false; has_list_ancestor = false;
}

BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::~Bgp4Pathattrentry()
{
}

bool BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::has_data() const
{
    return bgp4pathattripaddrprefix.is_set
	|| bgp4pathattripaddrprefixlen.is_set
	|| bgp4pathattrpeer.is_set
	|| bgp4pathattrorigin.is_set
	|| bgp4pathattraspathsegment.is_set
	|| bgp4pathattrnexthop.is_set
	|| bgp4pathattrmultiexitdisc.is_set
	|| bgp4pathattrlocalpref.is_set
	|| bgp4pathattratomicaggregate.is_set
	|| bgp4pathattraggregatoras.is_set
	|| bgp4pathattraggregatoraddr.is_set
	|| bgp4pathattrcalclocalpref.is_set
	|| bgp4pathattrbest.is_set
	|| bgp4pathattrunknown.is_set;
}

bool BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp4pathattripaddrprefix.yfilter)
	|| ydk::is_set(bgp4pathattripaddrprefixlen.yfilter)
	|| ydk::is_set(bgp4pathattrpeer.yfilter)
	|| ydk::is_set(bgp4pathattrorigin.yfilter)
	|| ydk::is_set(bgp4pathattraspathsegment.yfilter)
	|| ydk::is_set(bgp4pathattrnexthop.yfilter)
	|| ydk::is_set(bgp4pathattrmultiexitdisc.yfilter)
	|| ydk::is_set(bgp4pathattrlocalpref.yfilter)
	|| ydk::is_set(bgp4pathattratomicaggregate.yfilter)
	|| ydk::is_set(bgp4pathattraggregatoras.yfilter)
	|| ydk::is_set(bgp4pathattraggregatoraddr.yfilter)
	|| ydk::is_set(bgp4pathattrcalclocalpref.yfilter)
	|| ydk::is_set(bgp4pathattrbest.yfilter)
	|| ydk::is_set(bgp4pathattrunknown.yfilter);
}

std::string BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "BGP4-MIB:BGP4-MIB/bgp4PathAttrTable/" << get_segment_path();
    return path_buffer.str();
}

std::string BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp4PathAttrEntry" <<"[bgp4PathAttrIpAddrPrefix='" <<bgp4pathattripaddrprefix <<"']" <<"[bgp4PathAttrIpAddrPrefixLen='" <<bgp4pathattripaddrprefixlen <<"']" <<"[bgp4PathAttrPeer='" <<bgp4pathattrpeer <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp4pathattripaddrprefix.is_set || is_set(bgp4pathattripaddrprefix.yfilter)) leaf_name_data.push_back(bgp4pathattripaddrprefix.get_name_leafdata());
    if (bgp4pathattripaddrprefixlen.is_set || is_set(bgp4pathattripaddrprefixlen.yfilter)) leaf_name_data.push_back(bgp4pathattripaddrprefixlen.get_name_leafdata());
    if (bgp4pathattrpeer.is_set || is_set(bgp4pathattrpeer.yfilter)) leaf_name_data.push_back(bgp4pathattrpeer.get_name_leafdata());
    if (bgp4pathattrorigin.is_set || is_set(bgp4pathattrorigin.yfilter)) leaf_name_data.push_back(bgp4pathattrorigin.get_name_leafdata());
    if (bgp4pathattraspathsegment.is_set || is_set(bgp4pathattraspathsegment.yfilter)) leaf_name_data.push_back(bgp4pathattraspathsegment.get_name_leafdata());
    if (bgp4pathattrnexthop.is_set || is_set(bgp4pathattrnexthop.yfilter)) leaf_name_data.push_back(bgp4pathattrnexthop.get_name_leafdata());
    if (bgp4pathattrmultiexitdisc.is_set || is_set(bgp4pathattrmultiexitdisc.yfilter)) leaf_name_data.push_back(bgp4pathattrmultiexitdisc.get_name_leafdata());
    if (bgp4pathattrlocalpref.is_set || is_set(bgp4pathattrlocalpref.yfilter)) leaf_name_data.push_back(bgp4pathattrlocalpref.get_name_leafdata());
    if (bgp4pathattratomicaggregate.is_set || is_set(bgp4pathattratomicaggregate.yfilter)) leaf_name_data.push_back(bgp4pathattratomicaggregate.get_name_leafdata());
    if (bgp4pathattraggregatoras.is_set || is_set(bgp4pathattraggregatoras.yfilter)) leaf_name_data.push_back(bgp4pathattraggregatoras.get_name_leafdata());
    if (bgp4pathattraggregatoraddr.is_set || is_set(bgp4pathattraggregatoraddr.yfilter)) leaf_name_data.push_back(bgp4pathattraggregatoraddr.get_name_leafdata());
    if (bgp4pathattrcalclocalpref.is_set || is_set(bgp4pathattrcalclocalpref.yfilter)) leaf_name_data.push_back(bgp4pathattrcalclocalpref.get_name_leafdata());
    if (bgp4pathattrbest.is_set || is_set(bgp4pathattrbest.yfilter)) leaf_name_data.push_back(bgp4pathattrbest.get_name_leafdata());
    if (bgp4pathattrunknown.is_set || is_set(bgp4pathattrunknown.yfilter)) leaf_name_data.push_back(bgp4pathattrunknown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp4PathAttrIpAddrPrefix")
    {
        bgp4pathattripaddrprefix = value;
        bgp4pathattripaddrprefix.value_namespace = name_space;
        bgp4pathattripaddrprefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp4PathAttrIpAddrPrefixLen")
    {
        bgp4pathattripaddrprefixlen = value;
        bgp4pathattripaddrprefixlen.value_namespace = name_space;
        bgp4pathattripaddrprefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp4PathAttrPeer")
    {
        bgp4pathattrpeer = value;
        bgp4pathattrpeer.value_namespace = name_space;
        bgp4pathattrpeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp4PathAttrOrigin")
    {
        bgp4pathattrorigin = value;
        bgp4pathattrorigin.value_namespace = name_space;
        bgp4pathattrorigin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp4PathAttrASPathSegment")
    {
        bgp4pathattraspathsegment = value;
        bgp4pathattraspathsegment.value_namespace = name_space;
        bgp4pathattraspathsegment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp4PathAttrNextHop")
    {
        bgp4pathattrnexthop = value;
        bgp4pathattrnexthop.value_namespace = name_space;
        bgp4pathattrnexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp4PathAttrMultiExitDisc")
    {
        bgp4pathattrmultiexitdisc = value;
        bgp4pathattrmultiexitdisc.value_namespace = name_space;
        bgp4pathattrmultiexitdisc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp4PathAttrLocalPref")
    {
        bgp4pathattrlocalpref = value;
        bgp4pathattrlocalpref.value_namespace = name_space;
        bgp4pathattrlocalpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp4PathAttrAtomicAggregate")
    {
        bgp4pathattratomicaggregate = value;
        bgp4pathattratomicaggregate.value_namespace = name_space;
        bgp4pathattratomicaggregate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp4PathAttrAggregatorAS")
    {
        bgp4pathattraggregatoras = value;
        bgp4pathattraggregatoras.value_namespace = name_space;
        bgp4pathattraggregatoras.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp4PathAttrAggregatorAddr")
    {
        bgp4pathattraggregatoraddr = value;
        bgp4pathattraggregatoraddr.value_namespace = name_space;
        bgp4pathattraggregatoraddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp4PathAttrCalcLocalPref")
    {
        bgp4pathattrcalclocalpref = value;
        bgp4pathattrcalclocalpref.value_namespace = name_space;
        bgp4pathattrcalclocalpref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp4PathAttrBest")
    {
        bgp4pathattrbest = value;
        bgp4pathattrbest.value_namespace = name_space;
        bgp4pathattrbest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp4PathAttrUnknown")
    {
        bgp4pathattrunknown = value;
        bgp4pathattrunknown.value_namespace = name_space;
        bgp4pathattrunknown.value_namespace_prefix = name_space_prefix;
    }
}

void BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp4PathAttrIpAddrPrefix")
    {
        bgp4pathattripaddrprefix.yfilter = yfilter;
    }
    if(value_path == "bgp4PathAttrIpAddrPrefixLen")
    {
        bgp4pathattripaddrprefixlen.yfilter = yfilter;
    }
    if(value_path == "bgp4PathAttrPeer")
    {
        bgp4pathattrpeer.yfilter = yfilter;
    }
    if(value_path == "bgp4PathAttrOrigin")
    {
        bgp4pathattrorigin.yfilter = yfilter;
    }
    if(value_path == "bgp4PathAttrASPathSegment")
    {
        bgp4pathattraspathsegment.yfilter = yfilter;
    }
    if(value_path == "bgp4PathAttrNextHop")
    {
        bgp4pathattrnexthop.yfilter = yfilter;
    }
    if(value_path == "bgp4PathAttrMultiExitDisc")
    {
        bgp4pathattrmultiexitdisc.yfilter = yfilter;
    }
    if(value_path == "bgp4PathAttrLocalPref")
    {
        bgp4pathattrlocalpref.yfilter = yfilter;
    }
    if(value_path == "bgp4PathAttrAtomicAggregate")
    {
        bgp4pathattratomicaggregate.yfilter = yfilter;
    }
    if(value_path == "bgp4PathAttrAggregatorAS")
    {
        bgp4pathattraggregatoras.yfilter = yfilter;
    }
    if(value_path == "bgp4PathAttrAggregatorAddr")
    {
        bgp4pathattraggregatoraddr.yfilter = yfilter;
    }
    if(value_path == "bgp4PathAttrCalcLocalPref")
    {
        bgp4pathattrcalclocalpref.yfilter = yfilter;
    }
    if(value_path == "bgp4PathAttrBest")
    {
        bgp4pathattrbest.yfilter = yfilter;
    }
    if(value_path == "bgp4PathAttrUnknown")
    {
        bgp4pathattrunknown.yfilter = yfilter;
    }
}

bool BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp4PathAttrIpAddrPrefix" || name == "bgp4PathAttrIpAddrPrefixLen" || name == "bgp4PathAttrPeer" || name == "bgp4PathAttrOrigin" || name == "bgp4PathAttrASPathSegment" || name == "bgp4PathAttrNextHop" || name == "bgp4PathAttrMultiExitDisc" || name == "bgp4PathAttrLocalPref" || name == "bgp4PathAttrAtomicAggregate" || name == "bgp4PathAttrAggregatorAS" || name == "bgp4PathAttrAggregatorAddr" || name == "bgp4PathAttrCalcLocalPref" || name == "bgp4PathAttrBest" || name == "bgp4PathAttrUnknown")
        return true;
    return false;
}

const Enum::YLeaf BGP4MIB::Bgppeertable::Bgppeerentry::Bgppeerstate::idle {1, "idle"};
const Enum::YLeaf BGP4MIB::Bgppeertable::Bgppeerentry::Bgppeerstate::connect {2, "connect"};
const Enum::YLeaf BGP4MIB::Bgppeertable::Bgppeerentry::Bgppeerstate::active {3, "active"};
const Enum::YLeaf BGP4MIB::Bgppeertable::Bgppeerentry::Bgppeerstate::opensent {4, "opensent"};
const Enum::YLeaf BGP4MIB::Bgppeertable::Bgppeerentry::Bgppeerstate::openconfirm {5, "openconfirm"};
const Enum::YLeaf BGP4MIB::Bgppeertable::Bgppeerentry::Bgppeerstate::established {6, "established"};

const Enum::YLeaf BGP4MIB::Bgppeertable::Bgppeerentry::Bgppeeradminstatus::stop {1, "stop"};
const Enum::YLeaf BGP4MIB::Bgppeertable::Bgppeerentry::Bgppeeradminstatus::start {2, "start"};

const Enum::YLeaf BGP4MIB::Bgppeertable::Bgppeerentry::Cbgppeerprevstate::none {0, "none"};
const Enum::YLeaf BGP4MIB::Bgppeertable::Bgppeerentry::Cbgppeerprevstate::idle {1, "idle"};
const Enum::YLeaf BGP4MIB::Bgppeertable::Bgppeerentry::Cbgppeerprevstate::connect {2, "connect"};
const Enum::YLeaf BGP4MIB::Bgppeertable::Bgppeerentry::Cbgppeerprevstate::active {3, "active"};
const Enum::YLeaf BGP4MIB::Bgppeertable::Bgppeerentry::Cbgppeerprevstate::opensent {4, "opensent"};
const Enum::YLeaf BGP4MIB::Bgppeertable::Bgppeerentry::Cbgppeerprevstate::openconfirm {5, "openconfirm"};
const Enum::YLeaf BGP4MIB::Bgppeertable::Bgppeerentry::Cbgppeerprevstate::established {6, "established"};

const Enum::YLeaf BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry::Bgppathattrorigin::igp {1, "igp"};
const Enum::YLeaf BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry::Bgppathattrorigin::egp {2, "egp"};
const Enum::YLeaf BGP4MIB::Bgprcvdpathattrtable::Bgppathattrentry::Bgppathattrorigin::incomplete {3, "incomplete"};

const Enum::YLeaf BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4Pathattrorigin::igp {1, "igp"};
const Enum::YLeaf BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4Pathattrorigin::egp {2, "egp"};
const Enum::YLeaf BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4Pathattrorigin::incomplete {3, "incomplete"};

const Enum::YLeaf BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4Pathattratomicaggregate::lessSpecificRrouteNotSelected {1, "lessSpecificRrouteNotSelected"};
const Enum::YLeaf BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4Pathattratomicaggregate::lessSpecificRouteSelected {2, "lessSpecificRouteSelected"};

const Enum::YLeaf BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4Pathattrbest::false_ {1, "false"};
const Enum::YLeaf BGP4MIB::Bgp4Pathattrtable::Bgp4Pathattrentry::Bgp4Pathattrbest::true_ {2, "true"};


}
}

