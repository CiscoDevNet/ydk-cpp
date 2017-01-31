
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_mpls_ldp_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_ldp_cfg {

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicy()
    :
    	label_space_id{YType::uint32, "label-space-id"},
	 lsr_id{YType::str, "lsr-id"},
	 prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "peer-accept-policy"; yang_parent_name = "peer-accept-policies";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::~PeerAcceptPolicy()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::has_data() const
{
    return label_space_id.is_set
	|| lsr_id.is_set
	|| prefix_acl_name.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation)
	|| is_set(prefix_acl_name.operation);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-accept-policy" <<"[label-space-id='" <<label_space_id.get() <<"']" <<"[lsr-id='" <<lsr_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_entity_path(Entity* ancestor) const
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

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.operation)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
    }
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicies()
{
    yang_name = "peer-accept-policies"; yang_parent_name = "accept";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::~PeerAcceptPolicies()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::has_data() const
{
    for (std::size_t index=0; index<peer_accept_policy.size(); index++)
    {
        if(peer_accept_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::has_operation() const
{
    for (std::size_t index=0; index<peer_accept_policy.size(); index++)
    {
        if(peer_accept_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-accept-policies";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-accept-policy")
    {
        for(auto const & c : peer_accept_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy>();
        c->parent = this;
        peer_accept_policy.push_back(std::move(c));
        children[segment_path] = peer_accept_policy.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_children()
{
    for (auto const & c : peer_accept_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::Accept()
    :
    peer_accept_policies(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies>())
{
    peer_accept_policies->parent = this;
    children["peer-accept-policies"] = peer_accept_policies.get();

    yang_name = "accept"; yang_parent_name = "remote";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::~Accept()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::has_data() const
{
    return (peer_accept_policies !=  nullptr && peer_accept_policies->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::has_operation() const
{
    return is_set(operation)
	|| (peer_accept_policies !=  nullptr && peer_accept_policies->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-accept-policies")
    {
        if(peer_accept_policies != nullptr)
        {
            children["peer-accept-policies"] = peer_accept_policies.get();
        }
        else
        {
            peer_accept_policies = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies>();
            peer_accept_policies->parent = this;
            children["peer-accept-policies"] = peer_accept_policies.get();
        }
        return children.at("peer-accept-policies");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::get_children()
{
    if(children.find("peer-accept-policies") == children.end())
    {
        if(peer_accept_policies != nullptr)
        {
            children["peer-accept-policies"] = peer_accept_policies.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Remote()
    :
    accept(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept>())
{
    accept->parent = this;
    children["accept"] = accept.get();

    yang_name = "remote"; yang_parent_name = "label";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Remote::~Remote()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::has_data() const
{
    return (accept !=  nullptr && accept->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Remote::has_operation() const
{
    return is_set(operation)
	|| (accept !=  nullptr && accept->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Remote::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Label::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accept")
    {
        if(accept != nullptr)
        {
            children["accept"] = accept.get();
        }
        else
        {
            accept = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Remote::Accept>();
            accept->parent = this;
            children["accept"] = accept.get();
        }
        return children.at("accept");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Label::Remote::get_children()
{
    if(children.find("accept") == children.end())
    {
        if(accept != nullptr)
        {
            children["accept"] = accept.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Remote::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicy()
    :
    	label_space_id{YType::uint32, "label-space-id"},
	 lsr_id{YType::str, "lsr-id"},
	 prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "peer-advertise-policy"; yang_parent_name = "peer-advertise-policies";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::~PeerAdvertisePolicy()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::has_data() const
{
    return label_space_id.is_set
	|| lsr_id.is_set
	|| prefix_acl_name.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation)
	|| is_set(prefix_acl_name.operation);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-advertise-policy" <<"[label-space-id='" <<label_space_id.get() <<"']" <<"[lsr-id='" <<lsr_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_entity_path(Entity* ancestor) const
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

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.operation)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
    }
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicies()
{
    yang_name = "peer-advertise-policies"; yang_parent_name = "advertise";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::~PeerAdvertisePolicies()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::has_data() const
{
    for (std::size_t index=0; index<peer_advertise_policy.size(); index++)
    {
        if(peer_advertise_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::has_operation() const
{
    for (std::size_t index=0; index<peer_advertise_policy.size(); index++)
    {
        if(peer_advertise_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-advertise-policies";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-advertise-policy")
    {
        for(auto const & c : peer_advertise_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy>();
        c->parent = this;
        peer_advertise_policy.push_back(std::move(c));
        children[segment_path] = peer_advertise_policy.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_children()
{
    for (auto const & c : peer_advertise_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::PrefixAdvertisePolicy()
    :
    	prefix_acl_name{YType::str, "prefix-acl-name"},
	 advertise_type{YType::enumeration, "advertise-type"},
	 peer_acl_name{YType::str, "peer-acl-name"}
{
    yang_name = "prefix-advertise-policy"; yang_parent_name = "prefix-advertise-policies";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::~PrefixAdvertisePolicy()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::has_data() const
{
    return prefix_acl_name.is_set
	|| advertise_type.is_set
	|| peer_acl_name.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_acl_name.operation)
	|| is_set(advertise_type.operation)
	|| is_set(peer_acl_name.operation);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-advertise-policy" <<"[prefix-acl-name='" <<prefix_acl_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::get_entity_path(Entity* ancestor) const
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

    if (prefix_acl_name.is_set || is_set(prefix_acl_name.operation)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());
    if (advertise_type.is_set || is_set(advertise_type.operation)) leaf_name_data.push_back(advertise_type.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.operation)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
    }
    if(value_path == "advertise-type")
    {
        advertise_type = value;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
    }
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicies()
{
    yang_name = "prefix-advertise-policies"; yang_parent_name = "advertise";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::~PrefixAdvertisePolicies()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::has_data() const
{
    for (std::size_t index=0; index<prefix_advertise_policy.size(); index++)
    {
        if(prefix_advertise_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::has_operation() const
{
    for (std::size_t index=0; index<prefix_advertise_policy.size(); index++)
    {
        if(prefix_advertise_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-advertise-policies";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-advertise-policy")
    {
        for(auto const & c : prefix_advertise_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::PrefixAdvertisePolicy>();
        c->parent = this;
        prefix_advertise_policy.push_back(std::move(c));
        children[segment_path] = prefix_advertise_policy.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::get_children()
{
    for (auto const & c : prefix_advertise_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::ExplicitNull()
    :
    	explicit_null_type{YType::enumeration, "explicit-null-type"},
	 peer_acl_name{YType::str, "peer-acl-name"},
	 prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "explicit-null"; yang_parent_name = "advertise";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::~ExplicitNull()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::has_data() const
{
    return explicit_null_type.is_set
	|| peer_acl_name.is_set
	|| prefix_acl_name.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_null_type.operation)
	|| is_set(peer_acl_name.operation)
	|| is_set(prefix_acl_name.operation);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-null";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_entity_path(Entity* ancestor) const
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

    if (explicit_null_type.is_set || is_set(explicit_null_type.operation)) leaf_name_data.push_back(explicit_null_type.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.operation)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.operation)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-null-type")
    {
        explicit_null_type = value;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
    }
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::has_data() const
{
    return interface_name.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "advertise";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::~Interfaces()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
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
        auto c = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Advertise()
    :
    	disable{YType::empty, "disable"}
    	,
    explicit_null(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull>())
	,interfaces(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces>())
	,peer_advertise_policies(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies>())
	,prefix_advertise_policies(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies>())
{
    explicit_null->parent = this;
    children["explicit-null"] = explicit_null.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    peer_advertise_policies->parent = this;
    children["peer-advertise-policies"] = peer_advertise_policies.get();

    prefix_advertise_policies->parent = this;
    children["prefix-advertise-policies"] = prefix_advertise_policies.get();

    yang_name = "advertise"; yang_parent_name = "local";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::~Advertise()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::has_data() const
{
    return disable.is_set
	|| (explicit_null !=  nullptr && explicit_null->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (peer_advertise_policies !=  nullptr && peer_advertise_policies->has_data())
	|| (prefix_advertise_policies !=  nullptr && prefix_advertise_policies->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| (explicit_null !=  nullptr && explicit_null->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (peer_advertise_policies !=  nullptr && peer_advertise_policies->has_operation())
	|| (prefix_advertise_policies !=  nullptr && prefix_advertise_policies->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::get_entity_path(Entity* ancestor) const
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

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-null")
    {
        if(explicit_null != nullptr)
        {
            children["explicit-null"] = explicit_null.get();
        }
        else
        {
            explicit_null = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::ExplicitNull>();
            explicit_null->parent = this;
            children["explicit-null"] = explicit_null.get();
        }
        return children.at("explicit-null");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "peer-advertise-policies")
    {
        if(peer_advertise_policies != nullptr)
        {
            children["peer-advertise-policies"] = peer_advertise_policies.get();
        }
        else
        {
            peer_advertise_policies = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies>();
            peer_advertise_policies->parent = this;
            children["peer-advertise-policies"] = peer_advertise_policies.get();
        }
        return children.at("peer-advertise-policies");
    }

    if(child_yang_name == "prefix-advertise-policies")
    {
        if(prefix_advertise_policies != nullptr)
        {
            children["prefix-advertise-policies"] = prefix_advertise_policies.get();
        }
        else
        {
            prefix_advertise_policies = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::PrefixAdvertisePolicies>();
            prefix_advertise_policies->parent = this;
            children["prefix-advertise-policies"] = prefix_advertise_policies.get();
        }
        return children.at("prefix-advertise-policies");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::get_children()
{
    if(children.find("explicit-null") == children.end())
    {
        if(explicit_null != nullptr)
        {
            children["explicit-null"] = explicit_null.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("peer-advertise-policies") == children.end())
    {
        if(peer_advertise_policies != nullptr)
        {
            children["peer-advertise-policies"] = peer_advertise_policies.get();
        }
    }

    if(children.find("prefix-advertise-policies") == children.end())
    {
        if(prefix_advertise_policies != nullptr)
        {
            children["prefix-advertise-policies"] = prefix_advertise_policies.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::Allocate()
    :
    	allocation_type{YType::enumeration, "allocation-type"},
	 prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "allocate"; yang_parent_name = "local";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::~Allocate()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::has_data() const
{
    return allocation_type.is_set
	|| prefix_acl_name.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::has_operation() const
{
    return is_set(operation)
	|| is_set(allocation_type.operation)
	|| is_set(prefix_acl_name.operation);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::get_entity_path(Entity* ancestor) const
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

    if (allocation_type.is_set || is_set(allocation_type.operation)) leaf_name_data.push_back(allocation_type.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.operation)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allocation-type")
    {
        allocation_type = value;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
    }
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::Local()
    :
    	default_route{YType::empty, "default-route"},
	 implicit_null_override{YType::str, "implicit-null-override"}
    	,
    advertise(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise>())
	,allocate(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate>())
{
    advertise->parent = this;
    children["advertise"] = advertise.get();

    allocate->parent = this;
    children["allocate"] = allocate.get();

    yang_name = "local"; yang_parent_name = "label";
}

MplsLdp::DefaultVrf::Afs::Af::Label::Local::~Local()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::has_data() const
{
    return default_route.is_set
	|| implicit_null_override.is_set
	|| (advertise !=  nullptr && advertise->has_data())
	|| (allocate !=  nullptr && allocate->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(default_route.operation)
	|| is_set(implicit_null_override.operation)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (allocate !=  nullptr && allocate->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::Local::get_entity_path(Entity* ancestor) const
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

    if (default_route.is_set || is_set(default_route.operation)) leaf_name_data.push_back(default_route.get_name_leafdata());
    if (implicit_null_override.is_set || is_set(implicit_null_override.operation)) leaf_name_data.push_back(implicit_null_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Label::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertise")
    {
        if(advertise != nullptr)
        {
            children["advertise"] = advertise.get();
        }
        else
        {
            advertise = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Advertise>();
            advertise->parent = this;
            children["advertise"] = advertise.get();
        }
        return children.at("advertise");
    }

    if(child_yang_name == "allocate")
    {
        if(allocate != nullptr)
        {
            children["allocate"] = allocate.get();
        }
        else
        {
            allocate = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Local::Allocate>();
            allocate->parent = this;
            children["allocate"] = allocate.get();
        }
        return children.at("allocate");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Label::Local::get_children()
{
    if(children.find("advertise") == children.end())
    {
        if(advertise != nullptr)
        {
            children["advertise"] = advertise.get();
        }
    }

    if(children.find("allocate") == children.end())
    {
        if(allocate != nullptr)
        {
            children["allocate"] = allocate.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-route")
    {
        default_route = value;
    }
    if(value_path == "implicit-null-override")
    {
        implicit_null_override = value;
    }
}

MplsLdp::DefaultVrf::Afs::Af::Label::Label()
    :
    local(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Local>())
	,remote(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Remote>())
{
    local->parent = this;
    children["local"] = local.get();

    remote->parent = this;
    children["remote"] = remote.get();

    yang_name = "label"; yang_parent_name = "af";
}

MplsLdp::DefaultVrf::Afs::Af::Label::~Label()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::has_data() const
{
    return (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Label::has_operation() const
{
    return is_set(operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Label::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local.get();
        }
        else
        {
            local = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Local>();
            local->parent = this;
            children["local"] = local.get();
        }
        return children.at("local");
    }

    if(child_yang_name == "remote")
    {
        if(remote != nullptr)
        {
            children["remote"] = remote.get();
        }
        else
        {
            remote = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label::Remote>();
            remote->parent = this;
            children["remote"] = remote.get();
        }
        return children.at("remote");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Label::get_children()
{
    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local.get();
        }
    }

    if(children.find("remote") == children.end())
    {
        if(remote != nullptr)
        {
            children["remote"] = remote.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Label::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::TargetedHelloAccept()
    :
    	accept_type{YType::enumeration, "accept-type"},
	 peer_acl_name{YType::str, "peer-acl-name"}
{
    yang_name = "targeted-hello-accept"; yang_parent_name = "discovery";
}

MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::~TargetedHelloAccept()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::has_data() const
{
    return accept_type.is_set
	|| peer_acl_name.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_type.operation)
	|| is_set(peer_acl_name.operation);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello-accept";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::get_entity_path(Entity* ancestor) const
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

    if (accept_type.is_set || is_set(accept_type.operation)) leaf_name_data.push_back(accept_type.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.operation)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-type")
    {
        accept_type = value;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
    }
}

MplsLdp::DefaultVrf::Afs::Af::Discovery::Discovery()
    :
    	transport_address{YType::str, "transport-address"}
    	,
    targeted_hello_accept(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept>())
{
    targeted_hello_accept->parent = this;
    children["targeted-hello-accept"] = targeted_hello_accept.get();

    yang_name = "discovery"; yang_parent_name = "af";
}

MplsLdp::DefaultVrf::Afs::Af::Discovery::~Discovery()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Discovery::has_data() const
{
    return transport_address.is_set
	|| (targeted_hello_accept !=  nullptr && targeted_hello_accept->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Discovery::has_operation() const
{
    return is_set(operation)
	|| is_set(transport_address.operation)
	|| (targeted_hello_accept !=  nullptr && targeted_hello_accept->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Discovery::get_entity_path(Entity* ancestor) const
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

    if (transport_address.is_set || is_set(transport_address.operation)) leaf_name_data.push_back(transport_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "targeted-hello-accept")
    {
        if(targeted_hello_accept != nullptr)
        {
            children["targeted-hello-accept"] = targeted_hello_accept.get();
        }
        else
        {
            targeted_hello_accept = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Discovery::TargetedHelloAccept>();
            targeted_hello_accept->parent = this;
            children["targeted-hello-accept"] = targeted_hello_accept.get();
        }
        return children.at("targeted-hello-accept");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Discovery::get_children()
{
    if(children.find("targeted-hello-accept") == children.end())
    {
        if(targeted_hello_accept != nullptr)
        {
            children["targeted-hello-accept"] = targeted_hello_accept.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Discovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transport-address")
    {
        transport_address = value;
    }
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::GroupId()
    :
    	mesh_group_id{YType::uint32, "mesh-group-id"}
{
    yang_name = "group-id"; yang_parent_name = "group-ids";
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::~GroupId()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::has_data() const
{
    return mesh_group_id.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::has_operation() const
{
    return is_set(operation)
	|| is_set(mesh_group_id.operation);
}

std::string MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-id" <<"[mesh-group-id='" <<mesh_group_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::get_entity_path(Entity* ancestor) const
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

    if (mesh_group_id.is_set || is_set(mesh_group_id.operation)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
    }
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupIds()
{
    yang_name = "group-ids"; yang_parent_name = "auto-tunnel-mesh";
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::~GroupIds()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::has_data() const
{
    for (std::size_t index=0; index<group_id.size(); index++)
    {
        if(group_id[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::has_operation() const
{
    for (std::size_t index=0; index<group_id.size(); index++)
    {
        if(group_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-ids";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-id")
    {
        for(auto const & c : group_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::GroupId>();
        c->parent = this;
        group_id.push_back(std::move(c));
        children[segment_path] = group_id.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::get_children()
{
    for (auto const & c : group_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::AutoTunnelMesh()
    :
    	group_all{YType::empty, "group-all"}
    	,
    group_ids(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds>())
{
    group_ids->parent = this;
    children["group-ids"] = group_ids.get();

    yang_name = "auto-tunnel-mesh"; yang_parent_name = "traffic-engineering";
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::~AutoTunnelMesh()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::has_data() const
{
    return group_all.is_set
	|| (group_ids !=  nullptr && group_ids->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::has_operation() const
{
    return is_set(operation)
	|| is_set(group_all.operation)
	|| (group_ids !=  nullptr && group_ids->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel-mesh";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::get_entity_path(Entity* ancestor) const
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

    if (group_all.is_set || is_set(group_all.operation)) leaf_name_data.push_back(group_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group-ids")
    {
        if(group_ids != nullptr)
        {
            children["group-ids"] = group_ids.get();
        }
        else
        {
            group_ids = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::GroupIds>();
            group_ids->parent = this;
            children["group-ids"] = group_ids.get();
        }
        return children.at("group-ids");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::get_children()
{
    if(children.find("group-ids") == children.end())
    {
        if(group_ids != nullptr)
        {
            children["group-ids"] = group_ids.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-all")
    {
        group_all = value;
    }
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::TrafficEngineering()
    :
    auto_tunnel_mesh(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh>())
{
    auto_tunnel_mesh->parent = this;
    children["auto-tunnel-mesh"] = auto_tunnel_mesh.get();

    yang_name = "traffic-engineering"; yang_parent_name = "af";
}

MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::~TrafficEngineering()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::has_data() const
{
    return (auto_tunnel_mesh !=  nullptr && auto_tunnel_mesh->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::has_operation() const
{
    return is_set(operation)
	|| (auto_tunnel_mesh !=  nullptr && auto_tunnel_mesh->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-engineering";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-tunnel-mesh")
    {
        if(auto_tunnel_mesh != nullptr)
        {
            children["auto-tunnel-mesh"] = auto_tunnel_mesh.get();
        }
        else
        {
            auto_tunnel_mesh = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::AutoTunnelMesh>();
            auto_tunnel_mesh->parent = this;
            children["auto-tunnel-mesh"] = auto_tunnel_mesh.get();
        }
        return children.at("auto-tunnel-mesh");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::get_children()
{
    if(children.find("auto-tunnel-mesh") == children.end())
    {
        if(auto_tunnel_mesh != nullptr)
        {
            children["auto-tunnel-mesh"] = auto_tunnel_mesh.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::Address()
    :
    	ip_address{YType::str, "ip-address"},
	 targeted{YType::empty, "targeted"}
{
    yang_name = "address"; yang_parent_name = "addresses";
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::~Address()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::has_data() const
{
    return ip_address.is_set
	|| targeted.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(targeted.operation);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[ip-address='" <<ip_address.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::get_entity_path(Entity* ancestor) const
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

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (targeted.is_set || is_set(targeted.operation)) leaf_name_data.push_back(targeted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "targeted")
    {
        targeted = value;
    }
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Addresses()
{
    yang_name = "addresses"; yang_parent_name = "neighbor";
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::~Addresses()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::Address>();
        c->parent = this;
        address.push_back(std::move(c));
        children[segment_path] = address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::get_children()
{
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::Neighbor()
    :
    addresses(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses>())
{
    addresses->parent = this;
    children["addresses"] = addresses.get();

    yang_name = "neighbor"; yang_parent_name = "af";
}

MplsLdp::DefaultVrf::Afs::Af::Neighbor::~Neighbor()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::has_data() const
{
    return (addresses !=  nullptr && addresses->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::Neighbor::has_operation() const
{
    return is_set(operation)
	|| (addresses !=  nullptr && addresses->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::Neighbor::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addresses")
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses.get();
        }
        else
        {
            addresses = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Neighbor::Addresses>();
            addresses->parent = this;
            children["addresses"] = addresses.get();
        }
        return children.at("addresses");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::Neighbor::get_children()
{
    if(children.find("addresses") == children.end())
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::Neighbor::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::As()
    :
    	as_xx{YType::uint32, "as-xx"},
	 as_yy{YType::uint32, "as-yy"}
{
    yang_name = "as"; yang_parent_name = "bgp";
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::~As()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::has_data() const
{
    return as_xx.is_set
	|| as_yy.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::has_operation() const
{
    return is_set(operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation);
}

std::string MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::get_entity_path(Entity* ancestor) const
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

    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::AdvertiseTo()
    :
    	peer_acl_name{YType::str, "peer-acl-name"},
	 type{YType::enumeration, "type"}
{
    yang_name = "advertise-to"; yang_parent_name = "bgp";
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::~AdvertiseTo()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::has_data() const
{
    return peer_acl_name.is_set
	|| type.is_set;
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_acl_name.operation)
	|| is_set(type.operation);
}

std::string MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-to";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::get_entity_path(Entity* ancestor) const
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

    if (peer_acl_name.is_set || is_set(peer_acl_name.operation)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::Bgp()
    :
    advertise_to(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo>())
	,as(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As>())
{
    advertise_to->parent = this;
    children["advertise-to"] = advertise_to.get();

    as->parent = this;
    children["as"] = as.get();

    yang_name = "bgp"; yang_parent_name = "redistribution-protocol";
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::~Bgp()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::has_data() const
{
    return (advertise_to !=  nullptr && advertise_to->has_data())
	|| (as !=  nullptr && as->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::has_operation() const
{
    return is_set(operation)
	|| (advertise_to !=  nullptr && advertise_to->has_operation())
	|| (as !=  nullptr && as->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertise-to")
    {
        if(advertise_to != nullptr)
        {
            children["advertise-to"] = advertise_to.get();
        }
        else
        {
            advertise_to = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::AdvertiseTo>();
            advertise_to->parent = this;
            children["advertise-to"] = advertise_to.get();
        }
        return children.at("advertise-to");
    }

    if(child_yang_name == "as")
    {
        if(as != nullptr)
        {
            children["as"] = as.get();
        }
        else
        {
            as = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::As>();
            as->parent = this;
            children["as"] = as.get();
        }
        return children.at("as");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::get_children()
{
    if(children.find("advertise-to") == children.end())
    {
        if(advertise_to != nullptr)
        {
            children["advertise-to"] = advertise_to.get();
        }
    }

    if(children.find("as") == children.end())
    {
        if(as != nullptr)
        {
            children["as"] = as.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::RedistributionProtocol()
    :
    bgp(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp>())
{
    bgp->parent = this;
    children["bgp"] = bgp.get();

    yang_name = "redistribution-protocol"; yang_parent_name = "af";
}

MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::~RedistributionProtocol()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::has_operation() const
{
    return is_set(operation)
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution-protocol";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp")
    {
        if(bgp != nullptr)
        {
            children["bgp"] = bgp.get();
        }
        else
        {
            bgp = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::Bgp>();
            bgp->parent = this;
            children["bgp"] = bgp.get();
        }
        return children.at("bgp");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::get_children()
{
    if(children.find("bgp") == children.end())
    {
        if(bgp != nullptr)
        {
            children["bgp"] = bgp.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Afs::Af::Af()
    :
    	af_name{YType::enumeration, "af-name"},
	 enable{YType::empty, "enable"}
    	,
    discovery(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Discovery>())
	,label(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label>())
	,neighbor(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Neighbor>())
	,redistribution_protocol(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol>())
	,traffic_engineering(std::make_unique<MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering>())
{
    discovery->parent = this;
    children["discovery"] = discovery.get();

    label->parent = this;
    children["label"] = label.get();

    neighbor->parent = this;
    children["neighbor"] = neighbor.get();

    redistribution_protocol->parent = this;
    children["redistribution-protocol"] = redistribution_protocol.get();

    traffic_engineering->parent = this;
    children["traffic-engineering"] = traffic_engineering.get();

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::DefaultVrf::Afs::Af::~Af()
{
}

bool MplsLdp::DefaultVrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| enable.is_set
	|| (discovery !=  nullptr && discovery->has_data())
	|| (label !=  nullptr && label->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (redistribution_protocol !=  nullptr && redistribution_protocol->has_data())
	|| (traffic_engineering !=  nullptr && traffic_engineering->has_data());
}

bool MplsLdp::DefaultVrf::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(enable.operation)
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (label !=  nullptr && label->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (redistribution_protocol !=  nullptr && redistribution_protocol->has_operation())
	|| (traffic_engineering !=  nullptr && traffic_engineering->has_operation());
}

std::string MplsLdp::DefaultVrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/afs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovery")
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery.get();
        }
        else
        {
            discovery = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Discovery>();
            discovery->parent = this;
            children["discovery"] = discovery.get();
        }
        return children.at("discovery");
    }

    if(child_yang_name == "label")
    {
        if(label != nullptr)
        {
            children["label"] = label.get();
        }
        else
        {
            label = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Label>();
            label->parent = this;
            children["label"] = label.get();
        }
        return children.at("label");
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor.get();
        }
        else
        {
            neighbor = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::Neighbor>();
            neighbor->parent = this;
            children["neighbor"] = neighbor.get();
        }
        return children.at("neighbor");
    }

    if(child_yang_name == "redistribution-protocol")
    {
        if(redistribution_protocol != nullptr)
        {
            children["redistribution-protocol"] = redistribution_protocol.get();
        }
        else
        {
            redistribution_protocol = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::RedistributionProtocol>();
            redistribution_protocol->parent = this;
            children["redistribution-protocol"] = redistribution_protocol.get();
        }
        return children.at("redistribution-protocol");
    }

    if(child_yang_name == "traffic-engineering")
    {
        if(traffic_engineering != nullptr)
        {
            children["traffic-engineering"] = traffic_engineering.get();
        }
        else
        {
            traffic_engineering = std::make_unique<MplsLdp::DefaultVrf::Afs::Af::TrafficEngineering>();
            traffic_engineering->parent = this;
            children["traffic-engineering"] = traffic_engineering.get();
        }
        return children.at("traffic-engineering");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::Af::get_children()
{
    if(children.find("discovery") == children.end())
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery.get();
        }
    }

    if(children.find("label") == children.end())
    {
        if(label != nullptr)
        {
            children["label"] = label.get();
        }
    }

    if(children.find("neighbor") == children.end())
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor.get();
        }
    }

    if(children.find("redistribution-protocol") == children.end())
    {
        if(redistribution_protocol != nullptr)
        {
            children["redistribution-protocol"] = redistribution_protocol.get();
        }
    }

    if(children.find("traffic-engineering") == children.end())
    {
        if(traffic_engineering != nullptr)
        {
            children["traffic-engineering"] = traffic_engineering.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsLdp::DefaultVrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "default-vrf";
}

MplsLdp::DefaultVrf::Afs::~Afs()
{
}

bool MplsLdp::DefaultVrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::DefaultVrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<MplsLdp::DefaultVrf::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Afs::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Afs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Global::Session::Protection::Protection()
    :
    	duration{YType::uint32, "duration"},
	 peer_acl_name{YType::str, "peer-acl-name"},
	 protection_type{YType::enumeration, "protection-type"}
{
    yang_name = "protection"; yang_parent_name = "session";
}

MplsLdp::DefaultVrf::Global::Session::Protection::~Protection()
{
}

bool MplsLdp::DefaultVrf::Global::Session::Protection::has_data() const
{
    return duration.is_set
	|| peer_acl_name.is_set
	|| protection_type.is_set;
}

bool MplsLdp::DefaultVrf::Global::Session::Protection::has_operation() const
{
    return is_set(operation)
	|| is_set(duration.operation)
	|| is_set(peer_acl_name.operation)
	|| is_set(protection_type.operation);
}

std::string MplsLdp::DefaultVrf::Global::Session::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Global::Session::Protection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/session/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.operation)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.operation)) leaf_name_data.push_back(protection_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Global::Session::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Global::Session::Protection::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Global::Session::Protection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
    }
}

MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::DownstreamOnDemand()
    :
    	peer_acl_name{YType::str, "peer-acl-name"},
	 type{YType::enumeration, "type"}
{
    yang_name = "downstream-on-demand"; yang_parent_name = "session";
}

MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::~DownstreamOnDemand()
{
}

bool MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::has_data() const
{
    return peer_acl_name.is_set
	|| type.is_set;
}

bool MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_acl_name.operation)
	|| is_set(type.operation);
}

std::string MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "downstream-on-demand";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/session/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_acl_name.is_set || is_set(peer_acl_name.operation)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLdp::DefaultVrf::Global::Session::Session()
    :
    downstream_on_demand(std::make_unique<MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand>())
	,protection(std::make_unique<MplsLdp::DefaultVrf::Global::Session::Protection>())
{
    downstream_on_demand->parent = this;
    children["downstream-on-demand"] = downstream_on_demand.get();

    protection->parent = this;
    children["protection"] = protection.get();

    yang_name = "session"; yang_parent_name = "global";
}

MplsLdp::DefaultVrf::Global::Session::~Session()
{
}

bool MplsLdp::DefaultVrf::Global::Session::has_data() const
{
    return (downstream_on_demand !=  nullptr && downstream_on_demand->has_data())
	|| (protection !=  nullptr && protection->has_data());
}

bool MplsLdp::DefaultVrf::Global::Session::has_operation() const
{
    return is_set(operation)
	|| (downstream_on_demand !=  nullptr && downstream_on_demand->has_operation())
	|| (protection !=  nullptr && protection->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Global::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Global::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "downstream-on-demand")
    {
        if(downstream_on_demand != nullptr)
        {
            children["downstream-on-demand"] = downstream_on_demand.get();
        }
        else
        {
            downstream_on_demand = std::make_unique<MplsLdp::DefaultVrf::Global::Session::DownstreamOnDemand>();
            downstream_on_demand->parent = this;
            children["downstream-on-demand"] = downstream_on_demand.get();
        }
        return children.at("downstream-on-demand");
    }

    if(child_yang_name == "protection")
    {
        if(protection != nullptr)
        {
            children["protection"] = protection.get();
        }
        else
        {
            protection = std::make_unique<MplsLdp::DefaultVrf::Global::Session::Protection>();
            protection->parent = this;
            children["protection"] = protection.get();
        }
        return children.at("protection");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Global::Session::get_children()
{
    if(children.find("downstream-on-demand") == children.end())
    {
        if(downstream_on_demand != nullptr)
        {
            children["downstream-on-demand"] = downstream_on_demand.get();
        }
    }

    if(children.find("protection") == children.end())
    {
        if(protection != nullptr)
        {
            children["protection"] = protection.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Global::Session::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::Password()
    :
    	command_type{YType::enumeration, "command-type"},
	 password{YType::str, "password"}
{
    yang_name = "password"; yang_parent_name = "ldp-id";
}

MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::~Password()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::has_data() const
{
    return command_type.is_set
	|| password.is_set;
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(command_type.operation)
	|| is_set(password.operation);
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::get_entity_path(Entity* ancestor) const
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

    if (command_type.is_set || is_set(command_type.operation)) leaf_name_data.push_back(command_type.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "command-type")
    {
        command_type = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::LdpId()
    :
    	label_space_id{YType::uint32, "label-space-id"},
	 lsr_id{YType::str, "lsr-id"}
    	,
    password(std::make_unique<MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password>())
{
    password->parent = this;
    children["password"] = password.get();

    yang_name = "ldp-id"; yang_parent_name = "ldp-ids";
}

MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::~LdpId()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::has_data() const
{
    return label_space_id.is_set
	|| lsr_id.is_set
	|| (password !=  nullptr && password->has_data());
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-id" <<"[label-space-id='" <<label_space_id.get() <<"']" <<"[lsr-id='" <<lsr_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/neighbor/ldp-ids/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "password")
    {
        if(password != nullptr)
        {
            children["password"] = password.get();
        }
        else
        {
            password = std::make_unique<MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::Password>();
            password->parent = this;
            children["password"] = password.get();
        }
        return children.at("password");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::get_children()
{
    if(children.find("password") == children.end())
    {
        if(password != nullptr)
        {
            children["password"] = password.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpIds()
{
    yang_name = "ldp-ids"; yang_parent_name = "neighbor";
}

MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::~LdpIds()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::has_data() const
{
    for (std::size_t index=0; index<ldp_id.size(); index++)
    {
        if(ldp_id[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::has_operation() const
{
    for (std::size_t index=0; index<ldp_id.size(); index++)
    {
        if(ldp_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-ids";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/neighbor/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ldp-id")
    {
        for(auto const & c : ldp_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::LdpId>();
        c->parent = this;
        ldp_id.push_back(std::move(c));
        children[segment_path] = ldp_id.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::get_children()
{
    for (auto const & c : ldp_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Global::Neighbor::LdpIds::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::Prefer()
    :
    	ipv4{YType::empty, "ipv4"}
{
    yang_name = "prefer"; yang_parent_name = "transport-connection";
}

MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::~Prefer()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::has_data() const
{
    return ipv4.is_set;
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefer";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/neighbor/dual-stack/transport-connection/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::TransportConnection()
    :
    	max_wait{YType::uint32, "max-wait"}
    	,
    prefer(std::make_unique<MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer>())
{
    prefer->parent = this;
    children["prefer"] = prefer.get();

    yang_name = "transport-connection"; yang_parent_name = "dual-stack";
}

MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::~TransportConnection()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::has_data() const
{
    return max_wait.is_set
	|| (prefer !=  nullptr && prefer->has_data());
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::has_operation() const
{
    return is_set(operation)
	|| is_set(max_wait.operation)
	|| (prefer !=  nullptr && prefer->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-connection";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/neighbor/dual-stack/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_wait.is_set || is_set(max_wait.operation)) leaf_name_data.push_back(max_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefer")
    {
        if(prefer != nullptr)
        {
            children["prefer"] = prefer.get();
        }
        else
        {
            prefer = std::make_unique<MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::Prefer>();
            prefer->parent = this;
            children["prefer"] = prefer.get();
        }
        return children.at("prefer");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::get_children()
{
    if(children.find("prefer") == children.end())
    {
        if(prefer != nullptr)
        {
            children["prefer"] = prefer.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-wait")
    {
        max_wait = value;
    }
}

MplsLdp::DefaultVrf::Global::Neighbor::DualStack::DualStack()
    :
    	tlv_compliance{YType::empty, "tlv-compliance"}
    	,
    transport_connection(std::make_unique<MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection>())
{
    transport_connection->parent = this;
    children["transport-connection"] = transport_connection.get();

    yang_name = "dual-stack"; yang_parent_name = "neighbor";
}

MplsLdp::DefaultVrf::Global::Neighbor::DualStack::~DualStack()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::has_data() const
{
    return tlv_compliance.is_set
	|| (transport_connection !=  nullptr && transport_connection->has_data());
}

bool MplsLdp::DefaultVrf::Global::Neighbor::DualStack::has_operation() const
{
    return is_set(operation)
	|| is_set(tlv_compliance.operation)
	|| (transport_connection !=  nullptr && transport_connection->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::DualStack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dual-stack";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Global::Neighbor::DualStack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/neighbor/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_compliance.is_set || is_set(tlv_compliance.operation)) leaf_name_data.push_back(tlv_compliance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Global::Neighbor::DualStack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "transport-connection")
    {
        if(transport_connection != nullptr)
        {
            children["transport-connection"] = transport_connection.get();
        }
        else
        {
            transport_connection = std::make_unique<MplsLdp::DefaultVrf::Global::Neighbor::DualStack::TransportConnection>();
            transport_connection->parent = this;
            children["transport-connection"] = transport_connection.get();
        }
        return children.at("transport-connection");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Global::Neighbor::DualStack::get_children()
{
    if(children.find("transport-connection") == children.end())
    {
        if(transport_connection != nullptr)
        {
            children["transport-connection"] = transport_connection.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Global::Neighbor::DualStack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tlv-compliance")
    {
        tlv_compliance = value;
    }
}

MplsLdp::DefaultVrf::Global::Neighbor::Neighbor()
    :
    	password{YType::str, "password"}
    	,
    dual_stack(std::make_unique<MplsLdp::DefaultVrf::Global::Neighbor::DualStack>())
	,ldp_ids(std::make_unique<MplsLdp::DefaultVrf::Global::Neighbor::LdpIds>())
{
    dual_stack->parent = this;
    children["dual-stack"] = dual_stack.get();

    ldp_ids->parent = this;
    children["ldp-ids"] = ldp_ids.get();

    yang_name = "neighbor"; yang_parent_name = "global";
}

MplsLdp::DefaultVrf::Global::Neighbor::~Neighbor()
{
}

bool MplsLdp::DefaultVrf::Global::Neighbor::has_data() const
{
    return password.is_set
	|| (dual_stack !=  nullptr && dual_stack->has_data())
	|| (ldp_ids !=  nullptr && ldp_ids->has_data());
}

bool MplsLdp::DefaultVrf::Global::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(password.operation)
	|| (dual_stack !=  nullptr && dual_stack->has_operation())
	|| (ldp_ids !=  nullptr && ldp_ids->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Global::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Global::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dual-stack")
    {
        if(dual_stack != nullptr)
        {
            children["dual-stack"] = dual_stack.get();
        }
        else
        {
            dual_stack = std::make_unique<MplsLdp::DefaultVrf::Global::Neighbor::DualStack>();
            dual_stack->parent = this;
            children["dual-stack"] = dual_stack.get();
        }
        return children.at("dual-stack");
    }

    if(child_yang_name == "ldp-ids")
    {
        if(ldp_ids != nullptr)
        {
            children["ldp-ids"] = ldp_ids.get();
        }
        else
        {
            ldp_ids = std::make_unique<MplsLdp::DefaultVrf::Global::Neighbor::LdpIds>();
            ldp_ids->parent = this;
            children["ldp-ids"] = ldp_ids.get();
        }
        return children.at("ldp-ids");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Global::Neighbor::get_children()
{
    if(children.find("dual-stack") == children.end())
    {
        if(dual_stack != nullptr)
        {
            children["dual-stack"] = dual_stack.get();
        }
    }

    if(children.find("ldp-ids") == children.end())
    {
        if(ldp_ids != nullptr)
        {
            children["ldp-ids"] = ldp_ids.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Global::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "password")
    {
        password = value;
    }
}

MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::HelperPeer()
    :
    	maintain_on_local_reset{YType::str, "maintain-on-local-reset"}
{
    yang_name = "helper-peer"; yang_parent_name = "graceful-restart";
}

MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::~HelperPeer()
{
}

bool MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::has_data() const
{
    return maintain_on_local_reset.is_set;
}

bool MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::has_operation() const
{
    return is_set(operation)
	|| is_set(maintain_on_local_reset.operation);
}

std::string MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-peer";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/graceful-restart/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maintain_on_local_reset.is_set || is_set(maintain_on_local_reset.operation)) leaf_name_data.push_back(maintain_on_local_reset.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maintain-on-local-reset")
    {
        maintain_on_local_reset = value;
    }
}

MplsLdp::DefaultVrf::Global::GracefulRestart::GracefulRestart()
    :
    helper_peer(std::make_unique<MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer>())
{
    helper_peer->parent = this;
    children["helper-peer"] = helper_peer.get();

    yang_name = "graceful-restart"; yang_parent_name = "global";
}

MplsLdp::DefaultVrf::Global::GracefulRestart::~GracefulRestart()
{
}

bool MplsLdp::DefaultVrf::Global::GracefulRestart::has_data() const
{
    return (helper_peer !=  nullptr && helper_peer->has_data());
}

bool MplsLdp::DefaultVrf::Global::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| (helper_peer !=  nullptr && helper_peer->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Global::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "helper-peer")
    {
        if(helper_peer != nullptr)
        {
            children["helper-peer"] = helper_peer.get();
        }
        else
        {
            helper_peer = std::make_unique<MplsLdp::DefaultVrf::Global::GracefulRestart::HelperPeer>();
            helper_peer->parent = this;
            children["helper-peer"] = helper_peer.get();
        }
        return children.at("helper-peer");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Global::GracefulRestart::get_children()
{
    if(children.find("helper-peer") == children.end())
    {
        if(helper_peer != nullptr)
        {
            children["helper-peer"] = helper_peer.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Global::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Global::Global()
    :
    	router_id{YType::str, "router-id"}
    	,
    graceful_restart(std::make_unique<MplsLdp::DefaultVrf::Global::GracefulRestart>())
	,neighbor(std::make_unique<MplsLdp::DefaultVrf::Global::Neighbor>())
	,session(std::make_unique<MplsLdp::DefaultVrf::Global::Session>())
{
    graceful_restart->parent = this;
    children["graceful-restart"] = graceful_restart.get();

    neighbor->parent = this;
    children["neighbor"] = neighbor.get();

    session->parent = this;
    children["session"] = session.get();

    yang_name = "global"; yang_parent_name = "default-vrf";
}

MplsLdp::DefaultVrf::Global::~Global()
{
}

bool MplsLdp::DefaultVrf::Global::has_data() const
{
    return router_id.is_set
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool MplsLdp::DefaultVrf::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(router_id.operation)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string MplsLdp::DefaultVrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart.get();
        }
        else
        {
            graceful_restart = std::make_unique<MplsLdp::DefaultVrf::Global::GracefulRestart>();
            graceful_restart->parent = this;
            children["graceful-restart"] = graceful_restart.get();
        }
        return children.at("graceful-restart");
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor.get();
        }
        else
        {
            neighbor = std::make_unique<MplsLdp::DefaultVrf::Global::Neighbor>();
            neighbor->parent = this;
            children["neighbor"] = neighbor.get();
        }
        return children.at("neighbor");
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
        else
        {
            session = std::make_unique<MplsLdp::DefaultVrf::Global::Session>();
            session->parent = this;
            children["session"] = session.get();
        }
        return children.at("session");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Global::get_children()
{
    if(children.find("graceful-restart") == children.end())
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart.get();
        }
    }

    if(children.find("neighbor") == children.end())
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor.get();
        }
    }

    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::TransportAddress()
    :
    	address{YType::str, "address"},
	 address_type{YType::enumeration, "address-type"}
{
    yang_name = "transport-address"; yang_parent_name = "discovery";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::~TransportAddress()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::has_data() const
{
    return address.is_set
	|| address_type.is_set;
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_type.operation);
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-address";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_type.is_set || is_set(address_type.operation)) leaf_name_data.push_back(address_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-type")
    {
        address_type = value;
    }
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::Discovery()
    :
    transport_address(std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress>())
{
    transport_address->parent = this;
    children["transport-address"] = transport_address.get();

    yang_name = "discovery"; yang_parent_name = "af";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::~Discovery()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::has_data() const
{
    return (transport_address !=  nullptr && transport_address->has_data());
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::has_operation() const
{
    return is_set(operation)
	|| (transport_address !=  nullptr && transport_address->has_operation());
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "transport-address")
    {
        if(transport_address != nullptr)
        {
            children["transport-address"] = transport_address.get();
        }
        else
        {
            transport_address = std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress>();
            transport_address->parent = this;
            children["transport-address"] = transport_address.get();
        }
        return children.at("transport-address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::get_children()
{
    if(children.find("transport-address") == children.end())
    {
        if(transport_address != nullptr)
        {
            children["transport-address"] = transport_address.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::Igp()
    :
    	disable_auto_config{YType::empty, "disable-auto-config"}
{
    yang_name = "igp"; yang_parent_name = "af";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::~Igp()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::has_data() const
{
    return disable_auto_config.is_set;
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::has_operation() const
{
    return is_set(operation)
	|| is_set(disable_auto_config.operation);
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::get_entity_path(Entity* ancestor) const
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

    if (disable_auto_config.is_set || is_set(disable_auto_config.operation)) leaf_name_data.push_back(disable_auto_config.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable-auto-config")
    {
        disable_auto_config = value;
    }
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::Mldp()
    :
    	disable{YType::empty, "disable"}
{
    yang_name = "mldp"; yang_parent_name = "af";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::~Mldp()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::has_data() const
{
    return disable.is_set;
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mldp";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::get_entity_path(Entity* ancestor) const
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

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Af()
    :
    	af_name{YType::enumeration, "af-name"},
	 enable{YType::empty, "enable"}
    	,
    discovery(std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery>())
	,igp(std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp>())
	,mldp(std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp>())
{
    discovery->parent = this;
    children["discovery"] = discovery.get();

    igp->parent = this;
    children["igp"] = igp.get();

    mldp->parent = this;
    children["mldp"] = mldp.get();

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::~Af()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::has_data() const
{
    return af_name.is_set
	|| enable.is_set
	|| (discovery !=  nullptr && discovery->has_data())
	|| (igp !=  nullptr && igp->has_data())
	|| (mldp !=  nullptr && mldp->has_data());
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(enable.operation)
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (igp !=  nullptr && igp->has_operation())
	|| (mldp !=  nullptr && mldp->has_operation());
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovery")
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery.get();
        }
        else
        {
            discovery = std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Discovery>();
            discovery->parent = this;
            children["discovery"] = discovery.get();
        }
        return children.at("discovery");
    }

    if(child_yang_name == "igp")
    {
        if(igp != nullptr)
        {
            children["igp"] = igp.get();
        }
        else
        {
            igp = std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Igp>();
            igp->parent = this;
            children["igp"] = igp.get();
        }
        return children.at("igp");
    }

    if(child_yang_name == "mldp")
    {
        if(mldp != nullptr)
        {
            children["mldp"] = mldp.get();
        }
        else
        {
            mldp = std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::Mldp>();
            mldp->parent = this;
            children["mldp"] = mldp.get();
        }
        return children.at("mldp");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::get_children()
{
    if(children.find("discovery") == children.end())
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery.get();
        }
    }

    if(children.find("igp") == children.end())
    {
        if(igp != nullptr)
        {
            children["igp"] = igp.get();
        }
    }

    if(children.find("mldp") == children.end())
    {
        if(mldp != nullptr)
        {
            children["mldp"] = mldp.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "interface";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Afs::~Afs()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Afs::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Interfaces::Interface::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Interfaces::Interface::Afs::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Afs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::LinkHello()
    :
    	dual_stack{YType::enumeration, "dual-stack"},
	 hold_time{YType::uint32, "hold-time"},
	 interval{YType::uint32, "interval"}
{
    yang_name = "link-hello"; yang_parent_name = "discovery";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::~LinkHello()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::has_data() const
{
    return dual_stack.is_set
	|| hold_time.is_set
	|| interval.is_set;
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_stack.operation)
	|| is_set(hold_time.operation)
	|| is_set(interval.operation);
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::get_entity_path(Entity* ancestor) const
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

    if (dual_stack.is_set || is_set(dual_stack.operation)) leaf_name_data.push_back(dual_stack.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-stack")
    {
        dual_stack = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::Discovery()
    :
    	disable_quick_start{YType::empty, "disable-quick-start"}
    	,
    link_hello(std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello>())
{
    link_hello->parent = this;
    children["link-hello"] = link_hello.get();

    yang_name = "discovery"; yang_parent_name = "global";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::~Discovery()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::has_data() const
{
    return disable_quick_start.is_set
	|| (link_hello !=  nullptr && link_hello->has_data());
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::has_operation() const
{
    return is_set(operation)
	|| is_set(disable_quick_start.operation)
	|| (link_hello !=  nullptr && link_hello->has_operation());
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::get_entity_path(Entity* ancestor) const
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

    if (disable_quick_start.is_set || is_set(disable_quick_start.operation)) leaf_name_data.push_back(disable_quick_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-hello")
    {
        if(link_hello != nullptr)
        {
            children["link-hello"] = link_hello.get();
        }
        else
        {
            link_hello = std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::LinkHello>();
            link_hello->parent = this;
            children["link-hello"] = link_hello.get();
        }
        return children.at("link-hello");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::get_children()
{
    if(children.find("link-hello") == children.end())
    {
        if(link_hello != nullptr)
        {
            children["link-hello"] = link_hello.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable-quick-start")
    {
        disable_quick_start = value;
    }
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::OnSessionUp()
    :
    	disable{YType::empty, "disable"},
	 timeout{YType::uint32, "timeout"}
{
    yang_name = "on-session-up"; yang_parent_name = "delay";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::~OnSessionUp()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::has_data() const
{
    return disable.is_set
	|| timeout.is_set;
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(timeout.operation);
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-session-up";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::get_entity_path(Entity* ancestor) const
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

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::get_children()
{
    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::Delay()
    :
    on_session_up(std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp>())
{
    on_session_up->parent = this;
    children["on-session-up"] = on_session_up.get();

    yang_name = "delay"; yang_parent_name = "sync";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::~Delay()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::has_data() const
{
    return (on_session_up !=  nullptr && on_session_up->has_data());
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::has_operation() const
{
    return is_set(operation)
	|| (on_session_up !=  nullptr && on_session_up->has_operation());
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "on-session-up")
    {
        if(on_session_up != nullptr)
        {
            children["on-session-up"] = on_session_up.get();
        }
        else
        {
            on_session_up = std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::OnSessionUp>();
            on_session_up->parent = this;
            children["on-session-up"] = on_session_up.get();
        }
        return children.at("on-session-up");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::get_children()
{
    if(children.find("on-session-up") == children.end())
    {
        if(on_session_up != nullptr)
        {
            children["on-session-up"] = on_session_up.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Sync()
    :
    delay(std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay>())
{
    delay->parent = this;
    children["delay"] = delay.get();

    yang_name = "sync"; yang_parent_name = "igp";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::~Sync()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "delay")
    {
        if(delay != nullptr)
        {
            children["delay"] = delay.get();
        }
        else
        {
            delay = std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::Delay>();
            delay->parent = this;
            children["delay"] = delay.get();
        }
        return children.at("delay");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::get_children()
{
    if(children.find("delay") == children.end())
    {
        if(delay != nullptr)
        {
            children["delay"] = delay.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Igp()
    :
    sync(std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync>())
{
    sync->parent = this;
    children["sync"] = sync.get();

    yang_name = "igp"; yang_parent_name = "global";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::~Igp()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::has_data() const
{
    return (sync !=  nullptr && sync->has_data());
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::has_operation() const
{
    return is_set(operation)
	|| (sync !=  nullptr && sync->has_operation());
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sync")
    {
        if(sync != nullptr)
        {
            children["sync"] = sync.get();
        }
        else
        {
            sync = std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::Sync>();
            sync->parent = this;
            children["sync"] = sync.get();
        }
        return children.at("sync");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::get_children()
{
    if(children.find("sync") == children.end())
    {
        if(sync != nullptr)
        {
            children["sync"] = sync.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::Global()
    :
    discovery(std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery>())
	,igp(std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp>())
{
    discovery->parent = this;
    children["discovery"] = discovery.get();

    igp->parent = this;
    children["igp"] = igp.get();

    yang_name = "global"; yang_parent_name = "interface";
}

MplsLdp::DefaultVrf::Interfaces::Interface::Global::~Global()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::has_data() const
{
    return (discovery !=  nullptr && discovery->has_data())
	|| (igp !=  nullptr && igp->has_data());
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::Global::has_operation() const
{
    return is_set(operation)
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (igp !=  nullptr && igp->has_operation());
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::Global::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Interfaces::Interface::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovery")
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery.get();
        }
        else
        {
            discovery = std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Discovery>();
            discovery->parent = this;
            children["discovery"] = discovery.get();
        }
        return children.at("discovery");
    }

    if(child_yang_name == "igp")
    {
        if(igp != nullptr)
        {
            children["igp"] = igp.get();
        }
        else
        {
            igp = std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Global::Igp>();
            igp->parent = this;
            children["igp"] = igp.get();
        }
        return children.at("igp");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Interfaces::Interface::Global::get_children()
{
    if(children.find("discovery") == children.end())
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery.get();
        }
    }

    if(children.find("igp") == children.end())
    {
        if(igp != nullptr)
        {
            children["igp"] = igp.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::Global::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 enable{YType::empty, "enable"}
    	,
    afs(std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Afs>())
	,global(std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Global>())
{
    afs->parent = this;
    children["afs"] = afs.get();

    global->parent = this;
    children["global"] = global.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsLdp::DefaultVrf::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| enable.is_set
	|| (afs !=  nullptr && afs->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool MplsLdp::DefaultVrf::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(enable.operation)
	|| (afs !=  nullptr && afs->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string MplsLdp::DefaultVrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/interfaces/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "afs")
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
        else
        {
            afs = std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Afs>();
            afs->parent = this;
            children["afs"] = afs.get();
        }
        return children.at("afs");
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global.get();
        }
        else
        {
            global = std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface::Global>();
            global->parent = this;
            children["global"] = global.get();
        }
        return children.at("global");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Interfaces::Interface::get_children()
{
    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
    }

    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsLdp::DefaultVrf::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "default-vrf";
}

MplsLdp::DefaultVrf::Interfaces::~Interfaces()
{
}

bool MplsLdp::DefaultVrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::DefaultVrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::DefaultVrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/default-vrf/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
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
        auto c = std::make_unique<MplsLdp::DefaultVrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::DefaultVrf::DefaultVrf()
    :
    afs(std::make_unique<MplsLdp::DefaultVrf::Afs>())
	,global(std::make_unique<MplsLdp::DefaultVrf::Global>())
	,interfaces(std::make_unique<MplsLdp::DefaultVrf::Interfaces>())
{
    afs->parent = this;
    children["afs"] = afs.get();

    global->parent = this;
    children["global"] = global.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    yang_name = "default-vrf"; yang_parent_name = "mpls-ldp";
}

MplsLdp::DefaultVrf::~DefaultVrf()
{
}

bool MplsLdp::DefaultVrf::has_data() const
{
    return (afs !=  nullptr && afs->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool MplsLdp::DefaultVrf::has_operation() const
{
    return is_set(operation)
	|| (afs !=  nullptr && afs->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string MplsLdp::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::DefaultVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "afs")
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
        else
        {
            afs = std::make_unique<MplsLdp::DefaultVrf::Afs>();
            afs->parent = this;
            children["afs"] = afs.get();
        }
        return children.at("afs");
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global.get();
        }
        else
        {
            global = std::make_unique<MplsLdp::DefaultVrf::Global>();
            global->parent = this;
            children["global"] = global.get();
        }
        return children.at("global");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<MplsLdp::DefaultVrf::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::DefaultVrf::get_children()
{
    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
    }

    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    return children;
}

void MplsLdp::DefaultVrf::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::DownstreamOnDemand()
    :
    	peer_acl_name{YType::str, "peer-acl-name"},
	 type{YType::enumeration, "type"}
{
    yang_name = "downstream-on-demand"; yang_parent_name = "session";
}

MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::~DownstreamOnDemand()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::has_data() const
{
    return peer_acl_name.is_set
	|| type.is_set;
}

bool MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_acl_name.operation)
	|| is_set(type.operation);
}

std::string MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "downstream-on-demand";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::get_entity_path(Entity* ancestor) const
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

    if (peer_acl_name.is_set || is_set(peer_acl_name.operation)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::get_children()
{
    return children;
}

void MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLdp::Vrfs::Vrf::Global::Session::Session()
    :
    downstream_on_demand(std::make_unique<MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand>())
{
    downstream_on_demand->parent = this;
    children["downstream-on-demand"] = downstream_on_demand.get();

    yang_name = "session"; yang_parent_name = "global";
}

MplsLdp::Vrfs::Vrf::Global::Session::~Session()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Session::has_data() const
{
    return (downstream_on_demand !=  nullptr && downstream_on_demand->has_data());
}

bool MplsLdp::Vrfs::Vrf::Global::Session::has_operation() const
{
    return is_set(operation)
	|| (downstream_on_demand !=  nullptr && downstream_on_demand->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Global::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Global::Session::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Global::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "downstream-on-demand")
    {
        if(downstream_on_demand != nullptr)
        {
            children["downstream-on-demand"] = downstream_on_demand.get();
        }
        else
        {
            downstream_on_demand = std::make_unique<MplsLdp::Vrfs::Vrf::Global::Session::DownstreamOnDemand>();
            downstream_on_demand->parent = this;
            children["downstream-on-demand"] = downstream_on_demand.get();
        }
        return children.at("downstream-on-demand");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Global::Session::get_children()
{
    if(children.find("downstream-on-demand") == children.end())
    {
        if(downstream_on_demand != nullptr)
        {
            children["downstream-on-demand"] = downstream_on_demand.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Global::Session::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::Password()
    :
    	command_type{YType::enumeration, "command-type"},
	 password{YType::str, "password"}
{
    yang_name = "password"; yang_parent_name = "ldp-id";
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::~Password()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::has_data() const
{
    return command_type.is_set
	|| password.is_set;
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(command_type.operation)
	|| is_set(password.operation);
}

std::string MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::get_entity_path(Entity* ancestor) const
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

    if (command_type.is_set || is_set(command_type.operation)) leaf_name_data.push_back(command_type.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::get_children()
{
    return children;
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "command-type")
    {
        command_type = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::LdpId()
    :
    	label_space_id{YType::uint32, "label-space-id"},
	 lsr_id{YType::str, "lsr-id"}
    	,
    password(std::make_unique<MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password>())
{
    password->parent = this;
    children["password"] = password.get();

    yang_name = "ldp-id"; yang_parent_name = "ldp-ids";
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::~LdpId()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::has_data() const
{
    return label_space_id.is_set
	|| lsr_id.is_set
	|| (password !=  nullptr && password->has_data());
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-id" <<"[label-space-id='" <<label_space_id.get() <<"']" <<"[lsr-id='" <<lsr_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::get_entity_path(Entity* ancestor) const
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

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "password")
    {
        if(password != nullptr)
        {
            children["password"] = password.get();
        }
        else
        {
            password = std::make_unique<MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::Password>();
            password->parent = this;
            children["password"] = password.get();
        }
        return children.at("password");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::get_children()
{
    if(children.find("password") == children.end())
    {
        if(password != nullptr)
        {
            children["password"] = password.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpIds()
{
    yang_name = "ldp-ids"; yang_parent_name = "neighbor";
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::~LdpIds()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::has_data() const
{
    for (std::size_t index=0; index<ldp_id.size(); index++)
    {
        if(ldp_id[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::has_operation() const
{
    for (std::size_t index=0; index<ldp_id.size(); index++)
    {
        if(ldp_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-ids";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ldp-id")
    {
        for(auto const & c : ldp_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::LdpId>();
        c->parent = this;
        ldp_id.push_back(std::move(c));
        children[segment_path] = ldp_id.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::get_children()
{
    for (auto const & c : ldp_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::Neighbor()
    :
    	password{YType::str, "password"}
    	,
    ldp_ids(std::make_unique<MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds>())
{
    ldp_ids->parent = this;
    children["ldp-ids"] = ldp_ids.get();

    yang_name = "neighbor"; yang_parent_name = "global";
}

MplsLdp::Vrfs::Vrf::Global::Neighbor::~Neighbor()
{
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::has_data() const
{
    return password.is_set
	|| (ldp_ids !=  nullptr && ldp_ids->has_data());
}

bool MplsLdp::Vrfs::Vrf::Global::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(password.operation)
	|| (ldp_ids !=  nullptr && ldp_ids->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Global::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Global::Neighbor::get_entity_path(Entity* ancestor) const
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

    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Global::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ldp-ids")
    {
        if(ldp_ids != nullptr)
        {
            children["ldp-ids"] = ldp_ids.get();
        }
        else
        {
            ldp_ids = std::make_unique<MplsLdp::Vrfs::Vrf::Global::Neighbor::LdpIds>();
            ldp_ids->parent = this;
            children["ldp-ids"] = ldp_ids.get();
        }
        return children.at("ldp-ids");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Global::Neighbor::get_children()
{
    if(children.find("ldp-ids") == children.end())
    {
        if(ldp_ids != nullptr)
        {
            children["ldp-ids"] = ldp_ids.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Global::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "password")
    {
        password = value;
    }
}

MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::HelperPeer()
    :
    	maintain_on_local_reset{YType::str, "maintain-on-local-reset"}
{
    yang_name = "helper-peer"; yang_parent_name = "graceful-restart";
}

MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::~HelperPeer()
{
}

bool MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::has_data() const
{
    return maintain_on_local_reset.is_set;
}

bool MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::has_operation() const
{
    return is_set(operation)
	|| is_set(maintain_on_local_reset.operation);
}

std::string MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-peer";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::get_entity_path(Entity* ancestor) const
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

    if (maintain_on_local_reset.is_set || is_set(maintain_on_local_reset.operation)) leaf_name_data.push_back(maintain_on_local_reset.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::get_children()
{
    return children;
}

void MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maintain-on-local-reset")
    {
        maintain_on_local_reset = value;
    }
}

MplsLdp::Vrfs::Vrf::Global::GracefulRestart::GracefulRestart()
    :
    helper_peer(std::make_unique<MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer>())
{
    helper_peer->parent = this;
    children["helper-peer"] = helper_peer.get();

    yang_name = "graceful-restart"; yang_parent_name = "global";
}

MplsLdp::Vrfs::Vrf::Global::GracefulRestart::~GracefulRestart()
{
}

bool MplsLdp::Vrfs::Vrf::Global::GracefulRestart::has_data() const
{
    return (helper_peer !=  nullptr && helper_peer->has_data());
}

bool MplsLdp::Vrfs::Vrf::Global::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| (helper_peer !=  nullptr && helper_peer->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Global::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Global::GracefulRestart::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "helper-peer")
    {
        if(helper_peer != nullptr)
        {
            children["helper-peer"] = helper_peer.get();
        }
        else
        {
            helper_peer = std::make_unique<MplsLdp::Vrfs::Vrf::Global::GracefulRestart::HelperPeer>();
            helper_peer->parent = this;
            children["helper-peer"] = helper_peer.get();
        }
        return children.at("helper-peer");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Global::GracefulRestart::get_children()
{
    if(children.find("helper-peer") == children.end())
    {
        if(helper_peer != nullptr)
        {
            children["helper-peer"] = helper_peer.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Global::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Vrfs::Vrf::Global::Global()
    :
    	router_id{YType::str, "router-id"}
    	,
    graceful_restart(std::make_unique<MplsLdp::Vrfs::Vrf::Global::GracefulRestart>())
	,neighbor(std::make_unique<MplsLdp::Vrfs::Vrf::Global::Neighbor>())
	,session(std::make_unique<MplsLdp::Vrfs::Vrf::Global::Session>())
{
    graceful_restart->parent = this;
    children["graceful-restart"] = graceful_restart.get();

    neighbor->parent = this;
    children["neighbor"] = neighbor.get();

    session->parent = this;
    children["session"] = session.get();

    yang_name = "global"; yang_parent_name = "vrf";
}

MplsLdp::Vrfs::Vrf::Global::~Global()
{
}

bool MplsLdp::Vrfs::Vrf::Global::has_data() const
{
    return router_id.is_set
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool MplsLdp::Vrfs::Vrf::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(router_id.operation)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Global::get_entity_path(Entity* ancestor) const
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

    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart.get();
        }
        else
        {
            graceful_restart = std::make_unique<MplsLdp::Vrfs::Vrf::Global::GracefulRestart>();
            graceful_restart->parent = this;
            children["graceful-restart"] = graceful_restart.get();
        }
        return children.at("graceful-restart");
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor.get();
        }
        else
        {
            neighbor = std::make_unique<MplsLdp::Vrfs::Vrf::Global::Neighbor>();
            neighbor->parent = this;
            children["neighbor"] = neighbor.get();
        }
        return children.at("neighbor");
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
        else
        {
            session = std::make_unique<MplsLdp::Vrfs::Vrf::Global::Session>();
            session->parent = this;
            children["session"] = session.get();
        }
        return children.at("session");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Global::get_children()
{
    if(children.find("graceful-restart") == children.end())
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart.get();
        }
    }

    if(children.find("neighbor") == children.end())
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor.get();
        }
    }

    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::Discovery()
    :
    	transport_address{YType::str, "transport-address"}
{
    yang_name = "discovery"; yang_parent_name = "af";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::~Discovery()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::has_data() const
{
    return transport_address.is_set;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::has_operation() const
{
    return is_set(operation)
	|| is_set(transport_address.operation);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::get_entity_path(Entity* ancestor) const
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

    if (transport_address.is_set || is_set(transport_address.operation)) leaf_name_data.push_back(transport_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::get_children()
{
    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Discovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transport-address")
    {
        transport_address = value;
    }
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::PeerAcceptPolicyData()
    :
    	prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "peer-accept-policy-data"; yang_parent_name = "peer-accept-policy";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::~PeerAcceptPolicyData()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::has_data() const
{
    return prefix_acl_name.is_set;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_acl_name.operation);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-accept-policy-data";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::get_entity_path(Entity* ancestor) const
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

    if (prefix_acl_name.is_set || is_set(prefix_acl_name.operation)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::get_children()
{
    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
    }
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::LsrId()
    :
    	lsr_id{YType::str, "lsr-id"},
	 prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "lsr-id"; yang_parent_name = "peer-accept-policy";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::~LsrId()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::has_data() const
{
    return lsr_id.is_set
	|| prefix_acl_name.is_set;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::has_operation() const
{
    return is_set(operation)
	|| is_set(lsr_id.operation)
	|| is_set(prefix_acl_name.operation);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsr-id" <<"[lsr-id='" <<lsr_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::get_entity_path(Entity* ancestor) const
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

    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.operation)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::get_children()
{
    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
    }
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicy()
    :
    	label_space_id{YType::uint32, "label-space-id"}
    	,
    peer_accept_policy_data(std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData>())
{
    peer_accept_policy_data->parent = this;
    children["peer-accept-policy-data"] = peer_accept_policy_data.get();

    yang_name = "peer-accept-policy"; yang_parent_name = "peer-accept-policies";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::~PeerAcceptPolicy()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::has_data() const
{
    for (std::size_t index=0; index<lsr_id.size(); index++)
    {
        if(lsr_id[index]->has_data())
            return true;
    }
    return label_space_id.is_set
	|| (peer_accept_policy_data !=  nullptr && peer_accept_policy_data->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::has_operation() const
{
    for (std::size_t index=0; index<lsr_id.size(); index++)
    {
        if(lsr_id[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| (peer_accept_policy_data !=  nullptr && peer_accept_policy_data->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-accept-policy" <<"[label-space-id='" <<label_space_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_entity_path(Entity* ancestor) const
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

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsr-id")
    {
        for(auto const & c : lsr_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::LsrId>();
        c->parent = this;
        lsr_id.push_back(std::move(c));
        children[segment_path] = lsr_id.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-accept-policy-data")
    {
        if(peer_accept_policy_data != nullptr)
        {
            children["peer-accept-policy-data"] = peer_accept_policy_data.get();
        }
        else
        {
            peer_accept_policy_data = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::PeerAcceptPolicyData>();
            peer_accept_policy_data->parent = this;
            children["peer-accept-policy-data"] = peer_accept_policy_data.get();
        }
        return children.at("peer-accept-policy-data");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::get_children()
{
    for (auto const & c : lsr_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("peer-accept-policy-data") == children.end())
    {
        if(peer_accept_policy_data != nullptr)
        {
            children["peer-accept-policy-data"] = peer_accept_policy_data.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicies()
{
    yang_name = "peer-accept-policies"; yang_parent_name = "accept";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::~PeerAcceptPolicies()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::has_data() const
{
    for (std::size_t index=0; index<peer_accept_policy.size(); index++)
    {
        if(peer_accept_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::has_operation() const
{
    for (std::size_t index=0; index<peer_accept_policy.size(); index++)
    {
        if(peer_accept_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-accept-policies";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-accept-policy")
    {
        for(auto const & c : peer_accept_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::PeerAcceptPolicy>();
        c->parent = this;
        peer_accept_policy.push_back(std::move(c));
        children[segment_path] = peer_accept_policy.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::get_children()
{
    for (auto const & c : peer_accept_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::Accept()
    :
    peer_accept_policies(std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies>())
{
    peer_accept_policies->parent = this;
    children["peer-accept-policies"] = peer_accept_policies.get();

    yang_name = "accept"; yang_parent_name = "remote";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::~Accept()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::has_data() const
{
    return (peer_accept_policies !=  nullptr && peer_accept_policies->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::has_operation() const
{
    return is_set(operation)
	|| (peer_accept_policies !=  nullptr && peer_accept_policies->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-accept-policies")
    {
        if(peer_accept_policies != nullptr)
        {
            children["peer-accept-policies"] = peer_accept_policies.get();
        }
        else
        {
            peer_accept_policies = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::PeerAcceptPolicies>();
            peer_accept_policies->parent = this;
            children["peer-accept-policies"] = peer_accept_policies.get();
        }
        return children.at("peer-accept-policies");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::get_children()
{
    if(children.find("peer-accept-policies") == children.end())
    {
        if(peer_accept_policies != nullptr)
        {
            children["peer-accept-policies"] = peer_accept_policies.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Remote()
    :
    accept(std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept>())
{
    accept->parent = this;
    children["accept"] = accept.get();

    yang_name = "remote"; yang_parent_name = "label";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::~Remote()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::has_data() const
{
    return (accept !=  nullptr && accept->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::has_operation() const
{
    return is_set(operation)
	|| (accept !=  nullptr && accept->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accept")
    {
        if(accept != nullptr)
        {
            children["accept"] = accept.get();
        }
        else
        {
            accept = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::Accept>();
            accept->parent = this;
            children["accept"] = accept.get();
        }
        return children.at("accept");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::get_children()
{
    if(children.find("accept") == children.end())
    {
        if(accept != nullptr)
        {
            children["accept"] = accept.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::PeerAdvertisePolicyData()
    :
    	prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "peer-advertise-policy-data"; yang_parent_name = "peer-advertise-policy";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::~PeerAdvertisePolicyData()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::has_data() const
{
    return prefix_acl_name.is_set;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_acl_name.operation);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-advertise-policy-data";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::get_entity_path(Entity* ancestor) const
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

    if (prefix_acl_name.is_set || is_set(prefix_acl_name.operation)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::get_children()
{
    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
    }
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::LsrId()
    :
    	lsr_id{YType::str, "lsr-id"},
	 prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "lsr-id"; yang_parent_name = "peer-advertise-policy";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::~LsrId()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::has_data() const
{
    return lsr_id.is_set
	|| prefix_acl_name.is_set;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::has_operation() const
{
    return is_set(operation)
	|| is_set(lsr_id.operation)
	|| is_set(prefix_acl_name.operation);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsr-id" <<"[lsr-id='" <<lsr_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::get_entity_path(Entity* ancestor) const
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

    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.operation)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::get_children()
{
    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
    }
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicy()
    :
    	label_space_id{YType::uint32, "label-space-id"}
    	,
    peer_advertise_policy_data(std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData>())
{
    peer_advertise_policy_data->parent = this;
    children["peer-advertise-policy-data"] = peer_advertise_policy_data.get();

    yang_name = "peer-advertise-policy"; yang_parent_name = "peer-advertise-policies";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::~PeerAdvertisePolicy()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::has_data() const
{
    for (std::size_t index=0; index<lsr_id.size(); index++)
    {
        if(lsr_id[index]->has_data())
            return true;
    }
    return label_space_id.is_set
	|| (peer_advertise_policy_data !=  nullptr && peer_advertise_policy_data->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::has_operation() const
{
    for (std::size_t index=0; index<lsr_id.size(); index++)
    {
        if(lsr_id[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| (peer_advertise_policy_data !=  nullptr && peer_advertise_policy_data->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-advertise-policy" <<"[label-space-id='" <<label_space_id.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_entity_path(Entity* ancestor) const
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

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsr-id")
    {
        for(auto const & c : lsr_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::LsrId>();
        c->parent = this;
        lsr_id.push_back(std::move(c));
        children[segment_path] = lsr_id.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-advertise-policy-data")
    {
        if(peer_advertise_policy_data != nullptr)
        {
            children["peer-advertise-policy-data"] = peer_advertise_policy_data.get();
        }
        else
        {
            peer_advertise_policy_data = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::PeerAdvertisePolicyData>();
            peer_advertise_policy_data->parent = this;
            children["peer-advertise-policy-data"] = peer_advertise_policy_data.get();
        }
        return children.at("peer-advertise-policy-data");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::get_children()
{
    for (auto const & c : lsr_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("peer-advertise-policy-data") == children.end())
    {
        if(peer_advertise_policy_data != nullptr)
        {
            children["peer-advertise-policy-data"] = peer_advertise_policy_data.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicies()
{
    yang_name = "peer-advertise-policies"; yang_parent_name = "advertise";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::~PeerAdvertisePolicies()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::has_data() const
{
    for (std::size_t index=0; index<peer_advertise_policy.size(); index++)
    {
        if(peer_advertise_policy[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::has_operation() const
{
    for (std::size_t index=0; index<peer_advertise_policy.size(); index++)
    {
        if(peer_advertise_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-advertise-policies";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-advertise-policy")
    {
        for(auto const & c : peer_advertise_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::PeerAdvertisePolicy>();
        c->parent = this;
        peer_advertise_policy.push_back(std::move(c));
        children[segment_path] = peer_advertise_policy.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::get_children()
{
    for (auto const & c : peer_advertise_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::has_data() const
{
    return interface_name.is_set;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::get_children()
{
    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "advertise";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::~Interfaces()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
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
        auto c = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::ExplicitNull()
    :
    	explicit_null_type{YType::enumeration, "explicit-null-type"},
	 peer_acl_name{YType::str, "peer-acl-name"},
	 prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "explicit-null"; yang_parent_name = "advertise";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::~ExplicitNull()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::has_data() const
{
    return explicit_null_type.is_set
	|| peer_acl_name.is_set
	|| prefix_acl_name.is_set;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::has_operation() const
{
    return is_set(operation)
	|| is_set(explicit_null_type.operation)
	|| is_set(peer_acl_name.operation)
	|| is_set(prefix_acl_name.operation);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-null";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_entity_path(Entity* ancestor) const
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

    if (explicit_null_type.is_set || is_set(explicit_null_type.operation)) leaf_name_data.push_back(explicit_null_type.get_name_leafdata());
    if (peer_acl_name.is_set || is_set(peer_acl_name.operation)) leaf_name_data.push_back(peer_acl_name.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.operation)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::get_children()
{
    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "explicit-null-type")
    {
        explicit_null_type = value;
    }
    if(value_path == "peer-acl-name")
    {
        peer_acl_name = value;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
    }
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Advertise()
    :
    	disable{YType::empty, "disable"}
    	,
    explicit_null(std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull>())
	,interfaces(std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces>())
	,peer_advertise_policies(std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies>())
{
    explicit_null->parent = this;
    children["explicit-null"] = explicit_null.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    peer_advertise_policies->parent = this;
    children["peer-advertise-policies"] = peer_advertise_policies.get();

    yang_name = "advertise"; yang_parent_name = "local";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::~Advertise()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::has_data() const
{
    return disable.is_set
	|| (explicit_null !=  nullptr && explicit_null->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (peer_advertise_policies !=  nullptr && peer_advertise_policies->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| (explicit_null !=  nullptr && explicit_null->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (peer_advertise_policies !=  nullptr && peer_advertise_policies->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::get_entity_path(Entity* ancestor) const
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

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "explicit-null")
    {
        if(explicit_null != nullptr)
        {
            children["explicit-null"] = explicit_null.get();
        }
        else
        {
            explicit_null = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::ExplicitNull>();
            explicit_null->parent = this;
            children["explicit-null"] = explicit_null.get();
        }
        return children.at("explicit-null");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "peer-advertise-policies")
    {
        if(peer_advertise_policies != nullptr)
        {
            children["peer-advertise-policies"] = peer_advertise_policies.get();
        }
        else
        {
            peer_advertise_policies = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::PeerAdvertisePolicies>();
            peer_advertise_policies->parent = this;
            children["peer-advertise-policies"] = peer_advertise_policies.get();
        }
        return children.at("peer-advertise-policies");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::get_children()
{
    if(children.find("explicit-null") == children.end())
    {
        if(explicit_null != nullptr)
        {
            children["explicit-null"] = explicit_null.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("peer-advertise-policies") == children.end())
    {
        if(peer_advertise_policies != nullptr)
        {
            children["peer-advertise-policies"] = peer_advertise_policies.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::Allocate()
    :
    	allocation_type{YType::enumeration, "allocation-type"},
	 prefix_acl_name{YType::str, "prefix-acl-name"}
{
    yang_name = "allocate"; yang_parent_name = "local";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::~Allocate()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::has_data() const
{
    return allocation_type.is_set
	|| prefix_acl_name.is_set;
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::has_operation() const
{
    return is_set(operation)
	|| is_set(allocation_type.operation)
	|| is_set(prefix_acl_name.operation);
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::get_entity_path(Entity* ancestor) const
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

    if (allocation_type.is_set || is_set(allocation_type.operation)) leaf_name_data.push_back(allocation_type.get_name_leafdata());
    if (prefix_acl_name.is_set || is_set(prefix_acl_name.operation)) leaf_name_data.push_back(prefix_acl_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::get_children()
{
    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allocation-type")
    {
        allocation_type = value;
    }
    if(value_path == "prefix-acl-name")
    {
        prefix_acl_name = value;
    }
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Local()
    :
    	default_route{YType::empty, "default-route"},
	 implicit_null_override{YType::str, "implicit-null-override"}
    	,
    advertise(std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise>())
	,allocate(std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate>())
{
    advertise->parent = this;
    children["advertise"] = advertise.get();

    allocate->parent = this;
    children["allocate"] = allocate.get();

    yang_name = "local"; yang_parent_name = "label";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::~Local()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::has_data() const
{
    return default_route.is_set
	|| implicit_null_override.is_set
	|| (advertise !=  nullptr && advertise->has_data())
	|| (allocate !=  nullptr && allocate->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(default_route.operation)
	|| is_set(implicit_null_override.operation)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (allocate !=  nullptr && allocate->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::get_entity_path(Entity* ancestor) const
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

    if (default_route.is_set || is_set(default_route.operation)) leaf_name_data.push_back(default_route.get_name_leafdata());
    if (implicit_null_override.is_set || is_set(implicit_null_override.operation)) leaf_name_data.push_back(implicit_null_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertise")
    {
        if(advertise != nullptr)
        {
            children["advertise"] = advertise.get();
        }
        else
        {
            advertise = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Advertise>();
            advertise->parent = this;
            children["advertise"] = advertise.get();
        }
        return children.at("advertise");
    }

    if(child_yang_name == "allocate")
    {
        if(allocate != nullptr)
        {
            children["allocate"] = allocate.get();
        }
        else
        {
            allocate = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::Allocate>();
            allocate->parent = this;
            children["allocate"] = allocate.get();
        }
        return children.at("allocate");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::get_children()
{
    if(children.find("advertise") == children.end())
    {
        if(advertise != nullptr)
        {
            children["advertise"] = advertise.get();
        }
    }

    if(children.find("allocate") == children.end())
    {
        if(allocate != nullptr)
        {
            children["allocate"] = allocate.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-route")
    {
        default_route = value;
    }
    if(value_path == "implicit-null-override")
    {
        implicit_null_override = value;
    }
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::Label()
    :
    local(std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local>())
	,remote(std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote>())
{
    local->parent = this;
    children["local"] = local.get();

    remote->parent = this;
    children["remote"] = remote.get();

    yang_name = "label"; yang_parent_name = "af";
}

MplsLdp::Vrfs::Vrf::Afs::Af::Label::~Label()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::has_data() const
{
    return (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::Label::has_operation() const
{
    return is_set(operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::Label::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local.get();
        }
        else
        {
            local = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Local>();
            local->parent = this;
            children["local"] = local.get();
        }
        return children.at("local");
    }

    if(child_yang_name == "remote")
    {
        if(remote != nullptr)
        {
            children["remote"] = remote.get();
        }
        else
        {
            remote = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label::Remote>();
            remote->parent = this;
            children["remote"] = remote.get();
        }
        return children.at("remote");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::Label::get_children()
{
    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local.get();
        }
    }

    if(children.find("remote") == children.end())
    {
        if(remote != nullptr)
        {
            children["remote"] = remote.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::Label::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Vrfs::Vrf::Afs::Af::Af()
    :
    	af_name{YType::enumeration, "af-name"},
	 enable{YType::empty, "enable"}
    	,
    discovery(std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Discovery>())
	,label(std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label>())
{
    discovery->parent = this;
    children["discovery"] = discovery.get();

    label->parent = this;
    children["label"] = label.get();

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| enable.is_set
	|| (discovery !=  nullptr && discovery->has_data())
	|| (label !=  nullptr && label->has_data());
}

bool MplsLdp::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(enable.operation)
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (label !=  nullptr && label->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::Af::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovery")
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery.get();
        }
        else
        {
            discovery = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Discovery>();
            discovery->parent = this;
            children["discovery"] = discovery.get();
        }
        return children.at("discovery");
    }

    if(child_yang_name == "label")
    {
        if(label != nullptr)
        {
            children["label"] = label.get();
        }
        else
        {
            label = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af::Label>();
            label->parent = this;
            children["label"] = label.get();
        }
        return children.at("label");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::Af::get_children()
{
    if(children.find("discovery") == children.end())
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery.get();
        }
    }

    if(children.find("label") == children.end())
    {
        if(label != nullptr)
        {
            children["label"] = label.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsLdp::Vrfs::Vrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "vrf";
}

MplsLdp::Vrfs::Vrf::Afs::~Afs()
{
}

bool MplsLdp::Vrfs::Vrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Afs::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<MplsLdp::Vrfs::Vrf::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Afs::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Afs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::TransportAddress()
    :
    	address{YType::str, "address"},
	 address_type{YType::enumeration, "address-type"}
{
    yang_name = "transport-address"; yang_parent_name = "discovery";
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::~TransportAddress()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::has_data() const
{
    return address.is_set
	|| address_type.is_set;
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_type.operation);
}

std::string MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_type.is_set || is_set(address_type.operation)) leaf_name_data.push_back(address_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::get_children()
{
    return children;
}

void MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-type")
    {
        address_type = value;
    }
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::Discovery()
    :
    transport_address(std::make_unique<MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress>())
{
    transport_address->parent = this;
    children["transport-address"] = transport_address.get();

    yang_name = "discovery"; yang_parent_name = "af";
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::~Discovery()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::has_data() const
{
    return (transport_address !=  nullptr && transport_address->has_data());
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::has_operation() const
{
    return is_set(operation)
	|| (transport_address !=  nullptr && transport_address->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "transport-address")
    {
        if(transport_address != nullptr)
        {
            children["transport-address"] = transport_address.get();
        }
        else
        {
            transport_address = std::make_unique<MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::TransportAddress>();
            transport_address->parent = this;
            children["transport-address"] = transport_address.get();
        }
        return children.at("transport-address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::get_children()
{
    if(children.find("transport-address") == children.end())
    {
        if(transport_address != nullptr)
        {
            children["transport-address"] = transport_address.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Af()
    :
    	af_name{YType::enumeration, "af-name"},
	 enable{YType::empty, "enable"}
    	,
    discovery(std::make_unique<MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery>())
{
    discovery->parent = this;
    children["discovery"] = discovery.get();

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::~Af()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::has_data() const
{
    return af_name.is_set
	|| enable.is_set
	|| (discovery !=  nullptr && discovery->has_data());
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(enable.operation)
	|| (discovery !=  nullptr && discovery->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovery")
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery.get();
        }
        else
        {
            discovery = std::make_unique<MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::Discovery>();
            discovery->parent = this;
            children["discovery"] = discovery.get();
        }
        return children.at("discovery");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::get_children()
{
    if(children.find("discovery") == children.end())
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "interface";
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::~Afs()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 enable{YType::empty, "enable"}
    	,
    afs(std::make_unique<MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs>())
{
    afs->parent = this;
    children["afs"] = afs.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsLdp::Vrfs::Vrf::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| enable.is_set
	|| (afs !=  nullptr && afs->has_data());
}

bool MplsLdp::Vrfs::Vrf::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(enable.operation)
	|| (afs !=  nullptr && afs->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Interfaces::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "afs")
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
        else
        {
            afs = std::make_unique<MplsLdp::Vrfs::Vrf::Interfaces::Interface::Afs>();
            afs->parent = this;
            children["afs"] = afs.get();
        }
        return children.at("afs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Interfaces::Interface::get_children()
{
    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsLdp::Vrfs::Vrf::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "vrf";
}

MplsLdp::Vrfs::Vrf::Interfaces::~Interfaces()
{
}

bool MplsLdp::Vrfs::Vrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::Vrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Vrfs::Vrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::Interfaces::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
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
        auto c = std::make_unique<MplsLdp::Vrfs::Vrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"},
	 enable{YType::empty, "enable"}
    	,
    afs(std::make_unique<MplsLdp::Vrfs::Vrf::Afs>())
	,global(std::make_unique<MplsLdp::Vrfs::Vrf::Global>())
	,interfaces(std::make_unique<MplsLdp::Vrfs::Vrf::Interfaces>())
{
    afs->parent = this;
    children["afs"] = afs.get();

    global->parent = this;
    children["global"] = global.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

MplsLdp::Vrfs::Vrf::~Vrf()
{
}

bool MplsLdp::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| enable.is_set
	|| (afs !=  nullptr && afs->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool MplsLdp::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(enable.operation)
	|| (afs !=  nullptr && afs->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string MplsLdp::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/vrfs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "afs")
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
        else
        {
            afs = std::make_unique<MplsLdp::Vrfs::Vrf::Afs>();
            afs->parent = this;
            children["afs"] = afs.get();
        }
        return children.at("afs");
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global.get();
        }
        else
        {
            global = std::make_unique<MplsLdp::Vrfs::Vrf::Global>();
            global->parent = this;
            children["global"] = global.get();
        }
        return children.at("global");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<MplsLdp::Vrfs::Vrf::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::Vrf::get_children()
{
    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
    }

    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    return children;
}

void MplsLdp::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsLdp::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "mpls-ldp";
}

MplsLdp::Vrfs::~Vrfs()
{
}

bool MplsLdp::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath MplsLdp::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<MplsLdp::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Vrfs::get_children()
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

void MplsLdp::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::EntropyLabel::EntropyLabel()
    :
    	enable{YType::empty, "enable"}
{
    yang_name = "entropy-label"; yang_parent_name = "global";
}

MplsLdp::Global::EntropyLabel::~EntropyLabel()
{
}

bool MplsLdp::Global::EntropyLabel::has_data() const
{
    return enable.is_set;
}

bool MplsLdp::Global::EntropyLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string MplsLdp::Global::EntropyLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entropy-label";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::EntropyLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::EntropyLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::EntropyLabel::get_children()
{
    return children;
}

void MplsLdp::Global::EntropyLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsLdp::Global::Session::BackoffTime::BackoffTime()
    :
    	initial_backoff_time{YType::uint32, "initial-backoff-time"},
	 max_backoff_time{YType::uint32, "max-backoff-time"}
{
    yang_name = "backoff-time"; yang_parent_name = "session";
}

MplsLdp::Global::Session::BackoffTime::~BackoffTime()
{
}

bool MplsLdp::Global::Session::BackoffTime::has_data() const
{
    return initial_backoff_time.is_set
	|| max_backoff_time.is_set;
}

bool MplsLdp::Global::Session::BackoffTime::has_operation() const
{
    return is_set(operation)
	|| is_set(initial_backoff_time.operation)
	|| is_set(max_backoff_time.operation);
}

std::string MplsLdp::Global::Session::BackoffTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff-time";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Session::BackoffTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/session/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_backoff_time.is_set || is_set(initial_backoff_time.operation)) leaf_name_data.push_back(initial_backoff_time.get_name_leafdata());
    if (max_backoff_time.is_set || is_set(max_backoff_time.operation)) leaf_name_data.push_back(max_backoff_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Session::BackoffTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::Session::BackoffTime::get_children()
{
    return children;
}

void MplsLdp::Global::Session::BackoffTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial-backoff-time")
    {
        initial_backoff_time = value;
    }
    if(value_path == "max-backoff-time")
    {
        max_backoff_time = value;
    }
}

MplsLdp::Global::Session::Session()
    :
    	hold_time{YType::uint32, "hold-time"}
    	,
    backoff_time(std::make_unique<MplsLdp::Global::Session::BackoffTime>())
{
    backoff_time->parent = this;
    children["backoff-time"] = backoff_time.get();

    yang_name = "session"; yang_parent_name = "global";
}

MplsLdp::Global::Session::~Session()
{
}

bool MplsLdp::Global::Session::has_data() const
{
    return hold_time.is_set
	|| (backoff_time !=  nullptr && backoff_time->has_data());
}

bool MplsLdp::Global::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| (backoff_time !=  nullptr && backoff_time->has_operation());
}

std::string MplsLdp::Global::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backoff-time")
    {
        if(backoff_time != nullptr)
        {
            children["backoff-time"] = backoff_time.get();
        }
        else
        {
            backoff_time = std::make_unique<MplsLdp::Global::Session::BackoffTime>();
            backoff_time->parent = this;
            children["backoff-time"] = backoff_time.get();
        }
        return children.at("backoff-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Global::Session::get_children()
{
    if(children.find("backoff-time") == children.end())
    {
        if(backoff_time != nullptr)
        {
            children["backoff-time"] = backoff_time.get();
        }
    }

    return children;
}

void MplsLdp::Global::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
}

MplsLdp::Global::Igp::Sync::Delay::Delay()
    :
    	on_proc_restart{YType::uint32, "on-proc-restart"},
	 on_session_up{YType::uint32, "on-session-up"}
{
    yang_name = "delay"; yang_parent_name = "sync";
}

MplsLdp::Global::Igp::Sync::Delay::~Delay()
{
}

bool MplsLdp::Global::Igp::Sync::Delay::has_data() const
{
    return on_proc_restart.is_set
	|| on_session_up.is_set;
}

bool MplsLdp::Global::Igp::Sync::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(on_proc_restart.operation)
	|| is_set(on_session_up.operation);
}

std::string MplsLdp::Global::Igp::Sync::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Igp::Sync::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/igp/sync/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (on_proc_restart.is_set || is_set(on_proc_restart.operation)) leaf_name_data.push_back(on_proc_restart.get_name_leafdata());
    if (on_session_up.is_set || is_set(on_session_up.operation)) leaf_name_data.push_back(on_session_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Igp::Sync::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::Igp::Sync::Delay::get_children()
{
    return children;
}

void MplsLdp::Global::Igp::Sync::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "on-proc-restart")
    {
        on_proc_restart = value;
    }
    if(value_path == "on-session-up")
    {
        on_session_up = value;
    }
}

MplsLdp::Global::Igp::Sync::Sync()
    :
    delay(std::make_unique<MplsLdp::Global::Igp::Sync::Delay>())
{
    delay->parent = this;
    children["delay"] = delay.get();

    yang_name = "sync"; yang_parent_name = "igp";
}

MplsLdp::Global::Igp::Sync::~Sync()
{
}

bool MplsLdp::Global::Igp::Sync::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool MplsLdp::Global::Igp::Sync::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string MplsLdp::Global::Igp::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Igp::Sync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/igp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Igp::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "delay")
    {
        if(delay != nullptr)
        {
            children["delay"] = delay.get();
        }
        else
        {
            delay = std::make_unique<MplsLdp::Global::Igp::Sync::Delay>();
            delay->parent = this;
            children["delay"] = delay.get();
        }
        return children.at("delay");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Global::Igp::Sync::get_children()
{
    if(children.find("delay") == children.end())
    {
        if(delay != nullptr)
        {
            children["delay"] = delay.get();
        }
    }

    return children;
}

void MplsLdp::Global::Igp::Sync::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Igp::Igp()
    :
    sync(std::make_unique<MplsLdp::Global::Igp::Sync>())
{
    sync->parent = this;
    children["sync"] = sync.get();

    yang_name = "igp"; yang_parent_name = "global";
}

MplsLdp::Global::Igp::~Igp()
{
}

bool MplsLdp::Global::Igp::has_data() const
{
    return (sync !=  nullptr && sync->has_data());
}

bool MplsLdp::Global::Igp::has_operation() const
{
    return is_set(operation)
	|| (sync !=  nullptr && sync->has_operation());
}

std::string MplsLdp::Global::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Igp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sync")
    {
        if(sync != nullptr)
        {
            children["sync"] = sync.get();
        }
        else
        {
            sync = std::make_unique<MplsLdp::Global::Igp::Sync>();
            sync->parent = this;
            children["sync"] = sync.get();
        }
        return children.at("sync");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Global::Igp::get_children()
{
    if(children.find("sync") == children.end())
    {
        if(sync != nullptr)
        {
            children["sync"] = sync.get();
        }
    }

    return children;
}

void MplsLdp::Global::Igp::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::EnableLogging::EnableLogging()
    :
    	adjacency{YType::empty, "adjacency"},
	 gr_session_changes{YType::empty, "gr-session-changes"},
	 neighbor_changes{YType::empty, "neighbor-changes"},
	 nsr{YType::empty, "nsr"},
	 session_protection{YType::empty, "session-protection"}
{
    yang_name = "enable-logging"; yang_parent_name = "global";
}

MplsLdp::Global::EnableLogging::~EnableLogging()
{
}

bool MplsLdp::Global::EnableLogging::has_data() const
{
    return adjacency.is_set
	|| gr_session_changes.is_set
	|| neighbor_changes.is_set
	|| nsr.is_set
	|| session_protection.is_set;
}

bool MplsLdp::Global::EnableLogging::has_operation() const
{
    return is_set(operation)
	|| is_set(adjacency.operation)
	|| is_set(gr_session_changes.operation)
	|| is_set(neighbor_changes.operation)
	|| is_set(nsr.operation)
	|| is_set(session_protection.operation);
}

std::string MplsLdp::Global::EnableLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable-logging";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::EnableLogging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency.is_set || is_set(adjacency.operation)) leaf_name_data.push_back(adjacency.get_name_leafdata());
    if (gr_session_changes.is_set || is_set(gr_session_changes.operation)) leaf_name_data.push_back(gr_session_changes.get_name_leafdata());
    if (neighbor_changes.is_set || is_set(neighbor_changes.operation)) leaf_name_data.push_back(neighbor_changes.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.operation)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (session_protection.is_set || is_set(session_protection.operation)) leaf_name_data.push_back(session_protection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::EnableLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::EnableLogging::get_children()
{
    return children;
}

void MplsLdp::Global::EnableLogging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency")
    {
        adjacency = value;
    }
    if(value_path == "gr-session-changes")
    {
        gr_session_changes = value;
    }
    if(value_path == "neighbor-changes")
    {
        neighbor_changes = value;
    }
    if(value_path == "nsr")
    {
        nsr = value;
    }
    if(value_path == "session-protection")
    {
        session_protection = value;
    }
}

MplsLdp::Global::Signalling::Signalling()
    :
    	dscp{YType::uint32, "dscp"}
{
    yang_name = "signalling"; yang_parent_name = "global";
}

MplsLdp::Global::Signalling::~Signalling()
{
}

bool MplsLdp::Global::Signalling::has_data() const
{
    return dscp.is_set;
}

bool MplsLdp::Global::Signalling::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation);
}

std::string MplsLdp::Global::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Signalling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::Signalling::get_children()
{
    return children;
}

void MplsLdp::Global::Signalling::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
}

MplsLdp::Global::Nsr::Nsr()
    :
    	enable{YType::empty, "enable"}
{
    yang_name = "nsr"; yang_parent_name = "global";
}

MplsLdp::Global::Nsr::~Nsr()
{
}

bool MplsLdp::Global::Nsr::has_data() const
{
    return enable.is_set;
}

bool MplsLdp::Global::Nsr::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string MplsLdp::Global::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Nsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::Nsr::get_children()
{
    return children;
}

void MplsLdp::Global::Nsr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsLdp::Global::GracefulRestart::GracefulRestart()
    :
    	enable{YType::empty, "enable"},
	 forwarding_hold_time{YType::uint32, "forwarding-hold-time"},
	 reconnect_timeout{YType::uint32, "reconnect-timeout"}
{
    yang_name = "graceful-restart"; yang_parent_name = "global";
}

MplsLdp::Global::GracefulRestart::~GracefulRestart()
{
}

bool MplsLdp::Global::GracefulRestart::has_data() const
{
    return enable.is_set
	|| forwarding_hold_time.is_set
	|| reconnect_timeout.is_set;
}

bool MplsLdp::Global::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(forwarding_hold_time.operation)
	|| is_set(reconnect_timeout.operation);
}

std::string MplsLdp::Global::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (forwarding_hold_time.is_set || is_set(forwarding_hold_time.operation)) leaf_name_data.push_back(forwarding_hold_time.get_name_leafdata());
    if (reconnect_timeout.is_set || is_set(reconnect_timeout.operation)) leaf_name_data.push_back(reconnect_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::GracefulRestart::get_children()
{
    return children;
}

void MplsLdp::Global::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "forwarding-hold-time")
    {
        forwarding_hold_time = value;
    }
    if(value_path == "reconnect-timeout")
    {
        reconnect_timeout = value;
    }
}

MplsLdp::Global::Discovery::LinkHello::LinkHello()
    :
    	hold_time{YType::uint32, "hold-time"},
	 interval{YType::uint32, "interval"}
{
    yang_name = "link-hello"; yang_parent_name = "discovery";
}

MplsLdp::Global::Discovery::LinkHello::~LinkHello()
{
}

bool MplsLdp::Global::Discovery::LinkHello::has_data() const
{
    return hold_time.is_set
	|| interval.is_set;
}

bool MplsLdp::Global::Discovery::LinkHello::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| is_set(interval.operation);
}

std::string MplsLdp::Global::Discovery::LinkHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Discovery::LinkHello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/discovery/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Discovery::LinkHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::Discovery::LinkHello::get_children()
{
    return children;
}

void MplsLdp::Global::Discovery::LinkHello::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

MplsLdp::Global::Discovery::TargetedHello::TargetedHello()
    :
    	hold_time{YType::uint32, "hold-time"},
	 interval{YType::uint32, "interval"}
{
    yang_name = "targeted-hello"; yang_parent_name = "discovery";
}

MplsLdp::Global::Discovery::TargetedHello::~TargetedHello()
{
}

bool MplsLdp::Global::Discovery::TargetedHello::has_data() const
{
    return hold_time.is_set
	|| interval.is_set;
}

bool MplsLdp::Global::Discovery::TargetedHello::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| is_set(interval.operation);
}

std::string MplsLdp::Global::Discovery::TargetedHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Discovery::TargetedHello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/discovery/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Discovery::TargetedHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::Discovery::TargetedHello::get_children()
{
    return children;
}

void MplsLdp::Global::Discovery::TargetedHello::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

MplsLdp::Global::Discovery::Discovery()
    :
    	disable_instance_tlv{YType::empty, "disable-instance-tlv"},
	 disable_quick_start{YType::empty, "disable-quick-start"}
    	,
    link_hello(std::make_unique<MplsLdp::Global::Discovery::LinkHello>())
	,targeted_hello(std::make_unique<MplsLdp::Global::Discovery::TargetedHello>())
{
    link_hello->parent = this;
    children["link-hello"] = link_hello.get();

    targeted_hello->parent = this;
    children["targeted-hello"] = targeted_hello.get();

    yang_name = "discovery"; yang_parent_name = "global";
}

MplsLdp::Global::Discovery::~Discovery()
{
}

bool MplsLdp::Global::Discovery::has_data() const
{
    return disable_instance_tlv.is_set
	|| disable_quick_start.is_set
	|| (link_hello !=  nullptr && link_hello->has_data())
	|| (targeted_hello !=  nullptr && targeted_hello->has_data());
}

bool MplsLdp::Global::Discovery::has_operation() const
{
    return is_set(operation)
	|| is_set(disable_instance_tlv.operation)
	|| is_set(disable_quick_start.operation)
	|| (link_hello !=  nullptr && link_hello->has_operation())
	|| (targeted_hello !=  nullptr && targeted_hello->has_operation());
}

std::string MplsLdp::Global::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_instance_tlv.is_set || is_set(disable_instance_tlv.operation)) leaf_name_data.push_back(disable_instance_tlv.get_name_leafdata());
    if (disable_quick_start.is_set || is_set(disable_quick_start.operation)) leaf_name_data.push_back(disable_quick_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-hello")
    {
        if(link_hello != nullptr)
        {
            children["link-hello"] = link_hello.get();
        }
        else
        {
            link_hello = std::make_unique<MplsLdp::Global::Discovery::LinkHello>();
            link_hello->parent = this;
            children["link-hello"] = link_hello.get();
        }
        return children.at("link-hello");
    }

    if(child_yang_name == "targeted-hello")
    {
        if(targeted_hello != nullptr)
        {
            children["targeted-hello"] = targeted_hello.get();
        }
        else
        {
            targeted_hello = std::make_unique<MplsLdp::Global::Discovery::TargetedHello>();
            targeted_hello->parent = this;
            children["targeted-hello"] = targeted_hello.get();
        }
        return children.at("targeted-hello");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Global::Discovery::get_children()
{
    if(children.find("link-hello") == children.end())
    {
        if(link_hello != nullptr)
        {
            children["link-hello"] = link_hello.get();
        }
    }

    if(children.find("targeted-hello") == children.end())
    {
        if(targeted_hello != nullptr)
        {
            children["targeted-hello"] = targeted_hello.get();
        }
    }

    return children;
}

void MplsLdp::Global::Discovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable-instance-tlv")
    {
        disable_instance_tlv = value;
    }
    if(value_path == "disable-quick-start")
    {
        disable_quick_start = value;
    }
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::MldpRecursiveFec()
    :
    	enable_mldp_recursive_fec{YType::empty, "enable-mldp-recursive-fec"}
{
    yang_name = "mldp-recursive-fec"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::~MldpRecursiveFec()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::has_data() const
{
    return enable_mldp_recursive_fec.is_set;
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::has_operation() const
{
    return is_set(operation)
	|| is_set(enable_mldp_recursive_fec.operation);
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mldp-recursive-fec";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::get_entity_path(Entity* ancestor) const
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

    if (enable_mldp_recursive_fec.is_set || is_set(enable_mldp_recursive_fec.operation)) leaf_name_data.push_back(enable_mldp_recursive_fec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::get_children()
{
    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable-mldp-recursive-fec")
    {
        enable_mldp_recursive_fec = value;
    }
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::MoFrr()
    :
    	enable_mo_frr{YType::empty, "enable-mo-frr"}
{
    yang_name = "mo-frr"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::~MoFrr()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::has_data() const
{
    return enable_mo_frr.is_set;
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::has_operation() const
{
    return is_set(operation)
	|| is_set(enable_mo_frr.operation);
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mo-frr";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::get_entity_path(Entity* ancestor) const
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

    if (enable_mo_frr.is_set || is_set(enable_mo_frr.operation)) leaf_name_data.push_back(enable_mo_frr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::get_children()
{
    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable-mo-frr")
    {
        enable_mo_frr = value;
    }
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::Signaling()
    :
    	delete_delay{YType::uint32, "delete-delay"},
	 forward_delay{YType::uint32, "forward-delay"}
{
    yang_name = "signaling"; yang_parent_name = "make-before-break";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::~Signaling()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::has_data() const
{
    return delete_delay.is_set
	|| forward_delay.is_set;
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::has_operation() const
{
    return is_set(operation)
	|| is_set(delete_delay.operation)
	|| is_set(forward_delay.operation);
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::get_entity_path(Entity* ancestor) const
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

    if (delete_delay.is_set || is_set(delete_delay.operation)) leaf_name_data.push_back(delete_delay.get_name_leafdata());
    if (forward_delay.is_set || is_set(forward_delay.operation)) leaf_name_data.push_back(forward_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::get_children()
{
    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delete-delay")
    {
        delete_delay = value;
    }
    if(value_path == "forward-delay")
    {
        forward_delay = value;
    }
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::MakeBeforeBreak()
    :
    signaling(std::make_unique<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling>())
{
    signaling->parent = this;
    children["signaling"] = signaling.get();

    yang_name = "make-before-break"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::~MakeBeforeBreak()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::has_data() const
{
    return (signaling !=  nullptr && signaling->has_data());
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::has_operation() const
{
    return is_set(operation)
	|| (signaling !=  nullptr && signaling->has_operation());
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "make-before-break";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "signaling")
    {
        if(signaling != nullptr)
        {
            children["signaling"] = signaling.get();
        }
        else
        {
            signaling = std::make_unique<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::Signaling>();
            signaling->parent = this;
            children["signaling"] = signaling.get();
        }
        return children.at("signaling");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::get_children()
{
    if(children.find("signaling") == children.end())
    {
        if(signaling != nullptr)
        {
            children["signaling"] = signaling.get();
        }
    }

    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::Csc()
    :
    	enable_csc{YType::empty, "enable-csc"}
{
    yang_name = "csc"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::~Csc()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::has_data() const
{
    return enable_csc.is_set;
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::has_operation() const
{
    return is_set(operation)
	|| is_set(enable_csc.operation);
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csc";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::get_entity_path(Entity* ancestor) const
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

    if (enable_csc.is_set || is_set(enable_csc.operation)) leaf_name_data.push_back(enable_csc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::get_children()
{
    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable-csc")
    {
        enable_csc = value;
    }
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Af()
    :
    	af_name{YType::enumeration, "af-name"},
	 enable{YType::empty, "enable"},
	 mldp_rib_unicast_always{YType::empty, "mldp-rib-unicast-always"}
    	,
    csc(std::make_unique<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc>())
	,make_before_break(std::make_unique<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak>())
	,mldp_recursive_fec(std::make_unique<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec>())
	,mo_frr(std::make_unique<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr>())
{
    csc->parent = this;
    children["csc"] = csc.get();

    make_before_break->parent = this;
    children["make-before-break"] = make_before_break.get();

    mldp_recursive_fec->parent = this;
    children["mldp-recursive-fec"] = mldp_recursive_fec.get();

    mo_frr->parent = this;
    children["mo-frr"] = mo_frr.get();

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| enable.is_set
	|| mldp_rib_unicast_always.is_set
	|| (csc !=  nullptr && csc->has_data())
	|| (make_before_break !=  nullptr && make_before_break->has_data())
	|| (mldp_recursive_fec !=  nullptr && mldp_recursive_fec->has_data())
	|| (mo_frr !=  nullptr && mo_frr->has_data());
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(enable.operation)
	|| is_set(mldp_rib_unicast_always.operation)
	|| (csc !=  nullptr && csc->has_operation())
	|| (make_before_break !=  nullptr && make_before_break->has_operation())
	|| (mldp_recursive_fec !=  nullptr && mldp_recursive_fec->has_operation())
	|| (mo_frr !=  nullptr && mo_frr->has_operation());
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mldp_rib_unicast_always.is_set || is_set(mldp_rib_unicast_always.operation)) leaf_name_data.push_back(mldp_rib_unicast_always.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csc")
    {
        if(csc != nullptr)
        {
            children["csc"] = csc.get();
        }
        else
        {
            csc = std::make_unique<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::Csc>();
            csc->parent = this;
            children["csc"] = csc.get();
        }
        return children.at("csc");
    }

    if(child_yang_name == "make-before-break")
    {
        if(make_before_break != nullptr)
        {
            children["make-before-break"] = make_before_break.get();
        }
        else
        {
            make_before_break = std::make_unique<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MakeBeforeBreak>();
            make_before_break->parent = this;
            children["make-before-break"] = make_before_break.get();
        }
        return children.at("make-before-break");
    }

    if(child_yang_name == "mldp-recursive-fec")
    {
        if(mldp_recursive_fec != nullptr)
        {
            children["mldp-recursive-fec"] = mldp_recursive_fec.get();
        }
        else
        {
            mldp_recursive_fec = std::make_unique<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MldpRecursiveFec>();
            mldp_recursive_fec->parent = this;
            children["mldp-recursive-fec"] = mldp_recursive_fec.get();
        }
        return children.at("mldp-recursive-fec");
    }

    if(child_yang_name == "mo-frr")
    {
        if(mo_frr != nullptr)
        {
            children["mo-frr"] = mo_frr.get();
        }
        else
        {
            mo_frr = std::make_unique<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::MoFrr>();
            mo_frr->parent = this;
            children["mo-frr"] = mo_frr.get();
        }
        return children.at("mo-frr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::get_children()
{
    if(children.find("csc") == children.end())
    {
        if(csc != nullptr)
        {
            children["csc"] = csc.get();
        }
    }

    if(children.find("make-before-break") == children.end())
    {
        if(make_before_break != nullptr)
        {
            children["make-before-break"] = make_before_break.get();
        }
    }

    if(children.find("mldp-recursive-fec") == children.end())
    {
        if(mldp_recursive_fec != nullptr)
        {
            children["mldp-recursive-fec"] = mldp_recursive_fec.get();
        }
    }

    if(children.find("mo-frr") == children.end())
    {
        if(mo_frr != nullptr)
        {
            children["mo-frr"] = mo_frr.get();
        }
    }

    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "mldp-rib-unicast-always")
    {
        mldp_rib_unicast_always = value;
    }
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "vrf";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::~Afs()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::Afs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Mldp::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"}
    	,
    afs(std::make_unique<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs>())
{
    afs->parent = this;
    children["afs"] = afs.get();

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

MplsLdp::Global::Mldp::Vrfs::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (afs !=  nullptr && afs->has_data());
}

bool MplsLdp::Global::Mldp::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (afs !=  nullptr && afs->has_operation());
}

std::string MplsLdp::Global::Mldp::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/vrfs/" << get_segment_path();
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

Entity* MplsLdp::Global::Mldp::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "afs")
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
        else
        {
            afs = std::make_unique<MplsLdp::Global::Mldp::Vrfs::Vrf::Afs>();
            afs->parent = this;
            children["afs"] = afs.get();
        }
        return children.at("afs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::Vrfs::Vrf::get_children()
{
    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
    }

    return children;
}

void MplsLdp::Global::Mldp::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

MplsLdp::Global::Mldp::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "mldp";
}

MplsLdp::Global::Mldp::Vrfs::~Vrfs()
{
}

bool MplsLdp::Global::Mldp::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Mldp::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Mldp::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<MplsLdp::Global::Mldp::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::Vrfs::get_children()
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

void MplsLdp::Global::Mldp::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::MldpRecursiveFec()
    :
    	enable_mldp_recursive_fec{YType::empty, "enable-mldp-recursive-fec"}
{
    yang_name = "mldp-recursive-fec"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::~MldpRecursiveFec()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::has_data() const
{
    return enable_mldp_recursive_fec.is_set;
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::has_operation() const
{
    return is_set(operation)
	|| is_set(enable_mldp_recursive_fec.operation);
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mldp-recursive-fec";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::get_entity_path(Entity* ancestor) const
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

    if (enable_mldp_recursive_fec.is_set || is_set(enable_mldp_recursive_fec.operation)) leaf_name_data.push_back(enable_mldp_recursive_fec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::get_children()
{
    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable-mldp-recursive-fec")
    {
        enable_mldp_recursive_fec = value;
    }
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::MoFrr()
    :
    	enable_mo_frr{YType::empty, "enable-mo-frr"}
{
    yang_name = "mo-frr"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::~MoFrr()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::has_data() const
{
    return enable_mo_frr.is_set;
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::has_operation() const
{
    return is_set(operation)
	|| is_set(enable_mo_frr.operation);
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mo-frr";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::get_entity_path(Entity* ancestor) const
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

    if (enable_mo_frr.is_set || is_set(enable_mo_frr.operation)) leaf_name_data.push_back(enable_mo_frr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::get_children()
{
    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable-mo-frr")
    {
        enable_mo_frr = value;
    }
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::Signaling()
    :
    	delete_delay{YType::uint32, "delete-delay"},
	 forward_delay{YType::uint32, "forward-delay"}
{
    yang_name = "signaling"; yang_parent_name = "make-before-break";
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::~Signaling()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::has_data() const
{
    return delete_delay.is_set
	|| forward_delay.is_set;
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::has_operation() const
{
    return is_set(operation)
	|| is_set(delete_delay.operation)
	|| is_set(forward_delay.operation);
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::get_entity_path(Entity* ancestor) const
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

    if (delete_delay.is_set || is_set(delete_delay.operation)) leaf_name_data.push_back(delete_delay.get_name_leafdata());
    if (forward_delay.is_set || is_set(forward_delay.operation)) leaf_name_data.push_back(forward_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::get_children()
{
    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delete-delay")
    {
        delete_delay = value;
    }
    if(value_path == "forward-delay")
    {
        forward_delay = value;
    }
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::MakeBeforeBreak()
    :
    signaling(std::make_unique<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling>())
{
    signaling->parent = this;
    children["signaling"] = signaling.get();

    yang_name = "make-before-break"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::~MakeBeforeBreak()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::has_data() const
{
    return (signaling !=  nullptr && signaling->has_data());
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::has_operation() const
{
    return is_set(operation)
	|| (signaling !=  nullptr && signaling->has_operation());
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "make-before-break";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "signaling")
    {
        if(signaling != nullptr)
        {
            children["signaling"] = signaling.get();
        }
        else
        {
            signaling = std::make_unique<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::Signaling>();
            signaling->parent = this;
            children["signaling"] = signaling.get();
        }
        return children.at("signaling");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::get_children()
{
    if(children.find("signaling") == children.end())
    {
        if(signaling != nullptr)
        {
            children["signaling"] = signaling.get();
        }
    }

    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::Csc()
    :
    	enable_csc{YType::empty, "enable-csc"}
{
    yang_name = "csc"; yang_parent_name = "af";
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::~Csc()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::has_data() const
{
    return enable_csc.is_set;
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::has_operation() const
{
    return is_set(operation)
	|| is_set(enable_csc.operation);
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csc";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::get_entity_path(Entity* ancestor) const
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

    if (enable_csc.is_set || is_set(enable_csc.operation)) leaf_name_data.push_back(enable_csc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::get_children()
{
    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable-csc")
    {
        enable_csc = value;
    }
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Af()
    :
    	af_name{YType::enumeration, "af-name"},
	 enable{YType::empty, "enable"},
	 mldp_rib_unicast_always{YType::empty, "mldp-rib-unicast-always"}
    	,
    csc(std::make_unique<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc>())
	,make_before_break(std::make_unique<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak>())
	,mldp_recursive_fec(std::make_unique<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec>())
	,mo_frr(std::make_unique<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr>())
{
    csc->parent = this;
    children["csc"] = csc.get();

    make_before_break->parent = this;
    children["make-before-break"] = make_before_break.get();

    mldp_recursive_fec->parent = this;
    children["mldp-recursive-fec"] = mldp_recursive_fec.get();

    mo_frr->parent = this;
    children["mo-frr"] = mo_frr.get();

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::~Af()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| enable.is_set
	|| mldp_rib_unicast_always.is_set
	|| (csc !=  nullptr && csc->has_data())
	|| (make_before_break !=  nullptr && make_before_break->has_data())
	|| (mldp_recursive_fec !=  nullptr && mldp_recursive_fec->has_data())
	|| (mo_frr !=  nullptr && mo_frr->has_data());
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(enable.operation)
	|| is_set(mldp_rib_unicast_always.operation)
	|| (csc !=  nullptr && csc->has_operation())
	|| (make_before_break !=  nullptr && make_before_break->has_operation())
	|| (mldp_recursive_fec !=  nullptr && mldp_recursive_fec->has_operation())
	|| (mo_frr !=  nullptr && mo_frr->has_operation());
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name.get() <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/default-vrf/afs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mldp_rib_unicast_always.is_set || is_set(mldp_rib_unicast_always.operation)) leaf_name_data.push_back(mldp_rib_unicast_always.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "csc")
    {
        if(csc != nullptr)
        {
            children["csc"] = csc.get();
        }
        else
        {
            csc = std::make_unique<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::Csc>();
            csc->parent = this;
            children["csc"] = csc.get();
        }
        return children.at("csc");
    }

    if(child_yang_name == "make-before-break")
    {
        if(make_before_break != nullptr)
        {
            children["make-before-break"] = make_before_break.get();
        }
        else
        {
            make_before_break = std::make_unique<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MakeBeforeBreak>();
            make_before_break->parent = this;
            children["make-before-break"] = make_before_break.get();
        }
        return children.at("make-before-break");
    }

    if(child_yang_name == "mldp-recursive-fec")
    {
        if(mldp_recursive_fec != nullptr)
        {
            children["mldp-recursive-fec"] = mldp_recursive_fec.get();
        }
        else
        {
            mldp_recursive_fec = std::make_unique<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MldpRecursiveFec>();
            mldp_recursive_fec->parent = this;
            children["mldp-recursive-fec"] = mldp_recursive_fec.get();
        }
        return children.at("mldp-recursive-fec");
    }

    if(child_yang_name == "mo-frr")
    {
        if(mo_frr != nullptr)
        {
            children["mo-frr"] = mo_frr.get();
        }
        else
        {
            mo_frr = std::make_unique<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::MoFrr>();
            mo_frr->parent = this;
            children["mo-frr"] = mo_frr.get();
        }
        return children.at("mo-frr");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::get_children()
{
    if(children.find("csc") == children.end())
    {
        if(csc != nullptr)
        {
            children["csc"] = csc.get();
        }
    }

    if(children.find("make-before-break") == children.end())
    {
        if(make_before_break != nullptr)
        {
            children["make-before-break"] = make_before_break.get();
        }
    }

    if(children.find("mldp-recursive-fec") == children.end())
    {
        if(mldp_recursive_fec != nullptr)
        {
            children["mldp-recursive-fec"] = mldp_recursive_fec.get();
        }
    }

    if(children.find("mo-frr") == children.end())
    {
        if(mo_frr != nullptr)
        {
            children["mo-frr"] = mo_frr.get();
        }
    }

    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "mldp-rib-unicast-always")
    {
        mldp_rib_unicast_always = value;
    }
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Mldp::DefaultVrf::Afs::~Afs()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Mldp::DefaultVrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Mldp::DefaultVrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::DefaultVrf::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/default-vrf/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::DefaultVrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<MplsLdp::Global::Mldp::DefaultVrf::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::DefaultVrf::Afs::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::Afs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Mldp::DefaultVrf::DefaultVrf()
    :
    afs(std::make_unique<MplsLdp::Global::Mldp::DefaultVrf::Afs>())
{
    afs->parent = this;
    children["afs"] = afs.get();

    yang_name = "default-vrf"; yang_parent_name = "mldp";
}

MplsLdp::Global::Mldp::DefaultVrf::~DefaultVrf()
{
}

bool MplsLdp::Global::Mldp::DefaultVrf::has_data() const
{
    return (afs !=  nullptr && afs->has_data());
}

bool MplsLdp::Global::Mldp::DefaultVrf::has_operation() const
{
    return is_set(operation)
	|| (afs !=  nullptr && afs->has_operation());
}

std::string MplsLdp::Global::Mldp::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::DefaultVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "afs")
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
        else
        {
            afs = std::make_unique<MplsLdp::Global::Mldp::DefaultVrf::Afs>();
            afs->parent = this;
            children["afs"] = afs.get();
        }
        return children.at("afs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::DefaultVrf::get_children()
{
    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs.get();
        }
    }

    return children;
}

void MplsLdp::Global::Mldp::DefaultVrf::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Mldp::MldpGlobal::Logging::Logging()
    :
    	notifications{YType::empty, "notifications"}
{
    yang_name = "logging"; yang_parent_name = "mldp-global";
}

MplsLdp::Global::Mldp::MldpGlobal::Logging::~Logging()
{
}

bool MplsLdp::Global::Mldp::MldpGlobal::Logging::has_data() const
{
    return notifications.is_set;
}

bool MplsLdp::Global::Mldp::MldpGlobal::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(notifications.operation);
}

std::string MplsLdp::Global::Mldp::MldpGlobal::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::MldpGlobal::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/mldp-global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notifications.is_set || is_set(notifications.operation)) leaf_name_data.push_back(notifications.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::MldpGlobal::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::MldpGlobal::Logging::get_children()
{
    return children;
}

void MplsLdp::Global::Mldp::MldpGlobal::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "notifications")
    {
        notifications = value;
    }
}

MplsLdp::Global::Mldp::MldpGlobal::MldpGlobal()
    :
    logging(std::make_unique<MplsLdp::Global::Mldp::MldpGlobal::Logging>())
{
    logging->parent = this;
    children["logging"] = logging.get();

    yang_name = "mldp-global"; yang_parent_name = "mldp";
}

MplsLdp::Global::Mldp::MldpGlobal::~MldpGlobal()
{
}

bool MplsLdp::Global::Mldp::MldpGlobal::has_data() const
{
    return (logging !=  nullptr && logging->has_data());
}

bool MplsLdp::Global::Mldp::MldpGlobal::has_operation() const
{
    return is_set(operation)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsLdp::Global::Mldp::MldpGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mldp-global";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::MldpGlobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/mldp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::MldpGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging.get();
        }
        else
        {
            logging = std::make_unique<MplsLdp::Global::Mldp::MldpGlobal::Logging>();
            logging->parent = this;
            children["logging"] = logging.get();
        }
        return children.at("logging");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::MldpGlobal::get_children()
{
    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging.get();
        }
    }

    return children;
}

void MplsLdp::Global::Mldp::MldpGlobal::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Mldp::Mldp()
    :
    	enable{YType::empty, "enable"}
    	,
    default_vrf(std::make_unique<MplsLdp::Global::Mldp::DefaultVrf>())
	,mldp_global(std::make_unique<MplsLdp::Global::Mldp::MldpGlobal>())
	,vrfs(std::make_unique<MplsLdp::Global::Mldp::Vrfs>())
{
    default_vrf->parent = this;
    children["default-vrf"] = default_vrf.get();

    mldp_global->parent = this;
    children["mldp-global"] = mldp_global.get();

    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "mldp"; yang_parent_name = "global";
}

MplsLdp::Global::Mldp::~Mldp()
{
}

bool MplsLdp::Global::Mldp::has_data() const
{
    return enable.is_set
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (mldp_global !=  nullptr && mldp_global->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool MplsLdp::Global::Mldp::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (mldp_global !=  nullptr && mldp_global->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string MplsLdp::Global::Mldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mldp";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Mldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::Mldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf.get();
        }
        else
        {
            default_vrf = std::make_unique<MplsLdp::Global::Mldp::DefaultVrf>();
            default_vrf->parent = this;
            children["default-vrf"] = default_vrf.get();
        }
        return children.at("default-vrf");
    }

    if(child_yang_name == "mldp-global")
    {
        if(mldp_global != nullptr)
        {
            children["mldp-global"] = mldp_global.get();
        }
        else
        {
            mldp_global = std::make_unique<MplsLdp::Global::Mldp::MldpGlobal>();
            mldp_global->parent = this;
            children["mldp-global"] = mldp_global.get();
        }
        return children.at("mldp-global");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<MplsLdp::Global::Mldp::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Global::Mldp::get_children()
{
    if(children.find("default-vrf") == children.end())
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf.get();
        }
    }

    if(children.find("mldp-global") == children.end())
    {
        if(mldp_global != nullptr)
        {
            children["mldp-global"] = mldp_global.get();
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

void MplsLdp::Global::Mldp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

MplsLdp::Global::Global()
    :
    	disable_implicit_ipv4{YType::empty, "disable-implicit-ipv4"},
	 ltrace_buf_multiplier{YType::uint32, "ltrace-buf-multiplier"}
    	,
    discovery(std::make_unique<MplsLdp::Global::Discovery>())
	,enable_logging(std::make_unique<MplsLdp::Global::EnableLogging>())
	,entropy_label(std::make_unique<MplsLdp::Global::EntropyLabel>())
	,graceful_restart(std::make_unique<MplsLdp::Global::GracefulRestart>())
	,igp(std::make_unique<MplsLdp::Global::Igp>())
	,mldp(std::make_unique<MplsLdp::Global::Mldp>())
	,nsr(std::make_unique<MplsLdp::Global::Nsr>())
	,session(std::make_unique<MplsLdp::Global::Session>())
	,signalling(std::make_unique<MplsLdp::Global::Signalling>())
{
    discovery->parent = this;
    children["discovery"] = discovery.get();

    enable_logging->parent = this;
    children["enable-logging"] = enable_logging.get();

    entropy_label->parent = this;
    children["entropy-label"] = entropy_label.get();

    graceful_restart->parent = this;
    children["graceful-restart"] = graceful_restart.get();

    igp->parent = this;
    children["igp"] = igp.get();

    mldp->parent = this;
    children["mldp"] = mldp.get();

    nsr->parent = this;
    children["nsr"] = nsr.get();

    session->parent = this;
    children["session"] = session.get();

    signalling->parent = this;
    children["signalling"] = signalling.get();

    yang_name = "global"; yang_parent_name = "mpls-ldp";
}

MplsLdp::Global::~Global()
{
}

bool MplsLdp::Global::has_data() const
{
    return disable_implicit_ipv4.is_set
	|| ltrace_buf_multiplier.is_set
	|| (discovery !=  nullptr && discovery->has_data())
	|| (enable_logging !=  nullptr && enable_logging->has_data())
	|| (entropy_label !=  nullptr && entropy_label->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (igp !=  nullptr && igp->has_data())
	|| (mldp !=  nullptr && mldp->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (signalling !=  nullptr && signalling->has_data());
}

bool MplsLdp::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(disable_implicit_ipv4.operation)
	|| is_set(ltrace_buf_multiplier.operation)
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (enable_logging !=  nullptr && enable_logging->has_operation())
	|| (entropy_label !=  nullptr && entropy_label->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (igp !=  nullptr && igp->has_operation())
	|| (mldp !=  nullptr && mldp->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (signalling !=  nullptr && signalling->has_operation());
}

std::string MplsLdp::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_implicit_ipv4.is_set || is_set(disable_implicit_ipv4.operation)) leaf_name_data.push_back(disable_implicit_ipv4.get_name_leafdata());
    if (ltrace_buf_multiplier.is_set || is_set(ltrace_buf_multiplier.operation)) leaf_name_data.push_back(ltrace_buf_multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovery")
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery.get();
        }
        else
        {
            discovery = std::make_unique<MplsLdp::Global::Discovery>();
            discovery->parent = this;
            children["discovery"] = discovery.get();
        }
        return children.at("discovery");
    }

    if(child_yang_name == "enable-logging")
    {
        if(enable_logging != nullptr)
        {
            children["enable-logging"] = enable_logging.get();
        }
        else
        {
            enable_logging = std::make_unique<MplsLdp::Global::EnableLogging>();
            enable_logging->parent = this;
            children["enable-logging"] = enable_logging.get();
        }
        return children.at("enable-logging");
    }

    if(child_yang_name == "entropy-label")
    {
        if(entropy_label != nullptr)
        {
            children["entropy-label"] = entropy_label.get();
        }
        else
        {
            entropy_label = std::make_unique<MplsLdp::Global::EntropyLabel>();
            entropy_label->parent = this;
            children["entropy-label"] = entropy_label.get();
        }
        return children.at("entropy-label");
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart.get();
        }
        else
        {
            graceful_restart = std::make_unique<MplsLdp::Global::GracefulRestart>();
            graceful_restart->parent = this;
            children["graceful-restart"] = graceful_restart.get();
        }
        return children.at("graceful-restart");
    }

    if(child_yang_name == "igp")
    {
        if(igp != nullptr)
        {
            children["igp"] = igp.get();
        }
        else
        {
            igp = std::make_unique<MplsLdp::Global::Igp>();
            igp->parent = this;
            children["igp"] = igp.get();
        }
        return children.at("igp");
    }

    if(child_yang_name == "mldp")
    {
        if(mldp != nullptr)
        {
            children["mldp"] = mldp.get();
        }
        else
        {
            mldp = std::make_unique<MplsLdp::Global::Mldp>();
            mldp->parent = this;
            children["mldp"] = mldp.get();
        }
        return children.at("mldp");
    }

    if(child_yang_name == "nsr")
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr.get();
        }
        else
        {
            nsr = std::make_unique<MplsLdp::Global::Nsr>();
            nsr->parent = this;
            children["nsr"] = nsr.get();
        }
        return children.at("nsr");
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
        else
        {
            session = std::make_unique<MplsLdp::Global::Session>();
            session->parent = this;
            children["session"] = session.get();
        }
        return children.at("session");
    }

    if(child_yang_name == "signalling")
    {
        if(signalling != nullptr)
        {
            children["signalling"] = signalling.get();
        }
        else
        {
            signalling = std::make_unique<MplsLdp::Global::Signalling>();
            signalling->parent = this;
            children["signalling"] = signalling.get();
        }
        return children.at("signalling");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::Global::get_children()
{
    if(children.find("discovery") == children.end())
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery.get();
        }
    }

    if(children.find("enable-logging") == children.end())
    {
        if(enable_logging != nullptr)
        {
            children["enable-logging"] = enable_logging.get();
        }
    }

    if(children.find("entropy-label") == children.end())
    {
        if(entropy_label != nullptr)
        {
            children["entropy-label"] = entropy_label.get();
        }
    }

    if(children.find("graceful-restart") == children.end())
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart.get();
        }
    }

    if(children.find("igp") == children.end())
    {
        if(igp != nullptr)
        {
            children["igp"] = igp.get();
        }
    }

    if(children.find("mldp") == children.end())
    {
        if(mldp != nullptr)
        {
            children["mldp"] = mldp.get();
        }
    }

    if(children.find("nsr") == children.end())
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr.get();
        }
    }

    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
    }

    if(children.find("signalling") == children.end())
    {
        if(signalling != nullptr)
        {
            children["signalling"] = signalling.get();
        }
    }

    return children;
}

void MplsLdp::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable-implicit-ipv4")
    {
        disable_implicit_ipv4 = value;
    }
    if(value_path == "ltrace-buf-multiplier")
    {
        ltrace_buf_multiplier = value;
    }
}

MplsLdp::MplsLdp()
    :
    	enable{YType::empty, "enable"}
    	,
    default_vrf(std::make_unique<MplsLdp::DefaultVrf>())
	,global(std::make_unique<MplsLdp::Global>())
	,vrfs(std::make_unique<MplsLdp::Vrfs>())
{
    default_vrf->parent = this;
    children["default-vrf"] = default_vrf.get();

    global->parent = this;
    children["global"] = global.get();

    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "mpls-ldp"; yang_parent_name = "Cisco-IOS-XR-mpls-ldp-cfg";
}

MplsLdp::~MplsLdp()
{
}

bool MplsLdp::has_data() const
{
    return enable.is_set
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool MplsLdp::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string MplsLdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-ldp-cfg:mpls-ldp";

    return path_buffer.str();

}

EntityPath MplsLdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* MplsLdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf.get();
        }
        else
        {
            default_vrf = std::make_unique<MplsLdp::DefaultVrf>();
            default_vrf->parent = this;
            children["default-vrf"] = default_vrf.get();
        }
        return children.at("default-vrf");
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global.get();
        }
        else
        {
            global = std::make_unique<MplsLdp::Global>();
            global->parent = this;
            children["global"] = global.get();
        }
        return children.at("global");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<MplsLdp::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & MplsLdp::get_children()
{
    if(children.find("default-vrf") == children.end())
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf.get();
        }
    }

    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global.get();
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

void MplsLdp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

std::unique_ptr<Entity> MplsLdp::clone_ptr()
{
    return std::make_unique<MplsLdp>();
}

const Enum::YLeaf MplsLdpAdvertiseBgpaclEnum::peer_acl {1, "peer-acl"};

const Enum::YLeaf MplsLdpLabelAdvertiseEnum::for_ {1, "for"};
const Enum::YLeaf MplsLdpLabelAdvertiseEnum::for_to {2, "for-to"};

const Enum::YLeaf MplsLdpLabelAllocationEnum::acl {1, "acl"};
const Enum::YLeaf MplsLdpLabelAllocationEnum::host {2, "host"};

const Enum::YLeaf MplsLdpTargetedAcceptEnum::all {1, "all"};
const Enum::YLeaf MplsLdpTargetedAcceptEnum::from {2, "from"};

const Enum::YLeaf MplsLdpNbrPasswordEnum::disable {1, "disable"};
const Enum::YLeaf MplsLdpNbrPasswordEnum::specified {2, "specified"};

const Enum::YLeaf MplsLdpDownstreamOnDemandEnum::peer_acl {1, "peer-acl"};

const Enum::YLeaf MplsLdpExpNullEnum::all {1, "all"};
const Enum::YLeaf MplsLdpExpNullEnum::for_ {2, "for"};
const Enum::YLeaf MplsLdpExpNullEnum::to {3, "to"};
const Enum::YLeaf MplsLdpExpNullEnum::for_to {4, "for-to"};

const Enum::YLeaf MplsLdpafNameEnum::ipv4 {4, "ipv4"};
const Enum::YLeaf MplsLdpafNameEnum::ipv6 {6, "ipv6"};

const Enum::YLeaf MplsLdpTransportAddressEnum::interface {1, "interface"};
const Enum::YLeaf MplsLdpTransportAddressEnum::address {2, "address"};

const Enum::YLeaf MplsLdpSessionProtectionEnum::all {1, "all"};
const Enum::YLeaf MplsLdpSessionProtectionEnum::for_ {2, "for"};
const Enum::YLeaf MplsLdpSessionProtectionEnum::all_with_duration {3, "all-with-duration"};
const Enum::YLeaf MplsLdpSessionProtectionEnum::for_with_duration {4, "for-with-duration"};
const Enum::YLeaf MplsLdpSessionProtectionEnum::all_with_forever {5, "all-with-forever"};
const Enum::YLeaf MplsLdpSessionProtectionEnum::for_with_forever {6, "for-with-forever"};


}
}

