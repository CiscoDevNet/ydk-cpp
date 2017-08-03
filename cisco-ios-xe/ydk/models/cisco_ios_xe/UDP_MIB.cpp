
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "UDP_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace UDP_MIB {

UdpMib::UdpMib()
    :
    udp(std::make_shared<UdpMib::Udp>())
	,udpendpointtable(std::make_shared<UdpMib::Udpendpointtable>())
	,udptable(std::make_shared<UdpMib::Udptable>())
{
    udp->parent = this;

    udpendpointtable->parent = this;

    udptable->parent = this;

    yang_name = "UDP-MIB"; yang_parent_name = "UDP-MIB";
}

UdpMib::~UdpMib()
{
}

bool UdpMib::has_data() const
{
    return (udp !=  nullptr && udp->has_data())
	|| (udpendpointtable !=  nullptr && udpendpointtable->has_data())
	|| (udptable !=  nullptr && udptable->has_data());
}

bool UdpMib::has_operation() const
{
    return is_set(yfilter)
	|| (udp !=  nullptr && udp->has_operation())
	|| (udpendpointtable !=  nullptr && udpendpointtable->has_operation())
	|| (udptable !=  nullptr && udptable->has_operation());
}

std::string UdpMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "UDP-MIB:UDP-MIB";

    return path_buffer.str();

}

const EntityPath UdpMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> UdpMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<UdpMib::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "udpEndpointTable")
    {
        if(udpendpointtable == nullptr)
        {
            udpendpointtable = std::make_shared<UdpMib::Udpendpointtable>();
        }
        return udpendpointtable;
    }

    if(child_yang_name == "udpTable")
    {
        if(udptable == nullptr)
        {
            udptable = std::make_shared<UdpMib::Udptable>();
        }
        return udptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpMib::get_children() const
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

void UdpMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UdpMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> UdpMib::clone_ptr() const
{
    return std::make_shared<UdpMib>();
}

std::string UdpMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string UdpMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function UdpMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> UdpMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool UdpMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "udpEndpointTable" || name == "udpTable")
        return true;
    return false;
}

UdpMib::Udp::Udp()
    :
    udphcindatagrams{YType::uint64, "udpHCInDatagrams"},
    udphcoutdatagrams{YType::uint64, "udpHCOutDatagrams"},
    udpindatagrams{YType::uint32, "udpInDatagrams"},
    udpinerrors{YType::uint32, "udpInErrors"},
    udpnoports{YType::uint32, "udpNoPorts"},
    udpoutdatagrams{YType::uint32, "udpOutDatagrams"}
{
    yang_name = "udp"; yang_parent_name = "UDP-MIB";
}

UdpMib::Udp::~Udp()
{
}

bool UdpMib::Udp::has_data() const
{
    return udphcindatagrams.is_set
	|| udphcoutdatagrams.is_set
	|| udpindatagrams.is_set
	|| udpinerrors.is_set
	|| udpnoports.is_set
	|| udpoutdatagrams.is_set;
}

bool UdpMib::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udphcindatagrams.yfilter)
	|| ydk::is_set(udphcoutdatagrams.yfilter)
	|| ydk::is_set(udpindatagrams.yfilter)
	|| ydk::is_set(udpinerrors.yfilter)
	|| ydk::is_set(udpnoports.yfilter)
	|| ydk::is_set(udpoutdatagrams.yfilter);
}

std::string UdpMib::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath UdpMib::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "UDP-MIB:UDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udphcindatagrams.is_set || is_set(udphcindatagrams.yfilter)) leaf_name_data.push_back(udphcindatagrams.get_name_leafdata());
    if (udphcoutdatagrams.is_set || is_set(udphcoutdatagrams.yfilter)) leaf_name_data.push_back(udphcoutdatagrams.get_name_leafdata());
    if (udpindatagrams.is_set || is_set(udpindatagrams.yfilter)) leaf_name_data.push_back(udpindatagrams.get_name_leafdata());
    if (udpinerrors.is_set || is_set(udpinerrors.yfilter)) leaf_name_data.push_back(udpinerrors.get_name_leafdata());
    if (udpnoports.is_set || is_set(udpnoports.yfilter)) leaf_name_data.push_back(udpnoports.get_name_leafdata());
    if (udpoutdatagrams.is_set || is_set(udpoutdatagrams.yfilter)) leaf_name_data.push_back(udpoutdatagrams.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpMib::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpMib::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpMib::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpMib::Udp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpMib::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpHCInDatagrams" || name == "udpHCOutDatagrams" || name == "udpInDatagrams" || name == "udpInErrors" || name == "udpNoPorts" || name == "udpOutDatagrams")
        return true;
    return false;
}

UdpMib::Udptable::Udptable()
{
    yang_name = "udpTable"; yang_parent_name = "UDP-MIB";
}

UdpMib::Udptable::~Udptable()
{
}

bool UdpMib::Udptable::has_data() const
{
    for (std::size_t index=0; index<udpentry.size(); index++)
    {
        if(udpentry[index]->has_data())
            return true;
    }
    return false;
}

bool UdpMib::Udptable::has_operation() const
{
    for (std::size_t index=0; index<udpentry.size(); index++)
    {
        if(udpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string UdpMib::Udptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udpTable";

    return path_buffer.str();

}

const EntityPath UdpMib::Udptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "UDP-MIB:UDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpMib::Udptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<UdpMib::Udptable::Udpentry>();
        c->parent = this;
        udpentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpMib::Udptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : udpentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void UdpMib::Udptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UdpMib::Udptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool UdpMib::Udptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpEntry")
        return true;
    return false;
}

UdpMib::Udptable::Udpentry::Udpentry()
    :
    udplocaladdress{YType::str, "udpLocalAddress"},
    udplocalport{YType::int32, "udpLocalPort"}
{
    yang_name = "udpEntry"; yang_parent_name = "udpTable";
}

UdpMib::Udptable::Udpentry::~Udpentry()
{
}

bool UdpMib::Udptable::Udpentry::has_data() const
{
    return udplocaladdress.is_set
	|| udplocalport.is_set;
}

bool UdpMib::Udptable::Udpentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udplocaladdress.yfilter)
	|| ydk::is_set(udplocalport.yfilter);
}

std::string UdpMib::Udptable::Udpentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udpEntry" <<"[udpLocalAddress='" <<udplocaladdress <<"']" <<"[udpLocalPort='" <<udplocalport <<"']";

    return path_buffer.str();

}

const EntityPath UdpMib::Udptable::Udpentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "UDP-MIB:UDP-MIB/udpTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udplocaladdress.is_set || is_set(udplocaladdress.yfilter)) leaf_name_data.push_back(udplocaladdress.get_name_leafdata());
    if (udplocalport.is_set || is_set(udplocalport.yfilter)) leaf_name_data.push_back(udplocalport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpMib::Udptable::Udpentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpMib::Udptable::Udpentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpMib::Udptable::Udpentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpMib::Udptable::Udpentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpMib::Udptable::Udpentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpLocalAddress" || name == "udpLocalPort")
        return true;
    return false;
}

UdpMib::Udpendpointtable::Udpendpointtable()
{
    yang_name = "udpEndpointTable"; yang_parent_name = "UDP-MIB";
}

UdpMib::Udpendpointtable::~Udpendpointtable()
{
}

bool UdpMib::Udpendpointtable::has_data() const
{
    for (std::size_t index=0; index<udpendpointentry.size(); index++)
    {
        if(udpendpointentry[index]->has_data())
            return true;
    }
    return false;
}

bool UdpMib::Udpendpointtable::has_operation() const
{
    for (std::size_t index=0; index<udpendpointentry.size(); index++)
    {
        if(udpendpointentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string UdpMib::Udpendpointtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udpEndpointTable";

    return path_buffer.str();

}

const EntityPath UdpMib::Udpendpointtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "UDP-MIB:UDP-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpMib::Udpendpointtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<UdpMib::Udpendpointtable::Udpendpointentry>();
        c->parent = this;
        udpendpointentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpMib::Udpendpointtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : udpendpointentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void UdpMib::Udpendpointtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void UdpMib::Udpendpointtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool UdpMib::Udpendpointtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpEndpointEntry")
        return true;
    return false;
}

UdpMib::Udpendpointtable::Udpendpointentry::Udpendpointentry()
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
    yang_name = "udpEndpointEntry"; yang_parent_name = "udpEndpointTable";
}

UdpMib::Udpendpointtable::Udpendpointentry::~Udpendpointentry()
{
}

bool UdpMib::Udpendpointtable::Udpendpointentry::has_data() const
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

bool UdpMib::Udpendpointtable::Udpendpointentry::has_operation() const
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

std::string UdpMib::Udpendpointtable::Udpendpointentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udpEndpointEntry" <<"[udpEndpointLocalAddressType='" <<udpendpointlocaladdresstype <<"']" <<"[udpEndpointLocalAddress='" <<udpendpointlocaladdress <<"']" <<"[udpEndpointLocalPort='" <<udpendpointlocalport <<"']" <<"[udpEndpointRemoteAddressType='" <<udpendpointremoteaddresstype <<"']" <<"[udpEndpointRemoteAddress='" <<udpendpointremoteaddress <<"']" <<"[udpEndpointRemotePort='" <<udpendpointremoteport <<"']" <<"[udpEndpointInstance='" <<udpendpointinstance <<"']";

    return path_buffer.str();

}

const EntityPath UdpMib::Udpendpointtable::Udpendpointentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "UDP-MIB:UDP-MIB/udpEndpointTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udpendpointlocaladdresstype.is_set || is_set(udpendpointlocaladdresstype.yfilter)) leaf_name_data.push_back(udpendpointlocaladdresstype.get_name_leafdata());
    if (udpendpointlocaladdress.is_set || is_set(udpendpointlocaladdress.yfilter)) leaf_name_data.push_back(udpendpointlocaladdress.get_name_leafdata());
    if (udpendpointlocalport.is_set || is_set(udpendpointlocalport.yfilter)) leaf_name_data.push_back(udpendpointlocalport.get_name_leafdata());
    if (udpendpointremoteaddresstype.is_set || is_set(udpendpointremoteaddresstype.yfilter)) leaf_name_data.push_back(udpendpointremoteaddresstype.get_name_leafdata());
    if (udpendpointremoteaddress.is_set || is_set(udpendpointremoteaddress.yfilter)) leaf_name_data.push_back(udpendpointremoteaddress.get_name_leafdata());
    if (udpendpointremoteport.is_set || is_set(udpendpointremoteport.yfilter)) leaf_name_data.push_back(udpendpointremoteport.get_name_leafdata());
    if (udpendpointinstance.is_set || is_set(udpendpointinstance.yfilter)) leaf_name_data.push_back(udpendpointinstance.get_name_leafdata());
    if (udpendpointprocess.is_set || is_set(udpendpointprocess.yfilter)) leaf_name_data.push_back(udpendpointprocess.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> UdpMib::Udpendpointtable::Udpendpointentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpMib::Udpendpointtable::Udpendpointentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void UdpMib::Udpendpointtable::Udpendpointentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void UdpMib::Udpendpointtable::Udpendpointentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool UdpMib::Udpendpointtable::Udpendpointentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udpEndpointLocalAddressType" || name == "udpEndpointLocalAddress" || name == "udpEndpointLocalPort" || name == "udpEndpointRemoteAddressType" || name == "udpEndpointRemoteAddress" || name == "udpEndpointRemotePort" || name == "udpEndpointInstance" || name == "udpEndpointProcess")
        return true;
    return false;
}


}
}

