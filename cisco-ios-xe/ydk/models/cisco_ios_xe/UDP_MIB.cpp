
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
	,udpendpointtable(std::make_shared<UDPMIB::Udpendpointtable>())
	,udptable(std::make_shared<UDPMIB::Udptable>())
{
    udp->parent = this;
    udpendpointtable->parent = this;
    udptable->parent = this;

    yang_name = "UDP-MIB"; yang_parent_name = "UDP-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

UDPMIB::~UDPMIB()
{
}

bool UDPMIB::has_data() const
{
    return (udp !=  nullptr && udp->has_data())
	|| (udpendpointtable !=  nullptr && udpendpointtable->has_data())
	|| (udptable !=  nullptr && udptable->has_data());
}

bool UDPMIB::has_operation() const
{
    return is_set(yfilter)
	|| (udp !=  nullptr && udp->has_operation())
	|| (udpendpointtable !=  nullptr && udpendpointtable->has_operation())
	|| (udptable !=  nullptr && udptable->has_operation());
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

std::shared_ptr<Entity> UDPMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<UDPMIB::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "udpEndpointTable")
    {
        if(udpendpointtable == nullptr)
        {
            udpendpointtable = std::make_shared<UDPMIB::Udpendpointtable>();
        }
        return udpendpointtable;
    }

    if(child_yang_name == "udpTable")
    {
        if(udptable == nullptr)
        {
            udptable = std::make_shared<UDPMIB::Udptable>();
        }
        return udptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UDPMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    if(udpendpointtable != nullptr)
    {
        children["udpEndpointTable"] = udpendpointtable;
    }

    if(udptable != nullptr)
    {
        children["udpTable"] = udptable;
    }

    return children;
}

void UDPMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UDPMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> UDPMIB::clone_ptr() const
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
    if(name == "udp" || name == "udpEndpointTable" || name == "udpTable")
        return true;
    return false;
}

UDPMIB::Udp::Udp()
    :
    udphcindatagrams{YType::uint64, "udpHCInDatagrams"},
    udphcoutdatagrams{YType::uint64, "udpHCOutDatagrams"},
    udpindatagrams{YType::uint32, "udpInDatagrams"},
    udpinerrors{YType::uint32, "udpInErrors"},
    udpnoports{YType::uint32, "udpNoPorts"},
    udpoutdatagrams{YType::uint32, "udpOutDatagrams"}
{

    yang_name = "udp"; yang_parent_name = "UDP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

UDPMIB::Udp::~Udp()
{
}

bool UDPMIB::Udp::has_data() const
{
    return udphcindatagrams.is_set
	|| udphcoutdatagrams.is_set
	|| udpindatagrams.is_set
	|| udpinerrors.is_set
	|| udpnoports.is_set
	|| udpoutdatagrams.is_set;
}

bool UDPMIB::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udphcindatagrams.yfilter)
	|| ydk::is_set(udphcoutdatagrams.yfilter)
	|| ydk::is_set(udpindatagrams.yfilter)
	|| ydk::is_set(udpinerrors.yfilter)
	|| ydk::is_set(udpnoports.yfilter)
	|| ydk::is_set(udpoutdatagrams.yfilter);
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

    if (udphcindatagrams.is_set || is_set(udphcindatagrams.yfilter)) leaf_name_data.push_back(udphcindatagrams.get_name_leafdata());
    if (udphcoutdatagrams.is_set || is_set(udphcoutdatagrams.yfilter)) leaf_name_data.push_back(udphcoutdatagrams.get_name_leafdata());
    if (udpindatagrams.is_set || is_set(udpindatagrams.yfilter)) leaf_name_data.push_back(udpindatagrams.get_name_leafdata());
    if (udpinerrors.is_set || is_set(udpinerrors.yfilter)) leaf_name_data.push_back(udpinerrors.get_name_leafdata());
    if (udpnoports.is_set || is_set(udpnoports.yfilter)) leaf_name_data.push_back(udpnoports.get_name_leafdata());
    if (udpoutdatagrams.is_set || is_set(udpoutdatagrams.yfilter)) leaf_name_data.push_back(udpoutdatagrams.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> UDPMIB::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UDPMIB::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UDPMIB::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "udpInDatagrams")
    {
        udpindatagrams = value;
        udpindatagrams.value_namespace = name_space;
        udpindatagrams.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpInErrors")
    {
        udpinerrors = value;
        udpinerrors.value_namespace = name_space;
        udpinerrors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpNoPorts")
    {
        udpnoports = value;
        udpnoports.value_namespace = name_space;
        udpnoports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udpOutDatagrams")
    {
        udpoutdatagrams = value;
        udpoutdatagrams.value_namespace = name_space;
        udpoutdatagrams.value_namespace_prefix = name_space_prefix;
    }
}

void UDPMIB::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udpHCInDatagrams")
    {
        udphcindatagrams.yfilter = yfilter;
    }
    if(value_path == "udpHCOutDatagrams")
    {
        udphcoutdatagrams.yfilter = yfilter;
    }
    if(value_path == "udpInDatagrams")
    {
        udpindatagrams.yfilter = yfilter;
    }
    if(value_path == "udpInErrors")
    {
        udpinerrors.yfilter = yfilter;
    }
    if(value_path == "udpNoPorts")
    {
        udpnoports.yfilter = yfilter;
    }
    if(value_path == "udpOutDatagrams")
    {
        udpoutdatagrams.yfilter = yfilter;
    }
}

bool UDPMIB::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpHCInDatagrams" || name == "udpHCOutDatagrams" || name == "udpInDatagrams" || name == "udpInErrors" || name == "udpNoPorts" || name == "udpOutDatagrams")
        return true;
    return false;
}

UDPMIB::Udpendpointtable::Udpendpointtable()
{

    yang_name = "udpEndpointTable"; yang_parent_name = "UDP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

UDPMIB::Udpendpointtable::~Udpendpointtable()
{
}

bool UDPMIB::Udpendpointtable::has_data() const
{
    for (std::size_t index=0; index<udpendpointentry.size(); index++)
    {
        if(udpendpointentry[index]->has_data())
            return true;
    }
    return false;
}

bool UDPMIB::Udpendpointtable::has_operation() const
{
    for (std::size_t index=0; index<udpendpointentry.size(); index++)
    {
        if(udpendpointentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string UDPMIB::Udpendpointtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UDP-MIB:UDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string UDPMIB::Udpendpointtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udpEndpointTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UDPMIB::Udpendpointtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> UDPMIB::Udpendpointtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udpEndpointEntry")
    {
        for(auto const & c : udpendpointentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<UDPMIB::Udpendpointtable::Udpendpointentry>();
        c->parent = this;
        udpendpointentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UDPMIB::Udpendpointtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : udpendpointentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void UDPMIB::Udpendpointtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UDPMIB::Udpendpointtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool UDPMIB::Udpendpointtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpEndpointEntry")
        return true;
    return false;
}

UDPMIB::Udpendpointtable::Udpendpointentry::Udpendpointentry()
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

UDPMIB::Udpendpointtable::Udpendpointentry::~Udpendpointentry()
{
}

bool UDPMIB::Udpendpointtable::Udpendpointentry::has_data() const
{
    return udpendpointlocaladdresstype.is_set
	|| udpendpointlocaladdress.is_set
	|| udpendpointlocalport.is_set
	|| udpendpointremoteaddresstype.is_set
	|| udpendpointremoteaddress.is_set
	|| udpendpointremoteport.is_set
	|| udpendpointinstance.is_set
	|| udpendpointprocess.is_set;
}

bool UDPMIB::Udpendpointtable::Udpendpointentry::has_operation() const
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

std::string UDPMIB::Udpendpointtable::Udpendpointentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UDP-MIB:UDP-MIB/udpEndpointTable/" << get_segment_path();
    return path_buffer.str();
}

std::string UDPMIB::Udpendpointtable::Udpendpointentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udpEndpointEntry" <<"[udpEndpointLocalAddressType='" <<udpendpointlocaladdresstype <<"']" <<"[udpEndpointLocalAddress='" <<udpendpointlocaladdress <<"']" <<"[udpEndpointLocalPort='" <<udpendpointlocalport <<"']" <<"[udpEndpointRemoteAddressType='" <<udpendpointremoteaddresstype <<"']" <<"[udpEndpointRemoteAddress='" <<udpendpointremoteaddress <<"']" <<"[udpEndpointRemotePort='" <<udpendpointremoteport <<"']" <<"[udpEndpointInstance='" <<udpendpointinstance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UDPMIB::Udpendpointtable::Udpendpointentry::get_name_leaf_data() const
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

std::shared_ptr<Entity> UDPMIB::Udpendpointtable::Udpendpointentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UDPMIB::Udpendpointtable::Udpendpointentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UDPMIB::Udpendpointtable::Udpendpointentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UDPMIB::Udpendpointtable::Udpendpointentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UDPMIB::Udpendpointtable::Udpendpointentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpEndpointLocalAddressType" || name == "udpEndpointLocalAddress" || name == "udpEndpointLocalPort" || name == "udpEndpointRemoteAddressType" || name == "udpEndpointRemoteAddress" || name == "udpEndpointRemotePort" || name == "udpEndpointInstance" || name == "udpEndpointProcess")
        return true;
    return false;
}

UDPMIB::Udptable::Udptable()
{

    yang_name = "udpTable"; yang_parent_name = "UDP-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

UDPMIB::Udptable::~Udptable()
{
}

bool UDPMIB::Udptable::has_data() const
{
    for (std::size_t index=0; index<udpentry.size(); index++)
    {
        if(udpentry[index]->has_data())
            return true;
    }
    return false;
}

bool UDPMIB::Udptable::has_operation() const
{
    for (std::size_t index=0; index<udpentry.size(); index++)
    {
        if(udpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string UDPMIB::Udptable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UDP-MIB:UDP-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string UDPMIB::Udptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udpTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UDPMIB::Udptable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> UDPMIB::Udptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udpEntry")
    {
        for(auto const & c : udpentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<UDPMIB::Udptable::Udpentry>();
        c->parent = this;
        udpentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UDPMIB::Udptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : udpentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void UDPMIB::Udptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UDPMIB::Udptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool UDPMIB::Udptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpEntry")
        return true;
    return false;
}

UDPMIB::Udptable::Udpentry::Udpentry()
    :
    udplocaladdress{YType::str, "udpLocalAddress"},
    udplocalport{YType::int32, "udpLocalPort"}
{

    yang_name = "udpEntry"; yang_parent_name = "udpTable"; is_top_level_class = false; has_list_ancestor = false;
}

UDPMIB::Udptable::Udpentry::~Udpentry()
{
}

bool UDPMIB::Udptable::Udpentry::has_data() const
{
    return udplocaladdress.is_set
	|| udplocalport.is_set;
}

bool UDPMIB::Udptable::Udpentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udplocaladdress.yfilter)
	|| ydk::is_set(udplocalport.yfilter);
}

std::string UDPMIB::Udptable::Udpentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UDP-MIB:UDP-MIB/udpTable/" << get_segment_path();
    return path_buffer.str();
}

std::string UDPMIB::Udptable::Udpentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udpEntry" <<"[udpLocalAddress='" <<udplocaladdress <<"']" <<"[udpLocalPort='" <<udplocalport <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > UDPMIB::Udptable::Udpentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udplocaladdress.is_set || is_set(udplocaladdress.yfilter)) leaf_name_data.push_back(udplocaladdress.get_name_leafdata());
    if (udplocalport.is_set || is_set(udplocalport.yfilter)) leaf_name_data.push_back(udplocalport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> UDPMIB::Udptable::Udpentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UDPMIB::Udptable::Udpentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UDPMIB::Udptable::Udpentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UDPMIB::Udptable::Udpentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UDPMIB::Udptable::Udpentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpLocalAddress" || name == "udpLocalPort")
        return true;
    return false;
}


}
}

