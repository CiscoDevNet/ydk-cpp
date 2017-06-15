
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_bfd_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XE_bfd_oper {

BfdState::BfdState()
    :
    sessions_(std::make_shared<BfdState::Sessions>())
{
    sessions_->parent = this;

    yang_name = "bfd-state"; yang_parent_name = "Cisco-IOS-XE-bfd-oper";
}

BfdState::~BfdState()
{
}

bool BfdState::has_data() const
{
    return (sessions_ !=  nullptr && sessions_->has_data());
}

bool BfdState::has_operation() const
{
    return is_set(operation)
	|| (sessions_ !=  nullptr && sessions_->has_operation());
}

std::string BfdState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bfd-oper:bfd-state";

    return path_buffer.str();

}

const EntityPath BfdState::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> BfdState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions_ == nullptr)
        {
            sessions_ = std::make_shared<BfdState::Sessions>();
        }
        return sessions_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BfdState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sessions_ != nullptr)
    {
        children["sessions"] = sessions_;
    }

    return children;
}

void BfdState::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> BfdState::clone_ptr() const
{
    return std::make_shared<BfdState>();
}

std::string BfdState::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string BfdState::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function BfdState::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

BfdState::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "bfd-state";
}

BfdState::Sessions::~Sessions()
{
}

bool BfdState::Sessions::has_data() const
{
    for (std::size_t index=0; index<session_.size(); index++)
    {
        if(session_[index]->has_data())
            return true;
    }
    return false;
}

bool BfdState::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session_.size(); index++)
    {
        if(session_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BfdState::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

const EntityPath BfdState::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-bfd-oper:bfd-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BfdState::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        for(auto const & c : session_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BfdState::Sessions::Session>();
        c->parent = this;
        session_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BfdState::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BfdState::Sessions::set_value(const std::string & value_path, std::string value)
{
}

BfdState::Sessions::Session::Session()
    :
    type{YType::enumeration, "type"}
    	,
    bfd_circuits_(std::make_shared<BfdState::Sessions::Session::BfdCircuits>())
	,bfd_mhop_nbrs_(std::make_shared<BfdState::Sessions::Session::BfdMhopNbrs>())
	,bfd_mhop_vrf_nbrs_(std::make_shared<BfdState::Sessions::Session::BfdMhopVrfNbrs>())
	,bfd_nbrs_(std::make_shared<BfdState::Sessions::Session::BfdNbrs>())
	,bfd_tunnel_paths_(std::make_shared<BfdState::Sessions::Session::BfdTunnelPaths>())
{
    bfd_circuits_->parent = this;

    bfd_mhop_nbrs_->parent = this;

    bfd_mhop_vrf_nbrs_->parent = this;

    bfd_nbrs_->parent = this;

    bfd_tunnel_paths_->parent = this;

    yang_name = "session"; yang_parent_name = "sessions";
}

BfdState::Sessions::Session::~Session()
{
}

bool BfdState::Sessions::Session::has_data() const
{
    return type.is_set
	|| (bfd_circuits_ !=  nullptr && bfd_circuits_->has_data())
	|| (bfd_mhop_nbrs_ !=  nullptr && bfd_mhop_nbrs_->has_data())
	|| (bfd_mhop_vrf_nbrs_ !=  nullptr && bfd_mhop_vrf_nbrs_->has_data())
	|| (bfd_nbrs_ !=  nullptr && bfd_nbrs_->has_data())
	|| (bfd_tunnel_paths_ !=  nullptr && bfd_tunnel_paths_->has_data());
}

bool BfdState::Sessions::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (bfd_circuits_ !=  nullptr && bfd_circuits_->has_operation())
	|| (bfd_mhop_nbrs_ !=  nullptr && bfd_mhop_nbrs_->has_operation())
	|| (bfd_mhop_vrf_nbrs_ !=  nullptr && bfd_mhop_vrf_nbrs_->has_operation())
	|| (bfd_nbrs_ !=  nullptr && bfd_nbrs_->has_operation())
	|| (bfd_tunnel_paths_ !=  nullptr && bfd_tunnel_paths_->has_operation());
}

std::string BfdState::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[type='" <<type <<"']";

    return path_buffer.str();

}

const EntityPath BfdState::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-bfd-oper:bfd-state/sessions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BfdState::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-circuits")
    {
        if(bfd_circuits_ == nullptr)
        {
            bfd_circuits_ = std::make_shared<BfdState::Sessions::Session::BfdCircuits>();
        }
        return bfd_circuits_;
    }

    if(child_yang_name == "bfd-mhop-nbrs")
    {
        if(bfd_mhop_nbrs_ == nullptr)
        {
            bfd_mhop_nbrs_ = std::make_shared<BfdState::Sessions::Session::BfdMhopNbrs>();
        }
        return bfd_mhop_nbrs_;
    }

    if(child_yang_name == "bfd-mhop-vrf-nbrs")
    {
        if(bfd_mhop_vrf_nbrs_ == nullptr)
        {
            bfd_mhop_vrf_nbrs_ = std::make_shared<BfdState::Sessions::Session::BfdMhopVrfNbrs>();
        }
        return bfd_mhop_vrf_nbrs_;
    }

    if(child_yang_name == "bfd-nbrs")
    {
        if(bfd_nbrs_ == nullptr)
        {
            bfd_nbrs_ = std::make_shared<BfdState::Sessions::Session::BfdNbrs>();
        }
        return bfd_nbrs_;
    }

    if(child_yang_name == "bfd-tunnel-paths")
    {
        if(bfd_tunnel_paths_ == nullptr)
        {
            bfd_tunnel_paths_ = std::make_shared<BfdState::Sessions::Session::BfdTunnelPaths>();
        }
        return bfd_tunnel_paths_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BfdState::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd_circuits_ != nullptr)
    {
        children["bfd-circuits"] = bfd_circuits_;
    }

    if(bfd_mhop_nbrs_ != nullptr)
    {
        children["bfd-mhop-nbrs"] = bfd_mhop_nbrs_;
    }

    if(bfd_mhop_vrf_nbrs_ != nullptr)
    {
        children["bfd-mhop-vrf-nbrs"] = bfd_mhop_vrf_nbrs_;
    }

    if(bfd_nbrs_ != nullptr)
    {
        children["bfd-nbrs"] = bfd_nbrs_;
    }

    if(bfd_tunnel_paths_ != nullptr)
    {
        children["bfd-tunnel-paths"] = bfd_tunnel_paths_;
    }

    return children;
}

void BfdState::Sessions::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPaths()
{
    yang_name = "bfd-tunnel-paths"; yang_parent_name = "session";
}

BfdState::Sessions::Session::BfdTunnelPaths::~BfdTunnelPaths()
{
}

bool BfdState::Sessions::Session::BfdTunnelPaths::has_data() const
{
    for (std::size_t index=0; index<bfd_tunnel_path_.size(); index++)
    {
        if(bfd_tunnel_path_[index]->has_data())
            return true;
    }
    return false;
}

bool BfdState::Sessions::Session::BfdTunnelPaths::has_operation() const
{
    for (std::size_t index=0; index<bfd_tunnel_path_.size(); index++)
    {
        if(bfd_tunnel_path_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BfdState::Sessions::Session::BfdTunnelPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tunnel-paths";

    return path_buffer.str();

}

const EntityPath BfdState::Sessions::Session::BfdTunnelPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdTunnelPaths' in Cisco_IOS_XE_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BfdState::Sessions::Session::BfdTunnelPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-tunnel-path")
    {
        for(auto const & c : bfd_tunnel_path_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath>();
        c->parent = this;
        bfd_tunnel_path_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BfdState::Sessions::Session::BfdTunnelPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_tunnel_path_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BfdState::Sessions::Session::BfdTunnelPaths::set_value(const std::string & value_path, std::string value)
{
}

BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath::BfdTunnelPath()
    :
    interface{YType::str, "interface"},
    lsp_type{YType::enumeration, "lsp-type"},
    ld{YType::uint32, "ld"},
    rd{YType::uint32, "rd"},
    remote_state{YType::enumeration, "remote-state"},
    state{YType::enumeration, "state"}
{
    yang_name = "bfd-tunnel-path"; yang_parent_name = "bfd-tunnel-paths";
}

BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath::~BfdTunnelPath()
{
}

bool BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath::has_data() const
{
    return interface.is_set
	|| lsp_type.is_set
	|| ld.is_set
	|| rd.is_set
	|| remote_state.is_set
	|| state.is_set;
}

bool BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(lsp_type.operation)
	|| is_set(ld.operation)
	|| is_set(rd.operation)
	|| is_set(remote_state.operation)
	|| is_set(state.operation);
}

std::string BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-tunnel-path" <<"[interface='" <<interface <<"']" <<"[lsp-type='" <<lsp_type <<"']";

    return path_buffer.str();

}

const EntityPath BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdTunnelPath' in Cisco_IOS_XE_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (lsp_type.is_set || is_set(lsp_type.operation)) leaf_name_data.push_back(lsp_type.get_name_leafdata());
    if (ld.is_set || is_set(ld.operation)) leaf_name_data.push_back(ld.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (remote_state.is_set || is_set(remote_state.operation)) leaf_name_data.push_back(remote_state.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BfdState::Sessions::Session::BfdTunnelPaths::BfdTunnelPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "lsp-type")
    {
        lsp_type = value;
    }
    if(value_path == "ld")
    {
        ld = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
    if(value_path == "remote-state")
    {
        remote_state = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

BfdState::Sessions::Session::BfdCircuits::BfdCircuits()
{
    yang_name = "bfd-circuits"; yang_parent_name = "session";
}

BfdState::Sessions::Session::BfdCircuits::~BfdCircuits()
{
}

bool BfdState::Sessions::Session::BfdCircuits::has_data() const
{
    for (std::size_t index=0; index<bfd_circuit_.size(); index++)
    {
        if(bfd_circuit_[index]->has_data())
            return true;
    }
    return false;
}

bool BfdState::Sessions::Session::BfdCircuits::has_operation() const
{
    for (std::size_t index=0; index<bfd_circuit_.size(); index++)
    {
        if(bfd_circuit_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BfdState::Sessions::Session::BfdCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-circuits";

    return path_buffer.str();

}

const EntityPath BfdState::Sessions::Session::BfdCircuits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdCircuits' in Cisco_IOS_XE_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BfdState::Sessions::Session::BfdCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-circuit")
    {
        for(auto const & c : bfd_circuit_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BfdState::Sessions::Session::BfdCircuits::BfdCircuit>();
        c->parent = this;
        bfd_circuit_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BfdState::Sessions::Session::BfdCircuits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_circuit_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BfdState::Sessions::Session::BfdCircuits::set_value(const std::string & value_path, std::string value)
{
}

BfdState::Sessions::Session::BfdCircuits::BfdCircuit::BfdCircuit()
    :
    interface{YType::str, "interface"},
    vcid{YType::uint32, "vcid"},
    ld{YType::uint32, "ld"},
    rd{YType::uint32, "rd"},
    remote_state{YType::enumeration, "remote-state"},
    state{YType::enumeration, "state"}
{
    yang_name = "bfd-circuit"; yang_parent_name = "bfd-circuits";
}

BfdState::Sessions::Session::BfdCircuits::BfdCircuit::~BfdCircuit()
{
}

bool BfdState::Sessions::Session::BfdCircuits::BfdCircuit::has_data() const
{
    return interface.is_set
	|| vcid.is_set
	|| ld.is_set
	|| rd.is_set
	|| remote_state.is_set
	|| state.is_set;
}

bool BfdState::Sessions::Session::BfdCircuits::BfdCircuit::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(vcid.operation)
	|| is_set(ld.operation)
	|| is_set(rd.operation)
	|| is_set(remote_state.operation)
	|| is_set(state.operation);
}

std::string BfdState::Sessions::Session::BfdCircuits::BfdCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-circuit" <<"[interface='" <<interface <<"']" <<"[vcid='" <<vcid <<"']";

    return path_buffer.str();

}

const EntityPath BfdState::Sessions::Session::BfdCircuits::BfdCircuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdCircuit' in Cisco_IOS_XE_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (vcid.is_set || is_set(vcid.operation)) leaf_name_data.push_back(vcid.get_name_leafdata());
    if (ld.is_set || is_set(ld.operation)) leaf_name_data.push_back(ld.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (remote_state.is_set || is_set(remote_state.operation)) leaf_name_data.push_back(remote_state.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BfdState::Sessions::Session::BfdCircuits::BfdCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BfdState::Sessions::Session::BfdCircuits::BfdCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BfdState::Sessions::Session::BfdCircuits::BfdCircuit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "vcid")
    {
        vcid = value;
    }
    if(value_path == "ld")
    {
        ld = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
    if(value_path == "remote-state")
    {
        remote_state = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

BfdState::Sessions::Session::BfdNbrs::BfdNbrs()
{
    yang_name = "bfd-nbrs"; yang_parent_name = "session";
}

BfdState::Sessions::Session::BfdNbrs::~BfdNbrs()
{
}

bool BfdState::Sessions::Session::BfdNbrs::has_data() const
{
    for (std::size_t index=0; index<bfd_nbr_.size(); index++)
    {
        if(bfd_nbr_[index]->has_data())
            return true;
    }
    return false;
}

bool BfdState::Sessions::Session::BfdNbrs::has_operation() const
{
    for (std::size_t index=0; index<bfd_nbr_.size(); index++)
    {
        if(bfd_nbr_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BfdState::Sessions::Session::BfdNbrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-nbrs";

    return path_buffer.str();

}

const EntityPath BfdState::Sessions::Session::BfdNbrs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdNbrs' in Cisco_IOS_XE_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BfdState::Sessions::Session::BfdNbrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-nbr")
    {
        for(auto const & c : bfd_nbr_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BfdState::Sessions::Session::BfdNbrs::BfdNbr>();
        c->parent = this;
        bfd_nbr_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BfdState::Sessions::Session::BfdNbrs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_nbr_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BfdState::Sessions::Session::BfdNbrs::set_value(const std::string & value_path, std::string value)
{
}

BfdState::Sessions::Session::BfdNbrs::BfdNbr::BfdNbr()
    :
    ip{YType::str, "ip"},
    interface{YType::str, "interface"},
    ld{YType::uint32, "ld"},
    rd{YType::uint32, "rd"},
    remote_state{YType::enumeration, "remote-state"},
    state{YType::enumeration, "state"}
{
    yang_name = "bfd-nbr"; yang_parent_name = "bfd-nbrs";
}

BfdState::Sessions::Session::BfdNbrs::BfdNbr::~BfdNbr()
{
}

bool BfdState::Sessions::Session::BfdNbrs::BfdNbr::has_data() const
{
    return ip.is_set
	|| interface.is_set
	|| ld.is_set
	|| rd.is_set
	|| remote_state.is_set
	|| state.is_set;
}

bool BfdState::Sessions::Session::BfdNbrs::BfdNbr::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(interface.operation)
	|| is_set(ld.operation)
	|| is_set(rd.operation)
	|| is_set(remote_state.operation)
	|| is_set(state.operation);
}

std::string BfdState::Sessions::Session::BfdNbrs::BfdNbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-nbr" <<"[ip='" <<ip <<"']" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath BfdState::Sessions::Session::BfdNbrs::BfdNbr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdNbr' in Cisco_IOS_XE_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (ld.is_set || is_set(ld.operation)) leaf_name_data.push_back(ld.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (remote_state.is_set || is_set(remote_state.operation)) leaf_name_data.push_back(remote_state.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BfdState::Sessions::Session::BfdNbrs::BfdNbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BfdState::Sessions::Session::BfdNbrs::BfdNbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BfdState::Sessions::Session::BfdNbrs::BfdNbr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "ld")
    {
        ld = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
    if(value_path == "remote-state")
    {
        remote_state = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbrs()
{
    yang_name = "bfd-mhop-nbrs"; yang_parent_name = "session";
}

BfdState::Sessions::Session::BfdMhopNbrs::~BfdMhopNbrs()
{
}

bool BfdState::Sessions::Session::BfdMhopNbrs::has_data() const
{
    for (std::size_t index=0; index<bfd_mhop_nbr_.size(); index++)
    {
        if(bfd_mhop_nbr_[index]->has_data())
            return true;
    }
    return false;
}

bool BfdState::Sessions::Session::BfdMhopNbrs::has_operation() const
{
    for (std::size_t index=0; index<bfd_mhop_nbr_.size(); index++)
    {
        if(bfd_mhop_nbr_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BfdState::Sessions::Session::BfdMhopNbrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-mhop-nbrs";

    return path_buffer.str();

}

const EntityPath BfdState::Sessions::Session::BfdMhopNbrs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdMhopNbrs' in Cisco_IOS_XE_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BfdState::Sessions::Session::BfdMhopNbrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-mhop-nbr")
    {
        for(auto const & c : bfd_mhop_nbr_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr>();
        c->parent = this;
        bfd_mhop_nbr_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BfdState::Sessions::Session::BfdMhopNbrs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_mhop_nbr_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BfdState::Sessions::Session::BfdMhopNbrs::set_value(const std::string & value_path, std::string value)
{
}

BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr::BfdMhopNbr()
    :
    ip{YType::str, "ip"},
    ld{YType::uint32, "ld"},
    rd{YType::uint32, "rd"},
    remote_state{YType::enumeration, "remote-state"},
    state{YType::enumeration, "state"}
{
    yang_name = "bfd-mhop-nbr"; yang_parent_name = "bfd-mhop-nbrs";
}

BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr::~BfdMhopNbr()
{
}

bool BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr::has_data() const
{
    return ip.is_set
	|| ld.is_set
	|| rd.is_set
	|| remote_state.is_set
	|| state.is_set;
}

bool BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(ld.operation)
	|| is_set(rd.operation)
	|| is_set(remote_state.operation)
	|| is_set(state.operation);
}

std::string BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-mhop-nbr" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdMhopNbr' in Cisco_IOS_XE_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ld.is_set || is_set(ld.operation)) leaf_name_data.push_back(ld.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (remote_state.is_set || is_set(remote_state.operation)) leaf_name_data.push_back(remote_state.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BfdState::Sessions::Session::BfdMhopNbrs::BfdMhopNbr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "ld")
    {
        ld = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
    if(value_path == "remote-state")
    {
        remote_state = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbrs()
{
    yang_name = "bfd-mhop-vrf-nbrs"; yang_parent_name = "session";
}

BfdState::Sessions::Session::BfdMhopVrfNbrs::~BfdMhopVrfNbrs()
{
}

bool BfdState::Sessions::Session::BfdMhopVrfNbrs::has_data() const
{
    for (std::size_t index=0; index<bfd_mhop_vrf_nbr_.size(); index++)
    {
        if(bfd_mhop_vrf_nbr_[index]->has_data())
            return true;
    }
    return false;
}

bool BfdState::Sessions::Session::BfdMhopVrfNbrs::has_operation() const
{
    for (std::size_t index=0; index<bfd_mhop_vrf_nbr_.size(); index++)
    {
        if(bfd_mhop_vrf_nbr_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BfdState::Sessions::Session::BfdMhopVrfNbrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-mhop-vrf-nbrs";

    return path_buffer.str();

}

const EntityPath BfdState::Sessions::Session::BfdMhopVrfNbrs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdMhopVrfNbrs' in Cisco_IOS_XE_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BfdState::Sessions::Session::BfdMhopVrfNbrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-mhop-vrf-nbr")
    {
        for(auto const & c : bfd_mhop_vrf_nbr_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr>();
        c->parent = this;
        bfd_mhop_vrf_nbr_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BfdState::Sessions::Session::BfdMhopVrfNbrs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bfd_mhop_vrf_nbr_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BfdState::Sessions::Session::BfdMhopVrfNbrs::set_value(const std::string & value_path, std::string value)
{
}

BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr::BfdMhopVrfNbr()
    :
    ip{YType::str, "ip"},
    vrf{YType::str, "vrf"},
    ld{YType::uint32, "ld"},
    rd{YType::uint32, "rd"},
    remote_state{YType::enumeration, "remote-state"},
    state{YType::enumeration, "state"}
{
    yang_name = "bfd-mhop-vrf-nbr"; yang_parent_name = "bfd-mhop-vrf-nbrs";
}

BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr::~BfdMhopVrfNbr()
{
}

bool BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr::has_data() const
{
    return ip.is_set
	|| vrf.is_set
	|| ld.is_set
	|| rd.is_set
	|| remote_state.is_set
	|| state.is_set;
}

bool BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(vrf.operation)
	|| is_set(ld.operation)
	|| is_set(rd.operation)
	|| is_set(remote_state.operation)
	|| is_set(state.operation);
}

std::string BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-mhop-vrf-nbr" <<"[ip='" <<ip <<"']" <<"[vrf='" <<vrf <<"']";

    return path_buffer.str();

}

const EntityPath BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdMhopVrfNbr' in Cisco_IOS_XE_bfd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (ld.is_set || is_set(ld.operation)) leaf_name_data.push_back(ld.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (remote_state.is_set || is_set(remote_state.operation)) leaf_name_data.push_back(remote_state.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BfdState::Sessions::Session::BfdMhopVrfNbrs::BfdMhopVrfNbr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
    if(value_path == "ld")
    {
        ld = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
    if(value_path == "remote-state")
    {
        remote_state = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

const Enum::YLeaf BfdRemoteStateTypeEnum::up {0, "up"};
const Enum::YLeaf BfdRemoteStateTypeEnum::down {1, "down"};
const Enum::YLeaf BfdRemoteStateTypeEnum::init {2, "init"};
const Enum::YLeaf BfdRemoteStateTypeEnum::admindown {3, "admindown"};
const Enum::YLeaf BfdRemoteStateTypeEnum::invalid {4, "invalid"};

const Enum::YLeaf BfdLspTypeEnum::working {0, "working"};
const Enum::YLeaf BfdLspTypeEnum::protect {1, "protect"};
const Enum::YLeaf BfdLspTypeEnum::unknown {2, "unknown"};

const Enum::YLeaf BfdOperSessionTypeEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf BfdOperSessionTypeEnum::ipv6 {1, "ipv6"};
const Enum::YLeaf BfdOperSessionTypeEnum::vccv {2, "vccv"};
const Enum::YLeaf BfdOperSessionTypeEnum::mpls_tp {3, "mpls-tp"};
const Enum::YLeaf BfdOperSessionTypeEnum::ipv4_multihop {4, "ipv4-multihop"};
const Enum::YLeaf BfdOperSessionTypeEnum::ipv6_multihop {5, "ipv6-multihop"};

const Enum::YLeaf BfdStateTypeEnum::admindown {0, "admindown"};
const Enum::YLeaf BfdStateTypeEnum::down {1, "down"};
const Enum::YLeaf BfdStateTypeEnum::fail {2, "fail"};
const Enum::YLeaf BfdStateTypeEnum::init {3, "init"};
const Enum::YLeaf BfdStateTypeEnum::up {4, "up"};
const Enum::YLeaf BfdStateTypeEnum::invalid {5, "invalid"};


}
}

