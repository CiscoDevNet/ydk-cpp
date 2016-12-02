
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_mpls_vpn_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_vpn_oper {

L3Vpn::InvalidVrfs::InvalidVrf::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "invalid-vrf";
}

L3Vpn::InvalidVrfs::InvalidVrf::Interface::~Interface()
{
}

bool L3Vpn::InvalidVrfs::InvalidVrf::Interface::has_data() const
{
    return interface_name.is_set;
}

bool L3Vpn::InvalidVrfs::InvalidVrf::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string L3Vpn::InvalidVrfs::InvalidVrf::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath L3Vpn::InvalidVrfs::InvalidVrf::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* L3Vpn::InvalidVrfs::InvalidVrf::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & L3Vpn::InvalidVrfs::InvalidVrf::Interface::get_children()
{
    return children;
}

void L3Vpn::InvalidVrfs::InvalidVrf::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

L3Vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::RouteTarget()
    :
    	af_name{YType::enumeration, "af-name"},
	 route_target_type{YType::enumeration, "route-target-type"},
	 route_target_value{YType::str, "route-target-value"},
	 saf_name{YType::enumeration, "saf-name"}
{
    yang_name = "route-target"; yang_parent_name = "af";
}

L3Vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::~RouteTarget()
{
}

bool L3Vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::has_data() const
{
    return af_name.is_set
	|| route_target_type.is_set
	|| route_target_value.is_set
	|| saf_name.is_set;
}

bool L3Vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(route_target_type.operation)
	|| is_set(route_target_value.operation)
	|| is_set(saf_name.operation);
}

std::string L3Vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";

    return path_buffer.str();

}

EntityPath L3Vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (route_target_type.is_set || is_set(route_target_type.operation)) leaf_name_data.push_back(route_target_type.get_name_leafdata());
    if (route_target_value.is_set || is_set(route_target_value.operation)) leaf_name_data.push_back(route_target_value.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* L3Vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & L3Vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::get_children()
{
    return children;
}

void L3Vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "route-target-type")
    {
        route_target_type = value;
    }
    if(value_path == "route-target-value")
    {
        route_target_value = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
}

L3Vpn::InvalidVrfs::InvalidVrf::Af::Af()
    :
    	af_name{YType::enumeration, "af-name"},
	 export_route_policy{YType::str, "export-route-policy"},
	 import_route_policy{YType::str, "import-route-policy"},
	 saf_name{YType::enumeration, "saf-name"}
{
    yang_name = "af"; yang_parent_name = "invalid-vrf";
}

L3Vpn::InvalidVrfs::InvalidVrf::Af::~Af()
{
}

bool L3Vpn::InvalidVrfs::InvalidVrf::Af::has_data() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return af_name.is_set
	|| export_route_policy.is_set
	|| import_route_policy.is_set
	|| saf_name.is_set;
}

bool L3Vpn::InvalidVrfs::InvalidVrf::Af::has_operation() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(export_route_policy.operation)
	|| is_set(import_route_policy.operation)
	|| is_set(saf_name.operation);
}

std::string L3Vpn::InvalidVrfs::InvalidVrf::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";

    return path_buffer.str();

}

EntityPath L3Vpn::InvalidVrfs::InvalidVrf::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (export_route_policy.is_set || is_set(export_route_policy.operation)) leaf_name_data.push_back(export_route_policy.get_name_leafdata());
    if (import_route_policy.is_set || is_set(import_route_policy.operation)) leaf_name_data.push_back(import_route_policy.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* L3Vpn::InvalidVrfs::InvalidVrf::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-target")
    {
        for(auto const & c : route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<L3Vpn::InvalidVrfs::InvalidVrf::Af::RouteTarget>();
        c->parent = this;
        route_target.push_back(std::move(c));
        children[segment_path] = route_target.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & L3Vpn::InvalidVrfs::InvalidVrf::Af::get_children()
{
    for (auto const & c : route_target)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void L3Vpn::InvalidVrfs::InvalidVrf::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy = value;
    }
    if(value_path == "import-route-policy")
    {
        import_route_policy = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
}

L3Vpn::InvalidVrfs::InvalidVrf::InvalidVrf()
    :
    	vrf_name{YType::str, "vrf-name"},
	 is_big_vrf{YType::boolean, "is-big-vrf"},
	 route_distinguisher{YType::str, "route-distinguisher"},
	 vrf_description{YType::str, "vrf-description"},
	 vrf_name_xr{YType::str, "vrf-name-xr"}
{
    yang_name = "invalid-vrf"; yang_parent_name = "invalid-vrfs";
}

L3Vpn::InvalidVrfs::InvalidVrf::~InvalidVrf()
{
}

bool L3Vpn::InvalidVrfs::InvalidVrf::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return vrf_name.is_set
	|| is_big_vrf.is_set
	|| route_distinguisher.is_set
	|| vrf_description.is_set
	|| vrf_name_xr.is_set;
}

bool L3Vpn::InvalidVrfs::InvalidVrf::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(is_big_vrf.operation)
	|| is_set(route_distinguisher.operation)
	|| is_set(vrf_description.operation)
	|| is_set(vrf_name_xr.operation);
}

std::string L3Vpn::InvalidVrfs::InvalidVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid-vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath L3Vpn::InvalidVrfs::InvalidVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-vpn-oper:l3vpn/invalid-vrfs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (is_big_vrf.is_set || is_set(is_big_vrf.operation)) leaf_name_data.push_back(is_big_vrf.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (vrf_description.is_set || is_set(vrf_description.operation)) leaf_name_data.push_back(vrf_description.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.operation)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* L3Vpn::InvalidVrfs::InvalidVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<L3Vpn::InvalidVrfs::InvalidVrf::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<L3Vpn::InvalidVrfs::InvalidVrf::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & L3Vpn::InvalidVrfs::InvalidVrf::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void L3Vpn::InvalidVrfs::InvalidVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "is-big-vrf")
    {
        is_big_vrf = value;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
    if(value_path == "vrf-description")
    {
        vrf_description = value;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
    }
}

L3Vpn::InvalidVrfs::InvalidVrfs()
{
    yang_name = "invalid-vrfs"; yang_parent_name = "l3vpn";
}

L3Vpn::InvalidVrfs::~InvalidVrfs()
{
}

bool L3Vpn::InvalidVrfs::has_data() const
{
    for (std::size_t index=0; index<invalid_vrf.size(); index++)
    {
        if(invalid_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool L3Vpn::InvalidVrfs::has_operation() const
{
    for (std::size_t index=0; index<invalid_vrf.size(); index++)
    {
        if(invalid_vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L3Vpn::InvalidVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalid-vrfs";

    return path_buffer.str();

}

EntityPath L3Vpn::InvalidVrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-vpn-oper:l3vpn/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* L3Vpn::InvalidVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "invalid-vrf")
    {
        for(auto const & c : invalid_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<L3Vpn::InvalidVrfs::InvalidVrf>();
        c->parent = this;
        invalid_vrf.push_back(std::move(c));
        children[segment_path] = invalid_vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & L3Vpn::InvalidVrfs::get_children()
{
    for (auto const & c : invalid_vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void L3Vpn::InvalidVrfs::set_value(const std::string & value_path, std::string value)
{
}

L3Vpn::Vrfs::Vrf::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "vrf";
}

L3Vpn::Vrfs::Vrf::Interface::~Interface()
{
}

bool L3Vpn::Vrfs::Vrf::Interface::has_data() const
{
    return interface_name.is_set;
}

bool L3Vpn::Vrfs::Vrf::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string L3Vpn::Vrfs::Vrf::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

EntityPath L3Vpn::Vrfs::Vrf::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* L3Vpn::Vrfs::Vrf::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & L3Vpn::Vrfs::Vrf::Interface::get_children()
{
    return children;
}

void L3Vpn::Vrfs::Vrf::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

L3Vpn::Vrfs::Vrf::Af::RouteTarget::RouteTarget()
    :
    	af_name{YType::enumeration, "af-name"},
	 route_target_type{YType::enumeration, "route-target-type"},
	 route_target_value{YType::str, "route-target-value"},
	 saf_name{YType::enumeration, "saf-name"}
{
    yang_name = "route-target"; yang_parent_name = "af";
}

L3Vpn::Vrfs::Vrf::Af::RouteTarget::~RouteTarget()
{
}

bool L3Vpn::Vrfs::Vrf::Af::RouteTarget::has_data() const
{
    return af_name.is_set
	|| route_target_type.is_set
	|| route_target_value.is_set
	|| saf_name.is_set;
}

bool L3Vpn::Vrfs::Vrf::Af::RouteTarget::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(route_target_type.operation)
	|| is_set(route_target_value.operation)
	|| is_set(saf_name.operation);
}

std::string L3Vpn::Vrfs::Vrf::Af::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";

    return path_buffer.str();

}

EntityPath L3Vpn::Vrfs::Vrf::Af::RouteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (route_target_type.is_set || is_set(route_target_type.operation)) leaf_name_data.push_back(route_target_type.get_name_leafdata());
    if (route_target_value.is_set || is_set(route_target_value.operation)) leaf_name_data.push_back(route_target_value.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* L3Vpn::Vrfs::Vrf::Af::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & L3Vpn::Vrfs::Vrf::Af::RouteTarget::get_children()
{
    return children;
}

void L3Vpn::Vrfs::Vrf::Af::RouteTarget::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "route-target-type")
    {
        route_target_type = value;
    }
    if(value_path == "route-target-value")
    {
        route_target_value = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
}

L3Vpn::Vrfs::Vrf::Af::Af()
    :
    	af_name{YType::enumeration, "af-name"},
	 export_route_policy{YType::str, "export-route-policy"},
	 import_route_policy{YType::str, "import-route-policy"},
	 saf_name{YType::enumeration, "saf-name"}
{
    yang_name = "af"; yang_parent_name = "vrf";
}

L3Vpn::Vrfs::Vrf::Af::~Af()
{
}

bool L3Vpn::Vrfs::Vrf::Af::has_data() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return af_name.is_set
	|| export_route_policy.is_set
	|| import_route_policy.is_set
	|| saf_name.is_set;
}

bool L3Vpn::Vrfs::Vrf::Af::has_operation() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(export_route_policy.operation)
	|| is_set(import_route_policy.operation)
	|| is_set(saf_name.operation);
}

std::string L3Vpn::Vrfs::Vrf::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";

    return path_buffer.str();

}

EntityPath L3Vpn::Vrfs::Vrf::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (export_route_policy.is_set || is_set(export_route_policy.operation)) leaf_name_data.push_back(export_route_policy.get_name_leafdata());
    if (import_route_policy.is_set || is_set(import_route_policy.operation)) leaf_name_data.push_back(import_route_policy.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* L3Vpn::Vrfs::Vrf::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-target")
    {
        for(auto const & c : route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<L3Vpn::Vrfs::Vrf::Af::RouteTarget>();
        c->parent = this;
        route_target.push_back(std::move(c));
        children[segment_path] = route_target.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & L3Vpn::Vrfs::Vrf::Af::get_children()
{
    for (auto const & c : route_target)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void L3Vpn::Vrfs::Vrf::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "export-route-policy")
    {
        export_route_policy = value;
    }
    if(value_path == "import-route-policy")
    {
        import_route_policy = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
}

L3Vpn::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"},
	 is_big_vrf{YType::boolean, "is-big-vrf"},
	 route_distinguisher{YType::str, "route-distinguisher"},
	 vrf_description{YType::str, "vrf-description"},
	 vrf_name_xr{YType::str, "vrf-name-xr"}
{
    yang_name = "vrf"; yang_parent_name = "vrfs";
}

L3Vpn::Vrfs::Vrf::~Vrf()
{
}

bool L3Vpn::Vrfs::Vrf::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return vrf_name.is_set
	|| is_big_vrf.is_set
	|| route_distinguisher.is_set
	|| vrf_description.is_set
	|| vrf_name_xr.is_set;
}

bool L3Vpn::Vrfs::Vrf::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(is_big_vrf.operation)
	|| is_set(route_distinguisher.operation)
	|| is_set(vrf_description.operation)
	|| is_set(vrf_name_xr.operation);
}

std::string L3Vpn::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath L3Vpn::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-vpn-oper:l3vpn/vrfs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (is_big_vrf.is_set || is_set(is_big_vrf.operation)) leaf_name_data.push_back(is_big_vrf.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (vrf_description.is_set || is_set(vrf_description.operation)) leaf_name_data.push_back(vrf_description.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.operation)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* L3Vpn::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<L3Vpn::Vrfs::Vrf::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<L3Vpn::Vrfs::Vrf::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & L3Vpn::Vrfs::Vrf::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void L3Vpn::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "is-big-vrf")
    {
        is_big_vrf = value;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
    if(value_path == "vrf-description")
    {
        vrf_description = value;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
    }
}

L3Vpn::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "l3vpn";
}

L3Vpn::Vrfs::~Vrfs()
{
}

bool L3Vpn::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool L3Vpn::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L3Vpn::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath L3Vpn::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-vpn-oper:l3vpn/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* L3Vpn::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<L3Vpn::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & L3Vpn::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void L3Vpn::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

L3Vpn::L3Vpn()
    :
    invalid_vrfs(std::make_unique<L3Vpn::InvalidVrfs>())
	,vrfs(std::make_unique<L3Vpn::Vrfs>())
{
    invalid_vrfs->parent = this;
    children["invalid-vrfs"] = invalid_vrfs.get();

    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "l3vpn"; yang_parent_name = "Cisco-IOS-XR-mpls-vpn-oper";
}

L3Vpn::~L3Vpn()
{
}

bool L3Vpn::has_data() const
{
    return (invalid_vrfs !=  nullptr && invalid_vrfs->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool L3Vpn::has_operation() const
{
    return is_set(operation)
	|| (invalid_vrfs !=  nullptr && is_set(invalid_vrfs->operation))
	|| (vrfs !=  nullptr && is_set(vrfs->operation));
}

std::string L3Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-vpn-oper:l3vpn";

    return path_buffer.str();

}

EntityPath L3Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* L3Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "invalid-vrfs")
    {
        if(invalid_vrfs != nullptr)
        {
            children["invalid-vrfs"] = invalid_vrfs.get();
        }
        else
        {
            invalid_vrfs = std::make_unique<L3Vpn::InvalidVrfs>();
            invalid_vrfs->parent = this;
            children["invalid-vrfs"] = invalid_vrfs.get();
        }
        return children.at("invalid-vrfs");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<L3Vpn::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & L3Vpn::get_children()
{
    if(children.find("invalid-vrfs") == children.end())
    {
        if(invalid_vrfs != nullptr)
        {
            children["invalid-vrfs"] = invalid_vrfs.get();
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
    }

    return children;
}

void L3Vpn::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> L3Vpn::clone_ptr()
{
    return std::make_unique<L3Vpn>();
}

const Enum::Value MplsVpnRtEnum::import {1, "import"};
const Enum::Value MplsVpnRtEnum::export_ {2, "export"};
const Enum::Value MplsVpnRtEnum::both {3, "both"};

const Enum::Value MplsVpnAfiEnum::ipv4 {1, "ipv4"};
const Enum::Value MplsVpnAfiEnum::ipv6 {2, "ipv6"};

const Enum::Value MplsVpnSafiEnum::unicast {1, "unicast"};
const Enum::Value MplsVpnSafiEnum::multicast {2, "multicast"};
const Enum::Value MplsVpnSafiEnum::flowspec {133, "flowspec"};


}
}

