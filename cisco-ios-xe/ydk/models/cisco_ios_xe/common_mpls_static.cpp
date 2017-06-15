
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "common_mpls_static.hpp"

namespace ydk {
namespace common_mpls_static {

NexthopResolutionTypeIdentity::NexthopResolutionTypeIdentity()
     : Identity("common-mpls-static:nexthop-resolution-type")
{
}

NexthopResolutionTypeIdentity::~NexthopResolutionTypeIdentity()
{
}

LspTypeIdentity::LspTypeIdentity()
     : Identity("common-mpls-static:lsp-type")
{
}

LspTypeIdentity::~LspTypeIdentity()
{
}

MplsStatic::MplsStatic()
    :
    mpls_static_cfg_(std::make_shared<MplsStatic::MplsStaticCfg>())
	,mpls_static_state_(std::make_shared<MplsStatic::MplsStaticState>())
{
    mpls_static_cfg_->parent = this;

    mpls_static_state_->parent = this;

    yang_name = "mpls-static"; yang_parent_name = "common-mpls-static";
}

MplsStatic::~MplsStatic()
{
}

bool MplsStatic::has_data() const
{
    return (mpls_static_cfg_ !=  nullptr && mpls_static_cfg_->has_data())
	|| (mpls_static_state_ !=  nullptr && mpls_static_state_->has_data());
}

bool MplsStatic::has_operation() const
{
    return is_set(operation)
	|| (mpls_static_cfg_ !=  nullptr && mpls_static_cfg_->has_operation())
	|| (mpls_static_state_ !=  nullptr && mpls_static_state_->has_operation());
}

std::string MplsStatic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-mpls-static:mpls-static";

    return path_buffer.str();

}

const EntityPath MplsStatic::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsStatic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-static-cfg")
    {
        if(mpls_static_cfg_ == nullptr)
        {
            mpls_static_cfg_ = std::make_shared<MplsStatic::MplsStaticCfg>();
        }
        return mpls_static_cfg_;
    }

    if(child_yang_name == "mpls-static-state")
    {
        if(mpls_static_state_ == nullptr)
        {
            mpls_static_state_ = std::make_shared<MplsStatic::MplsStaticState>();
        }
        return mpls_static_state_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_static_cfg_ != nullptr)
    {
        children["mpls-static-cfg"] = mpls_static_cfg_;
    }

    if(mpls_static_state_ != nullptr)
    {
        children["mpls-static-state"] = mpls_static_state_;
    }

    return children;
}

void MplsStatic::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> MplsStatic::clone_ptr() const
{
    return std::make_shared<MplsStatic>();
}

std::string MplsStatic::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string MplsStatic::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function MplsStatic::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

MplsStatic::MplsStaticCfg::MplsStaticCfg()
    :
    in_label_lsps_(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps>())
	,interfaces_(std::make_shared<MplsStatic::MplsStaticCfg::Interfaces>())
	,ipv4_ingress_lsps_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps>())
	,ipv6_ingress_lsps_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps>())
	,named_lsps_(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps>())
{
    in_label_lsps_->parent = this;

    interfaces_->parent = this;

    ipv4_ingress_lsps_->parent = this;

    ipv6_ingress_lsps_->parent = this;

    named_lsps_->parent = this;

    yang_name = "mpls-static-cfg"; yang_parent_name = "mpls-static";
}

MplsStatic::MplsStaticCfg::~MplsStaticCfg()
{
}

bool MplsStatic::MplsStaticCfg::has_data() const
{
    return (in_label_lsps_ !=  nullptr && in_label_lsps_->has_data())
	|| (interfaces_ !=  nullptr && interfaces_->has_data())
	|| (ipv4_ingress_lsps_ !=  nullptr && ipv4_ingress_lsps_->has_data())
	|| (ipv6_ingress_lsps_ !=  nullptr && ipv6_ingress_lsps_->has_data())
	|| (named_lsps_ !=  nullptr && named_lsps_->has_data());
}

bool MplsStatic::MplsStaticCfg::has_operation() const
{
    return is_set(operation)
	|| (in_label_lsps_ !=  nullptr && in_label_lsps_->has_operation())
	|| (interfaces_ !=  nullptr && interfaces_->has_operation())
	|| (ipv4_ingress_lsps_ !=  nullptr && ipv4_ingress_lsps_->has_operation())
	|| (ipv6_ingress_lsps_ !=  nullptr && ipv6_ingress_lsps_->has_operation())
	|| (named_lsps_ !=  nullptr && named_lsps_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-static-cfg";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "common-mpls-static:mpls-static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-label-lsps")
    {
        if(in_label_lsps_ == nullptr)
        {
            in_label_lsps_ = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps>();
        }
        return in_label_lsps_;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces_ == nullptr)
        {
            interfaces_ = std::make_shared<MplsStatic::MplsStaticCfg::Interfaces>();
        }
        return interfaces_;
    }

    if(child_yang_name == "ipv4-ingress-lsps")
    {
        if(ipv4_ingress_lsps_ == nullptr)
        {
            ipv4_ingress_lsps_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps>();
        }
        return ipv4_ingress_lsps_;
    }

    if(child_yang_name == "ipv6-ingress-lsps")
    {
        if(ipv6_ingress_lsps_ == nullptr)
        {
            ipv6_ingress_lsps_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps>();
        }
        return ipv6_ingress_lsps_;
    }

    if(child_yang_name == "named-lsps")
    {
        if(named_lsps_ == nullptr)
        {
            named_lsps_ = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps>();
        }
        return named_lsps_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in_label_lsps_ != nullptr)
    {
        children["in-label-lsps"] = in_label_lsps_;
    }

    if(interfaces_ != nullptr)
    {
        children["interfaces"] = interfaces_;
    }

    if(ipv4_ingress_lsps_ != nullptr)
    {
        children["ipv4-ingress-lsps"] = ipv4_ingress_lsps_;
    }

    if(ipv6_ingress_lsps_ != nullptr)
    {
        children["ipv6-ingress-lsps"] = ipv6_ingress_lsps_;
    }

    if(named_lsps_ != nullptr)
    {
        children["named-lsps"] = named_lsps_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsps()
{
    yang_name = "ipv4-ingress-lsps"; yang_parent_name = "mpls-static-cfg";
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::~Ipv4IngressLsps()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::has_data() const
{
    for (std::size_t index=0; index<ipv4_ingress_lsp_.size(); index++)
    {
        if(ipv4_ingress_lsp_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::has_operation() const
{
    for (std::size_t index=0; index<ipv4_ingress_lsp_.size(); index++)
    {
        if(ipv4_ingress_lsp_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-ingress-lsps";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv4IngressLsps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-ingress-lsp")
    {
        for(auto const & c : ipv4_ingress_lsp_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp>();
        c->parent = this;
        ipv4_ingress_lsp_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_ingress_lsp_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Ipv4IngressLsp()
    :
    vrf_name{YType::str, "vrf-name"},
    prefix{YType::str, "prefix"},
    in_label{YType::str, "in-label"},
    name{YType::str, "name"}
    	,
    path_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path>())
{
    path_->parent = this;

    yang_name = "ipv4-ingress-lsp"; yang_parent_name = "ipv4-ingress-lsps";
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::~Ipv4IngressLsp()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::has_data() const
{
    return vrf_name.is_set
	|| prefix.is_set
	|| in_label.is_set
	|| name.is_set
	|| (path_ !=  nullptr && path_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(prefix.operation)
	|| is_set(in_label.operation)
	|| is_set(name.operation)
	|| (path_ !=  nullptr && path_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-ingress-lsp" <<"[vrf-name='" <<vrf_name <<"']" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/ipv4-ingress-lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.operation)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path_ == nullptr)
        {
            path_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path>();
        }
        return path_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_ != nullptr)
    {
        children["path"] = path_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "in-label")
    {
        in_label = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Path()
    :
    auto_protect{YType::boolean, "auto-protect"}
    	,
    operations_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations>())
{
    operations_->parent = this;

    yang_name = "path"; yang_parent_name = "ipv4-ingress-lsp";
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::~Path()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::has_data() const
{
    for (std::size_t index=0; index<next_hop_.size(); index++)
    {
        if(next_hop_[index]->has_data())
            return true;
    }
    return auto_protect.is_set
	|| (operations_ !=  nullptr && operations_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::has_operation() const
{
    for (std::size_t index=0; index<next_hop_.size(); index++)
    {
        if(next_hop_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(auto_protect.operation)
	|| (operations_ !=  nullptr && operations_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_protect.is_set || is_set(auto_protect.operation)) leaf_name_data.push_back(auto_protect.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        for(auto const & c : next_hop_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop>();
        c->parent = this;
        next_hop_.push_back(c);
        return c;
    }

    if(child_yang_name == "operations")
    {
        if(operations_ == nullptr)
        {
            operations_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations>();
        }
        return operations_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : next_hop_)
    {
        children[c->get_segment_path()] = c;
    }

    if(operations_ != nullptr)
    {
        children["operations"] = operations_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-protect")
    {
        auto_protect = value;
    }
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Operations()
    :
    pop_and_forward{YType::empty, "pop-and-forward"},
    preserve{YType::empty, "preserve"}
    	,
    push_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push>())
	,swap_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap>())
{
    push_->parent = this;

    swap_->parent = this;

    yang_name = "operations"; yang_parent_name = "path";
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::has_data() const
{
    return pop_and_forward.is_set
	|| preserve.is_set
	|| (push_ !=  nullptr && push_->has_data())
	|| (swap_ !=  nullptr && swap_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::has_operation() const
{
    return is_set(operation)
	|| is_set(pop_and_forward.operation)
	|| is_set(preserve.operation)
	|| (push_ !=  nullptr && push_->has_operation())
	|| (swap_ !=  nullptr && swap_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Operations' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pop_and_forward.is_set || is_set(pop_and_forward.operation)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());
    if (preserve.is_set || is_set(preserve.operation)) leaf_name_data.push_back(preserve.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "push")
    {
        if(push_ == nullptr)
        {
            push_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push>();
        }
        return push_;
    }

    if(child_yang_name == "swap")
    {
        if(swap_ == nullptr)
        {
            swap_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap>();
        }
        return swap_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(push_ != nullptr)
    {
        children["push"] = push_;
    }

    if(swap_ != nullptr)
    {
        children["swap"] = swap_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
    }
    if(value_path == "preserve")
    {
        preserve = value;
    }
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Swap()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack>())
{
    stack_->parent = this;

    yang_name = "swap"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Swap' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "swap";
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Swap::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Push()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack>())
{
    stack_->parent = this;

    yang_name = "push"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Push' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "push";
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::Operations::Push::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHop()
    :
    index_{YType::uint32, "index"},
    protected_by{YType::uint32, "protected-by"},
    type{YType::enumeration, "type"}
    	,
    next_hop_type_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType>())
	,operations_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations>())
{
    next_hop_type_->parent = this;

    operations_->parent = this;

    yang_name = "next-hop"; yang_parent_name = "path";
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::~NextHop()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::has_data() const
{
    return index_.is_set
	|| protected_by.is_set
	|| type.is_set
	|| (next_hop_type_ !=  nullptr && next_hop_type_->has_data())
	|| (operations_ !=  nullptr && operations_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(protected_by.operation)
	|| is_set(type.operation)
	|| (next_hop_type_ !=  nullptr && next_hop_type_->has_operation())
	|| (operations_ !=  nullptr && operations_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (protected_by.is_set || is_set(protected_by.operation)) leaf_name_data.push_back(protected_by.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-type")
    {
        if(next_hop_type_ == nullptr)
        {
            next_hop_type_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType>();
        }
        return next_hop_type_;
    }

    if(child_yang_name == "operations")
    {
        if(operations_ == nullptr)
        {
            operations_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations>();
        }
        return operations_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_type_ != nullptr)
    {
        children["next-hop-type"] = next_hop_type_;
    }

    if(operations_ != nullptr)
    {
        children["operations"] = operations_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "protected-by")
    {
        protected_by = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::NextHopType()
    :
    if_index{YType::uint32, "if-index"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"},
    out_interface_name{YType::str, "out-interface-name"}
{
    yang_name = "next-hop-type"; yang_parent_name = "next-hop";
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::~NextHopType()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::has_data() const
{
    return if_index.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set
	|| out_interface_name.is_set;
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::has_operation() const
{
    return is_set(operation)
	|| is_set(if_index.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(mac_address.operation)
	|| is_set(out_interface_name.operation);
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-type";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHopType' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (out_interface_name.is_set || is_set(out_interface_name.operation)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::NextHopType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "if-index")
    {
        if_index = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
    }
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Operations()
    :
    pop_and_forward{YType::empty, "pop-and-forward"},
    preserve{YType::empty, "preserve"}
    	,
    push_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push>())
	,swap_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap>())
{
    push_->parent = this;

    swap_->parent = this;

    yang_name = "operations"; yang_parent_name = "next-hop";
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::has_data() const
{
    return pop_and_forward.is_set
	|| preserve.is_set
	|| (push_ !=  nullptr && push_->has_data())
	|| (swap_ !=  nullptr && swap_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::has_operation() const
{
    return is_set(operation)
	|| is_set(pop_and_forward.operation)
	|| is_set(preserve.operation)
	|| (push_ !=  nullptr && push_->has_operation())
	|| (swap_ !=  nullptr && swap_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Operations' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pop_and_forward.is_set || is_set(pop_and_forward.operation)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());
    if (preserve.is_set || is_set(preserve.operation)) leaf_name_data.push_back(preserve.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "push")
    {
        if(push_ == nullptr)
        {
            push_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push>();
        }
        return push_;
    }

    if(child_yang_name == "swap")
    {
        if(swap_ == nullptr)
        {
            swap_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap>();
        }
        return swap_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(push_ != nullptr)
    {
        children["push"] = push_;
    }

    if(swap_ != nullptr)
    {
        children["swap"] = swap_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
    }
    if(value_path == "preserve")
    {
        preserve = value;
    }
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Push()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack>())
{
    stack_->parent = this;

    yang_name = "push"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Push' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "push";
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Push::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Swap()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack>())
{
    stack_->parent = this;

    yang_name = "swap"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Swap' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "swap";
}

MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv4IngressLsps::Ipv4IngressLsp::Path::NextHop::Operations::Swap::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticCfg::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "mpls-static-cfg";
}

MplsStatic::MplsStaticCfg::Interfaces::~Interfaces()
{
}

bool MplsStatic::MplsStaticCfg::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface_.size(); index++)
    {
        if(interface_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface_.size(); index++)
    {
        if(interface_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::MplsStaticCfg::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::Interfaces::Interface>();
        c->parent = this;
        interface_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::Interfaces::Interface::Interface()
    :
    name{YType::str, "name"},
    enabled{YType::uint32, "enabled"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsStatic::MplsStaticCfg::Interfaces::Interface::~Interface()
{
}

bool MplsStatic::MplsStaticCfg::Interfaces::Interface::has_data() const
{
    return name.is_set
	|| enabled.is_set;
}

bool MplsStatic::MplsStaticCfg::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(enabled.operation);
}

std::string MplsStatic::MplsStaticCfg::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsps()
{
    yang_name = "ipv6-ingress-lsps"; yang_parent_name = "mpls-static-cfg";
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::~Ipv6IngressLsps()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::has_data() const
{
    for (std::size_t index=0; index<ipv6_ingress_lsp_.size(); index++)
    {
        if(ipv6_ingress_lsp_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::has_operation() const
{
    for (std::size_t index=0; index<ipv6_ingress_lsp_.size(); index++)
    {
        if(ipv6_ingress_lsp_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-ingress-lsps";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv6IngressLsps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-ingress-lsp")
    {
        for(auto const & c : ipv6_ingress_lsp_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp>();
        c->parent = this;
        ipv6_ingress_lsp_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_ingress_lsp_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Ipv6IngressLsp()
    :
    vrf_name{YType::str, "vrf-name"},
    prefix{YType::str, "prefix"},
    in_label{YType::str, "in-label"},
    name{YType::str, "name"}
    	,
    path_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path>())
{
    path_->parent = this;

    yang_name = "ipv6-ingress-lsp"; yang_parent_name = "ipv6-ingress-lsps";
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::~Ipv6IngressLsp()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::has_data() const
{
    return vrf_name.is_set
	|| prefix.is_set
	|| in_label.is_set
	|| name.is_set
	|| (path_ !=  nullptr && path_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(prefix.operation)
	|| is_set(in_label.operation)
	|| is_set(name.operation)
	|| (path_ !=  nullptr && path_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-ingress-lsp" <<"[vrf-name='" <<vrf_name <<"']" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/ipv6-ingress-lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.operation)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path_ == nullptr)
        {
            path_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path>();
        }
        return path_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_ != nullptr)
    {
        children["path"] = path_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "in-label")
    {
        in_label = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Path()
    :
    auto_protect{YType::boolean, "auto-protect"}
    	,
    operations_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations>())
{
    operations_->parent = this;

    yang_name = "path"; yang_parent_name = "ipv6-ingress-lsp";
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::~Path()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::has_data() const
{
    for (std::size_t index=0; index<next_hop_.size(); index++)
    {
        if(next_hop_[index]->has_data())
            return true;
    }
    return auto_protect.is_set
	|| (operations_ !=  nullptr && operations_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::has_operation() const
{
    for (std::size_t index=0; index<next_hop_.size(); index++)
    {
        if(next_hop_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(auto_protect.operation)
	|| (operations_ !=  nullptr && operations_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_protect.is_set || is_set(auto_protect.operation)) leaf_name_data.push_back(auto_protect.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        for(auto const & c : next_hop_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop>();
        c->parent = this;
        next_hop_.push_back(c);
        return c;
    }

    if(child_yang_name == "operations")
    {
        if(operations_ == nullptr)
        {
            operations_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations>();
        }
        return operations_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : next_hop_)
    {
        children[c->get_segment_path()] = c;
    }

    if(operations_ != nullptr)
    {
        children["operations"] = operations_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-protect")
    {
        auto_protect = value;
    }
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Operations()
    :
    pop_and_forward{YType::empty, "pop-and-forward"},
    preserve{YType::empty, "preserve"}
    	,
    push_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push>())
	,swap_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap>())
{
    push_->parent = this;

    swap_->parent = this;

    yang_name = "operations"; yang_parent_name = "path";
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::has_data() const
{
    return pop_and_forward.is_set
	|| preserve.is_set
	|| (push_ !=  nullptr && push_->has_data())
	|| (swap_ !=  nullptr && swap_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::has_operation() const
{
    return is_set(operation)
	|| is_set(pop_and_forward.operation)
	|| is_set(preserve.operation)
	|| (push_ !=  nullptr && push_->has_operation())
	|| (swap_ !=  nullptr && swap_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Operations' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pop_and_forward.is_set || is_set(pop_and_forward.operation)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());
    if (preserve.is_set || is_set(preserve.operation)) leaf_name_data.push_back(preserve.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "push")
    {
        if(push_ == nullptr)
        {
            push_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push>();
        }
        return push_;
    }

    if(child_yang_name == "swap")
    {
        if(swap_ == nullptr)
        {
            swap_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap>();
        }
        return swap_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(push_ != nullptr)
    {
        children["push"] = push_;
    }

    if(swap_ != nullptr)
    {
        children["swap"] = swap_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
    }
    if(value_path == "preserve")
    {
        preserve = value;
    }
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Swap()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack>())
{
    stack_->parent = this;

    yang_name = "swap"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Swap' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "swap";
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Swap::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Push()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack>())
{
    stack_->parent = this;

    yang_name = "push"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Push' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "push";
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::Operations::Push::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHop()
    :
    index_{YType::uint32, "index"},
    protected_by{YType::uint32, "protected-by"},
    type{YType::enumeration, "type"}
    	,
    next_hop_type_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType>())
	,operations_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations>())
{
    next_hop_type_->parent = this;

    operations_->parent = this;

    yang_name = "next-hop"; yang_parent_name = "path";
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::~NextHop()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::has_data() const
{
    return index_.is_set
	|| protected_by.is_set
	|| type.is_set
	|| (next_hop_type_ !=  nullptr && next_hop_type_->has_data())
	|| (operations_ !=  nullptr && operations_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(protected_by.operation)
	|| is_set(type.operation)
	|| (next_hop_type_ !=  nullptr && next_hop_type_->has_operation())
	|| (operations_ !=  nullptr && operations_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (protected_by.is_set || is_set(protected_by.operation)) leaf_name_data.push_back(protected_by.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-type")
    {
        if(next_hop_type_ == nullptr)
        {
            next_hop_type_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType>();
        }
        return next_hop_type_;
    }

    if(child_yang_name == "operations")
    {
        if(operations_ == nullptr)
        {
            operations_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations>();
        }
        return operations_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_type_ != nullptr)
    {
        children["next-hop-type"] = next_hop_type_;
    }

    if(operations_ != nullptr)
    {
        children["operations"] = operations_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "protected-by")
    {
        protected_by = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::NextHopType()
    :
    if_index{YType::uint32, "if-index"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"},
    out_interface_name{YType::str, "out-interface-name"}
{
    yang_name = "next-hop-type"; yang_parent_name = "next-hop";
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::~NextHopType()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::has_data() const
{
    return if_index.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set
	|| out_interface_name.is_set;
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::has_operation() const
{
    return is_set(operation)
	|| is_set(if_index.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(mac_address.operation)
	|| is_set(out_interface_name.operation);
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-type";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHopType' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (out_interface_name.is_set || is_set(out_interface_name.operation)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::NextHopType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "if-index")
    {
        if_index = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
    }
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Operations()
    :
    pop_and_forward{YType::empty, "pop-and-forward"},
    preserve{YType::empty, "preserve"}
    	,
    push_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push>())
	,swap_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap>())
{
    push_->parent = this;

    swap_->parent = this;

    yang_name = "operations"; yang_parent_name = "next-hop";
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::has_data() const
{
    return pop_and_forward.is_set
	|| preserve.is_set
	|| (push_ !=  nullptr && push_->has_data())
	|| (swap_ !=  nullptr && swap_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::has_operation() const
{
    return is_set(operation)
	|| is_set(pop_and_forward.operation)
	|| is_set(preserve.operation)
	|| (push_ !=  nullptr && push_->has_operation())
	|| (swap_ !=  nullptr && swap_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Operations' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pop_and_forward.is_set || is_set(pop_and_forward.operation)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());
    if (preserve.is_set || is_set(preserve.operation)) leaf_name_data.push_back(preserve.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "push")
    {
        if(push_ == nullptr)
        {
            push_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push>();
        }
        return push_;
    }

    if(child_yang_name == "swap")
    {
        if(swap_ == nullptr)
        {
            swap_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap>();
        }
        return swap_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(push_ != nullptr)
    {
        children["push"] = push_;
    }

    if(swap_ != nullptr)
    {
        children["swap"] = swap_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
    }
    if(value_path == "preserve")
    {
        preserve = value;
    }
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Swap()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack>())
{
    stack_->parent = this;

    yang_name = "swap"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Swap' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "swap";
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Swap::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Push()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack>())
{
    stack_->parent = this;

    yang_name = "push"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Push' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "push";
}

MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::Ipv6IngressLsps::Ipv6IngressLsp::Path::NextHop::Operations::Push::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsps()
{
    yang_name = "named-lsps"; yang_parent_name = "mpls-static-cfg";
}

MplsStatic::MplsStaticCfg::NamedLsps::~NamedLsps()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::has_data() const
{
    for (std::size_t index=0; index<named_lsp_.size(); index++)
    {
        if(named_lsp_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::NamedLsps::has_operation() const
{
    for (std::size_t index=0; index<named_lsp_.size(); index++)
    {
        if(named_lsp_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-lsps";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::NamedLsps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-lsp")
    {
        for(auto const & c : named_lsp_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp>();
        c->parent = this;
        named_lsp_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_lsp_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::NamedLsp()
    :
    vrf_name{YType::str, "vrf-name"},
    name{YType::str, "name"},
    in_label{YType::str, "in-label"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"},
    lsp_type{YType::identityref, "lsp-type"}
    	,
    path_(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path>())
{
    path_->parent = this;

    yang_name = "named-lsp"; yang_parent_name = "named-lsps";
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::~NamedLsp()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::has_data() const
{
    return vrf_name.is_set
	|| name.is_set
	|| in_label.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set
	|| lsp_type.is_set
	|| (path_ !=  nullptr && path_->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(name.operation)
	|| is_set(in_label.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation)
	|| is_set(lsp_type.operation)
	|| (path_ !=  nullptr && path_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-lsp" <<"[vrf-name='" <<vrf_name <<"']" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/named-lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.operation)) leaf_name_data.push_back(in_label.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());
    if (lsp_type.is_set || is_set(lsp_type.operation)) leaf_name_data.push_back(lsp_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path_ == nullptr)
        {
            path_ = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path>();
        }
        return path_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_ != nullptr)
    {
        children["path"] = path_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "in-label")
    {
        in_label = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
    if(value_path == "lsp-type")
    {
        lsp_type = value;
    }
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Path()
    :
    auto_protect{YType::boolean, "auto-protect"}
    	,
    operations_(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations>())
{
    operations_->parent = this;

    yang_name = "path"; yang_parent_name = "named-lsp";
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::~Path()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::has_data() const
{
    for (std::size_t index=0; index<next_hop_.size(); index++)
    {
        if(next_hop_[index]->has_data())
            return true;
    }
    return auto_protect.is_set
	|| (operations_ !=  nullptr && operations_->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::has_operation() const
{
    for (std::size_t index=0; index<next_hop_.size(); index++)
    {
        if(next_hop_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(auto_protect.operation)
	|| (operations_ !=  nullptr && operations_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_protect.is_set || is_set(auto_protect.operation)) leaf_name_data.push_back(auto_protect.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        for(auto const & c : next_hop_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop>();
        c->parent = this;
        next_hop_.push_back(c);
        return c;
    }

    if(child_yang_name == "operations")
    {
        if(operations_ == nullptr)
        {
            operations_ = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations>();
        }
        return operations_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : next_hop_)
    {
        children[c->get_segment_path()] = c;
    }

    if(operations_ != nullptr)
    {
        children["operations"] = operations_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-protect")
    {
        auto_protect = value;
    }
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Operations()
    :
    pop_and_forward{YType::empty, "pop-and-forward"},
    preserve{YType::empty, "preserve"}
    	,
    push_(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push>())
	,swap_(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap>())
{
    push_->parent = this;

    swap_->parent = this;

    yang_name = "operations"; yang_parent_name = "path";
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::has_data() const
{
    return pop_and_forward.is_set
	|| preserve.is_set
	|| (push_ !=  nullptr && push_->has_data())
	|| (swap_ !=  nullptr && swap_->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::has_operation() const
{
    return is_set(operation)
	|| is_set(pop_and_forward.operation)
	|| is_set(preserve.operation)
	|| (push_ !=  nullptr && push_->has_operation())
	|| (swap_ !=  nullptr && swap_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Operations' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pop_and_forward.is_set || is_set(pop_and_forward.operation)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());
    if (preserve.is_set || is_set(preserve.operation)) leaf_name_data.push_back(preserve.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "push")
    {
        if(push_ == nullptr)
        {
            push_ = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push>();
        }
        return push_;
    }

    if(child_yang_name == "swap")
    {
        if(swap_ == nullptr)
        {
            swap_ = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap>();
        }
        return swap_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(push_ != nullptr)
    {
        children["push"] = push_;
    }

    if(swap_ != nullptr)
    {
        children["swap"] = swap_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
    }
    if(value_path == "preserve")
    {
        preserve = value;
    }
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Swap()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack>())
{
    stack_->parent = this;

    yang_name = "swap"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Swap' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "swap";
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Swap::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Push()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack>())
{
    stack_->parent = this;

    yang_name = "push"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Push' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "push";
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::Operations::Push::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHop()
    :
    index_{YType::uint32, "index"},
    protected_by{YType::uint32, "protected-by"},
    type{YType::enumeration, "type"}
    	,
    next_hop_type_(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType>())
	,operations_(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations>())
{
    next_hop_type_->parent = this;

    operations_->parent = this;

    yang_name = "next-hop"; yang_parent_name = "path";
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::~NextHop()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::has_data() const
{
    return index_.is_set
	|| protected_by.is_set
	|| type.is_set
	|| (next_hop_type_ !=  nullptr && next_hop_type_->has_data())
	|| (operations_ !=  nullptr && operations_->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(protected_by.operation)
	|| is_set(type.operation)
	|| (next_hop_type_ !=  nullptr && next_hop_type_->has_operation())
	|| (operations_ !=  nullptr && operations_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (protected_by.is_set || is_set(protected_by.operation)) leaf_name_data.push_back(protected_by.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-type")
    {
        if(next_hop_type_ == nullptr)
        {
            next_hop_type_ = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType>();
        }
        return next_hop_type_;
    }

    if(child_yang_name == "operations")
    {
        if(operations_ == nullptr)
        {
            operations_ = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations>();
        }
        return operations_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_type_ != nullptr)
    {
        children["next-hop-type"] = next_hop_type_;
    }

    if(operations_ != nullptr)
    {
        children["operations"] = operations_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "protected-by")
    {
        protected_by = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::NextHopType()
    :
    if_index{YType::uint32, "if-index"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"},
    out_interface_name{YType::str, "out-interface-name"}
{
    yang_name = "next-hop-type"; yang_parent_name = "next-hop";
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::~NextHopType()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::has_data() const
{
    return if_index.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set
	|| out_interface_name.is_set;
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::has_operation() const
{
    return is_set(operation)
	|| is_set(if_index.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(mac_address.operation)
	|| is_set(out_interface_name.operation);
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-type";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHopType' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (out_interface_name.is_set || is_set(out_interface_name.operation)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::NextHopType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "if-index")
    {
        if_index = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
    }
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Operations()
    :
    pop_and_forward{YType::empty, "pop-and-forward"},
    preserve{YType::empty, "preserve"}
    	,
    push_(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push>())
	,swap_(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap>())
{
    push_->parent = this;

    swap_->parent = this;

    yang_name = "operations"; yang_parent_name = "next-hop";
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::has_data() const
{
    return pop_and_forward.is_set
	|| preserve.is_set
	|| (push_ !=  nullptr && push_->has_data())
	|| (swap_ !=  nullptr && swap_->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::has_operation() const
{
    return is_set(operation)
	|| is_set(pop_and_forward.operation)
	|| is_set(preserve.operation)
	|| (push_ !=  nullptr && push_->has_operation())
	|| (swap_ !=  nullptr && swap_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Operations' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pop_and_forward.is_set || is_set(pop_and_forward.operation)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());
    if (preserve.is_set || is_set(preserve.operation)) leaf_name_data.push_back(preserve.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "push")
    {
        if(push_ == nullptr)
        {
            push_ = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push>();
        }
        return push_;
    }

    if(child_yang_name == "swap")
    {
        if(swap_ == nullptr)
        {
            swap_ = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap>();
        }
        return swap_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(push_ != nullptr)
    {
        children["push"] = push_;
    }

    if(swap_ != nullptr)
    {
        children["swap"] = swap_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
    }
    if(value_path == "preserve")
    {
        preserve = value;
    }
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Swap()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack>())
{
    stack_->parent = this;

    yang_name = "swap"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Swap' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "swap";
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Swap::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Push()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack>())
{
    stack_->parent = this;

    yang_name = "push"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Push' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "push";
}

MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::NamedLsps::NamedLsp::Path::NextHop::Operations::Push::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsps()
{
    yang_name = "in-label-lsps"; yang_parent_name = "mpls-static-cfg";
}

MplsStatic::MplsStaticCfg::InLabelLsps::~InLabelLsps()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::has_data() const
{
    for (std::size_t index=0; index<in_label_lsp_.size(); index++)
    {
        if(in_label_lsp_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::has_operation() const
{
    for (std::size_t index=0; index<in_label_lsp_.size(); index++)
    {
        if(in_label_lsp_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-label-lsps";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::InLabelLsps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in-label-lsp")
    {
        for(auto const & c : in_label_lsp_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp>();
        c->parent = this;
        in_label_lsp_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : in_label_lsp_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::InLabelLsp()
    :
    vrf_name{YType::str, "vrf-name"},
    in_label{YType::str, "in-label"}
    	,
    path_(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path>())
{
    path_->parent = this;

    yang_name = "in-label-lsp"; yang_parent_name = "in-label-lsps";
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::~InLabelLsp()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::has_data() const
{
    return vrf_name.is_set
	|| in_label.is_set
	|| (path_ !=  nullptr && path_->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(in_label.operation)
	|| (path_ !=  nullptr && path_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-label-lsp" <<"[vrf-name='" <<vrf_name <<"']" <<"[in-label='" <<in_label <<"']";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "common-mpls-static:mpls-static/mpls-static-cfg/in-label-lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (in_label.is_set || is_set(in_label.operation)) leaf_name_data.push_back(in_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path_ == nullptr)
        {
            path_ = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path>();
        }
        return path_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_ != nullptr)
    {
        children["path"] = path_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "in-label")
    {
        in_label = value;
    }
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Path()
    :
    auto_protect{YType::boolean, "auto-protect"}
    	,
    operations_(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations>())
{
    operations_->parent = this;

    yang_name = "path"; yang_parent_name = "in-label-lsp";
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::~Path()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::has_data() const
{
    for (std::size_t index=0; index<next_hop_.size(); index++)
    {
        if(next_hop_[index]->has_data())
            return true;
    }
    return auto_protect.is_set
	|| (operations_ !=  nullptr && operations_->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::has_operation() const
{
    for (std::size_t index=0; index<next_hop_.size(); index++)
    {
        if(next_hop_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(auto_protect.operation)
	|| (operations_ !=  nullptr && operations_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_protect.is_set || is_set(auto_protect.operation)) leaf_name_data.push_back(auto_protect.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        for(auto const & c : next_hop_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop>();
        c->parent = this;
        next_hop_.push_back(c);
        return c;
    }

    if(child_yang_name == "operations")
    {
        if(operations_ == nullptr)
        {
            operations_ = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations>();
        }
        return operations_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : next_hop_)
    {
        children[c->get_segment_path()] = c;
    }

    if(operations_ != nullptr)
    {
        children["operations"] = operations_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-protect")
    {
        auto_protect = value;
    }
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Operations()
    :
    pop_and_forward{YType::empty, "pop-and-forward"},
    preserve{YType::empty, "preserve"}
    	,
    push_(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push>())
	,swap_(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap>())
{
    push_->parent = this;

    swap_->parent = this;

    yang_name = "operations"; yang_parent_name = "path";
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::has_data() const
{
    return pop_and_forward.is_set
	|| preserve.is_set
	|| (push_ !=  nullptr && push_->has_data())
	|| (swap_ !=  nullptr && swap_->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::has_operation() const
{
    return is_set(operation)
	|| is_set(pop_and_forward.operation)
	|| is_set(preserve.operation)
	|| (push_ !=  nullptr && push_->has_operation())
	|| (swap_ !=  nullptr && swap_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Operations' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pop_and_forward.is_set || is_set(pop_and_forward.operation)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());
    if (preserve.is_set || is_set(preserve.operation)) leaf_name_data.push_back(preserve.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "push")
    {
        if(push_ == nullptr)
        {
            push_ = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push>();
        }
        return push_;
    }

    if(child_yang_name == "swap")
    {
        if(swap_ == nullptr)
        {
            swap_ = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap>();
        }
        return swap_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(push_ != nullptr)
    {
        children["push"] = push_;
    }

    if(swap_ != nullptr)
    {
        children["swap"] = swap_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
    }
    if(value_path == "preserve")
    {
        preserve = value;
    }
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Swap()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack>())
{
    stack_->parent = this;

    yang_name = "swap"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Swap' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "swap";
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Swap::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Push()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack>())
{
    stack_->parent = this;

    yang_name = "push"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Push' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "push";
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::Operations::Push::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHop()
    :
    index_{YType::uint32, "index"},
    protected_by{YType::uint32, "protected-by"},
    type{YType::enumeration, "type"}
    	,
    next_hop_type_(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType>())
	,operations_(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations>())
{
    next_hop_type_->parent = this;

    operations_->parent = this;

    yang_name = "next-hop"; yang_parent_name = "path";
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::~NextHop()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::has_data() const
{
    return index_.is_set
	|| protected_by.is_set
	|| type.is_set
	|| (next_hop_type_ !=  nullptr && next_hop_type_->has_data())
	|| (operations_ !=  nullptr && operations_->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(protected_by.operation)
	|| is_set(type.operation)
	|| (next_hop_type_ !=  nullptr && next_hop_type_->has_operation())
	|| (operations_ !=  nullptr && operations_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (protected_by.is_set || is_set(protected_by.operation)) leaf_name_data.push_back(protected_by.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-type")
    {
        if(next_hop_type_ == nullptr)
        {
            next_hop_type_ = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType>();
        }
        return next_hop_type_;
    }

    if(child_yang_name == "operations")
    {
        if(operations_ == nullptr)
        {
            operations_ = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations>();
        }
        return operations_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_type_ != nullptr)
    {
        children["next-hop-type"] = next_hop_type_;
    }

    if(operations_ != nullptr)
    {
        children["operations"] = operations_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "protected-by")
    {
        protected_by = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::NextHopType()
    :
    if_index{YType::uint32, "if-index"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"},
    out_interface_name{YType::str, "out-interface-name"}
{
    yang_name = "next-hop-type"; yang_parent_name = "next-hop";
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::~NextHopType()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::has_data() const
{
    return if_index.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set
	|| out_interface_name.is_set;
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::has_operation() const
{
    return is_set(operation)
	|| is_set(if_index.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(mac_address.operation)
	|| is_set(out_interface_name.operation);
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-type";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHopType' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (out_interface_name.is_set || is_set(out_interface_name.operation)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::NextHopType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "if-index")
    {
        if_index = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
    }
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Operations()
    :
    pop_and_forward{YType::empty, "pop-and-forward"},
    preserve{YType::empty, "preserve"}
    	,
    push_(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push>())
	,swap_(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap>())
{
    push_->parent = this;

    swap_->parent = this;

    yang_name = "operations"; yang_parent_name = "next-hop";
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::has_data() const
{
    return pop_and_forward.is_set
	|| preserve.is_set
	|| (push_ !=  nullptr && push_->has_data())
	|| (swap_ !=  nullptr && swap_->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::has_operation() const
{
    return is_set(operation)
	|| is_set(pop_and_forward.operation)
	|| is_set(preserve.operation)
	|| (push_ !=  nullptr && push_->has_operation())
	|| (swap_ !=  nullptr && swap_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Operations' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pop_and_forward.is_set || is_set(pop_and_forward.operation)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());
    if (preserve.is_set || is_set(preserve.operation)) leaf_name_data.push_back(preserve.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "push")
    {
        if(push_ == nullptr)
        {
            push_ = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push>();
        }
        return push_;
    }

    if(child_yang_name == "swap")
    {
        if(swap_ == nullptr)
        {
            swap_ = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap>();
        }
        return swap_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(push_ != nullptr)
    {
        children["push"] = push_;
    }

    if(swap_ != nullptr)
    {
        children["swap"] = swap_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
    }
    if(value_path == "preserve")
    {
        preserve = value;
    }
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Swap()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack>())
{
    stack_->parent = this;

    yang_name = "swap"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Swap' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "swap";
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Swap::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Push()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack>())
{
    stack_->parent = this;

    yang_name = "push"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Push' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "push";
}

MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticCfg::InLabelLsps::InLabelLsp::Path::NextHop::Operations::Push::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticState::MplsStaticState()
    :
    label_switched_paths_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths>())
{
    label_switched_paths_->parent = this;

    yang_name = "mpls-static-state"; yang_parent_name = "mpls-static";
}

MplsStatic::MplsStaticState::~MplsStaticState()
{
}

bool MplsStatic::MplsStaticState::has_data() const
{
    return (label_switched_paths_ !=  nullptr && label_switched_paths_->has_data());
}

bool MplsStatic::MplsStaticState::has_operation() const
{
    return is_set(operation)
	|| (label_switched_paths_ !=  nullptr && label_switched_paths_->has_operation());
}

std::string MplsStatic::MplsStaticState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-static-state";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "common-mpls-static:mpls-static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-switched-paths")
    {
        if(label_switched_paths_ == nullptr)
        {
            label_switched_paths_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths>();
        }
        return label_switched_paths_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_switched_paths_ != nullptr)
    {
        children["label-switched-paths"] = label_switched_paths_;
    }

    return children;
}

void MplsStatic::MplsStaticState::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPaths()
{
    yang_name = "label-switched-paths"; yang_parent_name = "mpls-static-state";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::~LabelSwitchedPaths()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::has_data() const
{
    for (std::size_t index=0; index<label_switched_path_.size(); index++)
    {
        if(label_switched_path_[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::has_operation() const
{
    for (std::size_t index=0; index<label_switched_path_.size(); index++)
    {
        if(label_switched_path_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-switched-paths";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "common-mpls-static:mpls-static/mpls-static-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-switched-path")
    {
        for(auto const & c : label_switched_path_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath>();
        c->parent = this;
        label_switched_path_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_switched_path_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::LabelSwitchedPath()
    :
    vrf_name{YType::str, "vrf-name"},
    prefix{YType::str, "prefix"},
    in_label_value{YType::str, "in-label-value"},
    name{YType::str, "name"}
    	,
    egress_stats_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats>())
	,ingress_stats_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats>())
	,path_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path>())
{
    egress_stats_->parent = this;

    ingress_stats_->parent = this;

    path_->parent = this;

    yang_name = "label-switched-path"; yang_parent_name = "label-switched-paths";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::~LabelSwitchedPath()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::has_data() const
{
    return vrf_name.is_set
	|| prefix.is_set
	|| in_label_value.is_set
	|| name.is_set
	|| (egress_stats_ !=  nullptr && egress_stats_->has_data())
	|| (ingress_stats_ !=  nullptr && ingress_stats_->has_data())
	|| (path_ !=  nullptr && path_->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(prefix.operation)
	|| is_set(in_label_value.operation)
	|| is_set(name.operation)
	|| (egress_stats_ !=  nullptr && egress_stats_->has_operation())
	|| (ingress_stats_ !=  nullptr && ingress_stats_->has_operation())
	|| (path_ !=  nullptr && path_->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-switched-path" <<"[vrf-name='" <<vrf_name <<"']" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "common-mpls-static:mpls-static/mpls-static-state/label-switched-paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (in_label_value.is_set || is_set(in_label_value.operation)) leaf_name_data.push_back(in_label_value.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "egress-stats")
    {
        if(egress_stats_ == nullptr)
        {
            egress_stats_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats>();
        }
        return egress_stats_;
    }

    if(child_yang_name == "ingress-stats")
    {
        if(ingress_stats_ == nullptr)
        {
            ingress_stats_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats>();
        }
        return ingress_stats_;
    }

    if(child_yang_name == "path")
    {
        if(path_ == nullptr)
        {
            path_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path>();
        }
        return path_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(egress_stats_ != nullptr)
    {
        children["egress-stats"] = egress_stats_;
    }

    if(ingress_stats_ != nullptr)
    {
        children["ingress-stats"] = ingress_stats_;
    }

    if(path_ != nullptr)
    {
        children["path"] = path_;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "in-label-value")
    {
        in_label_value = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::IngressStats()
    :
    stats_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats>())
{
    stats_->parent = this;

    yang_name = "ingress-stats"; yang_parent_name = "label-switched-path";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::~IngressStats()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::has_data() const
{
    return (stats_ !=  nullptr && stats_->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::has_operation() const
{
    return is_set(operation)
	|| (stats_ !=  nullptr && stats_->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-stats";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IngressStats' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats_ == nullptr)
        {
            stats_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats>();
        }
        return stats_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats_ != nullptr)
    {
        children["stats"] = stats_;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::Stats()
    :
    bytes{YType::uint64, "bytes"},
    dropped_bytes{YType::uint64, "dropped-bytes"},
    dropped_packets{YType::uint64, "dropped-packets"},
    packets{YType::uint64, "packets"}
{
    yang_name = "stats"; yang_parent_name = "ingress-stats";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::~Stats()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::has_data() const
{
    return bytes.is_set
	|| dropped_bytes.is_set
	|| dropped_packets.is_set
	|| packets.is_set;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(dropped_bytes.operation)
	|| is_set(dropped_packets.operation)
	|| is_set(packets.operation);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stats' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (dropped_bytes.is_set || is_set(dropped_bytes.operation)) leaf_name_data.push_back(dropped_bytes.get_name_leafdata());
    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::IngressStats::Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "dropped-bytes")
    {
        dropped_bytes = value;
    }
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::EgressStats()
    :
    stats_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats>())
{
    stats_->parent = this;

    yang_name = "egress-stats"; yang_parent_name = "label-switched-path";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::~EgressStats()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::has_data() const
{
    return (stats_ !=  nullptr && stats_->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::has_operation() const
{
    return is_set(operation)
	|| (stats_ !=  nullptr && stats_->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-stats";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EgressStats' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats_ == nullptr)
        {
            stats_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats>();
        }
        return stats_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats_ != nullptr)
    {
        children["stats"] = stats_;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::Stats()
    :
    bytes{YType::uint64, "bytes"},
    dropped_bytes{YType::uint64, "dropped-bytes"},
    dropped_packets{YType::uint64, "dropped-packets"},
    packets{YType::uint64, "packets"}
{
    yang_name = "stats"; yang_parent_name = "egress-stats";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::~Stats()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::has_data() const
{
    return bytes.is_set
	|| dropped_bytes.is_set
	|| dropped_packets.is_set
	|| packets.is_set;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(dropped_bytes.operation)
	|| is_set(dropped_packets.operation)
	|| is_set(packets.operation);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stats' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (dropped_bytes.is_set || is_set(dropped_bytes.operation)) leaf_name_data.push_back(dropped_bytes.get_name_leafdata());
    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::EgressStats::Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "dropped-bytes")
    {
        dropped_bytes = value;
    }
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Path()
    :
    auto_protect{YType::boolean, "auto-protect"}
    	,
    operations_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations>())
{
    operations_->parent = this;

    yang_name = "path"; yang_parent_name = "label-switched-path";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::~Path()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::has_data() const
{
    for (std::size_t index=0; index<next_hop_.size(); index++)
    {
        if(next_hop_[index]->has_data())
            return true;
    }
    return auto_protect.is_set
	|| (operations_ !=  nullptr && operations_->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::has_operation() const
{
    for (std::size_t index=0; index<next_hop_.size(); index++)
    {
        if(next_hop_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(auto_protect.operation)
	|| (operations_ !=  nullptr && operations_->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_protect.is_set || is_set(auto_protect.operation)) leaf_name_data.push_back(auto_protect.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        for(auto const & c : next_hop_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop>();
        c->parent = this;
        next_hop_.push_back(c);
        return c;
    }

    if(child_yang_name == "operations")
    {
        if(operations_ == nullptr)
        {
            operations_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations>();
        }
        return operations_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : next_hop_)
    {
        children[c->get_segment_path()] = c;
    }

    if(operations_ != nullptr)
    {
        children["operations"] = operations_;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-protect")
    {
        auto_protect = value;
    }
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Operations()
    :
    pop_and_forward{YType::empty, "pop-and-forward"},
    preserve{YType::empty, "preserve"}
    	,
    push_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push>())
	,swap_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap>())
{
    push_->parent = this;

    swap_->parent = this;

    yang_name = "operations"; yang_parent_name = "path";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::has_data() const
{
    return pop_and_forward.is_set
	|| preserve.is_set
	|| (push_ !=  nullptr && push_->has_data())
	|| (swap_ !=  nullptr && swap_->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::has_operation() const
{
    return is_set(operation)
	|| is_set(pop_and_forward.operation)
	|| is_set(preserve.operation)
	|| (push_ !=  nullptr && push_->has_operation())
	|| (swap_ !=  nullptr && swap_->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Operations' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pop_and_forward.is_set || is_set(pop_and_forward.operation)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());
    if (preserve.is_set || is_set(preserve.operation)) leaf_name_data.push_back(preserve.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "push")
    {
        if(push_ == nullptr)
        {
            push_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push>();
        }
        return push_;
    }

    if(child_yang_name == "swap")
    {
        if(swap_ == nullptr)
        {
            swap_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap>();
        }
        return swap_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(push_ != nullptr)
    {
        children["push"] = push_;
    }

    if(swap_ != nullptr)
    {
        children["swap"] = swap_;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
    }
    if(value_path == "preserve")
    {
        preserve = value;
    }
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Swap()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack>())
{
    stack_->parent = this;

    yang_name = "swap"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Swap' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "swap";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Swap::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Push()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack>())
{
    stack_->parent = this;

    yang_name = "push"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Push' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "push";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::Operations::Push::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHop()
    :
    index_{YType::uint32, "index"},
    origin{YType::identityref, "origin"},
    protected_by{YType::uint32, "protected-by"},
    type{YType::enumeration, "type"}
    	,
    next_hop_type_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType>())
	,nexthop_stats_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats>())
	,operations_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations>())
{
    next_hop_type_->parent = this;

    nexthop_stats_->parent = this;

    operations_->parent = this;

    yang_name = "next-hop"; yang_parent_name = "path";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::~NextHop()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::has_data() const
{
    return index_.is_set
	|| origin.is_set
	|| protected_by.is_set
	|| type.is_set
	|| (next_hop_type_ !=  nullptr && next_hop_type_->has_data())
	|| (nexthop_stats_ !=  nullptr && nexthop_stats_->has_data())
	|| (operations_ !=  nullptr && operations_->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(origin.operation)
	|| is_set(protected_by.operation)
	|| is_set(type.operation)
	|| (next_hop_type_ !=  nullptr && next_hop_type_->has_operation())
	|| (nexthop_stats_ !=  nullptr && nexthop_stats_->has_operation())
	|| (operations_ !=  nullptr && operations_->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop" <<"[index='" <<index_ <<"']";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (protected_by.is_set || is_set(protected_by.operation)) leaf_name_data.push_back(protected_by.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-type")
    {
        if(next_hop_type_ == nullptr)
        {
            next_hop_type_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType>();
        }
        return next_hop_type_;
    }

    if(child_yang_name == "nexthop-stats")
    {
        if(nexthop_stats_ == nullptr)
        {
            nexthop_stats_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats>();
        }
        return nexthop_stats_;
    }

    if(child_yang_name == "operations")
    {
        if(operations_ == nullptr)
        {
            operations_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations>();
        }
        return operations_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_type_ != nullptr)
    {
        children["next-hop-type"] = next_hop_type_;
    }

    if(nexthop_stats_ != nullptr)
    {
        children["nexthop-stats"] = nexthop_stats_;
    }

    if(operations_ != nullptr)
    {
        children["operations"] = operations_;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
    if(value_path == "protected-by")
    {
        protected_by = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::NextHopType()
    :
    if_index{YType::uint32, "if-index"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"},
    out_interface_name{YType::str, "out-interface-name"}
{
    yang_name = "next-hop-type"; yang_parent_name = "next-hop";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::~NextHopType()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::has_data() const
{
    return if_index.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set
	|| out_interface_name.is_set;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::has_operation() const
{
    return is_set(operation)
	|| is_set(if_index.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(mac_address.operation)
	|| is_set(out_interface_name.operation);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-type";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHopType' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_index.is_set || is_set(if_index.operation)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (out_interface_name.is_set || is_set(out_interface_name.operation)) leaf_name_data.push_back(out_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NextHopType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "if-index")
    {
        if_index = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "out-interface-name")
    {
        out_interface_name = value;
    }
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Operations()
    :
    pop_and_forward{YType::empty, "pop-and-forward"},
    preserve{YType::empty, "preserve"}
    	,
    push_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push>())
	,swap_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap>())
{
    push_->parent = this;

    swap_->parent = this;

    yang_name = "operations"; yang_parent_name = "next-hop";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::~Operations()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::has_data() const
{
    return pop_and_forward.is_set
	|| preserve.is_set
	|| (push_ !=  nullptr && push_->has_data())
	|| (swap_ !=  nullptr && swap_->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::has_operation() const
{
    return is_set(operation)
	|| is_set(pop_and_forward.operation)
	|| is_set(preserve.operation)
	|| (push_ !=  nullptr && push_->has_operation())
	|| (swap_ !=  nullptr && swap_->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "operations";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Operations' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pop_and_forward.is_set || is_set(pop_and_forward.operation)) leaf_name_data.push_back(pop_and_forward.get_name_leafdata());
    if (preserve.is_set || is_set(preserve.operation)) leaf_name_data.push_back(preserve.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "push")
    {
        if(push_ == nullptr)
        {
            push_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push>();
        }
        return push_;
    }

    if(child_yang_name == "swap")
    {
        if(swap_ == nullptr)
        {
            swap_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap>();
        }
        return swap_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(push_ != nullptr)
    {
        children["push"] = push_;
    }

    if(swap_ != nullptr)
    {
        children["swap"] = swap_;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pop-and-forward")
    {
        pop_and_forward = value;
    }
    if(value_path == "preserve")
    {
        preserve = value;
    }
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Swap()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack>())
{
    stack_->parent = this;

    yang_name = "swap"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::~Swap()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "swap";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Swap' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "swap";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Swap::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Push()
    :
    stack_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack>())
{
    stack_->parent = this;

    yang_name = "push"; yang_parent_name = "operations";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::~Push()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::has_data() const
{
    return (stack_ !=  nullptr && stack_->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::has_operation() const
{
    return is_set(operation)
	|| (stack_ !=  nullptr && stack_->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "push";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Push' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stack")
    {
        if(stack_ == nullptr)
        {
            stack_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack>();
        }
        return stack_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stack_ != nullptr)
    {
        children["stack"] = stack_;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::Stack()
    :
    label_stack{YType::str, "label-stack"}
{
    yang_name = "stack"; yang_parent_name = "push";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::~Stack()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::has_data() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::has_operation() const
{
    for (auto const & leaf : label_stack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(label_stack.operation);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto label_stack_name_datas = label_stack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), label_stack_name_datas.begin(), label_stack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::Operations::Push::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-stack")
    {
        label_stack.append(value);
    }
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::NexthopStats()
    :
    stats_(std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats>())
{
    stats_->parent = this;

    yang_name = "nexthop-stats"; yang_parent_name = "next-hop";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::~NexthopStats()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::has_data() const
{
    return (stats_ !=  nullptr && stats_->has_data());
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::has_operation() const
{
    return is_set(operation)
	|| (stats_ !=  nullptr && stats_->has_operation());
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-stats";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NexthopStats' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats_ == nullptr)
        {
            stats_ = std::make_shared<MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats>();
        }
        return stats_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats_ != nullptr)
    {
        children["stats"] = stats_;
    }

    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::Stats()
    :
    bytes{YType::uint64, "bytes"},
    dropped_bytes{YType::uint64, "dropped-bytes"},
    dropped_packets{YType::uint64, "dropped-packets"},
    packets{YType::uint64, "packets"}
{
    yang_name = "stats"; yang_parent_name = "nexthop-stats";
}

MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::~Stats()
{
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::has_data() const
{
    return bytes.is_set
	|| dropped_bytes.is_set
	|| dropped_packets.is_set
	|| packets.is_set;
}

bool MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes.operation)
	|| is_set(dropped_bytes.operation)
	|| is_set(dropped_packets.operation)
	|| is_set(packets.operation);
}

std::string MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

const EntityPath MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stats' in common_mpls_static cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes.is_set || is_set(bytes.operation)) leaf_name_data.push_back(bytes.get_name_leafdata());
    if (dropped_bytes.is_set || is_set(dropped_bytes.operation)) leaf_name_data.push_back(dropped_bytes.get_name_leafdata());
    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());
    if (packets.is_set || is_set(packets.operation)) leaf_name_data.push_back(packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::MplsStaticState::LabelSwitchedPaths::LabelSwitchedPath::Path::NextHop::NexthopStats::Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes")
    {
        bytes = value;
    }
    if(value_path == "dropped-bytes")
    {
        dropped_bytes = value;
    }
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
    if(value_path == "packets")
    {
        packets = value;
    }
}

BgpRouteNexthopIdentity::BgpRouteNexthopIdentity()
     : Identity("common-mpls-static:bgp-route-nexthop")
{
}

BgpRouteNexthopIdentity::~BgpRouteNexthopIdentity()
{
}

IsisRouteNexthopIdentity::IsisRouteNexthopIdentity()
     : Identity("common-mpls-static:isis-route-nexthop")
{
}

IsisRouteNexthopIdentity::~IsisRouteNexthopIdentity()
{
}

StaticNexthopIdentity::StaticNexthopIdentity()
     : Identity("common-mpls-static:static-nexthop")
{
}

StaticNexthopIdentity::~StaticNexthopIdentity()
{
}

LspIpv6Identity::LspIpv6Identity()
     : Identity("common-mpls-static:lsp-IPv6")
{
}

LspIpv6Identity::~LspIpv6Identity()
{
}

LspIpv4Identity::LspIpv4Identity()
     : Identity("common-mpls-static:lsp-IPv4")
{
}

LspIpv4Identity::~LspIpv4Identity()
{
}

OspfRouteNexthopIdentity::OspfRouteNexthopIdentity()
     : Identity("common-mpls-static:ospf-route-nexthop")
{
}

OspfRouteNexthopIdentity::~OspfRouteNexthopIdentity()
{
}

LspIdentity::LspIdentity()
     : Identity("common-mpls-static:lsp")
{
}

LspIdentity::~LspIdentity()
{
}

LspVrfIdentity::LspVrfIdentity()
     : Identity("common-mpls-static:lsp-vrf")
{
}

LspVrfIdentity::~LspVrfIdentity()
{
}

const Enum::YLeaf HoptypeEnum::PRIMARY {0, "PRIMARY"};
const Enum::YLeaf HoptypeEnum::BACKUP {1, "BACKUP"};


}
}

