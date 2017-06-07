
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_101.hpp"
#include "Cisco_IOS_XE_native_102.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Ipv6_()
    :
    route(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route>())
{
    route->parent = this;

    yang_name = "ipv6"; yang_parent_name = "ipv6";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::~Ipv6_()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::has_operation() const
{
    return is_set(operation)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Route()
    :
    priority(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority>())
{
    priority->parent = this;

    yang_name = "route"; yang_parent_name = "ipv6";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::~Route()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::has_operation() const
{
    return is_set(operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::Priority()
    :
    high(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High>())
{
    high->parent = this;

    yang_name = "priority"; yang_parent_name = "route";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::~Priority()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::has_data() const
{
    return (high !=  nullptr && high->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::has_operation() const
{
    return is_set(operation)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::High()
    :
    tag{YType::uint32, "tag"}
{
    yang_name = "high"; yang_parent_name = "priority";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::~High()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::has_data() const
{
    return tag.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::MultiTopology::MultiTopology()
    :
    transition{YType::empty, "transition"}
{
    yang_name = "multi-topology"; yang_parent_name = "ipv6";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::MultiTopology::~MultiTopology()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::MultiTopology::has_data() const
{
    return transition.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::MultiTopology::has_operation() const
{
    return is_set(operation)
	|| is_set(transition.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::MultiTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-topology";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::MultiTopology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiTopology' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transition.is_set || is_set(transition.operation)) leaf_name_data.push_back(transition.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::MultiTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::MultiTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::MultiTopology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transition")
    {
        transition = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Redistribute()
    :
    application(nullptr) // presence node
	,bgp(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp>())
	,connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,lisp(nullptr) // presence node
	,nd(nullptr) // presence node
	,nemo(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo>())
	,static_(nullptr) // presence node
{
    bgp->parent = this;

    nemo->parent = this;

    yang_name = "redistribute"; yang_parent_name = "ipv6";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::~Redistribute()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::has_data() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return (application !=  nullptr && application->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (nemo !=  nullptr && nemo->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (application !=  nullptr && application->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (nemo !=  nullptr && nemo->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_>();
        }
        return isis;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "nemo")
    {
        if(nemo == nullptr)
        {
            nemo = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo>();
        }
        return nemo;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        for(auto const & c : rip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    if(nemo != nullptr)
    {
        children["nemo"] = nemo;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rip)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application::Application()
    :
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "application"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application::~Application()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application::has_data() const
{
    return include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application::has_operation() const
{
    return is_set(operation)
	|| is_set(include_connected.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.operation)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"},
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "bgp"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp::has_data() const
{
    return as_number.is_set
	|| include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| is_set(include_connected.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp::get_entity_path(Entity* ancestor) const
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

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (include_connected.is_set || is_set(include_connected.operation)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "include-connected")
    {
        include_connected = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected::Connected()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "connected"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected::~Connected()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::uint32, "as-number"},
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "eigrp"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::has_data() const
{
    return as_number.is_set
	|| include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| is_set(include_connected.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (include_connected.is_set || is_set(include_connected.operation)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "include-connected")
    {
        include_connected = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::Isis_()
{
    yang_name = "isis"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::~Isis_()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::has_data() const
{
    for (std::size_t index=0; index<isis_leak.size(); index++)
    {
        if(isis_leak[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<isis_redistribute.size(); index++)
    {
        if(isis_redistribute[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::has_operation() const
{
    for (std::size_t index=0; index<isis_leak.size(); index++)
    {
        if(isis_leak[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<isis_redistribute.size(); index++)
    {
        if(isis_redistribute[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-leak")
    {
        for(auto const & c : isis_leak)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak>();
        c->parent = this;
        isis_leak.push_back(c);
        return c;
    }

    if(child_yang_name == "isis-redistribute")
    {
        for(auto const & c : isis_redistribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute>();
        c->parent = this;
        isis_redistribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_leak)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : isis_redistribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::IsisRedistribute()
    :
    area_tag{YType::str, "area-tag"},
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "isis-redistribute"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::~IsisRedistribute()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::has_data() const
{
    return area_tag.is_set
	|| include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::has_operation() const
{
    return is_set(operation)
	|| is_set(area_tag.operation)
	|| is_set(include_connected.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-redistribute" <<"[area-tag='" <<area_tag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisRedistribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.operation)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (include_connected.is_set || is_set(include_connected.operation)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
    }
    if(value_path == "include-connected")
    {
        include_connected = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak::IsisLeak()
    :
    isis_redist_levels1{YType::enumeration, "isis-redist-levels1"},
    isis_redist_levels2{YType::enumeration, "isis-redist-levels2"},
    distribute_list{YType::str, "distribute-list"},
    into{YType::empty, "into"},
    route_map{YType::str, "route-map"}
{
    yang_name = "isis-leak"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak::~IsisLeak()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak::has_data() const
{
    return isis_redist_levels1.is_set
	|| isis_redist_levels2.is_set
	|| distribute_list.is_set
	|| into.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak::has_operation() const
{
    return is_set(operation)
	|| is_set(isis_redist_levels1.operation)
	|| is_set(isis_redist_levels2.operation)
	|| is_set(distribute_list.operation)
	|| is_set(into.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-leak" <<"[isis-redist-levels1='" <<isis_redist_levels1 <<"']" <<"[isis-redist-levels2='" <<isis_redist_levels2 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisLeak' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_redist_levels1.is_set || is_set(isis_redist_levels1.operation)) leaf_name_data.push_back(isis_redist_levels1.get_name_leafdata());
    if (isis_redist_levels2.is_set || is_set(isis_redist_levels2.operation)) leaf_name_data.push_back(isis_redist_levels2.get_name_leafdata());
    if (distribute_list.is_set || is_set(distribute_list.operation)) leaf_name_data.push_back(distribute_list.get_name_leafdata());
    if (into.is_set || is_set(into.operation)) leaf_name_data.push_back(into.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "isis-redist-levels1")
    {
        isis_redist_levels1 = value;
    }
    if(value_path == "isis-redist-levels2")
    {
        isis_redist_levels2 = value;
    }
    if(value_path == "distribute-list")
    {
        distribute_list = value;
    }
    if(value_path == "into")
    {
        into = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp::Lisp()
    :
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp::has_data() const
{
    return include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp::has_operation() const
{
    return is_set(operation)
	|| is_set(include_connected.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp::get_entity_path(Entity* ancestor) const
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

    if (include_connected.is_set || is_set(include_connected.operation)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd::Nd()
    :
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "nd"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd::~Nd()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd::has_data() const
{
    return include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd::has_operation() const
{
    return is_set(operation)
	|| is_set(include_connected.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.operation)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo::Nemo()
    :
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "nemo"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo::~Nemo()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo::has_data() const
{
    return include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo::has_operation() const
{
    return is_set(operation)
	|| is_set(include_connected.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nemo";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nemo' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.operation)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Ospf()
    :
    process_id{YType::uint32, "process-id"},
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    match(std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::~Ospf()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::has_data() const
{
    return process_id.is_set
	|| include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::has_operation() const
{
    return is_set(operation)
	|| is_set(process_id.operation)
	|| is_set(include_connected.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[process-id='" <<process_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.operation)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (include_connected.is_set || is_set(include_connected.operation)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-id")
    {
        process_id = value;
    }
    if(value_path == "include-connected")
    {
        include_connected = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{
    yang_name = "match"; yang_parent_name = "ospf";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::~Match()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::has_operation() const
{
    return is_set(operation)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal::Internal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "internal"; yang_parent_name = "match";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Internal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "external"; yang_parent_name = "match";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External::~External()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External::has_operation() const
{
    return is_set(operation)
	|| is_set(external_routes.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'External' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.operation)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    route_map{YType::str, "route-map"}
{
    yang_name = "nssa-external"; yang_parent_name = "match";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_external_routes.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssaExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.operation)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip::Rip()
    :
    process{YType::str, "process"},
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "rip"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip::~Rip()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip::has_data() const
{
    return process.is_set
	|| include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(process.operation)
	|| is_set(include_connected.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip" <<"[process='" <<process <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip::get_entity_path(Entity* ancestor) const
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

    if (process.is_set || is_set(process.operation)) leaf_name_data.push_back(process.get_name_leafdata());
    if (include_connected.is_set || is_set(include_connected.operation)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process")
    {
        process = value;
    }
    if(value_path == "include-connected")
    {
        include_connected = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_::Static_()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "static"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_::~Static_()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SummaryPrefix::SummaryPrefix()
    :
    prefix{YType::str, "prefix"},
    levels{YType::enumeration, "levels"}
{
    yang_name = "summary-prefix"; yang_parent_name = "ipv6";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SummaryPrefix::~SummaryPrefix()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SummaryPrefix::has_data() const
{
    return prefix.is_set
	|| levels.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SummaryPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(levels.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SummaryPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SummaryPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SummaryPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::TableMap::TableMap()
    :
    filter{YType::empty, "filter"},
    name{YType::str, "name"}
{
    yang_name = "table-map"; yang_parent_name = "ipv6";
}

Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::TableMap::~TableMap()
{
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::TableMap::has_data() const
{
    return filter.is_set
	|| name.is_set;
}

bool Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::TableMap::has_operation() const
{
    return is_set(operation)
	|| is_set(filter.operation)
	|| is_set(name.operation);
}

std::string Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::TableMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-map";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::TableMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TableMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filter.is_set || is_set(filter.operation)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::TableMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::TableMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::TableMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "filter")
    {
        filter = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::IsisContainer::Isis::Distance::Distance()
    :
    number{YType::uint8, "number"},
    clns{YType::empty, "clns"},
    ip{YType::empty, "ip"}
{
    yang_name = "distance"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Distance::~Distance()
{
}

bool Native::Router::IsisContainer::Isis::Distance::has_data() const
{
    for (std::size_t index=0; index<ip_list.size(); index++)
    {
        if(ip_list[index]->has_data())
            return true;
    }
    return number.is_set
	|| clns.is_set
	|| ip.is_set;
}

bool Native::Router::IsisContainer::Isis::Distance::has_operation() const
{
    for (std::size_t index=0; index<ip_list.size(); index++)
    {
        if(ip_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(clns.operation)
	|| is_set(ip.operation);
}

std::string Native::Router::IsisContainer::Isis::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Distance::get_entity_path(Entity* ancestor) const
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

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (clns.is_set || is_set(clns.operation)) leaf_name_data.push_back(clns.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-list")
    {
        for(auto const & c : ip_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Distance::IpList>();
        c->parent = this;
        ip_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Distance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "clns")
    {
        clns = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
}

Native::Router::IsisContainer::Isis::Distance::IpList::IpList()
    :
    ip{YType::str, "ip"}
{
    yang_name = "ip-list"; yang_parent_name = "distance";
}

Native::Router::IsisContainer::Isis::Distance::IpList::~IpList()
{
}

bool Native::Router::IsisContainer::Isis::Distance::IpList::has_data() const
{
    for (std::size_t index=0; index<wildcard_bits.size(); index++)
    {
        if(wildcard_bits[index]->has_data())
            return true;
    }
    return ip.is_set;
}

bool Native::Router::IsisContainer::Isis::Distance::IpList::has_operation() const
{
    for (std::size_t index=0; index<wildcard_bits.size(); index++)
    {
        if(wildcard_bits[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ip.operation);
}

std::string Native::Router::IsisContainer::Isis::Distance::IpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-list" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Distance::IpList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Distance::IpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wildcard-bits")
    {
        for(auto const & c : wildcard_bits)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Distance::IpList::WildcardBits>();
        c->parent = this;
        wildcard_bits.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Distance::IpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : wildcard_bits)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Distance::IpList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
}

Native::Router::IsisContainer::Isis::Distance::IpList::WildcardBits::WildcardBits()
    :
    w_bits{YType::str, "w-bits"},
    access_list{YType::str, "access-list"}
{
    yang_name = "wildcard-bits"; yang_parent_name = "ip-list";
}

Native::Router::IsisContainer::Isis::Distance::IpList::WildcardBits::~WildcardBits()
{
}

bool Native::Router::IsisContainer::Isis::Distance::IpList::WildcardBits::has_data() const
{
    return w_bits.is_set
	|| access_list.is_set;
}

bool Native::Router::IsisContainer::Isis::Distance::IpList::WildcardBits::has_operation() const
{
    return is_set(operation)
	|| is_set(w_bits.operation)
	|| is_set(access_list.operation);
}

std::string Native::Router::IsisContainer::Isis::Distance::IpList::WildcardBits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wildcard-bits" <<"[w-bits='" <<w_bits <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Distance::IpList::WildcardBits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WildcardBits' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (w_bits.is_set || is_set(w_bits.operation)) leaf_name_data.push_back(w_bits.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Distance::IpList::WildcardBits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Distance::IpList::WildcardBits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Distance::IpList::WildcardBits::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "w-bits")
    {
        w_bits = value;
    }
    if(value_path == "access-list")
    {
        access_list = value;
    }
}

Native::Router::IsisContainer::Isis::Ip::Ip()
    :
    route(std::make_shared<Native::Router::IsisContainer::Isis::Ip::Route>())
{
    route->parent = this;

    yang_name = "ip"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::Ip::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool Native::Router::IsisContainer::Isis::Ip::has_operation() const
{
    return is_set(operation)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Router::IsisContainer::Isis::Ip::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Ip::Route::Route()
    :
    priority(std::make_shared<Native::Router::IsisContainer::Isis::Ip::Route::Priority>())
{
    priority->parent = this;

    yang_name = "route"; yang_parent_name = "ip";
}

Native::Router::IsisContainer::Isis::Ip::Route::~Route()
{
}

bool Native::Router::IsisContainer::Isis::Ip::Route::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Router::IsisContainer::Isis::Ip::Route::has_operation() const
{
    return is_set(operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Ip::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::IsisContainer::Isis::Ip::Route::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Ip::Route::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Ip::Route::Priority::Priority()
    :
    high(std::make_shared<Native::Router::IsisContainer::Isis::Ip::Route::Priority::High>())
{
    high->parent = this;

    yang_name = "priority"; yang_parent_name = "route";
}

Native::Router::IsisContainer::Isis::Ip::Route::Priority::~Priority()
{
}

bool Native::Router::IsisContainer::Isis::Ip::Route::Priority::has_data() const
{
    return (high !=  nullptr && high->has_data());
}

bool Native::Router::IsisContainer::Isis::Ip::Route::Priority::has_operation() const
{
    return is_set(operation)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Ip::Route::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Ip::Route::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Ip::Route::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Router::IsisContainer::Isis::Ip::Route::Priority::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Ip::Route::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Ip::Route::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Ip::Route::Priority::High::High()
    :
    tag{YType::uint32, "tag"}
{
    yang_name = "high"; yang_parent_name = "priority";
}

Native::Router::IsisContainer::Isis::Ip::Route::Priority::High::~High()
{
}

bool Native::Router::IsisContainer::Isis::Ip::Route::Priority::High::has_data() const
{
    return tag.is_set;
}

bool Native::Router::IsisContainer::Isis::Ip::Route::Priority::High::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation);
}

std::string Native::Router::IsisContainer::Isis::Ip::Route::Priority::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Ip::Route::Priority::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Ip::Route::Priority::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Ip::Route::Priority::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Ip::Route::Priority::High::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Redistribute()
    :
    bgp(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Bgp>())
	,connected(nullptr) // presence node
	,isis(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Isis_>())
	,iso_igrp(nullptr) // presence node
	,lisp(nullptr) // presence node
	,maximum_prefix(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::MaximumPrefix>())
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
	,vrf(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf>())
{
    bgp->parent = this;

    isis->parent = this;

    maximum_prefix->parent = this;

    vrf->parent = this;

    yang_name = "redistribute"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Redistribute::~Redistribute()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    return (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        for(auto const & c : application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Application>();
        c->parent = this;
        application.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Isis_>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        for(auto const & c : ospfv3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Ospfv3>();
        c->parent = this;
        ospfv3.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Static_>();
        }
        return static_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application)
    {
        children[c->get_segment_path()] = c;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3)
    {
        children[c->get_segment_path()] = c;
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

void Native::Router::IsisContainer::Isis::Redistribute::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Redistribute::Application::Application()
    :
    name{YType::str, "name"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "application"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::Redistribute::Application::~Application()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Application::has_data() const
{
    return name.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Application::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Application::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "bgp"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Bgp::has_data() const
{
    return as_number.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Bgp::get_entity_path(Entity* ancestor) const
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

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "bgp";
}

Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns::~Clns()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "bgp";
}

Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Connected::Connected()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "connected"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::Redistribute::Connected::~Connected()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Connected::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Connected::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Connected::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Connected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::uint32, "as-number"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "eigrp"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Eigrp::has_data() const
{
    return as_number.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(as_number.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.operation)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-number")
    {
        as_number = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Isis_::Isis_()
{
    yang_name = "isis"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::Redistribute::Isis_::~Isis_()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Isis_::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<isis_redistribute.size(); index++)
    {
        if(isis_redistribute[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Isis_::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<isis_redistribute.size(); index++)
    {
        if(isis_redistribute[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Isis_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        for(auto const & c : ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    if(child_yang_name == "isis-redistribute")
    {
        for(auto const & c : isis_redistribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute>();
        c->parent = this;
        isis_redistribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Isis_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : isis_redistribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Isis_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::IsisRedistribute()
    :
    area_tag{YType::str, "area-tag"}
    	,
    ip(nullptr) // presence node
{
    yang_name = "isis-redistribute"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::~IsisRedistribute()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::has_data() const
{
    return area_tag.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::has_operation() const
{
    return is_set(operation)
	|| is_set(area_tag.operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-redistribute" <<"[area-tag='" <<area_tag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisRedistribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.operation)) leaf_name_data.push_back(area_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis-redistribute";
}

Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip::Ip()
    :
    isis_redist_levels1{YType::enumeration, "isis-redist-levels1"},
    isis_redist_levels2{YType::enumeration, "isis-redist-levels2"},
    distribute_list{YType::uint32, "distribute-list"},
    into{YType::empty, "into"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip::has_data() const
{
    return isis_redist_levels1.is_set
	|| isis_redist_levels2.is_set
	|| distribute_list.is_set
	|| into.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(isis_redist_levels1.operation)
	|| is_set(isis_redist_levels2.operation)
	|| is_set(distribute_list.operation)
	|| is_set(into.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[isis-redist-levels1='" <<isis_redist_levels1 <<"']" <<"[isis-redist-levels2='" <<isis_redist_levels2 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_redist_levels1.is_set || is_set(isis_redist_levels1.operation)) leaf_name_data.push_back(isis_redist_levels1.get_name_leafdata());
    if (isis_redist_levels2.is_set || is_set(isis_redist_levels2.operation)) leaf_name_data.push_back(isis_redist_levels2.get_name_leafdata());
    if (distribute_list.is_set || is_set(distribute_list.operation)) leaf_name_data.push_back(distribute_list.get_name_leafdata());
    if (into.is_set || is_set(into.operation)) leaf_name_data.push_back(into.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "isis-redist-levels1")
    {
        isis_redist_levels1 = value;
    }
    if(value_path == "isis-redist-levels2")
    {
        isis_redist_levels2 = value;
    }
    if(value_path == "distribute-list")
    {
        distribute_list = value;
    }
    if(value_path == "into")
    {
        into = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::IsoIgrp()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    area_tag_route_map_container(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer>())
{
    area_tag_route_map_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoIgrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_tag_route_map_container != nullptr)
    {
        children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{
    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp";
}

Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(area_tag.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaTagRouteMapContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.operation)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Lisp::Lisp()
    :
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Lisp::has_data() const
{
    return include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Lisp::has_operation() const
{
    return is_set(operation)
	|| is_set(include_connected.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Lisp::get_entity_path(Entity* ancestor) const
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

    if (include_connected.is_set || is_set(include_connected.operation)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Lisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"},
    threshold_value{YType::uint32, "threshold-value"},
    warning_only{YType::empty, "warning-only"},
    withdraw{YType::empty, "withdraw"}
{
    yang_name = "maximum-prefix"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::Redistribute::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::MaximumPrefix::has_data() const
{
    return number.is_set
	|| threshold_value.is_set
	|| warning_only.is_set
	|| withdraw.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::MaximumPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(threshold_value.operation)
	|| is_set(warning_only.operation)
	|| is_set(withdraw.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::MaximumPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.operation)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (withdraw.is_set || is_set(withdraw.operation)) leaf_name_data.push_back(withdraw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::MaximumPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
    if(value_path == "withdraw")
    {
        withdraw = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Mobile::Mobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "mobile"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Mobile::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Mobile::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Mobile::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Mobile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Odr::Odr()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "odr"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::Redistribute::Odr::~Odr()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Odr::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Odr::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Odr::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Odr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Ospf::Ospf()
    :
    process_id{YType::uint32, "process-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::Redistribute::Ospf::~Ospf()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospf::has_data() const
{
    return process_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospf::has_operation() const
{
    return is_set(operation)
	|| is_set(process_id.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation)
	|| is_set(vrf.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[process-id='" <<process_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.operation)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-id")
    {
        process_id = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{
    yang_name = "match"; yang_parent_name = "ospf";
}

Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::~Match()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::has_operation() const
{
    return is_set(operation)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal::Internal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "internal"; yang_parent_name = "match";
}

Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Internal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "external"; yang_parent_name = "match";
}

Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External::~External()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External::has_operation() const
{
    return is_set(operation)
	|| is_set(external_routes.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'External' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.operation)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    route_map{YType::str, "route-map"}
{
    yang_name = "nssa-external"; yang_parent_name = "match";
}

Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_external_routes.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssaExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.operation)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Ospfv3()
    :
    process_id{YType::uint32, "process-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::~Ospfv3()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::has_data() const
{
    return process_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::has_operation() const
{
    return is_set(operation)
	|| is_set(process_id.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation)
	|| is_set(vrf.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[process-id='" <<process_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.operation)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "process-id")
    {
        process_id = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{
    yang_name = "match"; yang_parent_name = "ospfv3";
}

Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::~Match()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::has_operation() const
{
    return is_set(operation)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal::Internal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "internal"; yang_parent_name = "match";
}

Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal::~Internal()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Internal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "external"; yang_parent_name = "match";
}

Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External::~External()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External::has_data() const
{
    return external_routes.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External::has_operation() const
{
    return is_set(operation)
	|| is_set(external_routes.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'External' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.operation)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal::NssaExternal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    route_map{YType::str, "route-map"}
{
    yang_name = "nssa-external"; yang_parent_name = "match";
}

Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(nssa_external_routes.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssaExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.operation)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "rip"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::Redistribute::Rip::~Rip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Rip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Rip::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Static_::Static_()
    :
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "static"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::Redistribute::Static_::~Static_()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Static_::has_data() const
{
    return (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Static_::has_operation() const
{
    return is_set(operation)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Static_::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Static_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "static";
}

Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns::~Clns()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "static";
}

Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Vrf()
    :
    global(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global>())
{
    global->parent = this;

    yang_name = "vrf"; yang_parent_name = "redistribute";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::~Vrf()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrf_nm.size(); index++)
    {
        if(vrf_nm[index]->has_data())
            return true;
    }
    return (global !=  nullptr && global->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf_nm.size(); index++)
    {
        if(vrf_nm[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global>();
        }
        return global;
    }

    if(child_yang_name == "vrf-nm")
    {
        for(auto const & c : vrf_nm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm>();
        c->parent = this;
        vrf_nm.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    for (auto const & c : vrf_nm)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::VrfNm()
    :
    vrf_nm{YType::str, "vrf-nm"},
    ospf{YType::uint16, "ospf"}
    	,
    application(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application>())
	,bgp(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp>())
	,connected(nullptr) // presence node
	,eigrp(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp>())
	,isis(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_>())
	,iso_igrp(nullptr) // presence node
	,lisp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,ospfv3(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3>())
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
{
    application->parent = this;

    bgp->parent = this;

    eigrp->parent = this;

    isis->parent = this;

    ospfv3->parent = this;

    yang_name = "vrf-nm"; yang_parent_name = "vrf";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::~VrfNm()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::has_data() const
{
    return vrf_nm.is_set
	|| ospf.is_set
	|| (application !=  nullptr && application->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_nm.operation)
	|| is_set(ospf.operation)
	|| (application !=  nullptr && application->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-nm" <<"[vrf-nm='" <<vrf_nm <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_nm.is_set || is_set(vrf_nm.operation)) leaf_name_data.push_back(vrf_nm.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.operation)) leaf_name_data.push_back(ospf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-nm")
    {
        vrf_nm = value;
    }
    if(value_path == "ospf")
    {
        ospf = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Application()
{
    yang_name = "application"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::~Application()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::has_data() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::has_operation() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "appname")
    {
        for(auto const & c : appname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname>();
        c->parent = this;
        appname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : appname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname::Appname()
    :
    appname{YType::str, "appname"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "appname"; yang_parent_name = "application";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname::~Appname()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname::has_data() const
{
    return appname.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname::has_operation() const
{
    return is_set(operation)
	|| is_set(appname.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appname" <<"[appname='" <<appname <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Appname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appname.is_set || is_set(appname.operation)) leaf_name_data.push_back(appname.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "appname")
    {
        appname = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::Bgp()
    :
    a_lesser_1_period_0_xx_period_yy_greater_{YType::empty, "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_"}
{
    yang_name = "bgp"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::~Bgp()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::has_data() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_data())
            return true;
    }
    return a_lesser_1_period_0_xx_period_yy_greater_.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::has_operation() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(a_lesser_1_period_0_xx_period_yy_greater_.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::get_entity_path(Entity* ancestor) const
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

    if (a_lesser_1_period_0_xx_period_yy_greater_.is_set || is_set(a_lesser_1_period_0_xx_period_yy_greater_.operation)) leaf_name_data.push_back(a_lesser_1_period_0_xx_period_yy_greater_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bp-as-num")
    {
        for(auto const & c : bp_as_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum>();
        c->parent = this;
        bp_as_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bp_as_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_ = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::BpAsNum()
    :
    bp_as_num{YType::str, "bp-as-num"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "bp-as-num"; yang_parent_name = "bgp";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::~BpAsNum()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::has_data() const
{
    return bp_as_num.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::has_operation() const
{
    return is_set(operation)
	|| is_set(bp_as_num.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp-as-num" <<"[bp-as-num='" <<bp_as_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BpAsNum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bp_as_num.is_set || is_set(bp_as_num.operation)) leaf_name_data.push_back(bp_as_num.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "bp-as-num";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::~Clns()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "bp-as-num";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected::Connected()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "connected"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected::~Connected()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::Eigrp()
{
    yang_name = "eigrp"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::~Eigrp()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::has_data() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp-as")
    {
        for(auto const & c : eigrp_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs>();
        c->parent = this;
        eigrp_as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp_as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::EigrpAs()
    :
    eigrp_as{YType::uint16, "eigrp-as"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "eigrp-as"; yang_parent_name = "eigrp";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::~EigrpAs()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::has_data() const
{
    return eigrp_as.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::has_operation() const
{
    return is_set(operation)
	|| is_set(eigrp_as.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-as" <<"[eigrp-as='" <<eigrp_as <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EigrpAs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp_as.is_set || is_set(eigrp_as.operation)) leaf_name_data.push_back(eigrp_as.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Isis_()
    :
    ip(nullptr) // presence node
{
    yang_name = "isis"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::~Isis_()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::has_data() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_data())
            return true;
    }
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::has_operation() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "isis-atag")
    {
        for(auto const & c : isis_atag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag>();
        c->parent = this;
        isis_atag.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    for (auto const & c : isis_atag)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::IsisAtag()
    :
    isis_atag{YType::str, "isis-atag"}
    	,
    ip(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip>())
{
    ip->parent = this;

    yang_name = "isis-atag"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::~IsisAtag()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::has_data() const
{
    return isis_atag.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::has_operation() const
{
    return is_set(operation)
	|| is_set(isis_atag.operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-atag" <<"[isis-atag='" <<isis_atag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisAtag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_atag.is_set || is_set(isis_atag.operation)) leaf_name_data.push_back(isis_atag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "isis-atag")
    {
        isis_atag = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis-atag";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoIgrp()
    :
    route_map(nullptr) // presence node
{
    yang_name = "iso-igrp"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_data())
            return true;
    }
    return (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoIgrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iso-atag")
    {
        for(auto const & c : iso_atag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag>();
        c->parent = this;
        iso_atag.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iso_atag)
    {
        children[c->get_segment_path()] = c;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::IsoAtag()
    :
    iso_atag{YType::str, "iso-atag"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "iso-atag"; yang_parent_name = "iso-igrp";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::~IsoAtag()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::has_data() const
{
    return iso_atag.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::has_operation() const
{
    return is_set(operation)
	|| is_set(iso_atag.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-atag" <<"[iso-atag='" <<iso_atag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoAtag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_atag.is_set || is_set(iso_atag.operation)) leaf_name_data.push_back(iso_atag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iso-atag")
    {
        iso_atag = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::RouteMap()
    :
    rm_point{YType::str, "rm-point"}
{
    yang_name = "route-map"; yang_parent_name = "iso-igrp";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::~RouteMap()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::has_data() const
{
    return rm_point.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(rm_point.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_entity_path(Entity* ancestor) const
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

    if (rm_point.is_set || is_set(rm_point.operation)) leaf_name_data.push_back(rm_point.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rm-point")
    {
        rm_point = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp::Lisp()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp::~Lisp()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile::Mobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "mobile"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile::~Mobile()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Ospfv3()
{
    yang_name = "ospfv3"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::~Ospfv3()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::has_data() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "os3-id")
    {
        for(auto const & c : os3_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id>();
        c->parent = this;
        os3_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : os3_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::Os3Id()
    :
    os3_id{YType::uint16, "os3-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "os3-id"; yang_parent_name = "ospfv3";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::~Os3Id()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::has_data() const
{
    return os3_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::has_operation() const
{
    return is_set(operation)
	|| is_set(os3_id.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os3-id" <<"[os3-id='" <<os3_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Os3Id' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (os3_id.is_set || is_set(os3_id.operation)) leaf_name_data.push_back(os3_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "os3-id")
    {
        os3_id = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "rip"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip::~Rip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Static_()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "static"; yang_parent_name = "vrf-nm";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::~Static_()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "static";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::~Clns()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "static";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Global()
    :
    ospf{YType::uint16, "ospf"}
    	,
    application(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application>())
	,bgp(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp>())
	,connected(nullptr) // presence node
	,eigrp(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp>())
	,isis(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_>())
	,iso_igrp(nullptr) // presence node
	,lisp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,ospfv3(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3>())
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
{
    application->parent = this;

    bgp->parent = this;

    eigrp->parent = this;

    isis->parent = this;

    ospfv3->parent = this;

    yang_name = "global"; yang_parent_name = "vrf";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::~Global()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::has_data() const
{
    return ospf.is_set
	|| (application !=  nullptr && application->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(ospf.operation)
	|| (application !=  nullptr && application->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospf.is_set || is_set(ospf.operation)) leaf_name_data.push_back(ospf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospf")
    {
        ospf = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Application()
{
    yang_name = "application"; yang_parent_name = "global";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::~Application()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::has_data() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::has_operation() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "appname")
    {
        for(auto const & c : appname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname>();
        c->parent = this;
        appname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : appname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname::Appname()
    :
    appname{YType::str, "appname"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "appname"; yang_parent_name = "application";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname::~Appname()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname::has_data() const
{
    return appname.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname::has_operation() const
{
    return is_set(operation)
	|| is_set(appname.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appname" <<"[appname='" <<appname <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Appname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appname.is_set || is_set(appname.operation)) leaf_name_data.push_back(appname.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "appname")
    {
        appname = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::Bgp()
    :
    a_lesser_1_period_0_xx_period_yy_greater_{YType::empty, "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_"}
{
    yang_name = "bgp"; yang_parent_name = "global";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::~Bgp()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::has_data() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_data())
            return true;
    }
    return a_lesser_1_period_0_xx_period_yy_greater_.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::has_operation() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(a_lesser_1_period_0_xx_period_yy_greater_.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::get_entity_path(Entity* ancestor) const
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

    if (a_lesser_1_period_0_xx_period_yy_greater_.is_set || is_set(a_lesser_1_period_0_xx_period_yy_greater_.operation)) leaf_name_data.push_back(a_lesser_1_period_0_xx_period_yy_greater_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bp-as-num")
    {
        for(auto const & c : bp_as_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum>();
        c->parent = this;
        bp_as_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bp_as_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_ = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::BpAsNum()
    :
    bp_as_num{YType::str, "bp-as-num"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "bp-as-num"; yang_parent_name = "bgp";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::~BpAsNum()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::has_data() const
{
    return bp_as_num.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::has_operation() const
{
    return is_set(operation)
	|| is_set(bp_as_num.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp-as-num" <<"[bp-as-num='" <<bp_as_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BpAsNum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bp_as_num.is_set || is_set(bp_as_num.operation)) leaf_name_data.push_back(bp_as_num.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "bp-as-num";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::~Clns()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "bp-as-num";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected::Connected()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "connected"; yang_parent_name = "global";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected::~Connected()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::Eigrp()
{
    yang_name = "eigrp"; yang_parent_name = "global";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::~Eigrp()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::has_data() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp-as")
    {
        for(auto const & c : eigrp_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs>();
        c->parent = this;
        eigrp_as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp_as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::EigrpAs()
    :
    eigrp_as{YType::uint16, "eigrp-as"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "eigrp-as"; yang_parent_name = "eigrp";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::~EigrpAs()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::has_data() const
{
    return eigrp_as.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::has_operation() const
{
    return is_set(operation)
	|| is_set(eigrp_as.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-as" <<"[eigrp-as='" <<eigrp_as <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EigrpAs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp_as.is_set || is_set(eigrp_as.operation)) leaf_name_data.push_back(eigrp_as.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Isis_()
    :
    ip(nullptr) // presence node
{
    yang_name = "isis"; yang_parent_name = "global";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::~Isis_()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::has_data() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_data())
            return true;
    }
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::has_operation() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "isis-atag")
    {
        for(auto const & c : isis_atag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag>();
        c->parent = this;
        isis_atag.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    for (auto const & c : isis_atag)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::IsisAtag()
    :
    isis_atag{YType::str, "isis-atag"}
    	,
    ip(std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip>())
{
    ip->parent = this;

    yang_name = "isis-atag"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::~IsisAtag()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::has_data() const
{
    return isis_atag.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::has_operation() const
{
    return is_set(operation)
	|| is_set(isis_atag.operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-atag" <<"[isis-atag='" <<isis_atag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisAtag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_atag.is_set || is_set(isis_atag.operation)) leaf_name_data.push_back(isis_atag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "isis-atag")
    {
        isis_atag = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis-atag";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoIgrp()
    :
    route_map(nullptr) // presence node
{
    yang_name = "iso-igrp"; yang_parent_name = "global";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_data())
            return true;
    }
    return (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoIgrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iso-atag")
    {
        for(auto const & c : iso_atag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag>();
        c->parent = this;
        iso_atag.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iso_atag)
    {
        children[c->get_segment_path()] = c;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::IsoAtag()
    :
    iso_atag{YType::str, "iso-atag"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "iso-atag"; yang_parent_name = "iso-igrp";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::~IsoAtag()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::has_data() const
{
    return iso_atag.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::has_operation() const
{
    return is_set(operation)
	|| is_set(iso_atag.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-atag" <<"[iso-atag='" <<iso_atag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoAtag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_atag.is_set || is_set(iso_atag.operation)) leaf_name_data.push_back(iso_atag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iso-atag")
    {
        iso_atag = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::RouteMap()
    :
    rm_point{YType::str, "rm-point"}
{
    yang_name = "route-map"; yang_parent_name = "iso-igrp";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::~RouteMap()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::has_data() const
{
    return rm_point.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(rm_point.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_entity_path(Entity* ancestor) const
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

    if (rm_point.is_set || is_set(rm_point.operation)) leaf_name_data.push_back(rm_point.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::IsoIgrp::RouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rm-point")
    {
        rm_point = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::Lisp()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp"; yang_parent_name = "global";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::~Lisp()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::Mobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "mobile"; yang_parent_name = "global";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::~Mobile()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Ospfv3()
{
    yang_name = "ospfv3"; yang_parent_name = "global";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::~Ospfv3()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::has_data() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "os3-id")
    {
        for(auto const & c : os3_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id>();
        c->parent = this;
        os3_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : os3_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::Os3Id()
    :
    os3_id{YType::uint16, "os3-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "os3-id"; yang_parent_name = "ospfv3";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::~Os3Id()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::has_data() const
{
    return os3_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::has_operation() const
{
    return is_set(operation)
	|| is_set(os3_id.operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os3-id" <<"[os3-id='" <<os3_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Os3Id' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (os3_id.is_set || is_set(os3_id.operation)) leaf_name_data.push_back(os3_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "os3-id")
    {
        os3_id = value;
    }
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "rip"; yang_parent_name = "global";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::~Rip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Static_()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "static"; yang_parent_name = "global";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::~Static_()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::get_entity_path(Entity* ancestor) const
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

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "static";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::~Clns()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "static";
}

Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::~Ip()
{
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(levels.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.operation)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "levels")
    {
        levels = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::SetAttachedBit::SetAttachedBit()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "set-attached-bit"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::SetAttachedBit::~SetAttachedBit()
{
}

bool Native::Router::IsisContainer::Isis::SetAttachedBit::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::SetAttachedBit::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::SetAttachedBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-attached-bit";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SetAttachedBit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SetAttachedBit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SetAttachedBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SetAttachedBit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::SetAttachedBit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Snmp::Snmp()
{
    yang_name = "snmp"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Snmp::~Snmp()
{
}

bool Native::Router::IsisContainer::Isis::Snmp::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::IsisContainer::Isis::Snmp::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Router::IsisContainer::Isis::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Snmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Snmp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Snmp::Context::Context()
    :
    name{YType::str, "name"}
    	,
    community(std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::Community>())
	,user(std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User>())
{
    community->parent = this;

    user->parent = this;

    yang_name = "context"; yang_parent_name = "snmp";
}

Native::Router::IsisContainer::Isis::Snmp::Context::~Context()
{
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::has_data() const
{
    return name.is_set
	|| (community !=  nullptr && community->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (community !=  nullptr && community->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Snmp::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Context' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::Community>();
        }
        return community;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(community != nullptr)
    {
        children["community"] = community;
    }

    if(user != nullptr)
    {
        children["user"] = user;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Snmp::Context::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::IsisContainer::Isis::Snmp::Context::Community::Community()
    :
    community_string{YType::str, "community-string"}
    	,
    access(std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access>())
{
    access->parent = this;

    yang_name = "community"; yang_parent_name = "context";
}

Native::Router::IsisContainer::Isis::Snmp::Context::Community::~Community()
{
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::Community::has_data() const
{
    return community_string.is_set
	|| (access !=  nullptr && access->has_data());
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::Community::has_operation() const
{
    return is_set(operation)
	|| is_set(community_string.operation)
	|| (access !=  nullptr && access->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Snmp::Context::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Snmp::Context::Community::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Community' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_string.is_set || is_set(community_string.operation)) leaf_name_data.push_back(community_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Snmp::Context::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access>();
        }
        return access;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Snmp::Context::Community::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "community-string")
    {
        community_string = value;
    }
}

Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::Access()
    :
    acl_name{YType::str, "acl-name"},
    expanded_acl{YType::uint32, "expanded-acl"},
    ipv6{YType::str, "ipv6"},
    ro{YType::empty, "ro"},
    rw{YType::empty, "rw"},
    standard_acl{YType::uint32, "standard-acl"}
{
    yang_name = "access"; yang_parent_name = "community";
}

Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::~Access()
{
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::has_data() const
{
    return acl_name.is_set
	|| expanded_acl.is_set
	|| ipv6.is_set
	|| ro.is_set
	|| rw.is_set
	|| standard_acl.is_set;
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(expanded_acl.operation)
	|| is_set(ipv6.operation)
	|| is_set(ro.operation)
	|| is_set(rw.operation)
	|| is_set(standard_acl.operation);
}

std::string Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Access' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (expanded_acl.is_set || is_set(expanded_acl.operation)) leaf_name_data.push_back(expanded_acl.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (ro.is_set || is_set(ro.operation)) leaf_name_data.push_back(ro.get_name_leafdata());
    if (rw.is_set || is_set(rw.operation)) leaf_name_data.push_back(rw.get_name_leafdata());
    if (standard_acl.is_set || is_set(standard_acl.operation)) leaf_name_data.push_back(standard_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Snmp::Context::Community::Access::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "expanded-acl")
    {
        expanded_acl = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "ro")
    {
        ro = value;
    }
    if(value_path == "rw")
    {
        rw = value;
    }
    if(value_path == "standard-acl")
    {
        standard_acl = value;
    }
}

Native::Router::IsisContainer::Isis::Snmp::Context::User::User()
    :
    name{YType::str, "name"}
    	,
    permisssion(std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion>())
{
    permisssion->parent = this;

    yang_name = "user"; yang_parent_name = "context";
}

Native::Router::IsisContainer::Isis::Snmp::Context::User::~User()
{
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::has_data() const
{
    return name.is_set
	|| (permisssion !=  nullptr && permisssion->has_data());
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (permisssion !=  nullptr && permisssion->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Snmp::Context::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Snmp::Context::User::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'User' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Snmp::Context::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permisssion")
    {
        if(permisssion == nullptr)
        {
            permisssion = std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion>();
        }
        return permisssion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permisssion != nullptr)
    {
        children["permisssion"] = permisssion;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Snmp::Context::User::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Permisssion()
    :
    credential{YType::empty, "credential"},
    encrypted{YType::empty, "encrypted"}
    	,
    access(std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access>())
	,auth(std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth>())
{
    access->parent = this;

    auth->parent = this;

    yang_name = "permisssion"; yang_parent_name = "user";
}

Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::~Permisssion()
{
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::has_data() const
{
    return credential.is_set
	|| encrypted.is_set
	|| (access !=  nullptr && access->has_data())
	|| (auth !=  nullptr && auth->has_data());
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::has_operation() const
{
    return is_set(operation)
	|| is_set(credential.operation)
	|| is_set(encrypted.operation)
	|| (access !=  nullptr && access->has_operation())
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permisssion";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permisssion' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credential.is_set || is_set(credential.operation)) leaf_name_data.push_back(credential.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.operation)) leaf_name_data.push_back(encrypted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access>();
        }
        return access;
    }

    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(auth != nullptr)
    {
        children["auth"] = auth;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "credential")
    {
        credential = value;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
    }
}

Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::Access()
    :
    acl_name{YType::str, "acl-name"},
    ipv6{YType::str, "ipv6"},
    standard_acl{YType::uint32, "standard-acl"}
{
    yang_name = "access"; yang_parent_name = "permisssion";
}

Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::~Access()
{
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::has_data() const
{
    return acl_name.is_set
	|| ipv6.is_set
	|| standard_acl.is_set;
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(ipv6.operation)
	|| is_set(standard_acl.operation);
}

std::string Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Access' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (standard_acl.is_set || is_set(standard_acl.operation)) leaf_name_data.push_back(standard_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Access::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "standard-acl")
    {
        standard_acl = value;
    }
}

Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::Auth()
    :
    md5{YType::str, "md5"},
    sha{YType::str, "sha"}
{
    yang_name = "auth"; yang_parent_name = "permisssion";
}

Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::~Auth()
{
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::has_data() const
{
    return md5.is_set
	|| sha.is_set;
}

bool Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::has_operation() const
{
    return is_set(operation)
	|| is_set(md5.operation)
	|| is_set(sha.operation);
}

std::string Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.operation)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha.is_set || is_set(sha.operation)) leaf_name_data.push_back(sha.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Snmp::Context::User::Permisssion::Auth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "md5")
    {
        md5 = value;
    }
    if(value_path == "sha")
    {
        sha = value;
    }
}

Native::Router::IsisContainer::Isis::SummaryAddress::SummaryAddress()
    :
    ip{YType::str, "ip"},
    mask{YType::str, "mask"}
    	,
    level_1(nullptr) // presence node
	,level_1_2(nullptr) // presence node
	,level_2(nullptr) // presence node
	,metric_tag_container(std::make_shared<Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer>())
{
    metric_tag_container->parent = this;

    yang_name = "summary-address"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::SummaryAddress::~SummaryAddress()
{
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::has_data() const
{
    return ip.is_set
	|| mask.is_set
	|| (level_1 !=  nullptr && level_1->has_data())
	|| (level_1_2 !=  nullptr && level_1_2->has_data())
	|| (level_2 !=  nullptr && level_2->has_data())
	|| (metric_tag_container !=  nullptr && metric_tag_container->has_data());
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(mask.operation)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_1_2 !=  nullptr && level_1_2->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation())
	|| (metric_tag_container !=  nullptr && metric_tag_container->has_operation());
}

std::string Native::Router::IsisContainer::Isis::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address" <<"[ip='" <<ip <<"']" <<"[mask='" <<mask <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SummaryAddress::get_entity_path(Entity* ancestor) const
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

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::IsisContainer::Isis::SummaryAddress::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-1-2")
    {
        if(level_1_2 == nullptr)
        {
            level_1_2 = std::make_shared<Native::Router::IsisContainer::Isis::SummaryAddress::Level12>();
        }
        return level_1_2;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::IsisContainer::Isis::SummaryAddress::Level2>();
        }
        return level_2;
    }

    if(child_yang_name == "metric-tag-container")
    {
        if(metric_tag_container == nullptr)
        {
            metric_tag_container = std::make_shared<Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer>();
        }
        return metric_tag_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_1_2 != nullptr)
    {
        children["level-1-2"] = level_1_2;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    if(metric_tag_container != nullptr)
    {
        children["metric-tag-container"] = metric_tag_container;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::SummaryAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::Router::IsisContainer::Isis::SummaryAddress::Level1::Level1()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{
    yang_name = "level-1"; yang_parent_name = "summary-address";
}

Native::Router::IsisContainer::Isis::SummaryAddress::Level1::~Level1()
{
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level1::has_data() const
{
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level1::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::IsisContainer::Isis::SummaryAddress::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SummaryAddress::Level1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SummaryAddress::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SummaryAddress::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::SummaryAddress::Level1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::IsisContainer::Isis::SummaryAddress::Level12::Level12()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{
    yang_name = "level-1-2"; yang_parent_name = "summary-address";
}

Native::Router::IsisContainer::Isis::SummaryAddress::Level12::~Level12()
{
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level12::has_data() const
{
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level12::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::IsisContainer::Isis::SummaryAddress::Level12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1-2";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SummaryAddress::Level12::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level12' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SummaryAddress::Level12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SummaryAddress::Level12::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::SummaryAddress::Level12::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::IsisContainer::Isis::SummaryAddress::Level2::Level2()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{
    yang_name = "level-2"; yang_parent_name = "summary-address";
}

Native::Router::IsisContainer::Isis::SummaryAddress::Level2::~Level2()
{
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level2::has_data() const
{
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::Level2::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::IsisContainer::Isis::SummaryAddress::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SummaryAddress::Level2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SummaryAddress::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SummaryAddress::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::SummaryAddress::Level2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::MetricTagContainer()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{
    yang_name = "metric-tag-container"; yang_parent_name = "summary-address";
}

Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::~MetricTagContainer()
{
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::has_data() const
{
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(metric.operation)
	|| is_set(tag.operation);
}

std::string Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-tag-container";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MetricTagContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::SummaryAddress::MetricTagContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Router::IsisContainer::Isis::TrafficShare::TrafficShare()
    :
    min(std::make_shared<Native::Router::IsisContainer::Isis::TrafficShare::Min>())
{
    min->parent = this;

    yang_name = "traffic-share"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::TrafficShare::~TrafficShare()
{
}

bool Native::Router::IsisContainer::Isis::TrafficShare::has_data() const
{
    return (min !=  nullptr && min->has_data());
}

bool Native::Router::IsisContainer::Isis::TrafficShare::has_operation() const
{
    return is_set(operation)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Router::IsisContainer::Isis::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::TrafficShare::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Router::IsisContainer::Isis::TrafficShare::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min != nullptr)
    {
        children["min"] = min;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::TrafficShare::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::TrafficShare::Min::Min()
    :
    across_interfaces{YType::empty, "across-interfaces"}
{
    yang_name = "min"; yang_parent_name = "traffic-share";
}

Native::Router::IsisContainer::Isis::TrafficShare::Min::~Min()
{
}

bool Native::Router::IsisContainer::Isis::TrafficShare::Min::has_data() const
{
    return across_interfaces.is_set;
}

bool Native::Router::IsisContainer::Isis::TrafficShare::Min::has_operation() const
{
    return is_set(operation)
	|| is_set(across_interfaces.operation);
}

std::string Native::Router::IsisContainer::Isis::TrafficShare::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::TrafficShare::Min::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::TrafficShare::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::TrafficShare::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::TrafficShare::Min::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
    }
}

Native::Router::IsisContainer::Isis::Advertise::Advertise()
    :
    passive_only{YType::empty, "passive-only"}
{
    yang_name = "advertise"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Advertise::~Advertise()
{
}

bool Native::Router::IsisContainer::Isis::Advertise::has_data() const
{
    return passive_only.is_set;
}

bool Native::Router::IsisContainer::Isis::Advertise::has_operation() const
{
    return is_set(operation)
	|| is_set(passive_only.operation);
}

std::string Native::Router::IsisContainer::Isis::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Advertise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advertise' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive_only.is_set || is_set(passive_only.operation)) leaf_name_data.push_back(passive_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Advertise::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "passive-only")
    {
        passive_only = value;
    }
}

Native::Router::IsisContainer::Isis::DefaultInformation::DefaultInformation()
    :
    originate(nullptr) // presence node
{
    yang_name = "default-information"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::IsisContainer::Isis::DefaultInformation::has_data() const
{
    return (originate !=  nullptr && originate->has_data());
}

bool Native::Router::IsisContainer::Isis::DefaultInformation::has_operation() const
{
    return is_set(operation)
	|| (originate !=  nullptr && originate->has_operation());
}

std::string Native::Router::IsisContainer::Isis::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::DefaultInformation::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "originate")
    {
        if(originate == nullptr)
        {
            originate = std::make_shared<Native::Router::IsisContainer::Isis::DefaultInformation::Originate>();
        }
        return originate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(originate != nullptr)
    {
        children["originate"] = originate;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::DefaultInformation::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::DefaultInformation::Originate::Originate()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "originate"; yang_parent_name = "default-information";
}

Native::Router::IsisContainer::Isis::DefaultInformation::Originate::~Originate()
{
}

bool Native::Router::IsisContainer::Isis::DefaultInformation::Originate::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::IsisContainer::Isis::DefaultInformation::Originate::has_operation() const
{
    return is_set(operation)
	|| is_set(route_map.operation);
}

std::string Native::Router::IsisContainer::Isis::DefaultInformation::Originate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::DefaultInformation::Originate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Originate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.operation)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::DefaultInformation::Originate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::DefaultInformation::Originate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::DefaultInformation::Originate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-map")
    {
        route_map = value;
    }
}

Native::Router::IsisContainer::Isis::Metric::Metric()
    :
    metric{YType::uint32, "metric"}
{
    yang_name = "metric"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Metric::~Metric()
{
}

bool Native::Router::IsisContainer::Isis::Metric::has_data() const
{
    for (std::size_t index=0; index<metrics.size(); index++)
    {
        if(metrics[index]->has_data())
            return true;
    }
    return metric.is_set;
}

bool Native::Router::IsisContainer::Isis::Metric::has_operation() const
{
    for (std::size_t index=0; index<metrics.size(); index++)
    {
        if(metrics[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(metric.operation);
}

std::string Native::Router::IsisContainer::Isis::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Metric::get_entity_path(Entity* ancestor) const
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

    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metrics")
    {
        for(auto const & c : metrics)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::Metric::Metrics>();
        c->parent = this;
        metrics.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metrics)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Metric::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "metric")
    {
        metric = value;
    }
}

Native::Router::IsisContainer::Isis::Metric::Metrics::Metrics()
    :
    level{YType::enumeration, "level"},
    metric{YType::uint32, "metric"}
{
    yang_name = "metrics"; yang_parent_name = "metric";
}

Native::Router::IsisContainer::Isis::Metric::Metrics::~Metrics()
{
}

bool Native::Router::IsisContainer::Isis::Metric::Metrics::has_data() const
{
    return level.is_set
	|| metric.is_set;
}

bool Native::Router::IsisContainer::Isis::Metric::Metrics::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(metric.operation);
}

std::string Native::Router::IsisContainer::Isis::Metric::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Metric::Metrics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metrics' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Metric::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Metric::Metrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::Metric::Metrics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

Native::Router::IsisContainer::Isis::PrcInterval::PrcInterval()
    :
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    minimum_wait{YType::uint32, "minimum-wait"}
{
    yang_name = "prc-interval"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::PrcInterval::~PrcInterval()
{
}

bool Native::Router::IsisContainer::Isis::PrcInterval::has_data() const
{
    return initial_wait.is_set
	|| interval.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::IsisContainer::Isis::PrcInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(initial_wait.operation)
	|| is_set(interval.operation)
	|| is_set(minimum_wait.operation);
}

std::string Native::Router::IsisContainer::Isis::PrcInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc-interval";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::PrcInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrcInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_wait.is_set || is_set(initial_wait.operation)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.operation)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::PrcInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::PrcInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::PrcInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial-wait")
    {
        initial_wait = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
    }
}

Native::Router::IsisContainer::Isis::SetOverloadBit::SetOverloadBit()
    :
    on_startup(std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup>())
	,suppress(std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress>())
{
    on_startup->parent = this;

    suppress->parent = this;

    yang_name = "set-overload-bit"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::SetOverloadBit::~SetOverloadBit()
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::has_data() const
{
    return (on_startup !=  nullptr && on_startup->has_data())
	|| (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::has_operation() const
{
    return is_set(operation)
	|| (on_startup !=  nullptr && on_startup->has_operation())
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::IsisContainer::Isis::SetOverloadBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-overload-bit";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SetOverloadBit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SetOverloadBit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup>();
        }
        return on_startup;
    }

    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    if(suppress != nullptr)
    {
        children["suppress"] = suppress;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::SetOverloadBit::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::OnStartup()
    :
    time(std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time>())
	,wait_for_bgp(nullptr) // presence node
{
    time->parent = this;

    yang_name = "on-startup"; yang_parent_name = "set-overload-bit";
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::~OnStartup()
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::has_data() const
{
    return (time !=  nullptr && time->has_data())
	|| (wait_for_bgp !=  nullptr && wait_for_bgp->has_data());
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::has_operation() const
{
    return is_set(operation)
	|| (time !=  nullptr && time->has_operation())
	|| (wait_for_bgp !=  nullptr && wait_for_bgp->has_operation());
}

std::string Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OnStartup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time>();
        }
        return time;
    }

    if(child_yang_name == "wait-for-bgp")
    {
        if(wait_for_bgp == nullptr)
        {
            wait_for_bgp = std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp>();
        }
        return wait_for_bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    if(wait_for_bgp != nullptr)
    {
        children["wait-for-bgp"] = wait_for_bgp;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::Time()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"},
    suppress{YType::empty, "suppress"},
    time{YType::uint32, "time"}
{
    yang_name = "time"; yang_parent_name = "on-startup";
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::~Time()
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::has_data() const
{
    return external.is_set
	|| interlevel.is_set
	|| suppress.is_set
	|| time.is_set;
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::has_operation() const
{
    return is_set(operation)
	|| is_set(external.operation)
	|| is_set(interlevel.operation)
	|| is_set(suppress.operation)
	|| is_set(time.operation);
}

std::string Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Time' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.operation)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.operation)) leaf_name_data.push_back(interlevel.get_name_leafdata());
    if (suppress.is_set || is_set(suppress.operation)) leaf_name_data.push_back(suppress.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::Time::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external")
    {
        external = value;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
    }
    if(value_path == "suppress")
    {
        suppress = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::WaitForBgp()
    :
    suppress(std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress>())
{
    suppress->parent = this;

    yang_name = "wait-for-bgp"; yang_parent_name = "on-startup";
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::~WaitForBgp()
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::has_data() const
{
    return (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::has_operation() const
{
    return is_set(operation)
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wait-for-bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WaitForBgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(suppress != nullptr)
    {
        children["suppress"] = suppress;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::Suppress()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{
    yang_name = "suppress"; yang_parent_name = "wait-for-bgp";
}

Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::~Suppress()
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_data() const
{
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_operation() const
{
    return is_set(operation)
	|| is_set(external.operation)
	|| is_set(interlevel.operation);
}

std::string Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Suppress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.operation)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.operation)) leaf_name_data.push_back(interlevel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::SetOverloadBit::OnStartup::WaitForBgp::Suppress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external")
    {
        external = value;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
    }
}

Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::Suppress()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{
    yang_name = "suppress"; yang_parent_name = "set-overload-bit";
}

Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::~Suppress()
{
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::has_data() const
{
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::has_operation() const
{
    return is_set(operation)
	|| is_set(external.operation)
	|| is_set(interlevel.operation);
}

std::string Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Suppress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.operation)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.operation)) leaf_name_data.push_back(interlevel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::SetOverloadBit::Suppress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external")
    {
        external = value;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
    }
}

Native::Router::IsisContainer::Isis::SpfInterval::SpfInterval()
    :
    intervals(std::make_shared<Native::Router::IsisContainer::Isis::SpfInterval::Intervals>())
{
    intervals->parent = this;

    yang_name = "spf-interval"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::SpfInterval::~SpfInterval()
{
}

bool Native::Router::IsisContainer::Isis::SpfInterval::has_data() const
{
    for (std::size_t index=0; index<level_1_2.size(); index++)
    {
        if(level_1_2[index]->has_data())
            return true;
    }
    return (intervals !=  nullptr && intervals->has_data());
}

bool Native::Router::IsisContainer::Isis::SpfInterval::has_operation() const
{
    for (std::size_t index=0; index<level_1_2.size(); index++)
    {
        if(level_1_2[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (intervals !=  nullptr && intervals->has_operation());
}

std::string Native::Router::IsisContainer::Isis::SpfInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-interval";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SpfInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SpfInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intervals")
    {
        if(intervals == nullptr)
        {
            intervals = std::make_shared<Native::Router::IsisContainer::Isis::SpfInterval::Intervals>();
        }
        return intervals;
    }

    if(child_yang_name == "level-1-2")
    {
        for(auto const & c : level_1_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::IsisContainer::Isis::SpfInterval::Level12>();
        c->parent = this;
        level_1_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SpfInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(intervals != nullptr)
    {
        children["intervals"] = intervals;
    }

    for (auto const & c : level_1_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::SpfInterval::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::SpfInterval::Level12::Level12()
    :
    level{YType::enumeration, "level"},
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    minimum_wait{YType::uint32, "minimum-wait"}
{
    yang_name = "level-1-2"; yang_parent_name = "spf-interval";
}

Native::Router::IsisContainer::Isis::SpfInterval::Level12::~Level12()
{
}

bool Native::Router::IsisContainer::Isis::SpfInterval::Level12::has_data() const
{
    return level.is_set
	|| initial_wait.is_set
	|| interval.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::IsisContainer::Isis::SpfInterval::Level12::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(initial_wait.operation)
	|| is_set(interval.operation)
	|| is_set(minimum_wait.operation);
}

std::string Native::Router::IsisContainer::Isis::SpfInterval::Level12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1-2" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SpfInterval::Level12::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level12' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.operation)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.operation)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SpfInterval::Level12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SpfInterval::Level12::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::SpfInterval::Level12::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
    }
}

Native::Router::IsisContainer::Isis::SpfInterval::Intervals::Intervals()
    :
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    minimum_wait{YType::uint32, "minimum-wait"}
{
    yang_name = "intervals"; yang_parent_name = "spf-interval";
}

Native::Router::IsisContainer::Isis::SpfInterval::Intervals::~Intervals()
{
}

bool Native::Router::IsisContainer::Isis::SpfInterval::Intervals::has_data() const
{
    return initial_wait.is_set
	|| interval.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::IsisContainer::Isis::SpfInterval::Intervals::has_operation() const
{
    return is_set(operation)
	|| is_set(initial_wait.operation)
	|| is_set(interval.operation)
	|| is_set(minimum_wait.operation);
}

std::string Native::Router::IsisContainer::Isis::SpfInterval::Intervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::SpfInterval::Intervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Intervals' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_wait.is_set || is_set(initial_wait.operation)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.operation)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::SpfInterval::Intervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::SpfInterval::Intervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::SpfInterval::Intervals::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial-wait")
    {
        initial_wait = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
    }
}

Native::Router::IsisContainer::Isis::AreaPassword::AreaPassword()
    :
    authenticate{YType::empty, "authenticate"},
    name{YType::str, "name"},
    snp{YType::enumeration, "snp"}
{
    yang_name = "area-password"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::AreaPassword::~AreaPassword()
{
}

bool Native::Router::IsisContainer::Isis::AreaPassword::has_data() const
{
    return authenticate.is_set
	|| name.is_set
	|| snp.is_set;
}

bool Native::Router::IsisContainer::Isis::AreaPassword::has_operation() const
{
    return is_set(operation)
	|| is_set(authenticate.operation)
	|| is_set(name.operation)
	|| is_set(snp.operation);
}

std::string Native::Router::IsisContainer::Isis::AreaPassword::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-password";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::AreaPassword::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaPassword' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticate.is_set || is_set(authenticate.operation)) leaf_name_data.push_back(authenticate.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (snp.is_set || is_set(snp.operation)) leaf_name_data.push_back(snp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::AreaPassword::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::AreaPassword::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::IsisContainer::Isis::AreaPassword::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authenticate")
    {
        authenticate = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "snp")
    {
        snp = value;
    }
}

Native::Router::IsisContainer::Isis::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Router::IsisContainer::Isis::Authentication::KeyChain>())
	,mode(std::make_shared<Native::Router::IsisContainer::Isis::Authentication::Mode>())
	,send_only(nullptr) // presence node
{
    key_chain->parent = this;

    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "isis";
}

Native::Router::IsisContainer::Isis::Authentication::~Authentication()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (send_only !=  nullptr && send_only->has_data());
}

bool Native::Router::IsisContainer::Isis::Authentication::has_operation() const
{
    return is_set(operation)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (send_only !=  nullptr && send_only->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Authentication::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Router::IsisContainer::Isis::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Router::IsisContainer::Isis::Authentication::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "send-only")
    {
        if(send_only == nullptr)
        {
            send_only = std::make_shared<Native::Router::IsisContainer::Isis::Authentication::SendOnly>();
        }
        return send_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(send_only != nullptr)
    {
        children["send-only"] = send_only;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Native::Router::IsisContainer::Isis::Authentication::Mode::Mode()
    :
    md5(nullptr) // presence node
	,text(nullptr) // presence node
{
    yang_name = "mode"; yang_parent_name = "authentication";
}

Native::Router::IsisContainer::Isis::Authentication::Mode::~Mode()
{
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::has_data() const
{
    return (md5 !=  nullptr && md5->has_data())
	|| (text !=  nullptr && text->has_data());
}

bool Native::Router::IsisContainer::Isis::Authentication::Mode::has_operation() const
{
    return is_set(operation)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (text !=  nullptr && text->has_operation());
}

std::string Native::Router::IsisContainer::Isis::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";

    return path_buffer.str();

}

const EntityPath Native::Router::IsisContainer::Isis::Authentication::Mode::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::IsisContainer::Isis::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Router::IsisContainer::Isis::Authentication::Mode::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "text")
    {
        if(text == nullptr)
        {
            text = std::make_shared<Native::Router::IsisContainer::Isis::Authentication::Mode::Text>();
        }
        return text;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::IsisContainer::Isis::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    if(text != nullptr)
    {
        children["text"] = text;
    }

    return children;
}

void Native::Router::IsisContainer::Isis::Authentication::Mode::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Application::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Bgp::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Connected::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak::IsisRedistLevels1Enum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak::IsisRedistLevels1Enum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak::IsisRedistLevels2Enum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak::IsisRedistLevels2Enum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Lisp::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nd::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Nemo::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::Internal::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::External::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Ospf::Match::NssaExternal::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Rip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::Redistribute::Static_::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SummaryPrefix::LevelsEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SummaryPrefix::LevelsEnum::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AddressFamily::Ipv6::SummaryPrefix::LevelsEnum::level_2 {2, "level-2"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Application::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Application::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Application::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Application::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Bgp::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Bgp::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Bgp::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Bgp::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Bgp::Clns::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Bgp::Ip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Connected::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Connected::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Connected::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Connected::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Eigrp::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Eigrp::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Eigrp::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Eigrp::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Isis_::IsisRedistribute::Ip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip::IsisRedistLevels1Enum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip::IsisRedistLevels1Enum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip::IsisRedistLevels2Enum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Isis_::Ip::IsisRedistLevels2Enum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::IsoIgrp::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Lisp::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Lisp::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Lisp::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Lisp::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Mobile::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Mobile::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Mobile::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Mobile::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Odr::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Odr::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Odr::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Odr::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospf::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospf::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospf::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospf::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::Internal::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::External::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospf::Match::NssaExternal::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::Internal::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::External::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Ospfv3::Match::NssaExternal::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Rip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Rip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Rip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Rip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Static_::Clns::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Static_::Ip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Application::Appname::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Connected::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Lisp::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Mobile::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Rip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Clns::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::VrfNm::Static_::Ip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Application::Appname::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Connected::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Isis_::Ip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Lisp::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Mobile::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Rip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Clns::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricTypeEnum::external {0, "external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricTypeEnum::internal {1, "internal"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricTypeEnum::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Redistribute::Vrf::Global::Static_::Ip::MetricTypeEnum::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::Metric::Metrics::LevelEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::Metric::Metrics::LevelEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::SpfInterval::Level12::LevelEnum::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::SpfInterval::Level12::LevelEnum::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::IsisContainer::Isis::AreaPassword::SnpEnum::send_only {0, "send-only"};
const Enum::YLeaf Native::Router::IsisContainer::Isis::AreaPassword::SnpEnum::validate {1, "validate"};


}
}

