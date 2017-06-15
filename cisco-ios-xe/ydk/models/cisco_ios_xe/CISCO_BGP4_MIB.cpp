
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_BGP4_MIB.hpp"

namespace ydk {
namespace CISCO_BGP4_MIB {

CiscoBgp4Mib::CiscoBgp4Mib()
    :
    cbgpglobal_(std::make_shared<CiscoBgp4Mib::Cbgpglobal>())
	,cbgppeer2addrfamilyprefixtable_(std::make_shared<CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable>())
	,cbgppeer2addrfamilytable_(std::make_shared<CiscoBgp4Mib::Cbgppeer2Addrfamilytable>())
	,cbgppeer2capstable_(std::make_shared<CiscoBgp4Mib::Cbgppeer2Capstable>())
	,cbgppeer2table_(std::make_shared<CiscoBgp4Mib::Cbgppeer2Table>())
	,cbgppeeraddrfamilyprefixtable_(std::make_shared<CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable>())
	,cbgppeeraddrfamilytable_(std::make_shared<CiscoBgp4Mib::Cbgppeeraddrfamilytable>())
	,cbgppeercapstable_(std::make_shared<CiscoBgp4Mib::Cbgppeercapstable>())
	,cbgproutetable_(std::make_shared<CiscoBgp4Mib::Cbgproutetable>())
{
    cbgpglobal_->parent = this;

    cbgppeer2addrfamilyprefixtable_->parent = this;

    cbgppeer2addrfamilytable_->parent = this;

    cbgppeer2capstable_->parent = this;

    cbgppeer2table_->parent = this;

    cbgppeeraddrfamilyprefixtable_->parent = this;

    cbgppeeraddrfamilytable_->parent = this;

    cbgppeercapstable_->parent = this;

    cbgproutetable_->parent = this;

    yang_name = "CISCO-BGP4-MIB"; yang_parent_name = "CISCO-BGP4-MIB";
}

CiscoBgp4Mib::~CiscoBgp4Mib()
{
}

bool CiscoBgp4Mib::has_data() const
{
    return (cbgpglobal_ !=  nullptr && cbgpglobal_->has_data())
	|| (cbgppeer2addrfamilyprefixtable_ !=  nullptr && cbgppeer2addrfamilyprefixtable_->has_data())
	|| (cbgppeer2addrfamilytable_ !=  nullptr && cbgppeer2addrfamilytable_->has_data())
	|| (cbgppeer2capstable_ !=  nullptr && cbgppeer2capstable_->has_data())
	|| (cbgppeer2table_ !=  nullptr && cbgppeer2table_->has_data())
	|| (cbgppeeraddrfamilyprefixtable_ !=  nullptr && cbgppeeraddrfamilyprefixtable_->has_data())
	|| (cbgppeeraddrfamilytable_ !=  nullptr && cbgppeeraddrfamilytable_->has_data())
	|| (cbgppeercapstable_ !=  nullptr && cbgppeercapstable_->has_data())
	|| (cbgproutetable_ !=  nullptr && cbgproutetable_->has_data());
}

bool CiscoBgp4Mib::has_operation() const
{
    return is_set(operation)
	|| (cbgpglobal_ !=  nullptr && cbgpglobal_->has_operation())
	|| (cbgppeer2addrfamilyprefixtable_ !=  nullptr && cbgppeer2addrfamilyprefixtable_->has_operation())
	|| (cbgppeer2addrfamilytable_ !=  nullptr && cbgppeer2addrfamilytable_->has_operation())
	|| (cbgppeer2capstable_ !=  nullptr && cbgppeer2capstable_->has_operation())
	|| (cbgppeer2table_ !=  nullptr && cbgppeer2table_->has_operation())
	|| (cbgppeeraddrfamilyprefixtable_ !=  nullptr && cbgppeeraddrfamilyprefixtable_->has_operation())
	|| (cbgppeeraddrfamilytable_ !=  nullptr && cbgppeeraddrfamilytable_->has_operation())
	|| (cbgppeercapstable_ !=  nullptr && cbgppeercapstable_->has_operation())
	|| (cbgproutetable_ !=  nullptr && cbgproutetable_->has_operation());
}

std::string CiscoBgp4Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoBgp4Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpGlobal")
    {
        if(cbgpglobal_ == nullptr)
        {
            cbgpglobal_ = std::make_shared<CiscoBgp4Mib::Cbgpglobal>();
        }
        return cbgpglobal_;
    }

    if(child_yang_name == "cbgpPeer2AddrFamilyPrefixTable")
    {
        if(cbgppeer2addrfamilyprefixtable_ == nullptr)
        {
            cbgppeer2addrfamilyprefixtable_ = std::make_shared<CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable>();
        }
        return cbgppeer2addrfamilyprefixtable_;
    }

    if(child_yang_name == "cbgpPeer2AddrFamilyTable")
    {
        if(cbgppeer2addrfamilytable_ == nullptr)
        {
            cbgppeer2addrfamilytable_ = std::make_shared<CiscoBgp4Mib::Cbgppeer2Addrfamilytable>();
        }
        return cbgppeer2addrfamilytable_;
    }

    if(child_yang_name == "cbgpPeer2CapsTable")
    {
        if(cbgppeer2capstable_ == nullptr)
        {
            cbgppeer2capstable_ = std::make_shared<CiscoBgp4Mib::Cbgppeer2Capstable>();
        }
        return cbgppeer2capstable_;
    }

    if(child_yang_name == "cbgpPeer2Table")
    {
        if(cbgppeer2table_ == nullptr)
        {
            cbgppeer2table_ = std::make_shared<CiscoBgp4Mib::Cbgppeer2Table>();
        }
        return cbgppeer2table_;
    }

    if(child_yang_name == "cbgpPeerAddrFamilyPrefixTable")
    {
        if(cbgppeeraddrfamilyprefixtable_ == nullptr)
        {
            cbgppeeraddrfamilyprefixtable_ = std::make_shared<CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable>();
        }
        return cbgppeeraddrfamilyprefixtable_;
    }

    if(child_yang_name == "cbgpPeerAddrFamilyTable")
    {
        if(cbgppeeraddrfamilytable_ == nullptr)
        {
            cbgppeeraddrfamilytable_ = std::make_shared<CiscoBgp4Mib::Cbgppeeraddrfamilytable>();
        }
        return cbgppeeraddrfamilytable_;
    }

    if(child_yang_name == "cbgpPeerCapsTable")
    {
        if(cbgppeercapstable_ == nullptr)
        {
            cbgppeercapstable_ = std::make_shared<CiscoBgp4Mib::Cbgppeercapstable>();
        }
        return cbgppeercapstable_;
    }

    if(child_yang_name == "cbgpRouteTable")
    {
        if(cbgproutetable_ == nullptr)
        {
            cbgproutetable_ = std::make_shared<CiscoBgp4Mib::Cbgproutetable>();
        }
        return cbgproutetable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cbgpglobal_ != nullptr)
    {
        children["cbgpGlobal"] = cbgpglobal_;
    }

    if(cbgppeer2addrfamilyprefixtable_ != nullptr)
    {
        children["cbgpPeer2AddrFamilyPrefixTable"] = cbgppeer2addrfamilyprefixtable_;
    }

    if(cbgppeer2addrfamilytable_ != nullptr)
    {
        children["cbgpPeer2AddrFamilyTable"] = cbgppeer2addrfamilytable_;
    }

    if(cbgppeer2capstable_ != nullptr)
    {
        children["cbgpPeer2CapsTable"] = cbgppeer2capstable_;
    }

    if(cbgppeer2table_ != nullptr)
    {
        children["cbgpPeer2Table"] = cbgppeer2table_;
    }

    if(cbgppeeraddrfamilyprefixtable_ != nullptr)
    {
        children["cbgpPeerAddrFamilyPrefixTable"] = cbgppeeraddrfamilyprefixtable_;
    }

    if(cbgppeeraddrfamilytable_ != nullptr)
    {
        children["cbgpPeerAddrFamilyTable"] = cbgppeeraddrfamilytable_;
    }

    if(cbgppeercapstable_ != nullptr)
    {
        children["cbgpPeerCapsTable"] = cbgppeercapstable_;
    }

    if(cbgproutetable_ != nullptr)
    {
        children["cbgpRouteTable"] = cbgproutetable_;
    }

    return children;
}

void CiscoBgp4Mib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoBgp4Mib::clone_ptr() const
{
    return std::make_shared<CiscoBgp4Mib>();
}

std::string CiscoBgp4Mib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoBgp4Mib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoBgp4Mib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoBgp4Mib::Cbgpglobal::Cbgpglobal()
    :
    cbgplocalas{YType::uint32, "cbgpLocalAs"},
    cbgpnotifsenable{YType::bits, "cbgpNotifsEnable"}
{
    yang_name = "cbgpGlobal"; yang_parent_name = "CISCO-BGP4-MIB";
}

CiscoBgp4Mib::Cbgpglobal::~Cbgpglobal()
{
}

bool CiscoBgp4Mib::Cbgpglobal::has_data() const
{
    return cbgplocalas.is_set
	|| cbgpnotifsenable.is_set;
}

bool CiscoBgp4Mib::Cbgpglobal::has_operation() const
{
    return is_set(operation)
	|| is_set(cbgplocalas.operation)
	|| is_set(cbgpnotifsenable.operation);
}

std::string CiscoBgp4Mib::Cbgpglobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpGlobal";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::Cbgpglobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgplocalas.is_set || is_set(cbgplocalas.operation)) leaf_name_data.push_back(cbgplocalas.get_name_leafdata());
    if (cbgpnotifsenable.is_set || is_set(cbgpnotifsenable.operation)) leaf_name_data.push_back(cbgpnotifsenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgp4Mib::Cbgpglobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::Cbgpglobal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoBgp4Mib::Cbgpglobal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cbgpLocalAs")
    {
        cbgplocalas = value;
    }
    if(value_path == "cbgpNotifsEnable")
    {
        cbgpnotifsenable[value] = true;
    }
}

CiscoBgp4Mib::Cbgproutetable::Cbgproutetable()
{
    yang_name = "cbgpRouteTable"; yang_parent_name = "CISCO-BGP4-MIB";
}

CiscoBgp4Mib::Cbgproutetable::~Cbgproutetable()
{
}

bool CiscoBgp4Mib::Cbgproutetable::has_data() const
{
    for (std::size_t index=0; index<cbgprouteentry_.size(); index++)
    {
        if(cbgprouteentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoBgp4Mib::Cbgproutetable::has_operation() const
{
    for (std::size_t index=0; index<cbgprouteentry_.size(); index++)
    {
        if(cbgprouteentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoBgp4Mib::Cbgproutetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpRouteTable";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::Cbgproutetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgp4Mib::Cbgproutetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpRouteEntry")
    {
        for(auto const & c : cbgprouteentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry>();
        c->parent = this;
        cbgprouteentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::Cbgproutetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbgprouteentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoBgp4Mib::Cbgproutetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::Cbgprouteentry()
    :
    cbgprouteafi{YType::enumeration, "cbgpRouteAfi"},
    cbgproutesafi{YType::enumeration, "cbgpRouteSafi"},
    cbgproutepeertype{YType::enumeration, "cbgpRoutePeerType"},
    cbgproutepeer{YType::str, "cbgpRoutePeer"},
    cbgprouteaddrprefix{YType::str, "cbgpRouteAddrPrefix"},
    cbgprouteaddrprefixlen{YType::uint32, "cbgpRouteAddrPrefixLen"},
    cbgprouteaggregatoraddr{YType::str, "cbgpRouteAggregatorAddr"},
    cbgprouteaggregatoraddrtype{YType::enumeration, "cbgpRouteAggregatorAddrType"},
    cbgprouteaggregatoras{YType::uint32, "cbgpRouteAggregatorAS"},
    cbgprouteaspathsegment{YType::str, "cbgpRouteASPathSegment"},
    cbgprouteatomicaggregate{YType::enumeration, "cbgpRouteAtomicAggregate"},
    cbgproutebest{YType::boolean, "cbgpRouteBest"},
    cbgproutelocalpref{YType::uint32, "cbgpRouteLocalPref"},
    cbgproutelocalprefpresent{YType::boolean, "cbgpRouteLocalPrefPresent"},
    cbgproutemedpresent{YType::boolean, "cbgpRouteMedPresent"},
    cbgproutemultiexitdisc{YType::uint32, "cbgpRouteMultiExitDisc"},
    cbgproutenexthop{YType::str, "cbgpRouteNextHop"},
    cbgprouteorigin{YType::enumeration, "cbgpRouteOrigin"},
    cbgprouteunknownattr{YType::str, "cbgpRouteUnknownAttr"}
{
    yang_name = "cbgpRouteEntry"; yang_parent_name = "cbgpRouteTable";
}

CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::~Cbgprouteentry()
{
}

bool CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::has_data() const
{
    return cbgprouteafi.is_set
	|| cbgproutesafi.is_set
	|| cbgproutepeertype.is_set
	|| cbgproutepeer.is_set
	|| cbgprouteaddrprefix.is_set
	|| cbgprouteaddrprefixlen.is_set
	|| cbgprouteaggregatoraddr.is_set
	|| cbgprouteaggregatoraddrtype.is_set
	|| cbgprouteaggregatoras.is_set
	|| cbgprouteaspathsegment.is_set
	|| cbgprouteatomicaggregate.is_set
	|| cbgproutebest.is_set
	|| cbgproutelocalpref.is_set
	|| cbgproutelocalprefpresent.is_set
	|| cbgproutemedpresent.is_set
	|| cbgproutemultiexitdisc.is_set
	|| cbgproutenexthop.is_set
	|| cbgprouteorigin.is_set
	|| cbgprouteunknownattr.is_set;
}

bool CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cbgprouteafi.operation)
	|| is_set(cbgproutesafi.operation)
	|| is_set(cbgproutepeertype.operation)
	|| is_set(cbgproutepeer.operation)
	|| is_set(cbgprouteaddrprefix.operation)
	|| is_set(cbgprouteaddrprefixlen.operation)
	|| is_set(cbgprouteaggregatoraddr.operation)
	|| is_set(cbgprouteaggregatoraddrtype.operation)
	|| is_set(cbgprouteaggregatoras.operation)
	|| is_set(cbgprouteaspathsegment.operation)
	|| is_set(cbgprouteatomicaggregate.operation)
	|| is_set(cbgproutebest.operation)
	|| is_set(cbgproutelocalpref.operation)
	|| is_set(cbgproutelocalprefpresent.operation)
	|| is_set(cbgproutemedpresent.operation)
	|| is_set(cbgproutemultiexitdisc.operation)
	|| is_set(cbgproutenexthop.operation)
	|| is_set(cbgprouteorigin.operation)
	|| is_set(cbgprouteunknownattr.operation);
}

std::string CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpRouteEntry" <<"[cbgpRouteAfi='" <<cbgprouteafi <<"']" <<"[cbgpRouteSafi='" <<cbgproutesafi <<"']" <<"[cbgpRoutePeerType='" <<cbgproutepeertype <<"']" <<"[cbgpRoutePeer='" <<cbgproutepeer <<"']" <<"[cbgpRouteAddrPrefix='" <<cbgprouteaddrprefix <<"']" <<"[cbgpRouteAddrPrefixLen='" <<cbgprouteaddrprefixlen <<"']";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpRouteTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgprouteafi.is_set || is_set(cbgprouteafi.operation)) leaf_name_data.push_back(cbgprouteafi.get_name_leafdata());
    if (cbgproutesafi.is_set || is_set(cbgproutesafi.operation)) leaf_name_data.push_back(cbgproutesafi.get_name_leafdata());
    if (cbgproutepeertype.is_set || is_set(cbgproutepeertype.operation)) leaf_name_data.push_back(cbgproutepeertype.get_name_leafdata());
    if (cbgproutepeer.is_set || is_set(cbgproutepeer.operation)) leaf_name_data.push_back(cbgproutepeer.get_name_leafdata());
    if (cbgprouteaddrprefix.is_set || is_set(cbgprouteaddrprefix.operation)) leaf_name_data.push_back(cbgprouteaddrprefix.get_name_leafdata());
    if (cbgprouteaddrprefixlen.is_set || is_set(cbgprouteaddrprefixlen.operation)) leaf_name_data.push_back(cbgprouteaddrprefixlen.get_name_leafdata());
    if (cbgprouteaggregatoraddr.is_set || is_set(cbgprouteaggregatoraddr.operation)) leaf_name_data.push_back(cbgprouteaggregatoraddr.get_name_leafdata());
    if (cbgprouteaggregatoraddrtype.is_set || is_set(cbgprouteaggregatoraddrtype.operation)) leaf_name_data.push_back(cbgprouteaggregatoraddrtype.get_name_leafdata());
    if (cbgprouteaggregatoras.is_set || is_set(cbgprouteaggregatoras.operation)) leaf_name_data.push_back(cbgprouteaggregatoras.get_name_leafdata());
    if (cbgprouteaspathsegment.is_set || is_set(cbgprouteaspathsegment.operation)) leaf_name_data.push_back(cbgprouteaspathsegment.get_name_leafdata());
    if (cbgprouteatomicaggregate.is_set || is_set(cbgprouteatomicaggregate.operation)) leaf_name_data.push_back(cbgprouteatomicaggregate.get_name_leafdata());
    if (cbgproutebest.is_set || is_set(cbgproutebest.operation)) leaf_name_data.push_back(cbgproutebest.get_name_leafdata());
    if (cbgproutelocalpref.is_set || is_set(cbgproutelocalpref.operation)) leaf_name_data.push_back(cbgproutelocalpref.get_name_leafdata());
    if (cbgproutelocalprefpresent.is_set || is_set(cbgproutelocalprefpresent.operation)) leaf_name_data.push_back(cbgproutelocalprefpresent.get_name_leafdata());
    if (cbgproutemedpresent.is_set || is_set(cbgproutemedpresent.operation)) leaf_name_data.push_back(cbgproutemedpresent.get_name_leafdata());
    if (cbgproutemultiexitdisc.is_set || is_set(cbgproutemultiexitdisc.operation)) leaf_name_data.push_back(cbgproutemultiexitdisc.get_name_leafdata());
    if (cbgproutenexthop.is_set || is_set(cbgproutenexthop.operation)) leaf_name_data.push_back(cbgproutenexthop.get_name_leafdata());
    if (cbgprouteorigin.is_set || is_set(cbgprouteorigin.operation)) leaf_name_data.push_back(cbgprouteorigin.get_name_leafdata());
    if (cbgprouteunknownattr.is_set || is_set(cbgprouteunknownattr.operation)) leaf_name_data.push_back(cbgprouteunknownattr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cbgpRouteAfi")
    {
        cbgprouteafi = value;
    }
    if(value_path == "cbgpRouteSafi")
    {
        cbgproutesafi = value;
    }
    if(value_path == "cbgpRoutePeerType")
    {
        cbgproutepeertype = value;
    }
    if(value_path == "cbgpRoutePeer")
    {
        cbgproutepeer = value;
    }
    if(value_path == "cbgpRouteAddrPrefix")
    {
        cbgprouteaddrprefix = value;
    }
    if(value_path == "cbgpRouteAddrPrefixLen")
    {
        cbgprouteaddrprefixlen = value;
    }
    if(value_path == "cbgpRouteAggregatorAddr")
    {
        cbgprouteaggregatoraddr = value;
    }
    if(value_path == "cbgpRouteAggregatorAddrType")
    {
        cbgprouteaggregatoraddrtype = value;
    }
    if(value_path == "cbgpRouteAggregatorAS")
    {
        cbgprouteaggregatoras = value;
    }
    if(value_path == "cbgpRouteASPathSegment")
    {
        cbgprouteaspathsegment = value;
    }
    if(value_path == "cbgpRouteAtomicAggregate")
    {
        cbgprouteatomicaggregate = value;
    }
    if(value_path == "cbgpRouteBest")
    {
        cbgproutebest = value;
    }
    if(value_path == "cbgpRouteLocalPref")
    {
        cbgproutelocalpref = value;
    }
    if(value_path == "cbgpRouteLocalPrefPresent")
    {
        cbgproutelocalprefpresent = value;
    }
    if(value_path == "cbgpRouteMedPresent")
    {
        cbgproutemedpresent = value;
    }
    if(value_path == "cbgpRouteMultiExitDisc")
    {
        cbgproutemultiexitdisc = value;
    }
    if(value_path == "cbgpRouteNextHop")
    {
        cbgproutenexthop = value;
    }
    if(value_path == "cbgpRouteOrigin")
    {
        cbgprouteorigin = value;
    }
    if(value_path == "cbgpRouteUnknownAttr")
    {
        cbgprouteunknownattr = value;
    }
}

CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapstable()
{
    yang_name = "cbgpPeerCapsTable"; yang_parent_name = "CISCO-BGP4-MIB";
}

CiscoBgp4Mib::Cbgppeercapstable::~Cbgppeercapstable()
{
}

bool CiscoBgp4Mib::Cbgppeercapstable::has_data() const
{
    for (std::size_t index=0; index<cbgppeercapsentry_.size(); index++)
    {
        if(cbgppeercapsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoBgp4Mib::Cbgppeercapstable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeercapsentry_.size(); index++)
    {
        if(cbgppeercapsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoBgp4Mib::Cbgppeercapstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerCapsTable";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::Cbgppeercapstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgp4Mib::Cbgppeercapstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeerCapsEntry")
    {
        for(auto const & c : cbgppeercapsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry>();
        c->parent = this;
        cbgppeercapsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::Cbgppeercapstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbgppeercapsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoBgp4Mib::Cbgppeercapstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry::Cbgppeercapsentry()
    :
    bgppeerremoteaddr{YType::str, "bgpPeerRemoteAddr"},
    cbgppeercapcode{YType::enumeration, "cbgpPeerCapCode"},
    cbgppeercapindex{YType::uint32, "cbgpPeerCapIndex"},
    cbgppeercapvalue{YType::str, "cbgpPeerCapValue"}
{
    yang_name = "cbgpPeerCapsEntry"; yang_parent_name = "cbgpPeerCapsTable";
}

CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry::~Cbgppeercapsentry()
{
}

bool CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry::has_data() const
{
    return bgppeerremoteaddr.is_set
	|| cbgppeercapcode.is_set
	|| cbgppeercapindex.is_set
	|| cbgppeercapvalue.is_set;
}

bool CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(bgppeerremoteaddr.operation)
	|| is_set(cbgppeercapcode.operation)
	|| is_set(cbgppeercapindex.operation)
	|| is_set(cbgppeercapvalue.operation);
}

std::string CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerCapsEntry" <<"[bgpPeerRemoteAddr='" <<bgppeerremoteaddr <<"']" <<"[cbgpPeerCapCode='" <<cbgppeercapcode <<"']" <<"[cbgpPeerCapIndex='" <<cbgppeercapindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeerCapsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgppeerremoteaddr.is_set || is_set(bgppeerremoteaddr.operation)) leaf_name_data.push_back(bgppeerremoteaddr.get_name_leafdata());
    if (cbgppeercapcode.is_set || is_set(cbgppeercapcode.operation)) leaf_name_data.push_back(cbgppeercapcode.get_name_leafdata());
    if (cbgppeercapindex.is_set || is_set(cbgppeercapindex.operation)) leaf_name_data.push_back(cbgppeercapindex.get_name_leafdata());
    if (cbgppeercapvalue.is_set || is_set(cbgppeercapvalue.operation)) leaf_name_data.push_back(cbgppeercapvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr = value;
    }
    if(value_path == "cbgpPeerCapCode")
    {
        cbgppeercapcode = value;
    }
    if(value_path == "cbgpPeerCapIndex")
    {
        cbgppeercapindex = value;
    }
    if(value_path == "cbgpPeerCapValue")
    {
        cbgppeercapvalue = value;
    }
}

CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilytable()
{
    yang_name = "cbgpPeerAddrFamilyTable"; yang_parent_name = "CISCO-BGP4-MIB";
}

CiscoBgp4Mib::Cbgppeeraddrfamilytable::~Cbgppeeraddrfamilytable()
{
}

bool CiscoBgp4Mib::Cbgppeeraddrfamilytable::has_data() const
{
    for (std::size_t index=0; index<cbgppeeraddrfamilyentry_.size(); index++)
    {
        if(cbgppeeraddrfamilyentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoBgp4Mib::Cbgppeeraddrfamilytable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeeraddrfamilyentry_.size(); index++)
    {
        if(cbgppeeraddrfamilyentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoBgp4Mib::Cbgppeeraddrfamilytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerAddrFamilyTable";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::Cbgppeeraddrfamilytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgp4Mib::Cbgppeeraddrfamilytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeerAddrFamilyEntry")
    {
        for(auto const & c : cbgppeeraddrfamilyentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry>();
        c->parent = this;
        cbgppeeraddrfamilyentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::Cbgppeeraddrfamilytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbgppeeraddrfamilyentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoBgp4Mib::Cbgppeeraddrfamilytable::set_value(const std::string & value_path, std::string value)
{
}

CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::Cbgppeeraddrfamilyentry()
    :
    bgppeerremoteaddr{YType::str, "bgpPeerRemoteAddr"},
    cbgppeeraddrfamilyafi{YType::enumeration, "cbgpPeerAddrFamilyAfi"},
    cbgppeeraddrfamilysafi{YType::enumeration, "cbgpPeerAddrFamilySafi"},
    cbgppeeraddrfamilyname{YType::str, "cbgpPeerAddrFamilyName"}
{
    yang_name = "cbgpPeerAddrFamilyEntry"; yang_parent_name = "cbgpPeerAddrFamilyTable";
}

CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::~Cbgppeeraddrfamilyentry()
{
}

bool CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::has_data() const
{
    return bgppeerremoteaddr.is_set
	|| cbgppeeraddrfamilyafi.is_set
	|| cbgppeeraddrfamilysafi.is_set
	|| cbgppeeraddrfamilyname.is_set;
}

bool CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::has_operation() const
{
    return is_set(operation)
	|| is_set(bgppeerremoteaddr.operation)
	|| is_set(cbgppeeraddrfamilyafi.operation)
	|| is_set(cbgppeeraddrfamilysafi.operation)
	|| is_set(cbgppeeraddrfamilyname.operation);
}

std::string CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerAddrFamilyEntry" <<"[bgpPeerRemoteAddr='" <<bgppeerremoteaddr <<"']" <<"[cbgpPeerAddrFamilyAfi='" <<cbgppeeraddrfamilyafi <<"']" <<"[cbgpPeerAddrFamilySafi='" <<cbgppeeraddrfamilysafi <<"']";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeerAddrFamilyTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgppeerremoteaddr.is_set || is_set(bgppeerremoteaddr.operation)) leaf_name_data.push_back(bgppeerremoteaddr.get_name_leafdata());
    if (cbgppeeraddrfamilyafi.is_set || is_set(cbgppeeraddrfamilyafi.operation)) leaf_name_data.push_back(cbgppeeraddrfamilyafi.get_name_leafdata());
    if (cbgppeeraddrfamilysafi.is_set || is_set(cbgppeeraddrfamilysafi.operation)) leaf_name_data.push_back(cbgppeeraddrfamilysafi.get_name_leafdata());
    if (cbgppeeraddrfamilyname.is_set || is_set(cbgppeeraddrfamilyname.operation)) leaf_name_data.push_back(cbgppeeraddrfamilyname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoBgp4Mib::Cbgppeeraddrfamilytable::Cbgppeeraddrfamilyentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr = value;
    }
    if(value_path == "cbgpPeerAddrFamilyAfi")
    {
        cbgppeeraddrfamilyafi = value;
    }
    if(value_path == "cbgpPeerAddrFamilySafi")
    {
        cbgppeeraddrfamilysafi = value;
    }
    if(value_path == "cbgpPeerAddrFamilyName")
    {
        cbgppeeraddrfamilyname = value;
    }
}

CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixtable()
{
    yang_name = "cbgpPeerAddrFamilyPrefixTable"; yang_parent_name = "CISCO-BGP4-MIB";
}

CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::~Cbgppeeraddrfamilyprefixtable()
{
}

bool CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::has_data() const
{
    for (std::size_t index=0; index<cbgppeeraddrfamilyprefixentry_.size(); index++)
    {
        if(cbgppeeraddrfamilyprefixentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeeraddrfamilyprefixentry_.size(); index++)
    {
        if(cbgppeeraddrfamilyprefixentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerAddrFamilyPrefixTable";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeerAddrFamilyPrefixEntry")
    {
        for(auto const & c : cbgppeeraddrfamilyprefixentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry>();
        c->parent = this;
        cbgppeeraddrfamilyprefixentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbgppeeraddrfamilyprefixentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::Cbgppeeraddrfamilyprefixentry()
    :
    bgppeerremoteaddr{YType::str, "bgpPeerRemoteAddr"},
    cbgppeeraddrfamilyafi{YType::enumeration, "cbgpPeerAddrFamilyAfi"},
    cbgppeeraddrfamilysafi{YType::enumeration, "cbgpPeerAddrFamilySafi"},
    cbgppeeracceptedprefixes{YType::uint32, "cbgpPeerAcceptedPrefixes"},
    cbgppeeradvertisedprefixes{YType::uint32, "cbgpPeerAdvertisedPrefixes"},
    cbgppeerdeniedprefixes{YType::uint32, "cbgpPeerDeniedPrefixes"},
    cbgppeerprefixadminlimit{YType::uint32, "cbgpPeerPrefixAdminLimit"},
    cbgppeerprefixclearthreshold{YType::uint32, "cbgpPeerPrefixClearThreshold"},
    cbgppeerprefixthreshold{YType::uint32, "cbgpPeerPrefixThreshold"},
    cbgppeersuppressedprefixes{YType::uint32, "cbgpPeerSuppressedPrefixes"},
    cbgppeerwithdrawnprefixes{YType::uint32, "cbgpPeerWithdrawnPrefixes"}
{
    yang_name = "cbgpPeerAddrFamilyPrefixEntry"; yang_parent_name = "cbgpPeerAddrFamilyPrefixTable";
}

CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::~Cbgppeeraddrfamilyprefixentry()
{
}

bool CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::has_data() const
{
    return bgppeerremoteaddr.is_set
	|| cbgppeeraddrfamilyafi.is_set
	|| cbgppeeraddrfamilysafi.is_set
	|| cbgppeeracceptedprefixes.is_set
	|| cbgppeeradvertisedprefixes.is_set
	|| cbgppeerdeniedprefixes.is_set
	|| cbgppeerprefixadminlimit.is_set
	|| cbgppeerprefixclearthreshold.is_set
	|| cbgppeerprefixthreshold.is_set
	|| cbgppeersuppressedprefixes.is_set
	|| cbgppeerwithdrawnprefixes.is_set;
}

bool CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::has_operation() const
{
    return is_set(operation)
	|| is_set(bgppeerremoteaddr.operation)
	|| is_set(cbgppeeraddrfamilyafi.operation)
	|| is_set(cbgppeeraddrfamilysafi.operation)
	|| is_set(cbgppeeracceptedprefixes.operation)
	|| is_set(cbgppeeradvertisedprefixes.operation)
	|| is_set(cbgppeerdeniedprefixes.operation)
	|| is_set(cbgppeerprefixadminlimit.operation)
	|| is_set(cbgppeerprefixclearthreshold.operation)
	|| is_set(cbgppeerprefixthreshold.operation)
	|| is_set(cbgppeersuppressedprefixes.operation)
	|| is_set(cbgppeerwithdrawnprefixes.operation);
}

std::string CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeerAddrFamilyPrefixEntry" <<"[bgpPeerRemoteAddr='" <<bgppeerremoteaddr <<"']" <<"[cbgpPeerAddrFamilyAfi='" <<cbgppeeraddrfamilyafi <<"']" <<"[cbgpPeerAddrFamilySafi='" <<cbgppeeraddrfamilysafi <<"']";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeerAddrFamilyPrefixTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgppeerremoteaddr.is_set || is_set(bgppeerremoteaddr.operation)) leaf_name_data.push_back(bgppeerremoteaddr.get_name_leafdata());
    if (cbgppeeraddrfamilyafi.is_set || is_set(cbgppeeraddrfamilyafi.operation)) leaf_name_data.push_back(cbgppeeraddrfamilyafi.get_name_leafdata());
    if (cbgppeeraddrfamilysafi.is_set || is_set(cbgppeeraddrfamilysafi.operation)) leaf_name_data.push_back(cbgppeeraddrfamilysafi.get_name_leafdata());
    if (cbgppeeracceptedprefixes.is_set || is_set(cbgppeeracceptedprefixes.operation)) leaf_name_data.push_back(cbgppeeracceptedprefixes.get_name_leafdata());
    if (cbgppeeradvertisedprefixes.is_set || is_set(cbgppeeradvertisedprefixes.operation)) leaf_name_data.push_back(cbgppeeradvertisedprefixes.get_name_leafdata());
    if (cbgppeerdeniedprefixes.is_set || is_set(cbgppeerdeniedprefixes.operation)) leaf_name_data.push_back(cbgppeerdeniedprefixes.get_name_leafdata());
    if (cbgppeerprefixadminlimit.is_set || is_set(cbgppeerprefixadminlimit.operation)) leaf_name_data.push_back(cbgppeerprefixadminlimit.get_name_leafdata());
    if (cbgppeerprefixclearthreshold.is_set || is_set(cbgppeerprefixclearthreshold.operation)) leaf_name_data.push_back(cbgppeerprefixclearthreshold.get_name_leafdata());
    if (cbgppeerprefixthreshold.is_set || is_set(cbgppeerprefixthreshold.operation)) leaf_name_data.push_back(cbgppeerprefixthreshold.get_name_leafdata());
    if (cbgppeersuppressedprefixes.is_set || is_set(cbgppeersuppressedprefixes.operation)) leaf_name_data.push_back(cbgppeersuppressedprefixes.get_name_leafdata());
    if (cbgppeerwithdrawnprefixes.is_set || is_set(cbgppeerwithdrawnprefixes.operation)) leaf_name_data.push_back(cbgppeerwithdrawnprefixes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoBgp4Mib::Cbgppeeraddrfamilyprefixtable::Cbgppeeraddrfamilyprefixentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgpPeerRemoteAddr")
    {
        bgppeerremoteaddr = value;
    }
    if(value_path == "cbgpPeerAddrFamilyAfi")
    {
        cbgppeeraddrfamilyafi = value;
    }
    if(value_path == "cbgpPeerAddrFamilySafi")
    {
        cbgppeeraddrfamilysafi = value;
    }
    if(value_path == "cbgpPeerAcceptedPrefixes")
    {
        cbgppeeracceptedprefixes = value;
    }
    if(value_path == "cbgpPeerAdvertisedPrefixes")
    {
        cbgppeeradvertisedprefixes = value;
    }
    if(value_path == "cbgpPeerDeniedPrefixes")
    {
        cbgppeerdeniedprefixes = value;
    }
    if(value_path == "cbgpPeerPrefixAdminLimit")
    {
        cbgppeerprefixadminlimit = value;
    }
    if(value_path == "cbgpPeerPrefixClearThreshold")
    {
        cbgppeerprefixclearthreshold = value;
    }
    if(value_path == "cbgpPeerPrefixThreshold")
    {
        cbgppeerprefixthreshold = value;
    }
    if(value_path == "cbgpPeerSuppressedPrefixes")
    {
        cbgppeersuppressedprefixes = value;
    }
    if(value_path == "cbgpPeerWithdrawnPrefixes")
    {
        cbgppeerwithdrawnprefixes = value;
    }
}

CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Table()
{
    yang_name = "cbgpPeer2Table"; yang_parent_name = "CISCO-BGP4-MIB";
}

CiscoBgp4Mib::Cbgppeer2Table::~Cbgppeer2Table()
{
}

bool CiscoBgp4Mib::Cbgppeer2Table::has_data() const
{
    for (std::size_t index=0; index<cbgppeer2entry_.size(); index++)
    {
        if(cbgppeer2entry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoBgp4Mib::Cbgppeer2Table::has_operation() const
{
    for (std::size_t index=0; index<cbgppeer2entry_.size(); index++)
    {
        if(cbgppeer2entry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoBgp4Mib::Cbgppeer2Table::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2Table";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::Cbgppeer2Table::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgp4Mib::Cbgppeer2Table::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeer2Entry")
    {
        for(auto const & c : cbgppeer2entry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry>();
        c->parent = this;
        cbgppeer2entry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::Cbgppeer2Table::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbgppeer2entry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoBgp4Mib::Cbgppeer2Table::set_value(const std::string & value_path, std::string value)
{
}

CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2Entry()
    :
    cbgppeer2type{YType::enumeration, "cbgpPeer2Type"},
    cbgppeer2remoteaddr{YType::str, "cbgpPeer2RemoteAddr"},
    cbgppeer2adminstatus{YType::enumeration, "cbgpPeer2AdminStatus"},
    cbgppeer2connectretryinterval{YType::int32, "cbgpPeer2ConnectRetryInterval"},
    cbgppeer2fsmestablishedtime{YType::uint32, "cbgpPeer2FsmEstablishedTime"},
    cbgppeer2fsmestablishedtransitions{YType::uint32, "cbgpPeer2FsmEstablishedTransitions"},
    cbgppeer2holdtime{YType::int32, "cbgpPeer2HoldTime"},
    cbgppeer2holdtimeconfigured{YType::int32, "cbgpPeer2HoldTimeConfigured"},
    cbgppeer2intotalmessages{YType::uint32, "cbgpPeer2InTotalMessages"},
    cbgppeer2inupdateelapsedtime{YType::uint32, "cbgpPeer2InUpdateElapsedTime"},
    cbgppeer2inupdates{YType::uint32, "cbgpPeer2InUpdates"},
    cbgppeer2keepalive{YType::int32, "cbgpPeer2KeepAlive"},
    cbgppeer2keepaliveconfigured{YType::int32, "cbgpPeer2KeepAliveConfigured"},
    cbgppeer2lasterror{YType::str, "cbgpPeer2LastError"},
    cbgppeer2lasterrortxt{YType::str, "cbgpPeer2LastErrorTxt"},
    cbgppeer2localaddr{YType::str, "cbgpPeer2LocalAddr"},
    cbgppeer2localas{YType::uint32, "cbgpPeer2LocalAs"},
    cbgppeer2localidentifier{YType::str, "cbgpPeer2LocalIdentifier"},
    cbgppeer2localport{YType::uint16, "cbgpPeer2LocalPort"},
    cbgppeer2minasoriginationinterval{YType::int32, "cbgpPeer2MinASOriginationInterval"},
    cbgppeer2minrouteadvertisementinterval{YType::int32, "cbgpPeer2MinRouteAdvertisementInterval"},
    cbgppeer2negotiatedversion{YType::int32, "cbgpPeer2NegotiatedVersion"},
    cbgppeer2outtotalmessages{YType::uint32, "cbgpPeer2OutTotalMessages"},
    cbgppeer2outupdates{YType::uint32, "cbgpPeer2OutUpdates"},
    cbgppeer2prevstate{YType::enumeration, "cbgpPeer2PrevState"},
    cbgppeer2remoteas{YType::uint32, "cbgpPeer2RemoteAs"},
    cbgppeer2remoteidentifier{YType::str, "cbgpPeer2RemoteIdentifier"},
    cbgppeer2remoteport{YType::uint16, "cbgpPeer2RemotePort"},
    cbgppeer2state{YType::enumeration, "cbgpPeer2State"}
{
    yang_name = "cbgpPeer2Entry"; yang_parent_name = "cbgpPeer2Table";
}

CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::~Cbgppeer2Entry()
{
}

bool CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::has_data() const
{
    return cbgppeer2type.is_set
	|| cbgppeer2remoteaddr.is_set
	|| cbgppeer2adminstatus.is_set
	|| cbgppeer2connectretryinterval.is_set
	|| cbgppeer2fsmestablishedtime.is_set
	|| cbgppeer2fsmestablishedtransitions.is_set
	|| cbgppeer2holdtime.is_set
	|| cbgppeer2holdtimeconfigured.is_set
	|| cbgppeer2intotalmessages.is_set
	|| cbgppeer2inupdateelapsedtime.is_set
	|| cbgppeer2inupdates.is_set
	|| cbgppeer2keepalive.is_set
	|| cbgppeer2keepaliveconfigured.is_set
	|| cbgppeer2lasterror.is_set
	|| cbgppeer2lasterrortxt.is_set
	|| cbgppeer2localaddr.is_set
	|| cbgppeer2localas.is_set
	|| cbgppeer2localidentifier.is_set
	|| cbgppeer2localport.is_set
	|| cbgppeer2minasoriginationinterval.is_set
	|| cbgppeer2minrouteadvertisementinterval.is_set
	|| cbgppeer2negotiatedversion.is_set
	|| cbgppeer2outtotalmessages.is_set
	|| cbgppeer2outupdates.is_set
	|| cbgppeer2prevstate.is_set
	|| cbgppeer2remoteas.is_set
	|| cbgppeer2remoteidentifier.is_set
	|| cbgppeer2remoteport.is_set
	|| cbgppeer2state.is_set;
}

bool CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::has_operation() const
{
    return is_set(operation)
	|| is_set(cbgppeer2type.operation)
	|| is_set(cbgppeer2remoteaddr.operation)
	|| is_set(cbgppeer2adminstatus.operation)
	|| is_set(cbgppeer2connectretryinterval.operation)
	|| is_set(cbgppeer2fsmestablishedtime.operation)
	|| is_set(cbgppeer2fsmestablishedtransitions.operation)
	|| is_set(cbgppeer2holdtime.operation)
	|| is_set(cbgppeer2holdtimeconfigured.operation)
	|| is_set(cbgppeer2intotalmessages.operation)
	|| is_set(cbgppeer2inupdateelapsedtime.operation)
	|| is_set(cbgppeer2inupdates.operation)
	|| is_set(cbgppeer2keepalive.operation)
	|| is_set(cbgppeer2keepaliveconfigured.operation)
	|| is_set(cbgppeer2lasterror.operation)
	|| is_set(cbgppeer2lasterrortxt.operation)
	|| is_set(cbgppeer2localaddr.operation)
	|| is_set(cbgppeer2localas.operation)
	|| is_set(cbgppeer2localidentifier.operation)
	|| is_set(cbgppeer2localport.operation)
	|| is_set(cbgppeer2minasoriginationinterval.operation)
	|| is_set(cbgppeer2minrouteadvertisementinterval.operation)
	|| is_set(cbgppeer2negotiatedversion.operation)
	|| is_set(cbgppeer2outtotalmessages.operation)
	|| is_set(cbgppeer2outupdates.operation)
	|| is_set(cbgppeer2prevstate.operation)
	|| is_set(cbgppeer2remoteas.operation)
	|| is_set(cbgppeer2remoteidentifier.operation)
	|| is_set(cbgppeer2remoteport.operation)
	|| is_set(cbgppeer2state.operation);
}

std::string CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2Entry" <<"[cbgpPeer2Type='" <<cbgppeer2type <<"']" <<"[cbgpPeer2RemoteAddr='" <<cbgppeer2remoteaddr <<"']";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeer2Table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgppeer2type.is_set || is_set(cbgppeer2type.operation)) leaf_name_data.push_back(cbgppeer2type.get_name_leafdata());
    if (cbgppeer2remoteaddr.is_set || is_set(cbgppeer2remoteaddr.operation)) leaf_name_data.push_back(cbgppeer2remoteaddr.get_name_leafdata());
    if (cbgppeer2adminstatus.is_set || is_set(cbgppeer2adminstatus.operation)) leaf_name_data.push_back(cbgppeer2adminstatus.get_name_leafdata());
    if (cbgppeer2connectretryinterval.is_set || is_set(cbgppeer2connectretryinterval.operation)) leaf_name_data.push_back(cbgppeer2connectretryinterval.get_name_leafdata());
    if (cbgppeer2fsmestablishedtime.is_set || is_set(cbgppeer2fsmestablishedtime.operation)) leaf_name_data.push_back(cbgppeer2fsmestablishedtime.get_name_leafdata());
    if (cbgppeer2fsmestablishedtransitions.is_set || is_set(cbgppeer2fsmestablishedtransitions.operation)) leaf_name_data.push_back(cbgppeer2fsmestablishedtransitions.get_name_leafdata());
    if (cbgppeer2holdtime.is_set || is_set(cbgppeer2holdtime.operation)) leaf_name_data.push_back(cbgppeer2holdtime.get_name_leafdata());
    if (cbgppeer2holdtimeconfigured.is_set || is_set(cbgppeer2holdtimeconfigured.operation)) leaf_name_data.push_back(cbgppeer2holdtimeconfigured.get_name_leafdata());
    if (cbgppeer2intotalmessages.is_set || is_set(cbgppeer2intotalmessages.operation)) leaf_name_data.push_back(cbgppeer2intotalmessages.get_name_leafdata());
    if (cbgppeer2inupdateelapsedtime.is_set || is_set(cbgppeer2inupdateelapsedtime.operation)) leaf_name_data.push_back(cbgppeer2inupdateelapsedtime.get_name_leafdata());
    if (cbgppeer2inupdates.is_set || is_set(cbgppeer2inupdates.operation)) leaf_name_data.push_back(cbgppeer2inupdates.get_name_leafdata());
    if (cbgppeer2keepalive.is_set || is_set(cbgppeer2keepalive.operation)) leaf_name_data.push_back(cbgppeer2keepalive.get_name_leafdata());
    if (cbgppeer2keepaliveconfigured.is_set || is_set(cbgppeer2keepaliveconfigured.operation)) leaf_name_data.push_back(cbgppeer2keepaliveconfigured.get_name_leafdata());
    if (cbgppeer2lasterror.is_set || is_set(cbgppeer2lasterror.operation)) leaf_name_data.push_back(cbgppeer2lasterror.get_name_leafdata());
    if (cbgppeer2lasterrortxt.is_set || is_set(cbgppeer2lasterrortxt.operation)) leaf_name_data.push_back(cbgppeer2lasterrortxt.get_name_leafdata());
    if (cbgppeer2localaddr.is_set || is_set(cbgppeer2localaddr.operation)) leaf_name_data.push_back(cbgppeer2localaddr.get_name_leafdata());
    if (cbgppeer2localas.is_set || is_set(cbgppeer2localas.operation)) leaf_name_data.push_back(cbgppeer2localas.get_name_leafdata());
    if (cbgppeer2localidentifier.is_set || is_set(cbgppeer2localidentifier.operation)) leaf_name_data.push_back(cbgppeer2localidentifier.get_name_leafdata());
    if (cbgppeer2localport.is_set || is_set(cbgppeer2localport.operation)) leaf_name_data.push_back(cbgppeer2localport.get_name_leafdata());
    if (cbgppeer2minasoriginationinterval.is_set || is_set(cbgppeer2minasoriginationinterval.operation)) leaf_name_data.push_back(cbgppeer2minasoriginationinterval.get_name_leafdata());
    if (cbgppeer2minrouteadvertisementinterval.is_set || is_set(cbgppeer2minrouteadvertisementinterval.operation)) leaf_name_data.push_back(cbgppeer2minrouteadvertisementinterval.get_name_leafdata());
    if (cbgppeer2negotiatedversion.is_set || is_set(cbgppeer2negotiatedversion.operation)) leaf_name_data.push_back(cbgppeer2negotiatedversion.get_name_leafdata());
    if (cbgppeer2outtotalmessages.is_set || is_set(cbgppeer2outtotalmessages.operation)) leaf_name_data.push_back(cbgppeer2outtotalmessages.get_name_leafdata());
    if (cbgppeer2outupdates.is_set || is_set(cbgppeer2outupdates.operation)) leaf_name_data.push_back(cbgppeer2outupdates.get_name_leafdata());
    if (cbgppeer2prevstate.is_set || is_set(cbgppeer2prevstate.operation)) leaf_name_data.push_back(cbgppeer2prevstate.get_name_leafdata());
    if (cbgppeer2remoteas.is_set || is_set(cbgppeer2remoteas.operation)) leaf_name_data.push_back(cbgppeer2remoteas.get_name_leafdata());
    if (cbgppeer2remoteidentifier.is_set || is_set(cbgppeer2remoteidentifier.operation)) leaf_name_data.push_back(cbgppeer2remoteidentifier.get_name_leafdata());
    if (cbgppeer2remoteport.is_set || is_set(cbgppeer2remoteport.operation)) leaf_name_data.push_back(cbgppeer2remoteport.get_name_leafdata());
    if (cbgppeer2state.is_set || is_set(cbgppeer2state.operation)) leaf_name_data.push_back(cbgppeer2state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type = value;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr = value;
    }
    if(value_path == "cbgpPeer2AdminStatus")
    {
        cbgppeer2adminstatus = value;
    }
    if(value_path == "cbgpPeer2ConnectRetryInterval")
    {
        cbgppeer2connectretryinterval = value;
    }
    if(value_path == "cbgpPeer2FsmEstablishedTime")
    {
        cbgppeer2fsmestablishedtime = value;
    }
    if(value_path == "cbgpPeer2FsmEstablishedTransitions")
    {
        cbgppeer2fsmestablishedtransitions = value;
    }
    if(value_path == "cbgpPeer2HoldTime")
    {
        cbgppeer2holdtime = value;
    }
    if(value_path == "cbgpPeer2HoldTimeConfigured")
    {
        cbgppeer2holdtimeconfigured = value;
    }
    if(value_path == "cbgpPeer2InTotalMessages")
    {
        cbgppeer2intotalmessages = value;
    }
    if(value_path == "cbgpPeer2InUpdateElapsedTime")
    {
        cbgppeer2inupdateelapsedtime = value;
    }
    if(value_path == "cbgpPeer2InUpdates")
    {
        cbgppeer2inupdates = value;
    }
    if(value_path == "cbgpPeer2KeepAlive")
    {
        cbgppeer2keepalive = value;
    }
    if(value_path == "cbgpPeer2KeepAliveConfigured")
    {
        cbgppeer2keepaliveconfigured = value;
    }
    if(value_path == "cbgpPeer2LastError")
    {
        cbgppeer2lasterror = value;
    }
    if(value_path == "cbgpPeer2LastErrorTxt")
    {
        cbgppeer2lasterrortxt = value;
    }
    if(value_path == "cbgpPeer2LocalAddr")
    {
        cbgppeer2localaddr = value;
    }
    if(value_path == "cbgpPeer2LocalAs")
    {
        cbgppeer2localas = value;
    }
    if(value_path == "cbgpPeer2LocalIdentifier")
    {
        cbgppeer2localidentifier = value;
    }
    if(value_path == "cbgpPeer2LocalPort")
    {
        cbgppeer2localport = value;
    }
    if(value_path == "cbgpPeer2MinASOriginationInterval")
    {
        cbgppeer2minasoriginationinterval = value;
    }
    if(value_path == "cbgpPeer2MinRouteAdvertisementInterval")
    {
        cbgppeer2minrouteadvertisementinterval = value;
    }
    if(value_path == "cbgpPeer2NegotiatedVersion")
    {
        cbgppeer2negotiatedversion = value;
    }
    if(value_path == "cbgpPeer2OutTotalMessages")
    {
        cbgppeer2outtotalmessages = value;
    }
    if(value_path == "cbgpPeer2OutUpdates")
    {
        cbgppeer2outupdates = value;
    }
    if(value_path == "cbgpPeer2PrevState")
    {
        cbgppeer2prevstate = value;
    }
    if(value_path == "cbgpPeer2RemoteAs")
    {
        cbgppeer2remoteas = value;
    }
    if(value_path == "cbgpPeer2RemoteIdentifier")
    {
        cbgppeer2remoteidentifier = value;
    }
    if(value_path == "cbgpPeer2RemotePort")
    {
        cbgppeer2remoteport = value;
    }
    if(value_path == "cbgpPeer2State")
    {
        cbgppeer2state = value;
    }
}

CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capstable()
{
    yang_name = "cbgpPeer2CapsTable"; yang_parent_name = "CISCO-BGP4-MIB";
}

CiscoBgp4Mib::Cbgppeer2Capstable::~Cbgppeer2Capstable()
{
}

bool CiscoBgp4Mib::Cbgppeer2Capstable::has_data() const
{
    for (std::size_t index=0; index<cbgppeer2capsentry_.size(); index++)
    {
        if(cbgppeer2capsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoBgp4Mib::Cbgppeer2Capstable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeer2capsentry_.size(); index++)
    {
        if(cbgppeer2capsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoBgp4Mib::Cbgppeer2Capstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2CapsTable";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::Cbgppeer2Capstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgp4Mib::Cbgppeer2Capstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeer2CapsEntry")
    {
        for(auto const & c : cbgppeer2capsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry>();
        c->parent = this;
        cbgppeer2capsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::Cbgppeer2Capstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbgppeer2capsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoBgp4Mib::Cbgppeer2Capstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry::Cbgppeer2Capsentry()
    :
    cbgppeer2type{YType::enumeration, "cbgpPeer2Type"},
    cbgppeer2remoteaddr{YType::str, "cbgpPeer2RemoteAddr"},
    cbgppeer2capcode{YType::enumeration, "cbgpPeer2CapCode"},
    cbgppeer2capindex{YType::uint32, "cbgpPeer2CapIndex"},
    cbgppeer2capvalue{YType::str, "cbgpPeer2CapValue"}
{
    yang_name = "cbgpPeer2CapsEntry"; yang_parent_name = "cbgpPeer2CapsTable";
}

CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry::~Cbgppeer2Capsentry()
{
}

bool CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry::has_data() const
{
    return cbgppeer2type.is_set
	|| cbgppeer2remoteaddr.is_set
	|| cbgppeer2capcode.is_set
	|| cbgppeer2capindex.is_set
	|| cbgppeer2capvalue.is_set;
}

bool CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cbgppeer2type.operation)
	|| is_set(cbgppeer2remoteaddr.operation)
	|| is_set(cbgppeer2capcode.operation)
	|| is_set(cbgppeer2capindex.operation)
	|| is_set(cbgppeer2capvalue.operation);
}

std::string CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2CapsEntry" <<"[cbgpPeer2Type='" <<cbgppeer2type <<"']" <<"[cbgpPeer2RemoteAddr='" <<cbgppeer2remoteaddr <<"']" <<"[cbgpPeer2CapCode='" <<cbgppeer2capcode <<"']" <<"[cbgpPeer2CapIndex='" <<cbgppeer2capindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeer2CapsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgppeer2type.is_set || is_set(cbgppeer2type.operation)) leaf_name_data.push_back(cbgppeer2type.get_name_leafdata());
    if (cbgppeer2remoteaddr.is_set || is_set(cbgppeer2remoteaddr.operation)) leaf_name_data.push_back(cbgppeer2remoteaddr.get_name_leafdata());
    if (cbgppeer2capcode.is_set || is_set(cbgppeer2capcode.operation)) leaf_name_data.push_back(cbgppeer2capcode.get_name_leafdata());
    if (cbgppeer2capindex.is_set || is_set(cbgppeer2capindex.operation)) leaf_name_data.push_back(cbgppeer2capindex.get_name_leafdata());
    if (cbgppeer2capvalue.is_set || is_set(cbgppeer2capvalue.operation)) leaf_name_data.push_back(cbgppeer2capvalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type = value;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr = value;
    }
    if(value_path == "cbgpPeer2CapCode")
    {
        cbgppeer2capcode = value;
    }
    if(value_path == "cbgpPeer2CapIndex")
    {
        cbgppeer2capindex = value;
    }
    if(value_path == "cbgpPeer2CapValue")
    {
        cbgppeer2capvalue = value;
    }
}

CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilytable()
{
    yang_name = "cbgpPeer2AddrFamilyTable"; yang_parent_name = "CISCO-BGP4-MIB";
}

CiscoBgp4Mib::Cbgppeer2Addrfamilytable::~Cbgppeer2Addrfamilytable()
{
}

bool CiscoBgp4Mib::Cbgppeer2Addrfamilytable::has_data() const
{
    for (std::size_t index=0; index<cbgppeer2addrfamilyentry_.size(); index++)
    {
        if(cbgppeer2addrfamilyentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoBgp4Mib::Cbgppeer2Addrfamilytable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeer2addrfamilyentry_.size(); index++)
    {
        if(cbgppeer2addrfamilyentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoBgp4Mib::Cbgppeer2Addrfamilytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2AddrFamilyTable";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::Cbgppeer2Addrfamilytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgp4Mib::Cbgppeer2Addrfamilytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeer2AddrFamilyEntry")
    {
        for(auto const & c : cbgppeer2addrfamilyentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry>();
        c->parent = this;
        cbgppeer2addrfamilyentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::Cbgppeer2Addrfamilytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbgppeer2addrfamilyentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoBgp4Mib::Cbgppeer2Addrfamilytable::set_value(const std::string & value_path, std::string value)
{
}

CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::Cbgppeer2Addrfamilyentry()
    :
    cbgppeer2type{YType::enumeration, "cbgpPeer2Type"},
    cbgppeer2remoteaddr{YType::str, "cbgpPeer2RemoteAddr"},
    cbgppeer2addrfamilyafi{YType::enumeration, "cbgpPeer2AddrFamilyAfi"},
    cbgppeer2addrfamilysafi{YType::enumeration, "cbgpPeer2AddrFamilySafi"},
    cbgppeer2addrfamilyname{YType::str, "cbgpPeer2AddrFamilyName"}
{
    yang_name = "cbgpPeer2AddrFamilyEntry"; yang_parent_name = "cbgpPeer2AddrFamilyTable";
}

CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::~Cbgppeer2Addrfamilyentry()
{
}

bool CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::has_data() const
{
    return cbgppeer2type.is_set
	|| cbgppeer2remoteaddr.is_set
	|| cbgppeer2addrfamilyafi.is_set
	|| cbgppeer2addrfamilysafi.is_set
	|| cbgppeer2addrfamilyname.is_set;
}

bool CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cbgppeer2type.operation)
	|| is_set(cbgppeer2remoteaddr.operation)
	|| is_set(cbgppeer2addrfamilyafi.operation)
	|| is_set(cbgppeer2addrfamilysafi.operation)
	|| is_set(cbgppeer2addrfamilyname.operation);
}

std::string CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2AddrFamilyEntry" <<"[cbgpPeer2Type='" <<cbgppeer2type <<"']" <<"[cbgpPeer2RemoteAddr='" <<cbgppeer2remoteaddr <<"']" <<"[cbgpPeer2AddrFamilyAfi='" <<cbgppeer2addrfamilyafi <<"']" <<"[cbgpPeer2AddrFamilySafi='" <<cbgppeer2addrfamilysafi <<"']";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeer2AddrFamilyTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgppeer2type.is_set || is_set(cbgppeer2type.operation)) leaf_name_data.push_back(cbgppeer2type.get_name_leafdata());
    if (cbgppeer2remoteaddr.is_set || is_set(cbgppeer2remoteaddr.operation)) leaf_name_data.push_back(cbgppeer2remoteaddr.get_name_leafdata());
    if (cbgppeer2addrfamilyafi.is_set || is_set(cbgppeer2addrfamilyafi.operation)) leaf_name_data.push_back(cbgppeer2addrfamilyafi.get_name_leafdata());
    if (cbgppeer2addrfamilysafi.is_set || is_set(cbgppeer2addrfamilysafi.operation)) leaf_name_data.push_back(cbgppeer2addrfamilysafi.get_name_leafdata());
    if (cbgppeer2addrfamilyname.is_set || is_set(cbgppeer2addrfamilyname.operation)) leaf_name_data.push_back(cbgppeer2addrfamilyname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoBgp4Mib::Cbgppeer2Addrfamilytable::Cbgppeer2Addrfamilyentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type = value;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr = value;
    }
    if(value_path == "cbgpPeer2AddrFamilyAfi")
    {
        cbgppeer2addrfamilyafi = value;
    }
    if(value_path == "cbgpPeer2AddrFamilySafi")
    {
        cbgppeer2addrfamilysafi = value;
    }
    if(value_path == "cbgpPeer2AddrFamilyName")
    {
        cbgppeer2addrfamilyname = value;
    }
}

CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixtable()
{
    yang_name = "cbgpPeer2AddrFamilyPrefixTable"; yang_parent_name = "CISCO-BGP4-MIB";
}

CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::~Cbgppeer2Addrfamilyprefixtable()
{
}

bool CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::has_data() const
{
    for (std::size_t index=0; index<cbgppeer2addrfamilyprefixentry_.size(); index++)
    {
        if(cbgppeer2addrfamilyprefixentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::has_operation() const
{
    for (std::size_t index=0; index<cbgppeer2addrfamilyprefixentry_.size(); index++)
    {
        if(cbgppeer2addrfamilyprefixentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2AddrFamilyPrefixTable";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbgpPeer2AddrFamilyPrefixEntry")
    {
        for(auto const & c : cbgppeer2addrfamilyprefixentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry>();
        c->parent = this;
        cbgppeer2addrfamilyprefixentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbgppeer2addrfamilyprefixentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::Cbgppeer2Addrfamilyprefixentry()
    :
    cbgppeer2type{YType::enumeration, "cbgpPeer2Type"},
    cbgppeer2remoteaddr{YType::str, "cbgpPeer2RemoteAddr"},
    cbgppeer2addrfamilyafi{YType::enumeration, "cbgpPeer2AddrFamilyAfi"},
    cbgppeer2addrfamilysafi{YType::enumeration, "cbgpPeer2AddrFamilySafi"},
    cbgppeer2acceptedprefixes{YType::uint32, "cbgpPeer2AcceptedPrefixes"},
    cbgppeer2advertisedprefixes{YType::uint32, "cbgpPeer2AdvertisedPrefixes"},
    cbgppeer2deniedprefixes{YType::uint32, "cbgpPeer2DeniedPrefixes"},
    cbgppeer2prefixadminlimit{YType::uint32, "cbgpPeer2PrefixAdminLimit"},
    cbgppeer2prefixclearthreshold{YType::uint32, "cbgpPeer2PrefixClearThreshold"},
    cbgppeer2prefixthreshold{YType::uint32, "cbgpPeer2PrefixThreshold"},
    cbgppeer2suppressedprefixes{YType::uint32, "cbgpPeer2SuppressedPrefixes"},
    cbgppeer2withdrawnprefixes{YType::uint32, "cbgpPeer2WithdrawnPrefixes"}
{
    yang_name = "cbgpPeer2AddrFamilyPrefixEntry"; yang_parent_name = "cbgpPeer2AddrFamilyPrefixTable";
}

CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::~Cbgppeer2Addrfamilyprefixentry()
{
}

bool CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::has_data() const
{
    return cbgppeer2type.is_set
	|| cbgppeer2remoteaddr.is_set
	|| cbgppeer2addrfamilyafi.is_set
	|| cbgppeer2addrfamilysafi.is_set
	|| cbgppeer2acceptedprefixes.is_set
	|| cbgppeer2advertisedprefixes.is_set
	|| cbgppeer2deniedprefixes.is_set
	|| cbgppeer2prefixadminlimit.is_set
	|| cbgppeer2prefixclearthreshold.is_set
	|| cbgppeer2prefixthreshold.is_set
	|| cbgppeer2suppressedprefixes.is_set
	|| cbgppeer2withdrawnprefixes.is_set;
}

bool CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cbgppeer2type.operation)
	|| is_set(cbgppeer2remoteaddr.operation)
	|| is_set(cbgppeer2addrfamilyafi.operation)
	|| is_set(cbgppeer2addrfamilysafi.operation)
	|| is_set(cbgppeer2acceptedprefixes.operation)
	|| is_set(cbgppeer2advertisedprefixes.operation)
	|| is_set(cbgppeer2deniedprefixes.operation)
	|| is_set(cbgppeer2prefixadminlimit.operation)
	|| is_set(cbgppeer2prefixclearthreshold.operation)
	|| is_set(cbgppeer2prefixthreshold.operation)
	|| is_set(cbgppeer2suppressedprefixes.operation)
	|| is_set(cbgppeer2withdrawnprefixes.operation);
}

std::string CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbgpPeer2AddrFamilyPrefixEntry" <<"[cbgpPeer2Type='" <<cbgppeer2type <<"']" <<"[cbgpPeer2RemoteAddr='" <<cbgppeer2remoteaddr <<"']" <<"[cbgpPeer2AddrFamilyAfi='" <<cbgppeer2addrfamilyafi <<"']" <<"[cbgpPeer2AddrFamilySafi='" <<cbgppeer2addrfamilysafi <<"']";

    return path_buffer.str();

}

const EntityPath CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP4-MIB:CISCO-BGP4-MIB/cbgpPeer2AddrFamilyPrefixTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cbgppeer2type.is_set || is_set(cbgppeer2type.operation)) leaf_name_data.push_back(cbgppeer2type.get_name_leafdata());
    if (cbgppeer2remoteaddr.is_set || is_set(cbgppeer2remoteaddr.operation)) leaf_name_data.push_back(cbgppeer2remoteaddr.get_name_leafdata());
    if (cbgppeer2addrfamilyafi.is_set || is_set(cbgppeer2addrfamilyafi.operation)) leaf_name_data.push_back(cbgppeer2addrfamilyafi.get_name_leafdata());
    if (cbgppeer2addrfamilysafi.is_set || is_set(cbgppeer2addrfamilysafi.operation)) leaf_name_data.push_back(cbgppeer2addrfamilysafi.get_name_leafdata());
    if (cbgppeer2acceptedprefixes.is_set || is_set(cbgppeer2acceptedprefixes.operation)) leaf_name_data.push_back(cbgppeer2acceptedprefixes.get_name_leafdata());
    if (cbgppeer2advertisedprefixes.is_set || is_set(cbgppeer2advertisedprefixes.operation)) leaf_name_data.push_back(cbgppeer2advertisedprefixes.get_name_leafdata());
    if (cbgppeer2deniedprefixes.is_set || is_set(cbgppeer2deniedprefixes.operation)) leaf_name_data.push_back(cbgppeer2deniedprefixes.get_name_leafdata());
    if (cbgppeer2prefixadminlimit.is_set || is_set(cbgppeer2prefixadminlimit.operation)) leaf_name_data.push_back(cbgppeer2prefixadminlimit.get_name_leafdata());
    if (cbgppeer2prefixclearthreshold.is_set || is_set(cbgppeer2prefixclearthreshold.operation)) leaf_name_data.push_back(cbgppeer2prefixclearthreshold.get_name_leafdata());
    if (cbgppeer2prefixthreshold.is_set || is_set(cbgppeer2prefixthreshold.operation)) leaf_name_data.push_back(cbgppeer2prefixthreshold.get_name_leafdata());
    if (cbgppeer2suppressedprefixes.is_set || is_set(cbgppeer2suppressedprefixes.operation)) leaf_name_data.push_back(cbgppeer2suppressedprefixes.get_name_leafdata());
    if (cbgppeer2withdrawnprefixes.is_set || is_set(cbgppeer2withdrawnprefixes.operation)) leaf_name_data.push_back(cbgppeer2withdrawnprefixes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoBgp4Mib::Cbgppeer2Addrfamilyprefixtable::Cbgppeer2Addrfamilyprefixentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cbgpPeer2Type")
    {
        cbgppeer2type = value;
    }
    if(value_path == "cbgpPeer2RemoteAddr")
    {
        cbgppeer2remoteaddr = value;
    }
    if(value_path == "cbgpPeer2AddrFamilyAfi")
    {
        cbgppeer2addrfamilyafi = value;
    }
    if(value_path == "cbgpPeer2AddrFamilySafi")
    {
        cbgppeer2addrfamilysafi = value;
    }
    if(value_path == "cbgpPeer2AcceptedPrefixes")
    {
        cbgppeer2acceptedprefixes = value;
    }
    if(value_path == "cbgpPeer2AdvertisedPrefixes")
    {
        cbgppeer2advertisedprefixes = value;
    }
    if(value_path == "cbgpPeer2DeniedPrefixes")
    {
        cbgppeer2deniedprefixes = value;
    }
    if(value_path == "cbgpPeer2PrefixAdminLimit")
    {
        cbgppeer2prefixadminlimit = value;
    }
    if(value_path == "cbgpPeer2PrefixClearThreshold")
    {
        cbgppeer2prefixclearthreshold = value;
    }
    if(value_path == "cbgpPeer2PrefixThreshold")
    {
        cbgppeer2prefixthreshold = value;
    }
    if(value_path == "cbgpPeer2SuppressedPrefixes")
    {
        cbgppeer2suppressedprefixes = value;
    }
    if(value_path == "cbgpPeer2WithdrawnPrefixes")
    {
        cbgppeer2withdrawnprefixes = value;
    }
}

const Enum::YLeaf CbgpsafiEnum::unicast {1, "unicast"};
const Enum::YLeaf CbgpsafiEnum::multicast {2, "multicast"};
const Enum::YLeaf CbgpsafiEnum::unicastAndMulticast {3, "unicastAndMulticast"};
const Enum::YLeaf CbgpsafiEnum::vpn {128, "vpn"};

const Enum::YLeaf CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::CbgprouteoriginEnum::igp {1, "igp"};
const Enum::YLeaf CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::CbgprouteoriginEnum::egp {2, "egp"};
const Enum::YLeaf CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::CbgprouteoriginEnum::incomplete {3, "incomplete"};

const Enum::YLeaf CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::CbgprouteatomicaggregateEnum::lessSpecificRouteNotSelected {1, "lessSpecificRouteNotSelected"};
const Enum::YLeaf CiscoBgp4Mib::Cbgproutetable::Cbgprouteentry::CbgprouteatomicaggregateEnum::lessSpecificRouteSelected {2, "lessSpecificRouteSelected"};

const Enum::YLeaf CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry::CbgppeercapcodeEnum::multiProtocol {1, "multiProtocol"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry::CbgppeercapcodeEnum::routeRefresh {2, "routeRefresh"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry::CbgppeercapcodeEnum::gracefulRestart {64, "gracefulRestart"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeercapstable::Cbgppeercapsentry::CbgppeercapcodeEnum::routeRefreshOld {128, "routeRefreshOld"};

const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2StateEnum::idle {1, "idle"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2StateEnum::connect {2, "connect"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2StateEnum::active {3, "active"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2StateEnum::opensent {4, "opensent"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2StateEnum::openconfirm {5, "openconfirm"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2StateEnum::established {6, "established"};

const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2AdminstatusEnum::stop {1, "stop"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2AdminstatusEnum::start {2, "start"};

const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2PrevstateEnum::none {0, "none"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2PrevstateEnum::idle {1, "idle"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2PrevstateEnum::connect {2, "connect"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2PrevstateEnum::active {3, "active"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2PrevstateEnum::opensent {4, "opensent"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2PrevstateEnum::openconfirm {5, "openconfirm"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Table::Cbgppeer2Entry::Cbgppeer2PrevstateEnum::established {6, "established"};

const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry::Cbgppeer2CapcodeEnum::multiProtocol {1, "multiProtocol"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry::Cbgppeer2CapcodeEnum::routeRefresh {2, "routeRefresh"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry::Cbgppeer2CapcodeEnum::gracefulRestart {64, "gracefulRestart"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry::Cbgppeer2CapcodeEnum::fourByteAs {65, "fourByteAs"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry::Cbgppeer2CapcodeEnum::addPath {69, "addPath"};
const Enum::YLeaf CiscoBgp4Mib::Cbgppeer2Capstable::Cbgppeer2Capsentry::Cbgppeer2CapcodeEnum::routeRefreshOld {128, "routeRefreshOld"};


}
}

