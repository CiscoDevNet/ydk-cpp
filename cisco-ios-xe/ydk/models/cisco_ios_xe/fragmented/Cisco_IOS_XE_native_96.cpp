
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_96.hpp"
#include "Cisco_IOS_XE_native_97.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Bfd::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::DefaultInformation()
    :
    in(nullptr) // presence node
	,out(nullptr) // presence node
{
    yang_name = "default-information"; yang_parent_name = "af-ip-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::has_operation() const
{
    return is_set(operation)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultInformation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::In()
    :
    sa_name{YType::str, "sa-name"},
    sa_num{YType::uint16, "sa-num"}
{
    yang_name = "in"; yang_parent_name = "default-information";
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::~In()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::has_data() const
{
    return sa_name.is_set
	|| sa_num.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::has_operation() const
{
    return is_set(operation)
	|| is_set(sa_name.operation)
	|| is_set(sa_num.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_name.is_set || is_set(sa_name.operation)) leaf_name_data.push_back(sa_name.get_name_leafdata());
    if (sa_num.is_set || is_set(sa_num.operation)) leaf_name_data.push_back(sa_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::In::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sa-name")
    {
        sa_name = value;
    }
    if(value_path == "sa-num")
    {
        sa_num = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::Out()
    :
    sa_out_name{YType::str, "sa-out-name"},
    sa_out_num{YType::uint16, "sa-out-num"}
{
    yang_name = "out"; yang_parent_name = "default-information";
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::~Out()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::has_data() const
{
    return sa_out_name.is_set
	|| sa_out_num.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::has_operation() const
{
    return is_set(operation)
	|| is_set(sa_out_name.operation)
	|| is_set(sa_out_num.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_out_name.is_set || is_set(sa_out_name.operation)) leaf_name_data.push_back(sa_out_name.get_name_leafdata());
    if (sa_out_num.is_set || is_set(sa_out_num.operation)) leaf_name_data.push_back(sa_out_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultInformation::Out::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sa-out-name")
    {
        sa_out_name = value;
    }
    if(value_path == "sa-out-num")
    {
        sa_out_num = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DefaultMetric()
{
    yang_name = "default-metric"; yang_parent_name = "af-ip-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::~DefaultMetric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::has_data() const
{
    for (std::size_t index=0; index<dm_rdr.size(); index++)
    {
        if(dm_rdr[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::has_operation() const
{
    for (std::size_t index=0; index<dm_rdr.size(); index++)
    {
        if(dm_rdr[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultMetric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dm-rdr")
    {
        for(auto const & c : dm_rdr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr>();
        c->parent = this;
        dm_rdr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dm_rdr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr()
    :
    dm_rdr{YType::uint32, "dm-rdr"}
{
    yang_name = "dm-rdr"; yang_parent_name = "default-metric";
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::~DmRdr()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::has_data() const
{
    for (std::size_t index=0; index<dm_rdr0.size(); index++)
    {
        if(dm_rdr0[index]->has_data())
            return true;
    }
    return dm_rdr.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::has_operation() const
{
    for (std::size_t index=0; index<dm_rdr0.size(); index++)
    {
        if(dm_rdr0[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dm_rdr.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dm-rdr" <<"[dm-rdr='" <<dm_rdr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DmRdr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dm_rdr.is_set || is_set(dm_rdr.operation)) leaf_name_data.push_back(dm_rdr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dm-rdr0")
    {
        for(auto const & c : dm_rdr0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0>();
        c->parent = this;
        dm_rdr0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dm_rdr0)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dm-rdr")
    {
        dm_rdr = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::DmRdr0()
    :
    dm_rdr0{YType::uint32, "dm-rdr0"},
    dm_rdr_pct{YType::uint8, "dm-rdr-pct"}
{
    yang_name = "dm-rdr0"; yang_parent_name = "dm-rdr";
}

Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::~DmRdr0()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::has_data() const
{
    return dm_rdr0.is_set
	|| dm_rdr_pct.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::has_operation() const
{
    return is_set(operation)
	|| is_set(dm_rdr0.operation)
	|| is_set(dm_rdr_pct.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dm-rdr0" <<"[dm-rdr0='" <<dm_rdr0 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DmRdr0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dm_rdr0.is_set || is_set(dm_rdr0.operation)) leaf_name_data.push_back(dm_rdr0.get_name_leafdata());
    if (dm_rdr_pct.is_set || is_set(dm_rdr_pct.operation)) leaf_name_data.push_back(dm_rdr_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DefaultMetric::DmRdr::DmRdr0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dm-rdr0")
    {
        dm_rdr0 = value;
    }
    if(value_path == "dm-rdr-pct")
    {
        dm_rdr_pct = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Distance()
    :
    eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_>())
{
    eigrp->parent = this;

    yang_name = "distance"; yang_parent_name = "af-ip-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::~Distance()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::has_data() const
{
    for (std::size_t index=0; index<rad_dis.size(); index++)
    {
        if(rad_dis[index]->has_data())
            return true;
    }
    return (eigrp !=  nullptr && eigrp->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::has_operation() const
{
    for (std::size_t index=0; index<rad_dis.size(); index++)
    {
        if(rad_dis[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (eigrp !=  nullptr && eigrp->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_>();
        }
        return eigrp;
    }

    if(child_yang_name == "rad-dis")
    {
        for(auto const & c : rad_dis)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis>();
        c->parent = this;
        rad_dis.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    for (auto const & c : rad_dis)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::RadDis()
    :
    rad_dis{YType::uint8, "rad-dis"}
{
    yang_name = "rad-dis"; yang_parent_name = "distance";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::~RadDis()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return rad_dis.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(rad_dis.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rad-dis" <<"[rad-dis='" <<rad_dis <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RadDis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rad_dis.is_set || is_set(rad_dis.operation)) leaf_name_data.push_back(rad_dis.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rad-dis")
    {
        rad_dis = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    ipv40{YType::str, "ipv40"}
{
    yang_name = "ipv4"; yang_parent_name = "rad-dis";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::has_data() const
{
    return ipv4.is_set
	|| ipv40.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv40.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv40.is_set || is_set(ipv40.operation)) leaf_name_data.push_back(ipv40.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::RadDis::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv40")
    {
        ipv40 = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::Eigrp_()
{
    yang_name = "eigrp"; yang_parent_name = "distance";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::has_data() const
{
    for (std::size_t index=0; index<di_rt.size(); index++)
    {
        if(di_rt[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::has_operation() const
{
    for (std::size_t index=0; index<di_rt.size(); index++)
    {
        if(di_rt[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "di-rt")
    {
        for(auto const & c : di_rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt>();
        c->parent = this;
        di_rt.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : di_rt)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::DiRt()
    :
    di_rt{YType::uint8, "di-rt"},
    di_rt0{YType::uint8, "di-rt0"}
{
    yang_name = "di-rt"; yang_parent_name = "eigrp";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::~DiRt()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::has_data() const
{
    return di_rt.is_set
	|| di_rt0.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::has_operation() const
{
    return is_set(operation)
	|| is_set(di_rt.operation)
	|| is_set(di_rt0.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "di-rt" <<"[di-rt='" <<di_rt <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiRt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (di_rt.is_set || is_set(di_rt.operation)) leaf_name_data.push_back(di_rt.get_name_leafdata());
    if (di_rt0.is_set || is_set(di_rt0.operation)) leaf_name_data.push_back(di_rt0.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Distance::Eigrp_::DiRt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "di-rt")
    {
        di_rt = value;
    }
    if(value_path == "di-rt0")
    {
        di_rt0 = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::DistributeList()
    :
    gateway(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway>())
	,prefix(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix>())
	,route_map(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap>())
{
    gateway->parent = this;

    prefix->parent = this;

    route_map->parent = this;

    yang_name = "distribute-list"; yang_parent_name = "af-ip-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::~DistributeList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::has_data() const
{
    for (std::size_t index=0; index<eig_filt.size(); index++)
    {
        if(eig_filt[index]->has_data())
            return true;
    }
    return (gateway !=  nullptr && gateway->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<eig_filt.size(); index++)
    {
        if(eig_filt[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (gateway !=  nullptr && gateway->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eig-filt")
    {
        for(auto const & c : eig_filt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt>();
        c->parent = this;
        eig_filt.push_back(c);
        return c;
    }

    if(child_yang_name == "gateway")
    {
        if(gateway == nullptr)
        {
            gateway = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway>();
        }
        return gateway;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eig_filt)
    {
        children[c->get_segment_path()] = c;
    }

    if(gateway != nullptr)
    {
        children["gateway"] = gateway;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::EigFilt()
    :
    eig_filt{YType::str, "eig-filt"}
    	,
    in(nullptr) // presence node
	,out(nullptr) // presence node
{
    yang_name = "eig-filt"; yang_parent_name = "distribute-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::~EigFilt()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::has_data() const
{
    return eig_filt.is_set
	|| (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::has_operation() const
{
    return is_set(operation)
	|| is_set(eig_filt.operation)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eig-filt" <<"[eig-filt='" <<eig_filt <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EigFilt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eig_filt.is_set || is_set(eig_filt.operation)) leaf_name_data.push_back(eig_filt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eig-filt")
    {
        eig_filt = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::In()
    :
    interface_name{YType::str, "interface_name"}
{
    yang_name = "in"; yang_parent_name = "eig-filt";
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::~In()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::In::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface_name")
    {
        interface_name.append(value);
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::Out()
    :
    interface_name{YType::str, "interface_name"}
{
    yang_name = "out"; yang_parent_name = "eig-filt";
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::~Out()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::EigFilt::Out::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface_name")
    {
        interface_name.append(value);
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::Gateway()
{
    yang_name = "gateway"; yang_parent_name = "distribute-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::~Gateway()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::has_data() const
{
    for (std::size_t index=0; index<gw_list.size(); index++)
    {
        if(gw_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::has_operation() const
{
    for (std::size_t index=0; index<gw_list.size(); index++)
    {
        if(gw_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gateway' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gw-list")
    {
        for(auto const & c : gw_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList>();
        c->parent = this;
        gw_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : gw_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::GwList()
    :
    gw_list{YType::str, "gw-list"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "gw-list"; yang_parent_name = "gateway";
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::~GwList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::has_data() const
{
    return gw_list.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::has_operation() const
{
    return is_set(operation)
	|| is_set(gw_list.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gw-list" <<"[gw-list='" <<gw_list <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GwList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gw_list.is_set || is_set(gw_list.operation)) leaf_name_data.push_back(gw_list.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Gateway::GwList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gw-list")
    {
        gw_list = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::Prefix()
{
    yang_name = "prefix"; yang_parent_name = "distribute-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::~Prefix()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::has_data() const
{
    for (std::size_t index=0; index<pl_name.size(); index++)
    {
        if(pl_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::has_operation() const
{
    for (std::size_t index=0; index<pl_name.size(); index++)
    {
        if(pl_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pl-name")
    {
        for(auto const & c : pl_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName>();
        c->parent = this;
        pl_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pl_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::PlName()
    :
    pl_name{YType::str, "pl-name"},
    gateway{YType::empty, "gateway"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "pl-name"; yang_parent_name = "prefix";
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::~PlName()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::has_data() const
{
    return pl_name.is_set
	|| gateway.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::has_operation() const
{
    return is_set(operation)
	|| is_set(pl_name.operation)
	|| is_set(gateway.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pl-name" <<"[pl-name='" <<pl_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PlName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pl_name.is_set || is_set(pl_name.operation)) leaf_name_data.push_back(pl_name.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.operation)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::Prefix::PlName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pl-name")
    {
        pl_name = value;
    }
    if(value_path == "gateway")
    {
        gateway = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RouteMap()
{
    yang_name = "route-map"; yang_parent_name = "distribute-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::~RouteMap()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::has_data() const
{
    for (std::size_t index=0; index<rmap_name.size(); index++)
    {
        if(rmap_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::has_operation() const
{
    for (std::size_t index=0; index<rmap_name.size(); index++)
    {
        if(rmap_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rmap-name")
    {
        for(auto const & c : rmap_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName>();
        c->parent = this;
        rmap_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rmap_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::RmapName()
    :
    rmap_name{YType::str, "rmap-name"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "rmap-name"; yang_parent_name = "route-map";
}

Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::~RmapName()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::has_data() const
{
    return rmap_name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::has_operation() const
{
    return is_set(operation)
	|| is_set(rmap_name.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rmap-name" <<"[rmap-name='" <<rmap_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RmapName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rmap_name.is_set || is_set(rmap_name.operation)) leaf_name_data.push_back(rmap_name.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::DistributeList::RouteMap::RmapName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rmap-name")
    {
        rmap_name = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Eigrp_()
    :
    router_id{YType::str, "router-id"}
    	,
    stub(nullptr) // presence node
{
    yang_name = "eigrp"; yang_parent_name = "af-ip-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::has_data() const
{
    return router_id.is_set
	|| (stub !=  nullptr && stub->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::has_operation() const
{
    return is_set(operation)
	|| is_set(router_id.operation)
	|| (stub !=  nullptr && stub->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stub")
    {
        if(stub == nullptr)
        {
            stub = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub>();
        }
        return stub;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stub != nullptr)
    {
        children["stub"] = stub;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::Stub()
    :
    connected{YType::empty, "connected"},
    leak_map{YType::str, "leak-map"},
    receive_only{YType::empty, "receive-only"},
    redistributed{YType::empty, "redistributed"},
    static_{YType::empty, "static"},
    summary{YType::empty, "summary"}
{
    yang_name = "stub"; yang_parent_name = "eigrp";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::~Stub()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::has_data() const
{
    return connected.is_set
	|| leak_map.is_set
	|| receive_only.is_set
	|| redistributed.is_set
	|| static_.is_set
	|| summary.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::has_operation() const
{
    return is_set(operation)
	|| is_set(connected.operation)
	|| is_set(leak_map.operation)
	|| is_set(receive_only.operation)
	|| is_set(redistributed.operation)
	|| is_set(static_.operation)
	|| is_set(summary.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stub' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.operation)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (leak_map.is_set || is_set(leak_map.operation)) leaf_name_data.push_back(leak_map.get_name_leafdata());
    if (receive_only.is_set || is_set(receive_only.operation)) leaf_name_data.push_back(receive_only.get_name_leafdata());
    if (redistributed.is_set || is_set(redistributed.operation)) leaf_name_data.push_back(redistributed.get_name_leafdata());
    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (summary.is_set || is_set(summary.operation)) leaf_name_data.push_back(summary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Eigrp_::Stub::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connected")
    {
        connected = value;
    }
    if(value_path == "leak-map")
    {
        leak_map = value;
    }
    if(value_path == "receive-only")
    {
        receive_only = value;
    }
    if(value_path == "redistributed")
    {
        redistributed = value;
    }
    if(value_path == "static")
    {
        static_ = value;
    }
    if(value_path == "summary")
    {
        summary = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Metric::Metric()
    :
    maximum_hops{YType::uint8, "maximum-hops"},
    weights{YType::uint8, "weights"}
{
    yang_name = "metric"; yang_parent_name = "af-ip-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Metric::~Metric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Metric::has_data() const
{
    return maximum_hops.is_set
	|| weights.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_hops.operation)
	|| is_set(weights.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_hops.is_set || is_set(maximum_hops.operation)) leaf_name_data.push_back(maximum_hops.get_name_leafdata());
    if (weights.is_set || is_set(weights.operation)) leaf_name_data.push_back(weights.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-hops")
    {
        maximum_hops = value;
    }
    if(value_path == "weights")
    {
        weights = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Neighbor()
{
    yang_name = "neighbor"; yang_parent_name = "af-ip-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::~Neighbor()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"}
    	,
    interface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface>())
{
    interface->parent = this;

    yang_name = "ipv4"; yang_parent_name = "neighbor";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::has_data() const
{
    return ipv4.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "ipv4";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::~Interface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Neighbor::Ipv4::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Network::Network()
    :
    number{YType::str, "number"},
    wild_card{YType::str, "wild-card"}
{
    yang_name = "network"; yang_parent_name = "af-ip-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Network::~Network()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Network::has_data() const
{
    return number.is_set
	|| wild_card.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(wild_card.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (wild_card.is_set || is_set(wild_card.operation)) leaf_name_data.push_back(wild_card.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "wild-card")
    {
        wild_card = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OffsetList()
{
    yang_name = "offset-list"; yang_parent_name = "af-ip-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::~OffsetList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::has_data() const
{
    for (std::size_t index=0; index<nsr_list.size(); index++)
    {
        if(nsr_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ol_acl.size(); index++)
    {
        if(ol_acl[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::has_operation() const
{
    for (std::size_t index=0; index<nsr_list.size(); index++)
    {
        if(nsr_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ol_acl.size(); index++)
    {
        if(ol_acl[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "offset-list";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OffsetList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-list")
    {
        for(auto const & c : nsr_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList>();
        c->parent = this;
        nsr_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ol-acl")
    {
        for(auto const & c : ol_acl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl>();
        c->parent = this;
        ol_acl.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nsr_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ol_acl)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::NsrList()
    :
    nsr_list{YType::uint16, "nsr-list"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "nsr-list"; yang_parent_name = "offset-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::~NsrList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::has_data() const
{
    return nsr_list.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_list.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-list" <<"[nsr-list='" <<nsr_list <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_list.is_set || is_set(nsr_list.operation)) leaf_name_data.push_back(nsr_list.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::NsrList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-list")
    {
        nsr_list = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::OlAcl()
    :
    ol_acl{YType::str, "ol-acl"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "ol-acl"; yang_parent_name = "offset-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::~OlAcl()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::has_data() const
{
    return ol_acl.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::has_operation() const
{
    return is_set(operation)
	|| is_set(ol_acl.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ol-acl" <<"[ol-acl='" <<ol_acl <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OlAcl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ol_acl.is_set || is_set(ol_acl.operation)) leaf_name_data.push_back(ol_acl.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::OffsetList::OlAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ol-acl")
    {
        ol_acl = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Redistribute()
    :
    eigrp{YType::uint16, "eigrp"},
    ospf{YType::uint16, "ospf"}
    	,
    connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,lisp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
	,vrf(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf>())
{
    vrf->parent = this;

    yang_name = "redistribute"; yang_parent_name = "af-ip-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::~Redistribute()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    return eigrp.is_set
	|| ospf.is_set
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(eigrp.operation)
	|| is_set(ospf.operation)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.operation)) leaf_name_data.push_back(ospf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static_>();
        }
        return static_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "ospf")
    {
        ospf = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Bgp()
    :
    rdr_as{YType::str, "rdr-as"},
    rd_lesser_1_period_0_xx_period_yy_greater_{YType::empty, "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_"},
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric>())
{
    metric->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::has_data() const
{
    return rdr_as.is_set
	|| rd_lesser_1_period_0_xx_period_yy_greater_.is_set
	|| route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(rdr_as.operation)
	|| is_set(rd_lesser_1_period_0_xx_period_yy_greater_.operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[rdr-as='" <<rdr_as <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rdr_as.is_set || is_set(rdr_as.operation)) leaf_name_data.push_back(rdr_as.get_name_leafdata());
    if (rd_lesser_1_period_0_xx_period_yy_greater_.is_set || is_set(rd_lesser_1_period_0_xx_period_yy_greater_.operation)) leaf_name_data.push_back(rd_lesser_1_period_0_xx_period_yy_greater_.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rdr-as")
    {
        rdr_as = value;
    }
    if(value_path == "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        rd_lesser_1_period_0_xx_period_yy_greater_ = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::Metric()
    :
    bandwith{YType::uint32, "bandwith"},
    delay{YType::uint32, "delay"},
    effective{YType::uint8, "Effective"},
    mtu{YType::uint16, "mtu"},
    reliability{YType::uint8, "reliability"}
{
    yang_name = "metric"; yang_parent_name = "bgp";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::~Metric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::has_data() const
{
    return bandwith.is_set
	|| delay.is_set
	|| effective.is_set
	|| mtu.is_set
	|| reliability.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwith.operation)
	|| is_set(delay.operation)
	|| is_set(effective.operation)
	|| is_set(mtu.operation)
	|| is_set(reliability.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwith.is_set || is_set(bandwith.operation)) leaf_name_data.push_back(bandwith.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (effective.is_set || is_set(effective.operation)) leaf_name_data.push_back(effective.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.operation)) leaf_name_data.push_back(reliability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Bgp::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwith")
    {
        bandwith = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "Effective")
    {
        effective = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "reliability")
    {
        reliability = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::Connected()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "connected"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connected' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Connected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::Isis()
    :
    is_tag{YType::str, "is-tag"},
    level_1{YType::empty, "level-1"},
    level_1_2{YType::empty, "level-1-2"},
    level_2{YType::empty, "level-2"},
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "isis"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::~Isis()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::has_data() const
{
    return is_tag.is_set
	|| level_1.is_set
	|| level_1_2.is_set
	|| level_2.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(is_tag.operation)
	|| is_set(level_1.operation)
	|| is_set(level_1_2.operation)
	|| is_set(level_2.operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_tag.is_set || is_set(is_tag.operation)) leaf_name_data.push_back(is_tag.get_name_leafdata());
    if (level_1.is_set || is_set(level_1.operation)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_1_2.is_set || is_set(level_1_2.operation)) leaf_name_data.push_back(level_1_2.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.operation)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-tag")
    {
        is_tag = value;
    }
    if(value_path == "level-1")
    {
        level_1 = value;
    }
    if(value_path == "level-1-2")
    {
        level_1_2 = value;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::Lisp()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "lisp"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lisp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Lisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::Mobile()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "mobile"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mobile' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Mobile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::Odr()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "odr"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Odr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Odr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::Rip()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "rip"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::~Rip()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static_::Static_()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "static"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static_::~Static_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static_::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::Vrf()
    :
    global{YType::empty, "global"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::~Vrf()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::has_data() const
{
    return global.is_set
	|| name.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(global.operation)
	|| is_set(name.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Redistribute::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::SummaryMetric()
    :
    a_period_b_period_c_period_d_slash_nn{YType::empty, "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn"}
{
    yang_name = "summary-metric"; yang_parent_name = "af-ip-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::~SummaryMetric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return a_period_b_period_c_period_d_slash_nn.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(a_period_b_period_c_period_d_slash_nn.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryMetric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a_period_b_period_c_period_d_slash_nn.is_set || is_set(a_period_b_period_c_period_d_slash_nn.operation)) leaf_name_data.push_back(a_period_b_period_c_period_d_slash_nn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
    {
        a_period_b_period_c_period_d_slash_nn = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{
    yang_name = "ipv4"; yang_parent_name = "summary-metric";
}

Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::has_data() const
{
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(mask.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::SummaryMetric::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Timers()
    :
    active_time(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime>())
	,graceful_restart(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart>())
	,nsf(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf>())
{
    active_time->parent = this;

    graceful_restart->parent = this;

    nsf->parent = this;

    yang_name = "timers"; yang_parent_name = "af-ip-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::~Timers()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::has_data() const
{
    return (active_time !=  nullptr && active_time->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (nsf !=  nullptr && nsf->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::has_operation() const
{
    return is_set(operation)
	|| (active_time !=  nullptr && active_time->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-time")
    {
        if(active_time == nullptr)
        {
            active_time = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime>();
        }
        return active_time;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf>();
        }
        return nsf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_time != nullptr)
    {
        children["active-time"] = active_time;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(nsf != nullptr)
    {
        children["nsf"] = nsf;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::ActiveTime()
    :
    atimer{YType::uint16, "atimer"},
    disabled{YType::empty, "disabled"}
{
    yang_name = "active-time"; yang_parent_name = "timers";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::~ActiveTime()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::has_data() const
{
    return atimer.is_set
	|| disabled.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::has_operation() const
{
    return is_set(operation)
	|| is_set(atimer.operation)
	|| is_set(disabled.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-time";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveTime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atimer.is_set || is_set(atimer.operation)) leaf_name_data.push_back(atimer.get_name_leafdata());
    if (disabled.is_set || is_set(disabled.operation)) leaf_name_data.push_back(disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::ActiveTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atimer")
    {
        atimer = value;
    }
    if(value_path == "disabled")
    {
        disabled = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::GracefulRestart()
    :
    purge_time{YType::empty, "purge-time"}
{
    yang_name = "graceful-restart"; yang_parent_name = "timers";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::has_data() const
{
    return purge_time.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(purge_time.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (purge_time.is_set || is_set(purge_time.operation)) leaf_name_data.push_back(purge_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "purge-time")
    {
        purge_time = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::Nsf()
    :
    converge{YType::empty, "converge"},
    signal{YType::empty, "signal"}
{
    yang_name = "nsf"; yang_parent_name = "timers";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::~Nsf()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::has_data() const
{
    return converge.is_set
	|| signal.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(converge.operation)
	|| is_set(signal.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nsf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (converge.is_set || is_set(converge.operation)) leaf_name_data.push_back(converge.get_name_leafdata());
    if (signal.is_set || is_set(signal.operation)) leaf_name_data.push_back(signal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Timers::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "converge")
    {
        converge = value;
    }
    if(value_path == "signal")
    {
        signal = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::TrafficShare()
    :
    balanced{YType::empty, "balanced"}
    	,
    min(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min>())
{
    min->parent = this;

    yang_name = "traffic-share"; yang_parent_name = "af-ip-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::~TrafficShare()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::has_data() const
{
    return balanced.is_set
	|| (min !=  nullptr && min->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::has_operation() const
{
    return is_set(operation)
	|| is_set(balanced.operation)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficShare' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (balanced.is_set || is_set(balanced.operation)) leaf_name_data.push_back(balanced.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min != nullptr)
    {
        children["min"] = min;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "balanced")
    {
        balanced = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::Min()
    :
    across_interfaces{YType::empty, "across-interfaces"}
{
    yang_name = "min"; yang_parent_name = "traffic-share";
}

Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::~Min()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::has_data() const
{
    return across_interfaces.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::has_operation() const
{
    return is_set(operation)
	|| is_set(across_interfaces.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Min' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (across_interfaces.is_set || is_set(across_interfaces.operation)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::TrafficShare::Min::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Topology()
    :
    base(nullptr) // presence node
{
    yang_name = "topology"; yang_parent_name = "af-ip-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::~Topology()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::has_data() const
{
    return (base !=  nullptr && base->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::has_operation() const
{
    return is_set(operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Base()
    :
    distance(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance>())
	,distribute_list(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList>())
	,redistribute(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute>())
{
    distance->parent = this;

    distribute_list->parent = this;

    redistribute->parent = this;

    yang_name = "base"; yang_parent_name = "topology";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::~Base()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::has_data() const
{
    return (distance !=  nullptr && distance->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::has_operation() const
{
    return is_set(operation)
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute>();
        }
        return redistribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Distance()
    :
    eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_>())
{
    eigrp->parent = this;

    yang_name = "distance"; yang_parent_name = "base";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::~Distance()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::has_data() const
{
    return (eigrp !=  nullptr && eigrp->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::has_operation() const
{
    return is_set(operation)
	|| (eigrp !=  nullptr && eigrp->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_>();
        }
        return eigrp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::Eigrp_()
{
    yang_name = "eigrp"; yang_parent_name = "distance";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::has_data() const
{
    for (std::size_t index=0; index<distance_list.size(); index++)
    {
        if(distance_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::has_operation() const
{
    for (std::size_t index=0; index<distance_list.size(); index++)
    {
        if(distance_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distance-list")
    {
        for(auto const & c : distance_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList>();
        c->parent = this;
        distance_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : distance_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::DistanceList()
    :
    internal_route{YType::uint8, "internal-route"},
    external_route{YType::uint8, "external-route"}
{
    yang_name = "distance-list"; yang_parent_name = "eigrp";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::~DistanceList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::has_data() const
{
    return internal_route.is_set
	|| external_route.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_route.operation)
	|| is_set(external_route.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance-list" <<"[internal-route='" <<internal_route <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistanceList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_route.is_set || is_set(internal_route.operation)) leaf_name_data.push_back(internal_route.get_name_leafdata());
    if (external_route.is_set || is_set(external_route.operation)) leaf_name_data.push_back(external_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Distance::Eigrp_::DistanceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-route")
    {
        internal_route = value;
    }
    if(value_path == "external-route")
    {
        external_route = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::DistributeList()
{
    yang_name = "distribute-list"; yang_parent_name = "base";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::~DistributeList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::has_data() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        for(auto const & c : route_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : route_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::PrefixList()
    :
    prefix_list{YType::str, "prefix-list"},
    gateway{YType::empty, "gateway"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "prefix-list"; yang_parent_name = "distribute-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::~PrefixList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::has_data() const
{
    return prefix_list.is_set
	|| gateway.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list.operation)
	|| is_set(gateway.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix-list='" <<prefix_list <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.operation)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::PrefixList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
    if(value_path == "gateway")
    {
        gateway = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::RouteMap()
    :
    name{YType::str, "name"},
    in{YType::str, "in"},
    out{YType::str, "out"}
{
    yang_name = "route-map"; yang_parent_name = "distribute-list";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::~RouteMap()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::has_data() const
{
    return name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::DistributeList::RouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Redistribute()
    :
    connected{YType::empty, "connected"}
    	,
    eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_>())
	,static_(nullptr) // presence node
{
    eigrp->parent = this;

    yang_name = "redistribute"; yang_parent_name = "base";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::~Redistribute()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::has_data() const
{
    return connected.is_set
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::has_operation() const
{
    return is_set(operation)
	|| is_set(connected.operation)
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.operation)) leaf_name_data.push_back(connected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_>();
        }
        return eigrp;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connected")
    {
        connected = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::Eigrp_()
{
    yang_name = "eigrp"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::has_data() const
{
    for (std::size_t index=0; index<as_list.size(); index++)
    {
        if(as_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::has_operation() const
{
    for (std::size_t index=0; index<as_list.size(); index++)
    {
        if(as_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-list")
    {
        for(auto const & c : as_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList>();
        c->parent = this;
        as_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::AsList()
    :
    autonomous_system{YType::uint16, "autonomous-system"}
{
    yang_name = "as-list"; yang_parent_name = "eigrp";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::~AsList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::has_data() const
{
    return autonomous_system.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::has_operation() const
{
    return is_set(operation)
	|| is_set(autonomous_system.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-list" <<"[autonomous-system='" <<autonomous_system <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system.is_set || is_set(autonomous_system.operation)) leaf_name_data.push_back(autonomous_system.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Eigrp_::AsList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "autonomous-system")
    {
        autonomous_system = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static_::Static_()
{
    yang_name = "static"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static_::~Static_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static_::has_data() const
{
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static_::has_operation() const
{
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpList::Topology::Base::Redistribute::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfIpVrfList()
    :
    vrf{YType::str, "vrf"},
    auto_summary{YType::empty, "auto-summary"},
    autonomous_system{YType::uint16, "autonomous-system"},
    maximum_paths{YType::uint8, "maximum-paths"},
    nsf{YType::empty, "nsf"},
    shutdown{YType::empty, "shutdown"},
    unicast_multicast{YType::enumeration, "unicast-multicast"},
    variance{YType::uint8, "variance"}
    	,
    bfd(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd>())
	,default_information(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation>())
	,default_metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric>())
	,distance(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance>())
	,distribute_list(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList>())
	,eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_>())
	,metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric>())
	,neighbor(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor>())
	,offset_list(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList>())
	,redistribute(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute>())
	,summary_metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric>())
	,timers(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers>())
	,topology(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology>())
	,traffic_share(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare>())
{
    bfd->parent = this;

    default_information->parent = this;

    default_metric->parent = this;

    distance->parent = this;

    distribute_list->parent = this;

    eigrp->parent = this;

    metric->parent = this;

    neighbor->parent = this;

    offset_list->parent = this;

    redistribute->parent = this;

    summary_metric->parent = this;

    timers->parent = this;

    topology->parent = this;

    traffic_share->parent = this;

    yang_name = "af-ip-vrf-list"; yang_parent_name = "address-family";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::~AfIpVrfList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::has_data() const
{
    for (std::size_t index=0; index<af_interface.size(); index++)
    {
        if(af_interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return vrf.is_set
	|| auto_summary.is_set
	|| autonomous_system.is_set
	|| maximum_paths.is_set
	|| nsf.is_set
	|| shutdown.is_set
	|| unicast_multicast.is_set
	|| variance.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (default_metric !=  nullptr && default_metric->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (offset_list !=  nullptr && offset_list->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (summary_metric !=  nullptr && summary_metric->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (topology !=  nullptr && topology->has_data())
	|| (traffic_share !=  nullptr && traffic_share->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::has_operation() const
{
    for (std::size_t index=0; index<af_interface.size(); index++)
    {
        if(af_interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(vrf.operation)
	|| is_set(auto_summary.operation)
	|| is_set(autonomous_system.operation)
	|| is_set(maximum_paths.operation)
	|| is_set(nsf.operation)
	|| is_set(shutdown.operation)
	|| is_set(unicast_multicast.operation)
	|| is_set(variance.operation)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (default_metric !=  nullptr && default_metric->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (offset_list !=  nullptr && offset_list->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (summary_metric !=  nullptr && summary_metric->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (topology !=  nullptr && topology->has_operation())
	|| (traffic_share !=  nullptr && traffic_share->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-ip-vrf-list" <<"[vrf='" <<vrf <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfIpVrfList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.operation)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (autonomous_system.is_set || is_set(autonomous_system.operation)) leaf_name_data.push_back(autonomous_system.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.operation)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (unicast_multicast.is_set || is_set(unicast_multicast.operation)) leaf_name_data.push_back(unicast_multicast.get_name_leafdata());
    if (variance.is_set || is_set(variance.operation)) leaf_name_data.push_back(variance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af-interface")
    {
        for(auto const & c : af_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface>();
        c->parent = this;
        af_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "default-metric")
    {
        if(default_metric == nullptr)
        {
            default_metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric>();
        }
        return default_metric;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_>();
        }
        return eigrp;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "offset-list")
    {
        if(offset_list == nullptr)
        {
            offset_list = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList>();
        }
        return offset_list;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "summary-metric")
    {
        if(summary_metric == nullptr)
        {
            summary_metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric>();
        }
        return summary_metric;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "topology")
    {
        if(topology == nullptr)
        {
            topology = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology>();
        }
        return topology;
    }

    if(child_yang_name == "traffic-share")
    {
        if(traffic_share == nullptr)
        {
            traffic_share = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare>();
        }
        return traffic_share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af_interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(default_metric != nullptr)
    {
        children["default-metric"] = default_metric;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(offset_list != nullptr)
    {
        children["offset-list"] = offset_list;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(summary_metric != nullptr)
    {
        children["summary-metric"] = summary_metric;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(topology != nullptr)
    {
        children["topology"] = topology;
    }

    if(traffic_share != nullptr)
    {
        children["traffic-share"] = traffic_share;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
    if(value_path == "auto-summary")
    {
        auto_summary = value;
    }
    if(value_path == "autonomous-system")
    {
        autonomous_system = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
    if(value_path == "nsf")
    {
        nsf = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "unicast-multicast")
    {
        unicast_multicast = value;
    }
    if(value_path == "variance")
    {
        variance = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::AfInterface()
    :
    name{YType::str, "name"},
    bandwidth_percent{YType::uint32, "bandwidth-percent"},
    hello_interval{YType::uint16, "hello-interval"},
    hold_time{YType::uint16, "hold-time"},
    passive_interface{YType::empty, "passive-interface"},
    split_horizon{YType::boolean, "split-horizon"}
    	,
    authentication(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication>())
	,summary_address(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress>())
{
    authentication->parent = this;

    summary_address->parent = this;

    yang_name = "af-interface"; yang_parent_name = "af-ip-vrf-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::~AfInterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::has_data() const
{
    return name.is_set
	|| bandwidth_percent.is_set
	|| hello_interval.is_set
	|| hold_time.is_set
	|| passive_interface.is_set
	|| split_horizon.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(bandwidth_percent.operation)
	|| is_set(hello_interval.operation)
	|| is_set(hold_time.operation)
	|| is_set(passive_interface.operation)
	|| is_set(split_horizon.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfInterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (bandwidth_percent.is_set || is_set(bandwidth_percent.operation)) leaf_name_data.push_back(bandwidth_percent.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.operation)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.operation)) leaf_name_data.push_back(split_horizon.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress>();
        }
        return summary_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(summary_address != nullptr)
    {
        children["summary-address"] = summary_address;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"}
    	,
    mode(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode>())
{
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "af-interface";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::~Authentication()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::has_data() const
{
    return key_chain.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key_chain.operation)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::Mode()
    :
    md5{YType::empty, "md5"}
    	,
    hmac_sha_256(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256>())
{
    hmac_sha_256->parent = this;

    yang_name = "mode"; yang_parent_name = "authentication";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::~Mode()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::has_data() const
{
    return md5.is_set
	|| (hmac_sha_256 !=  nullptr && hmac_sha_256->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(md5.operation)
	|| (hmac_sha_256 !=  nullptr && hmac_sha_256->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.operation)) leaf_name_data.push_back(md5.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hmac-sha-256")
    {
        if(hmac_sha_256 == nullptr)
        {
            hmac_sha_256 = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256>();
        }
        return hmac_sha_256;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hmac_sha_256 != nullptr)
    {
        children["hmac-sha-256"] = hmac_sha_256;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "md5")
    {
        md5 = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::HmacSha256()
    :
    auth_key{YType::str, "auth-key"},
    auth_type{YType::uint8, "auth-type"}
{
    yang_name = "hmac-sha-256"; yang_parent_name = "mode";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::~HmacSha256()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::has_data() const
{
    return auth_key.is_set
	|| auth_type.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::has_operation() const
{
    return is_set(operation)
	|| is_set(auth_key.operation)
	|| is_set(auth_type.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hmac-sha-256";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HmacSha256' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_key.is_set || is_set(auth_key.operation)) leaf_name_data.push_back(auth_key.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.operation)) leaf_name_data.push_back(auth_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::Authentication::Mode::HmacSha256::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auth-key")
    {
        auth_key = value;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::SummaryAddress()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{
    yang_name = "summary-address"; yang_parent_name = "af-interface";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::~SummaryAddress()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::has_data() const
{
    return address.is_set
	|| mask.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(mask.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::AfInterface::SummaryAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Bfd()
    :
    all_interfaces{YType::empty, "all-interfaces"}
    	,
    interface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface>())
{
    interface->parent = this;

    yang_name = "bfd"; yang_parent_name = "af-ip-vrf-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::~Bfd()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::has_data() const
{
    return all_interfaces.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(all_interfaces.operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.operation)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "bfd";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::~Interface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Bfd::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::DefaultInformation()
    :
    in(nullptr) // presence node
	,out(nullptr) // presence node
{
    yang_name = "default-information"; yang_parent_name = "af-ip-vrf-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::has_operation() const
{
    return is_set(operation)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultInformation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::In()
    :
    sa_name{YType::str, "sa-name"},
    sa_num{YType::uint16, "sa-num"}
{
    yang_name = "in"; yang_parent_name = "default-information";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::~In()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::has_data() const
{
    return sa_name.is_set
	|| sa_num.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::has_operation() const
{
    return is_set(operation)
	|| is_set(sa_name.operation)
	|| is_set(sa_num.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_name.is_set || is_set(sa_name.operation)) leaf_name_data.push_back(sa_name.get_name_leafdata());
    if (sa_num.is_set || is_set(sa_num.operation)) leaf_name_data.push_back(sa_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::In::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sa-name")
    {
        sa_name = value;
    }
    if(value_path == "sa-num")
    {
        sa_num = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::Out()
    :
    sa_out_name{YType::str, "sa-out-name"},
    sa_out_num{YType::uint16, "sa-out-num"}
{
    yang_name = "out"; yang_parent_name = "default-information";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::~Out()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::has_data() const
{
    return sa_out_name.is_set
	|| sa_out_num.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::has_operation() const
{
    return is_set(operation)
	|| is_set(sa_out_name.operation)
	|| is_set(sa_out_num.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa_out_name.is_set || is_set(sa_out_name.operation)) leaf_name_data.push_back(sa_out_name.get_name_leafdata());
    if (sa_out_num.is_set || is_set(sa_out_num.operation)) leaf_name_data.push_back(sa_out_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultInformation::Out::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sa-out-name")
    {
        sa_out_name = value;
    }
    if(value_path == "sa-out-num")
    {
        sa_out_num = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DefaultMetric()
{
    yang_name = "default-metric"; yang_parent_name = "af-ip-vrf-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::~DefaultMetric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::has_data() const
{
    for (std::size_t index=0; index<dm_rdr.size(); index++)
    {
        if(dm_rdr[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::has_operation() const
{
    for (std::size_t index=0; index<dm_rdr.size(); index++)
    {
        if(dm_rdr[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultMetric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dm-rdr")
    {
        for(auto const & c : dm_rdr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr>();
        c->parent = this;
        dm_rdr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dm_rdr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr()
    :
    dm_rdr{YType::uint32, "dm-rdr"}
{
    yang_name = "dm-rdr"; yang_parent_name = "default-metric";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::~DmRdr()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::has_data() const
{
    for (std::size_t index=0; index<dm_rdr0.size(); index++)
    {
        if(dm_rdr0[index]->has_data())
            return true;
    }
    return dm_rdr.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::has_operation() const
{
    for (std::size_t index=0; index<dm_rdr0.size(); index++)
    {
        if(dm_rdr0[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dm_rdr.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dm-rdr" <<"[dm-rdr='" <<dm_rdr <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DmRdr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dm_rdr.is_set || is_set(dm_rdr.operation)) leaf_name_data.push_back(dm_rdr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dm-rdr0")
    {
        for(auto const & c : dm_rdr0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0>();
        c->parent = this;
        dm_rdr0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dm_rdr0)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dm-rdr")
    {
        dm_rdr = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::DmRdr0()
    :
    dm_rdr0{YType::uint32, "dm-rdr0"},
    dm_rdr_pct{YType::uint8, "dm-rdr-pct"}
{
    yang_name = "dm-rdr0"; yang_parent_name = "dm-rdr";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::~DmRdr0()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::has_data() const
{
    return dm_rdr0.is_set
	|| dm_rdr_pct.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::has_operation() const
{
    return is_set(operation)
	|| is_set(dm_rdr0.operation)
	|| is_set(dm_rdr_pct.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dm-rdr0" <<"[dm-rdr0='" <<dm_rdr0 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DmRdr0' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dm_rdr0.is_set || is_set(dm_rdr0.operation)) leaf_name_data.push_back(dm_rdr0.get_name_leafdata());
    if (dm_rdr_pct.is_set || is_set(dm_rdr_pct.operation)) leaf_name_data.push_back(dm_rdr_pct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DefaultMetric::DmRdr::DmRdr0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dm-rdr0")
    {
        dm_rdr0 = value;
    }
    if(value_path == "dm-rdr-pct")
    {
        dm_rdr_pct = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Distance()
    :
    eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_>())
{
    eigrp->parent = this;

    yang_name = "distance"; yang_parent_name = "af-ip-vrf-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::~Distance()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::has_data() const
{
    for (std::size_t index=0; index<rad_dis.size(); index++)
    {
        if(rad_dis[index]->has_data())
            return true;
    }
    return (eigrp !=  nullptr && eigrp->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::has_operation() const
{
    for (std::size_t index=0; index<rad_dis.size(); index++)
    {
        if(rad_dis[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (eigrp !=  nullptr && eigrp->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_>();
        }
        return eigrp;
    }

    if(child_yang_name == "rad-dis")
    {
        for(auto const & c : rad_dis)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis>();
        c->parent = this;
        rad_dis.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    for (auto const & c : rad_dis)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::RadDis()
    :
    rad_dis{YType::uint8, "rad-dis"}
{
    yang_name = "rad-dis"; yang_parent_name = "distance";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::~RadDis()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return rad_dis.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(rad_dis.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rad-dis" <<"[rad-dis='" <<rad_dis <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RadDis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rad_dis.is_set || is_set(rad_dis.operation)) leaf_name_data.push_back(rad_dis.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rad-dis")
    {
        rad_dis = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    ipv40{YType::str, "ipv40"}
{
    yang_name = "ipv4"; yang_parent_name = "rad-dis";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::has_data() const
{
    return ipv4.is_set
	|| ipv40.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv40.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv40.is_set || is_set(ipv40.operation)) leaf_name_data.push_back(ipv40.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::RadDis::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv40")
    {
        ipv40 = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::Eigrp_()
{
    yang_name = "eigrp"; yang_parent_name = "distance";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::has_data() const
{
    for (std::size_t index=0; index<di_rt.size(); index++)
    {
        if(di_rt[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::has_operation() const
{
    for (std::size_t index=0; index<di_rt.size(); index++)
    {
        if(di_rt[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "di-rt")
    {
        for(auto const & c : di_rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt>();
        c->parent = this;
        di_rt.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : di_rt)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::DiRt()
    :
    di_rt{YType::uint8, "di-rt"},
    di_rt0{YType::uint8, "di-rt0"}
{
    yang_name = "di-rt"; yang_parent_name = "eigrp";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::~DiRt()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::has_data() const
{
    return di_rt.is_set
	|| di_rt0.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::has_operation() const
{
    return is_set(operation)
	|| is_set(di_rt.operation)
	|| is_set(di_rt0.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "di-rt" <<"[di-rt='" <<di_rt <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiRt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (di_rt.is_set || is_set(di_rt.operation)) leaf_name_data.push_back(di_rt.get_name_leafdata());
    if (di_rt0.is_set || is_set(di_rt0.operation)) leaf_name_data.push_back(di_rt0.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Distance::Eigrp_::DiRt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "di-rt")
    {
        di_rt = value;
    }
    if(value_path == "di-rt0")
    {
        di_rt0 = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::DistributeList()
    :
    gateway(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway>())
	,prefix(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix>())
	,route_map(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap>())
{
    gateway->parent = this;

    prefix->parent = this;

    route_map->parent = this;

    yang_name = "distribute-list"; yang_parent_name = "af-ip-vrf-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::~DistributeList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::has_data() const
{
    for (std::size_t index=0; index<eig_filt.size(); index++)
    {
        if(eig_filt[index]->has_data())
            return true;
    }
    return (gateway !=  nullptr && gateway->has_data())
	|| (prefix !=  nullptr && prefix->has_data())
	|| (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<eig_filt.size(); index++)
    {
        if(eig_filt[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (gateway !=  nullptr && gateway->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eig-filt")
    {
        for(auto const & c : eig_filt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt>();
        c->parent = this;
        eig_filt.push_back(c);
        return c;
    }

    if(child_yang_name == "gateway")
    {
        if(gateway == nullptr)
        {
            gateway = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway>();
        }
        return gateway;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eig_filt)
    {
        children[c->get_segment_path()] = c;
    }

    if(gateway != nullptr)
    {
        children["gateway"] = gateway;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::EigFilt()
    :
    eig_filt{YType::str, "eig-filt"}
    	,
    in(nullptr) // presence node
	,out(nullptr) // presence node
{
    yang_name = "eig-filt"; yang_parent_name = "distribute-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::~EigFilt()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::has_data() const
{
    return eig_filt.is_set
	|| (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::has_operation() const
{
    return is_set(operation)
	|| is_set(eig_filt.operation)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eig-filt" <<"[eig-filt='" <<eig_filt <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EigFilt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eig_filt.is_set || is_set(eig_filt.operation)) leaf_name_data.push_back(eig_filt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eig-filt")
    {
        eig_filt = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::In()
    :
    interface_name{YType::str, "interface_name"}
{
    yang_name = "in"; yang_parent_name = "eig-filt";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::~In()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::In::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface_name")
    {
        interface_name.append(value);
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::Out()
    :
    interface_name{YType::str, "interface_name"}
{
    yang_name = "out"; yang_parent_name = "eig-filt";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::~Out()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::EigFilt::Out::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface_name")
    {
        interface_name.append(value);
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::Gateway()
{
    yang_name = "gateway"; yang_parent_name = "distribute-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::~Gateway()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::has_data() const
{
    for (std::size_t index=0; index<gw_list.size(); index++)
    {
        if(gw_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::has_operation() const
{
    for (std::size_t index=0; index<gw_list.size(); index++)
    {
        if(gw_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gateway";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gateway' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gw-list")
    {
        for(auto const & c : gw_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList>();
        c->parent = this;
        gw_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : gw_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::GwList()
    :
    gw_list{YType::str, "gw-list"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "gw-list"; yang_parent_name = "gateway";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::~GwList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::has_data() const
{
    return gw_list.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::has_operation() const
{
    return is_set(operation)
	|| is_set(gw_list.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gw-list" <<"[gw-list='" <<gw_list <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GwList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gw_list.is_set || is_set(gw_list.operation)) leaf_name_data.push_back(gw_list.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Gateway::GwList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gw-list")
    {
        gw_list = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::Prefix()
{
    yang_name = "prefix"; yang_parent_name = "distribute-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::~Prefix()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::has_data() const
{
    for (std::size_t index=0; index<pl_name.size(); index++)
    {
        if(pl_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::has_operation() const
{
    for (std::size_t index=0; index<pl_name.size(); index++)
    {
        if(pl_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pl-name")
    {
        for(auto const & c : pl_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName>();
        c->parent = this;
        pl_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pl_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::PlName()
    :
    pl_name{YType::str, "pl-name"},
    gateway{YType::empty, "gateway"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "pl-name"; yang_parent_name = "prefix";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::~PlName()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::has_data() const
{
    return pl_name.is_set
	|| gateway.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::has_operation() const
{
    return is_set(operation)
	|| is_set(pl_name.operation)
	|| is_set(gateway.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pl-name" <<"[pl-name='" <<pl_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PlName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pl_name.is_set || is_set(pl_name.operation)) leaf_name_data.push_back(pl_name.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.operation)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::Prefix::PlName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pl-name")
    {
        pl_name = value;
    }
    if(value_path == "gateway")
    {
        gateway = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::RouteMap()
{
    yang_name = "route-map"; yang_parent_name = "distribute-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::~RouteMap()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::has_data() const
{
    for (std::size_t index=0; index<rmap_name.size(); index++)
    {
        if(rmap_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::has_operation() const
{
    for (std::size_t index=0; index<rmap_name.size(); index++)
    {
        if(rmap_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rmap-name")
    {
        for(auto const & c : rmap_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::RmapName>();
        c->parent = this;
        rmap_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rmap_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::RmapName::RmapName()
    :
    rmap_name{YType::str, "rmap-name"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "rmap-name"; yang_parent_name = "route-map";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::RmapName::~RmapName()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::RmapName::has_data() const
{
    return rmap_name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::RmapName::has_operation() const
{
    return is_set(operation)
	|| is_set(rmap_name.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::RmapName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rmap-name" <<"[rmap-name='" <<rmap_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::RmapName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RmapName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rmap_name.is_set || is_set(rmap_name.operation)) leaf_name_data.push_back(rmap_name.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::RmapName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::RmapName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::DistributeList::RouteMap::RmapName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rmap-name")
    {
        rmap_name = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::Eigrp_()
    :
    router_id{YType::str, "router-id"}
    	,
    stub(nullptr) // presence node
{
    yang_name = "eigrp"; yang_parent_name = "af-ip-vrf-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::has_data() const
{
    return router_id.is_set
	|| (stub !=  nullptr && stub->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::has_operation() const
{
    return is_set(operation)
	|| is_set(router_id.operation)
	|| (stub !=  nullptr && stub->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stub")
    {
        if(stub == nullptr)
        {
            stub = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::Stub>();
        }
        return stub;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stub != nullptr)
    {
        children["stub"] = stub;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::Stub::Stub()
    :
    connected{YType::empty, "connected"},
    leak_map{YType::str, "leak-map"},
    receive_only{YType::empty, "receive-only"},
    redistributed{YType::empty, "redistributed"},
    static_{YType::empty, "static"},
    summary{YType::empty, "summary"}
{
    yang_name = "stub"; yang_parent_name = "eigrp";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::Stub::~Stub()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::Stub::has_data() const
{
    return connected.is_set
	|| leak_map.is_set
	|| receive_only.is_set
	|| redistributed.is_set
	|| static_.is_set
	|| summary.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::Stub::has_operation() const
{
    return is_set(operation)
	|| is_set(connected.operation)
	|| is_set(leak_map.operation)
	|| is_set(receive_only.operation)
	|| is_set(redistributed.operation)
	|| is_set(static_.operation)
	|| is_set(summary.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::Stub::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::Stub::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stub' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.operation)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (leak_map.is_set || is_set(leak_map.operation)) leaf_name_data.push_back(leak_map.get_name_leafdata());
    if (receive_only.is_set || is_set(receive_only.operation)) leaf_name_data.push_back(receive_only.get_name_leafdata());
    if (redistributed.is_set || is_set(redistributed.operation)) leaf_name_data.push_back(redistributed.get_name_leafdata());
    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());
    if (summary.is_set || is_set(summary.operation)) leaf_name_data.push_back(summary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::Stub::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::Stub::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Eigrp_::Stub::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connected")
    {
        connected = value;
    }
    if(value_path == "leak-map")
    {
        leak_map = value;
    }
    if(value_path == "receive-only")
    {
        receive_only = value;
    }
    if(value_path == "redistributed")
    {
        redistributed = value;
    }
    if(value_path == "static")
    {
        static_ = value;
    }
    if(value_path == "summary")
    {
        summary = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric::Metric()
    :
    maximum_hops{YType::uint8, "maximum-hops"},
    weights{YType::uint8, "weights"}
{
    yang_name = "metric"; yang_parent_name = "af-ip-vrf-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric::~Metric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric::has_data() const
{
    return maximum_hops.is_set
	|| weights.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_hops.operation)
	|| is_set(weights.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_hops.is_set || is_set(maximum_hops.operation)) leaf_name_data.push_back(maximum_hops.get_name_leafdata());
    if (weights.is_set || is_set(weights.operation)) leaf_name_data.push_back(weights.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-hops")
    {
        maximum_hops = value;
    }
    if(value_path == "weights")
    {
        weights = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Neighbor()
{
    yang_name = "neighbor"; yang_parent_name = "af-ip-vrf-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::~Neighbor()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"}
    	,
    interface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface>())
{
    interface->parent = this;

    yang_name = "ipv4"; yang_parent_name = "neighbor";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::has_data() const
{
    return ipv4.is_set
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "ipv4";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::~Interface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Neighbor::Ipv4::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Network::Network()
    :
    number{YType::str, "number"},
    wild_card{YType::str, "wild-card"}
{
    yang_name = "network"; yang_parent_name = "af-ip-vrf-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Network::~Network()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Network::has_data() const
{
    return number.is_set
	|| wild_card.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(wild_card.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (wild_card.is_set || is_set(wild_card.operation)) leaf_name_data.push_back(wild_card.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "wild-card")
    {
        wild_card = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OffsetList()
{
    yang_name = "offset-list"; yang_parent_name = "af-ip-vrf-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::~OffsetList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::has_data() const
{
    for (std::size_t index=0; index<nsr_list.size(); index++)
    {
        if(nsr_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ol_acl.size(); index++)
    {
        if(ol_acl[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::has_operation() const
{
    for (std::size_t index=0; index<nsr_list.size(); index++)
    {
        if(nsr_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ol_acl.size(); index++)
    {
        if(ol_acl[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "offset-list";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OffsetList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsr-list")
    {
        for(auto const & c : nsr_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList>();
        c->parent = this;
        nsr_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ol-acl")
    {
        for(auto const & c : ol_acl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl>();
        c->parent = this;
        ol_acl.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nsr_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ol_acl)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::NsrList()
    :
    nsr_list{YType::uint16, "nsr-list"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "nsr-list"; yang_parent_name = "offset-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::~NsrList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::has_data() const
{
    return nsr_list.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_list.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-list" <<"[nsr-list='" <<nsr_list <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_list.is_set || is_set(nsr_list.operation)) leaf_name_data.push_back(nsr_list.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::NsrList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-list")
    {
        nsr_list = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::OlAcl()
    :
    ol_acl{YType::str, "ol-acl"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "ol-acl"; yang_parent_name = "offset-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::~OlAcl()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::has_data() const
{
    return ol_acl.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::has_operation() const
{
    return is_set(operation)
	|| is_set(ol_acl.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ol-acl" <<"[ol-acl='" <<ol_acl <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OlAcl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ol_acl.is_set || is_set(ol_acl.operation)) leaf_name_data.push_back(ol_acl.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::OffsetList::OlAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ol-acl")
    {
        ol_acl = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Redistribute()
    :
    eigrp{YType::uint16, "eigrp"},
    ospf{YType::uint16, "ospf"}
    	,
    connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,lisp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
	,vrf(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf>())
{
    vrf->parent = this;

    yang_name = "redistribute"; yang_parent_name = "af-ip-vrf-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::~Redistribute()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    return eigrp.is_set
	|| ospf.is_set
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(eigrp.operation)
	|| is_set(ospf.operation)
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.operation)) leaf_name_data.push_back(ospf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static_>();
        }
        return static_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "ospf")
    {
        ospf = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Bgp()
    :
    rdr_as{YType::str, "rdr-as"},
    rd_lesser_1_period_0_xx_period_yy_greater_{YType::empty, "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_"},
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric>())
{
    metric->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::has_data() const
{
    return rdr_as.is_set
	|| rd_lesser_1_period_0_xx_period_yy_greater_.is_set
	|| route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(rdr_as.operation)
	|| is_set(rd_lesser_1_period_0_xx_period_yy_greater_.operation)
	|| is_set(route_map.operation)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[rdr-as='" <<rdr_as <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rdr_as.is_set || is_set(rdr_as.operation)) leaf_name_data.push_back(rdr_as.get_name_leafdata());
    if (rd_lesser_1_period_0_xx_period_yy_greater_.is_set || is_set(rd_lesser_1_period_0_xx_period_yy_greater_.operation)) leaf_name_data.push_back(rd_lesser_1_period_0_xx_period_yy_greater_.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rdr-as")
    {
        rdr_as = value;
    }
    if(value_path == "rd-LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        rd_lesser_1_period_0_xx_period_yy_greater_ = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::Metric()
    :
    bandwith{YType::uint32, "bandwith"},
    delay{YType::uint32, "delay"},
    effective{YType::uint8, "Effective"},
    mtu{YType::uint16, "mtu"},
    reliability{YType::uint8, "reliability"}
{
    yang_name = "metric"; yang_parent_name = "bgp";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::~Metric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::has_data() const
{
    return bandwith.is_set
	|| delay.is_set
	|| effective.is_set
	|| mtu.is_set
	|| reliability.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwith.operation)
	|| is_set(delay.operation)
	|| is_set(effective.operation)
	|| is_set(mtu.operation)
	|| is_set(reliability.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwith.is_set || is_set(bandwith.operation)) leaf_name_data.push_back(bandwith.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (effective.is_set || is_set(effective.operation)) leaf_name_data.push_back(effective.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (reliability.is_set || is_set(reliability.operation)) leaf_name_data.push_back(reliability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Bgp::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwith")
    {
        bandwith = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "Effective")
    {
        effective = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "reliability")
    {
        reliability = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::Connected()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "connected"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connected' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Connected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::Isis()
    :
    is_tag{YType::str, "is-tag"},
    level_1{YType::empty, "level-1"},
    level_1_2{YType::empty, "level-1-2"},
    level_2{YType::empty, "level-2"},
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "isis"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::~Isis()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::has_data() const
{
    return is_tag.is_set
	|| level_1.is_set
	|| level_1_2.is_set
	|| level_2.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(is_tag.operation)
	|| is_set(level_1.operation)
	|| is_set(level_1_2.operation)
	|| is_set(level_2.operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_tag.is_set || is_set(is_tag.operation)) leaf_name_data.push_back(is_tag.get_name_leafdata());
    if (level_1.is_set || is_set(level_1.operation)) leaf_name_data.push_back(level_1.get_name_leafdata());
    if (level_1_2.is_set || is_set(level_1_2.operation)) leaf_name_data.push_back(level_1_2.get_name_leafdata());
    if (level_2.is_set || is_set(level_2.operation)) leaf_name_data.push_back(level_2.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-tag")
    {
        is_tag = value;
    }
    if(value_path == "level-1")
    {
        level_1 = value;
    }
    if(value_path == "level-1-2")
    {
        level_1_2 = value;
    }
    if(value_path == "level-2")
    {
        level_2 = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::Lisp()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "lisp"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lisp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Lisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::Mobile()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "mobile"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mobile' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Mobile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::Odr()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "odr"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Odr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Odr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::Rip()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "rip"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::~Rip()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static_::Static_()
    :
    metric{YType::empty, "metric"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "static"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static_::~Static_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static_::has_data() const
{
    return metric.is_set
	|| route_map.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::Vrf()
    :
    global{YType::empty, "global"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::~Vrf()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::has_data() const
{
    return global.is_set
	|| name.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(global.operation)
	|| is_set(name.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Redistribute::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::SummaryMetric()
    :
    a_period_b_period_c_period_d_slash_nn{YType::empty, "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn"}
{
    yang_name = "summary-metric"; yang_parent_name = "af-ip-vrf-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::~SummaryMetric()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return a_period_b_period_c_period_d_slash_nn.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(a_period_b_period_c_period_d_slash_nn.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryMetric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a_period_b_period_c_period_d_slash_nn.is_set || is_set(a_period_b_period_c_period_d_slash_nn.operation)) leaf_name_data.push_back(a_period_b_period_c_period_d_slash_nn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
    {
        a_period_b_period_c_period_d_slash_nn = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"}
{
    yang_name = "ipv4"; yang_parent_name = "summary-metric";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::~Ipv4()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::has_data() const
{
    return ipv4.is_set
	|| mask.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(mask.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::SummaryMetric::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Timers()
    :
    active_time(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime>())
	,graceful_restart(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart>())
	,nsf(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf>())
{
    active_time->parent = this;

    graceful_restart->parent = this;

    nsf->parent = this;

    yang_name = "timers"; yang_parent_name = "af-ip-vrf-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::~Timers()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::has_data() const
{
    return (active_time !=  nullptr && active_time->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (nsf !=  nullptr && nsf->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::has_operation() const
{
    return is_set(operation)
	|| (active_time !=  nullptr && active_time->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-time")
    {
        if(active_time == nullptr)
        {
            active_time = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime>();
        }
        return active_time;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf>();
        }
        return nsf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_time != nullptr)
    {
        children["active-time"] = active_time;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(nsf != nullptr)
    {
        children["nsf"] = nsf;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::ActiveTime()
    :
    atimer{YType::uint16, "atimer"},
    disabled{YType::empty, "disabled"}
{
    yang_name = "active-time"; yang_parent_name = "timers";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::~ActiveTime()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::has_data() const
{
    return atimer.is_set
	|| disabled.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::has_operation() const
{
    return is_set(operation)
	|| is_set(atimer.operation)
	|| is_set(disabled.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-time";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveTime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atimer.is_set || is_set(atimer.operation)) leaf_name_data.push_back(atimer.get_name_leafdata());
    if (disabled.is_set || is_set(disabled.operation)) leaf_name_data.push_back(disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::ActiveTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atimer")
    {
        atimer = value;
    }
    if(value_path == "disabled")
    {
        disabled = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::GracefulRestart()
    :
    purge_time{YType::empty, "purge-time"}
{
    yang_name = "graceful-restart"; yang_parent_name = "timers";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::has_data() const
{
    return purge_time.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(purge_time.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (purge_time.is_set || is_set(purge_time.operation)) leaf_name_data.push_back(purge_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "purge-time")
    {
        purge_time = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::Nsf()
    :
    converge{YType::empty, "converge"},
    signal{YType::empty, "signal"}
{
    yang_name = "nsf"; yang_parent_name = "timers";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::~Nsf()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::has_data() const
{
    return converge.is_set
	|| signal.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(converge.operation)
	|| is_set(signal.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nsf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (converge.is_set || is_set(converge.operation)) leaf_name_data.push_back(converge.get_name_leafdata());
    if (signal.is_set || is_set(signal.operation)) leaf_name_data.push_back(signal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Timers::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "converge")
    {
        converge = value;
    }
    if(value_path == "signal")
    {
        signal = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::TrafficShare()
    :
    balanced{YType::empty, "balanced"}
    	,
    min(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min>())
{
    min->parent = this;

    yang_name = "traffic-share"; yang_parent_name = "af-ip-vrf-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::~TrafficShare()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::has_data() const
{
    return balanced.is_set
	|| (min !=  nullptr && min->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::has_operation() const
{
    return is_set(operation)
	|| is_set(balanced.operation)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficShare' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (balanced.is_set || is_set(balanced.operation)) leaf_name_data.push_back(balanced.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min != nullptr)
    {
        children["min"] = min;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "balanced")
    {
        balanced = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::Min()
    :
    across_interfaces{YType::empty, "across-interfaces"}
{
    yang_name = "min"; yang_parent_name = "traffic-share";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::~Min()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::has_data() const
{
    return across_interfaces.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::has_operation() const
{
    return is_set(operation)
	|| is_set(across_interfaces.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Min' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (across_interfaces.is_set || is_set(across_interfaces.operation)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::TrafficShare::Min::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Topology()
    :
    base(nullptr) // presence node
{
    yang_name = "topology"; yang_parent_name = "af-ip-vrf-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::~Topology()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::has_data() const
{
    return (base !=  nullptr && base->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::has_operation() const
{
    return is_set(operation)
	|| (base !=  nullptr && base->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "base")
    {
        if(base == nullptr)
        {
            base = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base>();
        }
        return base;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(base != nullptr)
    {
        children["base"] = base;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Base()
    :
    distance(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance>())
	,distribute_list(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList>())
	,redistribute(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute>())
{
    distance->parent = this;

    distribute_list->parent = this;

    redistribute->parent = this;

    yang_name = "base"; yang_parent_name = "topology";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::~Base()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::has_data() const
{
    return (distance !=  nullptr && distance->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::has_operation() const
{
    return is_set(operation)
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Base' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute>();
        }
        return redistribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Distance()
    :
    eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_>())
{
    eigrp->parent = this;

    yang_name = "distance"; yang_parent_name = "base";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::~Distance()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::has_data() const
{
    return (eigrp !=  nullptr && eigrp->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::has_operation() const
{
    return is_set(operation)
	|| (eigrp !=  nullptr && eigrp->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_>();
        }
        return eigrp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::Eigrp_()
{
    yang_name = "eigrp"; yang_parent_name = "distance";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::has_data() const
{
    for (std::size_t index=0; index<distance_list.size(); index++)
    {
        if(distance_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::has_operation() const
{
    for (std::size_t index=0; index<distance_list.size(); index++)
    {
        if(distance_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distance-list")
    {
        for(auto const & c : distance_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList>();
        c->parent = this;
        distance_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : distance_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::DistanceList()
    :
    internal_route{YType::uint8, "internal-route"},
    external_route{YType::uint8, "external-route"}
{
    yang_name = "distance-list"; yang_parent_name = "eigrp";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::~DistanceList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::has_data() const
{
    return internal_route.is_set
	|| external_route.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::has_operation() const
{
    return is_set(operation)
	|| is_set(internal_route.operation)
	|| is_set(external_route.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance-list" <<"[internal-route='" <<internal_route <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistanceList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_route.is_set || is_set(internal_route.operation)) leaf_name_data.push_back(internal_route.get_name_leafdata());
    if (external_route.is_set || is_set(external_route.operation)) leaf_name_data.push_back(external_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Distance::Eigrp_::DistanceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "internal-route")
    {
        internal_route = value;
    }
    if(value_path == "external-route")
    {
        external_route = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::DistributeList()
{
    yang_name = "distribute-list"; yang_parent_name = "base";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::~DistributeList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::has_data() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.size(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        for(auto const & c : route_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap>();
        c->parent = this;
        route_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : route_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::PrefixList()
    :
    prefix_list{YType::str, "prefix-list"},
    gateway{YType::empty, "gateway"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "prefix-list"; yang_parent_name = "distribute-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::~PrefixList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::has_data() const
{
    return prefix_list.is_set
	|| gateway.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list.operation)
	|| is_set(gateway.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix-list='" <<prefix_list <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.operation)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::PrefixList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
    if(value_path == "gateway")
    {
        gateway = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::RouteMap()
    :
    name{YType::str, "name"},
    in{YType::str, "in"},
    out{YType::str, "out"}
{
    yang_name = "route-map"; yang_parent_name = "distribute-list";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::~RouteMap()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::has_data() const
{
    return name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::DistributeList::RouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Redistribute()
    :
    connected{YType::empty, "connected"}
    	,
    eigrp(std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_>())
	,static_(nullptr) // presence node
{
    eigrp->parent = this;

    yang_name = "redistribute"; yang_parent_name = "base";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::~Redistribute()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::has_data() const
{
    return connected.is_set
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::has_operation() const
{
    return is_set(operation)
	|| is_set(connected.operation)
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.operation)) leaf_name_data.push_back(connected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_>();
        }
        return eigrp;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connected")
    {
        connected = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::Eigrp_()
{
    yang_name = "eigrp"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::~Eigrp_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::has_data() const
{
    for (std::size_t index=0; index<as_list.size(); index++)
    {
        if(as_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::has_operation() const
{
    for (std::size_t index=0; index<as_list.size(); index++)
    {
        if(as_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "as-list")
    {
        for(auto const & c : as_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList>();
        c->parent = this;
        as_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : as_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::AsList()
    :
    autonomous_system{YType::uint16, "autonomous-system"}
{
    yang_name = "as-list"; yang_parent_name = "eigrp";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::~AsList()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::has_data() const
{
    return autonomous_system.is_set;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::has_operation() const
{
    return is_set(operation)
	|| is_set(autonomous_system.operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-list" <<"[autonomous-system='" <<autonomous_system <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system.is_set || is_set(autonomous_system.operation)) leaf_name_data.push_back(autonomous_system.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Eigrp_::AsList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "autonomous-system")
    {
        autonomous_system = value;
    }
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static_::Static_()
{
    yang_name = "static"; yang_parent_name = "redistribute";
}

Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static_::~Static_()
{
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static_::has_data() const
{
    return false;
}

bool Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static_::has_operation() const
{
    return is_set(operation);
}

std::string Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Eigrp::AddressFamily::AfIpVrfList::Topology::Base::Redistribute::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::Eigrp::AfInterface::AfInterface()
    :
    name{YType::str, "name"},
    bandwidth_percent{YType::uint32, "bandwidth-percent"},
    hello_interval{YType::uint16, "hello-interval"},
    hold_time{YType::uint16, "hold-time"},
    passive_interface{YType::empty, "passive-interface"},
    split_horizon{YType::boolean, "split-horizon"}
    	,
    authentication(std::make_shared<Native::Router::Eigrp::AfInterface::Authentication>())
	,summary_address(std::make_shared<Native::Router::Eigrp::AfInterface::SummaryAddress>())
{
    authentication->parent = this;

    summary_address->parent = this;

    yang_name = "af-interface"; yang_parent_name = "eigrp";
}

Native::Router::Eigrp::AfInterface::~AfInterface()
{
}

bool Native::Router::Eigrp::AfInterface::has_data() const
{
    return name.is_set
	|| bandwidth_percent.is_set
	|| hello_interval.is_set
	|| hold_time.is_set
	|| passive_interface.is_set
	|| split_horizon.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data());
}

bool Native::Router::Eigrp::AfInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(bandwidth_percent.operation)
	|| is_set(hello_interval.operation)
	|| is_set(hold_time.operation)
	|| is_set(passive_interface.operation)
	|| is_set(split_horizon.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation());
}

std::string Native::Router::Eigrp::AfInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AfInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfInterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (bandwidth_percent.is_set || is_set(bandwidth_percent.operation)) leaf_name_data.push_back(bandwidth_percent.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.operation)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.operation)) leaf_name_data.push_back(split_horizon.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AfInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Router::Eigrp::AfInterface::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Router::Eigrp::AfInterface::SummaryAddress>();
        }
        return summary_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AfInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(summary_address != nullptr)
    {
        children["summary-address"] = summary_address;
    }

    return children;
}

void Native::Router::Eigrp::AfInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "bandwidth-percent")
    {
        bandwidth_percent = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
    }
}

Native::Router::Eigrp::AfInterface::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"}
    	,
    mode(std::make_shared<Native::Router::Eigrp::AfInterface::Authentication::Mode>())
{
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "af-interface";
}

Native::Router::Eigrp::AfInterface::Authentication::~Authentication()
{
}

bool Native::Router::Eigrp::AfInterface::Authentication::has_data() const
{
    return key_chain.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Router::Eigrp::AfInterface::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key_chain.operation)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Router::Eigrp::AfInterface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AfInterface::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AfInterface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Router::Eigrp::AfInterface::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AfInterface::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Router::Eigrp::AfInterface::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
}

Native::Router::Eigrp::AfInterface::Authentication::Mode::Mode()
    :
    md5{YType::empty, "md5"}
    	,
    hmac_sha_256(std::make_shared<Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256>())
{
    hmac_sha_256->parent = this;

    yang_name = "mode"; yang_parent_name = "authentication";
}

Native::Router::Eigrp::AfInterface::Authentication::Mode::~Mode()
{
}

bool Native::Router::Eigrp::AfInterface::Authentication::Mode::has_data() const
{
    return md5.is_set
	|| (hmac_sha_256 !=  nullptr && hmac_sha_256->has_data());
}

bool Native::Router::Eigrp::AfInterface::Authentication::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(md5.operation)
	|| (hmac_sha_256 !=  nullptr && hmac_sha_256->has_operation());
}

std::string Native::Router::Eigrp::AfInterface::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Router::Eigrp::AfInterface::Authentication::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.operation)) leaf_name_data.push_back(md5.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Eigrp::AfInterface::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hmac-sha-256")
    {
        if(hmac_sha_256 == nullptr)
        {
            hmac_sha_256 = std::make_shared<Native::Router::Eigrp::AfInterface::Authentication::Mode::HmacSha256>();
        }
        return hmac_sha_256;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Eigrp::AfInterface::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hmac_sha_256 != nullptr)
    {
        children["hmac-sha-256"] = hmac_sha_256;
    }

    return children;
}

void Native::Router::Eigrp::AfInterface::Authentication::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "md5")
    {
        md5 = value;
    }
}

const Enum::YLeaf Native::Router::Eigrp::AddressFamily::AfIpVrfList::UnicastMulticastEnum::unicast {0, "unicast"};
const Enum::YLeaf Native::Router::Eigrp::AddressFamily::AfIpVrfList::UnicastMulticastEnum::multicast {1, "multicast"};


}
}

