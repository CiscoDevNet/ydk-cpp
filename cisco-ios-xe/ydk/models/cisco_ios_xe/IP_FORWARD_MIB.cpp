
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IP_FORWARD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace IP_FORWARD_MIB {

IPFORWARDMIB::IPFORWARDMIB()
    :
    ipforward(std::make_shared<IPFORWARDMIB::IpForward>())
    , ipforwardtable(std::make_shared<IPFORWARDMIB::IpForwardTable>())
    , ipcidrroutetable(std::make_shared<IPFORWARDMIB::IpCidrRouteTable>())
{
    ipforward->parent = this;
    ipforwardtable->parent = this;
    ipcidrroutetable->parent = this;

    yang_name = "IP-FORWARD-MIB"; yang_parent_name = "IP-FORWARD-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

IPFORWARDMIB::~IPFORWARDMIB()
{
}

bool IPFORWARDMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ipforward !=  nullptr && ipforward->has_data())
	|| (ipforwardtable !=  nullptr && ipforwardtable->has_data())
	|| (ipcidrroutetable !=  nullptr && ipcidrroutetable->has_data());
}

bool IPFORWARDMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ipforward !=  nullptr && ipforward->has_operation())
	|| (ipforwardtable !=  nullptr && ipforwardtable->has_operation())
	|| (ipcidrroutetable !=  nullptr && ipcidrroutetable->has_operation());
}

std::string IPFORWARDMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-FORWARD-MIB:IP-FORWARD-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPFORWARDMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IPFORWARDMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipForward")
    {
        if(ipforward == nullptr)
        {
            ipforward = std::make_shared<IPFORWARDMIB::IpForward>();
        }
        return ipforward;
    }

    if(child_yang_name == "ipForwardTable")
    {
        if(ipforwardtable == nullptr)
        {
            ipforwardtable = std::make_shared<IPFORWARDMIB::IpForwardTable>();
        }
        return ipforwardtable;
    }

    if(child_yang_name == "ipCidrRouteTable")
    {
        if(ipcidrroutetable == nullptr)
        {
            ipcidrroutetable = std::make_shared<IPFORWARDMIB::IpCidrRouteTable>();
        }
        return ipcidrroutetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IPFORWARDMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipforward != nullptr)
    {
        _children["ipForward"] = ipforward;
    }

    if(ipforwardtable != nullptr)
    {
        _children["ipForwardTable"] = ipforwardtable;
    }

    if(ipcidrroutetable != nullptr)
    {
        _children["ipCidrRouteTable"] = ipcidrroutetable;
    }

    return _children;
}

void IPFORWARDMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPFORWARDMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> IPFORWARDMIB::clone_ptr() const
{
    return std::make_shared<IPFORWARDMIB>();
}

std::string IPFORWARDMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string IPFORWARDMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function IPFORWARDMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IPFORWARDMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool IPFORWARDMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipForward" || name == "ipForwardTable" || name == "ipCidrRouteTable")
        return true;
    return false;
}

IPFORWARDMIB::IpForward::IpForward()
    :
    ipforwardnumber{YType::uint32, "ipForwardNumber"},
    ipcidrroutenumber{YType::uint32, "ipCidrRouteNumber"}
{

    yang_name = "ipForward"; yang_parent_name = "IP-FORWARD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

IPFORWARDMIB::IpForward::~IpForward()
{
}

bool IPFORWARDMIB::IpForward::has_data() const
{
    if (is_presence_container) return true;
    return ipforwardnumber.is_set
	|| ipcidrroutenumber.is_set;
}

bool IPFORWARDMIB::IpForward::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipforwardnumber.yfilter)
	|| ydk::is_set(ipcidrroutenumber.yfilter);
}

std::string IPFORWARDMIB::IpForward::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-FORWARD-MIB:IP-FORWARD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPFORWARDMIB::IpForward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipForward";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPFORWARDMIB::IpForward::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipforwardnumber.is_set || is_set(ipforwardnumber.yfilter)) leaf_name_data.push_back(ipforwardnumber.get_name_leafdata());
    if (ipcidrroutenumber.is_set || is_set(ipcidrroutenumber.yfilter)) leaf_name_data.push_back(ipcidrroutenumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IPFORWARDMIB::IpForward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IPFORWARDMIB::IpForward::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IPFORWARDMIB::IpForward::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipForwardNumber")
    {
        ipforwardnumber = value;
        ipforwardnumber.value_namespace = name_space;
        ipforwardnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipCidrRouteNumber")
    {
        ipcidrroutenumber = value;
        ipcidrroutenumber.value_namespace = name_space;
        ipcidrroutenumber.value_namespace_prefix = name_space_prefix;
    }
}

void IPFORWARDMIB::IpForward::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipForwardNumber")
    {
        ipforwardnumber.yfilter = yfilter;
    }
    if(value_path == "ipCidrRouteNumber")
    {
        ipcidrroutenumber.yfilter = yfilter;
    }
}

bool IPFORWARDMIB::IpForward::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipForwardNumber" || name == "ipCidrRouteNumber")
        return true;
    return false;
}

IPFORWARDMIB::IpForwardTable::IpForwardTable()
    :
    ipforwardentry(this, {"ipforwarddest", "ipforwardproto", "ipforwardpolicy", "ipforwardnexthop"})
{

    yang_name = "ipForwardTable"; yang_parent_name = "IP-FORWARD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

IPFORWARDMIB::IpForwardTable::~IpForwardTable()
{
}

bool IPFORWARDMIB::IpForwardTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipforwardentry.len(); index++)
    {
        if(ipforwardentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPFORWARDMIB::IpForwardTable::has_operation() const
{
    for (std::size_t index=0; index<ipforwardentry.len(); index++)
    {
        if(ipforwardentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPFORWARDMIB::IpForwardTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-FORWARD-MIB:IP-FORWARD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPFORWARDMIB::IpForwardTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipForwardTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPFORWARDMIB::IpForwardTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IPFORWARDMIB::IpForwardTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipForwardEntry")
    {
        auto ent_ = std::make_shared<IPFORWARDMIB::IpForwardTable::IpForwardEntry>();
        ent_->parent = this;
        ipforwardentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IPFORWARDMIB::IpForwardTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipforwardentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IPFORWARDMIB::IpForwardTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPFORWARDMIB::IpForwardTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPFORWARDMIB::IpForwardTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipForwardEntry")
        return true;
    return false;
}

IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardEntry()
    :
    ipforwarddest{YType::str, "ipForwardDest"},
    ipforwardproto{YType::enumeration, "ipForwardProto"},
    ipforwardpolicy{YType::int32, "ipForwardPolicy"},
    ipforwardnexthop{YType::str, "ipForwardNextHop"},
    ipforwardmask{YType::str, "ipForwardMask"},
    ipforwardifindex{YType::int32, "ipForwardIfIndex"},
    ipforwardtype{YType::enumeration, "ipForwardType"},
    ipforwardage{YType::int32, "ipForwardAge"},
    ipforwardinfo{YType::str, "ipForwardInfo"},
    ipforwardnexthopas{YType::int32, "ipForwardNextHopAS"},
    ipforwardmetric1{YType::int32, "ipForwardMetric1"},
    ipforwardmetric2{YType::int32, "ipForwardMetric2"},
    ipforwardmetric3{YType::int32, "ipForwardMetric3"},
    ipforwardmetric4{YType::int32, "ipForwardMetric4"},
    ipforwardmetric5{YType::int32, "ipForwardMetric5"}
{

    yang_name = "ipForwardEntry"; yang_parent_name = "ipForwardTable"; is_top_level_class = false; has_list_ancestor = false; 
}

IPFORWARDMIB::IpForwardTable::IpForwardEntry::~IpForwardEntry()
{
}

bool IPFORWARDMIB::IpForwardTable::IpForwardEntry::has_data() const
{
    if (is_presence_container) return true;
    return ipforwarddest.is_set
	|| ipforwardproto.is_set
	|| ipforwardpolicy.is_set
	|| ipforwardnexthop.is_set
	|| ipforwardmask.is_set
	|| ipforwardifindex.is_set
	|| ipforwardtype.is_set
	|| ipforwardage.is_set
	|| ipforwardinfo.is_set
	|| ipforwardnexthopas.is_set
	|| ipforwardmetric1.is_set
	|| ipforwardmetric2.is_set
	|| ipforwardmetric3.is_set
	|| ipforwardmetric4.is_set
	|| ipforwardmetric5.is_set;
}

bool IPFORWARDMIB::IpForwardTable::IpForwardEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipforwarddest.yfilter)
	|| ydk::is_set(ipforwardproto.yfilter)
	|| ydk::is_set(ipforwardpolicy.yfilter)
	|| ydk::is_set(ipforwardnexthop.yfilter)
	|| ydk::is_set(ipforwardmask.yfilter)
	|| ydk::is_set(ipforwardifindex.yfilter)
	|| ydk::is_set(ipforwardtype.yfilter)
	|| ydk::is_set(ipforwardage.yfilter)
	|| ydk::is_set(ipforwardinfo.yfilter)
	|| ydk::is_set(ipforwardnexthopas.yfilter)
	|| ydk::is_set(ipforwardmetric1.yfilter)
	|| ydk::is_set(ipforwardmetric2.yfilter)
	|| ydk::is_set(ipforwardmetric3.yfilter)
	|| ydk::is_set(ipforwardmetric4.yfilter)
	|| ydk::is_set(ipforwardmetric5.yfilter);
}

std::string IPFORWARDMIB::IpForwardTable::IpForwardEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-FORWARD-MIB:IP-FORWARD-MIB/ipForwardTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPFORWARDMIB::IpForwardTable::IpForwardEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipForwardEntry";
    ADD_KEY_TOKEN(ipforwarddest, "ipForwardDest");
    ADD_KEY_TOKEN(ipforwardproto, "ipForwardProto");
    ADD_KEY_TOKEN(ipforwardpolicy, "ipForwardPolicy");
    ADD_KEY_TOKEN(ipforwardnexthop, "ipForwardNextHop");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPFORWARDMIB::IpForwardTable::IpForwardEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipforwarddest.is_set || is_set(ipforwarddest.yfilter)) leaf_name_data.push_back(ipforwarddest.get_name_leafdata());
    if (ipforwardproto.is_set || is_set(ipforwardproto.yfilter)) leaf_name_data.push_back(ipforwardproto.get_name_leafdata());
    if (ipforwardpolicy.is_set || is_set(ipforwardpolicy.yfilter)) leaf_name_data.push_back(ipforwardpolicy.get_name_leafdata());
    if (ipforwardnexthop.is_set || is_set(ipforwardnexthop.yfilter)) leaf_name_data.push_back(ipforwardnexthop.get_name_leafdata());
    if (ipforwardmask.is_set || is_set(ipforwardmask.yfilter)) leaf_name_data.push_back(ipforwardmask.get_name_leafdata());
    if (ipforwardifindex.is_set || is_set(ipforwardifindex.yfilter)) leaf_name_data.push_back(ipforwardifindex.get_name_leafdata());
    if (ipforwardtype.is_set || is_set(ipforwardtype.yfilter)) leaf_name_data.push_back(ipforwardtype.get_name_leafdata());
    if (ipforwardage.is_set || is_set(ipforwardage.yfilter)) leaf_name_data.push_back(ipforwardage.get_name_leafdata());
    if (ipforwardinfo.is_set || is_set(ipforwardinfo.yfilter)) leaf_name_data.push_back(ipforwardinfo.get_name_leafdata());
    if (ipforwardnexthopas.is_set || is_set(ipforwardnexthopas.yfilter)) leaf_name_data.push_back(ipforwardnexthopas.get_name_leafdata());
    if (ipforwardmetric1.is_set || is_set(ipforwardmetric1.yfilter)) leaf_name_data.push_back(ipforwardmetric1.get_name_leafdata());
    if (ipforwardmetric2.is_set || is_set(ipforwardmetric2.yfilter)) leaf_name_data.push_back(ipforwardmetric2.get_name_leafdata());
    if (ipforwardmetric3.is_set || is_set(ipforwardmetric3.yfilter)) leaf_name_data.push_back(ipforwardmetric3.get_name_leafdata());
    if (ipforwardmetric4.is_set || is_set(ipforwardmetric4.yfilter)) leaf_name_data.push_back(ipforwardmetric4.get_name_leafdata());
    if (ipforwardmetric5.is_set || is_set(ipforwardmetric5.yfilter)) leaf_name_data.push_back(ipforwardmetric5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IPFORWARDMIB::IpForwardTable::IpForwardEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IPFORWARDMIB::IpForwardTable::IpForwardEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IPFORWARDMIB::IpForwardTable::IpForwardEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipForwardDest")
    {
        ipforwarddest = value;
        ipforwarddest.value_namespace = name_space;
        ipforwarddest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipForwardProto")
    {
        ipforwardproto = value;
        ipforwardproto.value_namespace = name_space;
        ipforwardproto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipForwardPolicy")
    {
        ipforwardpolicy = value;
        ipforwardpolicy.value_namespace = name_space;
        ipforwardpolicy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipForwardNextHop")
    {
        ipforwardnexthop = value;
        ipforwardnexthop.value_namespace = name_space;
        ipforwardnexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipForwardMask")
    {
        ipforwardmask = value;
        ipforwardmask.value_namespace = name_space;
        ipforwardmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipForwardIfIndex")
    {
        ipforwardifindex = value;
        ipforwardifindex.value_namespace = name_space;
        ipforwardifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipForwardType")
    {
        ipforwardtype = value;
        ipforwardtype.value_namespace = name_space;
        ipforwardtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipForwardAge")
    {
        ipforwardage = value;
        ipforwardage.value_namespace = name_space;
        ipforwardage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipForwardInfo")
    {
        ipforwardinfo = value;
        ipforwardinfo.value_namespace = name_space;
        ipforwardinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipForwardNextHopAS")
    {
        ipforwardnexthopas = value;
        ipforwardnexthopas.value_namespace = name_space;
        ipforwardnexthopas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipForwardMetric1")
    {
        ipforwardmetric1 = value;
        ipforwardmetric1.value_namespace = name_space;
        ipforwardmetric1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipForwardMetric2")
    {
        ipforwardmetric2 = value;
        ipforwardmetric2.value_namespace = name_space;
        ipforwardmetric2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipForwardMetric3")
    {
        ipforwardmetric3 = value;
        ipforwardmetric3.value_namespace = name_space;
        ipforwardmetric3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipForwardMetric4")
    {
        ipforwardmetric4 = value;
        ipforwardmetric4.value_namespace = name_space;
        ipforwardmetric4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipForwardMetric5")
    {
        ipforwardmetric5 = value;
        ipforwardmetric5.value_namespace = name_space;
        ipforwardmetric5.value_namespace_prefix = name_space_prefix;
    }
}

void IPFORWARDMIB::IpForwardTable::IpForwardEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipForwardDest")
    {
        ipforwarddest.yfilter = yfilter;
    }
    if(value_path == "ipForwardProto")
    {
        ipforwardproto.yfilter = yfilter;
    }
    if(value_path == "ipForwardPolicy")
    {
        ipforwardpolicy.yfilter = yfilter;
    }
    if(value_path == "ipForwardNextHop")
    {
        ipforwardnexthop.yfilter = yfilter;
    }
    if(value_path == "ipForwardMask")
    {
        ipforwardmask.yfilter = yfilter;
    }
    if(value_path == "ipForwardIfIndex")
    {
        ipforwardifindex.yfilter = yfilter;
    }
    if(value_path == "ipForwardType")
    {
        ipforwardtype.yfilter = yfilter;
    }
    if(value_path == "ipForwardAge")
    {
        ipforwardage.yfilter = yfilter;
    }
    if(value_path == "ipForwardInfo")
    {
        ipforwardinfo.yfilter = yfilter;
    }
    if(value_path == "ipForwardNextHopAS")
    {
        ipforwardnexthopas.yfilter = yfilter;
    }
    if(value_path == "ipForwardMetric1")
    {
        ipforwardmetric1.yfilter = yfilter;
    }
    if(value_path == "ipForwardMetric2")
    {
        ipforwardmetric2.yfilter = yfilter;
    }
    if(value_path == "ipForwardMetric3")
    {
        ipforwardmetric3.yfilter = yfilter;
    }
    if(value_path == "ipForwardMetric4")
    {
        ipforwardmetric4.yfilter = yfilter;
    }
    if(value_path == "ipForwardMetric5")
    {
        ipforwardmetric5.yfilter = yfilter;
    }
}

bool IPFORWARDMIB::IpForwardTable::IpForwardEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipForwardDest" || name == "ipForwardProto" || name == "ipForwardPolicy" || name == "ipForwardNextHop" || name == "ipForwardMask" || name == "ipForwardIfIndex" || name == "ipForwardType" || name == "ipForwardAge" || name == "ipForwardInfo" || name == "ipForwardNextHopAS" || name == "ipForwardMetric1" || name == "ipForwardMetric2" || name == "ipForwardMetric3" || name == "ipForwardMetric4" || name == "ipForwardMetric5")
        return true;
    return false;
}

IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteTable()
    :
    ipcidrrouteentry(this, {"ipcidrroutedest", "ipcidrroutemask", "ipcidrroutetos", "ipcidrroutenexthop"})
{

    yang_name = "ipCidrRouteTable"; yang_parent_name = "IP-FORWARD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

IPFORWARDMIB::IpCidrRouteTable::~IpCidrRouteTable()
{
}

bool IPFORWARDMIB::IpCidrRouteTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipcidrrouteentry.len(); index++)
    {
        if(ipcidrrouteentry[index]->has_data())
            return true;
    }
    return false;
}

bool IPFORWARDMIB::IpCidrRouteTable::has_operation() const
{
    for (std::size_t index=0; index<ipcidrrouteentry.len(); index++)
    {
        if(ipcidrrouteentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IPFORWARDMIB::IpCidrRouteTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-FORWARD-MIB:IP-FORWARD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string IPFORWARDMIB::IpCidrRouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipCidrRouteTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPFORWARDMIB::IpCidrRouteTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IPFORWARDMIB::IpCidrRouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipCidrRouteEntry")
    {
        auto ent_ = std::make_shared<IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry>();
        ent_->parent = this;
        ipcidrrouteentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IPFORWARDMIB::IpCidrRouteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipcidrrouteentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IPFORWARDMIB::IpCidrRouteTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IPFORWARDMIB::IpCidrRouteTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IPFORWARDMIB::IpCidrRouteTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipCidrRouteEntry")
        return true;
    return false;
}

IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteEntry()
    :
    ipcidrroutedest{YType::str, "ipCidrRouteDest"},
    ipcidrroutemask{YType::str, "ipCidrRouteMask"},
    ipcidrroutetos{YType::int32, "ipCidrRouteTos"},
    ipcidrroutenexthop{YType::str, "ipCidrRouteNextHop"},
    ipcidrrouteifindex{YType::int32, "ipCidrRouteIfIndex"},
    ipcidrroutetype{YType::enumeration, "ipCidrRouteType"},
    ipcidrrouteproto{YType::enumeration, "ipCidrRouteProto"},
    ipcidrrouteage{YType::int32, "ipCidrRouteAge"},
    ipcidrrouteinfo{YType::str, "ipCidrRouteInfo"},
    ipcidrroutenexthopas{YType::int32, "ipCidrRouteNextHopAS"},
    ipcidrroutemetric1{YType::int32, "ipCidrRouteMetric1"},
    ipcidrroutemetric2{YType::int32, "ipCidrRouteMetric2"},
    ipcidrroutemetric3{YType::int32, "ipCidrRouteMetric3"},
    ipcidrroutemetric4{YType::int32, "ipCidrRouteMetric4"},
    ipcidrroutemetric5{YType::int32, "ipCidrRouteMetric5"},
    ipcidrroutestatus{YType::enumeration, "ipCidrRouteStatus"}
{

    yang_name = "ipCidrRouteEntry"; yang_parent_name = "ipCidrRouteTable"; is_top_level_class = false; has_list_ancestor = false; 
}

IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::~IpCidrRouteEntry()
{
}

bool IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::has_data() const
{
    if (is_presence_container) return true;
    return ipcidrroutedest.is_set
	|| ipcidrroutemask.is_set
	|| ipcidrroutetos.is_set
	|| ipcidrroutenexthop.is_set
	|| ipcidrrouteifindex.is_set
	|| ipcidrroutetype.is_set
	|| ipcidrrouteproto.is_set
	|| ipcidrrouteage.is_set
	|| ipcidrrouteinfo.is_set
	|| ipcidrroutenexthopas.is_set
	|| ipcidrroutemetric1.is_set
	|| ipcidrroutemetric2.is_set
	|| ipcidrroutemetric3.is_set
	|| ipcidrroutemetric4.is_set
	|| ipcidrroutemetric5.is_set
	|| ipcidrroutestatus.is_set;
}

bool IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipcidrroutedest.yfilter)
	|| ydk::is_set(ipcidrroutemask.yfilter)
	|| ydk::is_set(ipcidrroutetos.yfilter)
	|| ydk::is_set(ipcidrroutenexthop.yfilter)
	|| ydk::is_set(ipcidrrouteifindex.yfilter)
	|| ydk::is_set(ipcidrroutetype.yfilter)
	|| ydk::is_set(ipcidrrouteproto.yfilter)
	|| ydk::is_set(ipcidrrouteage.yfilter)
	|| ydk::is_set(ipcidrrouteinfo.yfilter)
	|| ydk::is_set(ipcidrroutenexthopas.yfilter)
	|| ydk::is_set(ipcidrroutemetric1.yfilter)
	|| ydk::is_set(ipcidrroutemetric2.yfilter)
	|| ydk::is_set(ipcidrroutemetric3.yfilter)
	|| ydk::is_set(ipcidrroutemetric4.yfilter)
	|| ydk::is_set(ipcidrroutemetric5.yfilter)
	|| ydk::is_set(ipcidrroutestatus.yfilter);
}

std::string IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "IP-FORWARD-MIB:IP-FORWARD-MIB/ipCidrRouteTable/" << get_segment_path();
    return path_buffer.str();
}

std::string IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipCidrRouteEntry";
    ADD_KEY_TOKEN(ipcidrroutedest, "ipCidrRouteDest");
    ADD_KEY_TOKEN(ipcidrroutemask, "ipCidrRouteMask");
    ADD_KEY_TOKEN(ipcidrroutetos, "ipCidrRouteTos");
    ADD_KEY_TOKEN(ipcidrroutenexthop, "ipCidrRouteNextHop");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipcidrroutedest.is_set || is_set(ipcidrroutedest.yfilter)) leaf_name_data.push_back(ipcidrroutedest.get_name_leafdata());
    if (ipcidrroutemask.is_set || is_set(ipcidrroutemask.yfilter)) leaf_name_data.push_back(ipcidrroutemask.get_name_leafdata());
    if (ipcidrroutetos.is_set || is_set(ipcidrroutetos.yfilter)) leaf_name_data.push_back(ipcidrroutetos.get_name_leafdata());
    if (ipcidrroutenexthop.is_set || is_set(ipcidrroutenexthop.yfilter)) leaf_name_data.push_back(ipcidrroutenexthop.get_name_leafdata());
    if (ipcidrrouteifindex.is_set || is_set(ipcidrrouteifindex.yfilter)) leaf_name_data.push_back(ipcidrrouteifindex.get_name_leafdata());
    if (ipcidrroutetype.is_set || is_set(ipcidrroutetype.yfilter)) leaf_name_data.push_back(ipcidrroutetype.get_name_leafdata());
    if (ipcidrrouteproto.is_set || is_set(ipcidrrouteproto.yfilter)) leaf_name_data.push_back(ipcidrrouteproto.get_name_leafdata());
    if (ipcidrrouteage.is_set || is_set(ipcidrrouteage.yfilter)) leaf_name_data.push_back(ipcidrrouteage.get_name_leafdata());
    if (ipcidrrouteinfo.is_set || is_set(ipcidrrouteinfo.yfilter)) leaf_name_data.push_back(ipcidrrouteinfo.get_name_leafdata());
    if (ipcidrroutenexthopas.is_set || is_set(ipcidrroutenexthopas.yfilter)) leaf_name_data.push_back(ipcidrroutenexthopas.get_name_leafdata());
    if (ipcidrroutemetric1.is_set || is_set(ipcidrroutemetric1.yfilter)) leaf_name_data.push_back(ipcidrroutemetric1.get_name_leafdata());
    if (ipcidrroutemetric2.is_set || is_set(ipcidrroutemetric2.yfilter)) leaf_name_data.push_back(ipcidrroutemetric2.get_name_leafdata());
    if (ipcidrroutemetric3.is_set || is_set(ipcidrroutemetric3.yfilter)) leaf_name_data.push_back(ipcidrroutemetric3.get_name_leafdata());
    if (ipcidrroutemetric4.is_set || is_set(ipcidrroutemetric4.yfilter)) leaf_name_data.push_back(ipcidrroutemetric4.get_name_leafdata());
    if (ipcidrroutemetric5.is_set || is_set(ipcidrroutemetric5.yfilter)) leaf_name_data.push_back(ipcidrroutemetric5.get_name_leafdata());
    if (ipcidrroutestatus.is_set || is_set(ipcidrroutestatus.yfilter)) leaf_name_data.push_back(ipcidrroutestatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipCidrRouteDest")
    {
        ipcidrroutedest = value;
        ipcidrroutedest.value_namespace = name_space;
        ipcidrroutedest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipCidrRouteMask")
    {
        ipcidrroutemask = value;
        ipcidrroutemask.value_namespace = name_space;
        ipcidrroutemask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipCidrRouteTos")
    {
        ipcidrroutetos = value;
        ipcidrroutetos.value_namespace = name_space;
        ipcidrroutetos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipCidrRouteNextHop")
    {
        ipcidrroutenexthop = value;
        ipcidrroutenexthop.value_namespace = name_space;
        ipcidrroutenexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipCidrRouteIfIndex")
    {
        ipcidrrouteifindex = value;
        ipcidrrouteifindex.value_namespace = name_space;
        ipcidrrouteifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipCidrRouteType")
    {
        ipcidrroutetype = value;
        ipcidrroutetype.value_namespace = name_space;
        ipcidrroutetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipCidrRouteProto")
    {
        ipcidrrouteproto = value;
        ipcidrrouteproto.value_namespace = name_space;
        ipcidrrouteproto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipCidrRouteAge")
    {
        ipcidrrouteage = value;
        ipcidrrouteage.value_namespace = name_space;
        ipcidrrouteage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipCidrRouteInfo")
    {
        ipcidrrouteinfo = value;
        ipcidrrouteinfo.value_namespace = name_space;
        ipcidrrouteinfo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipCidrRouteNextHopAS")
    {
        ipcidrroutenexthopas = value;
        ipcidrroutenexthopas.value_namespace = name_space;
        ipcidrroutenexthopas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipCidrRouteMetric1")
    {
        ipcidrroutemetric1 = value;
        ipcidrroutemetric1.value_namespace = name_space;
        ipcidrroutemetric1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipCidrRouteMetric2")
    {
        ipcidrroutemetric2 = value;
        ipcidrroutemetric2.value_namespace = name_space;
        ipcidrroutemetric2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipCidrRouteMetric3")
    {
        ipcidrroutemetric3 = value;
        ipcidrroutemetric3.value_namespace = name_space;
        ipcidrroutemetric3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipCidrRouteMetric4")
    {
        ipcidrroutemetric4 = value;
        ipcidrroutemetric4.value_namespace = name_space;
        ipcidrroutemetric4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipCidrRouteMetric5")
    {
        ipcidrroutemetric5 = value;
        ipcidrroutemetric5.value_namespace = name_space;
        ipcidrroutemetric5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipCidrRouteStatus")
    {
        ipcidrroutestatus = value;
        ipcidrroutestatus.value_namespace = name_space;
        ipcidrroutestatus.value_namespace_prefix = name_space_prefix;
    }
}

void IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipCidrRouteDest")
    {
        ipcidrroutedest.yfilter = yfilter;
    }
    if(value_path == "ipCidrRouteMask")
    {
        ipcidrroutemask.yfilter = yfilter;
    }
    if(value_path == "ipCidrRouteTos")
    {
        ipcidrroutetos.yfilter = yfilter;
    }
    if(value_path == "ipCidrRouteNextHop")
    {
        ipcidrroutenexthop.yfilter = yfilter;
    }
    if(value_path == "ipCidrRouteIfIndex")
    {
        ipcidrrouteifindex.yfilter = yfilter;
    }
    if(value_path == "ipCidrRouteType")
    {
        ipcidrroutetype.yfilter = yfilter;
    }
    if(value_path == "ipCidrRouteProto")
    {
        ipcidrrouteproto.yfilter = yfilter;
    }
    if(value_path == "ipCidrRouteAge")
    {
        ipcidrrouteage.yfilter = yfilter;
    }
    if(value_path == "ipCidrRouteInfo")
    {
        ipcidrrouteinfo.yfilter = yfilter;
    }
    if(value_path == "ipCidrRouteNextHopAS")
    {
        ipcidrroutenexthopas.yfilter = yfilter;
    }
    if(value_path == "ipCidrRouteMetric1")
    {
        ipcidrroutemetric1.yfilter = yfilter;
    }
    if(value_path == "ipCidrRouteMetric2")
    {
        ipcidrroutemetric2.yfilter = yfilter;
    }
    if(value_path == "ipCidrRouteMetric3")
    {
        ipcidrroutemetric3.yfilter = yfilter;
    }
    if(value_path == "ipCidrRouteMetric4")
    {
        ipcidrroutemetric4.yfilter = yfilter;
    }
    if(value_path == "ipCidrRouteMetric5")
    {
        ipcidrroutemetric5.yfilter = yfilter;
    }
    if(value_path == "ipCidrRouteStatus")
    {
        ipcidrroutestatus.yfilter = yfilter;
    }
}

bool IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipCidrRouteDest" || name == "ipCidrRouteMask" || name == "ipCidrRouteTos" || name == "ipCidrRouteNextHop" || name == "ipCidrRouteIfIndex" || name == "ipCidrRouteType" || name == "ipCidrRouteProto" || name == "ipCidrRouteAge" || name == "ipCidrRouteInfo" || name == "ipCidrRouteNextHopAS" || name == "ipCidrRouteMetric1" || name == "ipCidrRouteMetric2" || name == "ipCidrRouteMetric3" || name == "ipCidrRouteMetric4" || name == "ipCidrRouteMetric5" || name == "ipCidrRouteStatus")
        return true;
    return false;
}

const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardProto::other {1, "other"};
const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardProto::local {2, "local"};
const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardProto::netmgmt {3, "netmgmt"};
const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardProto::icmp {4, "icmp"};
const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardProto::egp {5, "egp"};
const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardProto::ggp {6, "ggp"};
const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardProto::hello {7, "hello"};
const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardProto::rip {8, "rip"};
const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardProto::is_is {9, "is-is"};
const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardProto::es_is {10, "es-is"};
const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardProto::ciscoIgrp {11, "ciscoIgrp"};
const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardProto::bbnSpfIgp {12, "bbnSpfIgp"};
const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardProto::ospf {13, "ospf"};
const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardProto::bgp {14, "bgp"};
const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardProto::idpr {15, "idpr"};

const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardType::other {1, "other"};
const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardType::invalid {2, "invalid"};
const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardType::local {3, "local"};
const Enum::YLeaf IPFORWARDMIB::IpForwardTable::IpForwardEntry::IpForwardType::remote {4, "remote"};

const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteType::other {1, "other"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteType::reject {2, "reject"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteType::local {3, "local"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteType::remote {4, "remote"};

const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteProto::other {1, "other"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteProto::local {2, "local"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteProto::netmgmt {3, "netmgmt"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteProto::icmp {4, "icmp"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteProto::egp {5, "egp"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteProto::ggp {6, "ggp"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteProto::hello {7, "hello"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteProto::rip {8, "rip"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteProto::isIs {9, "isIs"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteProto::esIs {10, "esIs"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteProto::ciscoIgrp {11, "ciscoIgrp"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteProto::bbnSpfIgp {12, "bbnSpfIgp"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteProto::ospf {13, "ospf"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteProto::bgp {14, "bgp"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteProto::idpr {15, "idpr"};
const Enum::YLeaf IPFORWARDMIB::IpCidrRouteTable::IpCidrRouteEntry::IpCidrRouteProto::ciscoEigrp {16, "ciscoEigrp"};


}
}

