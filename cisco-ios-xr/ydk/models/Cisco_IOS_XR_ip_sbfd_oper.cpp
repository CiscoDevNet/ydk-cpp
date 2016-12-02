
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ip_sbfd_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_sbfd_oper {

Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::IpAddress()
    :
    	afi{YType::enumeration, "afi"},
	 dummy{YType::uint8, "dummy"},
	 ipv4{YType::str, "ipv4"},
	 ipv6{YType::str, "ipv6"}
{
    yang_name = "ip-address"; yang_parent_name = "remote-discriminator";
}

Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::~IpAddress()
{
}

bool Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address";

    return path_buffer.str();

}

EntityPath Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::get_entity_path(Entity* ancestor) const
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

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::get_children()
{
    return children;
}

void Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
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

Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::RemoteDiscriminator()
    :
    	address{YType::str, "address"},
	 discr{YType::uint32, "discr"},
	 discr_src{YType::str, "discr-src"},
	 remote_discriminator{YType::int32, "remote-discriminator"},
	 status{YType::str, "status"},
	 tid_type{YType::enumeration, "tid-type"},
	 vrf_name{YType::str, "vrf-name"},
	 vrf_name_xr{YType::str, "vrf-name-xr"}
    	,
    ip_address(std::make_unique<Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress>())
{
    ip_address->parent = this;
    children["ip-address"] = ip_address.get();

    yang_name = "remote-discriminator"; yang_parent_name = "remote-vrf";
}

Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::~RemoteDiscriminator()
{
}

bool Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::has_data() const
{
    return address.is_set
	|| discr.is_set
	|| discr_src.is_set
	|| remote_discriminator.is_set
	|| status.is_set
	|| tid_type.is_set
	|| vrf_name.is_set
	|| vrf_name_xr.is_set
	|| (ip_address !=  nullptr && ip_address->has_data());
}

bool Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(discr.operation)
	|| is_set(discr_src.operation)
	|| is_set(remote_discriminator.operation)
	|| is_set(status.operation)
	|| is_set(tid_type.operation)
	|| is_set(vrf_name.operation)
	|| is_set(vrf_name_xr.operation)
	|| (ip_address !=  nullptr && is_set(ip_address->operation));
}

std::string Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-discriminator";

    return path_buffer.str();

}

EntityPath Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (discr.is_set || is_set(discr.operation)) leaf_name_data.push_back(discr.get_name_leafdata());
    if (discr_src.is_set || is_set(discr_src.operation)) leaf_name_data.push_back(discr_src.get_name_leafdata());
    if (remote_discriminator.is_set || is_set(remote_discriminator.operation)) leaf_name_data.push_back(remote_discriminator.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (tid_type.is_set || is_set(tid_type.operation)) leaf_name_data.push_back(tid_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.operation)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-address")
    {
        if(ip_address != nullptr)
        {
            children["ip-address"] = ip_address.get();
        }
        else
        {
            ip_address = std::make_unique<Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::IpAddress>();
            ip_address->parent = this;
            children["ip-address"] = ip_address.get();
        }
        return children.at("ip-address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::get_children()
{
    if(children.find("ip-address") == children.end())
    {
        if(ip_address != nullptr)
        {
            children["ip-address"] = ip_address.get();
        }
    }

    return children;
}

void Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "discr")
    {
        discr = value;
    }
    if(value_path == "discr-src")
    {
        discr_src = value;
    }
    if(value_path == "remote-discriminator")
    {
        remote_discriminator = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "tid-type")
    {
        tid_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
    }
}

Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteVrf()
    :
    	vrf_name{YType::str, "vrf-name"}
{
    yang_name = "remote-vrf"; yang_parent_name = "remote-vrfs";
}

Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::~RemoteVrf()
{
}

bool Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::has_data() const
{
    for (std::size_t index=0; index<remote_discriminator.size(); index++)
    {
        if(remote_discriminator[index]->has_data())
            return true;
    }
    return vrf_name.is_set;
}

bool Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::has_operation() const
{
    for (std::size_t index=0; index<remote_discriminator.size(); index++)
    {
        if(remote_discriminator[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(vrf_name.operation);
}

std::string Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-oper:sbfd/target-identifier/remote-vrfs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-discriminator")
    {
        for(auto const & c : remote_discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::RemoteDiscriminator>();
        c->parent = this;
        remote_discriminator.push_back(std::move(c));
        children[segment_path] = remote_discriminator.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::get_children()
{
    for (auto const & c : remote_discriminator)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrfs()
{
    yang_name = "remote-vrfs"; yang_parent_name = "target-identifier";
}

Sbfd::TargetIdentifier::RemoteVrfs::~RemoteVrfs()
{
}

bool Sbfd::TargetIdentifier::RemoteVrfs::has_data() const
{
    for (std::size_t index=0; index<remote_vrf.size(); index++)
    {
        if(remote_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Sbfd::TargetIdentifier::RemoteVrfs::has_operation() const
{
    for (std::size_t index=0; index<remote_vrf.size(); index++)
    {
        if(remote_vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Sbfd::TargetIdentifier::RemoteVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-vrfs";

    return path_buffer.str();

}

EntityPath Sbfd::TargetIdentifier::RemoteVrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-oper:sbfd/target-identifier/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sbfd::TargetIdentifier::RemoteVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-vrf")
    {
        for(auto const & c : remote_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Sbfd::TargetIdentifier::RemoteVrfs::RemoteVrf>();
        c->parent = this;
        remote_vrf.push_back(std::move(c));
        children[segment_path] = remote_vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sbfd::TargetIdentifier::RemoteVrfs::get_children()
{
    for (auto const & c : remote_vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Sbfd::TargetIdentifier::RemoteVrfs::set_value(const std::string & value_path, std::string value)
{
}

Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::LocalDiscriminator()
    :
    	discr{YType::uint32, "discr"},
	 discr_src{YType::str, "discr-src"},
	 flags{YType::str, "flags"},
	 local_discriminator{YType::int32, "local-discriminator"},
	 status{YType::str, "status"},
	 vrf_name{YType::str, "vrf-name"},
	 vrf_name_xr{YType::str, "vrf-name-xr"}
{
    yang_name = "local-discriminator"; yang_parent_name = "local-vrf";
}

Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::~LocalDiscriminator()
{
}

bool Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::has_data() const
{
    return discr.is_set
	|| discr_src.is_set
	|| flags.is_set
	|| local_discriminator.is_set
	|| status.is_set
	|| vrf_name.is_set
	|| vrf_name_xr.is_set;
}

bool Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::has_operation() const
{
    return is_set(operation)
	|| is_set(discr.operation)
	|| is_set(discr_src.operation)
	|| is_set(flags.operation)
	|| is_set(local_discriminator.operation)
	|| is_set(status.operation)
	|| is_set(vrf_name.operation)
	|| is_set(vrf_name_xr.operation);
}

std::string Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-discriminator";

    return path_buffer.str();

}

EntityPath Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::get_entity_path(Entity* ancestor) const
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

    if (discr.is_set || is_set(discr.operation)) leaf_name_data.push_back(discr.get_name_leafdata());
    if (discr_src.is_set || is_set(discr_src.operation)) leaf_name_data.push_back(discr_src.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (local_discriminator.is_set || is_set(local_discriminator.operation)) leaf_name_data.push_back(local_discriminator.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.operation)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::get_children()
{
    return children;
}

void Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discr")
    {
        discr = value;
    }
    if(value_path == "discr-src")
    {
        discr_src = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "local-discriminator")
    {
        local_discriminator = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
    }
}

Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalVrf()
    :
    	vrf_name{YType::str, "vrf-name"}
{
    yang_name = "local-vrf"; yang_parent_name = "local-vrfs";
}

Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::~LocalVrf()
{
}

bool Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::has_data() const
{
    for (std::size_t index=0; index<local_discriminator.size(); index++)
    {
        if(local_discriminator[index]->has_data())
            return true;
    }
    return vrf_name.is_set;
}

bool Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::has_operation() const
{
    for (std::size_t index=0; index<local_discriminator.size(); index++)
    {
        if(local_discriminator[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(vrf_name.operation);
}

std::string Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-oper:sbfd/target-identifier/local-vrfs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-discriminator")
    {
        for(auto const & c : local_discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::LocalDiscriminator>();
        c->parent = this;
        local_discriminator.push_back(std::move(c));
        children[segment_path] = local_discriminator.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::get_children()
{
    for (auto const & c : local_discriminator)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Sbfd::TargetIdentifier::LocalVrfs::LocalVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Sbfd::TargetIdentifier::LocalVrfs::LocalVrfs()
{
    yang_name = "local-vrfs"; yang_parent_name = "target-identifier";
}

Sbfd::TargetIdentifier::LocalVrfs::~LocalVrfs()
{
}

bool Sbfd::TargetIdentifier::LocalVrfs::has_data() const
{
    for (std::size_t index=0; index<local_vrf.size(); index++)
    {
        if(local_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Sbfd::TargetIdentifier::LocalVrfs::has_operation() const
{
    for (std::size_t index=0; index<local_vrf.size(); index++)
    {
        if(local_vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Sbfd::TargetIdentifier::LocalVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-vrfs";

    return path_buffer.str();

}

EntityPath Sbfd::TargetIdentifier::LocalVrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-oper:sbfd/target-identifier/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sbfd::TargetIdentifier::LocalVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-vrf")
    {
        for(auto const & c : local_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Sbfd::TargetIdentifier::LocalVrfs::LocalVrf>();
        c->parent = this;
        local_vrf.push_back(std::move(c));
        children[segment_path] = local_vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sbfd::TargetIdentifier::LocalVrfs::get_children()
{
    for (auto const & c : local_vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Sbfd::TargetIdentifier::LocalVrfs::set_value(const std::string & value_path, std::string value)
{
}

Sbfd::TargetIdentifier::TargetIdentifier()
    :
    local_vrfs(std::make_unique<Sbfd::TargetIdentifier::LocalVrfs>())
	,remote_vrfs(std::make_unique<Sbfd::TargetIdentifier::RemoteVrfs>())
{
    local_vrfs->parent = this;
    children["local-vrfs"] = local_vrfs.get();

    remote_vrfs->parent = this;
    children["remote-vrfs"] = remote_vrfs.get();

    yang_name = "target-identifier"; yang_parent_name = "sbfd";
}

Sbfd::TargetIdentifier::~TargetIdentifier()
{
}

bool Sbfd::TargetIdentifier::has_data() const
{
    return (local_vrfs !=  nullptr && local_vrfs->has_data())
	|| (remote_vrfs !=  nullptr && remote_vrfs->has_data());
}

bool Sbfd::TargetIdentifier::has_operation() const
{
    return is_set(operation)
	|| (local_vrfs !=  nullptr && is_set(local_vrfs->operation))
	|| (remote_vrfs !=  nullptr && is_set(remote_vrfs->operation));
}

std::string Sbfd::TargetIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-identifier";

    return path_buffer.str();

}

EntityPath Sbfd::TargetIdentifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-sbfd-oper:sbfd/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Sbfd::TargetIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-vrfs")
    {
        if(local_vrfs != nullptr)
        {
            children["local-vrfs"] = local_vrfs.get();
        }
        else
        {
            local_vrfs = std::make_unique<Sbfd::TargetIdentifier::LocalVrfs>();
            local_vrfs->parent = this;
            children["local-vrfs"] = local_vrfs.get();
        }
        return children.at("local-vrfs");
    }

    if(child_yang_name == "remote-vrfs")
    {
        if(remote_vrfs != nullptr)
        {
            children["remote-vrfs"] = remote_vrfs.get();
        }
        else
        {
            remote_vrfs = std::make_unique<Sbfd::TargetIdentifier::RemoteVrfs>();
            remote_vrfs->parent = this;
            children["remote-vrfs"] = remote_vrfs.get();
        }
        return children.at("remote-vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sbfd::TargetIdentifier::get_children()
{
    if(children.find("local-vrfs") == children.end())
    {
        if(local_vrfs != nullptr)
        {
            children["local-vrfs"] = local_vrfs.get();
        }
    }

    if(children.find("remote-vrfs") == children.end())
    {
        if(remote_vrfs != nullptr)
        {
            children["remote-vrfs"] = remote_vrfs.get();
        }
    }

    return children;
}

void Sbfd::TargetIdentifier::set_value(const std::string & value_path, std::string value)
{
}

Sbfd::Sbfd()
    :
    target_identifier(std::make_unique<Sbfd::TargetIdentifier>())
{
    target_identifier->parent = this;
    children["target-identifier"] = target_identifier.get();

    yang_name = "sbfd"; yang_parent_name = "Cisco-IOS-XR-ip-sbfd-oper";
}

Sbfd::~Sbfd()
{
}

bool Sbfd::has_data() const
{
    return (target_identifier !=  nullptr && target_identifier->has_data());
}

bool Sbfd::has_operation() const
{
    return is_set(operation)
	|| (target_identifier !=  nullptr && is_set(target_identifier->operation));
}

std::string Sbfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-sbfd-oper:sbfd";

    return path_buffer.str();

}

EntityPath Sbfd::get_entity_path(Entity* ancestor) const
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

Entity* Sbfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "target-identifier")
    {
        if(target_identifier != nullptr)
        {
            children["target-identifier"] = target_identifier.get();
        }
        else
        {
            target_identifier = std::make_unique<Sbfd::TargetIdentifier>();
            target_identifier->parent = this;
            children["target-identifier"] = target_identifier.get();
        }
        return children.at("target-identifier");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Sbfd::get_children()
{
    if(children.find("target-identifier") == children.end())
    {
        if(target_identifier != nullptr)
        {
            children["target-identifier"] = target_identifier.get();
        }
    }

    return children;
}

void Sbfd::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Sbfd::clone_ptr()
{
    return std::make_unique<Sbfd>();
}

const Enum::Value SbfdAddressFamilyEnum::ipv4 {1, "ipv4"};
const Enum::Value SbfdAddressFamilyEnum::ipv6 {2, "ipv6"};

const Enum::Value BfdAfIdEnum::bfd_af_id_none {0, "bfd-af-id-none"};
const Enum::Value BfdAfIdEnum::bfd_af_id_ipv4 {2, "bfd-af-id-ipv4"};
const Enum::Value BfdAfIdEnum::bfd_af_id_ipv6 {26, "bfd-af-id-ipv6"};


}
}

