
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_static_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_static_oper {

MplsStatic::MplsStatic()
    :
    local_labels(std::make_shared<MplsStatic::LocalLabels>())
	,summary(std::make_shared<MplsStatic::Summary>())
	,vrfs(std::make_shared<MplsStatic::Vrfs>())
{
    local_labels->parent = this;

    summary->parent = this;

    vrfs->parent = this;

    yang_name = "mpls-static"; yang_parent_name = "Cisco-IOS-XR-mpls-static-oper";
}

MplsStatic::~MplsStatic()
{
}

bool MplsStatic::has_data() const
{
    return (local_labels !=  nullptr && local_labels->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool MplsStatic::has_operation() const
{
    return is_set(operation)
	|| (local_labels !=  nullptr && local_labels->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string MplsStatic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static";

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
    if(child_yang_name == "local-labels")
    {
        if(local_labels == nullptr)
        {
            local_labels = std::make_shared<MplsStatic::LocalLabels>();
        }
        return local_labels;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsStatic::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<MplsStatic::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_labels != nullptr)
    {
        children["local-labels"] = local_labels;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
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
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsStatic::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsStatic::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

MplsStatic::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "mpls-static";
}

MplsStatic::Vrfs::~Vrfs()
{
}

bool MplsStatic::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    local_labels(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels>())
	,lsps(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps>())
{
    local_labels->parent = this;

    lsps->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

MplsStatic::Vrfs::Vrf::~Vrf()
{
}

bool MplsStatic::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (local_labels !=  nullptr && local_labels->has_data())
	|| (lsps !=  nullptr && lsps->has_data());
}

bool MplsStatic::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (local_labels !=  nullptr && local_labels->has_operation())
	|| (lsps !=  nullptr && lsps->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-labels")
    {
        if(local_labels == nullptr)
        {
            local_labels = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels>();
        }
        return local_labels;
    }

    if(child_yang_name == "lsps")
    {
        if(lsps == nullptr)
        {
            lsps = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps>();
        }
        return lsps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_labels != nullptr)
    {
        children["local-labels"] = local_labels;
    }

    if(lsps != nullptr)
    {
        children["lsps"] = lsps;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

MplsStatic::Vrfs::Vrf::Lsps::Lsps()
{
    yang_name = "lsps"; yang_parent_name = "vrf";
}

MplsStatic::Vrfs::Vrf::Lsps::~Lsps()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::has_data() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::Lsps::has_operation() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::Vrfs::Vrf::Lsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsps";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::Lsps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsps' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Lsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        for(auto const & c : lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp>();
        c->parent = this;
        lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Lsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Lsp()
    :
    lsp_name{YType::str, "lsp-name"},
    lsp_name_xr{YType::str, "lsp-name-xr"}
    	,
    label(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label>())
{
    label->parent = this;

    yang_name = "lsp"; yang_parent_name = "lsps";
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::~Lsp()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::has_data() const
{
    return lsp_name.is_set
	|| lsp_name_xr.is_set
	|| (label !=  nullptr && label->has_data());
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::has_operation() const
{
    return is_set(operation)
	|| is_set(lsp_name.operation)
	|| is_set(lsp_name_xr.operation)
	|| (label !=  nullptr && label->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp" <<"[lsp-name='" <<lsp_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::Lsps::Lsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsp' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_name.is_set || is_set(lsp_name.operation)) leaf_name_data.push_back(lsp_name.get_name_leafdata());
    if (lsp_name_xr.is_set || is_set(lsp_name_xr.operation)) leaf_name_data.push_back(lsp_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label>();
        }
        return label;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label != nullptr)
    {
        children["label"] = label;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-name")
    {
        lsp_name = value;
    }
    if(value_path == "lsp-name-xr")
    {
        lsp_name_xr = value;
    }
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Label()
    :
    address_family{YType::enumeration, "address-family"},
    backup_pathset_via_resolve{YType::boolean, "backup-pathset-via-resolve"},
    label{YType::uint32, "label"},
    label_mode{YType::enumeration, "label-mode"},
    label_status{YType::enumeration, "label-status"},
    pathset_via_resolve{YType::boolean, "pathset-via-resolve"},
    vrf_name{YType::str, "vrf-name"}
    	,
    backup_pathset_resolve_nh(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh>())
	,pathset_resolve_nh(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh>())
	,prefix(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix>())
{
    backup_pathset_resolve_nh->parent = this;

    pathset_resolve_nh->parent = this;

    prefix->parent = this;

    yang_name = "label"; yang_parent_name = "lsp";
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::~Label()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::has_data() const
{
    for (std::size_t index=0; index<backup_path_info.size(); index++)
    {
        if(backup_path_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_info.size(); index++)
    {
        if(path_info[index]->has_data())
            return true;
    }
    return address_family.is_set
	|| backup_pathset_via_resolve.is_set
	|| label.is_set
	|| label_mode.is_set
	|| label_status.is_set
	|| pathset_via_resolve.is_set
	|| vrf_name.is_set
	|| (backup_pathset_resolve_nh !=  nullptr && backup_pathset_resolve_nh->has_data())
	|| (pathset_resolve_nh !=  nullptr && pathset_resolve_nh->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::has_operation() const
{
    for (std::size_t index=0; index<backup_path_info.size(); index++)
    {
        if(backup_path_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_info.size(); index++)
    {
        if(path_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(backup_pathset_via_resolve.operation)
	|| is_set(label.operation)
	|| is_set(label_mode.operation)
	|| is_set(label_status.operation)
	|| is_set(pathset_via_resolve.operation)
	|| is_set(vrf_name.operation)
	|| (backup_pathset_resolve_nh !=  nullptr && backup_pathset_resolve_nh->has_operation())
	|| (pathset_resolve_nh !=  nullptr && pathset_resolve_nh->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Label' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (backup_pathset_via_resolve.is_set || is_set(backup_pathset_via_resolve.operation)) leaf_name_data.push_back(backup_pathset_via_resolve.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (label_mode.is_set || is_set(label_mode.operation)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (label_status.is_set || is_set(label_status.operation)) leaf_name_data.push_back(label_status.get_name_leafdata());
    if (pathset_via_resolve.is_set || is_set(pathset_via_resolve.operation)) leaf_name_data.push_back(pathset_via_resolve.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-path-info")
    {
        for(auto const & c : backup_path_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo>();
        c->parent = this;
        backup_path_info.push_back(c);
        return c;
    }

    if(child_yang_name == "backup-pathset-resolve-nh")
    {
        if(backup_pathset_resolve_nh == nullptr)
        {
            backup_pathset_resolve_nh = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh>();
        }
        return backup_pathset_resolve_nh;
    }

    if(child_yang_name == "path-info")
    {
        for(auto const & c : path_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo>();
        c->parent = this;
        path_info.push_back(c);
        return c;
    }

    if(child_yang_name == "pathset-resolve-nh")
    {
        if(pathset_resolve_nh == nullptr)
        {
            pathset_resolve_nh = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh>();
        }
        return pathset_resolve_nh;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_path_info)
    {
        children[c->get_segment_path()] = c;
    }

    if(backup_pathset_resolve_nh != nullptr)
    {
        children["backup-pathset-resolve-nh"] = backup_pathset_resolve_nh;
    }

    for (auto const & c : path_info)
    {
        children[c->get_segment_path()] = c;
    }

    if(pathset_resolve_nh != nullptr)
    {
        children["pathset-resolve-nh"] = pathset_resolve_nh;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "backup-pathset-via-resolve")
    {
        backup_pathset_via_resolve = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "label-mode")
    {
        label_mode = value;
    }
    if(value_path == "label-status")
    {
        label_status = value;
    }
    if(value_path == "pathset-via-resolve")
    {
        pathset_via_resolve = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix()
    :
    prefix_length{YType::uint8, "prefix-length"}
    	,
    prefix(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_>())
{
    prefix->parent = this;

    yang_name = "prefix"; yang_parent_name = "label";
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::~Prefix()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::Prefix_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "prefix"; yang_parent_name = "prefix";
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::~Prefix_()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix_' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::Prefix::Prefix_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::PathsetResolveNh()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "pathset-resolve-nh"; yang_parent_name = "label";
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::~PathsetResolveNh()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pathset-resolve-nh";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathsetResolveNh' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathsetResolveNh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::BackupPathsetResolveNh()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "backup-pathset-resolve-nh"; yang_parent_name = "label";
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::~BackupPathsetResolveNh()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pathset-resolve-nh";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPathsetResolveNh' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathsetResolveNh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::PathInfo()
    :
    backup_id{YType::uint8, "backup-id"},
    path_id{YType::uint8, "path-id"},
    path_number{YType::uint32, "path-number"},
    path_role{YType::enumeration, "path-role"},
    status{YType::enumeration, "status"},
    type{YType::enumeration, "type"}
    	,
    nexthop(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop>())
{
    nexthop->parent = this;

    yang_name = "path-info"; yang_parent_name = "label";
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::~PathInfo()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::has_data() const
{
    return backup_id.is_set
	|| path_id.is_set
	|| path_number.is_set
	|| path_role.is_set
	|| status.is_set
	|| type.is_set
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_id.operation)
	|| is_set(path_id.operation)
	|| is_set(path_number.operation)
	|| is_set(path_role.operation)
	|| is_set(status.operation)
	|| is_set(type.operation)
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-info";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathInfo' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_id.is_set || is_set(backup_id.operation)) leaf_name_data.push_back(backup_id.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_number.is_set || is_set(path_number.operation)) leaf_name_data.push_back(path_number.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.operation)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-id")
    {
        backup_id = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "path-number")
    {
        path_number = value;
    }
    if(value_path == "path-role")
    {
        path_role = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Nexthop()
    :
    afi{YType::uint32, "afi"},
    interface_name{YType::str, "interface-name"},
    label{YType::uint32, "label"}
    	,
    address(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address>())
{
    address->parent = this;

    yang_name = "nexthop"; yang_parent_name = "path-info";
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::~Nexthop()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::has_data() const
{
    return afi.is_set
	|| interface_name.is_set
	|| label.is_set
	|| (address !=  nullptr && address->has_data());
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(interface_name.operation)
	|| is_set(label.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nexthop' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "address"; yang_parent_name = "nexthop";
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::~Address()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::PathInfo::Nexthop::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::BackupPathInfo()
    :
    backup_id{YType::uint8, "backup-id"},
    path_id{YType::uint8, "path-id"},
    path_number{YType::uint32, "path-number"},
    path_role{YType::enumeration, "path-role"},
    status{YType::enumeration, "status"},
    type{YType::enumeration, "type"}
    	,
    nexthop(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop>())
{
    nexthop->parent = this;

    yang_name = "backup-path-info"; yang_parent_name = "label";
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::~BackupPathInfo()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::has_data() const
{
    return backup_id.is_set
	|| path_id.is_set
	|| path_number.is_set
	|| path_role.is_set
	|| status.is_set
	|| type.is_set
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_id.operation)
	|| is_set(path_id.operation)
	|| is_set(path_number.operation)
	|| is_set(path_role.operation)
	|| is_set(status.operation)
	|| is_set(type.operation)
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-path-info";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPathInfo' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_id.is_set || is_set(backup_id.operation)) leaf_name_data.push_back(backup_id.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_number.is_set || is_set(path_number.operation)) leaf_name_data.push_back(path_number.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.operation)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-id")
    {
        backup_id = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "path-number")
    {
        path_number = value;
    }
    if(value_path == "path-role")
    {
        path_role = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Nexthop()
    :
    afi{YType::uint32, "afi"},
    interface_name{YType::str, "interface-name"},
    label{YType::uint32, "label"}
    	,
    address(std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address>())
{
    address->parent = this;

    yang_name = "nexthop"; yang_parent_name = "backup-path-info";
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::~Nexthop()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::has_data() const
{
    return afi.is_set
	|| interface_name.is_set
	|| label.is_set
	|| (address !=  nullptr && address->has_data());
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(interface_name.operation)
	|| is_set(label.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nexthop' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "address"; yang_parent_name = "nexthop";
}

MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::~Address()
{
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Vrfs::Vrf::Lsps::Lsp::Label::BackupPathInfo::Nexthop::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabels()
{
    yang_name = "local-labels"; yang_parent_name = "vrf";
}

MplsStatic::Vrfs::Vrf::LocalLabels::~LocalLabels()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::has_data() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::has_operation() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-labels";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::LocalLabels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalLabels' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LocalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-label")
    {
        for(auto const & c : local_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel>();
        c->parent = this;
        local_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::LocalLabel()
    :
    local_label_id{YType::uint32, "local-label-id"},
    address_family{YType::enumeration, "address-family"},
    backup_pathset_via_resolve{YType::boolean, "backup-pathset-via-resolve"},
    label{YType::uint32, "label"},
    label_mode{YType::enumeration, "label-mode"},
    label_status{YType::enumeration, "label-status"},
    pathset_via_resolve{YType::boolean, "pathset-via-resolve"},
    vrf_name{YType::str, "vrf-name"}
    	,
    backup_pathset_resolve_nh(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh>())
	,pathset_resolve_nh(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh>())
	,prefix(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix>())
{
    backup_pathset_resolve_nh->parent = this;

    pathset_resolve_nh->parent = this;

    prefix->parent = this;

    yang_name = "local-label"; yang_parent_name = "local-labels";
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::~LocalLabel()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::has_data() const
{
    for (std::size_t index=0; index<backup_path_info.size(); index++)
    {
        if(backup_path_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_info.size(); index++)
    {
        if(path_info[index]->has_data())
            return true;
    }
    return local_label_id.is_set
	|| address_family.is_set
	|| backup_pathset_via_resolve.is_set
	|| label.is_set
	|| label_mode.is_set
	|| label_status.is_set
	|| pathset_via_resolve.is_set
	|| vrf_name.is_set
	|| (backup_pathset_resolve_nh !=  nullptr && backup_pathset_resolve_nh->has_data())
	|| (pathset_resolve_nh !=  nullptr && pathset_resolve_nh->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::has_operation() const
{
    for (std::size_t index=0; index<backup_path_info.size(); index++)
    {
        if(backup_path_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_info.size(); index++)
    {
        if(path_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_label_id.operation)
	|| is_set(address_family.operation)
	|| is_set(backup_pathset_via_resolve.operation)
	|| is_set(label.operation)
	|| is_set(label_mode.operation)
	|| is_set(label_status.operation)
	|| is_set(pathset_via_resolve.operation)
	|| is_set(vrf_name.operation)
	|| (backup_pathset_resolve_nh !=  nullptr && backup_pathset_resolve_nh->has_operation())
	|| (pathset_resolve_nh !=  nullptr && pathset_resolve_nh->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label" <<"[local-label-id='" <<local_label_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalLabel' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label_id.is_set || is_set(local_label_id.operation)) leaf_name_data.push_back(local_label_id.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (backup_pathset_via_resolve.is_set || is_set(backup_pathset_via_resolve.operation)) leaf_name_data.push_back(backup_pathset_via_resolve.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (label_mode.is_set || is_set(label_mode.operation)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (label_status.is_set || is_set(label_status.operation)) leaf_name_data.push_back(label_status.get_name_leafdata());
    if (pathset_via_resolve.is_set || is_set(pathset_via_resolve.operation)) leaf_name_data.push_back(pathset_via_resolve.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-path-info")
    {
        for(auto const & c : backup_path_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo>();
        c->parent = this;
        backup_path_info.push_back(c);
        return c;
    }

    if(child_yang_name == "backup-pathset-resolve-nh")
    {
        if(backup_pathset_resolve_nh == nullptr)
        {
            backup_pathset_resolve_nh = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh>();
        }
        return backup_pathset_resolve_nh;
    }

    if(child_yang_name == "path-info")
    {
        for(auto const & c : path_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo>();
        c->parent = this;
        path_info.push_back(c);
        return c;
    }

    if(child_yang_name == "pathset-resolve-nh")
    {
        if(pathset_resolve_nh == nullptr)
        {
            pathset_resolve_nh = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh>();
        }
        return pathset_resolve_nh;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_path_info)
    {
        children[c->get_segment_path()] = c;
    }

    if(backup_pathset_resolve_nh != nullptr)
    {
        children["backup-pathset-resolve-nh"] = backup_pathset_resolve_nh;
    }

    for (auto const & c : path_info)
    {
        children[c->get_segment_path()] = c;
    }

    if(pathset_resolve_nh != nullptr)
    {
        children["pathset-resolve-nh"] = pathset_resolve_nh;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-label-id")
    {
        local_label_id = value;
    }
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "backup-pathset-via-resolve")
    {
        backup_pathset_via_resolve = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "label-mode")
    {
        label_mode = value;
    }
    if(value_path == "label-status")
    {
        label_status = value;
    }
    if(value_path == "pathset-via-resolve")
    {
        pathset_via_resolve = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix()
    :
    prefix_length{YType::uint8, "prefix-length"}
    	,
    prefix(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_>())
{
    prefix->parent = this;

    yang_name = "prefix"; yang_parent_name = "local-label";
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::~Prefix()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::Prefix_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "prefix"; yang_parent_name = "prefix";
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::~Prefix_()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix_' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::Prefix::Prefix_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::PathsetResolveNh()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "pathset-resolve-nh"; yang_parent_name = "local-label";
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::~PathsetResolveNh()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pathset-resolve-nh";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathsetResolveNh' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathsetResolveNh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::BackupPathsetResolveNh()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "backup-pathset-resolve-nh"; yang_parent_name = "local-label";
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::~BackupPathsetResolveNh()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pathset-resolve-nh";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPathsetResolveNh' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathsetResolveNh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::PathInfo()
    :
    backup_id{YType::uint8, "backup-id"},
    path_id{YType::uint8, "path-id"},
    path_number{YType::uint32, "path-number"},
    path_role{YType::enumeration, "path-role"},
    status{YType::enumeration, "status"},
    type{YType::enumeration, "type"}
    	,
    nexthop(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop>())
{
    nexthop->parent = this;

    yang_name = "path-info"; yang_parent_name = "local-label";
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::~PathInfo()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::has_data() const
{
    return backup_id.is_set
	|| path_id.is_set
	|| path_number.is_set
	|| path_role.is_set
	|| status.is_set
	|| type.is_set
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_id.operation)
	|| is_set(path_id.operation)
	|| is_set(path_number.operation)
	|| is_set(path_role.operation)
	|| is_set(status.operation)
	|| is_set(type.operation)
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-info";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathInfo' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_id.is_set || is_set(backup_id.operation)) leaf_name_data.push_back(backup_id.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_number.is_set || is_set(path_number.operation)) leaf_name_data.push_back(path_number.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.operation)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-id")
    {
        backup_id = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "path-number")
    {
        path_number = value;
    }
    if(value_path == "path-role")
    {
        path_role = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Nexthop()
    :
    afi{YType::uint32, "afi"},
    interface_name{YType::str, "interface-name"},
    label{YType::uint32, "label"}
    	,
    address(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address>())
{
    address->parent = this;

    yang_name = "nexthop"; yang_parent_name = "path-info";
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::~Nexthop()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::has_data() const
{
    return afi.is_set
	|| interface_name.is_set
	|| label.is_set
	|| (address !=  nullptr && address->has_data());
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(interface_name.operation)
	|| is_set(label.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nexthop' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "address"; yang_parent_name = "nexthop";
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::~Address()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::BackupPathInfo()
    :
    backup_id{YType::uint8, "backup-id"},
    path_id{YType::uint8, "path-id"},
    path_number{YType::uint32, "path-number"},
    path_role{YType::enumeration, "path-role"},
    status{YType::enumeration, "status"},
    type{YType::enumeration, "type"}
    	,
    nexthop(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop>())
{
    nexthop->parent = this;

    yang_name = "backup-path-info"; yang_parent_name = "local-label";
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::~BackupPathInfo()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::has_data() const
{
    return backup_id.is_set
	|| path_id.is_set
	|| path_number.is_set
	|| path_role.is_set
	|| status.is_set
	|| type.is_set
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_id.operation)
	|| is_set(path_id.operation)
	|| is_set(path_number.operation)
	|| is_set(path_role.operation)
	|| is_set(status.operation)
	|| is_set(type.operation)
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-path-info";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPathInfo' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_id.is_set || is_set(backup_id.operation)) leaf_name_data.push_back(backup_id.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_number.is_set || is_set(path_number.operation)) leaf_name_data.push_back(path_number.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.operation)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-id")
    {
        backup_id = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "path-number")
    {
        path_number = value;
    }
    if(value_path == "path-role")
    {
        path_role = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Nexthop()
    :
    afi{YType::uint32, "afi"},
    interface_name{YType::str, "interface-name"},
    label{YType::uint32, "label"}
    	,
    address(std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address>())
{
    address->parent = this;

    yang_name = "nexthop"; yang_parent_name = "backup-path-info";
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::~Nexthop()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::has_data() const
{
    return afi.is_set
	|| interface_name.is_set
	|| label.is_set
	|| (address !=  nullptr && address->has_data());
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(interface_name.operation)
	|| is_set(label.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nexthop' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "address"; yang_parent_name = "nexthop";
}

MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::~Address()
{
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Vrfs::Vrf::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

MplsStatic::Summary::Summary()
    :
    active_vrf_count{YType::uint32, "active-vrf-count"},
    im_connected{YType::boolean, "im-connected"},
    interface_count{YType::uint32, "interface-count"},
    interface_foward_reference_count{YType::uint32, "interface-foward-reference-count"},
    ipv4_route_count{YType::uint32, "ipv4-route-count"},
    ipv6_route_count{YType::uint32, "ipv6-route-count"},
    label_count{YType::uint32, "label-count"},
    label_discrepancy_count{YType::uint32, "label-discrepancy-count"},
    label_error_count{YType::uint32, "label-error-count"},
    lsd_connected{YType::boolean, "lsd-connected"},
    mpls_enabled_interface_count{YType::uint32, "mpls-enabled-interface-count"},
    ribv4_connected{YType::boolean, "ribv4-connected"},
    ribv6_connected{YType::boolean, "ribv6-connected"},
    rsi_connected{YType::boolean, "rsi-connected"},
    vrf_count{YType::uint32, "vrf-count"}
{
    yang_name = "summary"; yang_parent_name = "mpls-static";
}

MplsStatic::Summary::~Summary()
{
}

bool MplsStatic::Summary::has_data() const
{
    return active_vrf_count.is_set
	|| im_connected.is_set
	|| interface_count.is_set
	|| interface_foward_reference_count.is_set
	|| ipv4_route_count.is_set
	|| ipv6_route_count.is_set
	|| label_count.is_set
	|| label_discrepancy_count.is_set
	|| label_error_count.is_set
	|| lsd_connected.is_set
	|| mpls_enabled_interface_count.is_set
	|| ribv4_connected.is_set
	|| ribv6_connected.is_set
	|| rsi_connected.is_set
	|| vrf_count.is_set;
}

bool MplsStatic::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(active_vrf_count.operation)
	|| is_set(im_connected.operation)
	|| is_set(interface_count.operation)
	|| is_set(interface_foward_reference_count.operation)
	|| is_set(ipv4_route_count.operation)
	|| is_set(ipv6_route_count.operation)
	|| is_set(label_count.operation)
	|| is_set(label_discrepancy_count.operation)
	|| is_set(label_error_count.operation)
	|| is_set(lsd_connected.operation)
	|| is_set(mpls_enabled_interface_count.operation)
	|| is_set(ribv4_connected.operation)
	|| is_set(ribv6_connected.operation)
	|| is_set(rsi_connected.operation)
	|| is_set(vrf_count.operation);
}

std::string MplsStatic::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath MplsStatic::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_vrf_count.is_set || is_set(active_vrf_count.operation)) leaf_name_data.push_back(active_vrf_count.get_name_leafdata());
    if (im_connected.is_set || is_set(im_connected.operation)) leaf_name_data.push_back(im_connected.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (interface_foward_reference_count.is_set || is_set(interface_foward_reference_count.operation)) leaf_name_data.push_back(interface_foward_reference_count.get_name_leafdata());
    if (ipv4_route_count.is_set || is_set(ipv4_route_count.operation)) leaf_name_data.push_back(ipv4_route_count.get_name_leafdata());
    if (ipv6_route_count.is_set || is_set(ipv6_route_count.operation)) leaf_name_data.push_back(ipv6_route_count.get_name_leafdata());
    if (label_count.is_set || is_set(label_count.operation)) leaf_name_data.push_back(label_count.get_name_leafdata());
    if (label_discrepancy_count.is_set || is_set(label_discrepancy_count.operation)) leaf_name_data.push_back(label_discrepancy_count.get_name_leafdata());
    if (label_error_count.is_set || is_set(label_error_count.operation)) leaf_name_data.push_back(label_error_count.get_name_leafdata());
    if (lsd_connected.is_set || is_set(lsd_connected.operation)) leaf_name_data.push_back(lsd_connected.get_name_leafdata());
    if (mpls_enabled_interface_count.is_set || is_set(mpls_enabled_interface_count.operation)) leaf_name_data.push_back(mpls_enabled_interface_count.get_name_leafdata());
    if (ribv4_connected.is_set || is_set(ribv4_connected.operation)) leaf_name_data.push_back(ribv4_connected.get_name_leafdata());
    if (ribv6_connected.is_set || is_set(ribv6_connected.operation)) leaf_name_data.push_back(ribv6_connected.get_name_leafdata());
    if (rsi_connected.is_set || is_set(rsi_connected.operation)) leaf_name_data.push_back(rsi_connected.get_name_leafdata());
    if (vrf_count.is_set || is_set(vrf_count.operation)) leaf_name_data.push_back(vrf_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-vrf-count")
    {
        active_vrf_count = value;
    }
    if(value_path == "im-connected")
    {
        im_connected = value;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
    if(value_path == "interface-foward-reference-count")
    {
        interface_foward_reference_count = value;
    }
    if(value_path == "ipv4-route-count")
    {
        ipv4_route_count = value;
    }
    if(value_path == "ipv6-route-count")
    {
        ipv6_route_count = value;
    }
    if(value_path == "label-count")
    {
        label_count = value;
    }
    if(value_path == "label-discrepancy-count")
    {
        label_discrepancy_count = value;
    }
    if(value_path == "label-error-count")
    {
        label_error_count = value;
    }
    if(value_path == "lsd-connected")
    {
        lsd_connected = value;
    }
    if(value_path == "mpls-enabled-interface-count")
    {
        mpls_enabled_interface_count = value;
    }
    if(value_path == "ribv4-connected")
    {
        ribv4_connected = value;
    }
    if(value_path == "ribv6-connected")
    {
        ribv6_connected = value;
    }
    if(value_path == "rsi-connected")
    {
        rsi_connected = value;
    }
    if(value_path == "vrf-count")
    {
        vrf_count = value;
    }
}

MplsStatic::LocalLabels::LocalLabels()
{
    yang_name = "local-labels"; yang_parent_name = "mpls-static";
}

MplsStatic::LocalLabels::~LocalLabels()
{
}

bool MplsStatic::LocalLabels::has_data() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_data())
            return true;
    }
    return false;
}

bool MplsStatic::LocalLabels::has_operation() const
{
    for (std::size_t index=0; index<local_label.size(); index++)
    {
        if(local_label[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsStatic::LocalLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-labels";

    return path_buffer.str();

}

const EntityPath MplsStatic::LocalLabels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::LocalLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-label")
    {
        for(auto const & c : local_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::LocalLabels::LocalLabel>();
        c->parent = this;
        local_label.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::LocalLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : local_label)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsStatic::LocalLabels::set_value(const std::string & value_path, std::string value)
{
}

MplsStatic::LocalLabels::LocalLabel::LocalLabel()
    :
    local_label_id{YType::uint32, "local-label-id"},
    address_family{YType::enumeration, "address-family"},
    backup_pathset_via_resolve{YType::boolean, "backup-pathset-via-resolve"},
    label{YType::uint32, "label"},
    label_mode{YType::enumeration, "label-mode"},
    label_status{YType::enumeration, "label-status"},
    pathset_via_resolve{YType::boolean, "pathset-via-resolve"},
    vrf_name{YType::str, "vrf-name"}
    	,
    backup_pathset_resolve_nh(std::make_shared<MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh>())
	,pathset_resolve_nh(std::make_shared<MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh>())
	,prefix(std::make_shared<MplsStatic::LocalLabels::LocalLabel::Prefix>())
{
    backup_pathset_resolve_nh->parent = this;

    pathset_resolve_nh->parent = this;

    prefix->parent = this;

    yang_name = "local-label"; yang_parent_name = "local-labels";
}

MplsStatic::LocalLabels::LocalLabel::~LocalLabel()
{
}

bool MplsStatic::LocalLabels::LocalLabel::has_data() const
{
    for (std::size_t index=0; index<backup_path_info.size(); index++)
    {
        if(backup_path_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path_info.size(); index++)
    {
        if(path_info[index]->has_data())
            return true;
    }
    return local_label_id.is_set
	|| address_family.is_set
	|| backup_pathset_via_resolve.is_set
	|| label.is_set
	|| label_mode.is_set
	|| label_status.is_set
	|| pathset_via_resolve.is_set
	|| vrf_name.is_set
	|| (backup_pathset_resolve_nh !=  nullptr && backup_pathset_resolve_nh->has_data())
	|| (pathset_resolve_nh !=  nullptr && pathset_resolve_nh->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool MplsStatic::LocalLabels::LocalLabel::has_operation() const
{
    for (std::size_t index=0; index<backup_path_info.size(); index++)
    {
        if(backup_path_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path_info.size(); index++)
    {
        if(path_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_label_id.operation)
	|| is_set(address_family.operation)
	|| is_set(backup_pathset_via_resolve.operation)
	|| is_set(label.operation)
	|| is_set(label_mode.operation)
	|| is_set(label_status.operation)
	|| is_set(pathset_via_resolve.operation)
	|| is_set(vrf_name.operation)
	|| (backup_pathset_resolve_nh !=  nullptr && backup_pathset_resolve_nh->has_operation())
	|| (pathset_resolve_nh !=  nullptr && pathset_resolve_nh->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string MplsStatic::LocalLabels::LocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label" <<"[local-label-id='" <<local_label_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsStatic::LocalLabels::LocalLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-static-oper:mpls-static/local-labels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label_id.is_set || is_set(local_label_id.operation)) leaf_name_data.push_back(local_label_id.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (backup_pathset_via_resolve.is_set || is_set(backup_pathset_via_resolve.operation)) leaf_name_data.push_back(backup_pathset_via_resolve.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (label_mode.is_set || is_set(label_mode.operation)) leaf_name_data.push_back(label_mode.get_name_leafdata());
    if (label_status.is_set || is_set(label_status.operation)) leaf_name_data.push_back(label_status.get_name_leafdata());
    if (pathset_via_resolve.is_set || is_set(pathset_via_resolve.operation)) leaf_name_data.push_back(pathset_via_resolve.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::LocalLabels::LocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-path-info")
    {
        for(auto const & c : backup_path_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::LocalLabels::LocalLabel::BackupPathInfo>();
        c->parent = this;
        backup_path_info.push_back(c);
        return c;
    }

    if(child_yang_name == "backup-pathset-resolve-nh")
    {
        if(backup_pathset_resolve_nh == nullptr)
        {
            backup_pathset_resolve_nh = std::make_shared<MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh>();
        }
        return backup_pathset_resolve_nh;
    }

    if(child_yang_name == "path-info")
    {
        for(auto const & c : path_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsStatic::LocalLabels::LocalLabel::PathInfo>();
        c->parent = this;
        path_info.push_back(c);
        return c;
    }

    if(child_yang_name == "pathset-resolve-nh")
    {
        if(pathset_resolve_nh == nullptr)
        {
            pathset_resolve_nh = std::make_shared<MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh>();
        }
        return pathset_resolve_nh;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<MplsStatic::LocalLabels::LocalLabel::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::LocalLabels::LocalLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : backup_path_info)
    {
        children[c->get_segment_path()] = c;
    }

    if(backup_pathset_resolve_nh != nullptr)
    {
        children["backup-pathset-resolve-nh"] = backup_pathset_resolve_nh;
    }

    for (auto const & c : path_info)
    {
        children[c->get_segment_path()] = c;
    }

    if(pathset_resolve_nh != nullptr)
    {
        children["pathset-resolve-nh"] = pathset_resolve_nh;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void MplsStatic::LocalLabels::LocalLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-label-id")
    {
        local_label_id = value;
    }
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "backup-pathset-via-resolve")
    {
        backup_pathset_via_resolve = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "label-mode")
    {
        label_mode = value;
    }
    if(value_path == "label-status")
    {
        label_status = value;
    }
    if(value_path == "pathset-via-resolve")
    {
        pathset_via_resolve = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix()
    :
    prefix_length{YType::uint8, "prefix-length"}
    	,
    prefix(std::make_shared<MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_>())
{
    prefix->parent = this;

    yang_name = "prefix"; yang_parent_name = "local-label";
}

MplsStatic::LocalLabels::LocalLabel::Prefix::~Prefix()
{
}

bool MplsStatic::LocalLabels::LocalLabel::Prefix::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool MplsStatic::LocalLabels::LocalLabel::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string MplsStatic::LocalLabels::LocalLabel::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath MplsStatic::LocalLabels::LocalLabel::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::LocalLabels::LocalLabel::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::LocalLabels::LocalLabel::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void MplsStatic::LocalLabels::LocalLabel::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::Prefix_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "prefix"; yang_parent_name = "prefix";
}

MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::~Prefix_()
{
}

bool MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix_' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::LocalLabels::LocalLabel::Prefix::Prefix_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::PathsetResolveNh()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "pathset-resolve-nh"; yang_parent_name = "local-label";
}

MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::~PathsetResolveNh()
{
}

bool MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pathset-resolve-nh";

    return path_buffer.str();

}

const EntityPath MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathsetResolveNh' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::LocalLabels::LocalLabel::PathsetResolveNh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::BackupPathsetResolveNh()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "backup-pathset-resolve-nh"; yang_parent_name = "local-label";
}

MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::~BackupPathsetResolveNh()
{
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pathset-resolve-nh";

    return path_buffer.str();

}

const EntityPath MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPathsetResolveNh' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::LocalLabels::LocalLabel::BackupPathsetResolveNh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

MplsStatic::LocalLabels::LocalLabel::PathInfo::PathInfo()
    :
    backup_id{YType::uint8, "backup-id"},
    path_id{YType::uint8, "path-id"},
    path_number{YType::uint32, "path-number"},
    path_role{YType::enumeration, "path-role"},
    status{YType::enumeration, "status"},
    type{YType::enumeration, "type"}
    	,
    nexthop(std::make_shared<MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop>())
{
    nexthop->parent = this;

    yang_name = "path-info"; yang_parent_name = "local-label";
}

MplsStatic::LocalLabels::LocalLabel::PathInfo::~PathInfo()
{
}

bool MplsStatic::LocalLabels::LocalLabel::PathInfo::has_data() const
{
    return backup_id.is_set
	|| path_id.is_set
	|| path_number.is_set
	|| path_role.is_set
	|| status.is_set
	|| type.is_set
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsStatic::LocalLabels::LocalLabel::PathInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_id.operation)
	|| is_set(path_id.operation)
	|| is_set(path_number.operation)
	|| is_set(path_role.operation)
	|| is_set(status.operation)
	|| is_set(type.operation)
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsStatic::LocalLabels::LocalLabel::PathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-info";

    return path_buffer.str();

}

const EntityPath MplsStatic::LocalLabels::LocalLabel::PathInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathInfo' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_id.is_set || is_set(backup_id.operation)) leaf_name_data.push_back(backup_id.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_number.is_set || is_set(path_number.operation)) leaf_name_data.push_back(path_number.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.operation)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::LocalLabels::LocalLabel::PathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::LocalLabels::LocalLabel::PathInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    return children;
}

void MplsStatic::LocalLabels::LocalLabel::PathInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-id")
    {
        backup_id = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "path-number")
    {
        path_number = value;
    }
    if(value_path == "path-role")
    {
        path_role = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Nexthop()
    :
    afi{YType::uint32, "afi"},
    interface_name{YType::str, "interface-name"},
    label{YType::uint32, "label"}
    	,
    address(std::make_shared<MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address>())
{
    address->parent = this;

    yang_name = "nexthop"; yang_parent_name = "path-info";
}

MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::~Nexthop()
{
}

bool MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::has_data() const
{
    return afi.is_set
	|| interface_name.is_set
	|| label.is_set
	|| (address !=  nullptr && address->has_data());
}

bool MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(interface_name.operation)
	|| is_set(label.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

const EntityPath MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nexthop' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
}

MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "address"; yang_parent_name = "nexthop";
}

MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::~Address()
{
}

bool MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::LocalLabels::LocalLabel::PathInfo::Nexthop::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::BackupPathInfo()
    :
    backup_id{YType::uint8, "backup-id"},
    path_id{YType::uint8, "path-id"},
    path_number{YType::uint32, "path-number"},
    path_role{YType::enumeration, "path-role"},
    status{YType::enumeration, "status"},
    type{YType::enumeration, "type"}
    	,
    nexthop(std::make_shared<MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop>())
{
    nexthop->parent = this;

    yang_name = "backup-path-info"; yang_parent_name = "local-label";
}

MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::~BackupPathInfo()
{
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::has_data() const
{
    return backup_id.is_set
	|| path_id.is_set
	|| path_number.is_set
	|| path_role.is_set
	|| status.is_set
	|| type.is_set
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_id.operation)
	|| is_set(path_id.operation)
	|| is_set(path_number.operation)
	|| is_set(path_role.operation)
	|| is_set(status.operation)
	|| is_set(type.operation)
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-path-info";

    return path_buffer.str();

}

const EntityPath MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPathInfo' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_id.is_set || is_set(backup_id.operation)) leaf_name_data.push_back(backup_id.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_number.is_set || is_set(path_number.operation)) leaf_name_data.push_back(path_number.get_name_leafdata());
    if (path_role.is_set || is_set(path_role.operation)) leaf_name_data.push_back(path_role.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    return children;
}

void MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-id")
    {
        backup_id = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "path-number")
    {
        path_number = value;
    }
    if(value_path == "path-role")
    {
        path_role = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Nexthop()
    :
    afi{YType::uint32, "afi"},
    interface_name{YType::str, "interface-name"},
    label{YType::uint32, "label"}
    	,
    address(std::make_shared<MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address>())
{
    address->parent = this;

    yang_name = "nexthop"; yang_parent_name = "backup-path-info";
}

MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::~Nexthop()
{
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::has_data() const
{
    return afi.is_set
	|| interface_name.is_set
	|| label.is_set
	|| (address !=  nullptr && address->has_data());
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(interface_name.operation)
	|| is_set(label.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

const EntityPath MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nexthop' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
}

MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{
    yang_name = "address"; yang_parent_name = "nexthop";
}

MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::~Address()
{
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(ipv6_prefix.operation);
}

std::string MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_mpls_static_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsStatic::LocalLabels::LocalLabel::BackupPathInfo::Nexthop::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

const Enum::YLeaf MgmtMplsStaticPathStatusEnum::path_next_hop_none {0, "path-next-hop-none"};
const Enum::YLeaf MgmtMplsStaticPathStatusEnum::path_next_hop_interface_down {1, "path-next-hop-interface-down"};
const Enum::YLeaf MgmtMplsStaticPathStatusEnum::path_next_hop_valid {2, "path-next-hop-valid"};
const Enum::YLeaf MgmtMplsStaticPathStatusEnum::resolve_failed {3, "resolve-failed"};
const Enum::YLeaf MgmtMplsStaticPathStatusEnum::frr_backup {4, "frr-backup"};
const Enum::YLeaf MgmtMplsStaticPathStatusEnum::backup {5, "backup"};

const Enum::YLeaf MgmtStaticPathEnum::cross_connect_path {0, "cross-connect-path"};
const Enum::YLeaf MgmtStaticPathEnum::pop_lookup_path {1, "pop-lookup-path"};

const Enum::YLeaf MgmtMplsStaticLabelModeEnum::none {0, "none"};
const Enum::YLeaf MgmtMplsStaticLabelModeEnum::per_prefix {1, "per-prefix"};
const Enum::YLeaf MgmtMplsStaticLabelModeEnum::per_vrf {2, "per-vrf"};
const Enum::YLeaf MgmtMplsStaticLabelModeEnum::cross_connect {3, "cross-connect"};

const Enum::YLeaf MgmtMplsStaticLabelStatusEnum::not_created {0, "not-created"};
const Enum::YLeaf MgmtMplsStaticLabelStatusEnum::vrf_down {1, "vrf-down"};
const Enum::YLeaf MgmtMplsStaticLabelStatusEnum::rewrite_vrf_down {2, "rewrite-vrf-down"};
const Enum::YLeaf MgmtMplsStaticLabelStatusEnum::lsd_disconnected {3, "lsd-disconnected"};
const Enum::YLeaf MgmtMplsStaticLabelStatusEnum::lsd_failed {4, "lsd-failed"};
const Enum::YLeaf MgmtMplsStaticLabelStatusEnum::wait_for_lsd_reply {5, "wait-for-lsd-reply"};
const Enum::YLeaf MgmtMplsStaticLabelStatusEnum::label_created {6, "label-created"};
const Enum::YLeaf MgmtMplsStaticLabelStatusEnum::label_create_failed {7, "label-create-failed"};
const Enum::YLeaf MgmtMplsStaticLabelStatusEnum::label_rewrite_failed {8, "label-rewrite-failed"};
const Enum::YLeaf MgmtMplsStaticLabelStatusEnum::rewrite_next_hop_interface_down {9, "rewrite-next-hop-interface-down"};
const Enum::YLeaf MgmtMplsStaticLabelStatusEnum::label_discrepancy {10, "label-discrepancy"};
const Enum::YLeaf MgmtMplsStaticLabelStatusEnum::rewrite_discrepancy {11, "rewrite-discrepancy"};
const Enum::YLeaf MgmtMplsStaticLabelStatusEnum::label_status_unknown {12, "label-status-unknown"};

const Enum::YLeaf MgmtStaticAddrEnum::not_applicable {0, "not-applicable"};
const Enum::YLeaf MgmtStaticAddrEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf MgmtStaticAddrEnum::ipv6 {2, "ipv6"};

const Enum::YLeaf MplsStaticPathRoleEnum::primary {0, "primary"};
const Enum::YLeaf MplsStaticPathRoleEnum::backup {1, "backup"};
const Enum::YLeaf MplsStaticPathRoleEnum::primary_and_backup {2, "primary-and-backup"};


}
}

