
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IF_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace IF_MIB {

IFMIB::IFMIB()
    :
    interfaces(std::make_shared<IFMIB::Interfaces>())
    , ifmibobjects(std::make_shared<IFMIB::IfMIBObjects>())
    , iftable(std::make_shared<IFMIB::IfTable>())
    , ifstacktable(std::make_shared<IFMIB::IfStackTable>())
    , ifrcvaddresstable(std::make_shared<IFMIB::IfRcvAddressTable>())
{
    interfaces->parent = this;
    ifmibobjects->parent = this;
    iftable->parent = this;
    ifstacktable->parent = this;
    ifrcvaddresstable->parent = this;

    yang_name = "IF-MIB"; yang_parent_name = "IF-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

IFMIB::~IFMIB()
{
}

bool IFMIB::has_data() const
{
    if (is_presence_container) return true;
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (ifmibobjects !=  nullptr && ifmibobjects->has_data())
	|| (iftable !=  nullptr && iftable->has_data())
	|| (ifstacktable !=  nullptr && ifstacktable->has_data())
	|| (ifrcvaddresstable !=  nullptr && ifrcvaddresstable->has_data());
}

bool IFMIB::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (ifmibobjects !=  nullptr && ifmibobjects->has_operation())
	|| (iftable !=  nullptr && iftable->has_operation())
	|| (ifstacktable !=  nullptr && ifstacktable->has_operation())
	|| (ifrcvaddresstable !=  nullptr && ifrcvaddresstable->has_operation());
}

std::string IFMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IF-MIB:IF-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IFMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IFMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<IFMIB::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "ifMIBObjects")
    {
        if(ifmibobjects == nullptr)
        {
            ifmibobjects = std::make_shared<IFMIB::IfMIBObjects>();
        }
        return ifmibobjects;
    }

    if(child_yang_name == "ifTable")
    {
        if(iftable == nullptr)
        {
            iftable = std::make_shared<IFMIB::IfTable>();
        }
        return iftable;
    }

    if(child_yang_name == "ifStackTable")
    {
        if(ifstacktable == nullptr)
        {
            ifstacktable = std::make_shared<IFMIB::IfStackTable>();
        }
        return ifstacktable;
    }

    if(child_yang_name == "ifRcvAddressTable")
    {
        if(ifrcvaddresstable == nullptr)
        {
            ifrcvaddresstable = std::make_shared<IFMIB::IfRcvAddressTable>();
        }
        return ifrcvaddresstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IFMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    if(ifmibobjects != nullptr)
    {
        _children["ifMIBObjects"] = ifmibobjects;
    }

    if(iftable != nullptr)
    {
        _children["ifTable"] = iftable;
    }

    if(ifstacktable != nullptr)
    {
        _children["ifStackTable"] = ifstacktable;
    }

    if(ifrcvaddresstable != nullptr)
    {
        _children["ifRcvAddressTable"] = ifrcvaddresstable;
    }

    return _children;
}

void IFMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IFMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> IFMIB::clone_ptr() const
{
    return std::make_shared<IFMIB>();
}

std::string IFMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string IFMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function IFMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IFMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool IFMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "ifMIBObjects" || name == "ifTable" || name == "ifStackTable" || name == "ifRcvAddressTable")
        return true;
    return false;
}

IFMIB::Interfaces::Interfaces()
    :
    ifnumber{YType::int32, "ifNumber"}
{

    yang_name = "interfaces"; yang_parent_name = "IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

IFMIB::Interfaces::~Interfaces()
{
}

bool IFMIB::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    return ifnumber.is_set;
}

bool IFMIB::Interfaces::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifnumber.yfilter);
}

std::string IFMIB::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IF-MIB:IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IFMIB::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IFMIB::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifnumber.is_set || is_set(ifnumber.yfilter)) leaf_name_data.push_back(ifnumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IFMIB::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IFMIB::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IFMIB::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifNumber")
    {
        ifnumber = value;
        ifnumber.value_namespace = name_space;
        ifnumber.value_namespace_prefix = name_space_prefix;
    }
}

void IFMIB::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifNumber")
    {
        ifnumber.yfilter = yfilter;
    }
}

bool IFMIB::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifNumber")
        return true;
    return false;
}

IFMIB::IfMIBObjects::IfMIBObjects()
    :
    iftablelastchange{YType::uint32, "ifTableLastChange"},
    ifstacklastchange{YType::uint32, "ifStackLastChange"}
{

    yang_name = "ifMIBObjects"; yang_parent_name = "IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

IFMIB::IfMIBObjects::~IfMIBObjects()
{
}

bool IFMIB::IfMIBObjects::has_data() const
{
    if (is_presence_container) return true;
    return iftablelastchange.is_set
	|| ifstacklastchange.is_set;
}

bool IFMIB::IfMIBObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iftablelastchange.yfilter)
	|| ydk::is_set(ifstacklastchange.yfilter);
}

std::string IFMIB::IfMIBObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IF-MIB:IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IFMIB::IfMIBObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifMIBObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IFMIB::IfMIBObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iftablelastchange.is_set || is_set(iftablelastchange.yfilter)) leaf_name_data.push_back(iftablelastchange.get_name_leafdata());
    if (ifstacklastchange.is_set || is_set(ifstacklastchange.yfilter)) leaf_name_data.push_back(ifstacklastchange.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IFMIB::IfMIBObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IFMIB::IfMIBObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IFMIB::IfMIBObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifTableLastChange")
    {
        iftablelastchange = value;
        iftablelastchange.value_namespace = name_space;
        iftablelastchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifStackLastChange")
    {
        ifstacklastchange = value;
        ifstacklastchange.value_namespace = name_space;
        ifstacklastchange.value_namespace_prefix = name_space_prefix;
    }
}

void IFMIB::IfMIBObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifTableLastChange")
    {
        iftablelastchange.yfilter = yfilter;
    }
    if(value_path == "ifStackLastChange")
    {
        ifstacklastchange.yfilter = yfilter;
    }
}

bool IFMIB::IfMIBObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifTableLastChange" || name == "ifStackLastChange")
        return true;
    return false;
}

IFMIB::IfTable::IfTable()
    :
    ifentry(this, {"ifindex"})
{

    yang_name = "ifTable"; yang_parent_name = "IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

IFMIB::IfTable::~IfTable()
{
}

bool IFMIB::IfTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifentry.len(); index++)
    {
        if(ifentry[index]->has_data())
            return true;
    }
    return false;
}

bool IFMIB::IfTable::has_operation() const
{
    for (std::size_t index=0; index<ifentry.len(); index++)
    {
        if(ifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IFMIB::IfTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IF-MIB:IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IFMIB::IfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IFMIB::IfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IFMIB::IfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifEntry")
    {
        auto ent_ = std::make_shared<IFMIB::IfTable::IfEntry>();
        ent_->parent = this;
        ifentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IFMIB::IfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ifentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IFMIB::IfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IFMIB::IfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IFMIB::IfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifEntry")
        return true;
    return false;
}

IFMIB::IfTable::IfEntry::IfEntry()
    :
    ifindex{YType::int32, "ifIndex"},
    ifdescr{YType::str, "ifDescr"},
    iftype{YType::enumeration, "ifType"},
    ifmtu{YType::int32, "ifMtu"},
    ifspeed{YType::uint32, "ifSpeed"},
    ifphysaddress{YType::str, "ifPhysAddress"},
    ifadminstatus{YType::enumeration, "ifAdminStatus"},
    ifoperstatus{YType::enumeration, "ifOperStatus"},
    iflastchange{YType::uint32, "ifLastChange"},
    ifinoctets{YType::uint32, "ifInOctets"},
    ifinucastpkts{YType::uint32, "ifInUcastPkts"},
    ifinnucastpkts{YType::uint32, "ifInNUcastPkts"},
    ifindiscards{YType::uint32, "ifInDiscards"},
    ifinerrors{YType::uint32, "ifInErrors"},
    ifinunknownprotos{YType::uint32, "ifInUnknownProtos"},
    ifoutoctets{YType::uint32, "ifOutOctets"},
    ifoutucastpkts{YType::uint32, "ifOutUcastPkts"},
    ifoutnucastpkts{YType::uint32, "ifOutNUcastPkts"},
    ifoutdiscards{YType::uint32, "ifOutDiscards"},
    ifouterrors{YType::uint32, "ifOutErrors"},
    ifoutqlen{YType::uint32, "ifOutQLen"},
    ifspecific{YType::str, "ifSpecific"},
    ifname{YType::str, "ifName"},
    ifinmulticastpkts{YType::uint32, "ifInMulticastPkts"},
    ifinbroadcastpkts{YType::uint32, "ifInBroadcastPkts"},
    ifoutmulticastpkts{YType::uint32, "ifOutMulticastPkts"},
    ifoutbroadcastpkts{YType::uint32, "ifOutBroadcastPkts"},
    ifhcinoctets{YType::uint64, "ifHCInOctets"},
    ifhcinucastpkts{YType::uint64, "ifHCInUcastPkts"},
    ifhcinmulticastpkts{YType::uint64, "ifHCInMulticastPkts"},
    ifhcinbroadcastpkts{YType::uint64, "ifHCInBroadcastPkts"},
    ifhcoutoctets{YType::uint64, "ifHCOutOctets"},
    ifhcoutucastpkts{YType::uint64, "ifHCOutUcastPkts"},
    ifhcoutmulticastpkts{YType::uint64, "ifHCOutMulticastPkts"},
    ifhcoutbroadcastpkts{YType::uint64, "ifHCOutBroadcastPkts"},
    iflinkupdowntrapenable{YType::enumeration, "ifLinkUpDownTrapEnable"},
    ifhighspeed{YType::uint32, "ifHighSpeed"},
    ifpromiscuousmode{YType::boolean, "ifPromiscuousMode"},
    ifconnectorpresent{YType::boolean, "ifConnectorPresent"},
    ifalias{YType::str, "ifAlias"},
    ifcounterdiscontinuitytime{YType::uint32, "ifCounterDiscontinuityTime"},
    iftestid{YType::int32, "ifTestId"},
    ifteststatus{YType::enumeration, "ifTestStatus"},
    iftesttype{YType::str, "ifTestType"},
    iftestresult{YType::enumeration, "ifTestResult"},
    iftestcode{YType::str, "ifTestCode"},
    iftestowner{YType::str, "ifTestOwner"}
{

    yang_name = "ifEntry"; yang_parent_name = "ifTable"; is_top_level_class = false; has_list_ancestor = false; 
}

IFMIB::IfTable::IfEntry::~IfEntry()
{
}

bool IFMIB::IfTable::IfEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| ifdescr.is_set
	|| iftype.is_set
	|| ifmtu.is_set
	|| ifspeed.is_set
	|| ifphysaddress.is_set
	|| ifadminstatus.is_set
	|| ifoperstatus.is_set
	|| iflastchange.is_set
	|| ifinoctets.is_set
	|| ifinucastpkts.is_set
	|| ifinnucastpkts.is_set
	|| ifindiscards.is_set
	|| ifinerrors.is_set
	|| ifinunknownprotos.is_set
	|| ifoutoctets.is_set
	|| ifoutucastpkts.is_set
	|| ifoutnucastpkts.is_set
	|| ifoutdiscards.is_set
	|| ifouterrors.is_set
	|| ifoutqlen.is_set
	|| ifspecific.is_set
	|| ifname.is_set
	|| ifinmulticastpkts.is_set
	|| ifinbroadcastpkts.is_set
	|| ifoutmulticastpkts.is_set
	|| ifoutbroadcastpkts.is_set
	|| ifhcinoctets.is_set
	|| ifhcinucastpkts.is_set
	|| ifhcinmulticastpkts.is_set
	|| ifhcinbroadcastpkts.is_set
	|| ifhcoutoctets.is_set
	|| ifhcoutucastpkts.is_set
	|| ifhcoutmulticastpkts.is_set
	|| ifhcoutbroadcastpkts.is_set
	|| iflinkupdowntrapenable.is_set
	|| ifhighspeed.is_set
	|| ifpromiscuousmode.is_set
	|| ifconnectorpresent.is_set
	|| ifalias.is_set
	|| ifcounterdiscontinuitytime.is_set
	|| iftestid.is_set
	|| ifteststatus.is_set
	|| iftesttype.is_set
	|| iftestresult.is_set
	|| iftestcode.is_set
	|| iftestowner.is_set;
}

bool IFMIB::IfTable::IfEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(ifdescr.yfilter)
	|| ydk::is_set(iftype.yfilter)
	|| ydk::is_set(ifmtu.yfilter)
	|| ydk::is_set(ifspeed.yfilter)
	|| ydk::is_set(ifphysaddress.yfilter)
	|| ydk::is_set(ifadminstatus.yfilter)
	|| ydk::is_set(ifoperstatus.yfilter)
	|| ydk::is_set(iflastchange.yfilter)
	|| ydk::is_set(ifinoctets.yfilter)
	|| ydk::is_set(ifinucastpkts.yfilter)
	|| ydk::is_set(ifinnucastpkts.yfilter)
	|| ydk::is_set(ifindiscards.yfilter)
	|| ydk::is_set(ifinerrors.yfilter)
	|| ydk::is_set(ifinunknownprotos.yfilter)
	|| ydk::is_set(ifoutoctets.yfilter)
	|| ydk::is_set(ifoutucastpkts.yfilter)
	|| ydk::is_set(ifoutnucastpkts.yfilter)
	|| ydk::is_set(ifoutdiscards.yfilter)
	|| ydk::is_set(ifouterrors.yfilter)
	|| ydk::is_set(ifoutqlen.yfilter)
	|| ydk::is_set(ifspecific.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(ifinmulticastpkts.yfilter)
	|| ydk::is_set(ifinbroadcastpkts.yfilter)
	|| ydk::is_set(ifoutmulticastpkts.yfilter)
	|| ydk::is_set(ifoutbroadcastpkts.yfilter)
	|| ydk::is_set(ifhcinoctets.yfilter)
	|| ydk::is_set(ifhcinucastpkts.yfilter)
	|| ydk::is_set(ifhcinmulticastpkts.yfilter)
	|| ydk::is_set(ifhcinbroadcastpkts.yfilter)
	|| ydk::is_set(ifhcoutoctets.yfilter)
	|| ydk::is_set(ifhcoutucastpkts.yfilter)
	|| ydk::is_set(ifhcoutmulticastpkts.yfilter)
	|| ydk::is_set(ifhcoutbroadcastpkts.yfilter)
	|| ydk::is_set(iflinkupdowntrapenable.yfilter)
	|| ydk::is_set(ifhighspeed.yfilter)
	|| ydk::is_set(ifpromiscuousmode.yfilter)
	|| ydk::is_set(ifconnectorpresent.yfilter)
	|| ydk::is_set(ifalias.yfilter)
	|| ydk::is_set(ifcounterdiscontinuitytime.yfilter)
	|| ydk::is_set(iftestid.yfilter)
	|| ydk::is_set(ifteststatus.yfilter)
	|| ydk::is_set(iftesttype.yfilter)
	|| ydk::is_set(iftestresult.yfilter)
	|| ydk::is_set(iftestcode.yfilter)
	|| ydk::is_set(iftestowner.yfilter);
}

std::string IFMIB::IfTable::IfEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IF-MIB:IF-MIB/ifTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IFMIB::IfTable::IfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IFMIB::IfTable::IfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (ifdescr.is_set || is_set(ifdescr.yfilter)) leaf_name_data.push_back(ifdescr.get_name_leafdata());
    if (iftype.is_set || is_set(iftype.yfilter)) leaf_name_data.push_back(iftype.get_name_leafdata());
    if (ifmtu.is_set || is_set(ifmtu.yfilter)) leaf_name_data.push_back(ifmtu.get_name_leafdata());
    if (ifspeed.is_set || is_set(ifspeed.yfilter)) leaf_name_data.push_back(ifspeed.get_name_leafdata());
    if (ifphysaddress.is_set || is_set(ifphysaddress.yfilter)) leaf_name_data.push_back(ifphysaddress.get_name_leafdata());
    if (ifadminstatus.is_set || is_set(ifadminstatus.yfilter)) leaf_name_data.push_back(ifadminstatus.get_name_leafdata());
    if (ifoperstatus.is_set || is_set(ifoperstatus.yfilter)) leaf_name_data.push_back(ifoperstatus.get_name_leafdata());
    if (iflastchange.is_set || is_set(iflastchange.yfilter)) leaf_name_data.push_back(iflastchange.get_name_leafdata());
    if (ifinoctets.is_set || is_set(ifinoctets.yfilter)) leaf_name_data.push_back(ifinoctets.get_name_leafdata());
    if (ifinucastpkts.is_set || is_set(ifinucastpkts.yfilter)) leaf_name_data.push_back(ifinucastpkts.get_name_leafdata());
    if (ifinnucastpkts.is_set || is_set(ifinnucastpkts.yfilter)) leaf_name_data.push_back(ifinnucastpkts.get_name_leafdata());
    if (ifindiscards.is_set || is_set(ifindiscards.yfilter)) leaf_name_data.push_back(ifindiscards.get_name_leafdata());
    if (ifinerrors.is_set || is_set(ifinerrors.yfilter)) leaf_name_data.push_back(ifinerrors.get_name_leafdata());
    if (ifinunknownprotos.is_set || is_set(ifinunknownprotos.yfilter)) leaf_name_data.push_back(ifinunknownprotos.get_name_leafdata());
    if (ifoutoctets.is_set || is_set(ifoutoctets.yfilter)) leaf_name_data.push_back(ifoutoctets.get_name_leafdata());
    if (ifoutucastpkts.is_set || is_set(ifoutucastpkts.yfilter)) leaf_name_data.push_back(ifoutucastpkts.get_name_leafdata());
    if (ifoutnucastpkts.is_set || is_set(ifoutnucastpkts.yfilter)) leaf_name_data.push_back(ifoutnucastpkts.get_name_leafdata());
    if (ifoutdiscards.is_set || is_set(ifoutdiscards.yfilter)) leaf_name_data.push_back(ifoutdiscards.get_name_leafdata());
    if (ifouterrors.is_set || is_set(ifouterrors.yfilter)) leaf_name_data.push_back(ifouterrors.get_name_leafdata());
    if (ifoutqlen.is_set || is_set(ifoutqlen.yfilter)) leaf_name_data.push_back(ifoutqlen.get_name_leafdata());
    if (ifspecific.is_set || is_set(ifspecific.yfilter)) leaf_name_data.push_back(ifspecific.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (ifinmulticastpkts.is_set || is_set(ifinmulticastpkts.yfilter)) leaf_name_data.push_back(ifinmulticastpkts.get_name_leafdata());
    if (ifinbroadcastpkts.is_set || is_set(ifinbroadcastpkts.yfilter)) leaf_name_data.push_back(ifinbroadcastpkts.get_name_leafdata());
    if (ifoutmulticastpkts.is_set || is_set(ifoutmulticastpkts.yfilter)) leaf_name_data.push_back(ifoutmulticastpkts.get_name_leafdata());
    if (ifoutbroadcastpkts.is_set || is_set(ifoutbroadcastpkts.yfilter)) leaf_name_data.push_back(ifoutbroadcastpkts.get_name_leafdata());
    if (ifhcinoctets.is_set || is_set(ifhcinoctets.yfilter)) leaf_name_data.push_back(ifhcinoctets.get_name_leafdata());
    if (ifhcinucastpkts.is_set || is_set(ifhcinucastpkts.yfilter)) leaf_name_data.push_back(ifhcinucastpkts.get_name_leafdata());
    if (ifhcinmulticastpkts.is_set || is_set(ifhcinmulticastpkts.yfilter)) leaf_name_data.push_back(ifhcinmulticastpkts.get_name_leafdata());
    if (ifhcinbroadcastpkts.is_set || is_set(ifhcinbroadcastpkts.yfilter)) leaf_name_data.push_back(ifhcinbroadcastpkts.get_name_leafdata());
    if (ifhcoutoctets.is_set || is_set(ifhcoutoctets.yfilter)) leaf_name_data.push_back(ifhcoutoctets.get_name_leafdata());
    if (ifhcoutucastpkts.is_set || is_set(ifhcoutucastpkts.yfilter)) leaf_name_data.push_back(ifhcoutucastpkts.get_name_leafdata());
    if (ifhcoutmulticastpkts.is_set || is_set(ifhcoutmulticastpkts.yfilter)) leaf_name_data.push_back(ifhcoutmulticastpkts.get_name_leafdata());
    if (ifhcoutbroadcastpkts.is_set || is_set(ifhcoutbroadcastpkts.yfilter)) leaf_name_data.push_back(ifhcoutbroadcastpkts.get_name_leafdata());
    if (iflinkupdowntrapenable.is_set || is_set(iflinkupdowntrapenable.yfilter)) leaf_name_data.push_back(iflinkupdowntrapenable.get_name_leafdata());
    if (ifhighspeed.is_set || is_set(ifhighspeed.yfilter)) leaf_name_data.push_back(ifhighspeed.get_name_leafdata());
    if (ifpromiscuousmode.is_set || is_set(ifpromiscuousmode.yfilter)) leaf_name_data.push_back(ifpromiscuousmode.get_name_leafdata());
    if (ifconnectorpresent.is_set || is_set(ifconnectorpresent.yfilter)) leaf_name_data.push_back(ifconnectorpresent.get_name_leafdata());
    if (ifalias.is_set || is_set(ifalias.yfilter)) leaf_name_data.push_back(ifalias.get_name_leafdata());
    if (ifcounterdiscontinuitytime.is_set || is_set(ifcounterdiscontinuitytime.yfilter)) leaf_name_data.push_back(ifcounterdiscontinuitytime.get_name_leafdata());
    if (iftestid.is_set || is_set(iftestid.yfilter)) leaf_name_data.push_back(iftestid.get_name_leafdata());
    if (ifteststatus.is_set || is_set(ifteststatus.yfilter)) leaf_name_data.push_back(ifteststatus.get_name_leafdata());
    if (iftesttype.is_set || is_set(iftesttype.yfilter)) leaf_name_data.push_back(iftesttype.get_name_leafdata());
    if (iftestresult.is_set || is_set(iftestresult.yfilter)) leaf_name_data.push_back(iftestresult.get_name_leafdata());
    if (iftestcode.is_set || is_set(iftestcode.yfilter)) leaf_name_data.push_back(iftestcode.get_name_leafdata());
    if (iftestowner.is_set || is_set(iftestowner.yfilter)) leaf_name_data.push_back(iftestowner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IFMIB::IfTable::IfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IFMIB::IfTable::IfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IFMIB::IfTable::IfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifDescr")
    {
        ifdescr = value;
        ifdescr.value_namespace = name_space;
        ifdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifType")
    {
        iftype = value;
        iftype.value_namespace = name_space;
        iftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifMtu")
    {
        ifmtu = value;
        ifmtu.value_namespace = name_space;
        ifmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifSpeed")
    {
        ifspeed = value;
        ifspeed.value_namespace = name_space;
        ifspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifPhysAddress")
    {
        ifphysaddress = value;
        ifphysaddress.value_namespace = name_space;
        ifphysaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifAdminStatus")
    {
        ifadminstatus = value;
        ifadminstatus.value_namespace = name_space;
        ifadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOperStatus")
    {
        ifoperstatus = value;
        ifoperstatus.value_namespace = name_space;
        ifoperstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifLastChange")
    {
        iflastchange = value;
        iflastchange.value_namespace = name_space;
        iflastchange.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ifInNUcastPkts")
    {
        ifinnucastpkts = value;
        ifinnucastpkts.value_namespace = name_space;
        ifinnucastpkts.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ifInUnknownProtos")
    {
        ifinunknownprotos = value;
        ifinunknownprotos.value_namespace = name_space;
        ifinunknownprotos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutOctets")
    {
        ifoutoctets = value;
        ifoutoctets.value_namespace = name_space;
        ifoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutUcastPkts")
    {
        ifoutucastpkts = value;
        ifoutucastpkts.value_namespace = name_space;
        ifoutucastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutNUcastPkts")
    {
        ifoutnucastpkts = value;
        ifoutnucastpkts.value_namespace = name_space;
        ifoutnucastpkts.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ifOutQLen")
    {
        ifoutqlen = value;
        ifoutqlen.value_namespace = name_space;
        ifoutqlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifSpecific")
    {
        ifspecific = value;
        ifspecific.value_namespace = name_space;
        ifspecific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifName")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifInMulticastPkts")
    {
        ifinmulticastpkts = value;
        ifinmulticastpkts.value_namespace = name_space;
        ifinmulticastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifInBroadcastPkts")
    {
        ifinbroadcastpkts = value;
        ifinbroadcastpkts.value_namespace = name_space;
        ifinbroadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutMulticastPkts")
    {
        ifoutmulticastpkts = value;
        ifoutmulticastpkts.value_namespace = name_space;
        ifoutmulticastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifOutBroadcastPkts")
    {
        ifoutbroadcastpkts = value;
        ifoutbroadcastpkts.value_namespace = name_space;
        ifoutbroadcastpkts.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ifHCInMulticastPkts")
    {
        ifhcinmulticastpkts = value;
        ifhcinmulticastpkts.value_namespace = name_space;
        ifhcinmulticastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifHCInBroadcastPkts")
    {
        ifhcinbroadcastpkts = value;
        ifhcinbroadcastpkts.value_namespace = name_space;
        ifhcinbroadcastpkts.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ifHCOutMulticastPkts")
    {
        ifhcoutmulticastpkts = value;
        ifhcoutmulticastpkts.value_namespace = name_space;
        ifhcoutmulticastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifHCOutBroadcastPkts")
    {
        ifhcoutbroadcastpkts = value;
        ifhcoutbroadcastpkts.value_namespace = name_space;
        ifhcoutbroadcastpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifLinkUpDownTrapEnable")
    {
        iflinkupdowntrapenable = value;
        iflinkupdowntrapenable.value_namespace = name_space;
        iflinkupdowntrapenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifHighSpeed")
    {
        ifhighspeed = value;
        ifhighspeed.value_namespace = name_space;
        ifhighspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifPromiscuousMode")
    {
        ifpromiscuousmode = value;
        ifpromiscuousmode.value_namespace = name_space;
        ifpromiscuousmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifConnectorPresent")
    {
        ifconnectorpresent = value;
        ifconnectorpresent.value_namespace = name_space;
        ifconnectorpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifAlias")
    {
        ifalias = value;
        ifalias.value_namespace = name_space;
        ifalias.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifCounterDiscontinuityTime")
    {
        ifcounterdiscontinuitytime = value;
        ifcounterdiscontinuitytime.value_namespace = name_space;
        ifcounterdiscontinuitytime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifTestId")
    {
        iftestid = value;
        iftestid.value_namespace = name_space;
        iftestid.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ifTestResult")
    {
        iftestresult = value;
        iftestresult.value_namespace = name_space;
        iftestresult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifTestCode")
    {
        iftestcode = value;
        iftestcode.value_namespace = name_space;
        iftestcode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifTestOwner")
    {
        iftestowner = value;
        iftestowner.value_namespace = name_space;
        iftestowner.value_namespace_prefix = name_space_prefix;
    }
}

void IFMIB::IfTable::IfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "ifDescr")
    {
        ifdescr.yfilter = yfilter;
    }
    if(value_path == "ifType")
    {
        iftype.yfilter = yfilter;
    }
    if(value_path == "ifMtu")
    {
        ifmtu.yfilter = yfilter;
    }
    if(value_path == "ifSpeed")
    {
        ifspeed.yfilter = yfilter;
    }
    if(value_path == "ifPhysAddress")
    {
        ifphysaddress.yfilter = yfilter;
    }
    if(value_path == "ifAdminStatus")
    {
        ifadminstatus.yfilter = yfilter;
    }
    if(value_path == "ifOperStatus")
    {
        ifoperstatus.yfilter = yfilter;
    }
    if(value_path == "ifLastChange")
    {
        iflastchange.yfilter = yfilter;
    }
    if(value_path == "ifInOctets")
    {
        ifinoctets.yfilter = yfilter;
    }
    if(value_path == "ifInUcastPkts")
    {
        ifinucastpkts.yfilter = yfilter;
    }
    if(value_path == "ifInNUcastPkts")
    {
        ifinnucastpkts.yfilter = yfilter;
    }
    if(value_path == "ifInDiscards")
    {
        ifindiscards.yfilter = yfilter;
    }
    if(value_path == "ifInErrors")
    {
        ifinerrors.yfilter = yfilter;
    }
    if(value_path == "ifInUnknownProtos")
    {
        ifinunknownprotos.yfilter = yfilter;
    }
    if(value_path == "ifOutOctets")
    {
        ifoutoctets.yfilter = yfilter;
    }
    if(value_path == "ifOutUcastPkts")
    {
        ifoutucastpkts.yfilter = yfilter;
    }
    if(value_path == "ifOutNUcastPkts")
    {
        ifoutnucastpkts.yfilter = yfilter;
    }
    if(value_path == "ifOutDiscards")
    {
        ifoutdiscards.yfilter = yfilter;
    }
    if(value_path == "ifOutErrors")
    {
        ifouterrors.yfilter = yfilter;
    }
    if(value_path == "ifOutQLen")
    {
        ifoutqlen.yfilter = yfilter;
    }
    if(value_path == "ifSpecific")
    {
        ifspecific.yfilter = yfilter;
    }
    if(value_path == "ifName")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "ifInMulticastPkts")
    {
        ifinmulticastpkts.yfilter = yfilter;
    }
    if(value_path == "ifInBroadcastPkts")
    {
        ifinbroadcastpkts.yfilter = yfilter;
    }
    if(value_path == "ifOutMulticastPkts")
    {
        ifoutmulticastpkts.yfilter = yfilter;
    }
    if(value_path == "ifOutBroadcastPkts")
    {
        ifoutbroadcastpkts.yfilter = yfilter;
    }
    if(value_path == "ifHCInOctets")
    {
        ifhcinoctets.yfilter = yfilter;
    }
    if(value_path == "ifHCInUcastPkts")
    {
        ifhcinucastpkts.yfilter = yfilter;
    }
    if(value_path == "ifHCInMulticastPkts")
    {
        ifhcinmulticastpkts.yfilter = yfilter;
    }
    if(value_path == "ifHCInBroadcastPkts")
    {
        ifhcinbroadcastpkts.yfilter = yfilter;
    }
    if(value_path == "ifHCOutOctets")
    {
        ifhcoutoctets.yfilter = yfilter;
    }
    if(value_path == "ifHCOutUcastPkts")
    {
        ifhcoutucastpkts.yfilter = yfilter;
    }
    if(value_path == "ifHCOutMulticastPkts")
    {
        ifhcoutmulticastpkts.yfilter = yfilter;
    }
    if(value_path == "ifHCOutBroadcastPkts")
    {
        ifhcoutbroadcastpkts.yfilter = yfilter;
    }
    if(value_path == "ifLinkUpDownTrapEnable")
    {
        iflinkupdowntrapenable.yfilter = yfilter;
    }
    if(value_path == "ifHighSpeed")
    {
        ifhighspeed.yfilter = yfilter;
    }
    if(value_path == "ifPromiscuousMode")
    {
        ifpromiscuousmode.yfilter = yfilter;
    }
    if(value_path == "ifConnectorPresent")
    {
        ifconnectorpresent.yfilter = yfilter;
    }
    if(value_path == "ifAlias")
    {
        ifalias.yfilter = yfilter;
    }
    if(value_path == "ifCounterDiscontinuityTime")
    {
        ifcounterdiscontinuitytime.yfilter = yfilter;
    }
    if(value_path == "ifTestId")
    {
        iftestid.yfilter = yfilter;
    }
    if(value_path == "ifTestStatus")
    {
        ifteststatus.yfilter = yfilter;
    }
    if(value_path == "ifTestType")
    {
        iftesttype.yfilter = yfilter;
    }
    if(value_path == "ifTestResult")
    {
        iftestresult.yfilter = yfilter;
    }
    if(value_path == "ifTestCode")
    {
        iftestcode.yfilter = yfilter;
    }
    if(value_path == "ifTestOwner")
    {
        iftestowner.yfilter = yfilter;
    }
}

bool IFMIB::IfTable::IfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "ifDescr" || name == "ifType" || name == "ifMtu" || name == "ifSpeed" || name == "ifPhysAddress" || name == "ifAdminStatus" || name == "ifOperStatus" || name == "ifLastChange" || name == "ifInOctets" || name == "ifInUcastPkts" || name == "ifInNUcastPkts" || name == "ifInDiscards" || name == "ifInErrors" || name == "ifInUnknownProtos" || name == "ifOutOctets" || name == "ifOutUcastPkts" || name == "ifOutNUcastPkts" || name == "ifOutDiscards" || name == "ifOutErrors" || name == "ifOutQLen" || name == "ifSpecific" || name == "ifName" || name == "ifInMulticastPkts" || name == "ifInBroadcastPkts" || name == "ifOutMulticastPkts" || name == "ifOutBroadcastPkts" || name == "ifHCInOctets" || name == "ifHCInUcastPkts" || name == "ifHCInMulticastPkts" || name == "ifHCInBroadcastPkts" || name == "ifHCOutOctets" || name == "ifHCOutUcastPkts" || name == "ifHCOutMulticastPkts" || name == "ifHCOutBroadcastPkts" || name == "ifLinkUpDownTrapEnable" || name == "ifHighSpeed" || name == "ifPromiscuousMode" || name == "ifConnectorPresent" || name == "ifAlias" || name == "ifCounterDiscontinuityTime" || name == "ifTestId" || name == "ifTestStatus" || name == "ifTestType" || name == "ifTestResult" || name == "ifTestCode" || name == "ifTestOwner")
        return true;
    return false;
}

IFMIB::IfStackTable::IfStackTable()
    :
    ifstackentry(this, {"ifstackhigherlayer", "ifstacklowerlayer"})
{

    yang_name = "ifStackTable"; yang_parent_name = "IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

IFMIB::IfStackTable::~IfStackTable()
{
}

bool IFMIB::IfStackTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifstackentry.len(); index++)
    {
        if(ifstackentry[index]->has_data())
            return true;
    }
    return false;
}

bool IFMIB::IfStackTable::has_operation() const
{
    for (std::size_t index=0; index<ifstackentry.len(); index++)
    {
        if(ifstackentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IFMIB::IfStackTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IF-MIB:IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IFMIB::IfStackTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifStackTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IFMIB::IfStackTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IFMIB::IfStackTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifStackEntry")
    {
        auto ent_ = std::make_shared<IFMIB::IfStackTable::IfStackEntry>();
        ent_->parent = this;
        ifstackentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IFMIB::IfStackTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ifstackentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IFMIB::IfStackTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IFMIB::IfStackTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IFMIB::IfStackTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifStackEntry")
        return true;
    return false;
}

IFMIB::IfStackTable::IfStackEntry::IfStackEntry()
    :
    ifstackhigherlayer{YType::int32, "ifStackHigherLayer"},
    ifstacklowerlayer{YType::int32, "ifStackLowerLayer"},
    ifstackstatus{YType::enumeration, "ifStackStatus"}
{

    yang_name = "ifStackEntry"; yang_parent_name = "ifStackTable"; is_top_level_class = false; has_list_ancestor = false; 
}

IFMIB::IfStackTable::IfStackEntry::~IfStackEntry()
{
}

bool IFMIB::IfStackTable::IfStackEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifstackhigherlayer.is_set
	|| ifstacklowerlayer.is_set
	|| ifstackstatus.is_set;
}

bool IFMIB::IfStackTable::IfStackEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifstackhigherlayer.yfilter)
	|| ydk::is_set(ifstacklowerlayer.yfilter)
	|| ydk::is_set(ifstackstatus.yfilter);
}

std::string IFMIB::IfStackTable::IfStackEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IF-MIB:IF-MIB/ifStackTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IFMIB::IfStackTable::IfStackEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifStackEntry";
    ADD_KEY_TOKEN(ifstackhigherlayer, "ifStackHigherLayer");
    ADD_KEY_TOKEN(ifstacklowerlayer, "ifStackLowerLayer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IFMIB::IfStackTable::IfStackEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifstackhigherlayer.is_set || is_set(ifstackhigherlayer.yfilter)) leaf_name_data.push_back(ifstackhigherlayer.get_name_leafdata());
    if (ifstacklowerlayer.is_set || is_set(ifstacklowerlayer.yfilter)) leaf_name_data.push_back(ifstacklowerlayer.get_name_leafdata());
    if (ifstackstatus.is_set || is_set(ifstackstatus.yfilter)) leaf_name_data.push_back(ifstackstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IFMIB::IfStackTable::IfStackEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IFMIB::IfStackTable::IfStackEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IFMIB::IfStackTable::IfStackEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void IFMIB::IfStackTable::IfStackEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool IFMIB::IfStackTable::IfStackEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifStackHigherLayer" || name == "ifStackLowerLayer" || name == "ifStackStatus")
        return true;
    return false;
}

IFMIB::IfRcvAddressTable::IfRcvAddressTable()
    :
    ifrcvaddressentry(this, {"ifindex", "ifrcvaddressaddress"})
{

    yang_name = "ifRcvAddressTable"; yang_parent_name = "IF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

IFMIB::IfRcvAddressTable::~IfRcvAddressTable()
{
}

bool IFMIB::IfRcvAddressTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifrcvaddressentry.len(); index++)
    {
        if(ifrcvaddressentry[index]->has_data())
            return true;
    }
    return false;
}

bool IFMIB::IfRcvAddressTable::has_operation() const
{
    for (std::size_t index=0; index<ifrcvaddressentry.len(); index++)
    {
        if(ifrcvaddressentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IFMIB::IfRcvAddressTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IF-MIB:IF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IFMIB::IfRcvAddressTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifRcvAddressTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IFMIB::IfRcvAddressTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IFMIB::IfRcvAddressTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifRcvAddressEntry")
    {
        auto ent_ = std::make_shared<IFMIB::IfRcvAddressTable::IfRcvAddressEntry>();
        ent_->parent = this;
        ifrcvaddressentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IFMIB::IfRcvAddressTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ifrcvaddressentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IFMIB::IfRcvAddressTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IFMIB::IfRcvAddressTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IFMIB::IfRcvAddressTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifRcvAddressEntry")
        return true;
    return false;
}

IFMIB::IfRcvAddressTable::IfRcvAddressEntry::IfRcvAddressEntry()
    :
    ifindex{YType::str, "ifIndex"},
    ifrcvaddressaddress{YType::str, "ifRcvAddressAddress"},
    ifrcvaddressstatus{YType::enumeration, "ifRcvAddressStatus"},
    ifrcvaddresstype{YType::enumeration, "ifRcvAddressType"}
{

    yang_name = "ifRcvAddressEntry"; yang_parent_name = "ifRcvAddressTable"; is_top_level_class = false; has_list_ancestor = false; 
}

IFMIB::IfRcvAddressTable::IfRcvAddressEntry::~IfRcvAddressEntry()
{
}

bool IFMIB::IfRcvAddressTable::IfRcvAddressEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| ifrcvaddressaddress.is_set
	|| ifrcvaddressstatus.is_set
	|| ifrcvaddresstype.is_set;
}

bool IFMIB::IfRcvAddressTable::IfRcvAddressEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(ifrcvaddressaddress.yfilter)
	|| ydk::is_set(ifrcvaddressstatus.yfilter)
	|| ydk::is_set(ifrcvaddresstype.yfilter);
}

std::string IFMIB::IfRcvAddressTable::IfRcvAddressEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IF-MIB:IF-MIB/ifRcvAddressTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IFMIB::IfRcvAddressTable::IfRcvAddressEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifRcvAddressEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(ifrcvaddressaddress, "ifRcvAddressAddress");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IFMIB::IfRcvAddressTable::IfRcvAddressEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (ifrcvaddressaddress.is_set || is_set(ifrcvaddressaddress.yfilter)) leaf_name_data.push_back(ifrcvaddressaddress.get_name_leafdata());
    if (ifrcvaddressstatus.is_set || is_set(ifrcvaddressstatus.yfilter)) leaf_name_data.push_back(ifrcvaddressstatus.get_name_leafdata());
    if (ifrcvaddresstype.is_set || is_set(ifrcvaddresstype.yfilter)) leaf_name_data.push_back(ifrcvaddresstype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IFMIB::IfRcvAddressTable::IfRcvAddressEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IFMIB::IfRcvAddressTable::IfRcvAddressEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IFMIB::IfRcvAddressTable::IfRcvAddressEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void IFMIB::IfRcvAddressTable::IfRcvAddressEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool IFMIB::IfRcvAddressTable::IfRcvAddressEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "ifRcvAddressAddress" || name == "ifRcvAddressStatus" || name == "ifRcvAddressType")
        return true;
    return false;
}

const Enum::YLeaf IFMIB::IfTable::IfEntry::IfAdminStatus::up {1, "up"};
const Enum::YLeaf IFMIB::IfTable::IfEntry::IfAdminStatus::down {2, "down"};
const Enum::YLeaf IFMIB::IfTable::IfEntry::IfAdminStatus::testing {3, "testing"};

const Enum::YLeaf IFMIB::IfTable::IfEntry::IfOperStatus::up {1, "up"};
const Enum::YLeaf IFMIB::IfTable::IfEntry::IfOperStatus::down {2, "down"};
const Enum::YLeaf IFMIB::IfTable::IfEntry::IfOperStatus::testing {3, "testing"};
const Enum::YLeaf IFMIB::IfTable::IfEntry::IfOperStatus::unknown {4, "unknown"};
const Enum::YLeaf IFMIB::IfTable::IfEntry::IfOperStatus::dormant {5, "dormant"};
const Enum::YLeaf IFMIB::IfTable::IfEntry::IfOperStatus::notPresent {6, "notPresent"};
const Enum::YLeaf IFMIB::IfTable::IfEntry::IfOperStatus::lowerLayerDown {7, "lowerLayerDown"};

const Enum::YLeaf IFMIB::IfTable::IfEntry::IfLinkUpDownTrapEnable::enabled {1, "enabled"};
const Enum::YLeaf IFMIB::IfTable::IfEntry::IfLinkUpDownTrapEnable::disabled {2, "disabled"};

const Enum::YLeaf IFMIB::IfTable::IfEntry::IfTestStatus::notInUse {1, "notInUse"};
const Enum::YLeaf IFMIB::IfTable::IfEntry::IfTestStatus::inUse {2, "inUse"};

const Enum::YLeaf IFMIB::IfTable::IfEntry::IfTestResult::none {1, "none"};
const Enum::YLeaf IFMIB::IfTable::IfEntry::IfTestResult::success {2, "success"};
const Enum::YLeaf IFMIB::IfTable::IfEntry::IfTestResult::inProgress {3, "inProgress"};
const Enum::YLeaf IFMIB::IfTable::IfEntry::IfTestResult::notSupported {4, "notSupported"};
const Enum::YLeaf IFMIB::IfTable::IfEntry::IfTestResult::unAbleToRun {5, "unAbleToRun"};
const Enum::YLeaf IFMIB::IfTable::IfEntry::IfTestResult::aborted {6, "aborted"};
const Enum::YLeaf IFMIB::IfTable::IfEntry::IfTestResult::failed {7, "failed"};

const Enum::YLeaf IFMIB::IfRcvAddressTable::IfRcvAddressEntry::IfRcvAddressType::other {1, "other"};
const Enum::YLeaf IFMIB::IfRcvAddressTable::IfRcvAddressEntry::IfRcvAddressType::volatile_ {2, "volatile"};
const Enum::YLeaf IFMIB::IfRcvAddressTable::IfRcvAddressEntry::IfRcvAddressType::nonVolatile {3, "nonVolatile"};


}
}

