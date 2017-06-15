
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "UDP_MIB.hpp"

namespace ydk {
namespace UDP_MIB {

UdpMib::UdpMib()
    :
    udp_(std::make_shared<UdpMib::Udp>())
	,udpendpointtable_(std::make_shared<UdpMib::Udpendpointtable>())
	,udptable_(std::make_shared<UdpMib::Udptable>())
{
    udp_->parent = this;

    udpendpointtable_->parent = this;

    udptable_->parent = this;

    yang_name = "UDP-MIB"; yang_parent_name = "UDP-MIB";
}

UdpMib::~UdpMib()
{
}

bool UdpMib::has_data() const
{
    return (udp_ !=  nullptr && udp_->has_data())
	|| (udpendpointtable_ !=  nullptr && udpendpointtable_->has_data())
	|| (udptable_ !=  nullptr && udptable_->has_data());
}

bool UdpMib::has_operation() const
{
    return is_set(operation)
	|| (udp_ !=  nullptr && udp_->has_operation())
	|| (udpendpointtable_ !=  nullptr && udpendpointtable_->has_operation())
	|| (udptable_ !=  nullptr && udptable_->has_operation());
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
        if(udp_ == nullptr)
        {
            udp_ = std::make_shared<UdpMib::Udp>();
        }
        return udp_;
    }

    if(child_yang_name == "udpEndpointTable")
    {
        if(udpendpointtable_ == nullptr)
        {
            udpendpointtable_ = std::make_shared<UdpMib::Udpendpointtable>();
        }
        return udpendpointtable_;
    }

    if(child_yang_name == "udpTable")
    {
        if(udptable_ == nullptr)
        {
            udptable_ = std::make_shared<UdpMib::Udptable>();
        }
        return udptable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp_ != nullptr)
    {
        children["udp"] = udp_;
    }

    if(udpendpointtable_ != nullptr)
    {
        children["udpEndpointTable"] = udpendpointtable_;
    }

    if(udptable_ != nullptr)
    {
        children["udpTable"] = udptable_;
    }

    return children;
}

void UdpMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(udphcindatagrams.operation)
	|| is_set(udphcoutdatagrams.operation)
	|| is_set(udpindatagrams.operation)
	|| is_set(udpinerrors.operation)
	|| is_set(udpnoports.operation)
	|| is_set(udpoutdatagrams.operation);
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

    if (udphcindatagrams.is_set || is_set(udphcindatagrams.operation)) leaf_name_data.push_back(udphcindatagrams.get_name_leafdata());
    if (udphcoutdatagrams.is_set || is_set(udphcoutdatagrams.operation)) leaf_name_data.push_back(udphcoutdatagrams.get_name_leafdata());
    if (udpindatagrams.is_set || is_set(udpindatagrams.operation)) leaf_name_data.push_back(udpindatagrams.get_name_leafdata());
    if (udpinerrors.is_set || is_set(udpinerrors.operation)) leaf_name_data.push_back(udpinerrors.get_name_leafdata());
    if (udpnoports.is_set || is_set(udpnoports.operation)) leaf_name_data.push_back(udpnoports.get_name_leafdata());
    if (udpoutdatagrams.is_set || is_set(udpoutdatagrams.operation)) leaf_name_data.push_back(udpoutdatagrams.get_name_leafdata());


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

void UdpMib::Udp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "udpHCInDatagrams")
    {
        udphcindatagrams = value;
    }
    if(value_path == "udpHCOutDatagrams")
    {
        udphcoutdatagrams = value;
    }
    if(value_path == "udpInDatagrams")
    {
        udpindatagrams = value;
    }
    if(value_path == "udpInErrors")
    {
        udpinerrors = value;
    }
    if(value_path == "udpNoPorts")
    {
        udpnoports = value;
    }
    if(value_path == "udpOutDatagrams")
    {
        udpoutdatagrams = value;
    }
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
    for (std::size_t index=0; index<udpentry_.size(); index++)
    {
        if(udpentry_[index]->has_data())
            return true;
    }
    return false;
}

bool UdpMib::Udptable::has_operation() const
{
    for (std::size_t index=0; index<udpentry_.size(); index++)
    {
        if(udpentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : udpentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<UdpMib::Udptable::Udpentry>();
        c->parent = this;
        udpentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpMib::Udptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : udpentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void UdpMib::Udptable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(udplocaladdress.operation)
	|| is_set(udplocalport.operation);
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

    if (udplocaladdress.is_set || is_set(udplocaladdress.operation)) leaf_name_data.push_back(udplocaladdress.get_name_leafdata());
    if (udplocalport.is_set || is_set(udplocalport.operation)) leaf_name_data.push_back(udplocalport.get_name_leafdata());


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

void UdpMib::Udptable::Udpentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "udpLocalAddress")
    {
        udplocaladdress = value;
    }
    if(value_path == "udpLocalPort")
    {
        udplocalport = value;
    }
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
    for (std::size_t index=0; index<udpendpointentry_.size(); index++)
    {
        if(udpendpointentry_[index]->has_data())
            return true;
    }
    return false;
}

bool UdpMib::Udpendpointtable::has_operation() const
{
    for (std::size_t index=0; index<udpendpointentry_.size(); index++)
    {
        if(udpendpointentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : udpendpointentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<UdpMib::Udpendpointtable::Udpendpointentry>();
        c->parent = this;
        udpendpointentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> UdpMib::Udpendpointtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : udpendpointentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void UdpMib::Udpendpointtable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(udpendpointlocaladdresstype.operation)
	|| is_set(udpendpointlocaladdress.operation)
	|| is_set(udpendpointlocalport.operation)
	|| is_set(udpendpointremoteaddresstype.operation)
	|| is_set(udpendpointremoteaddress.operation)
	|| is_set(udpendpointremoteport.operation)
	|| is_set(udpendpointinstance.operation)
	|| is_set(udpendpointprocess.operation);
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

    if (udpendpointlocaladdresstype.is_set || is_set(udpendpointlocaladdresstype.operation)) leaf_name_data.push_back(udpendpointlocaladdresstype.get_name_leafdata());
    if (udpendpointlocaladdress.is_set || is_set(udpendpointlocaladdress.operation)) leaf_name_data.push_back(udpendpointlocaladdress.get_name_leafdata());
    if (udpendpointlocalport.is_set || is_set(udpendpointlocalport.operation)) leaf_name_data.push_back(udpendpointlocalport.get_name_leafdata());
    if (udpendpointremoteaddresstype.is_set || is_set(udpendpointremoteaddresstype.operation)) leaf_name_data.push_back(udpendpointremoteaddresstype.get_name_leafdata());
    if (udpendpointremoteaddress.is_set || is_set(udpendpointremoteaddress.operation)) leaf_name_data.push_back(udpendpointremoteaddress.get_name_leafdata());
    if (udpendpointremoteport.is_set || is_set(udpendpointremoteport.operation)) leaf_name_data.push_back(udpendpointremoteport.get_name_leafdata());
    if (udpendpointinstance.is_set || is_set(udpendpointinstance.operation)) leaf_name_data.push_back(udpendpointinstance.get_name_leafdata());
    if (udpendpointprocess.is_set || is_set(udpendpointprocess.operation)) leaf_name_data.push_back(udpendpointprocess.get_name_leafdata());


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

void UdpMib::Udpendpointtable::Udpendpointentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "udpEndpointLocalAddressType")
    {
        udpendpointlocaladdresstype = value;
    }
    if(value_path == "udpEndpointLocalAddress")
    {
        udpendpointlocaladdress = value;
    }
    if(value_path == "udpEndpointLocalPort")
    {
        udpendpointlocalport = value;
    }
    if(value_path == "udpEndpointRemoteAddressType")
    {
        udpendpointremoteaddresstype = value;
    }
    if(value_path == "udpEndpointRemoteAddress")
    {
        udpendpointremoteaddress = value;
    }
    if(value_path == "udpEndpointRemotePort")
    {
        udpendpointremoteport = value;
    }
    if(value_path == "udpEndpointInstance")
    {
        udpendpointinstance = value;
    }
    if(value_path == "udpEndpointProcess")
    {
        udpendpointprocess = value;
    }
}


}
}

