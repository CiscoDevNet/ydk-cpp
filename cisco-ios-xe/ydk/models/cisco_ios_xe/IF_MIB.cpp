
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IF_MIB.hpp"

namespace ydk {
namespace IF_MIB {

IfMib::IfMib()
    :
    ifmibobjects_(std::make_shared<IfMib::Ifmibobjects>())
	,ifrcvaddresstable_(std::make_shared<IfMib::Ifrcvaddresstable>())
	,ifstacktable_(std::make_shared<IfMib::Ifstacktable>())
	,iftable_(std::make_shared<IfMib::Iftable>())
	,interfaces_(std::make_shared<IfMib::Interfaces>())
{
    ifmibobjects_->parent = this;

    ifrcvaddresstable_->parent = this;

    ifstacktable_->parent = this;

    iftable_->parent = this;

    interfaces_->parent = this;

    yang_name = "IF-MIB"; yang_parent_name = "IF-MIB";
}

IfMib::~IfMib()
{
}

bool IfMib::has_data() const
{
    return (ifmibobjects_ !=  nullptr && ifmibobjects_->has_data())
	|| (ifrcvaddresstable_ !=  nullptr && ifrcvaddresstable_->has_data())
	|| (ifstacktable_ !=  nullptr && ifstacktable_->has_data())
	|| (iftable_ !=  nullptr && iftable_->has_data())
	|| (interfaces_ !=  nullptr && interfaces_->has_data());
}

bool IfMib::has_operation() const
{
    return is_set(operation)
	|| (ifmibobjects_ !=  nullptr && ifmibobjects_->has_operation())
	|| (ifrcvaddresstable_ !=  nullptr && ifrcvaddresstable_->has_operation())
	|| (ifstacktable_ !=  nullptr && ifstacktable_->has_operation())
	|| (iftable_ !=  nullptr && iftable_->has_operation())
	|| (interfaces_ !=  nullptr && interfaces_->has_operation());
}

std::string IfMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IF-MIB:IF-MIB";

    return path_buffer.str();

}

const EntityPath IfMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> IfMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifMIBObjects")
    {
        if(ifmibobjects_ == nullptr)
        {
            ifmibobjects_ = std::make_shared<IfMib::Ifmibobjects>();
        }
        return ifmibobjects_;
    }

    if(child_yang_name == "ifRcvAddressTable")
    {
        if(ifrcvaddresstable_ == nullptr)
        {
            ifrcvaddresstable_ = std::make_shared<IfMib::Ifrcvaddresstable>();
        }
        return ifrcvaddresstable_;
    }

    if(child_yang_name == "ifStackTable")
    {
        if(ifstacktable_ == nullptr)
        {
            ifstacktable_ = std::make_shared<IfMib::Ifstacktable>();
        }
        return ifstacktable_;
    }

    if(child_yang_name == "ifTable")
    {
        if(iftable_ == nullptr)
        {
            iftable_ = std::make_shared<IfMib::Iftable>();
        }
        return iftable_;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces_ == nullptr)
        {
            interfaces_ = std::make_shared<IfMib::Interfaces>();
        }
        return interfaces_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IfMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ifmibobjects_ != nullptr)
    {
        children["ifMIBObjects"] = ifmibobjects_;
    }

    if(ifrcvaddresstable_ != nullptr)
    {
        children["ifRcvAddressTable"] = ifrcvaddresstable_;
    }

    if(ifstacktable_ != nullptr)
    {
        children["ifStackTable"] = ifstacktable_;
    }

    if(iftable_ != nullptr)
    {
        children["ifTable"] = iftable_;
    }

    if(interfaces_ != nullptr)
    {
        children["interfaces"] = interfaces_;
    }

    return children;
}

void IfMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> IfMib::clone_ptr() const
{
    return std::make_shared<IfMib>();
}

std::string IfMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string IfMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function IfMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

IfMib::Interfaces::Interfaces()
    :
    ifnumber{YType::int32, "ifNumber"}
{
    yang_name = "interfaces"; yang_parent_name = "IF-MIB";
}

IfMib::Interfaces::~Interfaces()
{
}

bool IfMib::Interfaces::has_data() const
{
    return ifnumber.is_set;
}

bool IfMib::Interfaces::has_operation() const
{
    return is_set(operation)
	|| is_set(ifnumber.operation);
}

std::string IfMib::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath IfMib::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IF-MIB:IF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifnumber.is_set || is_set(ifnumber.operation)) leaf_name_data.push_back(ifnumber.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IfMib::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IfMib::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IfMib::Interfaces::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifNumber")
    {
        ifnumber = value;
    }
}

IfMib::Ifmibobjects::Ifmibobjects()
    :
    ifstacklastchange{YType::uint32, "ifStackLastChange"},
    iftablelastchange{YType::uint32, "ifTableLastChange"}
{
    yang_name = "ifMIBObjects"; yang_parent_name = "IF-MIB";
}

IfMib::Ifmibobjects::~Ifmibobjects()
{
}

bool IfMib::Ifmibobjects::has_data() const
{
    return ifstacklastchange.is_set
	|| iftablelastchange.is_set;
}

bool IfMib::Ifmibobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(ifstacklastchange.operation)
	|| is_set(iftablelastchange.operation);
}

std::string IfMib::Ifmibobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifMIBObjects";

    return path_buffer.str();

}

const EntityPath IfMib::Ifmibobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IF-MIB:IF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifstacklastchange.is_set || is_set(ifstacklastchange.operation)) leaf_name_data.push_back(ifstacklastchange.get_name_leafdata());
    if (iftablelastchange.is_set || is_set(iftablelastchange.operation)) leaf_name_data.push_back(iftablelastchange.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IfMib::Ifmibobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IfMib::Ifmibobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IfMib::Ifmibobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifStackLastChange")
    {
        ifstacklastchange = value;
    }
    if(value_path == "ifTableLastChange")
    {
        iftablelastchange = value;
    }
}

IfMib::Iftable::Iftable()
{
    yang_name = "ifTable"; yang_parent_name = "IF-MIB";
}

IfMib::Iftable::~Iftable()
{
}

bool IfMib::Iftable::has_data() const
{
    for (std::size_t index=0; index<ifentry_.size(); index++)
    {
        if(ifentry_[index]->has_data())
            return true;
    }
    return false;
}

bool IfMib::Iftable::has_operation() const
{
    for (std::size_t index=0; index<ifentry_.size(); index++)
    {
        if(ifentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IfMib::Iftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifTable";

    return path_buffer.str();

}

const EntityPath IfMib::Iftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IF-MIB:IF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IfMib::Iftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifEntry")
    {
        for(auto const & c : ifentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IfMib::Iftable::Ifentry>();
        c->parent = this;
        ifentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IfMib::Iftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ifentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IfMib::Iftable::set_value(const std::string & value_path, std::string value)
{
}

IfMib::Iftable::Ifentry::Ifentry()
    :
    ifindex{YType::int32, "ifIndex"},
    ifadminstatus{YType::enumeration, "ifAdminStatus"},
    ifalias{YType::str, "ifAlias"},
    ifconnectorpresent{YType::boolean, "ifConnectorPresent"},
    ifcounterdiscontinuitytime{YType::uint32, "ifCounterDiscontinuityTime"},
    ifdescr{YType::str, "ifDescr"},
    ifhcinbroadcastpkts{YType::uint64, "ifHCInBroadcastPkts"},
    ifhcinmulticastpkts{YType::uint64, "ifHCInMulticastPkts"},
    ifhcinoctets{YType::uint64, "ifHCInOctets"},
    ifhcinucastpkts{YType::uint64, "ifHCInUcastPkts"},
    ifhcoutbroadcastpkts{YType::uint64, "ifHCOutBroadcastPkts"},
    ifhcoutmulticastpkts{YType::uint64, "ifHCOutMulticastPkts"},
    ifhcoutoctets{YType::uint64, "ifHCOutOctets"},
    ifhcoutucastpkts{YType::uint64, "ifHCOutUcastPkts"},
    ifhighspeed{YType::uint32, "ifHighSpeed"},
    ifinbroadcastpkts{YType::uint32, "ifInBroadcastPkts"},
    ifindiscards{YType::uint32, "ifInDiscards"},
    ifinerrors{YType::uint32, "ifInErrors"},
    ifinmulticastpkts{YType::uint32, "ifInMulticastPkts"},
    ifinnucastpkts{YType::uint32, "ifInNUcastPkts"},
    ifinoctets{YType::uint32, "ifInOctets"},
    ifinucastpkts{YType::uint32, "ifInUcastPkts"},
    ifinunknownprotos{YType::uint32, "ifInUnknownProtos"},
    iflastchange{YType::uint32, "ifLastChange"},
    iflinkupdowntrapenable{YType::enumeration, "ifLinkUpDownTrapEnable"},
    ifmtu{YType::int32, "ifMtu"},
    ifname{YType::str, "ifName"},
    ifoperstatus{YType::enumeration, "ifOperStatus"},
    ifoutbroadcastpkts{YType::uint32, "ifOutBroadcastPkts"},
    ifoutdiscards{YType::uint32, "ifOutDiscards"},
    ifouterrors{YType::uint32, "ifOutErrors"},
    ifoutmulticastpkts{YType::uint32, "ifOutMulticastPkts"},
    ifoutnucastpkts{YType::uint32, "ifOutNUcastPkts"},
    ifoutoctets{YType::uint32, "ifOutOctets"},
    ifoutqlen{YType::uint32, "ifOutQLen"},
    ifoutucastpkts{YType::uint32, "ifOutUcastPkts"},
    ifphysaddress{YType::str, "ifPhysAddress"},
    ifpromiscuousmode{YType::boolean, "ifPromiscuousMode"},
    ifspecific{YType::str, "ifSpecific"},
    ifspeed{YType::uint32, "ifSpeed"},
    iftestcode{YType::str, "ifTestCode"},
    iftestid{YType::int32, "ifTestId"},
    iftestowner{YType::str, "ifTestOwner"},
    iftestresult{YType::enumeration, "ifTestResult"},
    ifteststatus{YType::enumeration, "ifTestStatus"},
    iftesttype{YType::str, "ifTestType"},
    iftype{YType::enumeration, "ifType"}
{
    yang_name = "ifEntry"; yang_parent_name = "ifTable";
}

IfMib::Iftable::Ifentry::~Ifentry()
{
}

bool IfMib::Iftable::Ifentry::has_data() const
{
    return ifindex.is_set
	|| ifadminstatus.is_set
	|| ifalias.is_set
	|| ifconnectorpresent.is_set
	|| ifcounterdiscontinuitytime.is_set
	|| ifdescr.is_set
	|| ifhcinbroadcastpkts.is_set
	|| ifhcinmulticastpkts.is_set
	|| ifhcinoctets.is_set
	|| ifhcinucastpkts.is_set
	|| ifhcoutbroadcastpkts.is_set
	|| ifhcoutmulticastpkts.is_set
	|| ifhcoutoctets.is_set
	|| ifhcoutucastpkts.is_set
	|| ifhighspeed.is_set
	|| ifinbroadcastpkts.is_set
	|| ifindiscards.is_set
	|| ifinerrors.is_set
	|| ifinmulticastpkts.is_set
	|| ifinnucastpkts.is_set
	|| ifinoctets.is_set
	|| ifinucastpkts.is_set
	|| ifinunknownprotos.is_set
	|| iflastchange.is_set
	|| iflinkupdowntrapenable.is_set
	|| ifmtu.is_set
	|| ifname.is_set
	|| ifoperstatus.is_set
	|| ifoutbroadcastpkts.is_set
	|| ifoutdiscards.is_set
	|| ifouterrors.is_set
	|| ifoutmulticastpkts.is_set
	|| ifoutnucastpkts.is_set
	|| ifoutoctets.is_set
	|| ifoutqlen.is_set
	|| ifoutucastpkts.is_set
	|| ifphysaddress.is_set
	|| ifpromiscuousmode.is_set
	|| ifspecific.is_set
	|| ifspeed.is_set
	|| iftestcode.is_set
	|| iftestid.is_set
	|| iftestowner.is_set
	|| iftestresult.is_set
	|| ifteststatus.is_set
	|| iftesttype.is_set
	|| iftype.is_set;
}

bool IfMib::Iftable::Ifentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(ifadminstatus.operation)
	|| is_set(ifalias.operation)
	|| is_set(ifconnectorpresent.operation)
	|| is_set(ifcounterdiscontinuitytime.operation)
	|| is_set(ifdescr.operation)
	|| is_set(ifhcinbroadcastpkts.operation)
	|| is_set(ifhcinmulticastpkts.operation)
	|| is_set(ifhcinoctets.operation)
	|| is_set(ifhcinucastpkts.operation)
	|| is_set(ifhcoutbroadcastpkts.operation)
	|| is_set(ifhcoutmulticastpkts.operation)
	|| is_set(ifhcoutoctets.operation)
	|| is_set(ifhcoutucastpkts.operation)
	|| is_set(ifhighspeed.operation)
	|| is_set(ifinbroadcastpkts.operation)
	|| is_set(ifindiscards.operation)
	|| is_set(ifinerrors.operation)
	|| is_set(ifinmulticastpkts.operation)
	|| is_set(ifinnucastpkts.operation)
	|| is_set(ifinoctets.operation)
	|| is_set(ifinucastpkts.operation)
	|| is_set(ifinunknownprotos.operation)
	|| is_set(iflastchange.operation)
	|| is_set(iflinkupdowntrapenable.operation)
	|| is_set(ifmtu.operation)
	|| is_set(ifname.operation)
	|| is_set(ifoperstatus.operation)
	|| is_set(ifoutbroadcastpkts.operation)
	|| is_set(ifoutdiscards.operation)
	|| is_set(ifouterrors.operation)
	|| is_set(ifoutmulticastpkts.operation)
	|| is_set(ifoutnucastpkts.operation)
	|| is_set(ifoutoctets.operation)
	|| is_set(ifoutqlen.operation)
	|| is_set(ifoutucastpkts.operation)
	|| is_set(ifphysaddress.operation)
	|| is_set(ifpromiscuousmode.operation)
	|| is_set(ifspecific.operation)
	|| is_set(ifspeed.operation)
	|| is_set(iftestcode.operation)
	|| is_set(iftestid.operation)
	|| is_set(iftestowner.operation)
	|| is_set(iftestresult.operation)
	|| is_set(ifteststatus.operation)
	|| is_set(iftesttype.operation)
	|| is_set(iftype.operation);
}

std::string IfMib::Iftable::Ifentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath IfMib::Iftable::Ifentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IF-MIB:IF-MIB/ifTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (ifadminstatus.is_set || is_set(ifadminstatus.operation)) leaf_name_data.push_back(ifadminstatus.get_name_leafdata());
    if (ifalias.is_set || is_set(ifalias.operation)) leaf_name_data.push_back(ifalias.get_name_leafdata());
    if (ifconnectorpresent.is_set || is_set(ifconnectorpresent.operation)) leaf_name_data.push_back(ifconnectorpresent.get_name_leafdata());
    if (ifcounterdiscontinuitytime.is_set || is_set(ifcounterdiscontinuitytime.operation)) leaf_name_data.push_back(ifcounterdiscontinuitytime.get_name_leafdata());
    if (ifdescr.is_set || is_set(ifdescr.operation)) leaf_name_data.push_back(ifdescr.get_name_leafdata());
    if (ifhcinbroadcastpkts.is_set || is_set(ifhcinbroadcastpkts.operation)) leaf_name_data.push_back(ifhcinbroadcastpkts.get_name_leafdata());
    if (ifhcinmulticastpkts.is_set || is_set(ifhcinmulticastpkts.operation)) leaf_name_data.push_back(ifhcinmulticastpkts.get_name_leafdata());
    if (ifhcinoctets.is_set || is_set(ifhcinoctets.operation)) leaf_name_data.push_back(ifhcinoctets.get_name_leafdata());
    if (ifhcinucastpkts.is_set || is_set(ifhcinucastpkts.operation)) leaf_name_data.push_back(ifhcinucastpkts.get_name_leafdata());
    if (ifhcoutbroadcastpkts.is_set || is_set(ifhcoutbroadcastpkts.operation)) leaf_name_data.push_back(ifhcoutbroadcastpkts.get_name_leafdata());
    if (ifhcoutmulticastpkts.is_set || is_set(ifhcoutmulticastpkts.operation)) leaf_name_data.push_back(ifhcoutmulticastpkts.get_name_leafdata());
    if (ifhcoutoctets.is_set || is_set(ifhcoutoctets.operation)) leaf_name_data.push_back(ifhcoutoctets.get_name_leafdata());
    if (ifhcoutucastpkts.is_set || is_set(ifhcoutucastpkts.operation)) leaf_name_data.push_back(ifhcoutucastpkts.get_name_leafdata());
    if (ifhighspeed.is_set || is_set(ifhighspeed.operation)) leaf_name_data.push_back(ifhighspeed.get_name_leafdata());
    if (ifinbroadcastpkts.is_set || is_set(ifinbroadcastpkts.operation)) leaf_name_data.push_back(ifinbroadcastpkts.get_name_leafdata());
    if (ifindiscards.is_set || is_set(ifindiscards.operation)) leaf_name_data.push_back(ifindiscards.get_name_leafdata());
    if (ifinerrors.is_set || is_set(ifinerrors.operation)) leaf_name_data.push_back(ifinerrors.get_name_leafdata());
    if (ifinmulticastpkts.is_set || is_set(ifinmulticastpkts.operation)) leaf_name_data.push_back(ifinmulticastpkts.get_name_leafdata());
    if (ifinnucastpkts.is_set || is_set(ifinnucastpkts.operation)) leaf_name_data.push_back(ifinnucastpkts.get_name_leafdata());
    if (ifinoctets.is_set || is_set(ifinoctets.operation)) leaf_name_data.push_back(ifinoctets.get_name_leafdata());
    if (ifinucastpkts.is_set || is_set(ifinucastpkts.operation)) leaf_name_data.push_back(ifinucastpkts.get_name_leafdata());
    if (ifinunknownprotos.is_set || is_set(ifinunknownprotos.operation)) leaf_name_data.push_back(ifinunknownprotos.get_name_leafdata());
    if (iflastchange.is_set || is_set(iflastchange.operation)) leaf_name_data.push_back(iflastchange.get_name_leafdata());
    if (iflinkupdowntrapenable.is_set || is_set(iflinkupdowntrapenable.operation)) leaf_name_data.push_back(iflinkupdowntrapenable.get_name_leafdata());
    if (ifmtu.is_set || is_set(ifmtu.operation)) leaf_name_data.push_back(ifmtu.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.operation)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (ifoperstatus.is_set || is_set(ifoperstatus.operation)) leaf_name_data.push_back(ifoperstatus.get_name_leafdata());
    if (ifoutbroadcastpkts.is_set || is_set(ifoutbroadcastpkts.operation)) leaf_name_data.push_back(ifoutbroadcastpkts.get_name_leafdata());
    if (ifoutdiscards.is_set || is_set(ifoutdiscards.operation)) leaf_name_data.push_back(ifoutdiscards.get_name_leafdata());
    if (ifouterrors.is_set || is_set(ifouterrors.operation)) leaf_name_data.push_back(ifouterrors.get_name_leafdata());
    if (ifoutmulticastpkts.is_set || is_set(ifoutmulticastpkts.operation)) leaf_name_data.push_back(ifoutmulticastpkts.get_name_leafdata());
    if (ifoutnucastpkts.is_set || is_set(ifoutnucastpkts.operation)) leaf_name_data.push_back(ifoutnucastpkts.get_name_leafdata());
    if (ifoutoctets.is_set || is_set(ifoutoctets.operation)) leaf_name_data.push_back(ifoutoctets.get_name_leafdata());
    if (ifoutqlen.is_set || is_set(ifoutqlen.operation)) leaf_name_data.push_back(ifoutqlen.get_name_leafdata());
    if (ifoutucastpkts.is_set || is_set(ifoutucastpkts.operation)) leaf_name_data.push_back(ifoutucastpkts.get_name_leafdata());
    if (ifphysaddress.is_set || is_set(ifphysaddress.operation)) leaf_name_data.push_back(ifphysaddress.get_name_leafdata());
    if (ifpromiscuousmode.is_set || is_set(ifpromiscuousmode.operation)) leaf_name_data.push_back(ifpromiscuousmode.get_name_leafdata());
    if (ifspecific.is_set || is_set(ifspecific.operation)) leaf_name_data.push_back(ifspecific.get_name_leafdata());
    if (ifspeed.is_set || is_set(ifspeed.operation)) leaf_name_data.push_back(ifspeed.get_name_leafdata());
    if (iftestcode.is_set || is_set(iftestcode.operation)) leaf_name_data.push_back(iftestcode.get_name_leafdata());
    if (iftestid.is_set || is_set(iftestid.operation)) leaf_name_data.push_back(iftestid.get_name_leafdata());
    if (iftestowner.is_set || is_set(iftestowner.operation)) leaf_name_data.push_back(iftestowner.get_name_leafdata());
    if (iftestresult.is_set || is_set(iftestresult.operation)) leaf_name_data.push_back(iftestresult.get_name_leafdata());
    if (ifteststatus.is_set || is_set(ifteststatus.operation)) leaf_name_data.push_back(ifteststatus.get_name_leafdata());
    if (iftesttype.is_set || is_set(iftesttype.operation)) leaf_name_data.push_back(iftesttype.get_name_leafdata());
    if (iftype.is_set || is_set(iftype.operation)) leaf_name_data.push_back(iftype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IfMib::Iftable::Ifentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IfMib::Iftable::Ifentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IfMib::Iftable::Ifentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "ifAdminStatus")
    {
        ifadminstatus = value;
    }
    if(value_path == "ifAlias")
    {
        ifalias = value;
    }
    if(value_path == "ifConnectorPresent")
    {
        ifconnectorpresent = value;
    }
    if(value_path == "ifCounterDiscontinuityTime")
    {
        ifcounterdiscontinuitytime = value;
    }
    if(value_path == "ifDescr")
    {
        ifdescr = value;
    }
    if(value_path == "ifHCInBroadcastPkts")
    {
        ifhcinbroadcastpkts = value;
    }
    if(value_path == "ifHCInMulticastPkts")
    {
        ifhcinmulticastpkts = value;
    }
    if(value_path == "ifHCInOctets")
    {
        ifhcinoctets = value;
    }
    if(value_path == "ifHCInUcastPkts")
    {
        ifhcinucastpkts = value;
    }
    if(value_path == "ifHCOutBroadcastPkts")
    {
        ifhcoutbroadcastpkts = value;
    }
    if(value_path == "ifHCOutMulticastPkts")
    {
        ifhcoutmulticastpkts = value;
    }
    if(value_path == "ifHCOutOctets")
    {
        ifhcoutoctets = value;
    }
    if(value_path == "ifHCOutUcastPkts")
    {
        ifhcoutucastpkts = value;
    }
    if(value_path == "ifHighSpeed")
    {
        ifhighspeed = value;
    }
    if(value_path == "ifInBroadcastPkts")
    {
        ifinbroadcastpkts = value;
    }
    if(value_path == "ifInDiscards")
    {
        ifindiscards = value;
    }
    if(value_path == "ifInErrors")
    {
        ifinerrors = value;
    }
    if(value_path == "ifInMulticastPkts")
    {
        ifinmulticastpkts = value;
    }
    if(value_path == "ifInNUcastPkts")
    {
        ifinnucastpkts = value;
    }
    if(value_path == "ifInOctets")
    {
        ifinoctets = value;
    }
    if(value_path == "ifInUcastPkts")
    {
        ifinucastpkts = value;
    }
    if(value_path == "ifInUnknownProtos")
    {
        ifinunknownprotos = value;
    }
    if(value_path == "ifLastChange")
    {
        iflastchange = value;
    }
    if(value_path == "ifLinkUpDownTrapEnable")
    {
        iflinkupdowntrapenable = value;
    }
    if(value_path == "ifMtu")
    {
        ifmtu = value;
    }
    if(value_path == "ifName")
    {
        ifname = value;
    }
    if(value_path == "ifOperStatus")
    {
        ifoperstatus = value;
    }
    if(value_path == "ifOutBroadcastPkts")
    {
        ifoutbroadcastpkts = value;
    }
    if(value_path == "ifOutDiscards")
    {
        ifoutdiscards = value;
    }
    if(value_path == "ifOutErrors")
    {
        ifouterrors = value;
    }
    if(value_path == "ifOutMulticastPkts")
    {
        ifoutmulticastpkts = value;
    }
    if(value_path == "ifOutNUcastPkts")
    {
        ifoutnucastpkts = value;
    }
    if(value_path == "ifOutOctets")
    {
        ifoutoctets = value;
    }
    if(value_path == "ifOutQLen")
    {
        ifoutqlen = value;
    }
    if(value_path == "ifOutUcastPkts")
    {
        ifoutucastpkts = value;
    }
    if(value_path == "ifPhysAddress")
    {
        ifphysaddress = value;
    }
    if(value_path == "ifPromiscuousMode")
    {
        ifpromiscuousmode = value;
    }
    if(value_path == "ifSpecific")
    {
        ifspecific = value;
    }
    if(value_path == "ifSpeed")
    {
        ifspeed = value;
    }
    if(value_path == "ifTestCode")
    {
        iftestcode = value;
    }
    if(value_path == "ifTestId")
    {
        iftestid = value;
    }
    if(value_path == "ifTestOwner")
    {
        iftestowner = value;
    }
    if(value_path == "ifTestResult")
    {
        iftestresult = value;
    }
    if(value_path == "ifTestStatus")
    {
        ifteststatus = value;
    }
    if(value_path == "ifTestType")
    {
        iftesttype = value;
    }
    if(value_path == "ifType")
    {
        iftype = value;
    }
}

IfMib::Ifstacktable::Ifstacktable()
{
    yang_name = "ifStackTable"; yang_parent_name = "IF-MIB";
}

IfMib::Ifstacktable::~Ifstacktable()
{
}

bool IfMib::Ifstacktable::has_data() const
{
    for (std::size_t index=0; index<ifstackentry_.size(); index++)
    {
        if(ifstackentry_[index]->has_data())
            return true;
    }
    return false;
}

bool IfMib::Ifstacktable::has_operation() const
{
    for (std::size_t index=0; index<ifstackentry_.size(); index++)
    {
        if(ifstackentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IfMib::Ifstacktable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifStackTable";

    return path_buffer.str();

}

const EntityPath IfMib::Ifstacktable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IF-MIB:IF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IfMib::Ifstacktable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifStackEntry")
    {
        for(auto const & c : ifstackentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IfMib::Ifstacktable::Ifstackentry>();
        c->parent = this;
        ifstackentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IfMib::Ifstacktable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ifstackentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IfMib::Ifstacktable::set_value(const std::string & value_path, std::string value)
{
}

IfMib::Ifstacktable::Ifstackentry::Ifstackentry()
    :
    ifstackhigherlayer{YType::int32, "ifStackHigherLayer"},
    ifstacklowerlayer{YType::int32, "ifStackLowerLayer"},
    ifstackstatus{YType::enumeration, "ifStackStatus"}
{
    yang_name = "ifStackEntry"; yang_parent_name = "ifStackTable";
}

IfMib::Ifstacktable::Ifstackentry::~Ifstackentry()
{
}

bool IfMib::Ifstacktable::Ifstackentry::has_data() const
{
    return ifstackhigherlayer.is_set
	|| ifstacklowerlayer.is_set
	|| ifstackstatus.is_set;
}

bool IfMib::Ifstacktable::Ifstackentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifstackhigherlayer.operation)
	|| is_set(ifstacklowerlayer.operation)
	|| is_set(ifstackstatus.operation);
}

std::string IfMib::Ifstacktable::Ifstackentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifStackEntry" <<"[ifStackHigherLayer='" <<ifstackhigherlayer <<"']" <<"[ifStackLowerLayer='" <<ifstacklowerlayer <<"']";

    return path_buffer.str();

}

const EntityPath IfMib::Ifstacktable::Ifstackentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IF-MIB:IF-MIB/ifStackTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifstackhigherlayer.is_set || is_set(ifstackhigherlayer.operation)) leaf_name_data.push_back(ifstackhigherlayer.get_name_leafdata());
    if (ifstacklowerlayer.is_set || is_set(ifstacklowerlayer.operation)) leaf_name_data.push_back(ifstacklowerlayer.get_name_leafdata());
    if (ifstackstatus.is_set || is_set(ifstackstatus.operation)) leaf_name_data.push_back(ifstackstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IfMib::Ifstacktable::Ifstackentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IfMib::Ifstacktable::Ifstackentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IfMib::Ifstacktable::Ifstackentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifStackHigherLayer")
    {
        ifstackhigherlayer = value;
    }
    if(value_path == "ifStackLowerLayer")
    {
        ifstacklowerlayer = value;
    }
    if(value_path == "ifStackStatus")
    {
        ifstackstatus = value;
    }
}

IfMib::Ifrcvaddresstable::Ifrcvaddresstable()
{
    yang_name = "ifRcvAddressTable"; yang_parent_name = "IF-MIB";
}

IfMib::Ifrcvaddresstable::~Ifrcvaddresstable()
{
}

bool IfMib::Ifrcvaddresstable::has_data() const
{
    for (std::size_t index=0; index<ifrcvaddressentry_.size(); index++)
    {
        if(ifrcvaddressentry_[index]->has_data())
            return true;
    }
    return false;
}

bool IfMib::Ifrcvaddresstable::has_operation() const
{
    for (std::size_t index=0; index<ifrcvaddressentry_.size(); index++)
    {
        if(ifrcvaddressentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IfMib::Ifrcvaddresstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifRcvAddressTable";

    return path_buffer.str();

}

const EntityPath IfMib::Ifrcvaddresstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IF-MIB:IF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IfMib::Ifrcvaddresstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifRcvAddressEntry")
    {
        for(auto const & c : ifrcvaddressentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IfMib::Ifrcvaddresstable::Ifrcvaddressentry>();
        c->parent = this;
        ifrcvaddressentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IfMib::Ifrcvaddresstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ifrcvaddressentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IfMib::Ifrcvaddresstable::set_value(const std::string & value_path, std::string value)
{
}

IfMib::Ifrcvaddresstable::Ifrcvaddressentry::Ifrcvaddressentry()
    :
    ifindex{YType::str, "ifIndex"},
    ifrcvaddressaddress{YType::str, "ifRcvAddressAddress"},
    ifrcvaddressstatus{YType::enumeration, "ifRcvAddressStatus"},
    ifrcvaddresstype{YType::enumeration, "ifRcvAddressType"}
{
    yang_name = "ifRcvAddressEntry"; yang_parent_name = "ifRcvAddressTable";
}

IfMib::Ifrcvaddresstable::Ifrcvaddressentry::~Ifrcvaddressentry()
{
}

bool IfMib::Ifrcvaddresstable::Ifrcvaddressentry::has_data() const
{
    return ifindex.is_set
	|| ifrcvaddressaddress.is_set
	|| ifrcvaddressstatus.is_set
	|| ifrcvaddresstype.is_set;
}

bool IfMib::Ifrcvaddresstable::Ifrcvaddressentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(ifrcvaddressaddress.operation)
	|| is_set(ifrcvaddressstatus.operation)
	|| is_set(ifrcvaddresstype.operation);
}

std::string IfMib::Ifrcvaddresstable::Ifrcvaddressentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifRcvAddressEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[ifRcvAddressAddress='" <<ifrcvaddressaddress <<"']";

    return path_buffer.str();

}

const EntityPath IfMib::Ifrcvaddresstable::Ifrcvaddressentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "IF-MIB:IF-MIB/ifRcvAddressTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (ifrcvaddressaddress.is_set || is_set(ifrcvaddressaddress.operation)) leaf_name_data.push_back(ifrcvaddressaddress.get_name_leafdata());
    if (ifrcvaddressstatus.is_set || is_set(ifrcvaddressstatus.operation)) leaf_name_data.push_back(ifrcvaddressstatus.get_name_leafdata());
    if (ifrcvaddresstype.is_set || is_set(ifrcvaddresstype.operation)) leaf_name_data.push_back(ifrcvaddresstype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IfMib::Ifrcvaddresstable::Ifrcvaddressentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IfMib::Ifrcvaddresstable::Ifrcvaddressentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IfMib::Ifrcvaddresstable::Ifrcvaddressentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "ifRcvAddressAddress")
    {
        ifrcvaddressaddress = value;
    }
    if(value_path == "ifRcvAddressStatus")
    {
        ifrcvaddressstatus = value;
    }
    if(value_path == "ifRcvAddressType")
    {
        ifrcvaddresstype = value;
    }
}

const Enum::YLeaf IfMib::Iftable::Ifentry::IfadminstatusEnum::up {1, "up"};
const Enum::YLeaf IfMib::Iftable::Ifentry::IfadminstatusEnum::down {2, "down"};
const Enum::YLeaf IfMib::Iftable::Ifentry::IfadminstatusEnum::testing {3, "testing"};

const Enum::YLeaf IfMib::Iftable::Ifentry::IfoperstatusEnum::up {1, "up"};
const Enum::YLeaf IfMib::Iftable::Ifentry::IfoperstatusEnum::down {2, "down"};
const Enum::YLeaf IfMib::Iftable::Ifentry::IfoperstatusEnum::testing {3, "testing"};
const Enum::YLeaf IfMib::Iftable::Ifentry::IfoperstatusEnum::unknown {4, "unknown"};
const Enum::YLeaf IfMib::Iftable::Ifentry::IfoperstatusEnum::dormant {5, "dormant"};
const Enum::YLeaf IfMib::Iftable::Ifentry::IfoperstatusEnum::notPresent {6, "notPresent"};
const Enum::YLeaf IfMib::Iftable::Ifentry::IfoperstatusEnum::lowerLayerDown {7, "lowerLayerDown"};

const Enum::YLeaf IfMib::Iftable::Ifentry::IflinkupdowntrapenableEnum::enabled {1, "enabled"};
const Enum::YLeaf IfMib::Iftable::Ifentry::IflinkupdowntrapenableEnum::disabled {2, "disabled"};

const Enum::YLeaf IfMib::Iftable::Ifentry::IfteststatusEnum::notInUse {1, "notInUse"};
const Enum::YLeaf IfMib::Iftable::Ifentry::IfteststatusEnum::inUse {2, "inUse"};

const Enum::YLeaf IfMib::Iftable::Ifentry::IftestresultEnum::none {1, "none"};
const Enum::YLeaf IfMib::Iftable::Ifentry::IftestresultEnum::success {2, "success"};
const Enum::YLeaf IfMib::Iftable::Ifentry::IftestresultEnum::inProgress {3, "inProgress"};
const Enum::YLeaf IfMib::Iftable::Ifentry::IftestresultEnum::notSupported {4, "notSupported"};
const Enum::YLeaf IfMib::Iftable::Ifentry::IftestresultEnum::unAbleToRun {5, "unAbleToRun"};
const Enum::YLeaf IfMib::Iftable::Ifentry::IftestresultEnum::aborted {6, "aborted"};
const Enum::YLeaf IfMib::Iftable::Ifentry::IftestresultEnum::failed {7, "failed"};

const Enum::YLeaf IfMib::Ifrcvaddresstable::Ifrcvaddressentry::IfrcvaddresstypeEnum::other {1, "other"};
const Enum::YLeaf IfMib::Ifrcvaddresstable::Ifrcvaddressentry::IfrcvaddresstypeEnum::volatile_ {2, "volatile"};
const Enum::YLeaf IfMib::Ifrcvaddresstable::Ifrcvaddressentry::IfrcvaddresstypeEnum::nonVolatile {3, "nonVolatile"};


}
}

