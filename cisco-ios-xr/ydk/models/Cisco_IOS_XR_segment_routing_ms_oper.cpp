
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_segment_routing_ms_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_segment_routing_ms_oper {

Srms::Mapping::MappingIpv4::MappingMi::Addr::Addr()
    :
    	af{YType::enumeration, "af"},
	 ipv4{YType::str, "ipv4"},
	 ipv6{YType::str, "ipv6"}
{
    yang_name = "addr"; yang_parent_name = "mapping-mi";
}

Srms::Mapping::MappingIpv4::MappingMi::Addr::~Addr()
{
}

bool Srms::Mapping::MappingIpv4::MappingMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Srms::Mapping::MappingIpv4::MappingMi::Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Srms::Mapping::MappingIpv4::MappingMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

EntityPath Srms::Mapping::MappingIpv4::MappingMi::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/mapping/mapping-ipv4/mapping-mi/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Mapping::MappingIpv4::MappingMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Mapping::MappingIpv4::MappingMi::Addr::get_children()
{
    return children;
}

void Srms::Mapping::MappingIpv4::MappingMi::Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Srms::Mapping::MappingIpv4::MappingMi::MappingMi()
    :
    	area{YType::str, "area"},
	 flag_attached{YType::enumeration, "flag-attached"},
	 ip{YType::str, "ip"},
	 last_prefix{YType::str, "last-prefix"},
	 last_sid_index{YType::uint32, "last-sid-index"},
	 prefix{YType::int32, "prefix"},
	 prefix_xr{YType::uint8, "prefix-xr"},
	 router{YType::str, "router"},
	 sid_count{YType::uint32, "sid-count"},
	 sid_start{YType::uint32, "sid-start"},
	 src{YType::enumeration, "src"}
    	,
    addr(std::make_unique<Srms::Mapping::MappingIpv4::MappingMi::Addr>())
{
    addr->parent = this;
    children["addr"] = addr.get();

    yang_name = "mapping-mi"; yang_parent_name = "mapping-ipv4";
}

Srms::Mapping::MappingIpv4::MappingMi::~MappingMi()
{
}

bool Srms::Mapping::MappingIpv4::MappingMi::has_data() const
{
    return area.is_set
	|| flag_attached.is_set
	|| ip.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| prefix_xr.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Srms::Mapping::MappingIpv4::MappingMi::has_operation() const
{
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(flag_attached.operation)
	|| is_set(ip.operation)
	|| is_set(last_prefix.operation)
	|| is_set(last_sid_index.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_xr.operation)
	|| is_set(router.operation)
	|| is_set(sid_count.operation)
	|| is_set(sid_start.operation)
	|| is_set(src.operation)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Srms::Mapping::MappingIpv4::MappingMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-mi";

    return path_buffer.str();

}

EntityPath Srms::Mapping::MappingIpv4::MappingMi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/mapping/mapping-ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.operation)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.operation)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.operation)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_xr.is_set || is_set(prefix_xr.operation)) leaf_name_data.push_back(prefix_xr.get_name_leafdata());
    if (router.is_set || is_set(router.operation)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.operation)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.operation)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.operation)) leaf_name_data.push_back(src.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Mapping::MappingIpv4::MappingMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addr")
    {
        if(addr != nullptr)
        {
            children["addr"] = addr.get();
        }
        else
        {
            addr = std::make_unique<Srms::Mapping::MappingIpv4::MappingMi::Addr>();
            addr->parent = this;
            children["addr"] = addr.get();
        }
        return children.at("addr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Mapping::MappingIpv4::MappingMi::get_children()
{
    if(children.find("addr") == children.end())
    {
        if(addr != nullptr)
        {
            children["addr"] = addr.get();
        }
    }

    return children;
}

void Srms::Mapping::MappingIpv4::MappingMi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr = value;
    }
    if(value_path == "router")
    {
        router = value;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
    }
    if(value_path == "src")
    {
        src = value;
    }
}

Srms::Mapping::MappingIpv4::MappingIpv4()
{
    yang_name = "mapping-ipv4"; yang_parent_name = "mapping";
}

Srms::Mapping::MappingIpv4::~MappingIpv4()
{
}

bool Srms::Mapping::MappingIpv4::has_data() const
{
    for (std::size_t index=0; index<mapping_mi.size(); index++)
    {
        if(mapping_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Mapping::MappingIpv4::has_operation() const
{
    for (std::size_t index=0; index<mapping_mi.size(); index++)
    {
        if(mapping_mi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srms::Mapping::MappingIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-ipv4";

    return path_buffer.str();

}

EntityPath Srms::Mapping::MappingIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/mapping/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Mapping::MappingIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mapping-mi")
    {
        for(auto const & c : mapping_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srms::Mapping::MappingIpv4::MappingMi>();
        c->parent = this;
        mapping_mi.push_back(std::move(c));
        children[segment_path] = mapping_mi.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Mapping::MappingIpv4::get_children()
{
    for (auto const & c : mapping_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srms::Mapping::MappingIpv4::set_value(const std::string & value_path, std::string value)
{
}

Srms::Mapping::MappingIpv6::MappingMi::Addr::Addr()
    :
    	af{YType::enumeration, "af"},
	 ipv4{YType::str, "ipv4"},
	 ipv6{YType::str, "ipv6"}
{
    yang_name = "addr"; yang_parent_name = "mapping-mi";
}

Srms::Mapping::MappingIpv6::MappingMi::Addr::~Addr()
{
}

bool Srms::Mapping::MappingIpv6::MappingMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Srms::Mapping::MappingIpv6::MappingMi::Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Srms::Mapping::MappingIpv6::MappingMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

EntityPath Srms::Mapping::MappingIpv6::MappingMi::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/mapping/mapping-ipv6/mapping-mi/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Mapping::MappingIpv6::MappingMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Mapping::MappingIpv6::MappingMi::Addr::get_children()
{
    return children;
}

void Srms::Mapping::MappingIpv6::MappingMi::Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Srms::Mapping::MappingIpv6::MappingMi::MappingMi()
    :
    	area{YType::str, "area"},
	 flag_attached{YType::enumeration, "flag-attached"},
	 ip{YType::str, "ip"},
	 last_prefix{YType::str, "last-prefix"},
	 last_sid_index{YType::uint32, "last-sid-index"},
	 prefix{YType::int32, "prefix"},
	 prefix_xr{YType::uint8, "prefix-xr"},
	 router{YType::str, "router"},
	 sid_count{YType::uint32, "sid-count"},
	 sid_start{YType::uint32, "sid-start"},
	 src{YType::enumeration, "src"}
    	,
    addr(std::make_unique<Srms::Mapping::MappingIpv6::MappingMi::Addr>())
{
    addr->parent = this;
    children["addr"] = addr.get();

    yang_name = "mapping-mi"; yang_parent_name = "mapping-ipv6";
}

Srms::Mapping::MappingIpv6::MappingMi::~MappingMi()
{
}

bool Srms::Mapping::MappingIpv6::MappingMi::has_data() const
{
    return area.is_set
	|| flag_attached.is_set
	|| ip.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix.is_set
	|| prefix_xr.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Srms::Mapping::MappingIpv6::MappingMi::has_operation() const
{
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(flag_attached.operation)
	|| is_set(ip.operation)
	|| is_set(last_prefix.operation)
	|| is_set(last_sid_index.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_xr.operation)
	|| is_set(router.operation)
	|| is_set(sid_count.operation)
	|| is_set(sid_start.operation)
	|| is_set(src.operation)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Srms::Mapping::MappingIpv6::MappingMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-mi";

    return path_buffer.str();

}

EntityPath Srms::Mapping::MappingIpv6::MappingMi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/mapping/mapping-ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.operation)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.operation)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.operation)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_xr.is_set || is_set(prefix_xr.operation)) leaf_name_data.push_back(prefix_xr.get_name_leafdata());
    if (router.is_set || is_set(router.operation)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.operation)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.operation)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.operation)) leaf_name_data.push_back(src.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Mapping::MappingIpv6::MappingMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addr")
    {
        if(addr != nullptr)
        {
            children["addr"] = addr.get();
        }
        else
        {
            addr = std::make_unique<Srms::Mapping::MappingIpv6::MappingMi::Addr>();
            addr->parent = this;
            children["addr"] = addr.get();
        }
        return children.at("addr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Mapping::MappingIpv6::MappingMi::get_children()
{
    if(children.find("addr") == children.end())
    {
        if(addr != nullptr)
        {
            children["addr"] = addr.get();
        }
    }

    return children;
}

void Srms::Mapping::MappingIpv6::MappingMi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr = value;
    }
    if(value_path == "router")
    {
        router = value;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
    }
    if(value_path == "src")
    {
        src = value;
    }
}

Srms::Mapping::MappingIpv6::MappingIpv6()
{
    yang_name = "mapping-ipv6"; yang_parent_name = "mapping";
}

Srms::Mapping::MappingIpv6::~MappingIpv6()
{
}

bool Srms::Mapping::MappingIpv6::has_data() const
{
    for (std::size_t index=0; index<mapping_mi.size(); index++)
    {
        if(mapping_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Mapping::MappingIpv6::has_operation() const
{
    for (std::size_t index=0; index<mapping_mi.size(); index++)
    {
        if(mapping_mi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srms::Mapping::MappingIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-ipv6";

    return path_buffer.str();

}

EntityPath Srms::Mapping::MappingIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/mapping/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Mapping::MappingIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mapping-mi")
    {
        for(auto const & c : mapping_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srms::Mapping::MappingIpv6::MappingMi>();
        c->parent = this;
        mapping_mi.push_back(std::move(c));
        children[segment_path] = mapping_mi.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Mapping::MappingIpv6::get_children()
{
    for (auto const & c : mapping_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srms::Mapping::MappingIpv6::set_value(const std::string & value_path, std::string value)
{
}

Srms::Mapping::Mapping()
    :
    mapping_ipv4(std::make_unique<Srms::Mapping::MappingIpv4>())
	,mapping_ipv6(std::make_unique<Srms::Mapping::MappingIpv6>())
{
    mapping_ipv4->parent = this;
    children["mapping-ipv4"] = mapping_ipv4.get();

    mapping_ipv6->parent = this;
    children["mapping-ipv6"] = mapping_ipv6.get();

    yang_name = "mapping"; yang_parent_name = "srms";
}

Srms::Mapping::~Mapping()
{
}

bool Srms::Mapping::has_data() const
{
    return (mapping_ipv4 !=  nullptr && mapping_ipv4->has_data())
	|| (mapping_ipv6 !=  nullptr && mapping_ipv6->has_data());
}

bool Srms::Mapping::has_operation() const
{
    return is_set(operation)
	|| (mapping_ipv4 !=  nullptr && mapping_ipv4->has_operation())
	|| (mapping_ipv6 !=  nullptr && mapping_ipv6->has_operation());
}

std::string Srms::Mapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping";

    return path_buffer.str();

}

EntityPath Srms::Mapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Mapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mapping-ipv4")
    {
        if(mapping_ipv4 != nullptr)
        {
            children["mapping-ipv4"] = mapping_ipv4.get();
        }
        else
        {
            mapping_ipv4 = std::make_unique<Srms::Mapping::MappingIpv4>();
            mapping_ipv4->parent = this;
            children["mapping-ipv4"] = mapping_ipv4.get();
        }
        return children.at("mapping-ipv4");
    }

    if(child_yang_name == "mapping-ipv6")
    {
        if(mapping_ipv6 != nullptr)
        {
            children["mapping-ipv6"] = mapping_ipv6.get();
        }
        else
        {
            mapping_ipv6 = std::make_unique<Srms::Mapping::MappingIpv6>();
            mapping_ipv6->parent = this;
            children["mapping-ipv6"] = mapping_ipv6.get();
        }
        return children.at("mapping-ipv6");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Mapping::get_children()
{
    if(children.find("mapping-ipv4") == children.end())
    {
        if(mapping_ipv4 != nullptr)
        {
            children["mapping-ipv4"] = mapping_ipv4.get();
        }
    }

    if(children.find("mapping-ipv6") == children.end())
    {
        if(mapping_ipv6 != nullptr)
        {
            children["mapping-ipv6"] = mapping_ipv6.get();
        }
    }

    return children;
}

void Srms::Mapping::set_value(const std::string & value_path, std::string value)
{
}

Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::Addr()
    :
    	af{YType::enumeration, "af"},
	 ipv4{YType::str, "ipv4"},
	 ipv6{YType::str, "ipv6"}
{
    yang_name = "addr"; yang_parent_name = "policy-mi";
}

Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::~Addr()
{
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

EntityPath Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::get_children()
{
    return children;
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::PolicyMi()
    :
    	mi_id{YType::str, "mi-id"},
	 area{YType::str, "area"},
	 flag_attached{YType::enumeration, "flag-attached"},
	 last_prefix{YType::str, "last-prefix"},
	 last_sid_index{YType::uint32, "last-sid-index"},
	 prefix_xr{YType::uint8, "prefix-xr"},
	 router{YType::str, "router"},
	 sid_count{YType::uint32, "sid-count"},
	 sid_start{YType::uint32, "sid-start"},
	 src{YType::enumeration, "src"}
    	,
    addr(std::make_unique<Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>())
{
    addr->parent = this;
    children["addr"] = addr.get();

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-backup";
}

Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::~PolicyMi()
{
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix_xr.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::has_operation() const
{
    return is_set(operation)
	|| is_set(mi_id.operation)
	|| is_set(area.operation)
	|| is_set(flag_attached.operation)
	|| is_set(last_prefix.operation)
	|| is_set(last_sid_index.operation)
	|| is_set(prefix_xr.operation)
	|| is_set(router.operation)
	|| is_set(sid_count.operation)
	|| is_set(sid_start.operation)
	|| is_set(src.operation)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/policy-ipv4/policy-ipv4-backup/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.operation)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.operation)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.operation)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.operation)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix_xr.is_set || is_set(prefix_xr.operation)) leaf_name_data.push_back(prefix_xr.get_name_leafdata());
    if (router.is_set || is_set(router.operation)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.operation)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.operation)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.operation)) leaf_name_data.push_back(src.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addr")
    {
        if(addr != nullptr)
        {
            children["addr"] = addr.get();
        }
        else
        {
            addr = std::make_unique<Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::Addr>();
            addr->parent = this;
            children["addr"] = addr.get();
        }
        return children.at("addr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::get_children()
{
    if(children.find("addr") == children.end())
    {
        if(addr != nullptr)
        {
            children["addr"] = addr.get();
        }
    }

    return children;
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
    }
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr = value;
    }
    if(value_path == "router")
    {
        router = value;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
    }
    if(value_path == "src")
    {
        src = value;
    }
}

Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyIpv4Backup()
{
    yang_name = "policy-ipv4-backup"; yang_parent_name = "policy-ipv4";
}

Srms::Policy::PolicyIpv4::PolicyIpv4Backup::~PolicyIpv4Backup()
{
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-backup";

    return path_buffer.str();

}

EntityPath Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/policy-ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srms::Policy::PolicyIpv4::PolicyIpv4Backup::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(std::move(c));
        children[segment_path] = policy_mi.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Policy::PolicyIpv4::PolicyIpv4Backup::get_children()
{
    for (auto const & c : policy_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Backup::set_value(const std::string & value_path, std::string value)
{
}

Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::Addr()
    :
    	af{YType::enumeration, "af"},
	 ipv4{YType::str, "ipv4"},
	 ipv6{YType::str, "ipv6"}
{
    yang_name = "addr"; yang_parent_name = "policy-mi";
}

Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::~Addr()
{
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

EntityPath Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::get_children()
{
    return children;
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::PolicyMi()
    :
    	mi_id{YType::str, "mi-id"},
	 area{YType::str, "area"},
	 flag_attached{YType::enumeration, "flag-attached"},
	 last_prefix{YType::str, "last-prefix"},
	 last_sid_index{YType::uint32, "last-sid-index"},
	 prefix_xr{YType::uint8, "prefix-xr"},
	 router{YType::str, "router"},
	 sid_count{YType::uint32, "sid-count"},
	 sid_start{YType::uint32, "sid-start"},
	 src{YType::enumeration, "src"}
    	,
    addr(std::make_unique<Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>())
{
    addr->parent = this;
    children["addr"] = addr.get();

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv4-active";
}

Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::~PolicyMi()
{
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix_xr.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::has_operation() const
{
    return is_set(operation)
	|| is_set(mi_id.operation)
	|| is_set(area.operation)
	|| is_set(flag_attached.operation)
	|| is_set(last_prefix.operation)
	|| is_set(last_sid_index.operation)
	|| is_set(prefix_xr.operation)
	|| is_set(router.operation)
	|| is_set(sid_count.operation)
	|| is_set(sid_start.operation)
	|| is_set(src.operation)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/policy-ipv4/policy-ipv4-active/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.operation)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.operation)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.operation)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.operation)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix_xr.is_set || is_set(prefix_xr.operation)) leaf_name_data.push_back(prefix_xr.get_name_leafdata());
    if (router.is_set || is_set(router.operation)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.operation)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.operation)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.operation)) leaf_name_data.push_back(src.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addr")
    {
        if(addr != nullptr)
        {
            children["addr"] = addr.get();
        }
        else
        {
            addr = std::make_unique<Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::Addr>();
            addr->parent = this;
            children["addr"] = addr.get();
        }
        return children.at("addr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::get_children()
{
    if(children.find("addr") == children.end())
    {
        if(addr != nullptr)
        {
            children["addr"] = addr.get();
        }
    }

    return children;
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
    }
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr = value;
    }
    if(value_path == "router")
    {
        router = value;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
    }
    if(value_path == "src")
    {
        src = value;
    }
}

Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyIpv4Active()
{
    yang_name = "policy-ipv4-active"; yang_parent_name = "policy-ipv4";
}

Srms::Policy::PolicyIpv4::PolicyIpv4Active::~PolicyIpv4Active()
{
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Policy::PolicyIpv4::PolicyIpv4Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4-active";

    return path_buffer.str();

}

EntityPath Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/policy-ipv4/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srms::Policy::PolicyIpv4::PolicyIpv4Active::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(std::move(c));
        children[segment_path] = policy_mi.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Policy::PolicyIpv4::PolicyIpv4Active::get_children()
{
    for (auto const & c : policy_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srms::Policy::PolicyIpv4::PolicyIpv4Active::set_value(const std::string & value_path, std::string value)
{
}

Srms::Policy::PolicyIpv4::PolicyIpv4()
    :
    policy_ipv4_active(std::make_unique<Srms::Policy::PolicyIpv4::PolicyIpv4Active>())
	,policy_ipv4_backup(std::make_unique<Srms::Policy::PolicyIpv4::PolicyIpv4Backup>())
{
    policy_ipv4_active->parent = this;
    children["policy-ipv4-active"] = policy_ipv4_active.get();

    policy_ipv4_backup->parent = this;
    children["policy-ipv4-backup"] = policy_ipv4_backup.get();

    yang_name = "policy-ipv4"; yang_parent_name = "policy";
}

Srms::Policy::PolicyIpv4::~PolicyIpv4()
{
}

bool Srms::Policy::PolicyIpv4::has_data() const
{
    return (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_data())
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_data());
}

bool Srms::Policy::PolicyIpv4::has_operation() const
{
    return is_set(operation)
	|| (policy_ipv4_active !=  nullptr && policy_ipv4_active->has_operation())
	|| (policy_ipv4_backup !=  nullptr && policy_ipv4_backup->has_operation());
}

std::string Srms::Policy::PolicyIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv4";

    return path_buffer.str();

}

EntityPath Srms::Policy::PolicyIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Policy::PolicyIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-ipv4-active")
    {
        if(policy_ipv4_active != nullptr)
        {
            children["policy-ipv4-active"] = policy_ipv4_active.get();
        }
        else
        {
            policy_ipv4_active = std::make_unique<Srms::Policy::PolicyIpv4::PolicyIpv4Active>();
            policy_ipv4_active->parent = this;
            children["policy-ipv4-active"] = policy_ipv4_active.get();
        }
        return children.at("policy-ipv4-active");
    }

    if(child_yang_name == "policy-ipv4-backup")
    {
        if(policy_ipv4_backup != nullptr)
        {
            children["policy-ipv4-backup"] = policy_ipv4_backup.get();
        }
        else
        {
            policy_ipv4_backup = std::make_unique<Srms::Policy::PolicyIpv4::PolicyIpv4Backup>();
            policy_ipv4_backup->parent = this;
            children["policy-ipv4-backup"] = policy_ipv4_backup.get();
        }
        return children.at("policy-ipv4-backup");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Policy::PolicyIpv4::get_children()
{
    if(children.find("policy-ipv4-active") == children.end())
    {
        if(policy_ipv4_active != nullptr)
        {
            children["policy-ipv4-active"] = policy_ipv4_active.get();
        }
    }

    if(children.find("policy-ipv4-backup") == children.end())
    {
        if(policy_ipv4_backup != nullptr)
        {
            children["policy-ipv4-backup"] = policy_ipv4_backup.get();
        }
    }

    return children;
}

void Srms::Policy::PolicyIpv4::set_value(const std::string & value_path, std::string value)
{
}

Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::Addr()
    :
    	af{YType::enumeration, "af"},
	 ipv4{YType::str, "ipv4"},
	 ipv6{YType::str, "ipv6"}
{
    yang_name = "addr"; yang_parent_name = "policy-mi";
}

Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::~Addr()
{
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

EntityPath Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::get_children()
{
    return children;
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::PolicyMi()
    :
    	mi_id{YType::str, "mi-id"},
	 area{YType::str, "area"},
	 flag_attached{YType::enumeration, "flag-attached"},
	 last_prefix{YType::str, "last-prefix"},
	 last_sid_index{YType::uint32, "last-sid-index"},
	 prefix_xr{YType::uint8, "prefix-xr"},
	 router{YType::str, "router"},
	 sid_count{YType::uint32, "sid-count"},
	 sid_start{YType::uint32, "sid-start"},
	 src{YType::enumeration, "src"}
    	,
    addr(std::make_unique<Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr>())
{
    addr->parent = this;
    children["addr"] = addr.get();

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv6-backup";
}

Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::~PolicyMi()
{
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix_xr.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::has_operation() const
{
    return is_set(operation)
	|| is_set(mi_id.operation)
	|| is_set(area.operation)
	|| is_set(flag_attached.operation)
	|| is_set(last_prefix.operation)
	|| is_set(last_sid_index.operation)
	|| is_set(prefix_xr.operation)
	|| is_set(router.operation)
	|| is_set(sid_count.operation)
	|| is_set(sid_start.operation)
	|| is_set(src.operation)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/policy-ipv6/policy-ipv6-backup/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.operation)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.operation)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.operation)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.operation)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix_xr.is_set || is_set(prefix_xr.operation)) leaf_name_data.push_back(prefix_xr.get_name_leafdata());
    if (router.is_set || is_set(router.operation)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.operation)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.operation)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.operation)) leaf_name_data.push_back(src.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addr")
    {
        if(addr != nullptr)
        {
            children["addr"] = addr.get();
        }
        else
        {
            addr = std::make_unique<Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::Addr>();
            addr->parent = this;
            children["addr"] = addr.get();
        }
        return children.at("addr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::get_children()
{
    if(children.find("addr") == children.end())
    {
        if(addr != nullptr)
        {
            children["addr"] = addr.get();
        }
    }

    return children;
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
    }
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr = value;
    }
    if(value_path == "router")
    {
        router = value;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
    }
    if(value_path == "src")
    {
        src = value;
    }
}

Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyIpv6Backup()
{
    yang_name = "policy-ipv6-backup"; yang_parent_name = "policy-ipv6";
}

Srms::Policy::PolicyIpv6::PolicyIpv6Backup::~PolicyIpv6Backup()
{
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Backup::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6-backup";

    return path_buffer.str();

}

EntityPath Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/policy-ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srms::Policy::PolicyIpv6::PolicyIpv6Backup::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(std::move(c));
        children[segment_path] = policy_mi.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Policy::PolicyIpv6::PolicyIpv6Backup::get_children()
{
    for (auto const & c : policy_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Backup::set_value(const std::string & value_path, std::string value)
{
}

Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::Addr()
    :
    	af{YType::enumeration, "af"},
	 ipv4{YType::str, "ipv4"},
	 ipv6{YType::str, "ipv6"}
{
    yang_name = "addr"; yang_parent_name = "policy-mi";
}

Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::~Addr()
{
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_data() const
{
    return af.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(af.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addr";

    return path_buffer.str();

}

EntityPath Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::get_children()
{
    return children;
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::PolicyMi()
    :
    	mi_id{YType::str, "mi-id"},
	 area{YType::str, "area"},
	 flag_attached{YType::enumeration, "flag-attached"},
	 last_prefix{YType::str, "last-prefix"},
	 last_sid_index{YType::uint32, "last-sid-index"},
	 prefix_xr{YType::uint8, "prefix-xr"},
	 router{YType::str, "router"},
	 sid_count{YType::uint32, "sid-count"},
	 sid_start{YType::uint32, "sid-start"},
	 src{YType::enumeration, "src"}
    	,
    addr(std::make_unique<Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr>())
{
    addr->parent = this;
    children["addr"] = addr.get();

    yang_name = "policy-mi"; yang_parent_name = "policy-ipv6-active";
}

Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::~PolicyMi()
{
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_data() const
{
    return mi_id.is_set
	|| area.is_set
	|| flag_attached.is_set
	|| last_prefix.is_set
	|| last_sid_index.is_set
	|| prefix_xr.is_set
	|| router.is_set
	|| sid_count.is_set
	|| sid_start.is_set
	|| src.is_set
	|| (addr !=  nullptr && addr->has_data());
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::has_operation() const
{
    return is_set(operation)
	|| is_set(mi_id.operation)
	|| is_set(area.operation)
	|| is_set(flag_attached.operation)
	|| is_set(last_prefix.operation)
	|| is_set(last_sid_index.operation)
	|| is_set(prefix_xr.operation)
	|| is_set(router.operation)
	|| is_set(sid_count.operation)
	|| is_set(sid_start.operation)
	|| is_set(src.operation)
	|| (addr !=  nullptr && addr->has_operation());
}

std::string Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-mi" <<"[mi-id='" <<mi_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/policy-ipv6/policy-ipv6-active/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_id.is_set || is_set(mi_id.operation)) leaf_name_data.push_back(mi_id.get_name_leafdata());
    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (flag_attached.is_set || is_set(flag_attached.operation)) leaf_name_data.push_back(flag_attached.get_name_leafdata());
    if (last_prefix.is_set || is_set(last_prefix.operation)) leaf_name_data.push_back(last_prefix.get_name_leafdata());
    if (last_sid_index.is_set || is_set(last_sid_index.operation)) leaf_name_data.push_back(last_sid_index.get_name_leafdata());
    if (prefix_xr.is_set || is_set(prefix_xr.operation)) leaf_name_data.push_back(prefix_xr.get_name_leafdata());
    if (router.is_set || is_set(router.operation)) leaf_name_data.push_back(router.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.operation)) leaf_name_data.push_back(sid_count.get_name_leafdata());
    if (sid_start.is_set || is_set(sid_start.operation)) leaf_name_data.push_back(sid_start.get_name_leafdata());
    if (src.is_set || is_set(src.operation)) leaf_name_data.push_back(src.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addr")
    {
        if(addr != nullptr)
        {
            children["addr"] = addr.get();
        }
        else
        {
            addr = std::make_unique<Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::Addr>();
            addr->parent = this;
            children["addr"] = addr.get();
        }
        return children.at("addr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::get_children()
{
    if(children.find("addr") == children.end())
    {
        if(addr != nullptr)
        {
            children["addr"] = addr.get();
        }
    }

    return children;
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mi-id")
    {
        mi_id = value;
    }
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "flag-attached")
    {
        flag_attached = value;
    }
    if(value_path == "last-prefix")
    {
        last_prefix = value;
    }
    if(value_path == "last-sid-index")
    {
        last_sid_index = value;
    }
    if(value_path == "prefix-xr")
    {
        prefix_xr = value;
    }
    if(value_path == "router")
    {
        router = value;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
    }
    if(value_path == "sid-start")
    {
        sid_start = value;
    }
    if(value_path == "src")
    {
        src = value;
    }
}

Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyIpv6Active()
{
    yang_name = "policy-ipv6-active"; yang_parent_name = "policy-ipv6";
}

Srms::Policy::PolicyIpv6::PolicyIpv6Active::~PolicyIpv6Active()
{
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_data() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_data())
            return true;
    }
    return false;
}

bool Srms::Policy::PolicyIpv6::PolicyIpv6Active::has_operation() const
{
    for (std::size_t index=0; index<policy_mi.size(); index++)
    {
        if(policy_mi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6-active";

    return path_buffer.str();

}

EntityPath Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/policy-ipv6/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-mi")
    {
        for(auto const & c : policy_mi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Srms::Policy::PolicyIpv6::PolicyIpv6Active::PolicyMi>();
        c->parent = this;
        policy_mi.push_back(std::move(c));
        children[segment_path] = policy_mi.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Policy::PolicyIpv6::PolicyIpv6Active::get_children()
{
    for (auto const & c : policy_mi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Srms::Policy::PolicyIpv6::PolicyIpv6Active::set_value(const std::string & value_path, std::string value)
{
}

Srms::Policy::PolicyIpv6::PolicyIpv6()
    :
    policy_ipv6_active(std::make_unique<Srms::Policy::PolicyIpv6::PolicyIpv6Active>())
	,policy_ipv6_backup(std::make_unique<Srms::Policy::PolicyIpv6::PolicyIpv6Backup>())
{
    policy_ipv6_active->parent = this;
    children["policy-ipv6-active"] = policy_ipv6_active.get();

    policy_ipv6_backup->parent = this;
    children["policy-ipv6-backup"] = policy_ipv6_backup.get();

    yang_name = "policy-ipv6"; yang_parent_name = "policy";
}

Srms::Policy::PolicyIpv6::~PolicyIpv6()
{
}

bool Srms::Policy::PolicyIpv6::has_data() const
{
    return (policy_ipv6_active !=  nullptr && policy_ipv6_active->has_data())
	|| (policy_ipv6_backup !=  nullptr && policy_ipv6_backup->has_data());
}

bool Srms::Policy::PolicyIpv6::has_operation() const
{
    return is_set(operation)
	|| (policy_ipv6_active !=  nullptr && policy_ipv6_active->has_operation())
	|| (policy_ipv6_backup !=  nullptr && policy_ipv6_backup->has_operation());
}

std::string Srms::Policy::PolicyIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-ipv6";

    return path_buffer.str();

}

EntityPath Srms::Policy::PolicyIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/policy/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Policy::PolicyIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-ipv6-active")
    {
        if(policy_ipv6_active != nullptr)
        {
            children["policy-ipv6-active"] = policy_ipv6_active.get();
        }
        else
        {
            policy_ipv6_active = std::make_unique<Srms::Policy::PolicyIpv6::PolicyIpv6Active>();
            policy_ipv6_active->parent = this;
            children["policy-ipv6-active"] = policy_ipv6_active.get();
        }
        return children.at("policy-ipv6-active");
    }

    if(child_yang_name == "policy-ipv6-backup")
    {
        if(policy_ipv6_backup != nullptr)
        {
            children["policy-ipv6-backup"] = policy_ipv6_backup.get();
        }
        else
        {
            policy_ipv6_backup = std::make_unique<Srms::Policy::PolicyIpv6::PolicyIpv6Backup>();
            policy_ipv6_backup->parent = this;
            children["policy-ipv6-backup"] = policy_ipv6_backup.get();
        }
        return children.at("policy-ipv6-backup");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Policy::PolicyIpv6::get_children()
{
    if(children.find("policy-ipv6-active") == children.end())
    {
        if(policy_ipv6_active != nullptr)
        {
            children["policy-ipv6-active"] = policy_ipv6_active.get();
        }
    }

    if(children.find("policy-ipv6-backup") == children.end())
    {
        if(policy_ipv6_backup != nullptr)
        {
            children["policy-ipv6-backup"] = policy_ipv6_backup.get();
        }
    }

    return children;
}

void Srms::Policy::PolicyIpv6::set_value(const std::string & value_path, std::string value)
{
}

Srms::Policy::Policy()
    :
    policy_ipv4(std::make_unique<Srms::Policy::PolicyIpv4>())
	,policy_ipv6(std::make_unique<Srms::Policy::PolicyIpv6>())
{
    policy_ipv4->parent = this;
    children["policy-ipv4"] = policy_ipv4.get();

    policy_ipv6->parent = this;
    children["policy-ipv6"] = policy_ipv6.get();

    yang_name = "policy"; yang_parent_name = "srms";
}

Srms::Policy::~Policy()
{
}

bool Srms::Policy::has_data() const
{
    return (policy_ipv4 !=  nullptr && policy_ipv4->has_data())
	|| (policy_ipv6 !=  nullptr && policy_ipv6->has_data());
}

bool Srms::Policy::has_operation() const
{
    return is_set(operation)
	|| (policy_ipv4 !=  nullptr && policy_ipv4->has_operation())
	|| (policy_ipv6 !=  nullptr && policy_ipv6->has_operation());
}

std::string Srms::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

EntityPath Srms::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-ipv4")
    {
        if(policy_ipv4 != nullptr)
        {
            children["policy-ipv4"] = policy_ipv4.get();
        }
        else
        {
            policy_ipv4 = std::make_unique<Srms::Policy::PolicyIpv4>();
            policy_ipv4->parent = this;
            children["policy-ipv4"] = policy_ipv4.get();
        }
        return children.at("policy-ipv4");
    }

    if(child_yang_name == "policy-ipv6")
    {
        if(policy_ipv6 != nullptr)
        {
            children["policy-ipv6"] = policy_ipv6.get();
        }
        else
        {
            policy_ipv6 = std::make_unique<Srms::Policy::PolicyIpv6>();
            policy_ipv6->parent = this;
            children["policy-ipv6"] = policy_ipv6.get();
        }
        return children.at("policy-ipv6");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::Policy::get_children()
{
    if(children.find("policy-ipv4") == children.end())
    {
        if(policy_ipv4 != nullptr)
        {
            children["policy-ipv4"] = policy_ipv4.get();
        }
    }

    if(children.find("policy-ipv6") == children.end())
    {
        if(policy_ipv6 != nullptr)
        {
            children["policy-ipv6"] = policy_ipv6.get();
        }
    }

    return children;
}

void Srms::Policy::set_value(const std::string & value_path, std::string value)
{
}

Srms::Srms()
    :
    mapping(std::make_unique<Srms::Mapping>())
	,policy(std::make_unique<Srms::Policy>())
{
    mapping->parent = this;
    children["mapping"] = mapping.get();

    policy->parent = this;
    children["policy"] = policy.get();

    yang_name = "srms"; yang_parent_name = "Cisco-IOS-XR-segment-routing-ms-oper";
}

Srms::~Srms()
{
}

bool Srms::has_data() const
{
    return (mapping !=  nullptr && mapping->has_data())
	|| (policy !=  nullptr && policy->has_data());
}

bool Srms::has_operation() const
{
    return is_set(operation)
	|| (mapping !=  nullptr && mapping->has_operation())
	|| (policy !=  nullptr && policy->has_operation());
}

std::string Srms::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-segment-routing-ms-oper:srms";

    return path_buffer.str();

}

EntityPath Srms::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Srms::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mapping")
    {
        if(mapping != nullptr)
        {
            children["mapping"] = mapping.get();
        }
        else
        {
            mapping = std::make_unique<Srms::Mapping>();
            mapping->parent = this;
            children["mapping"] = mapping.get();
        }
        return children.at("mapping");
    }

    if(child_yang_name == "policy")
    {
        if(policy != nullptr)
        {
            children["policy"] = policy.get();
        }
        else
        {
            policy = std::make_unique<Srms::Policy>();
            policy->parent = this;
            children["policy"] = policy.get();
        }
        return children.at("policy");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Srms::get_children()
{
    if(children.find("mapping") == children.end())
    {
        if(mapping != nullptr)
        {
            children["mapping"] = mapping.get();
        }
    }

    if(children.find("policy") == children.end())
    {
        if(policy != nullptr)
        {
            children["policy"] = policy.get();
        }
    }

    return children;
}

void Srms::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Srms::clone_ptr()
{
    return std::make_unique<Srms>();
}

const Enum::YLeaf SrmsMiAfEBEnum::none {0, "none"};
const Enum::YLeaf SrmsMiAfEBEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf SrmsMiAfEBEnum::ipv6 {2, "ipv6"};

const Enum::YLeaf SrmsMiFlagEBEnum::false_ {0, "false"};
const Enum::YLeaf SrmsMiFlagEBEnum::true_ {1, "true"};

const Enum::YLeaf SrmsMiSrcEBEnum::none {0, "none"};
const Enum::YLeaf SrmsMiSrcEBEnum::local {1, "local"};
const Enum::YLeaf SrmsMiSrcEBEnum::remote {2, "remote"};


}
}

