
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "UDP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace UDP_MIB {

UDPMIB::UDPMIB()
    :
    udp(std::make_shared<UDPMIB::Udp>())
    , udptable(std::make_shared<UDPMIB::UdpTable>())
    , udpendpointtable(std::make_shared<UDPMIB::UdpEndpointTable>())
{
    udp->parent = this;
    udptable->parent = this;
    udpendpointtable->parent = this;

    yang_name = "UDP-MIB"; yang_parent_name = "UDP-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

UDPMIB::~UDPMIB()
{
}

bool UDPMIB::has_data() const
{
    if (is_presence_container) return true;
    return (udp !=  nullptr && udp->has_data())
	|| (udptable !=  nullptr && udptable->has_data())
	|| (udpendpointtable !=  nullptr && udpendpointtable->has_data());
}

bool UDPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (udp !=  nullptr && udp->has_operation())
	|| (udptable !=  nullptr && udptable->has_operation())
	|| (udpendpointtable !=  nullptr && udpendpointtable->has_operation());
}

std::string UDPMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UDP-MIB:UDP-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UDPMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> UDPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<UDPMIB::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "udpTable")
    {
        if(udptable == nullptr)
        {
            udptable = std::make_shared<UDPMIB::UdpTable>();
        }
        return udptable;
    }

    if(child_yang_name == "udpEndpointTable")
    {
        if(udpendpointtable == nullptr)
        {
            udpendpointtable = std::make_shared<UDPMIB::UdpEndpointTable>();
        }
        return udpendpointtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> UDPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    if(udptable != nullptr)
    {
        _children["udpTable"] = udptable;
    }

    if(udpendpointtable != nullptr)
    {
        _children["udpEndpointTable"] = udpendpointtable;
    }

    return _children;
}

void UDPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UDPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> UDPMIB::clone_ptr() const
{
    return std::make_shared<UDPMIB>();
}

std::string UDPMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string UDPMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function UDPMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> UDPMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool UDPMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "udpTable" || name == "udpEndpointTable")
        return true;
    return false;
}

UDPMIB::Udp::Udp()
    :
    udpindatagrams{YType::uint32, "udpInDatagrams"},
    udpnoports{YType::uint32, "udpNoPorts"},
    udpinerrors{YType::uint32, "udpInErrors"},
    udpoutdatagrams{YType::uint32, "udpOutDatagrams"},
    udphcindatagrams{YType::uint64, "udpHCInDatagrams"},
    udphcoutdatagrams{YType::uint64, "udpHCOutDatagrams"}
{

    yang_name = "udp"; yang_parent_name = "UDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

UDPMIB::Udp::~Udp()
{
}

bool UDPMIB::Udp::has_data() const
{
    if (is_presence_container) return true;
    return udpindatagrams.is_set
	|| udpnoports.is_set
	|| udpinerrors.is_set
	|| udpoutdatagrams.is_set
	|| udphcindatagrams.is_set
	|| udphcoutdatagrams.is_set;
}

bool UDPMIB::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udpindatagrams.yfilter)
	|| ydk::is_set(udpnoports.yfilter)
	|| ydk::is_set(udpinerrors.yfilter)
	|| ydk::is_set(udpoutdatagrams.yfilter)
	|| ydk::is_set(udphcindatagrams.yfilter)
	|| ydk::is_set(udphcoutdatagrams.yfilter);
}

std::string UDPMIB::Udp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UDP-MIB:UDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string UDPMIB::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UDPMIB::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udpindatagrams.is_set || is_set(udpindatagrams.yfilter)) leaf_name_data.push_back(udpindatagrams.get_name_leafdata());
    if (udpnoports.is_set || is_set(udpnoports.yfilter)) leaf_name_data.push_back(udpnoports.get_name_leafdata());
    if (udpinerrors.is_set || is_set(udpinerrors.yfilter)) leaf_name_data.push_back(udpinerrors.get_name_leafdata());
    if (udpoutdatagrams.is_set || is_set(udpoutdatagrams.yfilter)) leaf_name_data.push_back(udpoutdatagrams.get_name_leafdata());
    if (udphcindatagrams.is_set || is_set(udphcindatagrams.yfilter)) leaf_name_data.push_back(udphcindatagrams.get_name_leafdata());
    if (udphcoutdatagrams.is_set || is_set(udphcoutdatagrams.yfilter)) leaf_name_data.push_back(udphcoutdatagrams.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> UDPMIB::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> UDPMIB::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void UDPMIB::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udpInDatagrams")
    {
        udpindatagrams = value;
        udpindatagrams.value_namespace = name_space;
        udpindatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpNoPorts")
    {
        udpnoports = value;
        udpnoports.value_namespace = name_space;
        udpnoports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpInErrors")
    {
        udpinerrors = value;
        udpinerrors.value_namespace = name_space;
        udpinerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpOutDatagrams")
    {
        udpoutdatagrams = value;
        udpoutdatagrams.value_namespace = name_space;
        udpoutdatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpHCInDatagrams")
    {
        udphcindatagrams = value;
        udphcindatagrams.value_namespace = name_space;
        udphcindatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpHCOutDatagrams")
    {
        udphcoutdatagrams = value;
        udphcoutdatagrams.value_namespace = name_space;
        udphcoutdatagrams.value_namespace_prefix = name_space_prefix;
    }
}

void UDPMIB::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udpInDatagrams")
    {
        udpindatagrams.yfilter = yfilter;
    }
    if(value_path == "udpNoPorts")
    {
        udpnoports.yfilter = yfilter;
    }
    if(value_path == "udpInErrors")
    {
        udpinerrors.yfilter = yfilter;
    }
    if(value_path == "udpOutDatagrams")
    {
        udpoutdatagrams.yfilter = yfilter;
    }
    if(value_path == "udpHCInDatagrams")
    {
        udphcindatagrams.yfilter = yfilter;
    }
    if(value_path == "udpHCOutDatagrams")
    {
        udphcoutdatagrams.yfilter = yfilter;
    }
}

bool UDPMIB::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpInDatagrams" || name == "udpNoPorts" || name == "udpInErrors" || name == "udpOutDatagrams" || name == "udpHCInDatagrams" || name == "udpHCOutDatagrams")
        return true;
    return false;
}

UDPMIB::UdpTable::UdpTable()
    :
    udpentry(this, {"udplocaladdress", "udplocalport"})
{

    yang_name = "udpTable"; yang_parent_name = "UDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

UDPMIB::UdpTable::~UdpTable()
{
}

bool UDPMIB::UdpTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<udpentry.len(); index++)
    {
        if(udpentry[index]->has_data())
            return true;
    }
    return false;
}

bool UDPMIB::UdpTable::has_operation() const
{
    for (std::size_t index=0; index<udpentry.len(); index++)
    {
        if(udpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string UDPMIB::UdpTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UDP-MIB:UDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string UDPMIB::UdpTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udpTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UDPMIB::UdpTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> UDPMIB::UdpTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udpEntry")
    {
        auto ent_ = std::make_shared<UDPMIB::UdpTable::UdpEntry>();
        ent_->parent = this;
        udpentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> UDPMIB::UdpTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : udpentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void UDPMIB::UdpTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UDPMIB::UdpTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool UDPMIB::UdpTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpEntry")
        return true;
    return false;
}

UDPMIB::UdpTable::UdpEntry::UdpEntry()
    :
    udplocaladdress{YType::str, "udpLocalAddress"},
    udplocalport{YType::int32, "udpLocalPort"}
{

    yang_name = "udpEntry"; yang_parent_name = "udpTable"; is_top_level_class = false; has_list_ancestor = false; 
}

UDPMIB::UdpTable::UdpEntry::~UdpEntry()
{
}

bool UDPMIB::UdpTable::UdpEntry::has_data() const
{
    if (is_presence_container) return true;
    return udplocaladdress.is_set
	|| udplocalport.is_set;
}

bool UDPMIB::UdpTable::UdpEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udplocaladdress.yfilter)
	|| ydk::is_set(udplocalport.yfilter);
}

std::string UDPMIB::UdpTable::UdpEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UDP-MIB:UDP-MIB/udpTable/" << get_segment_path();
    return path_buffer.str();
}

std::string UDPMIB::UdpTable::UdpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udpEntry";
    ADD_KEY_TOKEN(udplocaladdress, "udpLocalAddress");
    ADD_KEY_TOKEN(udplocalport, "udpLocalPort");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UDPMIB::UdpTable::UdpEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udplocaladdress.is_set || is_set(udplocaladdress.yfilter)) leaf_name_data.push_back(udplocaladdress.get_name_leafdata());
    if (udplocalport.is_set || is_set(udplocalport.yfilter)) leaf_name_data.push_back(udplocalport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> UDPMIB::UdpTable::UdpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> UDPMIB::UdpTable::UdpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void UDPMIB::UdpTable::UdpEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udpLocalAddress")
    {
        udplocaladdress = value;
        udplocaladdress.value_namespace = name_space;
        udplocaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpLocalPort")
    {
        udplocalport = value;
        udplocalport.value_namespace = name_space;
        udplocalport.value_namespace_prefix = name_space_prefix;
    }
}

void UDPMIB::UdpTable::UdpEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udpLocalAddress")
    {
        udplocaladdress.yfilter = yfilter;
    }
    if(value_path == "udpLocalPort")
    {
        udplocalport.yfilter = yfilter;
    }
}

bool UDPMIB::UdpTable::UdpEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpLocalAddress" || name == "udpLocalPort")
        return true;
    return false;
}

UDPMIB::UdpEndpointTable::UdpEndpointTable()
    :
    udpendpointentry(this, {"udpendpointlocaladdresstype", "udpendpointlocaladdress", "udpendpointlocalport", "udpendpointremoteaddresstype", "udpendpointremoteaddress", "udpendpointremoteport", "udpendpointinstance"})
{

    yang_name = "udpEndpointTable"; yang_parent_name = "UDP-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

UDPMIB::UdpEndpointTable::~UdpEndpointTable()
{
}

bool UDPMIB::UdpEndpointTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<udpendpointentry.len(); index++)
    {
        if(udpendpointentry[index]->has_data())
            return true;
    }
    return false;
}

bool UDPMIB::UdpEndpointTable::has_operation() const
{
    for (std::size_t index=0; index<udpendpointentry.len(); index++)
    {
        if(udpendpointentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string UDPMIB::UdpEndpointTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UDP-MIB:UDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string UDPMIB::UdpEndpointTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udpEndpointTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UDPMIB::UdpEndpointTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> UDPMIB::UdpEndpointTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udpEndpointEntry")
    {
        auto ent_ = std::make_shared<UDPMIB::UdpEndpointTable::UdpEndpointEntry>();
        ent_->parent = this;
        udpendpointentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> UDPMIB::UdpEndpointTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : udpendpointentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void UDPMIB::UdpEndpointTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UDPMIB::UdpEndpointTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool UDPMIB::UdpEndpointTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpEndpointEntry")
        return true;
    return false;
}

UDPMIB::UdpEndpointTable::UdpEndpointEntry::UdpEndpointEntry()
    :
    udpendpointlocaladdresstype{YType::enumeration, "udpEndpointLocalAddressType"},
    udpendpointlocaladdress{YType::str, "udpEndpointLocalAddress"},
    udpendpointlocalport{YType::uint16, "udpEndpointLocalPort"},
    udpendpointremoteaddresstype{YType::enumeration, "udpEndpointRemoteAddressType"},
    udpendpointremoteaddress{YType::str, "udpEndpointRemoteAddress"},
    udpendpointremoteport{YType::uint16, "udpEndpointRemotePort"},
    udpendpointinstance{YType::uint32, "udpEndpointInstance"},
    udpendpointprocess{YType::uint32, "udpEndpointProcess"}
{

    yang_name = "udpEndpointEntry"; yang_parent_name = "udpEndpointTable"; is_top_level_class = false; has_list_ancestor = false; 
}

UDPMIB::UdpEndpointTable::UdpEndpointEntry::~UdpEndpointEntry()
{
}

bool UDPMIB::UdpEndpointTable::UdpEndpointEntry::has_data() const
{
    if (is_presence_container) return true;
    return udpendpointlocaladdresstype.is_set
	|| udpendpointlocaladdress.is_set
	|| udpendpointlocalport.is_set
	|| udpendpointremoteaddresstype.is_set
	|| udpendpointremoteaddress.is_set
	|| udpendpointremoteport.is_set
	|| udpendpointinstance.is_set
	|| udpendpointprocess.is_set;
}

bool UDPMIB::UdpEndpointTable::UdpEndpointEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udpendpointlocaladdresstype.yfilter)
	|| ydk::is_set(udpendpointlocaladdress.yfilter)
	|| ydk::is_set(udpendpointlocalport.yfilter)
	|| ydk::is_set(udpendpointremoteaddresstype.yfilter)
	|| ydk::is_set(udpendpointremoteaddress.yfilter)
	|| ydk::is_set(udpendpointremoteport.yfilter)
	|| ydk::is_set(udpendpointinstance.yfilter)
	|| ydk::is_set(udpendpointprocess.yfilter);
}

std::string UDPMIB::UdpEndpointTable::UdpEndpointEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UDP-MIB:UDP-MIB/udpEndpointTable/" << get_segment_path();
    return path_buffer.str();
}

std::string UDPMIB::UdpEndpointTable::UdpEndpointEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udpEndpointEntry";
    ADD_KEY_TOKEN(udpendpointlocaladdresstype, "udpEndpointLocalAddressType");
    ADD_KEY_TOKEN(udpendpointlocaladdress, "udpEndpointLocalAddress");
    ADD_KEY_TOKEN(udpendpointlocalport, "udpEndpointLocalPort");
    ADD_KEY_TOKEN(udpendpointremoteaddresstype, "udpEndpointRemoteAddressType");
    ADD_KEY_TOKEN(udpendpointremoteaddress, "udpEndpointRemoteAddress");
    ADD_KEY_TOKEN(udpendpointremoteport, "udpEndpointRemotePort");
    ADD_KEY_TOKEN(udpendpointinstance, "udpEndpointInstance");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UDPMIB::UdpEndpointTable::UdpEndpointEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udpendpointlocaladdresstype.is_set || is_set(udpendpointlocaladdresstype.yfilter)) leaf_name_data.push_back(udpendpointlocaladdresstype.get_name_leafdata());
    if (udpendpointlocaladdress.is_set || is_set(udpendpointlocaladdress.yfilter)) leaf_name_data.push_back(udpendpointlocaladdress.get_name_leafdata());
    if (udpendpointlocalport.is_set || is_set(udpendpointlocalport.yfilter)) leaf_name_data.push_back(udpendpointlocalport.get_name_leafdata());
    if (udpendpointremoteaddresstype.is_set || is_set(udpendpointremoteaddresstype.yfilter)) leaf_name_data.push_back(udpendpointremoteaddresstype.get_name_leafdata());
    if (udpendpointremoteaddress.is_set || is_set(udpendpointremoteaddress.yfilter)) leaf_name_data.push_back(udpendpointremoteaddress.get_name_leafdata());
    if (udpendpointremoteport.is_set || is_set(udpendpointremoteport.yfilter)) leaf_name_data.push_back(udpendpointremoteport.get_name_leafdata());
    if (udpendpointinstance.is_set || is_set(udpendpointinstance.yfilter)) leaf_name_data.push_back(udpendpointinstance.get_name_leafdata());
    if (udpendpointprocess.is_set || is_set(udpendpointprocess.yfilter)) leaf_name_data.push_back(udpendpointprocess.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> UDPMIB::UdpEndpointTable::UdpEndpointEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> UDPMIB::UdpEndpointTable::UdpEndpointEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void UDPMIB::UdpEndpointTable::UdpEndpointEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udpEndpointLocalAddressType")
    {
        udpendpointlocaladdresstype = value;
        udpendpointlocaladdresstype.value_namespace = name_space;
        udpendpointlocaladdresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpEndpointLocalAddress")
    {
        udpendpointlocaladdress = value;
        udpendpointlocaladdress.value_namespace = name_space;
        udpendpointlocaladdress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpEndpointLocalPort")
    {
        udpendpointlocalport = value;
        udpendpointlocalport.value_namespace = name_space;
        udpendpointlocalport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpEndpointRemoteAddressType")
    {
        udpendpointremoteaddresstype = value;
        udpendpointremoteaddresstype.value_namespace = name_space;
        udpendpointremoteaddresstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpEndpointRemoteAddress")
    {
        udpendpointremoteaddress = value;
        udpendpointremoteaddress.value_namespace = name_space;
        udpendpointremoteaddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpEndpointRemotePort")
    {
        udpendpointremoteport = value;
        udpendpointremoteport.value_namespace = name_space;
        udpendpointremoteport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpEndpointInstance")
    {
        udpendpointinstance = value;
        udpendpointinstance.value_namespace = name_space;
        udpendpointinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpEndpointProcess")
    {
        udpendpointprocess = value;
        udpendpointprocess.value_namespace = name_space;
        udpendpointprocess.value_namespace_prefix = name_space_prefix;
    }
}

void UDPMIB::UdpEndpointTable::UdpEndpointEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udpEndpointLocalAddressType")
    {
        udpendpointlocaladdresstype.yfilter = yfilter;
    }
    if(value_path == "udpEndpointLocalAddress")
    {
        udpendpointlocaladdress.yfilter = yfilter;
    }
    if(value_path == "udpEndpointLocalPort")
    {
        udpendpointlocalport.yfilter = yfilter;
    }
    if(value_path == "udpEndpointRemoteAddressType")
    {
        udpendpointremoteaddresstype.yfilter = yfilter;
    }
    if(value_path == "udpEndpointRemoteAddress")
    {
        udpendpointremoteaddress.yfilter = yfilter;
    }
    if(value_path == "udpEndpointRemotePort")
    {
        udpendpointremoteport.yfilter = yfilter;
    }
    if(value_path == "udpEndpointInstance")
    {
        udpendpointinstance.yfilter = yfilter;
    }
    if(value_path == "udpEndpointProcess")
    {
        udpendpointprocess.yfilter = yfilter;
    }
}

bool UDPMIB::UdpEndpointTable::UdpEndpointEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpEndpointLocalAddressType" || name == "udpEndpointLocalAddress" || name == "udpEndpointLocalPort" || name == "udpEndpointRemoteAddressType" || name == "udpEndpointRemoteAddress" || name == "udpEndpointRemotePort" || name == "udpEndpointInstance" || name == "udpEndpointProcess")
        return true;
    return false;
}


}
}

