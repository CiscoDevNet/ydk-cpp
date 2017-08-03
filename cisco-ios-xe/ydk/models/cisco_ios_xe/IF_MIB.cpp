
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IF_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace IF_MIB {

IfMib::IfMib()
    :
    ifmibobjects(std::make_shared<IfMib::Ifmibobjects>())
	,ifrcvaddresstable(std::make_shared<IfMib::Ifrcvaddresstable>())
	,ifstacktable(std::make_shared<IfMib::Ifstacktable>())
	,iftable(std::make_shared<IfMib::Iftable>())
	,interfaces(std::make_shared<IfMib::Interfaces>())
{
    ifmibobjects->parent = this;

    ifrcvaddresstable->parent = this;

    ifstacktable->parent = this;

    iftable->parent = this;

    interfaces->parent = this;

    yang_name = "IF-MIB"; yang_parent_name = "IF-MIB";
}

IfMib::~IfMib()
{
}

bool IfMib::has_data() const
{
    return (ifmibobjects !=  nullptr && ifmibobjects->has_data())
	|| (ifrcvaddresstable !=  nullptr && ifrcvaddresstable->has_data())
	|| (ifstacktable !=  nullptr && ifstacktable->has_data())
	|| (iftable !=  nullptr && iftable->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool IfMib::has_operation() const
{
    return is_set(yfilter)
	|| (ifmibobjects !=  nullptr && ifmibobjects->has_operation())
	|| (ifrcvaddresstable !=  nullptr && ifrcvaddresstable->has_operation())
	|| (ifstacktable !=  nullptr && ifstacktable->has_operation())
	|| (iftable !=  nullptr && iftable->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
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
        if(ifmibobjects == nullptr)
        {
            ifmibobjects = std::make_shared<IfMib::Ifmibobjects>();
        }
        return ifmibobjects;
    }

    if(child_yang_name == "ifRcvAddressTable")
    {
        if(ifrcvaddresstable == nullptr)
        {
            ifrcvaddresstable = std::make_shared<IfMib::Ifrcvaddresstable>();
        }
        return ifrcvaddresstable;
    }

    if(child_yang_name == "ifStackTable")
    {
        if(ifstacktable == nullptr)
        {
            ifstacktable = std::make_shared<IfMib::Ifstacktable>();
        }
        return ifstacktable;
    }

    if(child_yang_name == "ifTable")
    {
        if(iftable == nullptr)
        {
            iftable = std::make_shared<IfMib::Iftable>();
        }
        return iftable;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<IfMib::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IfMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ifmibobjects != nullptr)
    {
        children["ifMIBObjects"] = ifmibobjects;
    }

    if(ifrcvaddresstable != nullptr)
    {
        children["ifRcvAddressTable"] = ifrcvaddresstable;
    }

    if(ifstacktable != nullptr)
    {
        children["ifStackTable"] = ifstacktable;
    }

    if(iftable != nullptr)
    {
        children["ifTable"] = iftable;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void IfMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IfMib::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> IfMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool IfMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifMIBObjects" || name == "ifRcvAddressTable" || name == "ifStackTable" || name == "ifTable" || name == "interfaces")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ifnumber.yfilter);
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

    if (ifnumber.is_set || is_set(ifnumber.yfilter)) leaf_name_data.push_back(ifnumber.get_name_leafdata());


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

void IfMib::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifNumber")
    {
        ifnumber = value;
        ifnumber.value_namespace = name_space;
        ifnumber.value_namespace_prefix = name_space_prefix;
    }
}

void IfMib::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifNumber")
    {
        ifnumber.yfilter = yfilter;
    }
}

bool IfMib::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifNumber")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ifstacklastchange.yfilter)
	|| ydk::is_set(iftablelastchange.yfilter);
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

    if (ifstacklastchange.is_set || is_set(ifstacklastchange.yfilter)) leaf_name_data.push_back(ifstacklastchange.get_name_leafdata());
    if (iftablelastchange.is_set || is_set(iftablelastchange.yfilter)) leaf_name_data.push_back(iftablelastchange.get_name_leafdata());


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

void IfMib::Ifmibobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifStackLastChange")
    {
        ifstacklastchange = value;
        ifstacklastchange.value_namespace = name_space;
        ifstacklastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifTableLastChange")
    {
        iftablelastchange = value;
        iftablelastchange.value_namespace = name_space;
        iftablelastchange.value_namespace_prefix = name_space_prefix;
    }
}

void IfMib::Ifmibobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifStackLastChange")
    {
        ifstacklastchange.yfilter = yfilter;
    }
    if(value_path == "ifTableLastChange")
    {
        iftablelastchange.yfilter = yfilter;
    }
}

bool IfMib::Ifmibobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifStackLastChange" || name == "ifTableLastChange")
        return true;
    return false;
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
    for (std::size_t index=0; index<ifentry.size(); index++)
    {
        if(ifentry[index]->has_data())
            return true;
    }
    return false;
}

bool IfMib::Iftable::has_operation() const
{
    for (std::size_t index=0; index<ifentry.size(); index++)
    {
        if(ifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : ifentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IfMib::Iftable::Ifentry>();
        c->parent = this;
        ifentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IfMib::Iftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ifentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IfMib::Iftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IfMib::Iftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IfMib::Iftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(ifadminstatus.yfilter)
	|| ydk::is_set(ifalias.yfilter)
	|| ydk::is_set(ifconnectorpresent.yfilter)
	|| ydk::is_set(ifcounterdiscontinuitytime.yfilter)
	|| ydk::is_set(ifdescr.yfilter)
	|| ydk::is_set(ifhcinbroadcastpkts.yfilter)
	|| ydk::is_set(ifhcinmulticastpkts.yfilter)
	|| ydk::is_set(ifhcinoctets.yfilter)
	|| ydk::is_set(ifhcinucastpkts.yfilter)
	|| ydk::is_set(ifhcoutbroadcastpkts.yfilter)
	|| ydk::is_set(ifhcoutmulticastpkts.yfilter)
	|| ydk::is_set(ifhcoutoctets.yfilter)
	|| ydk::is_set(ifhcoutucastpkts.yfilter)
	|| ydk::is_set(ifhighspeed.yfilter)
	|| ydk::is_set(ifinbroadcastpkts.yfilter)
	|| ydk::is_set(ifindiscards.yfilter)
	|| ydk::is_set(ifinerrors.yfilter)
	|| ydk::is_set(ifinmulticastpkts.yfilter)
	|| ydk::is_set(ifinnucastpkts.yfilter)
	|| ydk::is_set(ifinoctets.yfilter)
	|| ydk::is_set(ifinucastpkts.yfilter)
	|| ydk::is_set(ifinunknownprotos.yfilter)
	|| ydk::is_set(iflastchange.yfilter)
	|| ydk::is_set(iflinkupdowntrapenable.yfilter)
	|| ydk::is_set(ifmtu.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(ifoperstatus.yfilter)
	|| ydk::is_set(ifoutbroadcastpkts.yfilter)
	|| ydk::is_set(ifoutdiscards.yfilter)
	|| ydk::is_set(ifouterrors.yfilter)
	|| ydk::is_set(ifoutmulticastpkts.yfilter)
	|| ydk::is_set(ifoutnucastpkts.yfilter)
	|| ydk::is_set(ifoutoctets.yfilter)
	|| ydk::is_set(ifoutqlen.yfilter)
	|| ydk::is_set(ifoutucastpkts.yfilter)
	|| ydk::is_set(ifphysaddress.yfilter)
	|| ydk::is_set(ifpromiscuousmode.yfilter)
	|| ydk::is_set(ifspecific.yfilter)
	|| ydk::is_set(ifspeed.yfilter)
	|| ydk::is_set(iftestcode.yfilter)
	|| ydk::is_set(iftestid.yfilter)
	|| ydk::is_set(iftestowner.yfilter)
	|| ydk::is_set(iftestresult.yfilter)
	|| ydk::is_set(ifteststatus.yfilter)
	|| ydk::is_set(iftesttype.yfilter)
	|| ydk::is_set(iftype.yfilter);
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

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (ifadminstatus.is_set || is_set(ifadminstatus.yfilter)) leaf_name_data.push_back(ifadminstatus.get_name_leafdata());
    if (ifalias.is_set || is_set(ifalias.yfilter)) leaf_name_data.push_back(ifalias.get_name_leafdata());
    if (ifconnectorpresent.is_set || is_set(ifconnectorpresent.yfilter)) leaf_name_data.push_back(ifconnectorpresent.get_name_leafdata());
    if (ifcounterdiscontinuitytime.is_set || is_set(ifcounterdiscontinuitytime.yfilter)) leaf_name_data.push_back(ifcounterdiscontinuitytime.get_name_leafdata());
    if (ifdescr.is_set || is_set(ifdescr.yfilter)) leaf_name_data.push_back(ifdescr.get_name_leafdata());
    if (ifhcinbroadcastpkts.is_set || is_set(ifhcinbroadcastpkts.yfilter)) leaf_name_data.push_back(ifhcinbroadcastpkts.get_name_leafdata());
    if (ifhcinmulticastpkts.is_set || is_set(ifhcinmulticastpkts.yfilter)) leaf_name_data.push_back(ifhcinmulticastpkts.get_name_leafdata());
    if (ifhcinoctets.is_set || is_set(ifhcinoctets.yfilter)) leaf_name_data.push_back(ifhcinoctets.get_name_leafdata());
    if (ifhcinucastpkts.is_set || is_set(ifhcinucastpkts.yfilter)) leaf_name_data.push_back(ifhcinucastpkts.get_name_leafdata());
    if (ifhcoutbroadcastpkts.is_set || is_set(ifhcoutbroadcastpkts.yfilter)) leaf_name_data.push_back(ifhcoutbroadcastpkts.get_name_leafdata());
    if (ifhcoutmulticastpkts.is_set || is_set(ifhcoutmulticastpkts.yfilter)) leaf_name_data.push_back(ifhcoutmulticastpkts.get_name_leafdata());
    if (ifhcoutoctets.is_set || is_set(ifhcoutoctets.yfilter)) leaf_name_data.push_back(ifhcoutoctets.get_name_leafdata());
    if (ifhcoutucastpkts.is_set || is_set(ifhcoutucastpkts.yfilter)) leaf_name_data.push_back(ifhcoutucastpkts.get_name_leafdata());
    if (ifhighspeed.is_set || is_set(ifhighspeed.yfilter)) leaf_name_data.push_back(ifhighspeed.get_name_leafdata());
    if (ifinbroadcastpkts.is_set || is_set(ifinbroadcastpkts.yfilter)) leaf_name_data.push_back(ifinbroadcastpkts.get_name_leafdata());
    if (ifindiscards.is_set || is_set(ifindiscards.yfilter)) leaf_name_data.push_back(ifindiscards.get_name_leafdata());
    if (ifinerrors.is_set || is_set(ifinerrors.yfilter)) leaf_name_data.push_back(ifinerrors.get_name_leafdata());
    if (ifinmulticastpkts.is_set || is_set(ifinmulticastpkts.yfilter)) leaf_name_data.push_back(ifinmulticastpkts.get_name_leafdata());
    if (ifinnucastpkts.is_set || is_set(ifinnucastpkts.yfilter)) leaf_name_data.push_back(ifinnucastpkts.get_name_leafdata());
    if (ifinoctets.is_set || is_set(ifinoctets.yfilter)) leaf_name_data.push_back(ifinoctets.get_name_leafdata());
    if (ifinucastpkts.is_set || is_set(ifinucastpkts.yfilter)) leaf_name_data.push_back(ifinucastpkts.get_name_leafdata());
    if (ifinunknownprotos.is_set || is_set(ifinunknownprotos.yfilter)) leaf_name_data.push_back(ifinunknownprotos.get_name_leafdata());
    if (iflastchange.is_set || is_set(iflastchange.yfilter)) leaf_name_data.push_back(iflastchange.get_name_leafdata());
    if (iflinkupdowntrapenable.is_set || is_set(iflinkupdowntrapenable.yfilter)) leaf_name_data.push_back(iflinkupdowntrapenable.get_name_leafdata());
    if (ifmtu.is_set || is_set(ifmtu.yfilter)) leaf_name_data.push_back(ifmtu.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (ifoperstatus.is_set || is_set(ifoperstatus.yfilter)) leaf_name_data.push_back(ifoperstatus.get_name_leafdata());
    if (ifoutbroadcastpkts.is_set || is_set(ifoutbroadcastpkts.yfilter)) leaf_name_data.push_back(ifoutbroadcastpkts.get_name_leafdata());
    if (ifoutdiscards.is_set || is_set(ifoutdiscards.yfilter)) leaf_name_data.push_back(ifoutdiscards.get_name_leafdata());
    if (ifouterrors.is_set || is_set(ifouterrors.yfilter)) leaf_name_data.push_back(ifouterrors.get_name_leafdata());
    if (ifoutmulticastpkts.is_set || is_set(ifoutmulticastpkts.yfilter)) leaf_name_data.push_back(ifoutmulticastpkts.get_name_leafdata());
    if (ifoutnucastpkts.is_set || is_set(ifoutnucastpkts.yfilter)) leaf_name_data.push_back(ifoutnucastpkts.get_name_leafdata());
    if (ifoutoctets.is_set || is_set(ifoutoctets.yfilter)) leaf_name_data.push_back(ifoutoctets.get_name_leafdata());
    if (ifoutqlen.is_set || is_set(ifoutqlen.yfilter)) leaf_name_data.push_back(ifoutqlen.get_name_leafdata());
    if (ifoutucastpkts.is_set || is_set(ifoutucastpkts.yfilter)) leaf_name_data.push_back(ifoutucastpkts.get_name_leafdata());
    if (ifphysaddress.is_set || is_set(ifphysaddress.yfilter)) leaf_name_data.push_back(ifphysaddress.get_name_leafdata());
    if (ifpromiscuousmode.is_set || is_set(ifpromiscuousmode.yfilter)) leaf_name_data.push_back(ifpromiscuousmode.get_name_leafdata());
    if (ifspecific.is_set || is_set(ifspecific.yfilter)) leaf_name_data.push_back(ifspecific.get_name_leafdata());
    if (ifspeed.is_set || is_set(ifspeed.yfilter)) leaf_name_data.push_back(ifspeed.get_name_leafdata());
    if (iftestcode.is_set || is_set(iftestcode.yfilter)) leaf_name_data.push_back(iftestcode.get_name_leafdata());
    if (iftestid.is_set || is_set(iftestid.yfilter)) leaf_name_data.push_back(iftestid.get_name_leafdata());
    if (iftestowner.is_set || is_set(iftestowner.yfilter)) leaf_name_data.push_back(iftestowner.get_name_leafdata());
    if (iftestresult.is_set || is_set(iftestresult.yfilter)) leaf_name_data.push_back(iftestresult.get_name_leafdata());
    if (ifteststatus.is_set || is_set(ifteststatus.yfilter)) leaf_name_data.push_back(ifteststatus.get_name_leafdata());
    if (iftesttype.is_set || is_set(iftesttype.yfilter)) leaf_name_data.push_back(iftesttype.get_name_leafdata());
    if (iftype.is_set || is_set(iftype.yfilter)) leaf_name_data.push_back(iftype.get_name_leafdata());


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

void IfMib::Iftable::Ifentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifAdminStatus")
    {
        ifadminstatus = value;
        ifadminstatus.value_namespace = name_space;
        ifadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifAlias")
    {
        ifalias = value;
        ifalias.value_namespace = name_space;
        ifalias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifConnectorPresent")
    {
        ifconnectorpresent = value;
        ifconnectorpresent.value_namespace = name_space;
        ifconnectorpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifCounterDiscontinuityTime")
    {
        ifcounterdiscontinuitytime = value;
        ifcounterdiscontinuitytime.value_namespace = name_space;
        ifcounterdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDescr")
    {
        ifdescr = value;
        ifdescr.value_namespace = name_space;
        ifdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifHCInBroadcastPkts")
    {
        ifhcinbroadcastpkts = value;
        ifhcinbroadcastpkts.value_namespace = name_space;
        ifhcinbroadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifHCInMulticastPkts")
    {
        ifhcinmulticastpkts = value;
        ifhcinmulticastpkts.value_namespace = name_space;
        ifhcinmulticastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifHCInOctets")
    {
        ifhcinoctets = value;
        ifhcinoctets.value_namespace = name_space;
        ifhcinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifHCInUcastPkts")
    {
        ifhcinucastpkts = value;
        ifhcinucastpkts.value_namespace = name_space;
        ifhcinucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifHCOutBroadcastPkts")
    {
        ifhcoutbroadcastpkts = value;
        ifhcoutbroadcastpkts.value_namespace = name_space;
        ifhcoutbroadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifHCOutMulticastPkts")
    {
        ifhcoutmulticastpkts = value;
        ifhcoutmulticastpkts.value_namespace = name_space;
        ifhcoutmulticastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifHCOutOctets")
    {
        ifhcoutoctets = value;
        ifhcoutoctets.value_namespace = name_space;
        ifhcoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifHCOutUcastPkts")
    {
        ifhcoutucastpkts = value;
        ifhcoutucastpkts.value_namespace = name_space;
        ifhcoutucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifHighSpeed")
    {
        ifhighspeed = value;
        ifhighspeed.value_namespace = name_space;
        ifhighspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifInBroadcastPkts")
    {
        ifinbroadcastpkts = value;
        ifinbroadcastpkts.value_namespace = name_space;
        ifinbroadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifInDiscards")
    {
        ifindiscards = value;
        ifindiscards.value_namespace = name_space;
        ifindiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifInErrors")
    {
        ifinerrors = value;
        ifinerrors.value_namespace = name_space;
        ifinerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifInMulticastPkts")
    {
        ifinmulticastpkts = value;
        ifinmulticastpkts.value_namespace = name_space;
        ifinmulticastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifInNUcastPkts")
    {
        ifinnucastpkts = value;
        ifinnucastpkts.value_namespace = name_space;
        ifinnucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifInOctets")
    {
        ifinoctets = value;
        ifinoctets.value_namespace = name_space;
        ifinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifInUcastPkts")
    {
        ifinucastpkts = value;
        ifinucastpkts.value_namespace = name_space;
        ifinucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifInUnknownProtos")
    {
        ifinunknownprotos = value;
        ifinunknownprotos.value_namespace = name_space;
        ifinunknownprotos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifLastChange")
    {
        iflastchange = value;
        iflastchange.value_namespace = name_space;
        iflastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifLinkUpDownTrapEnable")
    {
        iflinkupdowntrapenable = value;
        iflinkupdowntrapenable.value_namespace = name_space;
        iflinkupdowntrapenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifMtu")
    {
        ifmtu = value;
        ifmtu.value_namespace = name_space;
        ifmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifName")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOperStatus")
    {
        ifoperstatus = value;
        ifoperstatus.value_namespace = name_space;
        ifoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutBroadcastPkts")
    {
        ifoutbroadcastpkts = value;
        ifoutbroadcastpkts.value_namespace = name_space;
        ifoutbroadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutDiscards")
    {
        ifoutdiscards = value;
        ifoutdiscards.value_namespace = name_space;
        ifoutdiscards.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutErrors")
    {
        ifouterrors = value;
        ifouterrors.value_namespace = name_space;
        ifouterrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutMulticastPkts")
    {
        ifoutmulticastpkts = value;
        ifoutmulticastpkts.value_namespace = name_space;
        ifoutmulticastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutNUcastPkts")
    {
        ifoutnucastpkts = value;
        ifoutnucastpkts.value_namespace = name_space;
        ifoutnucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutOctets")
    {
        ifoutoctets = value;
        ifoutoctets.value_namespace = name_space;
        ifoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutQLen")
    {
        ifoutqlen = value;
        ifoutqlen.value_namespace = name_space;
        ifoutqlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutUcastPkts")
    {
        ifoutucastpkts = value;
        ifoutucastpkts.value_namespace = name_space;
        ifoutucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifPhysAddress")
    {
        ifphysaddress = value;
        ifphysaddress.value_namespace = name_space;
        ifphysaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifPromiscuousMode")
    {
        ifpromiscuousmode = value;
        ifpromiscuousmode.value_namespace = name_space;
        ifpromiscuousmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifSpecific")
    {
        ifspecific = value;
        ifspecific.value_namespace = name_space;
        ifspecific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifSpeed")
    {
        ifspeed = value;
        ifspeed.value_namespace = name_space;
        ifspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifTestCode")
    {
        iftestcode = value;
        iftestcode.value_namespace = name_space;
        iftestcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifTestId")
    {
        iftestid = value;
        iftestid.value_namespace = name_space;
        iftestid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifTestOwner")
    {
        iftestowner = value;
        iftestowner.value_namespace = name_space;
        iftestowner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifTestResult")
    {
        iftestresult = value;
        iftestresult.value_namespace = name_space;
        iftestresult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifTestStatus")
    {
        ifteststatus = value;
        ifteststatus.value_namespace = name_space;
        ifteststatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifTestType")
    {
        iftesttype = value;
        iftesttype.value_namespace = name_space;
        iftesttype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifType")
    {
        iftype = value;
        iftype.value_namespace = name_space;
        iftype.value_namespace_prefix = name_space_prefix;
    }
}

void IfMib::Iftable::Ifentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "ifAdminStatus")
    {
        ifadminstatus.yfilter = yfilter;
    }
    if(value_path == "ifAlias")
    {
        ifalias.yfilter = yfilter;
    }
    if(value_path == "ifConnectorPresent")
    {
        ifconnectorpresent.yfilter = yfilter;
    }
    if(value_path == "ifCounterDiscontinuityTime")
    {
        ifcounterdiscontinuitytime.yfilter = yfilter;
    }
    if(value_path == "ifDescr")
    {
        ifdescr.yfilter = yfilter;
    }
    if(value_path == "ifHCInBroadcastPkts")
    {
        ifhcinbroadcastpkts.yfilter = yfilter;
    }
    if(value_path == "ifHCInMulticastPkts")
    {
        ifhcinmulticastpkts.yfilter = yfilter;
    }
    if(value_path == "ifHCInOctets")
    {
        ifhcinoctets.yfilter = yfilter;
    }
    if(value_path == "ifHCInUcastPkts")
    {
        ifhcinucastpkts.yfilter = yfilter;
    }
    if(value_path == "ifHCOutBroadcastPkts")
    {
        ifhcoutbroadcastpkts.yfilter = yfilter;
    }
    if(value_path == "ifHCOutMulticastPkts")
    {
        ifhcoutmulticastpkts.yfilter = yfilter;
    }
    if(value_path == "ifHCOutOctets")
    {
        ifhcoutoctets.yfilter = yfilter;
    }
    if(value_path == "ifHCOutUcastPkts")
    {
        ifhcoutucastpkts.yfilter = yfilter;
    }
    if(value_path == "ifHighSpeed")
    {
        ifhighspeed.yfilter = yfilter;
    }
    if(value_path == "ifInBroadcastPkts")
    {
        ifinbroadcastpkts.yfilter = yfilter;
    }
    if(value_path == "ifInDiscards")
    {
        ifindiscards.yfilter = yfilter;
    }
    if(value_path == "ifInErrors")
    {
        ifinerrors.yfilter = yfilter;
    }
    if(value_path == "ifInMulticastPkts")
    {
        ifinmulticastpkts.yfilter = yfilter;
    }
    if(value_path == "ifInNUcastPkts")
    {
        ifinnucastpkts.yfilter = yfilter;
    }
    if(value_path == "ifInOctets")
    {
        ifinoctets.yfilter = yfilter;
    }
    if(value_path == "ifInUcastPkts")
    {
        ifinucastpkts.yfilter = yfilter;
    }
    if(value_path == "ifInUnknownProtos")
    {
        ifinunknownprotos.yfilter = yfilter;
    }
    if(value_path == "ifLastChange")
    {
        iflastchange.yfilter = yfilter;
    }
    if(value_path == "ifLinkUpDownTrapEnable")
    {
        iflinkupdowntrapenable.yfilter = yfilter;
    }
    if(value_path == "ifMtu")
    {
        ifmtu.yfilter = yfilter;
    }
    if(value_path == "ifName")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "ifOperStatus")
    {
        ifoperstatus.yfilter = yfilter;
    }
    if(value_path == "ifOutBroadcastPkts")
    {
        ifoutbroadcastpkts.yfilter = yfilter;
    }
    if(value_path == "ifOutDiscards")
    {
        ifoutdiscards.yfilter = yfilter;
    }
    if(value_path == "ifOutErrors")
    {
        ifouterrors.yfilter = yfilter;
    }
    if(value_path == "ifOutMulticastPkts")
    {
        ifoutmulticastpkts.yfilter = yfilter;
    }
    if(value_path == "ifOutNUcastPkts")
    {
        ifoutnucastpkts.yfilter = yfilter;
    }
    if(value_path == "ifOutOctets")
    {
        ifoutoctets.yfilter = yfilter;
    }
    if(value_path == "ifOutQLen")
    {
        ifoutqlen.yfilter = yfilter;
    }
    if(value_path == "ifOutUcastPkts")
    {
        ifoutucastpkts.yfilter = yfilter;
    }
    if(value_path == "ifPhysAddress")
    {
        ifphysaddress.yfilter = yfilter;
    }
    if(value_path == "ifPromiscuousMode")
    {
        ifpromiscuousmode.yfilter = yfilter;
    }
    if(value_path == "ifSpecific")
    {
        ifspecific.yfilter = yfilter;
    }
    if(value_path == "ifSpeed")
    {
        ifspeed.yfilter = yfilter;
    }
    if(value_path == "ifTestCode")
    {
        iftestcode.yfilter = yfilter;
    }
    if(value_path == "ifTestId")
    {
        iftestid.yfilter = yfilter;
    }
    if(value_path == "ifTestOwner")
    {
        iftestowner.yfilter = yfilter;
    }
    if(value_path == "ifTestResult")
    {
        iftestresult.yfilter = yfilter;
    }
    if(value_path == "ifTestStatus")
    {
        ifteststatus.yfilter = yfilter;
    }
    if(value_path == "ifTestType")
    {
        iftesttype.yfilter = yfilter;
    }
    if(value_path == "ifType")
    {
        iftype.yfilter = yfilter;
    }
}

bool IfMib::Iftable::Ifentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "ifAdminStatus" || name == "ifAlias" || name == "ifConnectorPresent" || name == "ifCounterDiscontinuityTime" || name == "ifDescr" || name == "ifHCInBroadcastPkts" || name == "ifHCInMulticastPkts" || name == "ifHCInOctets" || name == "ifHCInUcastPkts" || name == "ifHCOutBroadcastPkts" || name == "ifHCOutMulticastPkts" || name == "ifHCOutOctets" || name == "ifHCOutUcastPkts" || name == "ifHighSpeed" || name == "ifInBroadcastPkts" || name == "ifInDiscards" || name == "ifInErrors" || name == "ifInMulticastPkts" || name == "ifInNUcastPkts" || name == "ifInOctets" || name == "ifInUcastPkts" || name == "ifInUnknownProtos" || name == "ifLastChange" || name == "ifLinkUpDownTrapEnable" || name == "ifMtu" || name == "ifName" || name == "ifOperStatus" || name == "ifOutBroadcastPkts" || name == "ifOutDiscards" || name == "ifOutErrors" || name == "ifOutMulticastPkts" || name == "ifOutNUcastPkts" || name == "ifOutOctets" || name == "ifOutQLen" || name == "ifOutUcastPkts" || name == "ifPhysAddress" || name == "ifPromiscuousMode" || name == "ifSpecific" || name == "ifSpeed" || name == "ifTestCode" || name == "ifTestId" || name == "ifTestOwner" || name == "ifTestResult" || name == "ifTestStatus" || name == "ifTestType" || name == "ifType")
        return true;
    return false;
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
    for (std::size_t index=0; index<ifstackentry.size(); index++)
    {
        if(ifstackentry[index]->has_data())
            return true;
    }
    return false;
}

bool IfMib::Ifstacktable::has_operation() const
{
    for (std::size_t index=0; index<ifstackentry.size(); index++)
    {
        if(ifstackentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : ifstackentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IfMib::Ifstacktable::Ifstackentry>();
        c->parent = this;
        ifstackentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IfMib::Ifstacktable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ifstackentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IfMib::Ifstacktable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IfMib::Ifstacktable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IfMib::Ifstacktable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifStackEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ifstackhigherlayer.yfilter)
	|| ydk::is_set(ifstacklowerlayer.yfilter)
	|| ydk::is_set(ifstackstatus.yfilter);
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

    if (ifstackhigherlayer.is_set || is_set(ifstackhigherlayer.yfilter)) leaf_name_data.push_back(ifstackhigherlayer.get_name_leafdata());
    if (ifstacklowerlayer.is_set || is_set(ifstacklowerlayer.yfilter)) leaf_name_data.push_back(ifstacklowerlayer.get_name_leafdata());
    if (ifstackstatus.is_set || is_set(ifstackstatus.yfilter)) leaf_name_data.push_back(ifstackstatus.get_name_leafdata());


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

void IfMib::Ifstacktable::Ifstackentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifStackHigherLayer")
    {
        ifstackhigherlayer = value;
        ifstackhigherlayer.value_namespace = name_space;
        ifstackhigherlayer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifStackLowerLayer")
    {
        ifstacklowerlayer = value;
        ifstacklowerlayer.value_namespace = name_space;
        ifstacklowerlayer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifStackStatus")
    {
        ifstackstatus = value;
        ifstackstatus.value_namespace = name_space;
        ifstackstatus.value_namespace_prefix = name_space_prefix;
    }
}

void IfMib::Ifstacktable::Ifstackentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifStackHigherLayer")
    {
        ifstackhigherlayer.yfilter = yfilter;
    }
    if(value_path == "ifStackLowerLayer")
    {
        ifstacklowerlayer.yfilter = yfilter;
    }
    if(value_path == "ifStackStatus")
    {
        ifstackstatus.yfilter = yfilter;
    }
}

bool IfMib::Ifstacktable::Ifstackentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifStackHigherLayer" || name == "ifStackLowerLayer" || name == "ifStackStatus")
        return true;
    return false;
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
    for (std::size_t index=0; index<ifrcvaddressentry.size(); index++)
    {
        if(ifrcvaddressentry[index]->has_data())
            return true;
    }
    return false;
}

bool IfMib::Ifrcvaddresstable::has_operation() const
{
    for (std::size_t index=0; index<ifrcvaddressentry.size(); index++)
    {
        if(ifrcvaddressentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
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
        for(auto const & c : ifrcvaddressentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IfMib::Ifrcvaddresstable::Ifrcvaddressentry>();
        c->parent = this;
        ifrcvaddressentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IfMib::Ifrcvaddresstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ifrcvaddressentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IfMib::Ifrcvaddresstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IfMib::Ifrcvaddresstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IfMib::Ifrcvaddresstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifRcvAddressEntry")
        return true;
    return false;
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
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(ifrcvaddressaddress.yfilter)
	|| ydk::is_set(ifrcvaddressstatus.yfilter)
	|| ydk::is_set(ifrcvaddresstype.yfilter);
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

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (ifrcvaddressaddress.is_set || is_set(ifrcvaddressaddress.yfilter)) leaf_name_data.push_back(ifrcvaddressaddress.get_name_leafdata());
    if (ifrcvaddressstatus.is_set || is_set(ifrcvaddressstatus.yfilter)) leaf_name_data.push_back(ifrcvaddressstatus.get_name_leafdata());
    if (ifrcvaddresstype.is_set || is_set(ifrcvaddresstype.yfilter)) leaf_name_data.push_back(ifrcvaddresstype.get_name_leafdata());


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

void IfMib::Ifrcvaddresstable::Ifrcvaddressentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifRcvAddressAddress")
    {
        ifrcvaddressaddress = value;
        ifrcvaddressaddress.value_namespace = name_space;
        ifrcvaddressaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifRcvAddressStatus")
    {
        ifrcvaddressstatus = value;
        ifrcvaddressstatus.value_namespace = name_space;
        ifrcvaddressstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifRcvAddressType")
    {
        ifrcvaddresstype = value;
        ifrcvaddresstype.value_namespace = name_space;
        ifrcvaddresstype.value_namespace_prefix = name_space_prefix;
    }
}

void IfMib::Ifrcvaddresstable::Ifrcvaddressentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "ifRcvAddressAddress")
    {
        ifrcvaddressaddress.yfilter = yfilter;
    }
    if(value_path == "ifRcvAddressStatus")
    {
        ifrcvaddressstatus.yfilter = yfilter;
    }
    if(value_path == "ifRcvAddressType")
    {
        ifrcvaddresstype.yfilter = yfilter;
    }
}

bool IfMib::Ifrcvaddresstable::Ifrcvaddressentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "ifRcvAddressAddress" || name == "ifRcvAddressStatus" || name == "ifRcvAddressType")
        return true;
    return false;
}

const Enum::YLeaf IfMib::Iftable::Ifentry::Ifadminstatus::up {1, "up"};
const Enum::YLeaf IfMib::Iftable::Ifentry::Ifadminstatus::down {2, "down"};
const Enum::YLeaf IfMib::Iftable::Ifentry::Ifadminstatus::testing {3, "testing"};

const Enum::YLeaf IfMib::Iftable::Ifentry::Ifoperstatus::up {1, "up"};
const Enum::YLeaf IfMib::Iftable::Ifentry::Ifoperstatus::down {2, "down"};
const Enum::YLeaf IfMib::Iftable::Ifentry::Ifoperstatus::testing {3, "testing"};
const Enum::YLeaf IfMib::Iftable::Ifentry::Ifoperstatus::unknown {4, "unknown"};
const Enum::YLeaf IfMib::Iftable::Ifentry::Ifoperstatus::dormant {5, "dormant"};
const Enum::YLeaf IfMib::Iftable::Ifentry::Ifoperstatus::notPresent {6, "notPresent"};
const Enum::YLeaf IfMib::Iftable::Ifentry::Ifoperstatus::lowerLayerDown {7, "lowerLayerDown"};

const Enum::YLeaf IfMib::Iftable::Ifentry::Iflinkupdowntrapenable::enabled {1, "enabled"};
const Enum::YLeaf IfMib::Iftable::Ifentry::Iflinkupdowntrapenable::disabled {2, "disabled"};

const Enum::YLeaf IfMib::Iftable::Ifentry::Ifteststatus::notInUse {1, "notInUse"};
const Enum::YLeaf IfMib::Iftable::Ifentry::Ifteststatus::inUse {2, "inUse"};

const Enum::YLeaf IfMib::Iftable::Ifentry::Iftestresult::none {1, "none"};
const Enum::YLeaf IfMib::Iftable::Ifentry::Iftestresult::success {2, "success"};
const Enum::YLeaf IfMib::Iftable::Ifentry::Iftestresult::inProgress {3, "inProgress"};
const Enum::YLeaf IfMib::Iftable::Ifentry::Iftestresult::notSupported {4, "notSupported"};
const Enum::YLeaf IfMib::Iftable::Ifentry::Iftestresult::unAbleToRun {5, "unAbleToRun"};
const Enum::YLeaf IfMib::Iftable::Ifentry::Iftestresult::aborted {6, "aborted"};
const Enum::YLeaf IfMib::Iftable::Ifentry::Iftestresult::failed {7, "failed"};

const Enum::YLeaf IfMib::Ifrcvaddresstable::Ifrcvaddressentry::Ifrcvaddresstype::other {1, "other"};
const Enum::YLeaf IfMib::Ifrcvaddresstable::Ifrcvaddressentry::Ifrcvaddresstype::volatile_ {2, "volatile"};
const Enum::YLeaf IfMib::Ifrcvaddresstable::Ifrcvaddressentry::Ifrcvaddresstype::nonVolatile {3, "nonVolatile"};


}
}

